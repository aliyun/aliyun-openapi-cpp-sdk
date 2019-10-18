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

#include <alibabacloud/dnsknocker/DnsKnockerClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::DnsKnocker;
using namespace AlibabaCloud::DnsKnocker::Model;

namespace
{
	const std::string SERVICE_NAME = "DnsKnocker";
}

DnsKnockerClient::DnsKnockerClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dns_knocker");
}

DnsKnockerClient::DnsKnockerClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dns_knocker");
}

DnsKnockerClient::DnsKnockerClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dns_knocker");
}

DnsKnockerClient::~DnsKnockerClient()
{}

DnsKnockerClient::BatchCreateRrOutcome DnsKnockerClient::batchCreateRr(const BatchCreateRrRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchCreateRrOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchCreateRrOutcome(BatchCreateRrResult(outcome.result()));
	else
		return BatchCreateRrOutcome(outcome.error());
}

void DnsKnockerClient::batchCreateRrAsync(const BatchCreateRrRequest& request, const BatchCreateRrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchCreateRr(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DnsKnockerClient::BatchCreateRrOutcomeCallable DnsKnockerClient::batchCreateRrCallable(const BatchCreateRrRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchCreateRrOutcome()>>(
			[this, request]()
			{
			return this->batchCreateRr(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DnsKnockerClient::BatchDeleteRrOutcome DnsKnockerClient::batchDeleteRr(const BatchDeleteRrRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchDeleteRrOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchDeleteRrOutcome(BatchDeleteRrResult(outcome.result()));
	else
		return BatchDeleteRrOutcome(outcome.error());
}

void DnsKnockerClient::batchDeleteRrAsync(const BatchDeleteRrRequest& request, const BatchDeleteRrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchDeleteRr(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DnsKnockerClient::BatchDeleteRrOutcomeCallable DnsKnockerClient::batchDeleteRrCallable(const BatchDeleteRrRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchDeleteRrOutcome()>>(
			[this, request]()
			{
			return this->batchDeleteRr(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DnsKnockerClient::ChangeResourceRecordOutcome DnsKnockerClient::changeResourceRecord(const ChangeResourceRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeResourceRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeResourceRecordOutcome(ChangeResourceRecordResult(outcome.result()));
	else
		return ChangeResourceRecordOutcome(outcome.error());
}

void DnsKnockerClient::changeResourceRecordAsync(const ChangeResourceRecordRequest& request, const ChangeResourceRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeResourceRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DnsKnockerClient::ChangeResourceRecordOutcomeCallable DnsKnockerClient::changeResourceRecordCallable(const ChangeResourceRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeResourceRecordOutcome()>>(
			[this, request]()
			{
			return this->changeResourceRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DnsKnockerClient::ChangeResourceRecordsOutcome DnsKnockerClient::changeResourceRecords(const ChangeResourceRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeResourceRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeResourceRecordsOutcome(ChangeResourceRecordsResult(outcome.result()));
	else
		return ChangeResourceRecordsOutcome(outcome.error());
}

void DnsKnockerClient::changeResourceRecordsAsync(const ChangeResourceRecordsRequest& request, const ChangeResourceRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeResourceRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DnsKnockerClient::ChangeResourceRecordsOutcomeCallable DnsKnockerClient::changeResourceRecordsCallable(const ChangeResourceRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeResourceRecordsOutcome()>>(
			[this, request]()
			{
			return this->changeResourceRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DnsKnockerClient::CreateResourceRecordOutcome DnsKnockerClient::createResourceRecord(const CreateResourceRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateResourceRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateResourceRecordOutcome(CreateResourceRecordResult(outcome.result()));
	else
		return CreateResourceRecordOutcome(outcome.error());
}

void DnsKnockerClient::createResourceRecordAsync(const CreateResourceRecordRequest& request, const CreateResourceRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createResourceRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DnsKnockerClient::CreateResourceRecordOutcomeCallable DnsKnockerClient::createResourceRecordCallable(const CreateResourceRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateResourceRecordOutcome()>>(
			[this, request]()
			{
			return this->createResourceRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DnsKnockerClient::DeleteDomainOutcome DnsKnockerClient::deleteDomain(const DeleteDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDomainOutcome(DeleteDomainResult(outcome.result()));
	else
		return DeleteDomainOutcome(outcome.error());
}

void DnsKnockerClient::deleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DnsKnockerClient::DeleteDomainOutcomeCallable DnsKnockerClient::deleteDomainCallable(const DeleteDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDomainOutcome()>>(
			[this, request]()
			{
			return this->deleteDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DnsKnockerClient::DeleteResourceRecordOutcome DnsKnockerClient::deleteResourceRecord(const DeleteResourceRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteResourceRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteResourceRecordOutcome(DeleteResourceRecordResult(outcome.result()));
	else
		return DeleteResourceRecordOutcome(outcome.error());
}

void DnsKnockerClient::deleteResourceRecordAsync(const DeleteResourceRecordRequest& request, const DeleteResourceRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteResourceRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DnsKnockerClient::DeleteResourceRecordOutcomeCallable DnsKnockerClient::deleteResourceRecordCallable(const DeleteResourceRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteResourceRecordOutcome()>>(
			[this, request]()
			{
			return this->deleteResourceRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DnsKnockerClient::DeleteResourceRecordsOutcome DnsKnockerClient::deleteResourceRecords(const DeleteResourceRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteResourceRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteResourceRecordsOutcome(DeleteResourceRecordsResult(outcome.result()));
	else
		return DeleteResourceRecordsOutcome(outcome.error());
}

void DnsKnockerClient::deleteResourceRecordsAsync(const DeleteResourceRecordsRequest& request, const DeleteResourceRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteResourceRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DnsKnockerClient::DeleteResourceRecordsOutcomeCallable DnsKnockerClient::deleteResourceRecordsCallable(const DeleteResourceRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteResourceRecordsOutcome()>>(
			[this, request]()
			{
			return this->deleteResourceRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DnsKnockerClient::GetDomainOutcome DnsKnockerClient::getDomain(const GetDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDomainOutcome(GetDomainResult(outcome.result()));
	else
		return GetDomainOutcome(outcome.error());
}

void DnsKnockerClient::getDomainAsync(const GetDomainRequest& request, const GetDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DnsKnockerClient::GetDomainOutcomeCallable DnsKnockerClient::getDomainCallable(const GetDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDomainOutcome()>>(
			[this, request]()
			{
			return this->getDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DnsKnockerClient::GetResourceRecordsOutcome DnsKnockerClient::getResourceRecords(const GetResourceRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetResourceRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetResourceRecordsOutcome(GetResourceRecordsResult(outcome.result()));
	else
		return GetResourceRecordsOutcome(outcome.error());
}

void DnsKnockerClient::getResourceRecordsAsync(const GetResourceRecordsRequest& request, const GetResourceRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getResourceRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DnsKnockerClient::GetResourceRecordsOutcomeCallable DnsKnockerClient::getResourceRecordsCallable(const GetResourceRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetResourceRecordsOutcome()>>(
			[this, request]()
			{
			return this->getResourceRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

