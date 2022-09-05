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

#include <alibabacloud/cdn/CdnClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

namespace
{
	const std::string SERVICE_NAME = "Cdn";
}

CdnClient::CdnClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CdnClient::CdnClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CdnClient::CdnClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CdnClient::~CdnClient()
{}

CdnClient::AddCdnDomainOutcome CdnClient::addCdnDomain(const AddCdnDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddCdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddCdnDomainOutcome(AddCdnDomainResult(outcome.result()));
	else
		return AddCdnDomainOutcome(outcome.error());
}

void CdnClient::addCdnDomainAsync(const AddCdnDomainRequest& request, const AddCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addCdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::AddCdnDomainOutcomeCallable CdnClient::addCdnDomainCallable(const AddCdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddCdnDomainOutcome()>>(
			[this, request]()
			{
			return this->addCdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::AddFCTriggerOutcome CdnClient::addFCTrigger(const AddFCTriggerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddFCTriggerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddFCTriggerOutcome(AddFCTriggerResult(outcome.result()));
	else
		return AddFCTriggerOutcome(outcome.error());
}

void CdnClient::addFCTriggerAsync(const AddFCTriggerRequest& request, const AddFCTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addFCTrigger(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::AddFCTriggerOutcomeCallable CdnClient::addFCTriggerCallable(const AddFCTriggerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddFCTriggerOutcome()>>(
			[this, request]()
			{
			return this->addFCTrigger(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::BatchAddCdnDomainOutcome CdnClient::batchAddCdnDomain(const BatchAddCdnDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchAddCdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchAddCdnDomainOutcome(BatchAddCdnDomainResult(outcome.result()));
	else
		return BatchAddCdnDomainOutcome(outcome.error());
}

void CdnClient::batchAddCdnDomainAsync(const BatchAddCdnDomainRequest& request, const BatchAddCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchAddCdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::BatchAddCdnDomainOutcomeCallable CdnClient::batchAddCdnDomainCallable(const BatchAddCdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchAddCdnDomainOutcome()>>(
			[this, request]()
			{
			return this->batchAddCdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::BatchDeleteCdnDomainConfigOutcome CdnClient::batchDeleteCdnDomainConfig(const BatchDeleteCdnDomainConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchDeleteCdnDomainConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchDeleteCdnDomainConfigOutcome(BatchDeleteCdnDomainConfigResult(outcome.result()));
	else
		return BatchDeleteCdnDomainConfigOutcome(outcome.error());
}

void CdnClient::batchDeleteCdnDomainConfigAsync(const BatchDeleteCdnDomainConfigRequest& request, const BatchDeleteCdnDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchDeleteCdnDomainConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::BatchDeleteCdnDomainConfigOutcomeCallable CdnClient::batchDeleteCdnDomainConfigCallable(const BatchDeleteCdnDomainConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchDeleteCdnDomainConfigOutcome()>>(
			[this, request]()
			{
			return this->batchDeleteCdnDomainConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::BatchSetCdnDomainConfigOutcome CdnClient::batchSetCdnDomainConfig(const BatchSetCdnDomainConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchSetCdnDomainConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchSetCdnDomainConfigOutcome(BatchSetCdnDomainConfigResult(outcome.result()));
	else
		return BatchSetCdnDomainConfigOutcome(outcome.error());
}

void CdnClient::batchSetCdnDomainConfigAsync(const BatchSetCdnDomainConfigRequest& request, const BatchSetCdnDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchSetCdnDomainConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::BatchSetCdnDomainConfigOutcomeCallable CdnClient::batchSetCdnDomainConfigCallable(const BatchSetCdnDomainConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchSetCdnDomainConfigOutcome()>>(
			[this, request]()
			{
			return this->batchSetCdnDomainConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::BatchSetCdnDomainServerCertificateOutcome CdnClient::batchSetCdnDomainServerCertificate(const BatchSetCdnDomainServerCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchSetCdnDomainServerCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchSetCdnDomainServerCertificateOutcome(BatchSetCdnDomainServerCertificateResult(outcome.result()));
	else
		return BatchSetCdnDomainServerCertificateOutcome(outcome.error());
}

void CdnClient::batchSetCdnDomainServerCertificateAsync(const BatchSetCdnDomainServerCertificateRequest& request, const BatchSetCdnDomainServerCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchSetCdnDomainServerCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::BatchSetCdnDomainServerCertificateOutcomeCallable CdnClient::batchSetCdnDomainServerCertificateCallable(const BatchSetCdnDomainServerCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchSetCdnDomainServerCertificateOutcome()>>(
			[this, request]()
			{
			return this->batchSetCdnDomainServerCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::BatchStartCdnDomainOutcome CdnClient::batchStartCdnDomain(const BatchStartCdnDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchStartCdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchStartCdnDomainOutcome(BatchStartCdnDomainResult(outcome.result()));
	else
		return BatchStartCdnDomainOutcome(outcome.error());
}

void CdnClient::batchStartCdnDomainAsync(const BatchStartCdnDomainRequest& request, const BatchStartCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchStartCdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::BatchStartCdnDomainOutcomeCallable CdnClient::batchStartCdnDomainCallable(const BatchStartCdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchStartCdnDomainOutcome()>>(
			[this, request]()
			{
			return this->batchStartCdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::BatchStopCdnDomainOutcome CdnClient::batchStopCdnDomain(const BatchStopCdnDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchStopCdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchStopCdnDomainOutcome(BatchStopCdnDomainResult(outcome.result()));
	else
		return BatchStopCdnDomainOutcome(outcome.error());
}

void CdnClient::batchStopCdnDomainAsync(const BatchStopCdnDomainRequest& request, const BatchStopCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchStopCdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::BatchStopCdnDomainOutcomeCallable CdnClient::batchStopCdnDomainCallable(const BatchStopCdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchStopCdnDomainOutcome()>>(
			[this, request]()
			{
			return this->batchStopCdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::BatchUpdateCdnDomainOutcome CdnClient::batchUpdateCdnDomain(const BatchUpdateCdnDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchUpdateCdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchUpdateCdnDomainOutcome(BatchUpdateCdnDomainResult(outcome.result()));
	else
		return BatchUpdateCdnDomainOutcome(outcome.error());
}

void CdnClient::batchUpdateCdnDomainAsync(const BatchUpdateCdnDomainRequest& request, const BatchUpdateCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchUpdateCdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::BatchUpdateCdnDomainOutcomeCallable CdnClient::batchUpdateCdnDomainCallable(const BatchUpdateCdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchUpdateCdnDomainOutcome()>>(
			[this, request]()
			{
			return this->batchUpdateCdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::CreateCdnCertificateSigningRequestOutcome CdnClient::createCdnCertificateSigningRequest(const CreateCdnCertificateSigningRequestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCdnCertificateSigningRequestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCdnCertificateSigningRequestOutcome(CreateCdnCertificateSigningRequestResult(outcome.result()));
	else
		return CreateCdnCertificateSigningRequestOutcome(outcome.error());
}

void CdnClient::createCdnCertificateSigningRequestAsync(const CreateCdnCertificateSigningRequestRequest& request, const CreateCdnCertificateSigningRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCdnCertificateSigningRequest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::CreateCdnCertificateSigningRequestOutcomeCallable CdnClient::createCdnCertificateSigningRequestCallable(const CreateCdnCertificateSigningRequestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCdnCertificateSigningRequestOutcome()>>(
			[this, request]()
			{
			return this->createCdnCertificateSigningRequest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::CreateCdnDeliverTaskOutcome CdnClient::createCdnDeliverTask(const CreateCdnDeliverTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCdnDeliverTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCdnDeliverTaskOutcome(CreateCdnDeliverTaskResult(outcome.result()));
	else
		return CreateCdnDeliverTaskOutcome(outcome.error());
}

void CdnClient::createCdnDeliverTaskAsync(const CreateCdnDeliverTaskRequest& request, const CreateCdnDeliverTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCdnDeliverTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::CreateCdnDeliverTaskOutcomeCallable CdnClient::createCdnDeliverTaskCallable(const CreateCdnDeliverTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCdnDeliverTaskOutcome()>>(
			[this, request]()
			{
			return this->createCdnDeliverTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::CreateCdnSubTaskOutcome CdnClient::createCdnSubTask(const CreateCdnSubTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCdnSubTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCdnSubTaskOutcome(CreateCdnSubTaskResult(outcome.result()));
	else
		return CreateCdnSubTaskOutcome(outcome.error());
}

void CdnClient::createCdnSubTaskAsync(const CreateCdnSubTaskRequest& request, const CreateCdnSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCdnSubTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::CreateCdnSubTaskOutcomeCallable CdnClient::createCdnSubTaskCallable(const CreateCdnSubTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCdnSubTaskOutcome()>>(
			[this, request]()
			{
			return this->createCdnSubTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::CreateIllegalUrlExportTaskOutcome CdnClient::createIllegalUrlExportTask(const CreateIllegalUrlExportTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateIllegalUrlExportTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateIllegalUrlExportTaskOutcome(CreateIllegalUrlExportTaskResult(outcome.result()));
	else
		return CreateIllegalUrlExportTaskOutcome(outcome.error());
}

void CdnClient::createIllegalUrlExportTaskAsync(const CreateIllegalUrlExportTaskRequest& request, const CreateIllegalUrlExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createIllegalUrlExportTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::CreateIllegalUrlExportTaskOutcomeCallable CdnClient::createIllegalUrlExportTaskCallable(const CreateIllegalUrlExportTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateIllegalUrlExportTaskOutcome()>>(
			[this, request]()
			{
			return this->createIllegalUrlExportTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::CreateRealTimeLogDeliveryOutcome CdnClient::createRealTimeLogDelivery(const CreateRealTimeLogDeliveryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRealTimeLogDeliveryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRealTimeLogDeliveryOutcome(CreateRealTimeLogDeliveryResult(outcome.result()));
	else
		return CreateRealTimeLogDeliveryOutcome(outcome.error());
}

void CdnClient::createRealTimeLogDeliveryAsync(const CreateRealTimeLogDeliveryRequest& request, const CreateRealTimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRealTimeLogDelivery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::CreateRealTimeLogDeliveryOutcomeCallable CdnClient::createRealTimeLogDeliveryCallable(const CreateRealTimeLogDeliveryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRealTimeLogDeliveryOutcome()>>(
			[this, request]()
			{
			return this->createRealTimeLogDelivery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::CreateUsageDetailDataExportTaskOutcome CdnClient::createUsageDetailDataExportTask(const CreateUsageDetailDataExportTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUsageDetailDataExportTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUsageDetailDataExportTaskOutcome(CreateUsageDetailDataExportTaskResult(outcome.result()));
	else
		return CreateUsageDetailDataExportTaskOutcome(outcome.error());
}

void CdnClient::createUsageDetailDataExportTaskAsync(const CreateUsageDetailDataExportTaskRequest& request, const CreateUsageDetailDataExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUsageDetailDataExportTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::CreateUsageDetailDataExportTaskOutcomeCallable CdnClient::createUsageDetailDataExportTaskCallable(const CreateUsageDetailDataExportTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUsageDetailDataExportTaskOutcome()>>(
			[this, request]()
			{
			return this->createUsageDetailDataExportTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::CreateUserUsageDataExportTaskOutcome CdnClient::createUserUsageDataExportTask(const CreateUserUsageDataExportTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUserUsageDataExportTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUserUsageDataExportTaskOutcome(CreateUserUsageDataExportTaskResult(outcome.result()));
	else
		return CreateUserUsageDataExportTaskOutcome(outcome.error());
}

void CdnClient::createUserUsageDataExportTaskAsync(const CreateUserUsageDataExportTaskRequest& request, const CreateUserUsageDataExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUserUsageDataExportTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::CreateUserUsageDataExportTaskOutcomeCallable CdnClient::createUserUsageDataExportTaskCallable(const CreateUserUsageDataExportTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserUsageDataExportTaskOutcome()>>(
			[this, request]()
			{
			return this->createUserUsageDataExportTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DeleteCdnDeliverTaskOutcome CdnClient::deleteCdnDeliverTask(const DeleteCdnDeliverTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCdnDeliverTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCdnDeliverTaskOutcome(DeleteCdnDeliverTaskResult(outcome.result()));
	else
		return DeleteCdnDeliverTaskOutcome(outcome.error());
}

void CdnClient::deleteCdnDeliverTaskAsync(const DeleteCdnDeliverTaskRequest& request, const DeleteCdnDeliverTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCdnDeliverTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DeleteCdnDeliverTaskOutcomeCallable CdnClient::deleteCdnDeliverTaskCallable(const DeleteCdnDeliverTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCdnDeliverTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteCdnDeliverTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DeleteCdnDomainOutcome CdnClient::deleteCdnDomain(const DeleteCdnDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCdnDomainOutcome(DeleteCdnDomainResult(outcome.result()));
	else
		return DeleteCdnDomainOutcome(outcome.error());
}

void CdnClient::deleteCdnDomainAsync(const DeleteCdnDomainRequest& request, const DeleteCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DeleteCdnDomainOutcomeCallable CdnClient::deleteCdnDomainCallable(const DeleteCdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCdnDomainOutcome()>>(
			[this, request]()
			{
			return this->deleteCdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DeleteCdnSubTaskOutcome CdnClient::deleteCdnSubTask(const DeleteCdnSubTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCdnSubTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCdnSubTaskOutcome(DeleteCdnSubTaskResult(outcome.result()));
	else
		return DeleteCdnSubTaskOutcome(outcome.error());
}

void CdnClient::deleteCdnSubTaskAsync(const DeleteCdnSubTaskRequest& request, const DeleteCdnSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCdnSubTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DeleteCdnSubTaskOutcomeCallable CdnClient::deleteCdnSubTaskCallable(const DeleteCdnSubTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCdnSubTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteCdnSubTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DeleteFCTriggerOutcome CdnClient::deleteFCTrigger(const DeleteFCTriggerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFCTriggerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFCTriggerOutcome(DeleteFCTriggerResult(outcome.result()));
	else
		return DeleteFCTriggerOutcome(outcome.error());
}

void CdnClient::deleteFCTriggerAsync(const DeleteFCTriggerRequest& request, const DeleteFCTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFCTrigger(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DeleteFCTriggerOutcomeCallable CdnClient::deleteFCTriggerCallable(const DeleteFCTriggerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFCTriggerOutcome()>>(
			[this, request]()
			{
			return this->deleteFCTrigger(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DeleteRealTimeLogLogstoreOutcome CdnClient::deleteRealTimeLogLogstore(const DeleteRealTimeLogLogstoreRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRealTimeLogLogstoreOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRealTimeLogLogstoreOutcome(DeleteRealTimeLogLogstoreResult(outcome.result()));
	else
		return DeleteRealTimeLogLogstoreOutcome(outcome.error());
}

void CdnClient::deleteRealTimeLogLogstoreAsync(const DeleteRealTimeLogLogstoreRequest& request, const DeleteRealTimeLogLogstoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRealTimeLogLogstore(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DeleteRealTimeLogLogstoreOutcomeCallable CdnClient::deleteRealTimeLogLogstoreCallable(const DeleteRealTimeLogLogstoreRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRealTimeLogLogstoreOutcome()>>(
			[this, request]()
			{
			return this->deleteRealTimeLogLogstore(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DeleteRealtimeLogDeliveryOutcome CdnClient::deleteRealtimeLogDelivery(const DeleteRealtimeLogDeliveryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRealtimeLogDeliveryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRealtimeLogDeliveryOutcome(DeleteRealtimeLogDeliveryResult(outcome.result()));
	else
		return DeleteRealtimeLogDeliveryOutcome(outcome.error());
}

void CdnClient::deleteRealtimeLogDeliveryAsync(const DeleteRealtimeLogDeliveryRequest& request, const DeleteRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRealtimeLogDelivery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DeleteRealtimeLogDeliveryOutcomeCallable CdnClient::deleteRealtimeLogDeliveryCallable(const DeleteRealtimeLogDeliveryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRealtimeLogDeliveryOutcome()>>(
			[this, request]()
			{
			return this->deleteRealtimeLogDelivery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DeleteSpecificConfigOutcome CdnClient::deleteSpecificConfig(const DeleteSpecificConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSpecificConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSpecificConfigOutcome(DeleteSpecificConfigResult(outcome.result()));
	else
		return DeleteSpecificConfigOutcome(outcome.error());
}

void CdnClient::deleteSpecificConfigAsync(const DeleteSpecificConfigRequest& request, const DeleteSpecificConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSpecificConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DeleteSpecificConfigOutcomeCallable CdnClient::deleteSpecificConfigCallable(const DeleteSpecificConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSpecificConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteSpecificConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DeleteSpecificStagingConfigOutcome CdnClient::deleteSpecificStagingConfig(const DeleteSpecificStagingConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSpecificStagingConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSpecificStagingConfigOutcome(DeleteSpecificStagingConfigResult(outcome.result()));
	else
		return DeleteSpecificStagingConfigOutcome(outcome.error());
}

void CdnClient::deleteSpecificStagingConfigAsync(const DeleteSpecificStagingConfigRequest& request, const DeleteSpecificStagingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSpecificStagingConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DeleteSpecificStagingConfigOutcomeCallable CdnClient::deleteSpecificStagingConfigCallable(const DeleteSpecificStagingConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSpecificStagingConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteSpecificStagingConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DeleteUsageDetailDataExportTaskOutcome CdnClient::deleteUsageDetailDataExportTask(const DeleteUsageDetailDataExportTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUsageDetailDataExportTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUsageDetailDataExportTaskOutcome(DeleteUsageDetailDataExportTaskResult(outcome.result()));
	else
		return DeleteUsageDetailDataExportTaskOutcome(outcome.error());
}

void CdnClient::deleteUsageDetailDataExportTaskAsync(const DeleteUsageDetailDataExportTaskRequest& request, const DeleteUsageDetailDataExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUsageDetailDataExportTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DeleteUsageDetailDataExportTaskOutcomeCallable CdnClient::deleteUsageDetailDataExportTaskCallable(const DeleteUsageDetailDataExportTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUsageDetailDataExportTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteUsageDetailDataExportTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DeleteUserUsageDataExportTaskOutcome CdnClient::deleteUserUsageDataExportTask(const DeleteUserUsageDataExportTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserUsageDataExportTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserUsageDataExportTaskOutcome(DeleteUserUsageDataExportTaskResult(outcome.result()));
	else
		return DeleteUserUsageDataExportTaskOutcome(outcome.error());
}

void CdnClient::deleteUserUsageDataExportTaskAsync(const DeleteUserUsageDataExportTaskRequest& request, const DeleteUserUsageDataExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUserUsageDataExportTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DeleteUserUsageDataExportTaskOutcomeCallable CdnClient::deleteUserUsageDataExportTaskCallable(const DeleteUserUsageDataExportTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserUsageDataExportTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteUserUsageDataExportTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeActiveVersionOfConfigGroupOutcome CdnClient::describeActiveVersionOfConfigGroup(const DescribeActiveVersionOfConfigGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeActiveVersionOfConfigGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeActiveVersionOfConfigGroupOutcome(DescribeActiveVersionOfConfigGroupResult(outcome.result()));
	else
		return DescribeActiveVersionOfConfigGroupOutcome(outcome.error());
}

void CdnClient::describeActiveVersionOfConfigGroupAsync(const DescribeActiveVersionOfConfigGroupRequest& request, const DescribeActiveVersionOfConfigGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeActiveVersionOfConfigGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeActiveVersionOfConfigGroupOutcomeCallable CdnClient::describeActiveVersionOfConfigGroupCallable(const DescribeActiveVersionOfConfigGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeActiveVersionOfConfigGroupOutcome()>>(
			[this, request]()
			{
			return this->describeActiveVersionOfConfigGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeBlockedRegionsOutcome CdnClient::describeBlockedRegions(const DescribeBlockedRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBlockedRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBlockedRegionsOutcome(DescribeBlockedRegionsResult(outcome.result()));
	else
		return DescribeBlockedRegionsOutcome(outcome.error());
}

void CdnClient::describeBlockedRegionsAsync(const DescribeBlockedRegionsRequest& request, const DescribeBlockedRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBlockedRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeBlockedRegionsOutcomeCallable CdnClient::describeBlockedRegionsCallable(const DescribeBlockedRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBlockedRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeBlockedRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnCertificateDetailOutcome CdnClient::describeCdnCertificateDetail(const DescribeCdnCertificateDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnCertificateDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnCertificateDetailOutcome(DescribeCdnCertificateDetailResult(outcome.result()));
	else
		return DescribeCdnCertificateDetailOutcome(outcome.error());
}

void CdnClient::describeCdnCertificateDetailAsync(const DescribeCdnCertificateDetailRequest& request, const DescribeCdnCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnCertificateDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnCertificateDetailOutcomeCallable CdnClient::describeCdnCertificateDetailCallable(const DescribeCdnCertificateDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnCertificateDetailOutcome()>>(
			[this, request]()
			{
			return this->describeCdnCertificateDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnCertificateListOutcome CdnClient::describeCdnCertificateList(const DescribeCdnCertificateListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnCertificateListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnCertificateListOutcome(DescribeCdnCertificateListResult(outcome.result()));
	else
		return DescribeCdnCertificateListOutcome(outcome.error());
}

void CdnClient::describeCdnCertificateListAsync(const DescribeCdnCertificateListRequest& request, const DescribeCdnCertificateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnCertificateList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnCertificateListOutcomeCallable CdnClient::describeCdnCertificateListCallable(const DescribeCdnCertificateListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnCertificateListOutcome()>>(
			[this, request]()
			{
			return this->describeCdnCertificateList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnDeletedDomainsOutcome CdnClient::describeCdnDeletedDomains(const DescribeCdnDeletedDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnDeletedDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnDeletedDomainsOutcome(DescribeCdnDeletedDomainsResult(outcome.result()));
	else
		return DescribeCdnDeletedDomainsOutcome(outcome.error());
}

void CdnClient::describeCdnDeletedDomainsAsync(const DescribeCdnDeletedDomainsRequest& request, const DescribeCdnDeletedDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnDeletedDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnDeletedDomainsOutcomeCallable CdnClient::describeCdnDeletedDomainsCallable(const DescribeCdnDeletedDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnDeletedDomainsOutcome()>>(
			[this, request]()
			{
			return this->describeCdnDeletedDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnDeliverListOutcome CdnClient::describeCdnDeliverList(const DescribeCdnDeliverListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnDeliverListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnDeliverListOutcome(DescribeCdnDeliverListResult(outcome.result()));
	else
		return DescribeCdnDeliverListOutcome(outcome.error());
}

void CdnClient::describeCdnDeliverListAsync(const DescribeCdnDeliverListRequest& request, const DescribeCdnDeliverListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnDeliverList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnDeliverListOutcomeCallable CdnClient::describeCdnDeliverListCallable(const DescribeCdnDeliverListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnDeliverListOutcome()>>(
			[this, request]()
			{
			return this->describeCdnDeliverList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnDomainByCertificateOutcome CdnClient::describeCdnDomainByCertificate(const DescribeCdnDomainByCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnDomainByCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnDomainByCertificateOutcome(DescribeCdnDomainByCertificateResult(outcome.result()));
	else
		return DescribeCdnDomainByCertificateOutcome(outcome.error());
}

void CdnClient::describeCdnDomainByCertificateAsync(const DescribeCdnDomainByCertificateRequest& request, const DescribeCdnDomainByCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnDomainByCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnDomainByCertificateOutcomeCallable CdnClient::describeCdnDomainByCertificateCallable(const DescribeCdnDomainByCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnDomainByCertificateOutcome()>>(
			[this, request]()
			{
			return this->describeCdnDomainByCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnDomainConfigsOutcome CdnClient::describeCdnDomainConfigs(const DescribeCdnDomainConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnDomainConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnDomainConfigsOutcome(DescribeCdnDomainConfigsResult(outcome.result()));
	else
		return DescribeCdnDomainConfigsOutcome(outcome.error());
}

void CdnClient::describeCdnDomainConfigsAsync(const DescribeCdnDomainConfigsRequest& request, const DescribeCdnDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnDomainConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnDomainConfigsOutcomeCallable CdnClient::describeCdnDomainConfigsCallable(const DescribeCdnDomainConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnDomainConfigsOutcome()>>(
			[this, request]()
			{
			return this->describeCdnDomainConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnDomainDetailOutcome CdnClient::describeCdnDomainDetail(const DescribeCdnDomainDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnDomainDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnDomainDetailOutcome(DescribeCdnDomainDetailResult(outcome.result()));
	else
		return DescribeCdnDomainDetailOutcome(outcome.error());
}

void CdnClient::describeCdnDomainDetailAsync(const DescribeCdnDomainDetailRequest& request, const DescribeCdnDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnDomainDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnDomainDetailOutcomeCallable CdnClient::describeCdnDomainDetailCallable(const DescribeCdnDomainDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnDomainDetailOutcome()>>(
			[this, request]()
			{
			return this->describeCdnDomainDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnDomainLogsOutcome CdnClient::describeCdnDomainLogs(const DescribeCdnDomainLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnDomainLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnDomainLogsOutcome(DescribeCdnDomainLogsResult(outcome.result()));
	else
		return DescribeCdnDomainLogsOutcome(outcome.error());
}

void CdnClient::describeCdnDomainLogsAsync(const DescribeCdnDomainLogsRequest& request, const DescribeCdnDomainLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnDomainLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnDomainLogsOutcomeCallable CdnClient::describeCdnDomainLogsCallable(const DescribeCdnDomainLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnDomainLogsOutcome()>>(
			[this, request]()
			{
			return this->describeCdnDomainLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnDomainStagingConfigOutcome CdnClient::describeCdnDomainStagingConfig(const DescribeCdnDomainStagingConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnDomainStagingConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnDomainStagingConfigOutcome(DescribeCdnDomainStagingConfigResult(outcome.result()));
	else
		return DescribeCdnDomainStagingConfigOutcome(outcome.error());
}

void CdnClient::describeCdnDomainStagingConfigAsync(const DescribeCdnDomainStagingConfigRequest& request, const DescribeCdnDomainStagingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnDomainStagingConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnDomainStagingConfigOutcomeCallable CdnClient::describeCdnDomainStagingConfigCallable(const DescribeCdnDomainStagingConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnDomainStagingConfigOutcome()>>(
			[this, request]()
			{
			return this->describeCdnDomainStagingConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnHttpsDomainListOutcome CdnClient::describeCdnHttpsDomainList(const DescribeCdnHttpsDomainListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnHttpsDomainListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnHttpsDomainListOutcome(DescribeCdnHttpsDomainListResult(outcome.result()));
	else
		return DescribeCdnHttpsDomainListOutcome(outcome.error());
}

void CdnClient::describeCdnHttpsDomainListAsync(const DescribeCdnHttpsDomainListRequest& request, const DescribeCdnHttpsDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnHttpsDomainList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnHttpsDomainListOutcomeCallable CdnClient::describeCdnHttpsDomainListCallable(const DescribeCdnHttpsDomainListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnHttpsDomainListOutcome()>>(
			[this, request]()
			{
			return this->describeCdnHttpsDomainList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnOrderCommodityCodeOutcome CdnClient::describeCdnOrderCommodityCode(const DescribeCdnOrderCommodityCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnOrderCommodityCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnOrderCommodityCodeOutcome(DescribeCdnOrderCommodityCodeResult(outcome.result()));
	else
		return DescribeCdnOrderCommodityCodeOutcome(outcome.error());
}

void CdnClient::describeCdnOrderCommodityCodeAsync(const DescribeCdnOrderCommodityCodeRequest& request, const DescribeCdnOrderCommodityCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnOrderCommodityCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnOrderCommodityCodeOutcomeCallable CdnClient::describeCdnOrderCommodityCodeCallable(const DescribeCdnOrderCommodityCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnOrderCommodityCodeOutcome()>>(
			[this, request]()
			{
			return this->describeCdnOrderCommodityCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnRegionAndIspOutcome CdnClient::describeCdnRegionAndIsp(const DescribeCdnRegionAndIspRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnRegionAndIspOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnRegionAndIspOutcome(DescribeCdnRegionAndIspResult(outcome.result()));
	else
		return DescribeCdnRegionAndIspOutcome(outcome.error());
}

void CdnClient::describeCdnRegionAndIspAsync(const DescribeCdnRegionAndIspRequest& request, const DescribeCdnRegionAndIspAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnRegionAndIsp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnRegionAndIspOutcomeCallable CdnClient::describeCdnRegionAndIspCallable(const DescribeCdnRegionAndIspRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnRegionAndIspOutcome()>>(
			[this, request]()
			{
			return this->describeCdnRegionAndIsp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnReportOutcome CdnClient::describeCdnReport(const DescribeCdnReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnReportOutcome(DescribeCdnReportResult(outcome.result()));
	else
		return DescribeCdnReportOutcome(outcome.error());
}

void CdnClient::describeCdnReportAsync(const DescribeCdnReportRequest& request, const DescribeCdnReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnReportOutcomeCallable CdnClient::describeCdnReportCallable(const DescribeCdnReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnReportOutcome()>>(
			[this, request]()
			{
			return this->describeCdnReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnReportListOutcome CdnClient::describeCdnReportList(const DescribeCdnReportListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnReportListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnReportListOutcome(DescribeCdnReportListResult(outcome.result()));
	else
		return DescribeCdnReportListOutcome(outcome.error());
}

void CdnClient::describeCdnReportListAsync(const DescribeCdnReportListRequest& request, const DescribeCdnReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnReportList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnReportListOutcomeCallable CdnClient::describeCdnReportListCallable(const DescribeCdnReportListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnReportListOutcome()>>(
			[this, request]()
			{
			return this->describeCdnReportList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnSMCertificateDetailOutcome CdnClient::describeCdnSMCertificateDetail(const DescribeCdnSMCertificateDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnSMCertificateDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnSMCertificateDetailOutcome(DescribeCdnSMCertificateDetailResult(outcome.result()));
	else
		return DescribeCdnSMCertificateDetailOutcome(outcome.error());
}

void CdnClient::describeCdnSMCertificateDetailAsync(const DescribeCdnSMCertificateDetailRequest& request, const DescribeCdnSMCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnSMCertificateDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnSMCertificateDetailOutcomeCallable CdnClient::describeCdnSMCertificateDetailCallable(const DescribeCdnSMCertificateDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnSMCertificateDetailOutcome()>>(
			[this, request]()
			{
			return this->describeCdnSMCertificateDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnSMCertificateListOutcome CdnClient::describeCdnSMCertificateList(const DescribeCdnSMCertificateListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnSMCertificateListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnSMCertificateListOutcome(DescribeCdnSMCertificateListResult(outcome.result()));
	else
		return DescribeCdnSMCertificateListOutcome(outcome.error());
}

void CdnClient::describeCdnSMCertificateListAsync(const DescribeCdnSMCertificateListRequest& request, const DescribeCdnSMCertificateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnSMCertificateList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnSMCertificateListOutcomeCallable CdnClient::describeCdnSMCertificateListCallable(const DescribeCdnSMCertificateListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnSMCertificateListOutcome()>>(
			[this, request]()
			{
			return this->describeCdnSMCertificateList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnServiceOutcome CdnClient::describeCdnService(const DescribeCdnServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnServiceOutcome(DescribeCdnServiceResult(outcome.result()));
	else
		return DescribeCdnServiceOutcome(outcome.error());
}

void CdnClient::describeCdnServiceAsync(const DescribeCdnServiceRequest& request, const DescribeCdnServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnServiceOutcomeCallable CdnClient::describeCdnServiceCallable(const DescribeCdnServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnServiceOutcome()>>(
			[this, request]()
			{
			return this->describeCdnService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnSubListOutcome CdnClient::describeCdnSubList(const DescribeCdnSubListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnSubListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnSubListOutcome(DescribeCdnSubListResult(outcome.result()));
	else
		return DescribeCdnSubListOutcome(outcome.error());
}

void CdnClient::describeCdnSubListAsync(const DescribeCdnSubListRequest& request, const DescribeCdnSubListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnSubList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnSubListOutcomeCallable CdnClient::describeCdnSubListCallable(const DescribeCdnSubListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnSubListOutcome()>>(
			[this, request]()
			{
			return this->describeCdnSubList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnUserBillHistoryOutcome CdnClient::describeCdnUserBillHistory(const DescribeCdnUserBillHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnUserBillHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnUserBillHistoryOutcome(DescribeCdnUserBillHistoryResult(outcome.result()));
	else
		return DescribeCdnUserBillHistoryOutcome(outcome.error());
}

void CdnClient::describeCdnUserBillHistoryAsync(const DescribeCdnUserBillHistoryRequest& request, const DescribeCdnUserBillHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnUserBillHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnUserBillHistoryOutcomeCallable CdnClient::describeCdnUserBillHistoryCallable(const DescribeCdnUserBillHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnUserBillHistoryOutcome()>>(
			[this, request]()
			{
			return this->describeCdnUserBillHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnUserBillPredictionOutcome CdnClient::describeCdnUserBillPrediction(const DescribeCdnUserBillPredictionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnUserBillPredictionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnUserBillPredictionOutcome(DescribeCdnUserBillPredictionResult(outcome.result()));
	else
		return DescribeCdnUserBillPredictionOutcome(outcome.error());
}

void CdnClient::describeCdnUserBillPredictionAsync(const DescribeCdnUserBillPredictionRequest& request, const DescribeCdnUserBillPredictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnUserBillPrediction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnUserBillPredictionOutcomeCallable CdnClient::describeCdnUserBillPredictionCallable(const DescribeCdnUserBillPredictionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnUserBillPredictionOutcome()>>(
			[this, request]()
			{
			return this->describeCdnUserBillPrediction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnUserBillTypeOutcome CdnClient::describeCdnUserBillType(const DescribeCdnUserBillTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnUserBillTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnUserBillTypeOutcome(DescribeCdnUserBillTypeResult(outcome.result()));
	else
		return DescribeCdnUserBillTypeOutcome(outcome.error());
}

void CdnClient::describeCdnUserBillTypeAsync(const DescribeCdnUserBillTypeRequest& request, const DescribeCdnUserBillTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnUserBillType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnUserBillTypeOutcomeCallable CdnClient::describeCdnUserBillTypeCallable(const DescribeCdnUserBillTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnUserBillTypeOutcome()>>(
			[this, request]()
			{
			return this->describeCdnUserBillType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnUserConfigsOutcome CdnClient::describeCdnUserConfigs(const DescribeCdnUserConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnUserConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnUserConfigsOutcome(DescribeCdnUserConfigsResult(outcome.result()));
	else
		return DescribeCdnUserConfigsOutcome(outcome.error());
}

void CdnClient::describeCdnUserConfigsAsync(const DescribeCdnUserConfigsRequest& request, const DescribeCdnUserConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnUserConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnUserConfigsOutcomeCallable CdnClient::describeCdnUserConfigsCallable(const DescribeCdnUserConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnUserConfigsOutcome()>>(
			[this, request]()
			{
			return this->describeCdnUserConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnUserDomainsByFuncOutcome CdnClient::describeCdnUserDomainsByFunc(const DescribeCdnUserDomainsByFuncRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnUserDomainsByFuncOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnUserDomainsByFuncOutcome(DescribeCdnUserDomainsByFuncResult(outcome.result()));
	else
		return DescribeCdnUserDomainsByFuncOutcome(outcome.error());
}

void CdnClient::describeCdnUserDomainsByFuncAsync(const DescribeCdnUserDomainsByFuncRequest& request, const DescribeCdnUserDomainsByFuncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnUserDomainsByFunc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnUserDomainsByFuncOutcomeCallable CdnClient::describeCdnUserDomainsByFuncCallable(const DescribeCdnUserDomainsByFuncRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnUserDomainsByFuncOutcome()>>(
			[this, request]()
			{
			return this->describeCdnUserDomainsByFunc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnUserQuotaOutcome CdnClient::describeCdnUserQuota(const DescribeCdnUserQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnUserQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnUserQuotaOutcome(DescribeCdnUserQuotaResult(outcome.result()));
	else
		return DescribeCdnUserQuotaOutcome(outcome.error());
}

void CdnClient::describeCdnUserQuotaAsync(const DescribeCdnUserQuotaRequest& request, const DescribeCdnUserQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnUserQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnUserQuotaOutcomeCallable CdnClient::describeCdnUserQuotaCallable(const DescribeCdnUserQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnUserQuotaOutcome()>>(
			[this, request]()
			{
			return this->describeCdnUserQuota(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnUserResourcePackageOutcome CdnClient::describeCdnUserResourcePackage(const DescribeCdnUserResourcePackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnUserResourcePackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnUserResourcePackageOutcome(DescribeCdnUserResourcePackageResult(outcome.result()));
	else
		return DescribeCdnUserResourcePackageOutcome(outcome.error());
}

void CdnClient::describeCdnUserResourcePackageAsync(const DescribeCdnUserResourcePackageRequest& request, const DescribeCdnUserResourcePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnUserResourcePackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnUserResourcePackageOutcomeCallable CdnClient::describeCdnUserResourcePackageCallable(const DescribeCdnUserResourcePackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnUserResourcePackageOutcome()>>(
			[this, request]()
			{
			return this->describeCdnUserResourcePackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnWafDomainOutcome CdnClient::describeCdnWafDomain(const DescribeCdnWafDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnWafDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnWafDomainOutcome(DescribeCdnWafDomainResult(outcome.result()));
	else
		return DescribeCdnWafDomainOutcome(outcome.error());
}

void CdnClient::describeCdnWafDomainAsync(const DescribeCdnWafDomainRequest& request, const DescribeCdnWafDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnWafDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnWafDomainOutcomeCallable CdnClient::describeCdnWafDomainCallable(const DescribeCdnWafDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnWafDomainOutcome()>>(
			[this, request]()
			{
			return this->describeCdnWafDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCertificateInfoByIDOutcome CdnClient::describeCertificateInfoByID(const DescribeCertificateInfoByIDRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCertificateInfoByIDOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCertificateInfoByIDOutcome(DescribeCertificateInfoByIDResult(outcome.result()));
	else
		return DescribeCertificateInfoByIDOutcome(outcome.error());
}

void CdnClient::describeCertificateInfoByIDAsync(const DescribeCertificateInfoByIDRequest& request, const DescribeCertificateInfoByIDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCertificateInfoByID(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCertificateInfoByIDOutcomeCallable CdnClient::describeCertificateInfoByIDCallable(const DescribeCertificateInfoByIDRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCertificateInfoByIDOutcome()>>(
			[this, request]()
			{
			return this->describeCertificateInfoByID(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeConfigGroupDetailOutcome CdnClient::describeConfigGroupDetail(const DescribeConfigGroupDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeConfigGroupDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeConfigGroupDetailOutcome(DescribeConfigGroupDetailResult(outcome.result()));
	else
		return DescribeConfigGroupDetailOutcome(outcome.error());
}

void CdnClient::describeConfigGroupDetailAsync(const DescribeConfigGroupDetailRequest& request, const DescribeConfigGroupDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeConfigGroupDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeConfigGroupDetailOutcomeCallable CdnClient::describeConfigGroupDetailCallable(const DescribeConfigGroupDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeConfigGroupDetailOutcome()>>(
			[this, request]()
			{
			return this->describeConfigGroupDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeConfigOfVersionOutcome CdnClient::describeConfigOfVersion(const DescribeConfigOfVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeConfigOfVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeConfigOfVersionOutcome(DescribeConfigOfVersionResult(outcome.result()));
	else
		return DescribeConfigOfVersionOutcome(outcome.error());
}

void CdnClient::describeConfigOfVersionAsync(const DescribeConfigOfVersionRequest& request, const DescribeConfigOfVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeConfigOfVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeConfigOfVersionOutcomeCallable CdnClient::describeConfigOfVersionCallable(const DescribeConfigOfVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeConfigOfVersionOutcome()>>(
			[this, request]()
			{
			return this->describeConfigOfVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCustomLogConfigOutcome CdnClient::describeCustomLogConfig(const DescribeCustomLogConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCustomLogConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCustomLogConfigOutcome(DescribeCustomLogConfigResult(outcome.result()));
	else
		return DescribeCustomLogConfigOutcome(outcome.error());
}

void CdnClient::describeCustomLogConfigAsync(const DescribeCustomLogConfigRequest& request, const DescribeCustomLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustomLogConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCustomLogConfigOutcomeCallable CdnClient::describeCustomLogConfigCallable(const DescribeCustomLogConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustomLogConfigOutcome()>>(
			[this, request]()
			{
			return this->describeCustomLogConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainAverageResponseTimeOutcome CdnClient::describeDomainAverageResponseTime(const DescribeDomainAverageResponseTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainAverageResponseTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainAverageResponseTimeOutcome(DescribeDomainAverageResponseTimeResult(outcome.result()));
	else
		return DescribeDomainAverageResponseTimeOutcome(outcome.error());
}

void CdnClient::describeDomainAverageResponseTimeAsync(const DescribeDomainAverageResponseTimeRequest& request, const DescribeDomainAverageResponseTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainAverageResponseTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainAverageResponseTimeOutcomeCallable CdnClient::describeDomainAverageResponseTimeCallable(const DescribeDomainAverageResponseTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainAverageResponseTimeOutcome()>>(
			[this, request]()
			{
			return this->describeDomainAverageResponseTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainBpsDataOutcome CdnClient::describeDomainBpsData(const DescribeDomainBpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainBpsDataOutcome(DescribeDomainBpsDataResult(outcome.result()));
	else
		return DescribeDomainBpsDataOutcome(outcome.error());
}

void CdnClient::describeDomainBpsDataAsync(const DescribeDomainBpsDataRequest& request, const DescribeDomainBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainBpsDataOutcomeCallable CdnClient::describeDomainBpsDataCallable(const DescribeDomainBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainBpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainBpsDataByLayerOutcome CdnClient::describeDomainBpsDataByLayer(const DescribeDomainBpsDataByLayerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainBpsDataByLayerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainBpsDataByLayerOutcome(DescribeDomainBpsDataByLayerResult(outcome.result()));
	else
		return DescribeDomainBpsDataByLayerOutcome(outcome.error());
}

void CdnClient::describeDomainBpsDataByLayerAsync(const DescribeDomainBpsDataByLayerRequest& request, const DescribeDomainBpsDataByLayerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainBpsDataByLayer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainBpsDataByLayerOutcomeCallable CdnClient::describeDomainBpsDataByLayerCallable(const DescribeDomainBpsDataByLayerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainBpsDataByLayerOutcome()>>(
			[this, request]()
			{
			return this->describeDomainBpsDataByLayer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainBpsDataByTimeStampOutcome CdnClient::describeDomainBpsDataByTimeStamp(const DescribeDomainBpsDataByTimeStampRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainBpsDataByTimeStampOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainBpsDataByTimeStampOutcome(DescribeDomainBpsDataByTimeStampResult(outcome.result()));
	else
		return DescribeDomainBpsDataByTimeStampOutcome(outcome.error());
}

void CdnClient::describeDomainBpsDataByTimeStampAsync(const DescribeDomainBpsDataByTimeStampRequest& request, const DescribeDomainBpsDataByTimeStampAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainBpsDataByTimeStamp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainBpsDataByTimeStampOutcomeCallable CdnClient::describeDomainBpsDataByTimeStampCallable(const DescribeDomainBpsDataByTimeStampRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainBpsDataByTimeStampOutcome()>>(
			[this, request]()
			{
			return this->describeDomainBpsDataByTimeStamp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainCcActivityLogOutcome CdnClient::describeDomainCcActivityLog(const DescribeDomainCcActivityLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainCcActivityLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainCcActivityLogOutcome(DescribeDomainCcActivityLogResult(outcome.result()));
	else
		return DescribeDomainCcActivityLogOutcome(outcome.error());
}

void CdnClient::describeDomainCcActivityLogAsync(const DescribeDomainCcActivityLogRequest& request, const DescribeDomainCcActivityLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainCcActivityLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainCcActivityLogOutcomeCallable CdnClient::describeDomainCcActivityLogCallable(const DescribeDomainCcActivityLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainCcActivityLogOutcome()>>(
			[this, request]()
			{
			return this->describeDomainCcActivityLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainCertificateInfoOutcome CdnClient::describeDomainCertificateInfo(const DescribeDomainCertificateInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainCertificateInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainCertificateInfoOutcome(DescribeDomainCertificateInfoResult(outcome.result()));
	else
		return DescribeDomainCertificateInfoOutcome(outcome.error());
}

void CdnClient::describeDomainCertificateInfoAsync(const DescribeDomainCertificateInfoRequest& request, const DescribeDomainCertificateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainCertificateInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainCertificateInfoOutcomeCallable CdnClient::describeDomainCertificateInfoCallable(const DescribeDomainCertificateInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainCertificateInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDomainCertificateInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainCustomLogConfigOutcome CdnClient::describeDomainCustomLogConfig(const DescribeDomainCustomLogConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainCustomLogConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainCustomLogConfigOutcome(DescribeDomainCustomLogConfigResult(outcome.result()));
	else
		return DescribeDomainCustomLogConfigOutcome(outcome.error());
}

void CdnClient::describeDomainCustomLogConfigAsync(const DescribeDomainCustomLogConfigRequest& request, const DescribeDomainCustomLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainCustomLogConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainCustomLogConfigOutcomeCallable CdnClient::describeDomainCustomLogConfigCallable(const DescribeDomainCustomLogConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainCustomLogConfigOutcome()>>(
			[this, request]()
			{
			return this->describeDomainCustomLogConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainDetailDataByLayerOutcome CdnClient::describeDomainDetailDataByLayer(const DescribeDomainDetailDataByLayerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainDetailDataByLayerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainDetailDataByLayerOutcome(DescribeDomainDetailDataByLayerResult(outcome.result()));
	else
		return DescribeDomainDetailDataByLayerOutcome(outcome.error());
}

void CdnClient::describeDomainDetailDataByLayerAsync(const DescribeDomainDetailDataByLayerRequest& request, const DescribeDomainDetailDataByLayerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainDetailDataByLayer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainDetailDataByLayerOutcomeCallable CdnClient::describeDomainDetailDataByLayerCallable(const DescribeDomainDetailDataByLayerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainDetailDataByLayerOutcome()>>(
			[this, request]()
			{
			return this->describeDomainDetailDataByLayer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainFileSizeProportionDataOutcome CdnClient::describeDomainFileSizeProportionData(const DescribeDomainFileSizeProportionDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainFileSizeProportionDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainFileSizeProportionDataOutcome(DescribeDomainFileSizeProportionDataResult(outcome.result()));
	else
		return DescribeDomainFileSizeProportionDataOutcome(outcome.error());
}

void CdnClient::describeDomainFileSizeProportionDataAsync(const DescribeDomainFileSizeProportionDataRequest& request, const DescribeDomainFileSizeProportionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainFileSizeProportionData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainFileSizeProportionDataOutcomeCallable CdnClient::describeDomainFileSizeProportionDataCallable(const DescribeDomainFileSizeProportionDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainFileSizeProportionDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainFileSizeProportionData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainFlowDataOutcome CdnClient::describeDomainFlowData(const DescribeDomainFlowDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainFlowDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainFlowDataOutcome(DescribeDomainFlowDataResult(outcome.result()));
	else
		return DescribeDomainFlowDataOutcome(outcome.error());
}

void CdnClient::describeDomainFlowDataAsync(const DescribeDomainFlowDataRequest& request, const DescribeDomainFlowDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainFlowData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainFlowDataOutcomeCallable CdnClient::describeDomainFlowDataCallable(const DescribeDomainFlowDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainFlowDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainFlowData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainHitRateDataOutcome CdnClient::describeDomainHitRateData(const DescribeDomainHitRateDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainHitRateDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainHitRateDataOutcome(DescribeDomainHitRateDataResult(outcome.result()));
	else
		return DescribeDomainHitRateDataOutcome(outcome.error());
}

void CdnClient::describeDomainHitRateDataAsync(const DescribeDomainHitRateDataRequest& request, const DescribeDomainHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainHitRateData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainHitRateDataOutcomeCallable CdnClient::describeDomainHitRateDataCallable(const DescribeDomainHitRateDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainHitRateDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainHitRateData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainHttpCodeDataOutcome CdnClient::describeDomainHttpCodeData(const DescribeDomainHttpCodeDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainHttpCodeDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainHttpCodeDataOutcome(DescribeDomainHttpCodeDataResult(outcome.result()));
	else
		return DescribeDomainHttpCodeDataOutcome(outcome.error());
}

void CdnClient::describeDomainHttpCodeDataAsync(const DescribeDomainHttpCodeDataRequest& request, const DescribeDomainHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainHttpCodeData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainHttpCodeDataOutcomeCallable CdnClient::describeDomainHttpCodeDataCallable(const DescribeDomainHttpCodeDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainHttpCodeDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainHttpCodeData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainHttpCodeDataByLayerOutcome CdnClient::describeDomainHttpCodeDataByLayer(const DescribeDomainHttpCodeDataByLayerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainHttpCodeDataByLayerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainHttpCodeDataByLayerOutcome(DescribeDomainHttpCodeDataByLayerResult(outcome.result()));
	else
		return DescribeDomainHttpCodeDataByLayerOutcome(outcome.error());
}

void CdnClient::describeDomainHttpCodeDataByLayerAsync(const DescribeDomainHttpCodeDataByLayerRequest& request, const DescribeDomainHttpCodeDataByLayerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainHttpCodeDataByLayer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainHttpCodeDataByLayerOutcomeCallable CdnClient::describeDomainHttpCodeDataByLayerCallable(const DescribeDomainHttpCodeDataByLayerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainHttpCodeDataByLayerOutcome()>>(
			[this, request]()
			{
			return this->describeDomainHttpCodeDataByLayer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainISPDataOutcome CdnClient::describeDomainISPData(const DescribeDomainISPDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainISPDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainISPDataOutcome(DescribeDomainISPDataResult(outcome.result()));
	else
		return DescribeDomainISPDataOutcome(outcome.error());
}

void CdnClient::describeDomainISPDataAsync(const DescribeDomainISPDataRequest& request, const DescribeDomainISPDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainISPData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainISPDataOutcomeCallable CdnClient::describeDomainISPDataCallable(const DescribeDomainISPDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainISPDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainISPData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainMax95BpsDataOutcome CdnClient::describeDomainMax95BpsData(const DescribeDomainMax95BpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainMax95BpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainMax95BpsDataOutcome(DescribeDomainMax95BpsDataResult(outcome.result()));
	else
		return DescribeDomainMax95BpsDataOutcome(outcome.error());
}

void CdnClient::describeDomainMax95BpsDataAsync(const DescribeDomainMax95BpsDataRequest& request, const DescribeDomainMax95BpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainMax95BpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainMax95BpsDataOutcomeCallable CdnClient::describeDomainMax95BpsDataCallable(const DescribeDomainMax95BpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainMax95BpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainMax95BpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainMultiUsageDataOutcome CdnClient::describeDomainMultiUsageData(const DescribeDomainMultiUsageDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainMultiUsageDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainMultiUsageDataOutcome(DescribeDomainMultiUsageDataResult(outcome.result()));
	else
		return DescribeDomainMultiUsageDataOutcome(outcome.error());
}

void CdnClient::describeDomainMultiUsageDataAsync(const DescribeDomainMultiUsageDataRequest& request, const DescribeDomainMultiUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainMultiUsageData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainMultiUsageDataOutcomeCallable CdnClient::describeDomainMultiUsageDataCallable(const DescribeDomainMultiUsageDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainMultiUsageDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainMultiUsageData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainNamesOfVersionOutcome CdnClient::describeDomainNamesOfVersion(const DescribeDomainNamesOfVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainNamesOfVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainNamesOfVersionOutcome(DescribeDomainNamesOfVersionResult(outcome.result()));
	else
		return DescribeDomainNamesOfVersionOutcome(outcome.error());
}

void CdnClient::describeDomainNamesOfVersionAsync(const DescribeDomainNamesOfVersionRequest& request, const DescribeDomainNamesOfVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainNamesOfVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainNamesOfVersionOutcomeCallable CdnClient::describeDomainNamesOfVersionCallable(const DescribeDomainNamesOfVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainNamesOfVersionOutcome()>>(
			[this, request]()
			{
			return this->describeDomainNamesOfVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainPathDataOutcome CdnClient::describeDomainPathData(const DescribeDomainPathDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainPathDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainPathDataOutcome(DescribeDomainPathDataResult(outcome.result()));
	else
		return DescribeDomainPathDataOutcome(outcome.error());
}

void CdnClient::describeDomainPathDataAsync(const DescribeDomainPathDataRequest& request, const DescribeDomainPathDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainPathData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainPathDataOutcomeCallable CdnClient::describeDomainPathDataCallable(const DescribeDomainPathDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainPathDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainPathData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainPvDataOutcome CdnClient::describeDomainPvData(const DescribeDomainPvDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainPvDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainPvDataOutcome(DescribeDomainPvDataResult(outcome.result()));
	else
		return DescribeDomainPvDataOutcome(outcome.error());
}

void CdnClient::describeDomainPvDataAsync(const DescribeDomainPvDataRequest& request, const DescribeDomainPvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainPvData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainPvDataOutcomeCallable CdnClient::describeDomainPvDataCallable(const DescribeDomainPvDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainPvDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainPvData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainQpsDataOutcome CdnClient::describeDomainQpsData(const DescribeDomainQpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainQpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainQpsDataOutcome(DescribeDomainQpsDataResult(outcome.result()));
	else
		return DescribeDomainQpsDataOutcome(outcome.error());
}

void CdnClient::describeDomainQpsDataAsync(const DescribeDomainQpsDataRequest& request, const DescribeDomainQpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainQpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainQpsDataOutcomeCallable CdnClient::describeDomainQpsDataCallable(const DescribeDomainQpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainQpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainQpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainQpsDataByLayerOutcome CdnClient::describeDomainQpsDataByLayer(const DescribeDomainQpsDataByLayerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainQpsDataByLayerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainQpsDataByLayerOutcome(DescribeDomainQpsDataByLayerResult(outcome.result()));
	else
		return DescribeDomainQpsDataByLayerOutcome(outcome.error());
}

void CdnClient::describeDomainQpsDataByLayerAsync(const DescribeDomainQpsDataByLayerRequest& request, const DescribeDomainQpsDataByLayerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainQpsDataByLayer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainQpsDataByLayerOutcomeCallable CdnClient::describeDomainQpsDataByLayerCallable(const DescribeDomainQpsDataByLayerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainQpsDataByLayerOutcome()>>(
			[this, request]()
			{
			return this->describeDomainQpsDataByLayer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainRealTimeBpsDataOutcome CdnClient::describeDomainRealTimeBpsData(const DescribeDomainRealTimeBpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainRealTimeBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainRealTimeBpsDataOutcome(DescribeDomainRealTimeBpsDataResult(outcome.result()));
	else
		return DescribeDomainRealTimeBpsDataOutcome(outcome.error());
}

void CdnClient::describeDomainRealTimeBpsDataAsync(const DescribeDomainRealTimeBpsDataRequest& request, const DescribeDomainRealTimeBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainRealTimeBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainRealTimeBpsDataOutcomeCallable CdnClient::describeDomainRealTimeBpsDataCallable(const DescribeDomainRealTimeBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainRealTimeBpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainRealTimeBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainRealTimeByteHitRateDataOutcome CdnClient::describeDomainRealTimeByteHitRateData(const DescribeDomainRealTimeByteHitRateDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainRealTimeByteHitRateDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainRealTimeByteHitRateDataOutcome(DescribeDomainRealTimeByteHitRateDataResult(outcome.result()));
	else
		return DescribeDomainRealTimeByteHitRateDataOutcome(outcome.error());
}

void CdnClient::describeDomainRealTimeByteHitRateDataAsync(const DescribeDomainRealTimeByteHitRateDataRequest& request, const DescribeDomainRealTimeByteHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainRealTimeByteHitRateData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainRealTimeByteHitRateDataOutcomeCallable CdnClient::describeDomainRealTimeByteHitRateDataCallable(const DescribeDomainRealTimeByteHitRateDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainRealTimeByteHitRateDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainRealTimeByteHitRateData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainRealTimeDetailDataOutcome CdnClient::describeDomainRealTimeDetailData(const DescribeDomainRealTimeDetailDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainRealTimeDetailDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainRealTimeDetailDataOutcome(DescribeDomainRealTimeDetailDataResult(outcome.result()));
	else
		return DescribeDomainRealTimeDetailDataOutcome(outcome.error());
}

void CdnClient::describeDomainRealTimeDetailDataAsync(const DescribeDomainRealTimeDetailDataRequest& request, const DescribeDomainRealTimeDetailDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainRealTimeDetailData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainRealTimeDetailDataOutcomeCallable CdnClient::describeDomainRealTimeDetailDataCallable(const DescribeDomainRealTimeDetailDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainRealTimeDetailDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainRealTimeDetailData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainRealTimeHttpCodeDataOutcome CdnClient::describeDomainRealTimeHttpCodeData(const DescribeDomainRealTimeHttpCodeDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainRealTimeHttpCodeDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainRealTimeHttpCodeDataOutcome(DescribeDomainRealTimeHttpCodeDataResult(outcome.result()));
	else
		return DescribeDomainRealTimeHttpCodeDataOutcome(outcome.error());
}

void CdnClient::describeDomainRealTimeHttpCodeDataAsync(const DescribeDomainRealTimeHttpCodeDataRequest& request, const DescribeDomainRealTimeHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainRealTimeHttpCodeData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainRealTimeHttpCodeDataOutcomeCallable CdnClient::describeDomainRealTimeHttpCodeDataCallable(const DescribeDomainRealTimeHttpCodeDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainRealTimeHttpCodeDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainRealTimeHttpCodeData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainRealTimeQpsDataOutcome CdnClient::describeDomainRealTimeQpsData(const DescribeDomainRealTimeQpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainRealTimeQpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainRealTimeQpsDataOutcome(DescribeDomainRealTimeQpsDataResult(outcome.result()));
	else
		return DescribeDomainRealTimeQpsDataOutcome(outcome.error());
}

void CdnClient::describeDomainRealTimeQpsDataAsync(const DescribeDomainRealTimeQpsDataRequest& request, const DescribeDomainRealTimeQpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainRealTimeQpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainRealTimeQpsDataOutcomeCallable CdnClient::describeDomainRealTimeQpsDataCallable(const DescribeDomainRealTimeQpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainRealTimeQpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainRealTimeQpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainRealTimeReqHitRateDataOutcome CdnClient::describeDomainRealTimeReqHitRateData(const DescribeDomainRealTimeReqHitRateDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainRealTimeReqHitRateDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainRealTimeReqHitRateDataOutcome(DescribeDomainRealTimeReqHitRateDataResult(outcome.result()));
	else
		return DescribeDomainRealTimeReqHitRateDataOutcome(outcome.error());
}

void CdnClient::describeDomainRealTimeReqHitRateDataAsync(const DescribeDomainRealTimeReqHitRateDataRequest& request, const DescribeDomainRealTimeReqHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainRealTimeReqHitRateData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainRealTimeReqHitRateDataOutcomeCallable CdnClient::describeDomainRealTimeReqHitRateDataCallable(const DescribeDomainRealTimeReqHitRateDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainRealTimeReqHitRateDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainRealTimeReqHitRateData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainRealTimeSrcBpsDataOutcome CdnClient::describeDomainRealTimeSrcBpsData(const DescribeDomainRealTimeSrcBpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainRealTimeSrcBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainRealTimeSrcBpsDataOutcome(DescribeDomainRealTimeSrcBpsDataResult(outcome.result()));
	else
		return DescribeDomainRealTimeSrcBpsDataOutcome(outcome.error());
}

void CdnClient::describeDomainRealTimeSrcBpsDataAsync(const DescribeDomainRealTimeSrcBpsDataRequest& request, const DescribeDomainRealTimeSrcBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainRealTimeSrcBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainRealTimeSrcBpsDataOutcomeCallable CdnClient::describeDomainRealTimeSrcBpsDataCallable(const DescribeDomainRealTimeSrcBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainRealTimeSrcBpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainRealTimeSrcBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainRealTimeSrcHttpCodeDataOutcome CdnClient::describeDomainRealTimeSrcHttpCodeData(const DescribeDomainRealTimeSrcHttpCodeDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainRealTimeSrcHttpCodeDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainRealTimeSrcHttpCodeDataOutcome(DescribeDomainRealTimeSrcHttpCodeDataResult(outcome.result()));
	else
		return DescribeDomainRealTimeSrcHttpCodeDataOutcome(outcome.error());
}

void CdnClient::describeDomainRealTimeSrcHttpCodeDataAsync(const DescribeDomainRealTimeSrcHttpCodeDataRequest& request, const DescribeDomainRealTimeSrcHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainRealTimeSrcHttpCodeData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainRealTimeSrcHttpCodeDataOutcomeCallable CdnClient::describeDomainRealTimeSrcHttpCodeDataCallable(const DescribeDomainRealTimeSrcHttpCodeDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainRealTimeSrcHttpCodeDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainRealTimeSrcHttpCodeData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainRealTimeSrcTrafficDataOutcome CdnClient::describeDomainRealTimeSrcTrafficData(const DescribeDomainRealTimeSrcTrafficDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainRealTimeSrcTrafficDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainRealTimeSrcTrafficDataOutcome(DescribeDomainRealTimeSrcTrafficDataResult(outcome.result()));
	else
		return DescribeDomainRealTimeSrcTrafficDataOutcome(outcome.error());
}

void CdnClient::describeDomainRealTimeSrcTrafficDataAsync(const DescribeDomainRealTimeSrcTrafficDataRequest& request, const DescribeDomainRealTimeSrcTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainRealTimeSrcTrafficData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainRealTimeSrcTrafficDataOutcomeCallable CdnClient::describeDomainRealTimeSrcTrafficDataCallable(const DescribeDomainRealTimeSrcTrafficDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainRealTimeSrcTrafficDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainRealTimeSrcTrafficData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainRealTimeTrafficDataOutcome CdnClient::describeDomainRealTimeTrafficData(const DescribeDomainRealTimeTrafficDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainRealTimeTrafficDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainRealTimeTrafficDataOutcome(DescribeDomainRealTimeTrafficDataResult(outcome.result()));
	else
		return DescribeDomainRealTimeTrafficDataOutcome(outcome.error());
}

void CdnClient::describeDomainRealTimeTrafficDataAsync(const DescribeDomainRealTimeTrafficDataRequest& request, const DescribeDomainRealTimeTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainRealTimeTrafficData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainRealTimeTrafficDataOutcomeCallable CdnClient::describeDomainRealTimeTrafficDataCallable(const DescribeDomainRealTimeTrafficDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainRealTimeTrafficDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainRealTimeTrafficData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainRealtimeLogDeliveryOutcome CdnClient::describeDomainRealtimeLogDelivery(const DescribeDomainRealtimeLogDeliveryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainRealtimeLogDeliveryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainRealtimeLogDeliveryOutcome(DescribeDomainRealtimeLogDeliveryResult(outcome.result()));
	else
		return DescribeDomainRealtimeLogDeliveryOutcome(outcome.error());
}

void CdnClient::describeDomainRealtimeLogDeliveryAsync(const DescribeDomainRealtimeLogDeliveryRequest& request, const DescribeDomainRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainRealtimeLogDelivery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainRealtimeLogDeliveryOutcomeCallable CdnClient::describeDomainRealtimeLogDeliveryCallable(const DescribeDomainRealtimeLogDeliveryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainRealtimeLogDeliveryOutcome()>>(
			[this, request]()
			{
			return this->describeDomainRealtimeLogDelivery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainRegionDataOutcome CdnClient::describeDomainRegionData(const DescribeDomainRegionDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainRegionDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainRegionDataOutcome(DescribeDomainRegionDataResult(outcome.result()));
	else
		return DescribeDomainRegionDataOutcome(outcome.error());
}

void CdnClient::describeDomainRegionDataAsync(const DescribeDomainRegionDataRequest& request, const DescribeDomainRegionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainRegionData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainRegionDataOutcomeCallable CdnClient::describeDomainRegionDataCallable(const DescribeDomainRegionDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainRegionDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainRegionData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainReqHitRateDataOutcome CdnClient::describeDomainReqHitRateData(const DescribeDomainReqHitRateDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainReqHitRateDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainReqHitRateDataOutcome(DescribeDomainReqHitRateDataResult(outcome.result()));
	else
		return DescribeDomainReqHitRateDataOutcome(outcome.error());
}

void CdnClient::describeDomainReqHitRateDataAsync(const DescribeDomainReqHitRateDataRequest& request, const DescribeDomainReqHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainReqHitRateData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainReqHitRateDataOutcomeCallable CdnClient::describeDomainReqHitRateDataCallable(const DescribeDomainReqHitRateDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainReqHitRateDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainReqHitRateData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainSrcBpsDataOutcome CdnClient::describeDomainSrcBpsData(const DescribeDomainSrcBpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainSrcBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainSrcBpsDataOutcome(DescribeDomainSrcBpsDataResult(outcome.result()));
	else
		return DescribeDomainSrcBpsDataOutcome(outcome.error());
}

void CdnClient::describeDomainSrcBpsDataAsync(const DescribeDomainSrcBpsDataRequest& request, const DescribeDomainSrcBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainSrcBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainSrcBpsDataOutcomeCallable CdnClient::describeDomainSrcBpsDataCallable(const DescribeDomainSrcBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainSrcBpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainSrcBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainSrcFlowDataOutcome CdnClient::describeDomainSrcFlowData(const DescribeDomainSrcFlowDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainSrcFlowDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainSrcFlowDataOutcome(DescribeDomainSrcFlowDataResult(outcome.result()));
	else
		return DescribeDomainSrcFlowDataOutcome(outcome.error());
}

void CdnClient::describeDomainSrcFlowDataAsync(const DescribeDomainSrcFlowDataRequest& request, const DescribeDomainSrcFlowDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainSrcFlowData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainSrcFlowDataOutcomeCallable CdnClient::describeDomainSrcFlowDataCallable(const DescribeDomainSrcFlowDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainSrcFlowDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainSrcFlowData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainSrcHttpCodeDataOutcome CdnClient::describeDomainSrcHttpCodeData(const DescribeDomainSrcHttpCodeDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainSrcHttpCodeDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainSrcHttpCodeDataOutcome(DescribeDomainSrcHttpCodeDataResult(outcome.result()));
	else
		return DescribeDomainSrcHttpCodeDataOutcome(outcome.error());
}

void CdnClient::describeDomainSrcHttpCodeDataAsync(const DescribeDomainSrcHttpCodeDataRequest& request, const DescribeDomainSrcHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainSrcHttpCodeData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainSrcHttpCodeDataOutcomeCallable CdnClient::describeDomainSrcHttpCodeDataCallable(const DescribeDomainSrcHttpCodeDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainSrcHttpCodeDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainSrcHttpCodeData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainSrcQpsDataOutcome CdnClient::describeDomainSrcQpsData(const DescribeDomainSrcQpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainSrcQpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainSrcQpsDataOutcome(DescribeDomainSrcQpsDataResult(outcome.result()));
	else
		return DescribeDomainSrcQpsDataOutcome(outcome.error());
}

void CdnClient::describeDomainSrcQpsDataAsync(const DescribeDomainSrcQpsDataRequest& request, const DescribeDomainSrcQpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainSrcQpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainSrcQpsDataOutcomeCallable CdnClient::describeDomainSrcQpsDataCallable(const DescribeDomainSrcQpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainSrcQpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainSrcQpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainSrcTopUrlVisitOutcome CdnClient::describeDomainSrcTopUrlVisit(const DescribeDomainSrcTopUrlVisitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainSrcTopUrlVisitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainSrcTopUrlVisitOutcome(DescribeDomainSrcTopUrlVisitResult(outcome.result()));
	else
		return DescribeDomainSrcTopUrlVisitOutcome(outcome.error());
}

void CdnClient::describeDomainSrcTopUrlVisitAsync(const DescribeDomainSrcTopUrlVisitRequest& request, const DescribeDomainSrcTopUrlVisitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainSrcTopUrlVisit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainSrcTopUrlVisitOutcomeCallable CdnClient::describeDomainSrcTopUrlVisitCallable(const DescribeDomainSrcTopUrlVisitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainSrcTopUrlVisitOutcome()>>(
			[this, request]()
			{
			return this->describeDomainSrcTopUrlVisit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainSrcTrafficDataOutcome CdnClient::describeDomainSrcTrafficData(const DescribeDomainSrcTrafficDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainSrcTrafficDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainSrcTrafficDataOutcome(DescribeDomainSrcTrafficDataResult(outcome.result()));
	else
		return DescribeDomainSrcTrafficDataOutcome(outcome.error());
}

void CdnClient::describeDomainSrcTrafficDataAsync(const DescribeDomainSrcTrafficDataRequest& request, const DescribeDomainSrcTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainSrcTrafficData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainSrcTrafficDataOutcomeCallable CdnClient::describeDomainSrcTrafficDataCallable(const DescribeDomainSrcTrafficDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainSrcTrafficDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainSrcTrafficData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainTopClientIpVisitOutcome CdnClient::describeDomainTopClientIpVisit(const DescribeDomainTopClientIpVisitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainTopClientIpVisitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainTopClientIpVisitOutcome(DescribeDomainTopClientIpVisitResult(outcome.result()));
	else
		return DescribeDomainTopClientIpVisitOutcome(outcome.error());
}

void CdnClient::describeDomainTopClientIpVisitAsync(const DescribeDomainTopClientIpVisitRequest& request, const DescribeDomainTopClientIpVisitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainTopClientIpVisit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainTopClientIpVisitOutcomeCallable CdnClient::describeDomainTopClientIpVisitCallable(const DescribeDomainTopClientIpVisitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainTopClientIpVisitOutcome()>>(
			[this, request]()
			{
			return this->describeDomainTopClientIpVisit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainTopReferVisitOutcome CdnClient::describeDomainTopReferVisit(const DescribeDomainTopReferVisitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainTopReferVisitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainTopReferVisitOutcome(DescribeDomainTopReferVisitResult(outcome.result()));
	else
		return DescribeDomainTopReferVisitOutcome(outcome.error());
}

void CdnClient::describeDomainTopReferVisitAsync(const DescribeDomainTopReferVisitRequest& request, const DescribeDomainTopReferVisitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainTopReferVisit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainTopReferVisitOutcomeCallable CdnClient::describeDomainTopReferVisitCallable(const DescribeDomainTopReferVisitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainTopReferVisitOutcome()>>(
			[this, request]()
			{
			return this->describeDomainTopReferVisit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainTopUrlVisitOutcome CdnClient::describeDomainTopUrlVisit(const DescribeDomainTopUrlVisitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainTopUrlVisitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainTopUrlVisitOutcome(DescribeDomainTopUrlVisitResult(outcome.result()));
	else
		return DescribeDomainTopUrlVisitOutcome(outcome.error());
}

void CdnClient::describeDomainTopUrlVisitAsync(const DescribeDomainTopUrlVisitRequest& request, const DescribeDomainTopUrlVisitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainTopUrlVisit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainTopUrlVisitOutcomeCallable CdnClient::describeDomainTopUrlVisitCallable(const DescribeDomainTopUrlVisitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainTopUrlVisitOutcome()>>(
			[this, request]()
			{
			return this->describeDomainTopUrlVisit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainTrafficDataOutcome CdnClient::describeDomainTrafficData(const DescribeDomainTrafficDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainTrafficDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainTrafficDataOutcome(DescribeDomainTrafficDataResult(outcome.result()));
	else
		return DescribeDomainTrafficDataOutcome(outcome.error());
}

void CdnClient::describeDomainTrafficDataAsync(const DescribeDomainTrafficDataRequest& request, const DescribeDomainTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainTrafficData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainTrafficDataOutcomeCallable CdnClient::describeDomainTrafficDataCallable(const DescribeDomainTrafficDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainTrafficDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainTrafficData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainUsageDataOutcome CdnClient::describeDomainUsageData(const DescribeDomainUsageDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainUsageDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainUsageDataOutcome(DescribeDomainUsageDataResult(outcome.result()));
	else
		return DescribeDomainUsageDataOutcome(outcome.error());
}

void CdnClient::describeDomainUsageDataAsync(const DescribeDomainUsageDataRequest& request, const DescribeDomainUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainUsageData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainUsageDataOutcomeCallable CdnClient::describeDomainUsageDataCallable(const DescribeDomainUsageDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainUsageDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainUsageData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainUvDataOutcome CdnClient::describeDomainUvData(const DescribeDomainUvDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainUvDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainUvDataOutcome(DescribeDomainUvDataResult(outcome.result()));
	else
		return DescribeDomainUvDataOutcome(outcome.error());
}

void CdnClient::describeDomainUvDataAsync(const DescribeDomainUvDataRequest& request, const DescribeDomainUvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainUvData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainUvDataOutcomeCallable CdnClient::describeDomainUvDataCallable(const DescribeDomainUvDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainUvDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainUvData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainsBySourceOutcome CdnClient::describeDomainsBySource(const DescribeDomainsBySourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainsBySourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainsBySourceOutcome(DescribeDomainsBySourceResult(outcome.result()));
	else
		return DescribeDomainsBySourceOutcome(outcome.error());
}

void CdnClient::describeDomainsBySourceAsync(const DescribeDomainsBySourceRequest& request, const DescribeDomainsBySourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainsBySource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainsBySourceOutcomeCallable CdnClient::describeDomainsBySourceCallable(const DescribeDomainsBySourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainsBySourceOutcome()>>(
			[this, request]()
			{
			return this->describeDomainsBySource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainsUsageByDayOutcome CdnClient::describeDomainsUsageByDay(const DescribeDomainsUsageByDayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainsUsageByDayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainsUsageByDayOutcome(DescribeDomainsUsageByDayResult(outcome.result()));
	else
		return DescribeDomainsUsageByDayOutcome(outcome.error());
}

void CdnClient::describeDomainsUsageByDayAsync(const DescribeDomainsUsageByDayRequest& request, const DescribeDomainsUsageByDayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainsUsageByDay(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainsUsageByDayOutcomeCallable CdnClient::describeDomainsUsageByDayCallable(const DescribeDomainsUsageByDayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainsUsageByDayOutcome()>>(
			[this, request]()
			{
			return this->describeDomainsUsageByDay(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeEsExceptionDataOutcome CdnClient::describeEsExceptionData(const DescribeEsExceptionDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEsExceptionDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEsExceptionDataOutcome(DescribeEsExceptionDataResult(outcome.result()));
	else
		return DescribeEsExceptionDataOutcome(outcome.error());
}

void CdnClient::describeEsExceptionDataAsync(const DescribeEsExceptionDataRequest& request, const DescribeEsExceptionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEsExceptionData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeEsExceptionDataOutcomeCallable CdnClient::describeEsExceptionDataCallable(const DescribeEsExceptionDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEsExceptionDataOutcome()>>(
			[this, request]()
			{
			return this->describeEsExceptionData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeEsExecuteDataOutcome CdnClient::describeEsExecuteData(const DescribeEsExecuteDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEsExecuteDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEsExecuteDataOutcome(DescribeEsExecuteDataResult(outcome.result()));
	else
		return DescribeEsExecuteDataOutcome(outcome.error());
}

void CdnClient::describeEsExecuteDataAsync(const DescribeEsExecuteDataRequest& request, const DescribeEsExecuteDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEsExecuteData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeEsExecuteDataOutcomeCallable CdnClient::describeEsExecuteDataCallable(const DescribeEsExecuteDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEsExecuteDataOutcome()>>(
			[this, request]()
			{
			return this->describeEsExecuteData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeFCTriggerOutcome CdnClient::describeFCTrigger(const DescribeFCTriggerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFCTriggerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFCTriggerOutcome(DescribeFCTriggerResult(outcome.result()));
	else
		return DescribeFCTriggerOutcome(outcome.error());
}

void CdnClient::describeFCTriggerAsync(const DescribeFCTriggerRequest& request, const DescribeFCTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFCTrigger(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeFCTriggerOutcomeCallable CdnClient::describeFCTriggerCallable(const DescribeFCTriggerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFCTriggerOutcome()>>(
			[this, request]()
			{
			return this->describeFCTrigger(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeIllegalUrlExportTaskOutcome CdnClient::describeIllegalUrlExportTask(const DescribeIllegalUrlExportTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIllegalUrlExportTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIllegalUrlExportTaskOutcome(DescribeIllegalUrlExportTaskResult(outcome.result()));
	else
		return DescribeIllegalUrlExportTaskOutcome(outcome.error());
}

void CdnClient::describeIllegalUrlExportTaskAsync(const DescribeIllegalUrlExportTaskRequest& request, const DescribeIllegalUrlExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIllegalUrlExportTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeIllegalUrlExportTaskOutcomeCallable CdnClient::describeIllegalUrlExportTaskCallable(const DescribeIllegalUrlExportTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIllegalUrlExportTaskOutcome()>>(
			[this, request]()
			{
			return this->describeIllegalUrlExportTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeIpInfoOutcome CdnClient::describeIpInfo(const DescribeIpInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIpInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIpInfoOutcome(DescribeIpInfoResult(outcome.result()));
	else
		return DescribeIpInfoOutcome(outcome.error());
}

void CdnClient::describeIpInfoAsync(const DescribeIpInfoRequest& request, const DescribeIpInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIpInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeIpInfoOutcomeCallable CdnClient::describeIpInfoCallable(const DescribeIpInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIpInfoOutcome()>>(
			[this, request]()
			{
			return this->describeIpInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeIpStatusOutcome CdnClient::describeIpStatus(const DescribeIpStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIpStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIpStatusOutcome(DescribeIpStatusResult(outcome.result()));
	else
		return DescribeIpStatusOutcome(outcome.error());
}

void CdnClient::describeIpStatusAsync(const DescribeIpStatusRequest& request, const DescribeIpStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIpStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeIpStatusOutcomeCallable CdnClient::describeIpStatusCallable(const DescribeIpStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIpStatusOutcome()>>(
			[this, request]()
			{
			return this->describeIpStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeL2VipsByDomainOutcome CdnClient::describeL2VipsByDomain(const DescribeL2VipsByDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeL2VipsByDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeL2VipsByDomainOutcome(DescribeL2VipsByDomainResult(outcome.result()));
	else
		return DescribeL2VipsByDomainOutcome(outcome.error());
}

void CdnClient::describeL2VipsByDomainAsync(const DescribeL2VipsByDomainRequest& request, const DescribeL2VipsByDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeL2VipsByDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeL2VipsByDomainOutcomeCallable CdnClient::describeL2VipsByDomainCallable(const DescribeL2VipsByDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeL2VipsByDomainOutcome()>>(
			[this, request]()
			{
			return this->describeL2VipsByDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeRangeDataByLocateAndIspServiceOutcome CdnClient::describeRangeDataByLocateAndIspService(const DescribeRangeDataByLocateAndIspServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRangeDataByLocateAndIspServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRangeDataByLocateAndIspServiceOutcome(DescribeRangeDataByLocateAndIspServiceResult(outcome.result()));
	else
		return DescribeRangeDataByLocateAndIspServiceOutcome(outcome.error());
}

void CdnClient::describeRangeDataByLocateAndIspServiceAsync(const DescribeRangeDataByLocateAndIspServiceRequest& request, const DescribeRangeDataByLocateAndIspServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRangeDataByLocateAndIspService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeRangeDataByLocateAndIspServiceOutcomeCallable CdnClient::describeRangeDataByLocateAndIspServiceCallable(const DescribeRangeDataByLocateAndIspServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRangeDataByLocateAndIspServiceOutcome()>>(
			[this, request]()
			{
			return this->describeRangeDataByLocateAndIspService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeRealtimeDeliveryAccOutcome CdnClient::describeRealtimeDeliveryAcc(const DescribeRealtimeDeliveryAccRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRealtimeDeliveryAccOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRealtimeDeliveryAccOutcome(DescribeRealtimeDeliveryAccResult(outcome.result()));
	else
		return DescribeRealtimeDeliveryAccOutcome(outcome.error());
}

void CdnClient::describeRealtimeDeliveryAccAsync(const DescribeRealtimeDeliveryAccRequest& request, const DescribeRealtimeDeliveryAccAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRealtimeDeliveryAcc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeRealtimeDeliveryAccOutcomeCallable CdnClient::describeRealtimeDeliveryAccCallable(const DescribeRealtimeDeliveryAccRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRealtimeDeliveryAccOutcome()>>(
			[this, request]()
			{
			return this->describeRealtimeDeliveryAcc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeRealtimeLogAuthorizedOutcome CdnClient::describeRealtimeLogAuthorized(const DescribeRealtimeLogAuthorizedRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRealtimeLogAuthorizedOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRealtimeLogAuthorizedOutcome(DescribeRealtimeLogAuthorizedResult(outcome.result()));
	else
		return DescribeRealtimeLogAuthorizedOutcome(outcome.error());
}

void CdnClient::describeRealtimeLogAuthorizedAsync(const DescribeRealtimeLogAuthorizedRequest& request, const DescribeRealtimeLogAuthorizedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRealtimeLogAuthorized(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeRealtimeLogAuthorizedOutcomeCallable CdnClient::describeRealtimeLogAuthorizedCallable(const DescribeRealtimeLogAuthorizedRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRealtimeLogAuthorizedOutcome()>>(
			[this, request]()
			{
			return this->describeRealtimeLogAuthorized(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeRefreshQuotaOutcome CdnClient::describeRefreshQuota(const DescribeRefreshQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRefreshQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRefreshQuotaOutcome(DescribeRefreshQuotaResult(outcome.result()));
	else
		return DescribeRefreshQuotaOutcome(outcome.error());
}

void CdnClient::describeRefreshQuotaAsync(const DescribeRefreshQuotaRequest& request, const DescribeRefreshQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRefreshQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeRefreshQuotaOutcomeCallable CdnClient::describeRefreshQuotaCallable(const DescribeRefreshQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRefreshQuotaOutcome()>>(
			[this, request]()
			{
			return this->describeRefreshQuota(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeRefreshTaskByIdOutcome CdnClient::describeRefreshTaskById(const DescribeRefreshTaskByIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRefreshTaskByIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRefreshTaskByIdOutcome(DescribeRefreshTaskByIdResult(outcome.result()));
	else
		return DescribeRefreshTaskByIdOutcome(outcome.error());
}

void CdnClient::describeRefreshTaskByIdAsync(const DescribeRefreshTaskByIdRequest& request, const DescribeRefreshTaskByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRefreshTaskById(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeRefreshTaskByIdOutcomeCallable CdnClient::describeRefreshTaskByIdCallable(const DescribeRefreshTaskByIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRefreshTaskByIdOutcome()>>(
			[this, request]()
			{
			return this->describeRefreshTaskById(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeRefreshTasksOutcome CdnClient::describeRefreshTasks(const DescribeRefreshTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRefreshTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRefreshTasksOutcome(DescribeRefreshTasksResult(outcome.result()));
	else
		return DescribeRefreshTasksOutcome(outcome.error());
}

void CdnClient::describeRefreshTasksAsync(const DescribeRefreshTasksRequest& request, const DescribeRefreshTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRefreshTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeRefreshTasksOutcomeCallable CdnClient::describeRefreshTasksCallable(const DescribeRefreshTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRefreshTasksOutcome()>>(
			[this, request]()
			{
			return this->describeRefreshTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeStagingIpOutcome CdnClient::describeStagingIp(const DescribeStagingIpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStagingIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStagingIpOutcome(DescribeStagingIpResult(outcome.result()));
	else
		return DescribeStagingIpOutcome(outcome.error());
}

void CdnClient::describeStagingIpAsync(const DescribeStagingIpRequest& request, const DescribeStagingIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStagingIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeStagingIpOutcomeCallable CdnClient::describeStagingIpCallable(const DescribeStagingIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStagingIpOutcome()>>(
			[this, request]()
			{
			return this->describeStagingIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeTagResourcesOutcome CdnClient::describeTagResources(const DescribeTagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTagResourcesOutcome(DescribeTagResourcesResult(outcome.result()));
	else
		return DescribeTagResourcesOutcome(outcome.error());
}

void CdnClient::describeTagResourcesAsync(const DescribeTagResourcesRequest& request, const DescribeTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeTagResourcesOutcomeCallable CdnClient::describeTagResourcesCallable(const DescribeTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->describeTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeTopDomainsByFlowOutcome CdnClient::describeTopDomainsByFlow(const DescribeTopDomainsByFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTopDomainsByFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTopDomainsByFlowOutcome(DescribeTopDomainsByFlowResult(outcome.result()));
	else
		return DescribeTopDomainsByFlowOutcome(outcome.error());
}

void CdnClient::describeTopDomainsByFlowAsync(const DescribeTopDomainsByFlowRequest& request, const DescribeTopDomainsByFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTopDomainsByFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeTopDomainsByFlowOutcomeCallable CdnClient::describeTopDomainsByFlowCallable(const DescribeTopDomainsByFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTopDomainsByFlowOutcome()>>(
			[this, request]()
			{
			return this->describeTopDomainsByFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeUserCertificateExpireCountOutcome CdnClient::describeUserCertificateExpireCount(const DescribeUserCertificateExpireCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserCertificateExpireCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserCertificateExpireCountOutcome(DescribeUserCertificateExpireCountResult(outcome.result()));
	else
		return DescribeUserCertificateExpireCountOutcome(outcome.error());
}

void CdnClient::describeUserCertificateExpireCountAsync(const DescribeUserCertificateExpireCountRequest& request, const DescribeUserCertificateExpireCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserCertificateExpireCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeUserCertificateExpireCountOutcomeCallable CdnClient::describeUserCertificateExpireCountCallable(const DescribeUserCertificateExpireCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserCertificateExpireCountOutcome()>>(
			[this, request]()
			{
			return this->describeUserCertificateExpireCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeUserConfigsOutcome CdnClient::describeUserConfigs(const DescribeUserConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserConfigsOutcome(DescribeUserConfigsResult(outcome.result()));
	else
		return DescribeUserConfigsOutcome(outcome.error());
}

void CdnClient::describeUserConfigsAsync(const DescribeUserConfigsRequest& request, const DescribeUserConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeUserConfigsOutcomeCallable CdnClient::describeUserConfigsCallable(const DescribeUserConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserConfigsOutcome()>>(
			[this, request]()
			{
			return this->describeUserConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeUserDomainsOutcome CdnClient::describeUserDomains(const DescribeUserDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserDomainsOutcome(DescribeUserDomainsResult(outcome.result()));
	else
		return DescribeUserDomainsOutcome(outcome.error());
}

void CdnClient::describeUserDomainsAsync(const DescribeUserDomainsRequest& request, const DescribeUserDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeUserDomainsOutcomeCallable CdnClient::describeUserDomainsCallable(const DescribeUserDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserDomainsOutcome()>>(
			[this, request]()
			{
			return this->describeUserDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeUserTagsOutcome CdnClient::describeUserTags(const DescribeUserTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserTagsOutcome(DescribeUserTagsResult(outcome.result()));
	else
		return DescribeUserTagsOutcome(outcome.error());
}

void CdnClient::describeUserTagsAsync(const DescribeUserTagsRequest& request, const DescribeUserTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeUserTagsOutcomeCallable CdnClient::describeUserTagsCallable(const DescribeUserTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserTagsOutcome()>>(
			[this, request]()
			{
			return this->describeUserTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeUserUsageDataExportTaskOutcome CdnClient::describeUserUsageDataExportTask(const DescribeUserUsageDataExportTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserUsageDataExportTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserUsageDataExportTaskOutcome(DescribeUserUsageDataExportTaskResult(outcome.result()));
	else
		return DescribeUserUsageDataExportTaskOutcome(outcome.error());
}

void CdnClient::describeUserUsageDataExportTaskAsync(const DescribeUserUsageDataExportTaskRequest& request, const DescribeUserUsageDataExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserUsageDataExportTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeUserUsageDataExportTaskOutcomeCallable CdnClient::describeUserUsageDataExportTaskCallable(const DescribeUserUsageDataExportTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserUsageDataExportTaskOutcome()>>(
			[this, request]()
			{
			return this->describeUserUsageDataExportTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeUserUsageDetailDataExportTaskOutcome CdnClient::describeUserUsageDetailDataExportTask(const DescribeUserUsageDetailDataExportTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserUsageDetailDataExportTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserUsageDetailDataExportTaskOutcome(DescribeUserUsageDetailDataExportTaskResult(outcome.result()));
	else
		return DescribeUserUsageDetailDataExportTaskOutcome(outcome.error());
}

void CdnClient::describeUserUsageDetailDataExportTaskAsync(const DescribeUserUsageDetailDataExportTaskRequest& request, const DescribeUserUsageDetailDataExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserUsageDetailDataExportTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeUserUsageDetailDataExportTaskOutcomeCallable CdnClient::describeUserUsageDetailDataExportTaskCallable(const DescribeUserUsageDetailDataExportTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserUsageDetailDataExportTaskOutcome()>>(
			[this, request]()
			{
			return this->describeUserUsageDetailDataExportTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeUserVipsByDomainOutcome CdnClient::describeUserVipsByDomain(const DescribeUserVipsByDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserVipsByDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserVipsByDomainOutcome(DescribeUserVipsByDomainResult(outcome.result()));
	else
		return DescribeUserVipsByDomainOutcome(outcome.error());
}

void CdnClient::describeUserVipsByDomainAsync(const DescribeUserVipsByDomainRequest& request, const DescribeUserVipsByDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserVipsByDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeUserVipsByDomainOutcomeCallable CdnClient::describeUserVipsByDomainCallable(const DescribeUserVipsByDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserVipsByDomainOutcome()>>(
			[this, request]()
			{
			return this->describeUserVipsByDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeVerifyContentOutcome CdnClient::describeVerifyContent(const DescribeVerifyContentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVerifyContentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVerifyContentOutcome(DescribeVerifyContentResult(outcome.result()));
	else
		return DescribeVerifyContentOutcome(outcome.error());
}

void CdnClient::describeVerifyContentAsync(const DescribeVerifyContentRequest& request, const DescribeVerifyContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVerifyContent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeVerifyContentOutcomeCallable CdnClient::describeVerifyContentCallable(const DescribeVerifyContentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVerifyContentOutcome()>>(
			[this, request]()
			{
			return this->describeVerifyContent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DisableRealtimeLogDeliveryOutcome CdnClient::disableRealtimeLogDelivery(const DisableRealtimeLogDeliveryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableRealtimeLogDeliveryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableRealtimeLogDeliveryOutcome(DisableRealtimeLogDeliveryResult(outcome.result()));
	else
		return DisableRealtimeLogDeliveryOutcome(outcome.error());
}

void CdnClient::disableRealtimeLogDeliveryAsync(const DisableRealtimeLogDeliveryRequest& request, const DisableRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableRealtimeLogDelivery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DisableRealtimeLogDeliveryOutcomeCallable CdnClient::disableRealtimeLogDeliveryCallable(const DisableRealtimeLogDeliveryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableRealtimeLogDeliveryOutcome()>>(
			[this, request]()
			{
			return this->disableRealtimeLogDelivery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::EnableRealtimeLogDeliveryOutcome CdnClient::enableRealtimeLogDelivery(const EnableRealtimeLogDeliveryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableRealtimeLogDeliveryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableRealtimeLogDeliveryOutcome(EnableRealtimeLogDeliveryResult(outcome.result()));
	else
		return EnableRealtimeLogDeliveryOutcome(outcome.error());
}

void CdnClient::enableRealtimeLogDeliveryAsync(const EnableRealtimeLogDeliveryRequest& request, const EnableRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableRealtimeLogDelivery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::EnableRealtimeLogDeliveryOutcomeCallable CdnClient::enableRealtimeLogDeliveryCallable(const EnableRealtimeLogDeliveryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableRealtimeLogDeliveryOutcome()>>(
			[this, request]()
			{
			return this->enableRealtimeLogDelivery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::ListDomainsByLogConfigIdOutcome CdnClient::listDomainsByLogConfigId(const ListDomainsByLogConfigIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDomainsByLogConfigIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDomainsByLogConfigIdOutcome(ListDomainsByLogConfigIdResult(outcome.result()));
	else
		return ListDomainsByLogConfigIdOutcome(outcome.error());
}

void CdnClient::listDomainsByLogConfigIdAsync(const ListDomainsByLogConfigIdRequest& request, const ListDomainsByLogConfigIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDomainsByLogConfigId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::ListDomainsByLogConfigIdOutcomeCallable CdnClient::listDomainsByLogConfigIdCallable(const ListDomainsByLogConfigIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDomainsByLogConfigIdOutcome()>>(
			[this, request]()
			{
			return this->listDomainsByLogConfigId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::ListFCTriggerOutcome CdnClient::listFCTrigger(const ListFCTriggerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFCTriggerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFCTriggerOutcome(ListFCTriggerResult(outcome.result()));
	else
		return ListFCTriggerOutcome(outcome.error());
}

void CdnClient::listFCTriggerAsync(const ListFCTriggerRequest& request, const ListFCTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFCTrigger(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::ListFCTriggerOutcomeCallable CdnClient::listFCTriggerCallable(const ListFCTriggerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFCTriggerOutcome()>>(
			[this, request]()
			{
			return this->listFCTrigger(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::ListRealtimeLogDeliveryDomainsOutcome CdnClient::listRealtimeLogDeliveryDomains(const ListRealtimeLogDeliveryDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRealtimeLogDeliveryDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRealtimeLogDeliveryDomainsOutcome(ListRealtimeLogDeliveryDomainsResult(outcome.result()));
	else
		return ListRealtimeLogDeliveryDomainsOutcome(outcome.error());
}

void CdnClient::listRealtimeLogDeliveryDomainsAsync(const ListRealtimeLogDeliveryDomainsRequest& request, const ListRealtimeLogDeliveryDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRealtimeLogDeliveryDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::ListRealtimeLogDeliveryDomainsOutcomeCallable CdnClient::listRealtimeLogDeliveryDomainsCallable(const ListRealtimeLogDeliveryDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRealtimeLogDeliveryDomainsOutcome()>>(
			[this, request]()
			{
			return this->listRealtimeLogDeliveryDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::ListRealtimeLogDeliveryInfosOutcome CdnClient::listRealtimeLogDeliveryInfos(const ListRealtimeLogDeliveryInfosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRealtimeLogDeliveryInfosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRealtimeLogDeliveryInfosOutcome(ListRealtimeLogDeliveryInfosResult(outcome.result()));
	else
		return ListRealtimeLogDeliveryInfosOutcome(outcome.error());
}

void CdnClient::listRealtimeLogDeliveryInfosAsync(const ListRealtimeLogDeliveryInfosRequest& request, const ListRealtimeLogDeliveryInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRealtimeLogDeliveryInfos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::ListRealtimeLogDeliveryInfosOutcomeCallable CdnClient::listRealtimeLogDeliveryInfosCallable(const ListRealtimeLogDeliveryInfosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRealtimeLogDeliveryInfosOutcome()>>(
			[this, request]()
			{
			return this->listRealtimeLogDeliveryInfos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::ListUserCustomLogConfigOutcome CdnClient::listUserCustomLogConfig(const ListUserCustomLogConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserCustomLogConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserCustomLogConfigOutcome(ListUserCustomLogConfigResult(outcome.result()));
	else
		return ListUserCustomLogConfigOutcome(outcome.error());
}

void CdnClient::listUserCustomLogConfigAsync(const ListUserCustomLogConfigRequest& request, const ListUserCustomLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserCustomLogConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::ListUserCustomLogConfigOutcomeCallable CdnClient::listUserCustomLogConfigCallable(const ListUserCustomLogConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserCustomLogConfigOutcome()>>(
			[this, request]()
			{
			return this->listUserCustomLogConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::ModifyCdnDomainOutcome CdnClient::modifyCdnDomain(const ModifyCdnDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCdnDomainOutcome(ModifyCdnDomainResult(outcome.result()));
	else
		return ModifyCdnDomainOutcome(outcome.error());
}

void CdnClient::modifyCdnDomainAsync(const ModifyCdnDomainRequest& request, const ModifyCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::ModifyCdnDomainOutcomeCallable CdnClient::modifyCdnDomainCallable(const ModifyCdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCdnDomainOutcome()>>(
			[this, request]()
			{
			return this->modifyCdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::ModifyCdnDomainSchdmByPropertyOutcome CdnClient::modifyCdnDomainSchdmByProperty(const ModifyCdnDomainSchdmByPropertyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCdnDomainSchdmByPropertyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCdnDomainSchdmByPropertyOutcome(ModifyCdnDomainSchdmByPropertyResult(outcome.result()));
	else
		return ModifyCdnDomainSchdmByPropertyOutcome(outcome.error());
}

void CdnClient::modifyCdnDomainSchdmByPropertyAsync(const ModifyCdnDomainSchdmByPropertyRequest& request, const ModifyCdnDomainSchdmByPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCdnDomainSchdmByProperty(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::ModifyCdnDomainSchdmByPropertyOutcomeCallable CdnClient::modifyCdnDomainSchdmByPropertyCallable(const ModifyCdnDomainSchdmByPropertyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCdnDomainSchdmByPropertyOutcome()>>(
			[this, request]()
			{
			return this->modifyCdnDomainSchdmByProperty(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::ModifyRealtimeLogDeliveryOutcome CdnClient::modifyRealtimeLogDelivery(const ModifyRealtimeLogDeliveryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRealtimeLogDeliveryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRealtimeLogDeliveryOutcome(ModifyRealtimeLogDeliveryResult(outcome.result()));
	else
		return ModifyRealtimeLogDeliveryOutcome(outcome.error());
}

void CdnClient::modifyRealtimeLogDeliveryAsync(const ModifyRealtimeLogDeliveryRequest& request, const ModifyRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRealtimeLogDelivery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::ModifyRealtimeLogDeliveryOutcomeCallable CdnClient::modifyRealtimeLogDeliveryCallable(const ModifyRealtimeLogDeliveryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRealtimeLogDeliveryOutcome()>>(
			[this, request]()
			{
			return this->modifyRealtimeLogDelivery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::OpenCdnServiceOutcome CdnClient::openCdnService(const OpenCdnServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenCdnServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenCdnServiceOutcome(OpenCdnServiceResult(outcome.result()));
	else
		return OpenCdnServiceOutcome(outcome.error());
}

void CdnClient::openCdnServiceAsync(const OpenCdnServiceRequest& request, const OpenCdnServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openCdnService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::OpenCdnServiceOutcomeCallable CdnClient::openCdnServiceCallable(const OpenCdnServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenCdnServiceOutcome()>>(
			[this, request]()
			{
			return this->openCdnService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::PublishStagingConfigToProductionOutcome CdnClient::publishStagingConfigToProduction(const PublishStagingConfigToProductionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishStagingConfigToProductionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishStagingConfigToProductionOutcome(PublishStagingConfigToProductionResult(outcome.result()));
	else
		return PublishStagingConfigToProductionOutcome(outcome.error());
}

void CdnClient::publishStagingConfigToProductionAsync(const PublishStagingConfigToProductionRequest& request, const PublishStagingConfigToProductionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishStagingConfigToProduction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::PublishStagingConfigToProductionOutcomeCallable CdnClient::publishStagingConfigToProductionCallable(const PublishStagingConfigToProductionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishStagingConfigToProductionOutcome()>>(
			[this, request]()
			{
			return this->publishStagingConfigToProduction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::PushObjectCacheOutcome CdnClient::pushObjectCache(const PushObjectCacheRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PushObjectCacheOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PushObjectCacheOutcome(PushObjectCacheResult(outcome.result()));
	else
		return PushObjectCacheOutcome(outcome.error());
}

void CdnClient::pushObjectCacheAsync(const PushObjectCacheRequest& request, const PushObjectCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pushObjectCache(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::PushObjectCacheOutcomeCallable CdnClient::pushObjectCacheCallable(const PushObjectCacheRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PushObjectCacheOutcome()>>(
			[this, request]()
			{
			return this->pushObjectCache(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::RefreshObjectCachesOutcome CdnClient::refreshObjectCaches(const RefreshObjectCachesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshObjectCachesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshObjectCachesOutcome(RefreshObjectCachesResult(outcome.result()));
	else
		return RefreshObjectCachesOutcome(outcome.error());
}

void CdnClient::refreshObjectCachesAsync(const RefreshObjectCachesRequest& request, const RefreshObjectCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshObjectCaches(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::RefreshObjectCachesOutcomeCallable CdnClient::refreshObjectCachesCallable(const RefreshObjectCachesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshObjectCachesOutcome()>>(
			[this, request]()
			{
			return this->refreshObjectCaches(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::RollbackStagingConfigOutcome CdnClient::rollbackStagingConfig(const RollbackStagingConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RollbackStagingConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RollbackStagingConfigOutcome(RollbackStagingConfigResult(outcome.result()));
	else
		return RollbackStagingConfigOutcome(outcome.error());
}

void CdnClient::rollbackStagingConfigAsync(const RollbackStagingConfigRequest& request, const RollbackStagingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rollbackStagingConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::RollbackStagingConfigOutcomeCallable CdnClient::rollbackStagingConfigCallable(const RollbackStagingConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RollbackStagingConfigOutcome()>>(
			[this, request]()
			{
			return this->rollbackStagingConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetCdnDomainCSRCertificateOutcome CdnClient::setCdnDomainCSRCertificate(const SetCdnDomainCSRCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetCdnDomainCSRCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetCdnDomainCSRCertificateOutcome(SetCdnDomainCSRCertificateResult(outcome.result()));
	else
		return SetCdnDomainCSRCertificateOutcome(outcome.error());
}

void CdnClient::setCdnDomainCSRCertificateAsync(const SetCdnDomainCSRCertificateRequest& request, const SetCdnDomainCSRCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setCdnDomainCSRCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetCdnDomainCSRCertificateOutcomeCallable CdnClient::setCdnDomainCSRCertificateCallable(const SetCdnDomainCSRCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetCdnDomainCSRCertificateOutcome()>>(
			[this, request]()
			{
			return this->setCdnDomainCSRCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetCdnDomainSMCertificateOutcome CdnClient::setCdnDomainSMCertificate(const SetCdnDomainSMCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetCdnDomainSMCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetCdnDomainSMCertificateOutcome(SetCdnDomainSMCertificateResult(outcome.result()));
	else
		return SetCdnDomainSMCertificateOutcome(outcome.error());
}

void CdnClient::setCdnDomainSMCertificateAsync(const SetCdnDomainSMCertificateRequest& request, const SetCdnDomainSMCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setCdnDomainSMCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetCdnDomainSMCertificateOutcomeCallable CdnClient::setCdnDomainSMCertificateCallable(const SetCdnDomainSMCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetCdnDomainSMCertificateOutcome()>>(
			[this, request]()
			{
			return this->setCdnDomainSMCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetCdnDomainStagingConfigOutcome CdnClient::setCdnDomainStagingConfig(const SetCdnDomainStagingConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetCdnDomainStagingConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetCdnDomainStagingConfigOutcome(SetCdnDomainStagingConfigResult(outcome.result()));
	else
		return SetCdnDomainStagingConfigOutcome(outcome.error());
}

void CdnClient::setCdnDomainStagingConfigAsync(const SetCdnDomainStagingConfigRequest& request, const SetCdnDomainStagingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setCdnDomainStagingConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetCdnDomainStagingConfigOutcomeCallable CdnClient::setCdnDomainStagingConfigCallable(const SetCdnDomainStagingConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetCdnDomainStagingConfigOutcome()>>(
			[this, request]()
			{
			return this->setCdnDomainStagingConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetConfigOfVersionOutcome CdnClient::setConfigOfVersion(const SetConfigOfVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetConfigOfVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetConfigOfVersionOutcome(SetConfigOfVersionResult(outcome.result()));
	else
		return SetConfigOfVersionOutcome(outcome.error());
}

void CdnClient::setConfigOfVersionAsync(const SetConfigOfVersionRequest& request, const SetConfigOfVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setConfigOfVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetConfigOfVersionOutcomeCallable CdnClient::setConfigOfVersionCallable(const SetConfigOfVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetConfigOfVersionOutcome()>>(
			[this, request]()
			{
			return this->setConfigOfVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetDomainServerCertificateOutcome CdnClient::setDomainServerCertificate(const SetDomainServerCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDomainServerCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDomainServerCertificateOutcome(SetDomainServerCertificateResult(outcome.result()));
	else
		return SetDomainServerCertificateOutcome(outcome.error());
}

void CdnClient::setDomainServerCertificateAsync(const SetDomainServerCertificateRequest& request, const SetDomainServerCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDomainServerCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetDomainServerCertificateOutcomeCallable CdnClient::setDomainServerCertificateCallable(const SetDomainServerCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDomainServerCertificateOutcome()>>(
			[this, request]()
			{
			return this->setDomainServerCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetReqHeaderConfigOutcome CdnClient::setReqHeaderConfig(const SetReqHeaderConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetReqHeaderConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetReqHeaderConfigOutcome(SetReqHeaderConfigResult(outcome.result()));
	else
		return SetReqHeaderConfigOutcome(outcome.error());
}

void CdnClient::setReqHeaderConfigAsync(const SetReqHeaderConfigRequest& request, const SetReqHeaderConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setReqHeaderConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetReqHeaderConfigOutcomeCallable CdnClient::setReqHeaderConfigCallable(const SetReqHeaderConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetReqHeaderConfigOutcome()>>(
			[this, request]()
			{
			return this->setReqHeaderConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetWaitingRoomConfigOutcome CdnClient::setWaitingRoomConfig(const SetWaitingRoomConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetWaitingRoomConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetWaitingRoomConfigOutcome(SetWaitingRoomConfigResult(outcome.result()));
	else
		return SetWaitingRoomConfigOutcome(outcome.error());
}

void CdnClient::setWaitingRoomConfigAsync(const SetWaitingRoomConfigRequest& request, const SetWaitingRoomConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setWaitingRoomConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetWaitingRoomConfigOutcomeCallable CdnClient::setWaitingRoomConfigCallable(const SetWaitingRoomConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetWaitingRoomConfigOutcome()>>(
			[this, request]()
			{
			return this->setWaitingRoomConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::StartCdnDomainOutcome CdnClient::startCdnDomain(const StartCdnDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartCdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartCdnDomainOutcome(StartCdnDomainResult(outcome.result()));
	else
		return StartCdnDomainOutcome(outcome.error());
}

void CdnClient::startCdnDomainAsync(const StartCdnDomainRequest& request, const StartCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startCdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::StartCdnDomainOutcomeCallable CdnClient::startCdnDomainCallable(const StartCdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartCdnDomainOutcome()>>(
			[this, request]()
			{
			return this->startCdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::StopCdnDomainOutcome CdnClient::stopCdnDomain(const StopCdnDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopCdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopCdnDomainOutcome(StopCdnDomainResult(outcome.result()));
	else
		return StopCdnDomainOutcome(outcome.error());
}

void CdnClient::stopCdnDomainAsync(const StopCdnDomainRequest& request, const StopCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopCdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::StopCdnDomainOutcomeCallable CdnClient::stopCdnDomainCallable(const StopCdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopCdnDomainOutcome()>>(
			[this, request]()
			{
			return this->stopCdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::TagResourcesOutcome CdnClient::tagResources(const TagResourcesRequest &request) const
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

void CdnClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::TagResourcesOutcomeCallable CdnClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::TestDescribeDomainBpsDataOutcome CdnClient::testDescribeDomainBpsData(const TestDescribeDomainBpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TestDescribeDomainBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TestDescribeDomainBpsDataOutcome(TestDescribeDomainBpsDataResult(outcome.result()));
	else
		return TestDescribeDomainBpsDataOutcome(outcome.error());
}

void CdnClient::testDescribeDomainBpsDataAsync(const TestDescribeDomainBpsDataRequest& request, const TestDescribeDomainBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, testDescribeDomainBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::TestDescribeDomainBpsDataOutcomeCallable CdnClient::testDescribeDomainBpsDataCallable(const TestDescribeDomainBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TestDescribeDomainBpsDataOutcome()>>(
			[this, request]()
			{
			return this->testDescribeDomainBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::UntagResourcesOutcome CdnClient::untagResources(const UntagResourcesRequest &request) const
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

void CdnClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::UntagResourcesOutcomeCallable CdnClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::UpdateCdnDeliverTaskOutcome CdnClient::updateCdnDeliverTask(const UpdateCdnDeliverTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCdnDeliverTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCdnDeliverTaskOutcome(UpdateCdnDeliverTaskResult(outcome.result()));
	else
		return UpdateCdnDeliverTaskOutcome(outcome.error());
}

void CdnClient::updateCdnDeliverTaskAsync(const UpdateCdnDeliverTaskRequest& request, const UpdateCdnDeliverTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCdnDeliverTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::UpdateCdnDeliverTaskOutcomeCallable CdnClient::updateCdnDeliverTaskCallable(const UpdateCdnDeliverTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCdnDeliverTaskOutcome()>>(
			[this, request]()
			{
			return this->updateCdnDeliverTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::UpdateCdnSubTaskOutcome CdnClient::updateCdnSubTask(const UpdateCdnSubTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCdnSubTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCdnSubTaskOutcome(UpdateCdnSubTaskResult(outcome.result()));
	else
		return UpdateCdnSubTaskOutcome(outcome.error());
}

void CdnClient::updateCdnSubTaskAsync(const UpdateCdnSubTaskRequest& request, const UpdateCdnSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCdnSubTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::UpdateCdnSubTaskOutcomeCallable CdnClient::updateCdnSubTaskCallable(const UpdateCdnSubTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCdnSubTaskOutcome()>>(
			[this, request]()
			{
			return this->updateCdnSubTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::UpdateFCTriggerOutcome CdnClient::updateFCTrigger(const UpdateFCTriggerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateFCTriggerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateFCTriggerOutcome(UpdateFCTriggerResult(outcome.result()));
	else
		return UpdateFCTriggerOutcome(outcome.error());
}

void CdnClient::updateFCTriggerAsync(const UpdateFCTriggerRequest& request, const UpdateFCTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateFCTrigger(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::UpdateFCTriggerOutcomeCallable CdnClient::updateFCTriggerCallable(const UpdateFCTriggerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateFCTriggerOutcome()>>(
			[this, request]()
			{
			return this->updateFCTrigger(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::VerifyDomainOwnerOutcome CdnClient::verifyDomainOwner(const VerifyDomainOwnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyDomainOwnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyDomainOwnerOutcome(VerifyDomainOwnerResult(outcome.result()));
	else
		return VerifyDomainOwnerOutcome(outcome.error());
}

void CdnClient::verifyDomainOwnerAsync(const VerifyDomainOwnerRequest& request, const VerifyDomainOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyDomainOwner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::VerifyDomainOwnerOutcomeCallable CdnClient::verifyDomainOwnerCallable(const VerifyDomainOwnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyDomainOwnerOutcome()>>(
			[this, request]()
			{
			return this->verifyDomainOwner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

