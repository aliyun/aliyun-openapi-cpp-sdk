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
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cdn");
}

CdnClient::CdnClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cdn");
}

CdnClient::CdnClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cdn");
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

CdnClient::AddLiveAppRecordConfigOutcome CdnClient::addLiveAppRecordConfig(const AddLiveAppRecordConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLiveAppRecordConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLiveAppRecordConfigOutcome(AddLiveAppRecordConfigResult(outcome.result()));
	else
		return AddLiveAppRecordConfigOutcome(outcome.error());
}

void CdnClient::addLiveAppRecordConfigAsync(const AddLiveAppRecordConfigRequest& request, const AddLiveAppRecordConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLiveAppRecordConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::AddLiveAppRecordConfigOutcomeCallable CdnClient::addLiveAppRecordConfigCallable(const AddLiveAppRecordConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLiveAppRecordConfigOutcome()>>(
			[this, request]()
			{
			return this->addLiveAppRecordConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::AddLiveAppSnapshotConfigOutcome CdnClient::addLiveAppSnapshotConfig(const AddLiveAppSnapshotConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLiveAppSnapshotConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLiveAppSnapshotConfigOutcome(AddLiveAppSnapshotConfigResult(outcome.result()));
	else
		return AddLiveAppSnapshotConfigOutcome(outcome.error());
}

void CdnClient::addLiveAppSnapshotConfigAsync(const AddLiveAppSnapshotConfigRequest& request, const AddLiveAppSnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLiveAppSnapshotConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::AddLiveAppSnapshotConfigOutcomeCallable CdnClient::addLiveAppSnapshotConfigCallable(const AddLiveAppSnapshotConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLiveAppSnapshotConfigOutcome()>>(
			[this, request]()
			{
			return this->addLiveAppSnapshotConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::AddLiveDomainMappingOutcome CdnClient::addLiveDomainMapping(const AddLiveDomainMappingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLiveDomainMappingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLiveDomainMappingOutcome(AddLiveDomainMappingResult(outcome.result()));
	else
		return AddLiveDomainMappingOutcome(outcome.error());
}

void CdnClient::addLiveDomainMappingAsync(const AddLiveDomainMappingRequest& request, const AddLiveDomainMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLiveDomainMapping(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::AddLiveDomainMappingOutcomeCallable CdnClient::addLiveDomainMappingCallable(const AddLiveDomainMappingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLiveDomainMappingOutcome()>>(
			[this, request]()
			{
			return this->addLiveDomainMapping(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::AddLiveStreamTranscodeOutcome CdnClient::addLiveStreamTranscode(const AddLiveStreamTranscodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLiveStreamTranscodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLiveStreamTranscodeOutcome(AddLiveStreamTranscodeResult(outcome.result()));
	else
		return AddLiveStreamTranscodeOutcome(outcome.error());
}

void CdnClient::addLiveStreamTranscodeAsync(const AddLiveStreamTranscodeRequest& request, const AddLiveStreamTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLiveStreamTranscode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::AddLiveStreamTranscodeOutcomeCallable CdnClient::addLiveStreamTranscodeCallable(const AddLiveStreamTranscodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLiveStreamTranscodeOutcome()>>(
			[this, request]()
			{
			return this->addLiveStreamTranscode(request);
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

CdnClient::CreateLiveStreamRecordIndexFilesOutcome CdnClient::createLiveStreamRecordIndexFiles(const CreateLiveStreamRecordIndexFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLiveStreamRecordIndexFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLiveStreamRecordIndexFilesOutcome(CreateLiveStreamRecordIndexFilesResult(outcome.result()));
	else
		return CreateLiveStreamRecordIndexFilesOutcome(outcome.error());
}

void CdnClient::createLiveStreamRecordIndexFilesAsync(const CreateLiveStreamRecordIndexFilesRequest& request, const CreateLiveStreamRecordIndexFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLiveStreamRecordIndexFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::CreateLiveStreamRecordIndexFilesOutcomeCallable CdnClient::createLiveStreamRecordIndexFilesCallable(const CreateLiveStreamRecordIndexFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLiveStreamRecordIndexFilesOutcome()>>(
			[this, request]()
			{
			return this->createLiveStreamRecordIndexFiles(request);
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

CdnClient::DeleteCacheExpiredConfigOutcome CdnClient::deleteCacheExpiredConfig(const DeleteCacheExpiredConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCacheExpiredConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCacheExpiredConfigOutcome(DeleteCacheExpiredConfigResult(outcome.result()));
	else
		return DeleteCacheExpiredConfigOutcome(outcome.error());
}

void CdnClient::deleteCacheExpiredConfigAsync(const DeleteCacheExpiredConfigRequest& request, const DeleteCacheExpiredConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCacheExpiredConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DeleteCacheExpiredConfigOutcomeCallable CdnClient::deleteCacheExpiredConfigCallable(const DeleteCacheExpiredConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCacheExpiredConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteCacheExpiredConfig(request);
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

CdnClient::DeleteHttpHeaderConfigOutcome CdnClient::deleteHttpHeaderConfig(const DeleteHttpHeaderConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteHttpHeaderConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteHttpHeaderConfigOutcome(DeleteHttpHeaderConfigResult(outcome.result()));
	else
		return DeleteHttpHeaderConfigOutcome(outcome.error());
}

void CdnClient::deleteHttpHeaderConfigAsync(const DeleteHttpHeaderConfigRequest& request, const DeleteHttpHeaderConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteHttpHeaderConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DeleteHttpHeaderConfigOutcomeCallable CdnClient::deleteHttpHeaderConfigCallable(const DeleteHttpHeaderConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteHttpHeaderConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteHttpHeaderConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DeleteLiveAppRecordConfigOutcome CdnClient::deleteLiveAppRecordConfig(const DeleteLiveAppRecordConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveAppRecordConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveAppRecordConfigOutcome(DeleteLiveAppRecordConfigResult(outcome.result()));
	else
		return DeleteLiveAppRecordConfigOutcome(outcome.error());
}

void CdnClient::deleteLiveAppRecordConfigAsync(const DeleteLiveAppRecordConfigRequest& request, const DeleteLiveAppRecordConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveAppRecordConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DeleteLiveAppRecordConfigOutcomeCallable CdnClient::deleteLiveAppRecordConfigCallable(const DeleteLiveAppRecordConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveAppRecordConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveAppRecordConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DeleteLiveAppSnapshotConfigOutcome CdnClient::deleteLiveAppSnapshotConfig(const DeleteLiveAppSnapshotConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveAppSnapshotConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveAppSnapshotConfigOutcome(DeleteLiveAppSnapshotConfigResult(outcome.result()));
	else
		return DeleteLiveAppSnapshotConfigOutcome(outcome.error());
}

void CdnClient::deleteLiveAppSnapshotConfigAsync(const DeleteLiveAppSnapshotConfigRequest& request, const DeleteLiveAppSnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveAppSnapshotConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DeleteLiveAppSnapshotConfigOutcomeCallable CdnClient::deleteLiveAppSnapshotConfigCallable(const DeleteLiveAppSnapshotConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveAppSnapshotConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveAppSnapshotConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DeleteLiveDomainMappingOutcome CdnClient::deleteLiveDomainMapping(const DeleteLiveDomainMappingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveDomainMappingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveDomainMappingOutcome(DeleteLiveDomainMappingResult(outcome.result()));
	else
		return DeleteLiveDomainMappingOutcome(outcome.error());
}

void CdnClient::deleteLiveDomainMappingAsync(const DeleteLiveDomainMappingRequest& request, const DeleteLiveDomainMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveDomainMapping(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DeleteLiveDomainMappingOutcomeCallable CdnClient::deleteLiveDomainMappingCallable(const DeleteLiveDomainMappingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveDomainMappingOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveDomainMapping(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DeleteLiveStreamTranscodeOutcome CdnClient::deleteLiveStreamTranscode(const DeleteLiveStreamTranscodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveStreamTranscodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveStreamTranscodeOutcome(DeleteLiveStreamTranscodeResult(outcome.result()));
	else
		return DeleteLiveStreamTranscodeOutcome(outcome.error());
}

void CdnClient::deleteLiveStreamTranscodeAsync(const DeleteLiveStreamTranscodeRequest& request, const DeleteLiveStreamTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveStreamTranscode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DeleteLiveStreamTranscodeOutcomeCallable CdnClient::deleteLiveStreamTranscodeCallable(const DeleteLiveStreamTranscodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveStreamTranscodeOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveStreamTranscode(request);
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

CdnClient::DescribeCdnMonitorDataOutcome CdnClient::describeCdnMonitorData(const DescribeCdnMonitorDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnMonitorDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnMonitorDataOutcome(DescribeCdnMonitorDataResult(outcome.result()));
	else
		return DescribeCdnMonitorDataOutcome(outcome.error());
}

void CdnClient::describeCdnMonitorDataAsync(const DescribeCdnMonitorDataRequest& request, const DescribeCdnMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnMonitorData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnMonitorDataOutcomeCallable CdnClient::describeCdnMonitorDataCallable(const DescribeCdnMonitorDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnMonitorDataOutcome()>>(
			[this, request]()
			{
			return this->describeCdnMonitorData(request);
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

CdnClient::DescribeCdnTypesOutcome CdnClient::describeCdnTypes(const DescribeCdnTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnTypesOutcome(DescribeCdnTypesResult(outcome.result()));
	else
		return DescribeCdnTypesOutcome(outcome.error());
}

void CdnClient::describeCdnTypesAsync(const DescribeCdnTypesRequest& request, const DescribeCdnTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnTypesOutcomeCallable CdnClient::describeCdnTypesCallable(const DescribeCdnTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnTypesOutcome()>>(
			[this, request]()
			{
			return this->describeCdnTypes(request);
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

CdnClient::DescribeDomainCCAttackInfoOutcome CdnClient::describeDomainCCAttackInfo(const DescribeDomainCCAttackInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainCCAttackInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainCCAttackInfoOutcome(DescribeDomainCCAttackInfoResult(outcome.result()));
	else
		return DescribeDomainCCAttackInfoOutcome(outcome.error());
}

void CdnClient::describeDomainCCAttackInfoAsync(const DescribeDomainCCAttackInfoRequest& request, const DescribeDomainCCAttackInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainCCAttackInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainCCAttackInfoOutcomeCallable CdnClient::describeDomainCCAttackInfoCallable(const DescribeDomainCCAttackInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainCCAttackInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDomainCCAttackInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainCCDataOutcome CdnClient::describeDomainCCData(const DescribeDomainCCDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainCCDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainCCDataOutcome(DescribeDomainCCDataResult(outcome.result()));
	else
		return DescribeDomainCCDataOutcome(outcome.error());
}

void CdnClient::describeDomainCCDataAsync(const DescribeDomainCCDataRequest& request, const DescribeDomainCCDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainCCData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainCCDataOutcomeCallable CdnClient::describeDomainCCDataCallable(const DescribeDomainCCDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainCCDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainCCData(request);
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

CdnClient::DescribeDomainCnameOutcome CdnClient::describeDomainCname(const DescribeDomainCnameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainCnameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainCnameOutcome(DescribeDomainCnameResult(outcome.result()));
	else
		return DescribeDomainCnameOutcome(outcome.error());
}

void CdnClient::describeDomainCnameAsync(const DescribeDomainCnameRequest& request, const DescribeDomainCnameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainCname(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainCnameOutcomeCallable CdnClient::describeDomainCnameCallable(const DescribeDomainCnameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainCnameOutcome()>>(
			[this, request]()
			{
			return this->describeDomainCname(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainConfigsOutcome CdnClient::describeDomainConfigs(const DescribeDomainConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainConfigsOutcome(DescribeDomainConfigsResult(outcome.result()));
	else
		return DescribeDomainConfigsOutcome(outcome.error());
}

void CdnClient::describeDomainConfigsAsync(const DescribeDomainConfigsRequest& request, const DescribeDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainConfigsOutcomeCallable CdnClient::describeDomainConfigsCallable(const DescribeDomainConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainConfigsOutcome()>>(
			[this, request]()
			{
			return this->describeDomainConfigs(request);
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

CdnClient::DescribeDomainSlowRatioOutcome CdnClient::describeDomainSlowRatio(const DescribeDomainSlowRatioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainSlowRatioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainSlowRatioOutcome(DescribeDomainSlowRatioResult(outcome.result()));
	else
		return DescribeDomainSlowRatioOutcome(outcome.error());
}

void CdnClient::describeDomainSlowRatioAsync(const DescribeDomainSlowRatioRequest& request, const DescribeDomainSlowRatioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainSlowRatio(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainSlowRatioOutcomeCallable CdnClient::describeDomainSlowRatioCallable(const DescribeDomainSlowRatioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainSlowRatioOutcome()>>(
			[this, request]()
			{
			return this->describeDomainSlowRatio(request);
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

CdnClient::DescribeL2VipsByDynamicDomainOutcome CdnClient::describeL2VipsByDynamicDomain(const DescribeL2VipsByDynamicDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeL2VipsByDynamicDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeL2VipsByDynamicDomainOutcome(DescribeL2VipsByDynamicDomainResult(outcome.result()));
	else
		return DescribeL2VipsByDynamicDomainOutcome(outcome.error());
}

void CdnClient::describeL2VipsByDynamicDomainAsync(const DescribeL2VipsByDynamicDomainRequest& request, const DescribeL2VipsByDynamicDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeL2VipsByDynamicDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeL2VipsByDynamicDomainOutcomeCallable CdnClient::describeL2VipsByDynamicDomainCallable(const DescribeL2VipsByDynamicDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeL2VipsByDynamicDomainOutcome()>>(
			[this, request]()
			{
			return this->describeL2VipsByDynamicDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLivePullStreamConfigOutcome CdnClient::describeLivePullStreamConfig(const DescribeLivePullStreamConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLivePullStreamConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLivePullStreamConfigOutcome(DescribeLivePullStreamConfigResult(outcome.result()));
	else
		return DescribeLivePullStreamConfigOutcome(outcome.error());
}

void CdnClient::describeLivePullStreamConfigAsync(const DescribeLivePullStreamConfigRequest& request, const DescribeLivePullStreamConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLivePullStreamConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLivePullStreamConfigOutcomeCallable CdnClient::describeLivePullStreamConfigCallable(const DescribeLivePullStreamConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLivePullStreamConfigOutcome()>>(
			[this, request]()
			{
			return this->describeLivePullStreamConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveRecordConfigOutcome CdnClient::describeLiveRecordConfig(const DescribeLiveRecordConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveRecordConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveRecordConfigOutcome(DescribeLiveRecordConfigResult(outcome.result()));
	else
		return DescribeLiveRecordConfigOutcome(outcome.error());
}

void CdnClient::describeLiveRecordConfigAsync(const DescribeLiveRecordConfigRequest& request, const DescribeLiveRecordConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveRecordConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveRecordConfigOutcomeCallable CdnClient::describeLiveRecordConfigCallable(const DescribeLiveRecordConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveRecordConfigOutcome()>>(
			[this, request]()
			{
			return this->describeLiveRecordConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveSnapshotConfigOutcome CdnClient::describeLiveSnapshotConfig(const DescribeLiveSnapshotConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveSnapshotConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveSnapshotConfigOutcome(DescribeLiveSnapshotConfigResult(outcome.result()));
	else
		return DescribeLiveSnapshotConfigOutcome(outcome.error());
}

void CdnClient::describeLiveSnapshotConfigAsync(const DescribeLiveSnapshotConfigRequest& request, const DescribeLiveSnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveSnapshotConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveSnapshotConfigOutcomeCallable CdnClient::describeLiveSnapshotConfigCallable(const DescribeLiveSnapshotConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveSnapshotConfigOutcome()>>(
			[this, request]()
			{
			return this->describeLiveSnapshotConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamBitRateDataOutcome CdnClient::describeLiveStreamBitRateData(const DescribeLiveStreamBitRateDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamBitRateDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamBitRateDataOutcome(DescribeLiveStreamBitRateDataResult(outcome.result()));
	else
		return DescribeLiveStreamBitRateDataOutcome(outcome.error());
}

void CdnClient::describeLiveStreamBitRateDataAsync(const DescribeLiveStreamBitRateDataRequest& request, const DescribeLiveStreamBitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamBitRateData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamBitRateDataOutcomeCallable CdnClient::describeLiveStreamBitRateDataCallable(const DescribeLiveStreamBitRateDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamBitRateDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamBitRateData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamOnlineUserNumOutcome CdnClient::describeLiveStreamOnlineUserNum(const DescribeLiveStreamOnlineUserNumRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamOnlineUserNumOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamOnlineUserNumOutcome(DescribeLiveStreamOnlineUserNumResult(outcome.result()));
	else
		return DescribeLiveStreamOnlineUserNumOutcome(outcome.error());
}

void CdnClient::describeLiveStreamOnlineUserNumAsync(const DescribeLiveStreamOnlineUserNumRequest& request, const DescribeLiveStreamOnlineUserNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamOnlineUserNum(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamOnlineUserNumOutcomeCallable CdnClient::describeLiveStreamOnlineUserNumCallable(const DescribeLiveStreamOnlineUserNumRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamOnlineUserNumOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamOnlineUserNum(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamRecordContentOutcome CdnClient::describeLiveStreamRecordContent(const DescribeLiveStreamRecordContentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamRecordContentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamRecordContentOutcome(DescribeLiveStreamRecordContentResult(outcome.result()));
	else
		return DescribeLiveStreamRecordContentOutcome(outcome.error());
}

void CdnClient::describeLiveStreamRecordContentAsync(const DescribeLiveStreamRecordContentRequest& request, const DescribeLiveStreamRecordContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamRecordContent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamRecordContentOutcomeCallable CdnClient::describeLiveStreamRecordContentCallable(const DescribeLiveStreamRecordContentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamRecordContentOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamRecordContent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamRecordIndexFileOutcome CdnClient::describeLiveStreamRecordIndexFile(const DescribeLiveStreamRecordIndexFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamRecordIndexFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamRecordIndexFileOutcome(DescribeLiveStreamRecordIndexFileResult(outcome.result()));
	else
		return DescribeLiveStreamRecordIndexFileOutcome(outcome.error());
}

void CdnClient::describeLiveStreamRecordIndexFileAsync(const DescribeLiveStreamRecordIndexFileRequest& request, const DescribeLiveStreamRecordIndexFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamRecordIndexFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamRecordIndexFileOutcomeCallable CdnClient::describeLiveStreamRecordIndexFileCallable(const DescribeLiveStreamRecordIndexFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamRecordIndexFileOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamRecordIndexFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamRecordIndexFilesOutcome CdnClient::describeLiveStreamRecordIndexFiles(const DescribeLiveStreamRecordIndexFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamRecordIndexFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamRecordIndexFilesOutcome(DescribeLiveStreamRecordIndexFilesResult(outcome.result()));
	else
		return DescribeLiveStreamRecordIndexFilesOutcome(outcome.error());
}

void CdnClient::describeLiveStreamRecordIndexFilesAsync(const DescribeLiveStreamRecordIndexFilesRequest& request, const DescribeLiveStreamRecordIndexFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamRecordIndexFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamRecordIndexFilesOutcomeCallable CdnClient::describeLiveStreamRecordIndexFilesCallable(const DescribeLiveStreamRecordIndexFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamRecordIndexFilesOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamRecordIndexFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamSnapshotInfoOutcome CdnClient::describeLiveStreamSnapshotInfo(const DescribeLiveStreamSnapshotInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamSnapshotInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamSnapshotInfoOutcome(DescribeLiveStreamSnapshotInfoResult(outcome.result()));
	else
		return DescribeLiveStreamSnapshotInfoOutcome(outcome.error());
}

void CdnClient::describeLiveStreamSnapshotInfoAsync(const DescribeLiveStreamSnapshotInfoRequest& request, const DescribeLiveStreamSnapshotInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamSnapshotInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamSnapshotInfoOutcomeCallable CdnClient::describeLiveStreamSnapshotInfoCallable(const DescribeLiveStreamSnapshotInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamSnapshotInfoOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamSnapshotInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamTranscodeInfoOutcome CdnClient::describeLiveStreamTranscodeInfo(const DescribeLiveStreamTranscodeInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamTranscodeInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamTranscodeInfoOutcome(DescribeLiveStreamTranscodeInfoResult(outcome.result()));
	else
		return DescribeLiveStreamTranscodeInfoOutcome(outcome.error());
}

void CdnClient::describeLiveStreamTranscodeInfoAsync(const DescribeLiveStreamTranscodeInfoRequest& request, const DescribeLiveStreamTranscodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamTranscodeInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamTranscodeInfoOutcomeCallable CdnClient::describeLiveStreamTranscodeInfoCallable(const DescribeLiveStreamTranscodeInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamTranscodeInfoOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamTranscodeInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamsBlockListOutcome CdnClient::describeLiveStreamsBlockList(const DescribeLiveStreamsBlockListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamsBlockListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamsBlockListOutcome(DescribeLiveStreamsBlockListResult(outcome.result()));
	else
		return DescribeLiveStreamsBlockListOutcome(outcome.error());
}

void CdnClient::describeLiveStreamsBlockListAsync(const DescribeLiveStreamsBlockListRequest& request, const DescribeLiveStreamsBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamsBlockList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamsBlockListOutcomeCallable CdnClient::describeLiveStreamsBlockListCallable(const DescribeLiveStreamsBlockListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamsBlockListOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamsBlockList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamsControlHistoryOutcome CdnClient::describeLiveStreamsControlHistory(const DescribeLiveStreamsControlHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamsControlHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamsControlHistoryOutcome(DescribeLiveStreamsControlHistoryResult(outcome.result()));
	else
		return DescribeLiveStreamsControlHistoryOutcome(outcome.error());
}

void CdnClient::describeLiveStreamsControlHistoryAsync(const DescribeLiveStreamsControlHistoryRequest& request, const DescribeLiveStreamsControlHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamsControlHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamsControlHistoryOutcomeCallable CdnClient::describeLiveStreamsControlHistoryCallable(const DescribeLiveStreamsControlHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamsControlHistoryOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamsControlHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamsFrameRateAndBitRateDataOutcome CdnClient::describeLiveStreamsFrameRateAndBitRateData(const DescribeLiveStreamsFrameRateAndBitRateDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamsFrameRateAndBitRateDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamsFrameRateAndBitRateDataOutcome(DescribeLiveStreamsFrameRateAndBitRateDataResult(outcome.result()));
	else
		return DescribeLiveStreamsFrameRateAndBitRateDataOutcome(outcome.error());
}

void CdnClient::describeLiveStreamsFrameRateAndBitRateDataAsync(const DescribeLiveStreamsFrameRateAndBitRateDataRequest& request, const DescribeLiveStreamsFrameRateAndBitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamsFrameRateAndBitRateData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamsFrameRateAndBitRateDataOutcomeCallable CdnClient::describeLiveStreamsFrameRateAndBitRateDataCallable(const DescribeLiveStreamsFrameRateAndBitRateDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamsFrameRateAndBitRateDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamsFrameRateAndBitRateData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamsOnlineListOutcome CdnClient::describeLiveStreamsOnlineList(const DescribeLiveStreamsOnlineListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamsOnlineListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamsOnlineListOutcome(DescribeLiveStreamsOnlineListResult(outcome.result()));
	else
		return DescribeLiveStreamsOnlineListOutcome(outcome.error());
}

void CdnClient::describeLiveStreamsOnlineListAsync(const DescribeLiveStreamsOnlineListRequest& request, const DescribeLiveStreamsOnlineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamsOnlineList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamsOnlineListOutcomeCallable CdnClient::describeLiveStreamsOnlineListCallable(const DescribeLiveStreamsOnlineListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamsOnlineListOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamsOnlineList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamsPublishListOutcome CdnClient::describeLiveStreamsPublishList(const DescribeLiveStreamsPublishListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamsPublishListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamsPublishListOutcome(DescribeLiveStreamsPublishListResult(outcome.result()));
	else
		return DescribeLiveStreamsPublishListOutcome(outcome.error());
}

void CdnClient::describeLiveStreamsPublishListAsync(const DescribeLiveStreamsPublishListRequest& request, const DescribeLiveStreamsPublishListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamsPublishList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamsPublishListOutcomeCallable CdnClient::describeLiveStreamsPublishListCallable(const DescribeLiveStreamsPublishListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamsPublishListOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamsPublishList(request);
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

CdnClient::DescribeUserCdnStatusOutcome CdnClient::describeUserCdnStatus(const DescribeUserCdnStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserCdnStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserCdnStatusOutcome(DescribeUserCdnStatusResult(outcome.result()));
	else
		return DescribeUserCdnStatusOutcome(outcome.error());
}

void CdnClient::describeUserCdnStatusAsync(const DescribeUserCdnStatusRequest& request, const DescribeUserCdnStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserCdnStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeUserCdnStatusOutcomeCallable CdnClient::describeUserCdnStatusCallable(const DescribeUserCdnStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserCdnStatusOutcome()>>(
			[this, request]()
			{
			return this->describeUserCdnStatus(request);
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

CdnClient::DescribeUserCustomLogConfigOutcome CdnClient::describeUserCustomLogConfig(const DescribeUserCustomLogConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserCustomLogConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserCustomLogConfigOutcome(DescribeUserCustomLogConfigResult(outcome.result()));
	else
		return DescribeUserCustomLogConfigOutcome(outcome.error());
}

void CdnClient::describeUserCustomLogConfigAsync(const DescribeUserCustomLogConfigRequest& request, const DescribeUserCustomLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserCustomLogConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeUserCustomLogConfigOutcomeCallable CdnClient::describeUserCustomLogConfigCallable(const DescribeUserCustomLogConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserCustomLogConfigOutcome()>>(
			[this, request]()
			{
			return this->describeUserCustomLogConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeUserCustomerLabelsOutcome CdnClient::describeUserCustomerLabels(const DescribeUserCustomerLabelsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserCustomerLabelsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserCustomerLabelsOutcome(DescribeUserCustomerLabelsResult(outcome.result()));
	else
		return DescribeUserCustomerLabelsOutcome(outcome.error());
}

void CdnClient::describeUserCustomerLabelsAsync(const DescribeUserCustomerLabelsRequest& request, const DescribeUserCustomerLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserCustomerLabels(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeUserCustomerLabelsOutcomeCallable CdnClient::describeUserCustomerLabelsCallable(const DescribeUserCustomerLabelsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserCustomerLabelsOutcome()>>(
			[this, request]()
			{
			return this->describeUserCustomerLabels(request);
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

CdnClient::ForbidLiveStreamOutcome CdnClient::forbidLiveStream(const ForbidLiveStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ForbidLiveStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ForbidLiveStreamOutcome(ForbidLiveStreamResult(outcome.result()));
	else
		return ForbidLiveStreamOutcome(outcome.error());
}

void CdnClient::forbidLiveStreamAsync(const ForbidLiveStreamRequest& request, const ForbidLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, forbidLiveStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::ForbidLiveStreamOutcomeCallable CdnClient::forbidLiveStreamCallable(const ForbidLiveStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ForbidLiveStreamOutcome()>>(
			[this, request]()
			{
			return this->forbidLiveStream(request);
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

CdnClient::ModifyCdnServiceOutcome CdnClient::modifyCdnService(const ModifyCdnServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCdnServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCdnServiceOutcome(ModifyCdnServiceResult(outcome.result()));
	else
		return ModifyCdnServiceOutcome(outcome.error());
}

void CdnClient::modifyCdnServiceAsync(const ModifyCdnServiceRequest& request, const ModifyCdnServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCdnService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::ModifyCdnServiceOutcomeCallable CdnClient::modifyCdnServiceCallable(const ModifyCdnServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCdnServiceOutcome()>>(
			[this, request]()
			{
			return this->modifyCdnService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::ModifyDomainCustomLogConfigOutcome CdnClient::modifyDomainCustomLogConfig(const ModifyDomainCustomLogConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDomainCustomLogConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDomainCustomLogConfigOutcome(ModifyDomainCustomLogConfigResult(outcome.result()));
	else
		return ModifyDomainCustomLogConfigOutcome(outcome.error());
}

void CdnClient::modifyDomainCustomLogConfigAsync(const ModifyDomainCustomLogConfigRequest& request, const ModifyDomainCustomLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDomainCustomLogConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::ModifyDomainCustomLogConfigOutcomeCallable CdnClient::modifyDomainCustomLogConfigCallable(const ModifyDomainCustomLogConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDomainCustomLogConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyDomainCustomLogConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::ModifyFileCacheExpiredConfigOutcome CdnClient::modifyFileCacheExpiredConfig(const ModifyFileCacheExpiredConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyFileCacheExpiredConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyFileCacheExpiredConfigOutcome(ModifyFileCacheExpiredConfigResult(outcome.result()));
	else
		return ModifyFileCacheExpiredConfigOutcome(outcome.error());
}

void CdnClient::modifyFileCacheExpiredConfigAsync(const ModifyFileCacheExpiredConfigRequest& request, const ModifyFileCacheExpiredConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyFileCacheExpiredConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::ModifyFileCacheExpiredConfigOutcomeCallable CdnClient::modifyFileCacheExpiredConfigCallable(const ModifyFileCacheExpiredConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyFileCacheExpiredConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyFileCacheExpiredConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::ModifyHttpHeaderConfigOutcome CdnClient::modifyHttpHeaderConfig(const ModifyHttpHeaderConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyHttpHeaderConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyHttpHeaderConfigOutcome(ModifyHttpHeaderConfigResult(outcome.result()));
	else
		return ModifyHttpHeaderConfigOutcome(outcome.error());
}

void CdnClient::modifyHttpHeaderConfigAsync(const ModifyHttpHeaderConfigRequest& request, const ModifyHttpHeaderConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyHttpHeaderConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::ModifyHttpHeaderConfigOutcomeCallable CdnClient::modifyHttpHeaderConfigCallable(const ModifyHttpHeaderConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyHttpHeaderConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyHttpHeaderConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::ModifyPathCacheExpiredConfigOutcome CdnClient::modifyPathCacheExpiredConfig(const ModifyPathCacheExpiredConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPathCacheExpiredConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPathCacheExpiredConfigOutcome(ModifyPathCacheExpiredConfigResult(outcome.result()));
	else
		return ModifyPathCacheExpiredConfigOutcome(outcome.error());
}

void CdnClient::modifyPathCacheExpiredConfigAsync(const ModifyPathCacheExpiredConfigRequest& request, const ModifyPathCacheExpiredConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPathCacheExpiredConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::ModifyPathCacheExpiredConfigOutcomeCallable CdnClient::modifyPathCacheExpiredConfigCallable(const ModifyPathCacheExpiredConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPathCacheExpiredConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyPathCacheExpiredConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::ModifyUserCustomLogConfigOutcome CdnClient::modifyUserCustomLogConfig(const ModifyUserCustomLogConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyUserCustomLogConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyUserCustomLogConfigOutcome(ModifyUserCustomLogConfigResult(outcome.result()));
	else
		return ModifyUserCustomLogConfigOutcome(outcome.error());
}

void CdnClient::modifyUserCustomLogConfigAsync(const ModifyUserCustomLogConfigRequest& request, const ModifyUserCustomLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyUserCustomLogConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::ModifyUserCustomLogConfigOutcomeCallable CdnClient::modifyUserCustomLogConfigCallable(const ModifyUserCustomLogConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyUserCustomLogConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyUserCustomLogConfig(request);
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

CdnClient::ResumeLiveStreamOutcome CdnClient::resumeLiveStream(const ResumeLiveStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumeLiveStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumeLiveStreamOutcome(ResumeLiveStreamResult(outcome.result()));
	else
		return ResumeLiveStreamOutcome(outcome.error());
}

void CdnClient::resumeLiveStreamAsync(const ResumeLiveStreamRequest& request, const ResumeLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeLiveStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::ResumeLiveStreamOutcomeCallable CdnClient::resumeLiveStreamCallable(const ResumeLiveStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeLiveStreamOutcome()>>(
			[this, request]()
			{
			return this->resumeLiveStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetCcConfigOutcome CdnClient::setCcConfig(const SetCcConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetCcConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetCcConfigOutcome(SetCcConfigResult(outcome.result()));
	else
		return SetCcConfigOutcome(outcome.error());
}

void CdnClient::setCcConfigAsync(const SetCcConfigRequest& request, const SetCcConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setCcConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetCcConfigOutcomeCallable CdnClient::setCcConfigCallable(const SetCcConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetCcConfigOutcome()>>(
			[this, request]()
			{
			return this->setCcConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetDomainGreenManagerConfigOutcome CdnClient::setDomainGreenManagerConfig(const SetDomainGreenManagerConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDomainGreenManagerConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDomainGreenManagerConfigOutcome(SetDomainGreenManagerConfigResult(outcome.result()));
	else
		return SetDomainGreenManagerConfigOutcome(outcome.error());
}

void CdnClient::setDomainGreenManagerConfigAsync(const SetDomainGreenManagerConfigRequest& request, const SetDomainGreenManagerConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDomainGreenManagerConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetDomainGreenManagerConfigOutcomeCallable CdnClient::setDomainGreenManagerConfigCallable(const SetDomainGreenManagerConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDomainGreenManagerConfigOutcome()>>(
			[this, request]()
			{
			return this->setDomainGreenManagerConfig(request);
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

CdnClient::SetDynamicConfigOutcome CdnClient::setDynamicConfig(const SetDynamicConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDynamicConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDynamicConfigOutcome(SetDynamicConfigResult(outcome.result()));
	else
		return SetDynamicConfigOutcome(outcome.error());
}

void CdnClient::setDynamicConfigAsync(const SetDynamicConfigRequest& request, const SetDynamicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDynamicConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetDynamicConfigOutcomeCallable CdnClient::setDynamicConfigCallable(const SetDynamicConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDynamicConfigOutcome()>>(
			[this, request]()
			{
			return this->setDynamicConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetErrorPageConfigOutcome CdnClient::setErrorPageConfig(const SetErrorPageConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetErrorPageConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetErrorPageConfigOutcome(SetErrorPageConfigResult(outcome.result()));
	else
		return SetErrorPageConfigOutcome(outcome.error());
}

void CdnClient::setErrorPageConfigAsync(const SetErrorPageConfigRequest& request, const SetErrorPageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setErrorPageConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetErrorPageConfigOutcomeCallable CdnClient::setErrorPageConfigCallable(const SetErrorPageConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetErrorPageConfigOutcome()>>(
			[this, request]()
			{
			return this->setErrorPageConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetFileCacheExpiredConfigOutcome CdnClient::setFileCacheExpiredConfig(const SetFileCacheExpiredConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetFileCacheExpiredConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetFileCacheExpiredConfigOutcome(SetFileCacheExpiredConfigResult(outcome.result()));
	else
		return SetFileCacheExpiredConfigOutcome(outcome.error());
}

void CdnClient::setFileCacheExpiredConfigAsync(const SetFileCacheExpiredConfigRequest& request, const SetFileCacheExpiredConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setFileCacheExpiredConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetFileCacheExpiredConfigOutcomeCallable CdnClient::setFileCacheExpiredConfigCallable(const SetFileCacheExpiredConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetFileCacheExpiredConfigOutcome()>>(
			[this, request]()
			{
			return this->setFileCacheExpiredConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetForceRedirectConfigOutcome CdnClient::setForceRedirectConfig(const SetForceRedirectConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetForceRedirectConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetForceRedirectConfigOutcome(SetForceRedirectConfigResult(outcome.result()));
	else
		return SetForceRedirectConfigOutcome(outcome.error());
}

void CdnClient::setForceRedirectConfigAsync(const SetForceRedirectConfigRequest& request, const SetForceRedirectConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setForceRedirectConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetForceRedirectConfigOutcomeCallable CdnClient::setForceRedirectConfigCallable(const SetForceRedirectConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetForceRedirectConfigOutcome()>>(
			[this, request]()
			{
			return this->setForceRedirectConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetForwardSchemeConfigOutcome CdnClient::setForwardSchemeConfig(const SetForwardSchemeConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetForwardSchemeConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetForwardSchemeConfigOutcome(SetForwardSchemeConfigResult(outcome.result()));
	else
		return SetForwardSchemeConfigOutcome(outcome.error());
}

void CdnClient::setForwardSchemeConfigAsync(const SetForwardSchemeConfigRequest& request, const SetForwardSchemeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setForwardSchemeConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetForwardSchemeConfigOutcomeCallable CdnClient::setForwardSchemeConfigCallable(const SetForwardSchemeConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetForwardSchemeConfigOutcome()>>(
			[this, request]()
			{
			return this->setForwardSchemeConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetHttpErrorPageConfigOutcome CdnClient::setHttpErrorPageConfig(const SetHttpErrorPageConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetHttpErrorPageConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetHttpErrorPageConfigOutcome(SetHttpErrorPageConfigResult(outcome.result()));
	else
		return SetHttpErrorPageConfigOutcome(outcome.error());
}

void CdnClient::setHttpErrorPageConfigAsync(const SetHttpErrorPageConfigRequest& request, const SetHttpErrorPageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setHttpErrorPageConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetHttpErrorPageConfigOutcomeCallable CdnClient::setHttpErrorPageConfigCallable(const SetHttpErrorPageConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetHttpErrorPageConfigOutcome()>>(
			[this, request]()
			{
			return this->setHttpErrorPageConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetHttpHeaderConfigOutcome CdnClient::setHttpHeaderConfig(const SetHttpHeaderConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetHttpHeaderConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetHttpHeaderConfigOutcome(SetHttpHeaderConfigResult(outcome.result()));
	else
		return SetHttpHeaderConfigOutcome(outcome.error());
}

void CdnClient::setHttpHeaderConfigAsync(const SetHttpHeaderConfigRequest& request, const SetHttpHeaderConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setHttpHeaderConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetHttpHeaderConfigOutcomeCallable CdnClient::setHttpHeaderConfigCallable(const SetHttpHeaderConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetHttpHeaderConfigOutcome()>>(
			[this, request]()
			{
			return this->setHttpHeaderConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetHttpsOptionConfigOutcome CdnClient::setHttpsOptionConfig(const SetHttpsOptionConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetHttpsOptionConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetHttpsOptionConfigOutcome(SetHttpsOptionConfigResult(outcome.result()));
	else
		return SetHttpsOptionConfigOutcome(outcome.error());
}

void CdnClient::setHttpsOptionConfigAsync(const SetHttpsOptionConfigRequest& request, const SetHttpsOptionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setHttpsOptionConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetHttpsOptionConfigOutcomeCallable CdnClient::setHttpsOptionConfigCallable(const SetHttpsOptionConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetHttpsOptionConfigOutcome()>>(
			[this, request]()
			{
			return this->setHttpsOptionConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetIgnoreQueryStringConfigOutcome CdnClient::setIgnoreQueryStringConfig(const SetIgnoreQueryStringConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetIgnoreQueryStringConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetIgnoreQueryStringConfigOutcome(SetIgnoreQueryStringConfigResult(outcome.result()));
	else
		return SetIgnoreQueryStringConfigOutcome(outcome.error());
}

void CdnClient::setIgnoreQueryStringConfigAsync(const SetIgnoreQueryStringConfigRequest& request, const SetIgnoreQueryStringConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setIgnoreQueryStringConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetIgnoreQueryStringConfigOutcomeCallable CdnClient::setIgnoreQueryStringConfigCallable(const SetIgnoreQueryStringConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetIgnoreQueryStringConfigOutcome()>>(
			[this, request]()
			{
			return this->setIgnoreQueryStringConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetIpAllowListConfigOutcome CdnClient::setIpAllowListConfig(const SetIpAllowListConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetIpAllowListConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetIpAllowListConfigOutcome(SetIpAllowListConfigResult(outcome.result()));
	else
		return SetIpAllowListConfigOutcome(outcome.error());
}

void CdnClient::setIpAllowListConfigAsync(const SetIpAllowListConfigRequest& request, const SetIpAllowListConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setIpAllowListConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetIpAllowListConfigOutcomeCallable CdnClient::setIpAllowListConfigCallable(const SetIpAllowListConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetIpAllowListConfigOutcome()>>(
			[this, request]()
			{
			return this->setIpAllowListConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetIpBlackListConfigOutcome CdnClient::setIpBlackListConfig(const SetIpBlackListConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetIpBlackListConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetIpBlackListConfigOutcome(SetIpBlackListConfigResult(outcome.result()));
	else
		return SetIpBlackListConfigOutcome(outcome.error());
}

void CdnClient::setIpBlackListConfigAsync(const SetIpBlackListConfigRequest& request, const SetIpBlackListConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setIpBlackListConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetIpBlackListConfigOutcomeCallable CdnClient::setIpBlackListConfigCallable(const SetIpBlackListConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetIpBlackListConfigOutcome()>>(
			[this, request]()
			{
			return this->setIpBlackListConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetL2OssKeyConfigOutcome CdnClient::setL2OssKeyConfig(const SetL2OssKeyConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetL2OssKeyConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetL2OssKeyConfigOutcome(SetL2OssKeyConfigResult(outcome.result()));
	else
		return SetL2OssKeyConfigOutcome(outcome.error());
}

void CdnClient::setL2OssKeyConfigAsync(const SetL2OssKeyConfigRequest& request, const SetL2OssKeyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setL2OssKeyConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetL2OssKeyConfigOutcomeCallable CdnClient::setL2OssKeyConfigCallable(const SetL2OssKeyConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetL2OssKeyConfigOutcome()>>(
			[this, request]()
			{
			return this->setL2OssKeyConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetLiveStreamsNotifyUrlConfigOutcome CdnClient::setLiveStreamsNotifyUrlConfig(const SetLiveStreamsNotifyUrlConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLiveStreamsNotifyUrlConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLiveStreamsNotifyUrlConfigOutcome(SetLiveStreamsNotifyUrlConfigResult(outcome.result()));
	else
		return SetLiveStreamsNotifyUrlConfigOutcome(outcome.error());
}

void CdnClient::setLiveStreamsNotifyUrlConfigAsync(const SetLiveStreamsNotifyUrlConfigRequest& request, const SetLiveStreamsNotifyUrlConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLiveStreamsNotifyUrlConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetLiveStreamsNotifyUrlConfigOutcomeCallable CdnClient::setLiveStreamsNotifyUrlConfigCallable(const SetLiveStreamsNotifyUrlConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLiveStreamsNotifyUrlConfigOutcome()>>(
			[this, request]()
			{
			return this->setLiveStreamsNotifyUrlConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetOptimizeConfigOutcome CdnClient::setOptimizeConfig(const SetOptimizeConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetOptimizeConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetOptimizeConfigOutcome(SetOptimizeConfigResult(outcome.result()));
	else
		return SetOptimizeConfigOutcome(outcome.error());
}

void CdnClient::setOptimizeConfigAsync(const SetOptimizeConfigRequest& request, const SetOptimizeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setOptimizeConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetOptimizeConfigOutcomeCallable CdnClient::setOptimizeConfigCallable(const SetOptimizeConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetOptimizeConfigOutcome()>>(
			[this, request]()
			{
			return this->setOptimizeConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetPageCompressConfigOutcome CdnClient::setPageCompressConfig(const SetPageCompressConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetPageCompressConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetPageCompressConfigOutcome(SetPageCompressConfigResult(outcome.result()));
	else
		return SetPageCompressConfigOutcome(outcome.error());
}

void CdnClient::setPageCompressConfigAsync(const SetPageCompressConfigRequest& request, const SetPageCompressConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setPageCompressConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetPageCompressConfigOutcomeCallable CdnClient::setPageCompressConfigCallable(const SetPageCompressConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetPageCompressConfigOutcome()>>(
			[this, request]()
			{
			return this->setPageCompressConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetPathCacheExpiredConfigOutcome CdnClient::setPathCacheExpiredConfig(const SetPathCacheExpiredConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetPathCacheExpiredConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetPathCacheExpiredConfigOutcome(SetPathCacheExpiredConfigResult(outcome.result()));
	else
		return SetPathCacheExpiredConfigOutcome(outcome.error());
}

void CdnClient::setPathCacheExpiredConfigAsync(const SetPathCacheExpiredConfigRequest& request, const SetPathCacheExpiredConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setPathCacheExpiredConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetPathCacheExpiredConfigOutcomeCallable CdnClient::setPathCacheExpiredConfigCallable(const SetPathCacheExpiredConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetPathCacheExpiredConfigOutcome()>>(
			[this, request]()
			{
			return this->setPathCacheExpiredConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetRangeConfigOutcome CdnClient::setRangeConfig(const SetRangeConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetRangeConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetRangeConfigOutcome(SetRangeConfigResult(outcome.result()));
	else
		return SetRangeConfigOutcome(outcome.error());
}

void CdnClient::setRangeConfigAsync(const SetRangeConfigRequest& request, const SetRangeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setRangeConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetRangeConfigOutcomeCallable CdnClient::setRangeConfigCallable(const SetRangeConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetRangeConfigOutcome()>>(
			[this, request]()
			{
			return this->setRangeConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetRefererConfigOutcome CdnClient::setRefererConfig(const SetRefererConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetRefererConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetRefererConfigOutcome(SetRefererConfigResult(outcome.result()));
	else
		return SetRefererConfigOutcome(outcome.error());
}

void CdnClient::setRefererConfigAsync(const SetRefererConfigRequest& request, const SetRefererConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setRefererConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetRefererConfigOutcomeCallable CdnClient::setRefererConfigCallable(const SetRefererConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetRefererConfigOutcome()>>(
			[this, request]()
			{
			return this->setRefererConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetRemoveQueryStringConfigOutcome CdnClient::setRemoveQueryStringConfig(const SetRemoveQueryStringConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetRemoveQueryStringConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetRemoveQueryStringConfigOutcome(SetRemoveQueryStringConfigResult(outcome.result()));
	else
		return SetRemoveQueryStringConfigOutcome(outcome.error());
}

void CdnClient::setRemoveQueryStringConfigAsync(const SetRemoveQueryStringConfigRequest& request, const SetRemoveQueryStringConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setRemoveQueryStringConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetRemoveQueryStringConfigOutcomeCallable CdnClient::setRemoveQueryStringConfigCallable(const SetRemoveQueryStringConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetRemoveQueryStringConfigOutcome()>>(
			[this, request]()
			{
			return this->setRemoveQueryStringConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetReqAuthConfigOutcome CdnClient::setReqAuthConfig(const SetReqAuthConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetReqAuthConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetReqAuthConfigOutcome(SetReqAuthConfigResult(outcome.result()));
	else
		return SetReqAuthConfigOutcome(outcome.error());
}

void CdnClient::setReqAuthConfigAsync(const SetReqAuthConfigRequest& request, const SetReqAuthConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setReqAuthConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetReqAuthConfigOutcomeCallable CdnClient::setReqAuthConfigCallable(const SetReqAuthConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetReqAuthConfigOutcome()>>(
			[this, request]()
			{
			return this->setReqAuthConfig(request);
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

CdnClient::SetSourceHostConfigOutcome CdnClient::setSourceHostConfig(const SetSourceHostConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetSourceHostConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetSourceHostConfigOutcome(SetSourceHostConfigResult(outcome.result()));
	else
		return SetSourceHostConfigOutcome(outcome.error());
}

void CdnClient::setSourceHostConfigAsync(const SetSourceHostConfigRequest& request, const SetSourceHostConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setSourceHostConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetSourceHostConfigOutcomeCallable CdnClient::setSourceHostConfigCallable(const SetSourceHostConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetSourceHostConfigOutcome()>>(
			[this, request]()
			{
			return this->setSourceHostConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetUserGreenManagerConfigOutcome CdnClient::setUserGreenManagerConfig(const SetUserGreenManagerConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetUserGreenManagerConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetUserGreenManagerConfigOutcome(SetUserGreenManagerConfigResult(outcome.result()));
	else
		return SetUserGreenManagerConfigOutcome(outcome.error());
}

void CdnClient::setUserGreenManagerConfigAsync(const SetUserGreenManagerConfigRequest& request, const SetUserGreenManagerConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setUserGreenManagerConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetUserGreenManagerConfigOutcomeCallable CdnClient::setUserGreenManagerConfigCallable(const SetUserGreenManagerConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetUserGreenManagerConfigOutcome()>>(
			[this, request]()
			{
			return this->setUserGreenManagerConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetVideoSeekConfigOutcome CdnClient::setVideoSeekConfig(const SetVideoSeekConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetVideoSeekConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetVideoSeekConfigOutcome(SetVideoSeekConfigResult(outcome.result()));
	else
		return SetVideoSeekConfigOutcome(outcome.error());
}

void CdnClient::setVideoSeekConfigAsync(const SetVideoSeekConfigRequest& request, const SetVideoSeekConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setVideoSeekConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetVideoSeekConfigOutcomeCallable CdnClient::setVideoSeekConfigCallable(const SetVideoSeekConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetVideoSeekConfigOutcome()>>(
			[this, request]()
			{
			return this->setVideoSeekConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetWafConfigOutcome CdnClient::setWafConfig(const SetWafConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetWafConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetWafConfigOutcome(SetWafConfigResult(outcome.result()));
	else
		return SetWafConfigOutcome(outcome.error());
}

void CdnClient::setWafConfigAsync(const SetWafConfigRequest& request, const SetWafConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setWafConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetWafConfigOutcomeCallable CdnClient::setWafConfigCallable(const SetWafConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetWafConfigOutcome()>>(
			[this, request]()
			{
			return this->setWafConfig(request);
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

CdnClient::StartMixStreamsServiceOutcome CdnClient::startMixStreamsService(const StartMixStreamsServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartMixStreamsServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartMixStreamsServiceOutcome(StartMixStreamsServiceResult(outcome.result()));
	else
		return StartMixStreamsServiceOutcome(outcome.error());
}

void CdnClient::startMixStreamsServiceAsync(const StartMixStreamsServiceRequest& request, const StartMixStreamsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startMixStreamsService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::StartMixStreamsServiceOutcomeCallable CdnClient::startMixStreamsServiceCallable(const StartMixStreamsServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartMixStreamsServiceOutcome()>>(
			[this, request]()
			{
			return this->startMixStreamsService(request);
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

CdnClient::StopMixStreamsServiceOutcome CdnClient::stopMixStreamsService(const StopMixStreamsServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopMixStreamsServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopMixStreamsServiceOutcome(StopMixStreamsServiceResult(outcome.result()));
	else
		return StopMixStreamsServiceOutcome(outcome.error());
}

void CdnClient::stopMixStreamsServiceAsync(const StopMixStreamsServiceRequest& request, const StopMixStreamsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopMixStreamsService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::StopMixStreamsServiceOutcomeCallable CdnClient::stopMixStreamsServiceCallable(const StopMixStreamsServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopMixStreamsServiceOutcome()>>(
			[this, request]()
			{
			return this->stopMixStreamsService(request);
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

CdnClient::UpdateLiveAppSnapshotConfigOutcome CdnClient::updateLiveAppSnapshotConfig(const UpdateLiveAppSnapshotConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLiveAppSnapshotConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLiveAppSnapshotConfigOutcome(UpdateLiveAppSnapshotConfigResult(outcome.result()));
	else
		return UpdateLiveAppSnapshotConfigOutcome(outcome.error());
}

void CdnClient::updateLiveAppSnapshotConfigAsync(const UpdateLiveAppSnapshotConfigRequest& request, const UpdateLiveAppSnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLiveAppSnapshotConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::UpdateLiveAppSnapshotConfigOutcomeCallable CdnClient::updateLiveAppSnapshotConfigCallable(const UpdateLiveAppSnapshotConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLiveAppSnapshotConfigOutcome()>>(
			[this, request]()
			{
			return this->updateLiveAppSnapshotConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

