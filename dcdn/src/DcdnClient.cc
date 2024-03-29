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

#include <alibabacloud/dcdn/DcdnClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

namespace
{
	const std::string SERVICE_NAME = "dcdn";
}

DcdnClient::DcdnClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DcdnClient::DcdnClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DcdnClient::DcdnClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DcdnClient::~DcdnClient()
{}

DcdnClient::AddDcdnDomainOutcome DcdnClient::addDcdnDomain(const AddDcdnDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddDcdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddDcdnDomainOutcome(AddDcdnDomainResult(outcome.result()));
	else
		return AddDcdnDomainOutcome(outcome.error());
}

void DcdnClient::addDcdnDomainAsync(const AddDcdnDomainRequest& request, const AddDcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDcdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::AddDcdnDomainOutcomeCallable DcdnClient::addDcdnDomainCallable(const AddDcdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDcdnDomainOutcome()>>(
			[this, request]()
			{
			return this->addDcdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::AddDcdnIpaDomainOutcome DcdnClient::addDcdnIpaDomain(const AddDcdnIpaDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddDcdnIpaDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddDcdnIpaDomainOutcome(AddDcdnIpaDomainResult(outcome.result()));
	else
		return AddDcdnIpaDomainOutcome(outcome.error());
}

void DcdnClient::addDcdnIpaDomainAsync(const AddDcdnIpaDomainRequest& request, const AddDcdnIpaDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDcdnIpaDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::AddDcdnIpaDomainOutcomeCallable DcdnClient::addDcdnIpaDomainCallable(const AddDcdnIpaDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDcdnIpaDomainOutcome()>>(
			[this, request]()
			{
			return this->addDcdnIpaDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::BatchAddDcdnDomainOutcome DcdnClient::batchAddDcdnDomain(const BatchAddDcdnDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchAddDcdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchAddDcdnDomainOutcome(BatchAddDcdnDomainResult(outcome.result()));
	else
		return BatchAddDcdnDomainOutcome(outcome.error());
}

void DcdnClient::batchAddDcdnDomainAsync(const BatchAddDcdnDomainRequest& request, const BatchAddDcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchAddDcdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::BatchAddDcdnDomainOutcomeCallable DcdnClient::batchAddDcdnDomainCallable(const BatchAddDcdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchAddDcdnDomainOutcome()>>(
			[this, request]()
			{
			return this->batchAddDcdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::BatchDeleteDcdnDomainConfigsOutcome DcdnClient::batchDeleteDcdnDomainConfigs(const BatchDeleteDcdnDomainConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchDeleteDcdnDomainConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchDeleteDcdnDomainConfigsOutcome(BatchDeleteDcdnDomainConfigsResult(outcome.result()));
	else
		return BatchDeleteDcdnDomainConfigsOutcome(outcome.error());
}

void DcdnClient::batchDeleteDcdnDomainConfigsAsync(const BatchDeleteDcdnDomainConfigsRequest& request, const BatchDeleteDcdnDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchDeleteDcdnDomainConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::BatchDeleteDcdnDomainConfigsOutcomeCallable DcdnClient::batchDeleteDcdnDomainConfigsCallable(const BatchDeleteDcdnDomainConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchDeleteDcdnDomainConfigsOutcome()>>(
			[this, request]()
			{
			return this->batchDeleteDcdnDomainConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::BatchSetDcdnDomainCertificateOutcome DcdnClient::batchSetDcdnDomainCertificate(const BatchSetDcdnDomainCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchSetDcdnDomainCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchSetDcdnDomainCertificateOutcome(BatchSetDcdnDomainCertificateResult(outcome.result()));
	else
		return BatchSetDcdnDomainCertificateOutcome(outcome.error());
}

void DcdnClient::batchSetDcdnDomainCertificateAsync(const BatchSetDcdnDomainCertificateRequest& request, const BatchSetDcdnDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchSetDcdnDomainCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::BatchSetDcdnDomainCertificateOutcomeCallable DcdnClient::batchSetDcdnDomainCertificateCallable(const BatchSetDcdnDomainCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchSetDcdnDomainCertificateOutcome()>>(
			[this, request]()
			{
			return this->batchSetDcdnDomainCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::BatchSetDcdnDomainConfigsOutcome DcdnClient::batchSetDcdnDomainConfigs(const BatchSetDcdnDomainConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchSetDcdnDomainConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchSetDcdnDomainConfigsOutcome(BatchSetDcdnDomainConfigsResult(outcome.result()));
	else
		return BatchSetDcdnDomainConfigsOutcome(outcome.error());
}

void DcdnClient::batchSetDcdnDomainConfigsAsync(const BatchSetDcdnDomainConfigsRequest& request, const BatchSetDcdnDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchSetDcdnDomainConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::BatchSetDcdnDomainConfigsOutcomeCallable DcdnClient::batchSetDcdnDomainConfigsCallable(const BatchSetDcdnDomainConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchSetDcdnDomainConfigsOutcome()>>(
			[this, request]()
			{
			return this->batchSetDcdnDomainConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::BatchSetDcdnIpaDomainConfigsOutcome DcdnClient::batchSetDcdnIpaDomainConfigs(const BatchSetDcdnIpaDomainConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchSetDcdnIpaDomainConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchSetDcdnIpaDomainConfigsOutcome(BatchSetDcdnIpaDomainConfigsResult(outcome.result()));
	else
		return BatchSetDcdnIpaDomainConfigsOutcome(outcome.error());
}

void DcdnClient::batchSetDcdnIpaDomainConfigsAsync(const BatchSetDcdnIpaDomainConfigsRequest& request, const BatchSetDcdnIpaDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchSetDcdnIpaDomainConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::BatchSetDcdnIpaDomainConfigsOutcomeCallable DcdnClient::batchSetDcdnIpaDomainConfigsCallable(const BatchSetDcdnIpaDomainConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchSetDcdnIpaDomainConfigsOutcome()>>(
			[this, request]()
			{
			return this->batchSetDcdnIpaDomainConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::BatchStartDcdnDomainOutcome DcdnClient::batchStartDcdnDomain(const BatchStartDcdnDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchStartDcdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchStartDcdnDomainOutcome(BatchStartDcdnDomainResult(outcome.result()));
	else
		return BatchStartDcdnDomainOutcome(outcome.error());
}

void DcdnClient::batchStartDcdnDomainAsync(const BatchStartDcdnDomainRequest& request, const BatchStartDcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchStartDcdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::BatchStartDcdnDomainOutcomeCallable DcdnClient::batchStartDcdnDomainCallable(const BatchStartDcdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchStartDcdnDomainOutcome()>>(
			[this, request]()
			{
			return this->batchStartDcdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::BatchStopDcdnDomainOutcome DcdnClient::batchStopDcdnDomain(const BatchStopDcdnDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchStopDcdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchStopDcdnDomainOutcome(BatchStopDcdnDomainResult(outcome.result()));
	else
		return BatchStopDcdnDomainOutcome(outcome.error());
}

void DcdnClient::batchStopDcdnDomainAsync(const BatchStopDcdnDomainRequest& request, const BatchStopDcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchStopDcdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::BatchStopDcdnDomainOutcomeCallable DcdnClient::batchStopDcdnDomainCallable(const BatchStopDcdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchStopDcdnDomainOutcome()>>(
			[this, request]()
			{
			return this->batchStopDcdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::CheckDcdnProjectExistOutcome DcdnClient::checkDcdnProjectExist(const CheckDcdnProjectExistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckDcdnProjectExistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckDcdnProjectExistOutcome(CheckDcdnProjectExistResult(outcome.result()));
	else
		return CheckDcdnProjectExistOutcome(outcome.error());
}

void DcdnClient::checkDcdnProjectExistAsync(const CheckDcdnProjectExistRequest& request, const CheckDcdnProjectExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkDcdnProjectExist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::CheckDcdnProjectExistOutcomeCallable DcdnClient::checkDcdnProjectExistCallable(const CheckDcdnProjectExistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckDcdnProjectExistOutcome()>>(
			[this, request]()
			{
			return this->checkDcdnProjectExist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::CommitStagingRoutineCodeOutcome DcdnClient::commitStagingRoutineCode(const CommitStagingRoutineCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CommitStagingRoutineCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CommitStagingRoutineCodeOutcome(CommitStagingRoutineCodeResult(outcome.result()));
	else
		return CommitStagingRoutineCodeOutcome(outcome.error());
}

void DcdnClient::commitStagingRoutineCodeAsync(const CommitStagingRoutineCodeRequest& request, const CommitStagingRoutineCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, commitStagingRoutineCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::CommitStagingRoutineCodeOutcomeCallable DcdnClient::commitStagingRoutineCodeCallable(const CommitStagingRoutineCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CommitStagingRoutineCodeOutcome()>>(
			[this, request]()
			{
			return this->commitStagingRoutineCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::CreateDcdnCertificateSigningRequestOutcome DcdnClient::createDcdnCertificateSigningRequest(const CreateDcdnCertificateSigningRequestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDcdnCertificateSigningRequestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDcdnCertificateSigningRequestOutcome(CreateDcdnCertificateSigningRequestResult(outcome.result()));
	else
		return CreateDcdnCertificateSigningRequestOutcome(outcome.error());
}

void DcdnClient::createDcdnCertificateSigningRequestAsync(const CreateDcdnCertificateSigningRequestRequest& request, const CreateDcdnCertificateSigningRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDcdnCertificateSigningRequest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::CreateDcdnCertificateSigningRequestOutcomeCallable DcdnClient::createDcdnCertificateSigningRequestCallable(const CreateDcdnCertificateSigningRequestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDcdnCertificateSigningRequestOutcome()>>(
			[this, request]()
			{
			return this->createDcdnCertificateSigningRequest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::CreateDcdnDeliverTaskOutcome DcdnClient::createDcdnDeliverTask(const CreateDcdnDeliverTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDcdnDeliverTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDcdnDeliverTaskOutcome(CreateDcdnDeliverTaskResult(outcome.result()));
	else
		return CreateDcdnDeliverTaskOutcome(outcome.error());
}

void DcdnClient::createDcdnDeliverTaskAsync(const CreateDcdnDeliverTaskRequest& request, const CreateDcdnDeliverTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDcdnDeliverTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::CreateDcdnDeliverTaskOutcomeCallable DcdnClient::createDcdnDeliverTaskCallable(const CreateDcdnDeliverTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDcdnDeliverTaskOutcome()>>(
			[this, request]()
			{
			return this->createDcdnDeliverTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::CreateDcdnSLSRealTimeLogDeliveryOutcome DcdnClient::createDcdnSLSRealTimeLogDelivery(const CreateDcdnSLSRealTimeLogDeliveryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDcdnSLSRealTimeLogDeliveryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDcdnSLSRealTimeLogDeliveryOutcome(CreateDcdnSLSRealTimeLogDeliveryResult(outcome.result()));
	else
		return CreateDcdnSLSRealTimeLogDeliveryOutcome(outcome.error());
}

void DcdnClient::createDcdnSLSRealTimeLogDeliveryAsync(const CreateDcdnSLSRealTimeLogDeliveryRequest& request, const CreateDcdnSLSRealTimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDcdnSLSRealTimeLogDelivery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::CreateDcdnSLSRealTimeLogDeliveryOutcomeCallable DcdnClient::createDcdnSLSRealTimeLogDeliveryCallable(const CreateDcdnSLSRealTimeLogDeliveryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDcdnSLSRealTimeLogDeliveryOutcome()>>(
			[this, request]()
			{
			return this->createDcdnSLSRealTimeLogDelivery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::CreateDcdnSubTaskOutcome DcdnClient::createDcdnSubTask(const CreateDcdnSubTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDcdnSubTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDcdnSubTaskOutcome(CreateDcdnSubTaskResult(outcome.result()));
	else
		return CreateDcdnSubTaskOutcome(outcome.error());
}

void DcdnClient::createDcdnSubTaskAsync(const CreateDcdnSubTaskRequest& request, const CreateDcdnSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDcdnSubTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::CreateDcdnSubTaskOutcomeCallable DcdnClient::createDcdnSubTaskCallable(const CreateDcdnSubTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDcdnSubTaskOutcome()>>(
			[this, request]()
			{
			return this->createDcdnSubTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::CreateRoutineOutcome DcdnClient::createRoutine(const CreateRoutineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRoutineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRoutineOutcome(CreateRoutineResult(outcome.result()));
	else
		return CreateRoutineOutcome(outcome.error());
}

void DcdnClient::createRoutineAsync(const CreateRoutineRequest& request, const CreateRoutineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRoutine(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::CreateRoutineOutcomeCallable DcdnClient::createRoutineCallable(const CreateRoutineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRoutineOutcome()>>(
			[this, request]()
			{
			return this->createRoutine(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::CreateSlrAndSlsProjectOutcome DcdnClient::createSlrAndSlsProject(const CreateSlrAndSlsProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSlrAndSlsProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSlrAndSlsProjectOutcome(CreateSlrAndSlsProjectResult(outcome.result()));
	else
		return CreateSlrAndSlsProjectOutcome(outcome.error());
}

void DcdnClient::createSlrAndSlsProjectAsync(const CreateSlrAndSlsProjectRequest& request, const CreateSlrAndSlsProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSlrAndSlsProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::CreateSlrAndSlsProjectOutcomeCallable DcdnClient::createSlrAndSlsProjectCallable(const CreateSlrAndSlsProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSlrAndSlsProjectOutcome()>>(
			[this, request]()
			{
			return this->createSlrAndSlsProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DcdnHttpRequestTestToolOutcome DcdnClient::dcdnHttpRequestTestTool(const DcdnHttpRequestTestToolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DcdnHttpRequestTestToolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DcdnHttpRequestTestToolOutcome(DcdnHttpRequestTestToolResult(outcome.result()));
	else
		return DcdnHttpRequestTestToolOutcome(outcome.error());
}

void DcdnClient::dcdnHttpRequestTestToolAsync(const DcdnHttpRequestTestToolRequest& request, const DcdnHttpRequestTestToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dcdnHttpRequestTestTool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DcdnHttpRequestTestToolOutcomeCallable DcdnClient::dcdnHttpRequestTestToolCallable(const DcdnHttpRequestTestToolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DcdnHttpRequestTestToolOutcome()>>(
			[this, request]()
			{
			return this->dcdnHttpRequestTestTool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DeleteDcdnDeliverTaskOutcome DcdnClient::deleteDcdnDeliverTask(const DeleteDcdnDeliverTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDcdnDeliverTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDcdnDeliverTaskOutcome(DeleteDcdnDeliverTaskResult(outcome.result()));
	else
		return DeleteDcdnDeliverTaskOutcome(outcome.error());
}

void DcdnClient::deleteDcdnDeliverTaskAsync(const DeleteDcdnDeliverTaskRequest& request, const DeleteDcdnDeliverTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDcdnDeliverTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DeleteDcdnDeliverTaskOutcomeCallable DcdnClient::deleteDcdnDeliverTaskCallable(const DeleteDcdnDeliverTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDcdnDeliverTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteDcdnDeliverTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DeleteDcdnDomainOutcome DcdnClient::deleteDcdnDomain(const DeleteDcdnDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDcdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDcdnDomainOutcome(DeleteDcdnDomainResult(outcome.result()));
	else
		return DeleteDcdnDomainOutcome(outcome.error());
}

void DcdnClient::deleteDcdnDomainAsync(const DeleteDcdnDomainRequest& request, const DeleteDcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDcdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DeleteDcdnDomainOutcomeCallable DcdnClient::deleteDcdnDomainCallable(const DeleteDcdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDcdnDomainOutcome()>>(
			[this, request]()
			{
			return this->deleteDcdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DeleteDcdnIpaDomainOutcome DcdnClient::deleteDcdnIpaDomain(const DeleteDcdnIpaDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDcdnIpaDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDcdnIpaDomainOutcome(DeleteDcdnIpaDomainResult(outcome.result()));
	else
		return DeleteDcdnIpaDomainOutcome(outcome.error());
}

void DcdnClient::deleteDcdnIpaDomainAsync(const DeleteDcdnIpaDomainRequest& request, const DeleteDcdnIpaDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDcdnIpaDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DeleteDcdnIpaDomainOutcomeCallable DcdnClient::deleteDcdnIpaDomainCallable(const DeleteDcdnIpaDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDcdnIpaDomainOutcome()>>(
			[this, request]()
			{
			return this->deleteDcdnIpaDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DeleteDcdnIpaSpecificConfigOutcome DcdnClient::deleteDcdnIpaSpecificConfig(const DeleteDcdnIpaSpecificConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDcdnIpaSpecificConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDcdnIpaSpecificConfigOutcome(DeleteDcdnIpaSpecificConfigResult(outcome.result()));
	else
		return DeleteDcdnIpaSpecificConfigOutcome(outcome.error());
}

void DcdnClient::deleteDcdnIpaSpecificConfigAsync(const DeleteDcdnIpaSpecificConfigRequest& request, const DeleteDcdnIpaSpecificConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDcdnIpaSpecificConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DeleteDcdnIpaSpecificConfigOutcomeCallable DcdnClient::deleteDcdnIpaSpecificConfigCallable(const DeleteDcdnIpaSpecificConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDcdnIpaSpecificConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteDcdnIpaSpecificConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DeleteDcdnRealTimeLogProjectOutcome DcdnClient::deleteDcdnRealTimeLogProject(const DeleteDcdnRealTimeLogProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDcdnRealTimeLogProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDcdnRealTimeLogProjectOutcome(DeleteDcdnRealTimeLogProjectResult(outcome.result()));
	else
		return DeleteDcdnRealTimeLogProjectOutcome(outcome.error());
}

void DcdnClient::deleteDcdnRealTimeLogProjectAsync(const DeleteDcdnRealTimeLogProjectRequest& request, const DeleteDcdnRealTimeLogProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDcdnRealTimeLogProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DeleteDcdnRealTimeLogProjectOutcomeCallable DcdnClient::deleteDcdnRealTimeLogProjectCallable(const DeleteDcdnRealTimeLogProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDcdnRealTimeLogProjectOutcome()>>(
			[this, request]()
			{
			return this->deleteDcdnRealTimeLogProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DeleteDcdnSpecificConfigOutcome DcdnClient::deleteDcdnSpecificConfig(const DeleteDcdnSpecificConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDcdnSpecificConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDcdnSpecificConfigOutcome(DeleteDcdnSpecificConfigResult(outcome.result()));
	else
		return DeleteDcdnSpecificConfigOutcome(outcome.error());
}

void DcdnClient::deleteDcdnSpecificConfigAsync(const DeleteDcdnSpecificConfigRequest& request, const DeleteDcdnSpecificConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDcdnSpecificConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DeleteDcdnSpecificConfigOutcomeCallable DcdnClient::deleteDcdnSpecificConfigCallable(const DeleteDcdnSpecificConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDcdnSpecificConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteDcdnSpecificConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DeleteDcdnSpecificStagingConfigOutcome DcdnClient::deleteDcdnSpecificStagingConfig(const DeleteDcdnSpecificStagingConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDcdnSpecificStagingConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDcdnSpecificStagingConfigOutcome(DeleteDcdnSpecificStagingConfigResult(outcome.result()));
	else
		return DeleteDcdnSpecificStagingConfigOutcome(outcome.error());
}

void DcdnClient::deleteDcdnSpecificStagingConfigAsync(const DeleteDcdnSpecificStagingConfigRequest& request, const DeleteDcdnSpecificStagingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDcdnSpecificStagingConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DeleteDcdnSpecificStagingConfigOutcomeCallable DcdnClient::deleteDcdnSpecificStagingConfigCallable(const DeleteDcdnSpecificStagingConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDcdnSpecificStagingConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteDcdnSpecificStagingConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DeleteDcdnSubTaskOutcome DcdnClient::deleteDcdnSubTask(const DeleteDcdnSubTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDcdnSubTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDcdnSubTaskOutcome(DeleteDcdnSubTaskResult(outcome.result()));
	else
		return DeleteDcdnSubTaskOutcome(outcome.error());
}

void DcdnClient::deleteDcdnSubTaskAsync(const DeleteDcdnSubTaskRequest& request, const DeleteDcdnSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDcdnSubTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DeleteDcdnSubTaskOutcomeCallable DcdnClient::deleteDcdnSubTaskCallable(const DeleteDcdnSubTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDcdnSubTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteDcdnSubTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DeleteRoutineOutcome DcdnClient::deleteRoutine(const DeleteRoutineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRoutineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRoutineOutcome(DeleteRoutineResult(outcome.result()));
	else
		return DeleteRoutineOutcome(outcome.error());
}

void DcdnClient::deleteRoutineAsync(const DeleteRoutineRequest& request, const DeleteRoutineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRoutine(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DeleteRoutineOutcomeCallable DcdnClient::deleteRoutineCallable(const DeleteRoutineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRoutineOutcome()>>(
			[this, request]()
			{
			return this->deleteRoutine(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DeleteRoutineCodeRevisionOutcome DcdnClient::deleteRoutineCodeRevision(const DeleteRoutineCodeRevisionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRoutineCodeRevisionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRoutineCodeRevisionOutcome(DeleteRoutineCodeRevisionResult(outcome.result()));
	else
		return DeleteRoutineCodeRevisionOutcome(outcome.error());
}

void DcdnClient::deleteRoutineCodeRevisionAsync(const DeleteRoutineCodeRevisionRequest& request, const DeleteRoutineCodeRevisionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRoutineCodeRevision(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DeleteRoutineCodeRevisionOutcomeCallable DcdnClient::deleteRoutineCodeRevisionCallable(const DeleteRoutineCodeRevisionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRoutineCodeRevisionOutcome()>>(
			[this, request]()
			{
			return this->deleteRoutineCodeRevision(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DeleteRoutineConfEnvsOutcome DcdnClient::deleteRoutineConfEnvs(const DeleteRoutineConfEnvsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRoutineConfEnvsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRoutineConfEnvsOutcome(DeleteRoutineConfEnvsResult(outcome.result()));
	else
		return DeleteRoutineConfEnvsOutcome(outcome.error());
}

void DcdnClient::deleteRoutineConfEnvsAsync(const DeleteRoutineConfEnvsRequest& request, const DeleteRoutineConfEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRoutineConfEnvs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DeleteRoutineConfEnvsOutcomeCallable DcdnClient::deleteRoutineConfEnvsCallable(const DeleteRoutineConfEnvsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRoutineConfEnvsOutcome()>>(
			[this, request]()
			{
			return this->deleteRoutineConfEnvs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnAclFieldsOutcome DcdnClient::describeDcdnAclFields(const DescribeDcdnAclFieldsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnAclFieldsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnAclFieldsOutcome(DescribeDcdnAclFieldsResult(outcome.result()));
	else
		return DescribeDcdnAclFieldsOutcome(outcome.error());
}

void DcdnClient::describeDcdnAclFieldsAsync(const DescribeDcdnAclFieldsRequest& request, const DescribeDcdnAclFieldsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnAclFields(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnAclFieldsOutcomeCallable DcdnClient::describeDcdnAclFieldsCallable(const DescribeDcdnAclFieldsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnAclFieldsOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnAclFields(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnBgpBpsDataOutcome DcdnClient::describeDcdnBgpBpsData(const DescribeDcdnBgpBpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnBgpBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnBgpBpsDataOutcome(DescribeDcdnBgpBpsDataResult(outcome.result()));
	else
		return DescribeDcdnBgpBpsDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnBgpBpsDataAsync(const DescribeDcdnBgpBpsDataRequest& request, const DescribeDcdnBgpBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnBgpBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnBgpBpsDataOutcomeCallable DcdnClient::describeDcdnBgpBpsDataCallable(const DescribeDcdnBgpBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnBgpBpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnBgpBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnBgpTrafficDataOutcome DcdnClient::describeDcdnBgpTrafficData(const DescribeDcdnBgpTrafficDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnBgpTrafficDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnBgpTrafficDataOutcome(DescribeDcdnBgpTrafficDataResult(outcome.result()));
	else
		return DescribeDcdnBgpTrafficDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnBgpTrafficDataAsync(const DescribeDcdnBgpTrafficDataRequest& request, const DescribeDcdnBgpTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnBgpTrafficData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnBgpTrafficDataOutcomeCallable DcdnClient::describeDcdnBgpTrafficDataCallable(const DescribeDcdnBgpTrafficDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnBgpTrafficDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnBgpTrafficData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnBlockedRegionsOutcome DcdnClient::describeDcdnBlockedRegions(const DescribeDcdnBlockedRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnBlockedRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnBlockedRegionsOutcome(DescribeDcdnBlockedRegionsResult(outcome.result()));
	else
		return DescribeDcdnBlockedRegionsOutcome(outcome.error());
}

void DcdnClient::describeDcdnBlockedRegionsAsync(const DescribeDcdnBlockedRegionsRequest& request, const DescribeDcdnBlockedRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnBlockedRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnBlockedRegionsOutcomeCallable DcdnClient::describeDcdnBlockedRegionsCallable(const DescribeDcdnBlockedRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnBlockedRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnBlockedRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnCertificateDetailOutcome DcdnClient::describeDcdnCertificateDetail(const DescribeDcdnCertificateDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnCertificateDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnCertificateDetailOutcome(DescribeDcdnCertificateDetailResult(outcome.result()));
	else
		return DescribeDcdnCertificateDetailOutcome(outcome.error());
}

void DcdnClient::describeDcdnCertificateDetailAsync(const DescribeDcdnCertificateDetailRequest& request, const DescribeDcdnCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnCertificateDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnCertificateDetailOutcomeCallable DcdnClient::describeDcdnCertificateDetailCallable(const DescribeDcdnCertificateDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnCertificateDetailOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnCertificateDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnCertificateListOutcome DcdnClient::describeDcdnCertificateList(const DescribeDcdnCertificateListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnCertificateListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnCertificateListOutcome(DescribeDcdnCertificateListResult(outcome.result()));
	else
		return DescribeDcdnCertificateListOutcome(outcome.error());
}

void DcdnClient::describeDcdnCertificateListAsync(const DescribeDcdnCertificateListRequest& request, const DescribeDcdnCertificateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnCertificateList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnCertificateListOutcomeCallable DcdnClient::describeDcdnCertificateListCallable(const DescribeDcdnCertificateListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnCertificateListOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnCertificateList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnConfigGroupDetailOutcome DcdnClient::describeDcdnConfigGroupDetail(const DescribeDcdnConfigGroupDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnConfigGroupDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnConfigGroupDetailOutcome(DescribeDcdnConfigGroupDetailResult(outcome.result()));
	else
		return DescribeDcdnConfigGroupDetailOutcome(outcome.error());
}

void DcdnClient::describeDcdnConfigGroupDetailAsync(const DescribeDcdnConfigGroupDetailRequest& request, const DescribeDcdnConfigGroupDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnConfigGroupDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnConfigGroupDetailOutcomeCallable DcdnClient::describeDcdnConfigGroupDetailCallable(const DescribeDcdnConfigGroupDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnConfigGroupDetailOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnConfigGroupDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnConfigOfVersionOutcome DcdnClient::describeDcdnConfigOfVersion(const DescribeDcdnConfigOfVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnConfigOfVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnConfigOfVersionOutcome(DescribeDcdnConfigOfVersionResult(outcome.result()));
	else
		return DescribeDcdnConfigOfVersionOutcome(outcome.error());
}

void DcdnClient::describeDcdnConfigOfVersionAsync(const DescribeDcdnConfigOfVersionRequest& request, const DescribeDcdnConfigOfVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnConfigOfVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnConfigOfVersionOutcomeCallable DcdnClient::describeDcdnConfigOfVersionCallable(const DescribeDcdnConfigOfVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnConfigOfVersionOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnConfigOfVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDeletedDomainsOutcome DcdnClient::describeDcdnDeletedDomains(const DescribeDcdnDeletedDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDeletedDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDeletedDomainsOutcome(DescribeDcdnDeletedDomainsResult(outcome.result()));
	else
		return DescribeDcdnDeletedDomainsOutcome(outcome.error());
}

void DcdnClient::describeDcdnDeletedDomainsAsync(const DescribeDcdnDeletedDomainsRequest& request, const DescribeDcdnDeletedDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDeletedDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDeletedDomainsOutcomeCallable DcdnClient::describeDcdnDeletedDomainsCallable(const DescribeDcdnDeletedDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDeletedDomainsOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDeletedDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDeliverListOutcome DcdnClient::describeDcdnDeliverList(const DescribeDcdnDeliverListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDeliverListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDeliverListOutcome(DescribeDcdnDeliverListResult(outcome.result()));
	else
		return DescribeDcdnDeliverListOutcome(outcome.error());
}

void DcdnClient::describeDcdnDeliverListAsync(const DescribeDcdnDeliverListRequest& request, const DescribeDcdnDeliverListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDeliverList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDeliverListOutcomeCallable DcdnClient::describeDcdnDeliverListCallable(const DescribeDcdnDeliverListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDeliverListOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDeliverList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainBpsDataOutcome DcdnClient::describeDcdnDomainBpsData(const DescribeDcdnDomainBpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainBpsDataOutcome(DescribeDcdnDomainBpsDataResult(outcome.result()));
	else
		return DescribeDcdnDomainBpsDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainBpsDataAsync(const DescribeDcdnDomainBpsDataRequest& request, const DescribeDcdnDomainBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainBpsDataOutcomeCallable DcdnClient::describeDcdnDomainBpsDataCallable(const DescribeDcdnDomainBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainBpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainByCertificateOutcome DcdnClient::describeDcdnDomainByCertificate(const DescribeDcdnDomainByCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainByCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainByCertificateOutcome(DescribeDcdnDomainByCertificateResult(outcome.result()));
	else
		return DescribeDcdnDomainByCertificateOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainByCertificateAsync(const DescribeDcdnDomainByCertificateRequest& request, const DescribeDcdnDomainByCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainByCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainByCertificateOutcomeCallable DcdnClient::describeDcdnDomainByCertificateCallable(const DescribeDcdnDomainByCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainByCertificateOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainByCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainCcActivityLogOutcome DcdnClient::describeDcdnDomainCcActivityLog(const DescribeDcdnDomainCcActivityLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainCcActivityLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainCcActivityLogOutcome(DescribeDcdnDomainCcActivityLogResult(outcome.result()));
	else
		return DescribeDcdnDomainCcActivityLogOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainCcActivityLogAsync(const DescribeDcdnDomainCcActivityLogRequest& request, const DescribeDcdnDomainCcActivityLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainCcActivityLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainCcActivityLogOutcomeCallable DcdnClient::describeDcdnDomainCcActivityLogCallable(const DescribeDcdnDomainCcActivityLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainCcActivityLogOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainCcActivityLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainCertificateInfoOutcome DcdnClient::describeDcdnDomainCertificateInfo(const DescribeDcdnDomainCertificateInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainCertificateInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainCertificateInfoOutcome(DescribeDcdnDomainCertificateInfoResult(outcome.result()));
	else
		return DescribeDcdnDomainCertificateInfoOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainCertificateInfoAsync(const DescribeDcdnDomainCertificateInfoRequest& request, const DescribeDcdnDomainCertificateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainCertificateInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainCertificateInfoOutcomeCallable DcdnClient::describeDcdnDomainCertificateInfoCallable(const DescribeDcdnDomainCertificateInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainCertificateInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainCertificateInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainCnameOutcome DcdnClient::describeDcdnDomainCname(const DescribeDcdnDomainCnameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainCnameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainCnameOutcome(DescribeDcdnDomainCnameResult(outcome.result()));
	else
		return DescribeDcdnDomainCnameOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainCnameAsync(const DescribeDcdnDomainCnameRequest& request, const DescribeDcdnDomainCnameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainCname(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainCnameOutcomeCallable DcdnClient::describeDcdnDomainCnameCallable(const DescribeDcdnDomainCnameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainCnameOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainCname(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainConfigsOutcome DcdnClient::describeDcdnDomainConfigs(const DescribeDcdnDomainConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainConfigsOutcome(DescribeDcdnDomainConfigsResult(outcome.result()));
	else
		return DescribeDcdnDomainConfigsOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainConfigsAsync(const DescribeDcdnDomainConfigsRequest& request, const DescribeDcdnDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainConfigsOutcomeCallable DcdnClient::describeDcdnDomainConfigsCallable(const DescribeDcdnDomainConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainConfigsOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainDetailOutcome DcdnClient::describeDcdnDomainDetail(const DescribeDcdnDomainDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainDetailOutcome(DescribeDcdnDomainDetailResult(outcome.result()));
	else
		return DescribeDcdnDomainDetailOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainDetailAsync(const DescribeDcdnDomainDetailRequest& request, const DescribeDcdnDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainDetailOutcomeCallable DcdnClient::describeDcdnDomainDetailCallable(const DescribeDcdnDomainDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainDetailOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainHitRateDataOutcome DcdnClient::describeDcdnDomainHitRateData(const DescribeDcdnDomainHitRateDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainHitRateDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainHitRateDataOutcome(DescribeDcdnDomainHitRateDataResult(outcome.result()));
	else
		return DescribeDcdnDomainHitRateDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainHitRateDataAsync(const DescribeDcdnDomainHitRateDataRequest& request, const DescribeDcdnDomainHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainHitRateData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainHitRateDataOutcomeCallable DcdnClient::describeDcdnDomainHitRateDataCallable(const DescribeDcdnDomainHitRateDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainHitRateDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainHitRateData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainHttpCodeDataOutcome DcdnClient::describeDcdnDomainHttpCodeData(const DescribeDcdnDomainHttpCodeDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainHttpCodeDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainHttpCodeDataOutcome(DescribeDcdnDomainHttpCodeDataResult(outcome.result()));
	else
		return DescribeDcdnDomainHttpCodeDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainHttpCodeDataAsync(const DescribeDcdnDomainHttpCodeDataRequest& request, const DescribeDcdnDomainHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainHttpCodeData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainHttpCodeDataOutcomeCallable DcdnClient::describeDcdnDomainHttpCodeDataCallable(const DescribeDcdnDomainHttpCodeDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainHttpCodeDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainHttpCodeData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainIpaBpsDataOutcome DcdnClient::describeDcdnDomainIpaBpsData(const DescribeDcdnDomainIpaBpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainIpaBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainIpaBpsDataOutcome(DescribeDcdnDomainIpaBpsDataResult(outcome.result()));
	else
		return DescribeDcdnDomainIpaBpsDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainIpaBpsDataAsync(const DescribeDcdnDomainIpaBpsDataRequest& request, const DescribeDcdnDomainIpaBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainIpaBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainIpaBpsDataOutcomeCallable DcdnClient::describeDcdnDomainIpaBpsDataCallable(const DescribeDcdnDomainIpaBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainIpaBpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainIpaBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainIpaTrafficDataOutcome DcdnClient::describeDcdnDomainIpaTrafficData(const DescribeDcdnDomainIpaTrafficDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainIpaTrafficDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainIpaTrafficDataOutcome(DescribeDcdnDomainIpaTrafficDataResult(outcome.result()));
	else
		return DescribeDcdnDomainIpaTrafficDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainIpaTrafficDataAsync(const DescribeDcdnDomainIpaTrafficDataRequest& request, const DescribeDcdnDomainIpaTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainIpaTrafficData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainIpaTrafficDataOutcomeCallable DcdnClient::describeDcdnDomainIpaTrafficDataCallable(const DescribeDcdnDomainIpaTrafficDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainIpaTrafficDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainIpaTrafficData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainIspDataOutcome DcdnClient::describeDcdnDomainIspData(const DescribeDcdnDomainIspDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainIspDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainIspDataOutcome(DescribeDcdnDomainIspDataResult(outcome.result()));
	else
		return DescribeDcdnDomainIspDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainIspDataAsync(const DescribeDcdnDomainIspDataRequest& request, const DescribeDcdnDomainIspDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainIspData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainIspDataOutcomeCallable DcdnClient::describeDcdnDomainIspDataCallable(const DescribeDcdnDomainIspDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainIspDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainIspData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainLogOutcome DcdnClient::describeDcdnDomainLog(const DescribeDcdnDomainLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainLogOutcome(DescribeDcdnDomainLogResult(outcome.result()));
	else
		return DescribeDcdnDomainLogOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainLogAsync(const DescribeDcdnDomainLogRequest& request, const DescribeDcdnDomainLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainLogOutcomeCallable DcdnClient::describeDcdnDomainLogCallable(const DescribeDcdnDomainLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainLogOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainMultiUsageDataOutcome DcdnClient::describeDcdnDomainMultiUsageData(const DescribeDcdnDomainMultiUsageDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainMultiUsageDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainMultiUsageDataOutcome(DescribeDcdnDomainMultiUsageDataResult(outcome.result()));
	else
		return DescribeDcdnDomainMultiUsageDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainMultiUsageDataAsync(const DescribeDcdnDomainMultiUsageDataRequest& request, const DescribeDcdnDomainMultiUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainMultiUsageData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainMultiUsageDataOutcomeCallable DcdnClient::describeDcdnDomainMultiUsageDataCallable(const DescribeDcdnDomainMultiUsageDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainMultiUsageDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainMultiUsageData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainOriginBpsDataOutcome DcdnClient::describeDcdnDomainOriginBpsData(const DescribeDcdnDomainOriginBpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainOriginBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainOriginBpsDataOutcome(DescribeDcdnDomainOriginBpsDataResult(outcome.result()));
	else
		return DescribeDcdnDomainOriginBpsDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainOriginBpsDataAsync(const DescribeDcdnDomainOriginBpsDataRequest& request, const DescribeDcdnDomainOriginBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainOriginBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainOriginBpsDataOutcomeCallable DcdnClient::describeDcdnDomainOriginBpsDataCallable(const DescribeDcdnDomainOriginBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainOriginBpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainOriginBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainOriginTrafficDataOutcome DcdnClient::describeDcdnDomainOriginTrafficData(const DescribeDcdnDomainOriginTrafficDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainOriginTrafficDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainOriginTrafficDataOutcome(DescribeDcdnDomainOriginTrafficDataResult(outcome.result()));
	else
		return DescribeDcdnDomainOriginTrafficDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainOriginTrafficDataAsync(const DescribeDcdnDomainOriginTrafficDataRequest& request, const DescribeDcdnDomainOriginTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainOriginTrafficData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainOriginTrafficDataOutcomeCallable DcdnClient::describeDcdnDomainOriginTrafficDataCallable(const DescribeDcdnDomainOriginTrafficDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainOriginTrafficDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainOriginTrafficData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainPropertyOutcome DcdnClient::describeDcdnDomainProperty(const DescribeDcdnDomainPropertyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainPropertyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainPropertyOutcome(DescribeDcdnDomainPropertyResult(outcome.result()));
	else
		return DescribeDcdnDomainPropertyOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainPropertyAsync(const DescribeDcdnDomainPropertyRequest& request, const DescribeDcdnDomainPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainProperty(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainPropertyOutcomeCallable DcdnClient::describeDcdnDomainPropertyCallable(const DescribeDcdnDomainPropertyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainPropertyOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainProperty(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainPvDataOutcome DcdnClient::describeDcdnDomainPvData(const DescribeDcdnDomainPvDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainPvDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainPvDataOutcome(DescribeDcdnDomainPvDataResult(outcome.result()));
	else
		return DescribeDcdnDomainPvDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainPvDataAsync(const DescribeDcdnDomainPvDataRequest& request, const DescribeDcdnDomainPvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainPvData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainPvDataOutcomeCallable DcdnClient::describeDcdnDomainPvDataCallable(const DescribeDcdnDomainPvDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainPvDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainPvData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainQpsDataOutcome DcdnClient::describeDcdnDomainQpsData(const DescribeDcdnDomainQpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainQpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainQpsDataOutcome(DescribeDcdnDomainQpsDataResult(outcome.result()));
	else
		return DescribeDcdnDomainQpsDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainQpsDataAsync(const DescribeDcdnDomainQpsDataRequest& request, const DescribeDcdnDomainQpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainQpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainQpsDataOutcomeCallable DcdnClient::describeDcdnDomainQpsDataCallable(const DescribeDcdnDomainQpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainQpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainQpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainRealTimeBpsDataOutcome DcdnClient::describeDcdnDomainRealTimeBpsData(const DescribeDcdnDomainRealTimeBpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainRealTimeBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainRealTimeBpsDataOutcome(DescribeDcdnDomainRealTimeBpsDataResult(outcome.result()));
	else
		return DescribeDcdnDomainRealTimeBpsDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainRealTimeBpsDataAsync(const DescribeDcdnDomainRealTimeBpsDataRequest& request, const DescribeDcdnDomainRealTimeBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainRealTimeBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainRealTimeBpsDataOutcomeCallable DcdnClient::describeDcdnDomainRealTimeBpsDataCallable(const DescribeDcdnDomainRealTimeBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainRealTimeBpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainRealTimeBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainRealTimeByteHitRateDataOutcome DcdnClient::describeDcdnDomainRealTimeByteHitRateData(const DescribeDcdnDomainRealTimeByteHitRateDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainRealTimeByteHitRateDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainRealTimeByteHitRateDataOutcome(DescribeDcdnDomainRealTimeByteHitRateDataResult(outcome.result()));
	else
		return DescribeDcdnDomainRealTimeByteHitRateDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainRealTimeByteHitRateDataAsync(const DescribeDcdnDomainRealTimeByteHitRateDataRequest& request, const DescribeDcdnDomainRealTimeByteHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainRealTimeByteHitRateData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainRealTimeByteHitRateDataOutcomeCallable DcdnClient::describeDcdnDomainRealTimeByteHitRateDataCallable(const DescribeDcdnDomainRealTimeByteHitRateDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainRealTimeByteHitRateDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainRealTimeByteHitRateData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainRealTimeDetailDataOutcome DcdnClient::describeDcdnDomainRealTimeDetailData(const DescribeDcdnDomainRealTimeDetailDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainRealTimeDetailDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainRealTimeDetailDataOutcome(DescribeDcdnDomainRealTimeDetailDataResult(outcome.result()));
	else
		return DescribeDcdnDomainRealTimeDetailDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainRealTimeDetailDataAsync(const DescribeDcdnDomainRealTimeDetailDataRequest& request, const DescribeDcdnDomainRealTimeDetailDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainRealTimeDetailData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainRealTimeDetailDataOutcomeCallable DcdnClient::describeDcdnDomainRealTimeDetailDataCallable(const DescribeDcdnDomainRealTimeDetailDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainRealTimeDetailDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainRealTimeDetailData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainRealTimeHttpCodeDataOutcome DcdnClient::describeDcdnDomainRealTimeHttpCodeData(const DescribeDcdnDomainRealTimeHttpCodeDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainRealTimeHttpCodeDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainRealTimeHttpCodeDataOutcome(DescribeDcdnDomainRealTimeHttpCodeDataResult(outcome.result()));
	else
		return DescribeDcdnDomainRealTimeHttpCodeDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainRealTimeHttpCodeDataAsync(const DescribeDcdnDomainRealTimeHttpCodeDataRequest& request, const DescribeDcdnDomainRealTimeHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainRealTimeHttpCodeData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainRealTimeHttpCodeDataOutcomeCallable DcdnClient::describeDcdnDomainRealTimeHttpCodeDataCallable(const DescribeDcdnDomainRealTimeHttpCodeDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainRealTimeHttpCodeDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainRealTimeHttpCodeData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainRealTimeQpsDataOutcome DcdnClient::describeDcdnDomainRealTimeQpsData(const DescribeDcdnDomainRealTimeQpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainRealTimeQpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainRealTimeQpsDataOutcome(DescribeDcdnDomainRealTimeQpsDataResult(outcome.result()));
	else
		return DescribeDcdnDomainRealTimeQpsDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainRealTimeQpsDataAsync(const DescribeDcdnDomainRealTimeQpsDataRequest& request, const DescribeDcdnDomainRealTimeQpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainRealTimeQpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainRealTimeQpsDataOutcomeCallable DcdnClient::describeDcdnDomainRealTimeQpsDataCallable(const DescribeDcdnDomainRealTimeQpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainRealTimeQpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainRealTimeQpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainRealTimeReqHitRateDataOutcome DcdnClient::describeDcdnDomainRealTimeReqHitRateData(const DescribeDcdnDomainRealTimeReqHitRateDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainRealTimeReqHitRateDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainRealTimeReqHitRateDataOutcome(DescribeDcdnDomainRealTimeReqHitRateDataResult(outcome.result()));
	else
		return DescribeDcdnDomainRealTimeReqHitRateDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainRealTimeReqHitRateDataAsync(const DescribeDcdnDomainRealTimeReqHitRateDataRequest& request, const DescribeDcdnDomainRealTimeReqHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainRealTimeReqHitRateData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainRealTimeReqHitRateDataOutcomeCallable DcdnClient::describeDcdnDomainRealTimeReqHitRateDataCallable(const DescribeDcdnDomainRealTimeReqHitRateDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainRealTimeReqHitRateDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainRealTimeReqHitRateData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainRealTimeSrcBpsDataOutcome DcdnClient::describeDcdnDomainRealTimeSrcBpsData(const DescribeDcdnDomainRealTimeSrcBpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainRealTimeSrcBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainRealTimeSrcBpsDataOutcome(DescribeDcdnDomainRealTimeSrcBpsDataResult(outcome.result()));
	else
		return DescribeDcdnDomainRealTimeSrcBpsDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainRealTimeSrcBpsDataAsync(const DescribeDcdnDomainRealTimeSrcBpsDataRequest& request, const DescribeDcdnDomainRealTimeSrcBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainRealTimeSrcBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainRealTimeSrcBpsDataOutcomeCallable DcdnClient::describeDcdnDomainRealTimeSrcBpsDataCallable(const DescribeDcdnDomainRealTimeSrcBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainRealTimeSrcBpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainRealTimeSrcBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainRealTimeSrcHttpCodeDataOutcome DcdnClient::describeDcdnDomainRealTimeSrcHttpCodeData(const DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainRealTimeSrcHttpCodeDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainRealTimeSrcHttpCodeDataOutcome(DescribeDcdnDomainRealTimeSrcHttpCodeDataResult(outcome.result()));
	else
		return DescribeDcdnDomainRealTimeSrcHttpCodeDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainRealTimeSrcHttpCodeDataAsync(const DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest& request, const DescribeDcdnDomainRealTimeSrcHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainRealTimeSrcHttpCodeData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainRealTimeSrcHttpCodeDataOutcomeCallable DcdnClient::describeDcdnDomainRealTimeSrcHttpCodeDataCallable(const DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainRealTimeSrcHttpCodeDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainRealTimeSrcHttpCodeData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainRealTimeSrcTrafficDataOutcome DcdnClient::describeDcdnDomainRealTimeSrcTrafficData(const DescribeDcdnDomainRealTimeSrcTrafficDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainRealTimeSrcTrafficDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainRealTimeSrcTrafficDataOutcome(DescribeDcdnDomainRealTimeSrcTrafficDataResult(outcome.result()));
	else
		return DescribeDcdnDomainRealTimeSrcTrafficDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainRealTimeSrcTrafficDataAsync(const DescribeDcdnDomainRealTimeSrcTrafficDataRequest& request, const DescribeDcdnDomainRealTimeSrcTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainRealTimeSrcTrafficData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainRealTimeSrcTrafficDataOutcomeCallable DcdnClient::describeDcdnDomainRealTimeSrcTrafficDataCallable(const DescribeDcdnDomainRealTimeSrcTrafficDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainRealTimeSrcTrafficDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainRealTimeSrcTrafficData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainRealTimeTrafficDataOutcome DcdnClient::describeDcdnDomainRealTimeTrafficData(const DescribeDcdnDomainRealTimeTrafficDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainRealTimeTrafficDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainRealTimeTrafficDataOutcome(DescribeDcdnDomainRealTimeTrafficDataResult(outcome.result()));
	else
		return DescribeDcdnDomainRealTimeTrafficDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainRealTimeTrafficDataAsync(const DescribeDcdnDomainRealTimeTrafficDataRequest& request, const DescribeDcdnDomainRealTimeTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainRealTimeTrafficData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainRealTimeTrafficDataOutcomeCallable DcdnClient::describeDcdnDomainRealTimeTrafficDataCallable(const DescribeDcdnDomainRealTimeTrafficDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainRealTimeTrafficDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainRealTimeTrafficData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainRegionDataOutcome DcdnClient::describeDcdnDomainRegionData(const DescribeDcdnDomainRegionDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainRegionDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainRegionDataOutcome(DescribeDcdnDomainRegionDataResult(outcome.result()));
	else
		return DescribeDcdnDomainRegionDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainRegionDataAsync(const DescribeDcdnDomainRegionDataRequest& request, const DescribeDcdnDomainRegionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainRegionData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainRegionDataOutcomeCallable DcdnClient::describeDcdnDomainRegionDataCallable(const DescribeDcdnDomainRegionDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainRegionDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainRegionData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainStagingConfigOutcome DcdnClient::describeDcdnDomainStagingConfig(const DescribeDcdnDomainStagingConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainStagingConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainStagingConfigOutcome(DescribeDcdnDomainStagingConfigResult(outcome.result()));
	else
		return DescribeDcdnDomainStagingConfigOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainStagingConfigAsync(const DescribeDcdnDomainStagingConfigRequest& request, const DescribeDcdnDomainStagingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainStagingConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainStagingConfigOutcomeCallable DcdnClient::describeDcdnDomainStagingConfigCallable(const DescribeDcdnDomainStagingConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainStagingConfigOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainStagingConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainTopReferVisitOutcome DcdnClient::describeDcdnDomainTopReferVisit(const DescribeDcdnDomainTopReferVisitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainTopReferVisitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainTopReferVisitOutcome(DescribeDcdnDomainTopReferVisitResult(outcome.result()));
	else
		return DescribeDcdnDomainTopReferVisitOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainTopReferVisitAsync(const DescribeDcdnDomainTopReferVisitRequest& request, const DescribeDcdnDomainTopReferVisitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainTopReferVisit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainTopReferVisitOutcomeCallable DcdnClient::describeDcdnDomainTopReferVisitCallable(const DescribeDcdnDomainTopReferVisitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainTopReferVisitOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainTopReferVisit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainTopUrlVisitOutcome DcdnClient::describeDcdnDomainTopUrlVisit(const DescribeDcdnDomainTopUrlVisitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainTopUrlVisitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainTopUrlVisitOutcome(DescribeDcdnDomainTopUrlVisitResult(outcome.result()));
	else
		return DescribeDcdnDomainTopUrlVisitOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainTopUrlVisitAsync(const DescribeDcdnDomainTopUrlVisitRequest& request, const DescribeDcdnDomainTopUrlVisitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainTopUrlVisit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainTopUrlVisitOutcomeCallable DcdnClient::describeDcdnDomainTopUrlVisitCallable(const DescribeDcdnDomainTopUrlVisitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainTopUrlVisitOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainTopUrlVisit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainTrafficDataOutcome DcdnClient::describeDcdnDomainTrafficData(const DescribeDcdnDomainTrafficDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainTrafficDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainTrafficDataOutcome(DescribeDcdnDomainTrafficDataResult(outcome.result()));
	else
		return DescribeDcdnDomainTrafficDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainTrafficDataAsync(const DescribeDcdnDomainTrafficDataRequest& request, const DescribeDcdnDomainTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainTrafficData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainTrafficDataOutcomeCallable DcdnClient::describeDcdnDomainTrafficDataCallable(const DescribeDcdnDomainTrafficDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainTrafficDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainTrafficData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainUsageDataOutcome DcdnClient::describeDcdnDomainUsageData(const DescribeDcdnDomainUsageDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainUsageDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainUsageDataOutcome(DescribeDcdnDomainUsageDataResult(outcome.result()));
	else
		return DescribeDcdnDomainUsageDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainUsageDataAsync(const DescribeDcdnDomainUsageDataRequest& request, const DescribeDcdnDomainUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainUsageData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainUsageDataOutcomeCallable DcdnClient::describeDcdnDomainUsageDataCallable(const DescribeDcdnDomainUsageDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainUsageDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainUsageData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainUvDataOutcome DcdnClient::describeDcdnDomainUvData(const DescribeDcdnDomainUvDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainUvDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainUvDataOutcome(DescribeDcdnDomainUvDataResult(outcome.result()));
	else
		return DescribeDcdnDomainUvDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainUvDataAsync(const DescribeDcdnDomainUvDataRequest& request, const DescribeDcdnDomainUvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainUvData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainUvDataOutcomeCallable DcdnClient::describeDcdnDomainUvDataCallable(const DescribeDcdnDomainUvDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainUvDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainUvData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainWebsocketBpsDataOutcome DcdnClient::describeDcdnDomainWebsocketBpsData(const DescribeDcdnDomainWebsocketBpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainWebsocketBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainWebsocketBpsDataOutcome(DescribeDcdnDomainWebsocketBpsDataResult(outcome.result()));
	else
		return DescribeDcdnDomainWebsocketBpsDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainWebsocketBpsDataAsync(const DescribeDcdnDomainWebsocketBpsDataRequest& request, const DescribeDcdnDomainWebsocketBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainWebsocketBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainWebsocketBpsDataOutcomeCallable DcdnClient::describeDcdnDomainWebsocketBpsDataCallable(const DescribeDcdnDomainWebsocketBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainWebsocketBpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainWebsocketBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainWebsocketHttpCodeDataOutcome DcdnClient::describeDcdnDomainWebsocketHttpCodeData(const DescribeDcdnDomainWebsocketHttpCodeDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainWebsocketHttpCodeDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainWebsocketHttpCodeDataOutcome(DescribeDcdnDomainWebsocketHttpCodeDataResult(outcome.result()));
	else
		return DescribeDcdnDomainWebsocketHttpCodeDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainWebsocketHttpCodeDataAsync(const DescribeDcdnDomainWebsocketHttpCodeDataRequest& request, const DescribeDcdnDomainWebsocketHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainWebsocketHttpCodeData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainWebsocketHttpCodeDataOutcomeCallable DcdnClient::describeDcdnDomainWebsocketHttpCodeDataCallable(const DescribeDcdnDomainWebsocketHttpCodeDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainWebsocketHttpCodeDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainWebsocketHttpCodeData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDomainWebsocketTrafficDataOutcome DcdnClient::describeDcdnDomainWebsocketTrafficData(const DescribeDcdnDomainWebsocketTrafficDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainWebsocketTrafficDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainWebsocketTrafficDataOutcome(DescribeDcdnDomainWebsocketTrafficDataResult(outcome.result()));
	else
		return DescribeDcdnDomainWebsocketTrafficDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainWebsocketTrafficDataAsync(const DescribeDcdnDomainWebsocketTrafficDataRequest& request, const DescribeDcdnDomainWebsocketTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainWebsocketTrafficData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainWebsocketTrafficDataOutcomeCallable DcdnClient::describeDcdnDomainWebsocketTrafficDataCallable(const DescribeDcdnDomainWebsocketTrafficDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainWebsocketTrafficDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainWebsocketTrafficData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnEsExceptionDataOutcome DcdnClient::describeDcdnEsExceptionData(const DescribeDcdnEsExceptionDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnEsExceptionDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnEsExceptionDataOutcome(DescribeDcdnEsExceptionDataResult(outcome.result()));
	else
		return DescribeDcdnEsExceptionDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnEsExceptionDataAsync(const DescribeDcdnEsExceptionDataRequest& request, const DescribeDcdnEsExceptionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnEsExceptionData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnEsExceptionDataOutcomeCallable DcdnClient::describeDcdnEsExceptionDataCallable(const DescribeDcdnEsExceptionDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnEsExceptionDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnEsExceptionData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnEsExecuteDataOutcome DcdnClient::describeDcdnEsExecuteData(const DescribeDcdnEsExecuteDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnEsExecuteDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnEsExecuteDataOutcome(DescribeDcdnEsExecuteDataResult(outcome.result()));
	else
		return DescribeDcdnEsExecuteDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnEsExecuteDataAsync(const DescribeDcdnEsExecuteDataRequest& request, const DescribeDcdnEsExecuteDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnEsExecuteData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnEsExecuteDataOutcomeCallable DcdnClient::describeDcdnEsExecuteDataCallable(const DescribeDcdnEsExecuteDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnEsExecuteDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnEsExecuteData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnHttpsDomainListOutcome DcdnClient::describeDcdnHttpsDomainList(const DescribeDcdnHttpsDomainListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnHttpsDomainListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnHttpsDomainListOutcome(DescribeDcdnHttpsDomainListResult(outcome.result()));
	else
		return DescribeDcdnHttpsDomainListOutcome(outcome.error());
}

void DcdnClient::describeDcdnHttpsDomainListAsync(const DescribeDcdnHttpsDomainListRequest& request, const DescribeDcdnHttpsDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnHttpsDomainList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnHttpsDomainListOutcomeCallable DcdnClient::describeDcdnHttpsDomainListCallable(const DescribeDcdnHttpsDomainListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnHttpsDomainListOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnHttpsDomainList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnIpInfoOutcome DcdnClient::describeDcdnIpInfo(const DescribeDcdnIpInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnIpInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnIpInfoOutcome(DescribeDcdnIpInfoResult(outcome.result()));
	else
		return DescribeDcdnIpInfoOutcome(outcome.error());
}

void DcdnClient::describeDcdnIpInfoAsync(const DescribeDcdnIpInfoRequest& request, const DescribeDcdnIpInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnIpInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnIpInfoOutcomeCallable DcdnClient::describeDcdnIpInfoCallable(const DescribeDcdnIpInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnIpInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnIpInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnIpaDomainConfigsOutcome DcdnClient::describeDcdnIpaDomainConfigs(const DescribeDcdnIpaDomainConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnIpaDomainConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnIpaDomainConfigsOutcome(DescribeDcdnIpaDomainConfigsResult(outcome.result()));
	else
		return DescribeDcdnIpaDomainConfigsOutcome(outcome.error());
}

void DcdnClient::describeDcdnIpaDomainConfigsAsync(const DescribeDcdnIpaDomainConfigsRequest& request, const DescribeDcdnIpaDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnIpaDomainConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnIpaDomainConfigsOutcomeCallable DcdnClient::describeDcdnIpaDomainConfigsCallable(const DescribeDcdnIpaDomainConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnIpaDomainConfigsOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnIpaDomainConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnIpaDomainDetailOutcome DcdnClient::describeDcdnIpaDomainDetail(const DescribeDcdnIpaDomainDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnIpaDomainDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnIpaDomainDetailOutcome(DescribeDcdnIpaDomainDetailResult(outcome.result()));
	else
		return DescribeDcdnIpaDomainDetailOutcome(outcome.error());
}

void DcdnClient::describeDcdnIpaDomainDetailAsync(const DescribeDcdnIpaDomainDetailRequest& request, const DescribeDcdnIpaDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnIpaDomainDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnIpaDomainDetailOutcomeCallable DcdnClient::describeDcdnIpaDomainDetailCallable(const DescribeDcdnIpaDomainDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnIpaDomainDetailOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnIpaDomainDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnIpaServiceOutcome DcdnClient::describeDcdnIpaService(const DescribeDcdnIpaServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnIpaServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnIpaServiceOutcome(DescribeDcdnIpaServiceResult(outcome.result()));
	else
		return DescribeDcdnIpaServiceOutcome(outcome.error());
}

void DcdnClient::describeDcdnIpaServiceAsync(const DescribeDcdnIpaServiceRequest& request, const DescribeDcdnIpaServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnIpaService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnIpaServiceOutcomeCallable DcdnClient::describeDcdnIpaServiceCallable(const DescribeDcdnIpaServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnIpaServiceOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnIpaService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnIpaUserDomainsOutcome DcdnClient::describeDcdnIpaUserDomains(const DescribeDcdnIpaUserDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnIpaUserDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnIpaUserDomainsOutcome(DescribeDcdnIpaUserDomainsResult(outcome.result()));
	else
		return DescribeDcdnIpaUserDomainsOutcome(outcome.error());
}

void DcdnClient::describeDcdnIpaUserDomainsAsync(const DescribeDcdnIpaUserDomainsRequest& request, const DescribeDcdnIpaUserDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnIpaUserDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnIpaUserDomainsOutcomeCallable DcdnClient::describeDcdnIpaUserDomainsCallable(const DescribeDcdnIpaUserDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnIpaUserDomainsOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnIpaUserDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnRealTimeDeliveryFieldOutcome DcdnClient::describeDcdnRealTimeDeliveryField(const DescribeDcdnRealTimeDeliveryFieldRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnRealTimeDeliveryFieldOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnRealTimeDeliveryFieldOutcome(DescribeDcdnRealTimeDeliveryFieldResult(outcome.result()));
	else
		return DescribeDcdnRealTimeDeliveryFieldOutcome(outcome.error());
}

void DcdnClient::describeDcdnRealTimeDeliveryFieldAsync(const DescribeDcdnRealTimeDeliveryFieldRequest& request, const DescribeDcdnRealTimeDeliveryFieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnRealTimeDeliveryField(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnRealTimeDeliveryFieldOutcomeCallable DcdnClient::describeDcdnRealTimeDeliveryFieldCallable(const DescribeDcdnRealTimeDeliveryFieldRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnRealTimeDeliveryFieldOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnRealTimeDeliveryField(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnRefreshQuotaOutcome DcdnClient::describeDcdnRefreshQuota(const DescribeDcdnRefreshQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnRefreshQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnRefreshQuotaOutcome(DescribeDcdnRefreshQuotaResult(outcome.result()));
	else
		return DescribeDcdnRefreshQuotaOutcome(outcome.error());
}

void DcdnClient::describeDcdnRefreshQuotaAsync(const DescribeDcdnRefreshQuotaRequest& request, const DescribeDcdnRefreshQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnRefreshQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnRefreshQuotaOutcomeCallable DcdnClient::describeDcdnRefreshQuotaCallable(const DescribeDcdnRefreshQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnRefreshQuotaOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnRefreshQuota(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnRefreshTaskByIdOutcome DcdnClient::describeDcdnRefreshTaskById(const DescribeDcdnRefreshTaskByIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnRefreshTaskByIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnRefreshTaskByIdOutcome(DescribeDcdnRefreshTaskByIdResult(outcome.result()));
	else
		return DescribeDcdnRefreshTaskByIdOutcome(outcome.error());
}

void DcdnClient::describeDcdnRefreshTaskByIdAsync(const DescribeDcdnRefreshTaskByIdRequest& request, const DescribeDcdnRefreshTaskByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnRefreshTaskById(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnRefreshTaskByIdOutcomeCallable DcdnClient::describeDcdnRefreshTaskByIdCallable(const DescribeDcdnRefreshTaskByIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnRefreshTaskByIdOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnRefreshTaskById(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnRefreshTasksOutcome DcdnClient::describeDcdnRefreshTasks(const DescribeDcdnRefreshTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnRefreshTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnRefreshTasksOutcome(DescribeDcdnRefreshTasksResult(outcome.result()));
	else
		return DescribeDcdnRefreshTasksOutcome(outcome.error());
}

void DcdnClient::describeDcdnRefreshTasksAsync(const DescribeDcdnRefreshTasksRequest& request, const DescribeDcdnRefreshTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnRefreshTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnRefreshTasksOutcomeCallable DcdnClient::describeDcdnRefreshTasksCallable(const DescribeDcdnRefreshTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnRefreshTasksOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnRefreshTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnRegionAndIspOutcome DcdnClient::describeDcdnRegionAndIsp(const DescribeDcdnRegionAndIspRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnRegionAndIspOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnRegionAndIspOutcome(DescribeDcdnRegionAndIspResult(outcome.result()));
	else
		return DescribeDcdnRegionAndIspOutcome(outcome.error());
}

void DcdnClient::describeDcdnRegionAndIspAsync(const DescribeDcdnRegionAndIspRequest& request, const DescribeDcdnRegionAndIspAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnRegionAndIsp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnRegionAndIspOutcomeCallable DcdnClient::describeDcdnRegionAndIspCallable(const DescribeDcdnRegionAndIspRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnRegionAndIspOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnRegionAndIsp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnReportOutcome DcdnClient::describeDcdnReport(const DescribeDcdnReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnReportOutcome(DescribeDcdnReportResult(outcome.result()));
	else
		return DescribeDcdnReportOutcome(outcome.error());
}

void DcdnClient::describeDcdnReportAsync(const DescribeDcdnReportRequest& request, const DescribeDcdnReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnReportOutcomeCallable DcdnClient::describeDcdnReportCallable(const DescribeDcdnReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnReportOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnReportListOutcome DcdnClient::describeDcdnReportList(const DescribeDcdnReportListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnReportListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnReportListOutcome(DescribeDcdnReportListResult(outcome.result()));
	else
		return DescribeDcdnReportListOutcome(outcome.error());
}

void DcdnClient::describeDcdnReportListAsync(const DescribeDcdnReportListRequest& request, const DescribeDcdnReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnReportList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnReportListOutcomeCallable DcdnClient::describeDcdnReportListCallable(const DescribeDcdnReportListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnReportListOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnReportList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnSLSRealtimeLogDeliveryOutcome DcdnClient::describeDcdnSLSRealtimeLogDelivery(const DescribeDcdnSLSRealtimeLogDeliveryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnSLSRealtimeLogDeliveryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnSLSRealtimeLogDeliveryOutcome(DescribeDcdnSLSRealtimeLogDeliveryResult(outcome.result()));
	else
		return DescribeDcdnSLSRealtimeLogDeliveryOutcome(outcome.error());
}

void DcdnClient::describeDcdnSLSRealtimeLogDeliveryAsync(const DescribeDcdnSLSRealtimeLogDeliveryRequest& request, const DescribeDcdnSLSRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnSLSRealtimeLogDelivery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnSLSRealtimeLogDeliveryOutcomeCallable DcdnClient::describeDcdnSLSRealtimeLogDeliveryCallable(const DescribeDcdnSLSRealtimeLogDeliveryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnSLSRealtimeLogDeliveryOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnSLSRealtimeLogDelivery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnSMCertificateDetailOutcome DcdnClient::describeDcdnSMCertificateDetail(const DescribeDcdnSMCertificateDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnSMCertificateDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnSMCertificateDetailOutcome(DescribeDcdnSMCertificateDetailResult(outcome.result()));
	else
		return DescribeDcdnSMCertificateDetailOutcome(outcome.error());
}

void DcdnClient::describeDcdnSMCertificateDetailAsync(const DescribeDcdnSMCertificateDetailRequest& request, const DescribeDcdnSMCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnSMCertificateDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnSMCertificateDetailOutcomeCallable DcdnClient::describeDcdnSMCertificateDetailCallable(const DescribeDcdnSMCertificateDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnSMCertificateDetailOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnSMCertificateDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnSMCertificateListOutcome DcdnClient::describeDcdnSMCertificateList(const DescribeDcdnSMCertificateListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnSMCertificateListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnSMCertificateListOutcome(DescribeDcdnSMCertificateListResult(outcome.result()));
	else
		return DescribeDcdnSMCertificateListOutcome(outcome.error());
}

void DcdnClient::describeDcdnSMCertificateListAsync(const DescribeDcdnSMCertificateListRequest& request, const DescribeDcdnSMCertificateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnSMCertificateList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnSMCertificateListOutcomeCallable DcdnClient::describeDcdnSMCertificateListCallable(const DescribeDcdnSMCertificateListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnSMCertificateListOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnSMCertificateList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnSecFuncInfoOutcome DcdnClient::describeDcdnSecFuncInfo(const DescribeDcdnSecFuncInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnSecFuncInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnSecFuncInfoOutcome(DescribeDcdnSecFuncInfoResult(outcome.result()));
	else
		return DescribeDcdnSecFuncInfoOutcome(outcome.error());
}

void DcdnClient::describeDcdnSecFuncInfoAsync(const DescribeDcdnSecFuncInfoRequest& request, const DescribeDcdnSecFuncInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnSecFuncInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnSecFuncInfoOutcomeCallable DcdnClient::describeDcdnSecFuncInfoCallable(const DescribeDcdnSecFuncInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnSecFuncInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnSecFuncInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnSecSpecInfoOutcome DcdnClient::describeDcdnSecSpecInfo(const DescribeDcdnSecSpecInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnSecSpecInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnSecSpecInfoOutcome(DescribeDcdnSecSpecInfoResult(outcome.result()));
	else
		return DescribeDcdnSecSpecInfoOutcome(outcome.error());
}

void DcdnClient::describeDcdnSecSpecInfoAsync(const DescribeDcdnSecSpecInfoRequest& request, const DescribeDcdnSecSpecInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnSecSpecInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnSecSpecInfoOutcomeCallable DcdnClient::describeDcdnSecSpecInfoCallable(const DescribeDcdnSecSpecInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnSecSpecInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnSecSpecInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnServiceOutcome DcdnClient::describeDcdnService(const DescribeDcdnServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnServiceOutcome(DescribeDcdnServiceResult(outcome.result()));
	else
		return DescribeDcdnServiceOutcome(outcome.error());
}

void DcdnClient::describeDcdnServiceAsync(const DescribeDcdnServiceRequest& request, const DescribeDcdnServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnServiceOutcomeCallable DcdnClient::describeDcdnServiceCallable(const DescribeDcdnServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnServiceOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnStagingIpOutcome DcdnClient::describeDcdnStagingIp(const DescribeDcdnStagingIpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnStagingIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnStagingIpOutcome(DescribeDcdnStagingIpResult(outcome.result()));
	else
		return DescribeDcdnStagingIpOutcome(outcome.error());
}

void DcdnClient::describeDcdnStagingIpAsync(const DescribeDcdnStagingIpRequest& request, const DescribeDcdnStagingIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnStagingIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnStagingIpOutcomeCallable DcdnClient::describeDcdnStagingIpCallable(const DescribeDcdnStagingIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnStagingIpOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnStagingIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnSubListOutcome DcdnClient::describeDcdnSubList(const DescribeDcdnSubListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnSubListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnSubListOutcome(DescribeDcdnSubListResult(outcome.result()));
	else
		return DescribeDcdnSubListOutcome(outcome.error());
}

void DcdnClient::describeDcdnSubListAsync(const DescribeDcdnSubListRequest& request, const DescribeDcdnSubListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnSubList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnSubListOutcomeCallable DcdnClient::describeDcdnSubListCallable(const DescribeDcdnSubListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnSubListOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnSubList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnTagResourcesOutcome DcdnClient::describeDcdnTagResources(const DescribeDcdnTagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnTagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnTagResourcesOutcome(DescribeDcdnTagResourcesResult(outcome.result()));
	else
		return DescribeDcdnTagResourcesOutcome(outcome.error());
}

void DcdnClient::describeDcdnTagResourcesAsync(const DescribeDcdnTagResourcesRequest& request, const DescribeDcdnTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnTagResourcesOutcomeCallable DcdnClient::describeDcdnTagResourcesCallable(const DescribeDcdnTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnTopDomainsByFlowOutcome DcdnClient::describeDcdnTopDomainsByFlow(const DescribeDcdnTopDomainsByFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnTopDomainsByFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnTopDomainsByFlowOutcome(DescribeDcdnTopDomainsByFlowResult(outcome.result()));
	else
		return DescribeDcdnTopDomainsByFlowOutcome(outcome.error());
}

void DcdnClient::describeDcdnTopDomainsByFlowAsync(const DescribeDcdnTopDomainsByFlowRequest& request, const DescribeDcdnTopDomainsByFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnTopDomainsByFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnTopDomainsByFlowOutcomeCallable DcdnClient::describeDcdnTopDomainsByFlowCallable(const DescribeDcdnTopDomainsByFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnTopDomainsByFlowOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnTopDomainsByFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnUserBillHistoryOutcome DcdnClient::describeDcdnUserBillHistory(const DescribeDcdnUserBillHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnUserBillHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnUserBillHistoryOutcome(DescribeDcdnUserBillHistoryResult(outcome.result()));
	else
		return DescribeDcdnUserBillHistoryOutcome(outcome.error());
}

void DcdnClient::describeDcdnUserBillHistoryAsync(const DescribeDcdnUserBillHistoryRequest& request, const DescribeDcdnUserBillHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnUserBillHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnUserBillHistoryOutcomeCallable DcdnClient::describeDcdnUserBillHistoryCallable(const DescribeDcdnUserBillHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnUserBillHistoryOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnUserBillHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnUserBillTypeOutcome DcdnClient::describeDcdnUserBillType(const DescribeDcdnUserBillTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnUserBillTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnUserBillTypeOutcome(DescribeDcdnUserBillTypeResult(outcome.result()));
	else
		return DescribeDcdnUserBillTypeOutcome(outcome.error());
}

void DcdnClient::describeDcdnUserBillTypeAsync(const DescribeDcdnUserBillTypeRequest& request, const DescribeDcdnUserBillTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnUserBillType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnUserBillTypeOutcomeCallable DcdnClient::describeDcdnUserBillTypeCallable(const DescribeDcdnUserBillTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnUserBillTypeOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnUserBillType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnUserDomainsOutcome DcdnClient::describeDcdnUserDomains(const DescribeDcdnUserDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnUserDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnUserDomainsOutcome(DescribeDcdnUserDomainsResult(outcome.result()));
	else
		return DescribeDcdnUserDomainsOutcome(outcome.error());
}

void DcdnClient::describeDcdnUserDomainsAsync(const DescribeDcdnUserDomainsRequest& request, const DescribeDcdnUserDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnUserDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnUserDomainsOutcomeCallable DcdnClient::describeDcdnUserDomainsCallable(const DescribeDcdnUserDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnUserDomainsOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnUserDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnUserDomainsByFuncOutcome DcdnClient::describeDcdnUserDomainsByFunc(const DescribeDcdnUserDomainsByFuncRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnUserDomainsByFuncOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnUserDomainsByFuncOutcome(DescribeDcdnUserDomainsByFuncResult(outcome.result()));
	else
		return DescribeDcdnUserDomainsByFuncOutcome(outcome.error());
}

void DcdnClient::describeDcdnUserDomainsByFuncAsync(const DescribeDcdnUserDomainsByFuncRequest& request, const DescribeDcdnUserDomainsByFuncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnUserDomainsByFunc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnUserDomainsByFuncOutcomeCallable DcdnClient::describeDcdnUserDomainsByFuncCallable(const DescribeDcdnUserDomainsByFuncRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnUserDomainsByFuncOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnUserDomainsByFunc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnUserQuotaOutcome DcdnClient::describeDcdnUserQuota(const DescribeDcdnUserQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnUserQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnUserQuotaOutcome(DescribeDcdnUserQuotaResult(outcome.result()));
	else
		return DescribeDcdnUserQuotaOutcome(outcome.error());
}

void DcdnClient::describeDcdnUserQuotaAsync(const DescribeDcdnUserQuotaRequest& request, const DescribeDcdnUserQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnUserQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnUserQuotaOutcomeCallable DcdnClient::describeDcdnUserQuotaCallable(const DescribeDcdnUserQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnUserQuotaOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnUserQuota(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnUserRealTimeDeliveryFieldOutcome DcdnClient::describeDcdnUserRealTimeDeliveryField(const DescribeDcdnUserRealTimeDeliveryFieldRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnUserRealTimeDeliveryFieldOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnUserRealTimeDeliveryFieldOutcome(DescribeDcdnUserRealTimeDeliveryFieldResult(outcome.result()));
	else
		return DescribeDcdnUserRealTimeDeliveryFieldOutcome(outcome.error());
}

void DcdnClient::describeDcdnUserRealTimeDeliveryFieldAsync(const DescribeDcdnUserRealTimeDeliveryFieldRequest& request, const DescribeDcdnUserRealTimeDeliveryFieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnUserRealTimeDeliveryField(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnUserRealTimeDeliveryFieldOutcomeCallable DcdnClient::describeDcdnUserRealTimeDeliveryFieldCallable(const DescribeDcdnUserRealTimeDeliveryFieldRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnUserRealTimeDeliveryFieldOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnUserRealTimeDeliveryField(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnUserResourcePackageOutcome DcdnClient::describeDcdnUserResourcePackage(const DescribeDcdnUserResourcePackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnUserResourcePackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnUserResourcePackageOutcome(DescribeDcdnUserResourcePackageResult(outcome.result()));
	else
		return DescribeDcdnUserResourcePackageOutcome(outcome.error());
}

void DcdnClient::describeDcdnUserResourcePackageAsync(const DescribeDcdnUserResourcePackageRequest& request, const DescribeDcdnUserResourcePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnUserResourcePackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnUserResourcePackageOutcomeCallable DcdnClient::describeDcdnUserResourcePackageCallable(const DescribeDcdnUserResourcePackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnUserResourcePackageOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnUserResourcePackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnUserSecDropOutcome DcdnClient::describeDcdnUserSecDrop(const DescribeDcdnUserSecDropRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnUserSecDropOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnUserSecDropOutcome(DescribeDcdnUserSecDropResult(outcome.result()));
	else
		return DescribeDcdnUserSecDropOutcome(outcome.error());
}

void DcdnClient::describeDcdnUserSecDropAsync(const DescribeDcdnUserSecDropRequest& request, const DescribeDcdnUserSecDropAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnUserSecDrop(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnUserSecDropOutcomeCallable DcdnClient::describeDcdnUserSecDropCallable(const DescribeDcdnUserSecDropRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnUserSecDropOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnUserSecDrop(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnUserSecDropByMinuteOutcome DcdnClient::describeDcdnUserSecDropByMinute(const DescribeDcdnUserSecDropByMinuteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnUserSecDropByMinuteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnUserSecDropByMinuteOutcome(DescribeDcdnUserSecDropByMinuteResult(outcome.result()));
	else
		return DescribeDcdnUserSecDropByMinuteOutcome(outcome.error());
}

void DcdnClient::describeDcdnUserSecDropByMinuteAsync(const DescribeDcdnUserSecDropByMinuteRequest& request, const DescribeDcdnUserSecDropByMinuteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnUserSecDropByMinute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnUserSecDropByMinuteOutcomeCallable DcdnClient::describeDcdnUserSecDropByMinuteCallable(const DescribeDcdnUserSecDropByMinuteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnUserSecDropByMinuteOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnUserSecDropByMinute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnUserTagsOutcome DcdnClient::describeDcdnUserTags(const DescribeDcdnUserTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnUserTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnUserTagsOutcome(DescribeDcdnUserTagsResult(outcome.result()));
	else
		return DescribeDcdnUserTagsOutcome(outcome.error());
}

void DcdnClient::describeDcdnUserTagsAsync(const DescribeDcdnUserTagsRequest& request, const DescribeDcdnUserTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnUserTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnUserTagsOutcomeCallable DcdnClient::describeDcdnUserTagsCallable(const DescribeDcdnUserTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnUserTagsOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnUserTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnVerifyContentOutcome DcdnClient::describeDcdnVerifyContent(const DescribeDcdnVerifyContentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnVerifyContentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnVerifyContentOutcome(DescribeDcdnVerifyContentResult(outcome.result()));
	else
		return DescribeDcdnVerifyContentOutcome(outcome.error());
}

void DcdnClient::describeDcdnVerifyContentAsync(const DescribeDcdnVerifyContentRequest& request, const DescribeDcdnVerifyContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnVerifyContent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnVerifyContentOutcomeCallable DcdnClient::describeDcdnVerifyContentCallable(const DescribeDcdnVerifyContentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnVerifyContentOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnVerifyContent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnWafDomainOutcome DcdnClient::describeDcdnWafDomain(const DescribeDcdnWafDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnWafDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnWafDomainOutcome(DescribeDcdnWafDomainResult(outcome.result()));
	else
		return DescribeDcdnWafDomainOutcome(outcome.error());
}

void DcdnClient::describeDcdnWafDomainAsync(const DescribeDcdnWafDomainRequest& request, const DescribeDcdnWafDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnWafDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnWafDomainOutcomeCallable DcdnClient::describeDcdnWafDomainCallable(const DescribeDcdnWafDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnWafDomainOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnWafDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnsecServiceOutcome DcdnClient::describeDcdnsecService(const DescribeDcdnsecServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnsecServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnsecServiceOutcome(DescribeDcdnsecServiceResult(outcome.result()));
	else
		return DescribeDcdnsecServiceOutcome(outcome.error());
}

void DcdnClient::describeDcdnsecServiceAsync(const DescribeDcdnsecServiceRequest& request, const DescribeDcdnsecServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnsecService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnsecServiceOutcomeCallable DcdnClient::describeDcdnsecServiceCallable(const DescribeDcdnsecServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnsecServiceOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnsecService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeRoutineOutcome DcdnClient::describeRoutine(const DescribeRoutineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRoutineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRoutineOutcome(DescribeRoutineResult(outcome.result()));
	else
		return DescribeRoutineOutcome(outcome.error());
}

void DcdnClient::describeRoutineAsync(const DescribeRoutineRequest& request, const DescribeRoutineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRoutine(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeRoutineOutcomeCallable DcdnClient::describeRoutineCallable(const DescribeRoutineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRoutineOutcome()>>(
			[this, request]()
			{
			return this->describeRoutine(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeRoutineCanaryEnvsOutcome DcdnClient::describeRoutineCanaryEnvs(const DescribeRoutineCanaryEnvsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRoutineCanaryEnvsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRoutineCanaryEnvsOutcome(DescribeRoutineCanaryEnvsResult(outcome.result()));
	else
		return DescribeRoutineCanaryEnvsOutcome(outcome.error());
}

void DcdnClient::describeRoutineCanaryEnvsAsync(const DescribeRoutineCanaryEnvsRequest& request, const DescribeRoutineCanaryEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRoutineCanaryEnvs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeRoutineCanaryEnvsOutcomeCallable DcdnClient::describeRoutineCanaryEnvsCallable(const DescribeRoutineCanaryEnvsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRoutineCanaryEnvsOutcome()>>(
			[this, request]()
			{
			return this->describeRoutineCanaryEnvs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeRoutineCodeRevisionOutcome DcdnClient::describeRoutineCodeRevision(const DescribeRoutineCodeRevisionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRoutineCodeRevisionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRoutineCodeRevisionOutcome(DescribeRoutineCodeRevisionResult(outcome.result()));
	else
		return DescribeRoutineCodeRevisionOutcome(outcome.error());
}

void DcdnClient::describeRoutineCodeRevisionAsync(const DescribeRoutineCodeRevisionRequest& request, const DescribeRoutineCodeRevisionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRoutineCodeRevision(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeRoutineCodeRevisionOutcomeCallable DcdnClient::describeRoutineCodeRevisionCallable(const DescribeRoutineCodeRevisionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRoutineCodeRevisionOutcome()>>(
			[this, request]()
			{
			return this->describeRoutineCodeRevision(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeRoutineSpecOutcome DcdnClient::describeRoutineSpec(const DescribeRoutineSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRoutineSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRoutineSpecOutcome(DescribeRoutineSpecResult(outcome.result()));
	else
		return DescribeRoutineSpecOutcome(outcome.error());
}

void DcdnClient::describeRoutineSpecAsync(const DescribeRoutineSpecRequest& request, const DescribeRoutineSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRoutineSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeRoutineSpecOutcomeCallable DcdnClient::describeRoutineSpecCallable(const DescribeRoutineSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRoutineSpecOutcome()>>(
			[this, request]()
			{
			return this->describeRoutineSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeRoutineUserInfoOutcome DcdnClient::describeRoutineUserInfo(const DescribeRoutineUserInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRoutineUserInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRoutineUserInfoOutcome(DescribeRoutineUserInfoResult(outcome.result()));
	else
		return DescribeRoutineUserInfoOutcome(outcome.error());
}

void DcdnClient::describeRoutineUserInfoAsync(const DescribeRoutineUserInfoRequest& request, const DescribeRoutineUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRoutineUserInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeRoutineUserInfoOutcomeCallable DcdnClient::describeRoutineUserInfoCallable(const DescribeRoutineUserInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRoutineUserInfoOutcome()>>(
			[this, request]()
			{
			return this->describeRoutineUserInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeUserDcdnIpaStatusOutcome DcdnClient::describeUserDcdnIpaStatus(const DescribeUserDcdnIpaStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserDcdnIpaStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserDcdnIpaStatusOutcome(DescribeUserDcdnIpaStatusResult(outcome.result()));
	else
		return DescribeUserDcdnIpaStatusOutcome(outcome.error());
}

void DcdnClient::describeUserDcdnIpaStatusAsync(const DescribeUserDcdnIpaStatusRequest& request, const DescribeUserDcdnIpaStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserDcdnIpaStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeUserDcdnIpaStatusOutcomeCallable DcdnClient::describeUserDcdnIpaStatusCallable(const DescribeUserDcdnIpaStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserDcdnIpaStatusOutcome()>>(
			[this, request]()
			{
			return this->describeUserDcdnIpaStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeUserDcdnStatusOutcome DcdnClient::describeUserDcdnStatus(const DescribeUserDcdnStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserDcdnStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserDcdnStatusOutcome(DescribeUserDcdnStatusResult(outcome.result()));
	else
		return DescribeUserDcdnStatusOutcome(outcome.error());
}

void DcdnClient::describeUserDcdnStatusAsync(const DescribeUserDcdnStatusRequest& request, const DescribeUserDcdnStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserDcdnStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeUserDcdnStatusOutcomeCallable DcdnClient::describeUserDcdnStatusCallable(const DescribeUserDcdnStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserDcdnStatusOutcome()>>(
			[this, request]()
			{
			return this->describeUserDcdnStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeUserErStatusOutcome DcdnClient::describeUserErStatus(const DescribeUserErStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserErStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserErStatusOutcome(DescribeUserErStatusResult(outcome.result()));
	else
		return DescribeUserErStatusOutcome(outcome.error());
}

void DcdnClient::describeUserErStatusAsync(const DescribeUserErStatusRequest& request, const DescribeUserErStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserErStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeUserErStatusOutcomeCallable DcdnClient::describeUserErStatusCallable(const DescribeUserErStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserErStatusOutcome()>>(
			[this, request]()
			{
			return this->describeUserErStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeUserLogserviceStatusOutcome DcdnClient::describeUserLogserviceStatus(const DescribeUserLogserviceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserLogserviceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserLogserviceStatusOutcome(DescribeUserLogserviceStatusResult(outcome.result()));
	else
		return DescribeUserLogserviceStatusOutcome(outcome.error());
}

void DcdnClient::describeUserLogserviceStatusAsync(const DescribeUserLogserviceStatusRequest& request, const DescribeUserLogserviceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserLogserviceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeUserLogserviceStatusOutcomeCallable DcdnClient::describeUserLogserviceStatusCallable(const DescribeUserLogserviceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserLogserviceStatusOutcome()>>(
			[this, request]()
			{
			return this->describeUserLogserviceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::EditRoutineConfOutcome DcdnClient::editRoutineConf(const EditRoutineConfRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EditRoutineConfOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EditRoutineConfOutcome(EditRoutineConfResult(outcome.result()));
	else
		return EditRoutineConfOutcome(outcome.error());
}

void DcdnClient::editRoutineConfAsync(const EditRoutineConfRequest& request, const EditRoutineConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, editRoutineConf(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::EditRoutineConfOutcomeCallable DcdnClient::editRoutineConfCallable(const EditRoutineConfRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EditRoutineConfOutcome()>>(
			[this, request]()
			{
			return this->editRoutineConf(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::ListDcdnEsTemplateInfoOutcome DcdnClient::listDcdnEsTemplateInfo(const ListDcdnEsTemplateInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDcdnEsTemplateInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDcdnEsTemplateInfoOutcome(ListDcdnEsTemplateInfoResult(outcome.result()));
	else
		return ListDcdnEsTemplateInfoOutcome(outcome.error());
}

void DcdnClient::listDcdnEsTemplateInfoAsync(const ListDcdnEsTemplateInfoRequest& request, const ListDcdnEsTemplateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDcdnEsTemplateInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::ListDcdnEsTemplateInfoOutcomeCallable DcdnClient::listDcdnEsTemplateInfoCallable(const ListDcdnEsTemplateInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDcdnEsTemplateInfoOutcome()>>(
			[this, request]()
			{
			return this->listDcdnEsTemplateInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::ListDcdnRealTimeDeliveryProjectOutcome DcdnClient::listDcdnRealTimeDeliveryProject(const ListDcdnRealTimeDeliveryProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDcdnRealTimeDeliveryProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDcdnRealTimeDeliveryProjectOutcome(ListDcdnRealTimeDeliveryProjectResult(outcome.result()));
	else
		return ListDcdnRealTimeDeliveryProjectOutcome(outcome.error());
}

void DcdnClient::listDcdnRealTimeDeliveryProjectAsync(const ListDcdnRealTimeDeliveryProjectRequest& request, const ListDcdnRealTimeDeliveryProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDcdnRealTimeDeliveryProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::ListDcdnRealTimeDeliveryProjectOutcomeCallable DcdnClient::listDcdnRealTimeDeliveryProjectCallable(const ListDcdnRealTimeDeliveryProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDcdnRealTimeDeliveryProjectOutcome()>>(
			[this, request]()
			{
			return this->listDcdnRealTimeDeliveryProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::ModifyDCdnDomainSchdmByPropertyOutcome DcdnClient::modifyDCdnDomainSchdmByProperty(const ModifyDCdnDomainSchdmByPropertyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDCdnDomainSchdmByPropertyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDCdnDomainSchdmByPropertyOutcome(ModifyDCdnDomainSchdmByPropertyResult(outcome.result()));
	else
		return ModifyDCdnDomainSchdmByPropertyOutcome(outcome.error());
}

void DcdnClient::modifyDCdnDomainSchdmByPropertyAsync(const ModifyDCdnDomainSchdmByPropertyRequest& request, const ModifyDCdnDomainSchdmByPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDCdnDomainSchdmByProperty(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::ModifyDCdnDomainSchdmByPropertyOutcomeCallable DcdnClient::modifyDCdnDomainSchdmByPropertyCallable(const ModifyDCdnDomainSchdmByPropertyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDCdnDomainSchdmByPropertyOutcome()>>(
			[this, request]()
			{
			return this->modifyDCdnDomainSchdmByProperty(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::OpenDcdnServiceOutcome DcdnClient::openDcdnService(const OpenDcdnServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenDcdnServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenDcdnServiceOutcome(OpenDcdnServiceResult(outcome.result()));
	else
		return OpenDcdnServiceOutcome(outcome.error());
}

void DcdnClient::openDcdnServiceAsync(const OpenDcdnServiceRequest& request, const OpenDcdnServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openDcdnService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::OpenDcdnServiceOutcomeCallable DcdnClient::openDcdnServiceCallable(const OpenDcdnServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenDcdnServiceOutcome()>>(
			[this, request]()
			{
			return this->openDcdnService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::PreloadDcdnObjectCachesOutcome DcdnClient::preloadDcdnObjectCaches(const PreloadDcdnObjectCachesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PreloadDcdnObjectCachesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PreloadDcdnObjectCachesOutcome(PreloadDcdnObjectCachesResult(outcome.result()));
	else
		return PreloadDcdnObjectCachesOutcome(outcome.error());
}

void DcdnClient::preloadDcdnObjectCachesAsync(const PreloadDcdnObjectCachesRequest& request, const PreloadDcdnObjectCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, preloadDcdnObjectCaches(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::PreloadDcdnObjectCachesOutcomeCallable DcdnClient::preloadDcdnObjectCachesCallable(const PreloadDcdnObjectCachesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PreloadDcdnObjectCachesOutcome()>>(
			[this, request]()
			{
			return this->preloadDcdnObjectCaches(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::PublishDcdnStagingConfigToProductionOutcome DcdnClient::publishDcdnStagingConfigToProduction(const PublishDcdnStagingConfigToProductionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishDcdnStagingConfigToProductionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishDcdnStagingConfigToProductionOutcome(PublishDcdnStagingConfigToProductionResult(outcome.result()));
	else
		return PublishDcdnStagingConfigToProductionOutcome(outcome.error());
}

void DcdnClient::publishDcdnStagingConfigToProductionAsync(const PublishDcdnStagingConfigToProductionRequest& request, const PublishDcdnStagingConfigToProductionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishDcdnStagingConfigToProduction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::PublishDcdnStagingConfigToProductionOutcomeCallable DcdnClient::publishDcdnStagingConfigToProductionCallable(const PublishDcdnStagingConfigToProductionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishDcdnStagingConfigToProductionOutcome()>>(
			[this, request]()
			{
			return this->publishDcdnStagingConfigToProduction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::PublishRoutineCodeRevisionOutcome DcdnClient::publishRoutineCodeRevision(const PublishRoutineCodeRevisionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishRoutineCodeRevisionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishRoutineCodeRevisionOutcome(PublishRoutineCodeRevisionResult(outcome.result()));
	else
		return PublishRoutineCodeRevisionOutcome(outcome.error());
}

void DcdnClient::publishRoutineCodeRevisionAsync(const PublishRoutineCodeRevisionRequest& request, const PublishRoutineCodeRevisionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishRoutineCodeRevision(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::PublishRoutineCodeRevisionOutcomeCallable DcdnClient::publishRoutineCodeRevisionCallable(const PublishRoutineCodeRevisionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishRoutineCodeRevisionOutcome()>>(
			[this, request]()
			{
			return this->publishRoutineCodeRevision(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::RefreshDcdnObjectCachesOutcome DcdnClient::refreshDcdnObjectCaches(const RefreshDcdnObjectCachesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshDcdnObjectCachesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshDcdnObjectCachesOutcome(RefreshDcdnObjectCachesResult(outcome.result()));
	else
		return RefreshDcdnObjectCachesOutcome(outcome.error());
}

void DcdnClient::refreshDcdnObjectCachesAsync(const RefreshDcdnObjectCachesRequest& request, const RefreshDcdnObjectCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshDcdnObjectCaches(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::RefreshDcdnObjectCachesOutcomeCallable DcdnClient::refreshDcdnObjectCachesCallable(const RefreshDcdnObjectCachesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshDcdnObjectCachesOutcome()>>(
			[this, request]()
			{
			return this->refreshDcdnObjectCaches(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::RollbackDcdnStagingConfigOutcome DcdnClient::rollbackDcdnStagingConfig(const RollbackDcdnStagingConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RollbackDcdnStagingConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RollbackDcdnStagingConfigOutcome(RollbackDcdnStagingConfigResult(outcome.result()));
	else
		return RollbackDcdnStagingConfigOutcome(outcome.error());
}

void DcdnClient::rollbackDcdnStagingConfigAsync(const RollbackDcdnStagingConfigRequest& request, const RollbackDcdnStagingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rollbackDcdnStagingConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::RollbackDcdnStagingConfigOutcomeCallable DcdnClient::rollbackDcdnStagingConfigCallable(const RollbackDcdnStagingConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RollbackDcdnStagingConfigOutcome()>>(
			[this, request]()
			{
			return this->rollbackDcdnStagingConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::SetDcdnConfigOfVersionOutcome DcdnClient::setDcdnConfigOfVersion(const SetDcdnConfigOfVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDcdnConfigOfVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDcdnConfigOfVersionOutcome(SetDcdnConfigOfVersionResult(outcome.result()));
	else
		return SetDcdnConfigOfVersionOutcome(outcome.error());
}

void DcdnClient::setDcdnConfigOfVersionAsync(const SetDcdnConfigOfVersionRequest& request, const SetDcdnConfigOfVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDcdnConfigOfVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::SetDcdnConfigOfVersionOutcomeCallable DcdnClient::setDcdnConfigOfVersionCallable(const SetDcdnConfigOfVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDcdnConfigOfVersionOutcome()>>(
			[this, request]()
			{
			return this->setDcdnConfigOfVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::SetDcdnDomainCSRCertificateOutcome DcdnClient::setDcdnDomainCSRCertificate(const SetDcdnDomainCSRCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDcdnDomainCSRCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDcdnDomainCSRCertificateOutcome(SetDcdnDomainCSRCertificateResult(outcome.result()));
	else
		return SetDcdnDomainCSRCertificateOutcome(outcome.error());
}

void DcdnClient::setDcdnDomainCSRCertificateAsync(const SetDcdnDomainCSRCertificateRequest& request, const SetDcdnDomainCSRCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDcdnDomainCSRCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::SetDcdnDomainCSRCertificateOutcomeCallable DcdnClient::setDcdnDomainCSRCertificateCallable(const SetDcdnDomainCSRCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDcdnDomainCSRCertificateOutcome()>>(
			[this, request]()
			{
			return this->setDcdnDomainCSRCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::SetDcdnDomainCertificateOutcome DcdnClient::setDcdnDomainCertificate(const SetDcdnDomainCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDcdnDomainCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDcdnDomainCertificateOutcome(SetDcdnDomainCertificateResult(outcome.result()));
	else
		return SetDcdnDomainCertificateOutcome(outcome.error());
}

void DcdnClient::setDcdnDomainCertificateAsync(const SetDcdnDomainCertificateRequest& request, const SetDcdnDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDcdnDomainCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::SetDcdnDomainCertificateOutcomeCallable DcdnClient::setDcdnDomainCertificateCallable(const SetDcdnDomainCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDcdnDomainCertificateOutcome()>>(
			[this, request]()
			{
			return this->setDcdnDomainCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::SetDcdnDomainSMCertificateOutcome DcdnClient::setDcdnDomainSMCertificate(const SetDcdnDomainSMCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDcdnDomainSMCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDcdnDomainSMCertificateOutcome(SetDcdnDomainSMCertificateResult(outcome.result()));
	else
		return SetDcdnDomainSMCertificateOutcome(outcome.error());
}

void DcdnClient::setDcdnDomainSMCertificateAsync(const SetDcdnDomainSMCertificateRequest& request, const SetDcdnDomainSMCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDcdnDomainSMCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::SetDcdnDomainSMCertificateOutcomeCallable DcdnClient::setDcdnDomainSMCertificateCallable(const SetDcdnDomainSMCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDcdnDomainSMCertificateOutcome()>>(
			[this, request]()
			{
			return this->setDcdnDomainSMCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::SetDcdnDomainStagingConfigOutcome DcdnClient::setDcdnDomainStagingConfig(const SetDcdnDomainStagingConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDcdnDomainStagingConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDcdnDomainStagingConfigOutcome(SetDcdnDomainStagingConfigResult(outcome.result()));
	else
		return SetDcdnDomainStagingConfigOutcome(outcome.error());
}

void DcdnClient::setDcdnDomainStagingConfigAsync(const SetDcdnDomainStagingConfigRequest& request, const SetDcdnDomainStagingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDcdnDomainStagingConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::SetDcdnDomainStagingConfigOutcomeCallable DcdnClient::setDcdnDomainStagingConfigCallable(const SetDcdnDomainStagingConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDcdnDomainStagingConfigOutcome()>>(
			[this, request]()
			{
			return this->setDcdnDomainStagingConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::SetDcdnFullDomainsBlockIPOutcome DcdnClient::setDcdnFullDomainsBlockIP(const SetDcdnFullDomainsBlockIPRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDcdnFullDomainsBlockIPOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDcdnFullDomainsBlockIPOutcome(SetDcdnFullDomainsBlockIPResult(outcome.result()));
	else
		return SetDcdnFullDomainsBlockIPOutcome(outcome.error());
}

void DcdnClient::setDcdnFullDomainsBlockIPAsync(const SetDcdnFullDomainsBlockIPRequest& request, const SetDcdnFullDomainsBlockIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDcdnFullDomainsBlockIP(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::SetDcdnFullDomainsBlockIPOutcomeCallable DcdnClient::setDcdnFullDomainsBlockIPCallable(const SetDcdnFullDomainsBlockIPRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDcdnFullDomainsBlockIPOutcome()>>(
			[this, request]()
			{
			return this->setDcdnFullDomainsBlockIP(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::SetDcdnUserConfigOutcome DcdnClient::setDcdnUserConfig(const SetDcdnUserConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDcdnUserConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDcdnUserConfigOutcome(SetDcdnUserConfigResult(outcome.result()));
	else
		return SetDcdnUserConfigOutcome(outcome.error());
}

void DcdnClient::setDcdnUserConfigAsync(const SetDcdnUserConfigRequest& request, const SetDcdnUserConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDcdnUserConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::SetDcdnUserConfigOutcomeCallable DcdnClient::setDcdnUserConfigCallable(const SetDcdnUserConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDcdnUserConfigOutcome()>>(
			[this, request]()
			{
			return this->setDcdnUserConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::SetRoutineSubdomainOutcome DcdnClient::setRoutineSubdomain(const SetRoutineSubdomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetRoutineSubdomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetRoutineSubdomainOutcome(SetRoutineSubdomainResult(outcome.result()));
	else
		return SetRoutineSubdomainOutcome(outcome.error());
}

void DcdnClient::setRoutineSubdomainAsync(const SetRoutineSubdomainRequest& request, const SetRoutineSubdomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setRoutineSubdomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::SetRoutineSubdomainOutcomeCallable DcdnClient::setRoutineSubdomainCallable(const SetRoutineSubdomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetRoutineSubdomainOutcome()>>(
			[this, request]()
			{
			return this->setRoutineSubdomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::StartDcdnDomainOutcome DcdnClient::startDcdnDomain(const StartDcdnDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartDcdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartDcdnDomainOutcome(StartDcdnDomainResult(outcome.result()));
	else
		return StartDcdnDomainOutcome(outcome.error());
}

void DcdnClient::startDcdnDomainAsync(const StartDcdnDomainRequest& request, const StartDcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startDcdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::StartDcdnDomainOutcomeCallable DcdnClient::startDcdnDomainCallable(const StartDcdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartDcdnDomainOutcome()>>(
			[this, request]()
			{
			return this->startDcdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::StartDcdnIpaDomainOutcome DcdnClient::startDcdnIpaDomain(const StartDcdnIpaDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartDcdnIpaDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartDcdnIpaDomainOutcome(StartDcdnIpaDomainResult(outcome.result()));
	else
		return StartDcdnIpaDomainOutcome(outcome.error());
}

void DcdnClient::startDcdnIpaDomainAsync(const StartDcdnIpaDomainRequest& request, const StartDcdnIpaDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startDcdnIpaDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::StartDcdnIpaDomainOutcomeCallable DcdnClient::startDcdnIpaDomainCallable(const StartDcdnIpaDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartDcdnIpaDomainOutcome()>>(
			[this, request]()
			{
			return this->startDcdnIpaDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::StopDcdnDomainOutcome DcdnClient::stopDcdnDomain(const StopDcdnDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopDcdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopDcdnDomainOutcome(StopDcdnDomainResult(outcome.result()));
	else
		return StopDcdnDomainOutcome(outcome.error());
}

void DcdnClient::stopDcdnDomainAsync(const StopDcdnDomainRequest& request, const StopDcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopDcdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::StopDcdnDomainOutcomeCallable DcdnClient::stopDcdnDomainCallable(const StopDcdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopDcdnDomainOutcome()>>(
			[this, request]()
			{
			return this->stopDcdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::StopDcdnIpaDomainOutcome DcdnClient::stopDcdnIpaDomain(const StopDcdnIpaDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopDcdnIpaDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopDcdnIpaDomainOutcome(StopDcdnIpaDomainResult(outcome.result()));
	else
		return StopDcdnIpaDomainOutcome(outcome.error());
}

void DcdnClient::stopDcdnIpaDomainAsync(const StopDcdnIpaDomainRequest& request, const StopDcdnIpaDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopDcdnIpaDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::StopDcdnIpaDomainOutcomeCallable DcdnClient::stopDcdnIpaDomainCallable(const StopDcdnIpaDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopDcdnIpaDomainOutcome()>>(
			[this, request]()
			{
			return this->stopDcdnIpaDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::TagDcdnResourcesOutcome DcdnClient::tagDcdnResources(const TagDcdnResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TagDcdnResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TagDcdnResourcesOutcome(TagDcdnResourcesResult(outcome.result()));
	else
		return TagDcdnResourcesOutcome(outcome.error());
}

void DcdnClient::tagDcdnResourcesAsync(const TagDcdnResourcesRequest& request, const TagDcdnResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagDcdnResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::TagDcdnResourcesOutcomeCallable DcdnClient::tagDcdnResourcesCallable(const TagDcdnResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagDcdnResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagDcdnResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::UntagDcdnResourcesOutcome DcdnClient::untagDcdnResources(const UntagDcdnResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UntagDcdnResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UntagDcdnResourcesOutcome(UntagDcdnResourcesResult(outcome.result()));
	else
		return UntagDcdnResourcesOutcome(outcome.error());
}

void DcdnClient::untagDcdnResourcesAsync(const UntagDcdnResourcesRequest& request, const UntagDcdnResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagDcdnResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::UntagDcdnResourcesOutcomeCallable DcdnClient::untagDcdnResourcesCallable(const UntagDcdnResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagDcdnResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagDcdnResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::UpdateDcdnDeliverTaskOutcome DcdnClient::updateDcdnDeliverTask(const UpdateDcdnDeliverTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDcdnDeliverTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDcdnDeliverTaskOutcome(UpdateDcdnDeliverTaskResult(outcome.result()));
	else
		return UpdateDcdnDeliverTaskOutcome(outcome.error());
}

void DcdnClient::updateDcdnDeliverTaskAsync(const UpdateDcdnDeliverTaskRequest& request, const UpdateDcdnDeliverTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDcdnDeliverTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::UpdateDcdnDeliverTaskOutcomeCallable DcdnClient::updateDcdnDeliverTaskCallable(const UpdateDcdnDeliverTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDcdnDeliverTaskOutcome()>>(
			[this, request]()
			{
			return this->updateDcdnDeliverTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::UpdateDcdnDomainOutcome DcdnClient::updateDcdnDomain(const UpdateDcdnDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDcdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDcdnDomainOutcome(UpdateDcdnDomainResult(outcome.result()));
	else
		return UpdateDcdnDomainOutcome(outcome.error());
}

void DcdnClient::updateDcdnDomainAsync(const UpdateDcdnDomainRequest& request, const UpdateDcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDcdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::UpdateDcdnDomainOutcomeCallable DcdnClient::updateDcdnDomainCallable(const UpdateDcdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDcdnDomainOutcome()>>(
			[this, request]()
			{
			return this->updateDcdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::UpdateDcdnIpaDomainOutcome DcdnClient::updateDcdnIpaDomain(const UpdateDcdnIpaDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDcdnIpaDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDcdnIpaDomainOutcome(UpdateDcdnIpaDomainResult(outcome.result()));
	else
		return UpdateDcdnIpaDomainOutcome(outcome.error());
}

void DcdnClient::updateDcdnIpaDomainAsync(const UpdateDcdnIpaDomainRequest& request, const UpdateDcdnIpaDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDcdnIpaDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::UpdateDcdnIpaDomainOutcomeCallable DcdnClient::updateDcdnIpaDomainCallable(const UpdateDcdnIpaDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDcdnIpaDomainOutcome()>>(
			[this, request]()
			{
			return this->updateDcdnIpaDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::UpdateDcdnSLSRealtimeLogDeliveryOutcome DcdnClient::updateDcdnSLSRealtimeLogDelivery(const UpdateDcdnSLSRealtimeLogDeliveryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDcdnSLSRealtimeLogDeliveryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDcdnSLSRealtimeLogDeliveryOutcome(UpdateDcdnSLSRealtimeLogDeliveryResult(outcome.result()));
	else
		return UpdateDcdnSLSRealtimeLogDeliveryOutcome(outcome.error());
}

void DcdnClient::updateDcdnSLSRealtimeLogDeliveryAsync(const UpdateDcdnSLSRealtimeLogDeliveryRequest& request, const UpdateDcdnSLSRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDcdnSLSRealtimeLogDelivery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::UpdateDcdnSLSRealtimeLogDeliveryOutcomeCallable DcdnClient::updateDcdnSLSRealtimeLogDeliveryCallable(const UpdateDcdnSLSRealtimeLogDeliveryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDcdnSLSRealtimeLogDeliveryOutcome()>>(
			[this, request]()
			{
			return this->updateDcdnSLSRealtimeLogDelivery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::UpdateDcdnSubTaskOutcome DcdnClient::updateDcdnSubTask(const UpdateDcdnSubTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDcdnSubTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDcdnSubTaskOutcome(UpdateDcdnSubTaskResult(outcome.result()));
	else
		return UpdateDcdnSubTaskOutcome(outcome.error());
}

void DcdnClient::updateDcdnSubTaskAsync(const UpdateDcdnSubTaskRequest& request, const UpdateDcdnSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDcdnSubTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::UpdateDcdnSubTaskOutcomeCallable DcdnClient::updateDcdnSubTaskCallable(const UpdateDcdnSubTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDcdnSubTaskOutcome()>>(
			[this, request]()
			{
			return this->updateDcdnSubTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::UpdateDcdnUserRealTimeDeliveryFieldOutcome DcdnClient::updateDcdnUserRealTimeDeliveryField(const UpdateDcdnUserRealTimeDeliveryFieldRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDcdnUserRealTimeDeliveryFieldOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDcdnUserRealTimeDeliveryFieldOutcome(UpdateDcdnUserRealTimeDeliveryFieldResult(outcome.result()));
	else
		return UpdateDcdnUserRealTimeDeliveryFieldOutcome(outcome.error());
}

void DcdnClient::updateDcdnUserRealTimeDeliveryFieldAsync(const UpdateDcdnUserRealTimeDeliveryFieldRequest& request, const UpdateDcdnUserRealTimeDeliveryFieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDcdnUserRealTimeDeliveryField(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::UpdateDcdnUserRealTimeDeliveryFieldOutcomeCallable DcdnClient::updateDcdnUserRealTimeDeliveryFieldCallable(const UpdateDcdnUserRealTimeDeliveryFieldRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDcdnUserRealTimeDeliveryFieldOutcome()>>(
			[this, request]()
			{
			return this->updateDcdnUserRealTimeDeliveryField(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::UploadRoutineCodeOutcome DcdnClient::uploadRoutineCode(const UploadRoutineCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadRoutineCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadRoutineCodeOutcome(UploadRoutineCodeResult(outcome.result()));
	else
		return UploadRoutineCodeOutcome(outcome.error());
}

void DcdnClient::uploadRoutineCodeAsync(const UploadRoutineCodeRequest& request, const UploadRoutineCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadRoutineCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::UploadRoutineCodeOutcomeCallable DcdnClient::uploadRoutineCodeCallable(const UploadRoutineCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadRoutineCodeOutcome()>>(
			[this, request]()
			{
			return this->uploadRoutineCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::UploadStagingRoutineCodeOutcome DcdnClient::uploadStagingRoutineCode(const UploadStagingRoutineCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadStagingRoutineCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadStagingRoutineCodeOutcome(UploadStagingRoutineCodeResult(outcome.result()));
	else
		return UploadStagingRoutineCodeOutcome(outcome.error());
}

void DcdnClient::uploadStagingRoutineCodeAsync(const UploadStagingRoutineCodeRequest& request, const UploadStagingRoutineCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadStagingRoutineCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::UploadStagingRoutineCodeOutcomeCallable DcdnClient::uploadStagingRoutineCodeCallable(const UploadStagingRoutineCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadStagingRoutineCodeOutcome()>>(
			[this, request]()
			{
			return this->uploadStagingRoutineCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::VerifyDcdnDomainOwnerOutcome DcdnClient::verifyDcdnDomainOwner(const VerifyDcdnDomainOwnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyDcdnDomainOwnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyDcdnDomainOwnerOutcome(VerifyDcdnDomainOwnerResult(outcome.result()));
	else
		return VerifyDcdnDomainOwnerOutcome(outcome.error());
}

void DcdnClient::verifyDcdnDomainOwnerAsync(const VerifyDcdnDomainOwnerRequest& request, const VerifyDcdnDomainOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyDcdnDomainOwner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::VerifyDcdnDomainOwnerOutcomeCallable DcdnClient::verifyDcdnDomainOwnerCallable(const VerifyDcdnDomainOwnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyDcdnDomainOwnerOutcome()>>(
			[this, request]()
			{
			return this->verifyDcdnDomainOwner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

