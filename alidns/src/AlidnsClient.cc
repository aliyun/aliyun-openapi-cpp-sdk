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

#include <alibabacloud/alidns/AlidnsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

namespace
{
	const std::string SERVICE_NAME = "Alidns";
}

AlidnsClient::AlidnsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "alidns");
}

AlidnsClient::AlidnsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "alidns");
}

AlidnsClient::AlidnsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "alidns");
}

AlidnsClient::~AlidnsClient()
{}

AlidnsClient::AddDomainOutcome AlidnsClient::addDomain(const AddDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddDomainOutcome(AddDomainResult(outcome.result()));
	else
		return AddDomainOutcome(outcome.error());
}

void AlidnsClient::addDomainAsync(const AddDomainRequest& request, const AddDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::AddDomainOutcomeCallable AlidnsClient::addDomainCallable(const AddDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDomainOutcome()>>(
			[this, request]()
			{
			return this->addDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::AddDomainBackupOutcome AlidnsClient::addDomainBackup(const AddDomainBackupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddDomainBackupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddDomainBackupOutcome(AddDomainBackupResult(outcome.result()));
	else
		return AddDomainBackupOutcome(outcome.error());
}

void AlidnsClient::addDomainBackupAsync(const AddDomainBackupRequest& request, const AddDomainBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDomainBackup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::AddDomainBackupOutcomeCallable AlidnsClient::addDomainBackupCallable(const AddDomainBackupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDomainBackupOutcome()>>(
			[this, request]()
			{
			return this->addDomainBackup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::AddDomainGroupOutcome AlidnsClient::addDomainGroup(const AddDomainGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddDomainGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddDomainGroupOutcome(AddDomainGroupResult(outcome.result()));
	else
		return AddDomainGroupOutcome(outcome.error());
}

void AlidnsClient::addDomainGroupAsync(const AddDomainGroupRequest& request, const AddDomainGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDomainGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::AddDomainGroupOutcomeCallable AlidnsClient::addDomainGroupCallable(const AddDomainGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDomainGroupOutcome()>>(
			[this, request]()
			{
			return this->addDomainGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::AddDomainRecordOutcome AlidnsClient::addDomainRecord(const AddDomainRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddDomainRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddDomainRecordOutcome(AddDomainRecordResult(outcome.result()));
	else
		return AddDomainRecordOutcome(outcome.error());
}

void AlidnsClient::addDomainRecordAsync(const AddDomainRecordRequest& request, const AddDomainRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDomainRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::AddDomainRecordOutcomeCallable AlidnsClient::addDomainRecordCallable(const AddDomainRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDomainRecordOutcome()>>(
			[this, request]()
			{
			return this->addDomainRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::AddGtmAccessStrategyOutcome AlidnsClient::addGtmAccessStrategy(const AddGtmAccessStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddGtmAccessStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddGtmAccessStrategyOutcome(AddGtmAccessStrategyResult(outcome.result()));
	else
		return AddGtmAccessStrategyOutcome(outcome.error());
}

void AlidnsClient::addGtmAccessStrategyAsync(const AddGtmAccessStrategyRequest& request, const AddGtmAccessStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addGtmAccessStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::AddGtmAccessStrategyOutcomeCallable AlidnsClient::addGtmAccessStrategyCallable(const AddGtmAccessStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddGtmAccessStrategyOutcome()>>(
			[this, request]()
			{
			return this->addGtmAccessStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::AddGtmAddressPoolOutcome AlidnsClient::addGtmAddressPool(const AddGtmAddressPoolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddGtmAddressPoolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddGtmAddressPoolOutcome(AddGtmAddressPoolResult(outcome.result()));
	else
		return AddGtmAddressPoolOutcome(outcome.error());
}

void AlidnsClient::addGtmAddressPoolAsync(const AddGtmAddressPoolRequest& request, const AddGtmAddressPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addGtmAddressPool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::AddGtmAddressPoolOutcomeCallable AlidnsClient::addGtmAddressPoolCallable(const AddGtmAddressPoolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddGtmAddressPoolOutcome()>>(
			[this, request]()
			{
			return this->addGtmAddressPool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::AddGtmMonitorOutcome AlidnsClient::addGtmMonitor(const AddGtmMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddGtmMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddGtmMonitorOutcome(AddGtmMonitorResult(outcome.result()));
	else
		return AddGtmMonitorOutcome(outcome.error());
}

void AlidnsClient::addGtmMonitorAsync(const AddGtmMonitorRequest& request, const AddGtmMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addGtmMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::AddGtmMonitorOutcomeCallable AlidnsClient::addGtmMonitorCallable(const AddGtmMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddGtmMonitorOutcome()>>(
			[this, request]()
			{
			return this->addGtmMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::AddGtmRecoveryPlanOutcome AlidnsClient::addGtmRecoveryPlan(const AddGtmRecoveryPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddGtmRecoveryPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddGtmRecoveryPlanOutcome(AddGtmRecoveryPlanResult(outcome.result()));
	else
		return AddGtmRecoveryPlanOutcome(outcome.error());
}

void AlidnsClient::addGtmRecoveryPlanAsync(const AddGtmRecoveryPlanRequest& request, const AddGtmRecoveryPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addGtmRecoveryPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::AddGtmRecoveryPlanOutcomeCallable AlidnsClient::addGtmRecoveryPlanCallable(const AddGtmRecoveryPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddGtmRecoveryPlanOutcome()>>(
			[this, request]()
			{
			return this->addGtmRecoveryPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::ChangeDomainGroupOutcome AlidnsClient::changeDomainGroup(const ChangeDomainGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeDomainGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeDomainGroupOutcome(ChangeDomainGroupResult(outcome.result()));
	else
		return ChangeDomainGroupOutcome(outcome.error());
}

void AlidnsClient::changeDomainGroupAsync(const ChangeDomainGroupRequest& request, const ChangeDomainGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeDomainGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::ChangeDomainGroupOutcomeCallable AlidnsClient::changeDomainGroupCallable(const ChangeDomainGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeDomainGroupOutcome()>>(
			[this, request]()
			{
			return this->changeDomainGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::ChangeDomainOfDnsProductOutcome AlidnsClient::changeDomainOfDnsProduct(const ChangeDomainOfDnsProductRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeDomainOfDnsProductOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeDomainOfDnsProductOutcome(ChangeDomainOfDnsProductResult(outcome.result()));
	else
		return ChangeDomainOfDnsProductOutcome(outcome.error());
}

void AlidnsClient::changeDomainOfDnsProductAsync(const ChangeDomainOfDnsProductRequest& request, const ChangeDomainOfDnsProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeDomainOfDnsProduct(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::ChangeDomainOfDnsProductOutcomeCallable AlidnsClient::changeDomainOfDnsProductCallable(const ChangeDomainOfDnsProductRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeDomainOfDnsProductOutcome()>>(
			[this, request]()
			{
			return this->changeDomainOfDnsProduct(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DeleteDomainOutcome AlidnsClient::deleteDomain(const DeleteDomainRequest &request) const
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

void AlidnsClient::deleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DeleteDomainOutcomeCallable AlidnsClient::deleteDomainCallable(const DeleteDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDomainOutcome()>>(
			[this, request]()
			{
			return this->deleteDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DeleteDomainGroupOutcome AlidnsClient::deleteDomainGroup(const DeleteDomainGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDomainGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDomainGroupOutcome(DeleteDomainGroupResult(outcome.result()));
	else
		return DeleteDomainGroupOutcome(outcome.error());
}

void AlidnsClient::deleteDomainGroupAsync(const DeleteDomainGroupRequest& request, const DeleteDomainGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDomainGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DeleteDomainGroupOutcomeCallable AlidnsClient::deleteDomainGroupCallable(const DeleteDomainGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDomainGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteDomainGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DeleteDomainRecordOutcome AlidnsClient::deleteDomainRecord(const DeleteDomainRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDomainRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDomainRecordOutcome(DeleteDomainRecordResult(outcome.result()));
	else
		return DeleteDomainRecordOutcome(outcome.error());
}

void AlidnsClient::deleteDomainRecordAsync(const DeleteDomainRecordRequest& request, const DeleteDomainRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDomainRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DeleteDomainRecordOutcomeCallable AlidnsClient::deleteDomainRecordCallable(const DeleteDomainRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDomainRecordOutcome()>>(
			[this, request]()
			{
			return this->deleteDomainRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DeleteGtmAccessStrategyOutcome AlidnsClient::deleteGtmAccessStrategy(const DeleteGtmAccessStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGtmAccessStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGtmAccessStrategyOutcome(DeleteGtmAccessStrategyResult(outcome.result()));
	else
		return DeleteGtmAccessStrategyOutcome(outcome.error());
}

void AlidnsClient::deleteGtmAccessStrategyAsync(const DeleteGtmAccessStrategyRequest& request, const DeleteGtmAccessStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGtmAccessStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DeleteGtmAccessStrategyOutcomeCallable AlidnsClient::deleteGtmAccessStrategyCallable(const DeleteGtmAccessStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGtmAccessStrategyOutcome()>>(
			[this, request]()
			{
			return this->deleteGtmAccessStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DeleteGtmAddressPoolOutcome AlidnsClient::deleteGtmAddressPool(const DeleteGtmAddressPoolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGtmAddressPoolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGtmAddressPoolOutcome(DeleteGtmAddressPoolResult(outcome.result()));
	else
		return DeleteGtmAddressPoolOutcome(outcome.error());
}

void AlidnsClient::deleteGtmAddressPoolAsync(const DeleteGtmAddressPoolRequest& request, const DeleteGtmAddressPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGtmAddressPool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DeleteGtmAddressPoolOutcomeCallable AlidnsClient::deleteGtmAddressPoolCallable(const DeleteGtmAddressPoolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGtmAddressPoolOutcome()>>(
			[this, request]()
			{
			return this->deleteGtmAddressPool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DeleteGtmRecoveryPlanOutcome AlidnsClient::deleteGtmRecoveryPlan(const DeleteGtmRecoveryPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGtmRecoveryPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGtmRecoveryPlanOutcome(DeleteGtmRecoveryPlanResult(outcome.result()));
	else
		return DeleteGtmRecoveryPlanOutcome(outcome.error());
}

void AlidnsClient::deleteGtmRecoveryPlanAsync(const DeleteGtmRecoveryPlanRequest& request, const DeleteGtmRecoveryPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGtmRecoveryPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DeleteGtmRecoveryPlanOutcomeCallable AlidnsClient::deleteGtmRecoveryPlanCallable(const DeleteGtmRecoveryPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGtmRecoveryPlanOutcome()>>(
			[this, request]()
			{
			return this->deleteGtmRecoveryPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DeleteSubDomainRecordsOutcome AlidnsClient::deleteSubDomainRecords(const DeleteSubDomainRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSubDomainRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSubDomainRecordsOutcome(DeleteSubDomainRecordsResult(outcome.result()));
	else
		return DeleteSubDomainRecordsOutcome(outcome.error());
}

void AlidnsClient::deleteSubDomainRecordsAsync(const DeleteSubDomainRecordsRequest& request, const DeleteSubDomainRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSubDomainRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DeleteSubDomainRecordsOutcomeCallable AlidnsClient::deleteSubDomainRecordsCallable(const DeleteSubDomainRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSubDomainRecordsOutcome()>>(
			[this, request]()
			{
			return this->deleteSubDomainRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeBatchResultCountOutcome AlidnsClient::describeBatchResultCount(const DescribeBatchResultCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBatchResultCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBatchResultCountOutcome(DescribeBatchResultCountResult(outcome.result()));
	else
		return DescribeBatchResultCountOutcome(outcome.error());
}

void AlidnsClient::describeBatchResultCountAsync(const DescribeBatchResultCountRequest& request, const DescribeBatchResultCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBatchResultCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeBatchResultCountOutcomeCallable AlidnsClient::describeBatchResultCountCallable(const DescribeBatchResultCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBatchResultCountOutcome()>>(
			[this, request]()
			{
			return this->describeBatchResultCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeBatchResultDetailOutcome AlidnsClient::describeBatchResultDetail(const DescribeBatchResultDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBatchResultDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBatchResultDetailOutcome(DescribeBatchResultDetailResult(outcome.result()));
	else
		return DescribeBatchResultDetailOutcome(outcome.error());
}

void AlidnsClient::describeBatchResultDetailAsync(const DescribeBatchResultDetailRequest& request, const DescribeBatchResultDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBatchResultDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeBatchResultDetailOutcomeCallable AlidnsClient::describeBatchResultDetailCallable(const DescribeBatchResultDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBatchResultDetailOutcome()>>(
			[this, request]()
			{
			return this->describeBatchResultDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDNSSLBSubDomainsOutcome AlidnsClient::describeDNSSLBSubDomains(const DescribeDNSSLBSubDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDNSSLBSubDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDNSSLBSubDomainsOutcome(DescribeDNSSLBSubDomainsResult(outcome.result()));
	else
		return DescribeDNSSLBSubDomainsOutcome(outcome.error());
}

void AlidnsClient::describeDNSSLBSubDomainsAsync(const DescribeDNSSLBSubDomainsRequest& request, const DescribeDNSSLBSubDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDNSSLBSubDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDNSSLBSubDomainsOutcomeCallable AlidnsClient::describeDNSSLBSubDomainsCallable(const DescribeDNSSLBSubDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDNSSLBSubDomainsOutcome()>>(
			[this, request]()
			{
			return this->describeDNSSLBSubDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDnsProductInstanceOutcome AlidnsClient::describeDnsProductInstance(const DescribeDnsProductInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDnsProductInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDnsProductInstanceOutcome(DescribeDnsProductInstanceResult(outcome.result()));
	else
		return DescribeDnsProductInstanceOutcome(outcome.error());
}

void AlidnsClient::describeDnsProductInstanceAsync(const DescribeDnsProductInstanceRequest& request, const DescribeDnsProductInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDnsProductInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDnsProductInstanceOutcomeCallable AlidnsClient::describeDnsProductInstanceCallable(const DescribeDnsProductInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDnsProductInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeDnsProductInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDnsProductInstancesOutcome AlidnsClient::describeDnsProductInstances(const DescribeDnsProductInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDnsProductInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDnsProductInstancesOutcome(DescribeDnsProductInstancesResult(outcome.result()));
	else
		return DescribeDnsProductInstancesOutcome(outcome.error());
}

void AlidnsClient::describeDnsProductInstancesAsync(const DescribeDnsProductInstancesRequest& request, const DescribeDnsProductInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDnsProductInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDnsProductInstancesOutcomeCallable AlidnsClient::describeDnsProductInstancesCallable(const DescribeDnsProductInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDnsProductInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeDnsProductInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDomainGroupsOutcome AlidnsClient::describeDomainGroups(const DescribeDomainGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainGroupsOutcome(DescribeDomainGroupsResult(outcome.result()));
	else
		return DescribeDomainGroupsOutcome(outcome.error());
}

void AlidnsClient::describeDomainGroupsAsync(const DescribeDomainGroupsRequest& request, const DescribeDomainGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDomainGroupsOutcomeCallable AlidnsClient::describeDomainGroupsCallable(const DescribeDomainGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeDomainGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDomainInfoOutcome AlidnsClient::describeDomainInfo(const DescribeDomainInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainInfoOutcome(DescribeDomainInfoResult(outcome.result()));
	else
		return DescribeDomainInfoOutcome(outcome.error());
}

void AlidnsClient::describeDomainInfoAsync(const DescribeDomainInfoRequest& request, const DescribeDomainInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDomainInfoOutcomeCallable AlidnsClient::describeDomainInfoCallable(const DescribeDomainInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDomainInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDomainLogsOutcome AlidnsClient::describeDomainLogs(const DescribeDomainLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainLogsOutcome(DescribeDomainLogsResult(outcome.result()));
	else
		return DescribeDomainLogsOutcome(outcome.error());
}

void AlidnsClient::describeDomainLogsAsync(const DescribeDomainLogsRequest& request, const DescribeDomainLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDomainLogsOutcomeCallable AlidnsClient::describeDomainLogsCallable(const DescribeDomainLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainLogsOutcome()>>(
			[this, request]()
			{
			return this->describeDomainLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDomainNsOutcome AlidnsClient::describeDomainNs(const DescribeDomainNsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainNsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainNsOutcome(DescribeDomainNsResult(outcome.result()));
	else
		return DescribeDomainNsOutcome(outcome.error());
}

void AlidnsClient::describeDomainNsAsync(const DescribeDomainNsRequest& request, const DescribeDomainNsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainNs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDomainNsOutcomeCallable AlidnsClient::describeDomainNsCallable(const DescribeDomainNsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainNsOutcome()>>(
			[this, request]()
			{
			return this->describeDomainNs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDomainRecordInfoOutcome AlidnsClient::describeDomainRecordInfo(const DescribeDomainRecordInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainRecordInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainRecordInfoOutcome(DescribeDomainRecordInfoResult(outcome.result()));
	else
		return DescribeDomainRecordInfoOutcome(outcome.error());
}

void AlidnsClient::describeDomainRecordInfoAsync(const DescribeDomainRecordInfoRequest& request, const DescribeDomainRecordInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainRecordInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDomainRecordInfoOutcomeCallable AlidnsClient::describeDomainRecordInfoCallable(const DescribeDomainRecordInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainRecordInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDomainRecordInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDomainRecordsOutcome AlidnsClient::describeDomainRecords(const DescribeDomainRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainRecordsOutcome(DescribeDomainRecordsResult(outcome.result()));
	else
		return DescribeDomainRecordsOutcome(outcome.error());
}

void AlidnsClient::describeDomainRecordsAsync(const DescribeDomainRecordsRequest& request, const DescribeDomainRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDomainRecordsOutcomeCallable AlidnsClient::describeDomainRecordsCallable(const DescribeDomainRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeDomainRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDomainStatisticsOutcome AlidnsClient::describeDomainStatistics(const DescribeDomainStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainStatisticsOutcome(DescribeDomainStatisticsResult(outcome.result()));
	else
		return DescribeDomainStatisticsOutcome(outcome.error());
}

void AlidnsClient::describeDomainStatisticsAsync(const DescribeDomainStatisticsRequest& request, const DescribeDomainStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDomainStatisticsOutcomeCallable AlidnsClient::describeDomainStatisticsCallable(const DescribeDomainStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeDomainStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDomainStatisticsSummaryOutcome AlidnsClient::describeDomainStatisticsSummary(const DescribeDomainStatisticsSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainStatisticsSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainStatisticsSummaryOutcome(DescribeDomainStatisticsSummaryResult(outcome.result()));
	else
		return DescribeDomainStatisticsSummaryOutcome(outcome.error());
}

void AlidnsClient::describeDomainStatisticsSummaryAsync(const DescribeDomainStatisticsSummaryRequest& request, const DescribeDomainStatisticsSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainStatisticsSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDomainStatisticsSummaryOutcomeCallable AlidnsClient::describeDomainStatisticsSummaryCallable(const DescribeDomainStatisticsSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainStatisticsSummaryOutcome()>>(
			[this, request]()
			{
			return this->describeDomainStatisticsSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDomainsOutcome AlidnsClient::describeDomains(const DescribeDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainsOutcome(DescribeDomainsResult(outcome.result()));
	else
		return DescribeDomainsOutcome(outcome.error());
}

void AlidnsClient::describeDomainsAsync(const DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDomainsOutcomeCallable AlidnsClient::describeDomainsCallable(const DescribeDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainsOutcome()>>(
			[this, request]()
			{
			return this->describeDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeGtmAccessStrategiesOutcome AlidnsClient::describeGtmAccessStrategies(const DescribeGtmAccessStrategiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGtmAccessStrategiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGtmAccessStrategiesOutcome(DescribeGtmAccessStrategiesResult(outcome.result()));
	else
		return DescribeGtmAccessStrategiesOutcome(outcome.error());
}

void AlidnsClient::describeGtmAccessStrategiesAsync(const DescribeGtmAccessStrategiesRequest& request, const DescribeGtmAccessStrategiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGtmAccessStrategies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeGtmAccessStrategiesOutcomeCallable AlidnsClient::describeGtmAccessStrategiesCallable(const DescribeGtmAccessStrategiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGtmAccessStrategiesOutcome()>>(
			[this, request]()
			{
			return this->describeGtmAccessStrategies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeGtmAccessStrategyOutcome AlidnsClient::describeGtmAccessStrategy(const DescribeGtmAccessStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGtmAccessStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGtmAccessStrategyOutcome(DescribeGtmAccessStrategyResult(outcome.result()));
	else
		return DescribeGtmAccessStrategyOutcome(outcome.error());
}

void AlidnsClient::describeGtmAccessStrategyAsync(const DescribeGtmAccessStrategyRequest& request, const DescribeGtmAccessStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGtmAccessStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeGtmAccessStrategyOutcomeCallable AlidnsClient::describeGtmAccessStrategyCallable(const DescribeGtmAccessStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGtmAccessStrategyOutcome()>>(
			[this, request]()
			{
			return this->describeGtmAccessStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeGtmAccessStrategyAvailableConfigOutcome AlidnsClient::describeGtmAccessStrategyAvailableConfig(const DescribeGtmAccessStrategyAvailableConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGtmAccessStrategyAvailableConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGtmAccessStrategyAvailableConfigOutcome(DescribeGtmAccessStrategyAvailableConfigResult(outcome.result()));
	else
		return DescribeGtmAccessStrategyAvailableConfigOutcome(outcome.error());
}

void AlidnsClient::describeGtmAccessStrategyAvailableConfigAsync(const DescribeGtmAccessStrategyAvailableConfigRequest& request, const DescribeGtmAccessStrategyAvailableConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGtmAccessStrategyAvailableConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeGtmAccessStrategyAvailableConfigOutcomeCallable AlidnsClient::describeGtmAccessStrategyAvailableConfigCallable(const DescribeGtmAccessStrategyAvailableConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGtmAccessStrategyAvailableConfigOutcome()>>(
			[this, request]()
			{
			return this->describeGtmAccessStrategyAvailableConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeGtmAvailableAlertGroupOutcome AlidnsClient::describeGtmAvailableAlertGroup(const DescribeGtmAvailableAlertGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGtmAvailableAlertGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGtmAvailableAlertGroupOutcome(DescribeGtmAvailableAlertGroupResult(outcome.result()));
	else
		return DescribeGtmAvailableAlertGroupOutcome(outcome.error());
}

void AlidnsClient::describeGtmAvailableAlertGroupAsync(const DescribeGtmAvailableAlertGroupRequest& request, const DescribeGtmAvailableAlertGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGtmAvailableAlertGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeGtmAvailableAlertGroupOutcomeCallable AlidnsClient::describeGtmAvailableAlertGroupCallable(const DescribeGtmAvailableAlertGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGtmAvailableAlertGroupOutcome()>>(
			[this, request]()
			{
			return this->describeGtmAvailableAlertGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeGtmInstanceOutcome AlidnsClient::describeGtmInstance(const DescribeGtmInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGtmInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGtmInstanceOutcome(DescribeGtmInstanceResult(outcome.result()));
	else
		return DescribeGtmInstanceOutcome(outcome.error());
}

void AlidnsClient::describeGtmInstanceAsync(const DescribeGtmInstanceRequest& request, const DescribeGtmInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGtmInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeGtmInstanceOutcomeCallable AlidnsClient::describeGtmInstanceCallable(const DescribeGtmInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGtmInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeGtmInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeGtmInstanceAddressPoolOutcome AlidnsClient::describeGtmInstanceAddressPool(const DescribeGtmInstanceAddressPoolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGtmInstanceAddressPoolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGtmInstanceAddressPoolOutcome(DescribeGtmInstanceAddressPoolResult(outcome.result()));
	else
		return DescribeGtmInstanceAddressPoolOutcome(outcome.error());
}

void AlidnsClient::describeGtmInstanceAddressPoolAsync(const DescribeGtmInstanceAddressPoolRequest& request, const DescribeGtmInstanceAddressPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGtmInstanceAddressPool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeGtmInstanceAddressPoolOutcomeCallable AlidnsClient::describeGtmInstanceAddressPoolCallable(const DescribeGtmInstanceAddressPoolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGtmInstanceAddressPoolOutcome()>>(
			[this, request]()
			{
			return this->describeGtmInstanceAddressPool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeGtmInstanceAddressPoolsOutcome AlidnsClient::describeGtmInstanceAddressPools(const DescribeGtmInstanceAddressPoolsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGtmInstanceAddressPoolsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGtmInstanceAddressPoolsOutcome(DescribeGtmInstanceAddressPoolsResult(outcome.result()));
	else
		return DescribeGtmInstanceAddressPoolsOutcome(outcome.error());
}

void AlidnsClient::describeGtmInstanceAddressPoolsAsync(const DescribeGtmInstanceAddressPoolsRequest& request, const DescribeGtmInstanceAddressPoolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGtmInstanceAddressPools(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeGtmInstanceAddressPoolsOutcomeCallable AlidnsClient::describeGtmInstanceAddressPoolsCallable(const DescribeGtmInstanceAddressPoolsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGtmInstanceAddressPoolsOutcome()>>(
			[this, request]()
			{
			return this->describeGtmInstanceAddressPools(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeGtmInstanceStatusOutcome AlidnsClient::describeGtmInstanceStatus(const DescribeGtmInstanceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGtmInstanceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGtmInstanceStatusOutcome(DescribeGtmInstanceStatusResult(outcome.result()));
	else
		return DescribeGtmInstanceStatusOutcome(outcome.error());
}

void AlidnsClient::describeGtmInstanceStatusAsync(const DescribeGtmInstanceStatusRequest& request, const DescribeGtmInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGtmInstanceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeGtmInstanceStatusOutcomeCallable AlidnsClient::describeGtmInstanceStatusCallable(const DescribeGtmInstanceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGtmInstanceStatusOutcome()>>(
			[this, request]()
			{
			return this->describeGtmInstanceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeGtmInstanceSystemCnameOutcome AlidnsClient::describeGtmInstanceSystemCname(const DescribeGtmInstanceSystemCnameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGtmInstanceSystemCnameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGtmInstanceSystemCnameOutcome(DescribeGtmInstanceSystemCnameResult(outcome.result()));
	else
		return DescribeGtmInstanceSystemCnameOutcome(outcome.error());
}

void AlidnsClient::describeGtmInstanceSystemCnameAsync(const DescribeGtmInstanceSystemCnameRequest& request, const DescribeGtmInstanceSystemCnameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGtmInstanceSystemCname(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeGtmInstanceSystemCnameOutcomeCallable AlidnsClient::describeGtmInstanceSystemCnameCallable(const DescribeGtmInstanceSystemCnameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGtmInstanceSystemCnameOutcome()>>(
			[this, request]()
			{
			return this->describeGtmInstanceSystemCname(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeGtmInstancesOutcome AlidnsClient::describeGtmInstances(const DescribeGtmInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGtmInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGtmInstancesOutcome(DescribeGtmInstancesResult(outcome.result()));
	else
		return DescribeGtmInstancesOutcome(outcome.error());
}

void AlidnsClient::describeGtmInstancesAsync(const DescribeGtmInstancesRequest& request, const DescribeGtmInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGtmInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeGtmInstancesOutcomeCallable AlidnsClient::describeGtmInstancesCallable(const DescribeGtmInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGtmInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeGtmInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeGtmLogsOutcome AlidnsClient::describeGtmLogs(const DescribeGtmLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGtmLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGtmLogsOutcome(DescribeGtmLogsResult(outcome.result()));
	else
		return DescribeGtmLogsOutcome(outcome.error());
}

void AlidnsClient::describeGtmLogsAsync(const DescribeGtmLogsRequest& request, const DescribeGtmLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGtmLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeGtmLogsOutcomeCallable AlidnsClient::describeGtmLogsCallable(const DescribeGtmLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGtmLogsOutcome()>>(
			[this, request]()
			{
			return this->describeGtmLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeGtmMonitorAvailableConfigOutcome AlidnsClient::describeGtmMonitorAvailableConfig(const DescribeGtmMonitorAvailableConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGtmMonitorAvailableConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGtmMonitorAvailableConfigOutcome(DescribeGtmMonitorAvailableConfigResult(outcome.result()));
	else
		return DescribeGtmMonitorAvailableConfigOutcome(outcome.error());
}

void AlidnsClient::describeGtmMonitorAvailableConfigAsync(const DescribeGtmMonitorAvailableConfigRequest& request, const DescribeGtmMonitorAvailableConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGtmMonitorAvailableConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeGtmMonitorAvailableConfigOutcomeCallable AlidnsClient::describeGtmMonitorAvailableConfigCallable(const DescribeGtmMonitorAvailableConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGtmMonitorAvailableConfigOutcome()>>(
			[this, request]()
			{
			return this->describeGtmMonitorAvailableConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeGtmMonitorConfigOutcome AlidnsClient::describeGtmMonitorConfig(const DescribeGtmMonitorConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGtmMonitorConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGtmMonitorConfigOutcome(DescribeGtmMonitorConfigResult(outcome.result()));
	else
		return DescribeGtmMonitorConfigOutcome(outcome.error());
}

void AlidnsClient::describeGtmMonitorConfigAsync(const DescribeGtmMonitorConfigRequest& request, const DescribeGtmMonitorConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGtmMonitorConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeGtmMonitorConfigOutcomeCallable AlidnsClient::describeGtmMonitorConfigCallable(const DescribeGtmMonitorConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGtmMonitorConfigOutcome()>>(
			[this, request]()
			{
			return this->describeGtmMonitorConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeGtmRecoveryPlanOutcome AlidnsClient::describeGtmRecoveryPlan(const DescribeGtmRecoveryPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGtmRecoveryPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGtmRecoveryPlanOutcome(DescribeGtmRecoveryPlanResult(outcome.result()));
	else
		return DescribeGtmRecoveryPlanOutcome(outcome.error());
}

void AlidnsClient::describeGtmRecoveryPlanAsync(const DescribeGtmRecoveryPlanRequest& request, const DescribeGtmRecoveryPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGtmRecoveryPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeGtmRecoveryPlanOutcomeCallable AlidnsClient::describeGtmRecoveryPlanCallable(const DescribeGtmRecoveryPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGtmRecoveryPlanOutcome()>>(
			[this, request]()
			{
			return this->describeGtmRecoveryPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeGtmRecoveryPlanAvailableConfigOutcome AlidnsClient::describeGtmRecoveryPlanAvailableConfig(const DescribeGtmRecoveryPlanAvailableConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGtmRecoveryPlanAvailableConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGtmRecoveryPlanAvailableConfigOutcome(DescribeGtmRecoveryPlanAvailableConfigResult(outcome.result()));
	else
		return DescribeGtmRecoveryPlanAvailableConfigOutcome(outcome.error());
}

void AlidnsClient::describeGtmRecoveryPlanAvailableConfigAsync(const DescribeGtmRecoveryPlanAvailableConfigRequest& request, const DescribeGtmRecoveryPlanAvailableConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGtmRecoveryPlanAvailableConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeGtmRecoveryPlanAvailableConfigOutcomeCallable AlidnsClient::describeGtmRecoveryPlanAvailableConfigCallable(const DescribeGtmRecoveryPlanAvailableConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGtmRecoveryPlanAvailableConfigOutcome()>>(
			[this, request]()
			{
			return this->describeGtmRecoveryPlanAvailableConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeGtmRecoveryPlansOutcome AlidnsClient::describeGtmRecoveryPlans(const DescribeGtmRecoveryPlansRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGtmRecoveryPlansOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGtmRecoveryPlansOutcome(DescribeGtmRecoveryPlansResult(outcome.result()));
	else
		return DescribeGtmRecoveryPlansOutcome(outcome.error());
}

void AlidnsClient::describeGtmRecoveryPlansAsync(const DescribeGtmRecoveryPlansRequest& request, const DescribeGtmRecoveryPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGtmRecoveryPlans(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeGtmRecoveryPlansOutcomeCallable AlidnsClient::describeGtmRecoveryPlansCallable(const DescribeGtmRecoveryPlansRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGtmRecoveryPlansOutcome()>>(
			[this, request]()
			{
			return this->describeGtmRecoveryPlans(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeRecordLogsOutcome AlidnsClient::describeRecordLogs(const DescribeRecordLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRecordLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRecordLogsOutcome(DescribeRecordLogsResult(outcome.result()));
	else
		return DescribeRecordLogsOutcome(outcome.error());
}

void AlidnsClient::describeRecordLogsAsync(const DescribeRecordLogsRequest& request, const DescribeRecordLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRecordLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeRecordLogsOutcomeCallable AlidnsClient::describeRecordLogsCallable(const DescribeRecordLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRecordLogsOutcome()>>(
			[this, request]()
			{
			return this->describeRecordLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeRecordStatisticsOutcome AlidnsClient::describeRecordStatistics(const DescribeRecordStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRecordStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRecordStatisticsOutcome(DescribeRecordStatisticsResult(outcome.result()));
	else
		return DescribeRecordStatisticsOutcome(outcome.error());
}

void AlidnsClient::describeRecordStatisticsAsync(const DescribeRecordStatisticsRequest& request, const DescribeRecordStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRecordStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeRecordStatisticsOutcomeCallable AlidnsClient::describeRecordStatisticsCallable(const DescribeRecordStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRecordStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeRecordStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeRecordStatisticsSummaryOutcome AlidnsClient::describeRecordStatisticsSummary(const DescribeRecordStatisticsSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRecordStatisticsSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRecordStatisticsSummaryOutcome(DescribeRecordStatisticsSummaryResult(outcome.result()));
	else
		return DescribeRecordStatisticsSummaryOutcome(outcome.error());
}

void AlidnsClient::describeRecordStatisticsSummaryAsync(const DescribeRecordStatisticsSummaryRequest& request, const DescribeRecordStatisticsSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRecordStatisticsSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeRecordStatisticsSummaryOutcomeCallable AlidnsClient::describeRecordStatisticsSummaryCallable(const DescribeRecordStatisticsSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRecordStatisticsSummaryOutcome()>>(
			[this, request]()
			{
			return this->describeRecordStatisticsSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeSubDomainRecordsOutcome AlidnsClient::describeSubDomainRecords(const DescribeSubDomainRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSubDomainRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSubDomainRecordsOutcome(DescribeSubDomainRecordsResult(outcome.result()));
	else
		return DescribeSubDomainRecordsOutcome(outcome.error());
}

void AlidnsClient::describeSubDomainRecordsAsync(const DescribeSubDomainRecordsRequest& request, const DescribeSubDomainRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSubDomainRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeSubDomainRecordsOutcomeCallable AlidnsClient::describeSubDomainRecordsCallable(const DescribeSubDomainRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSubDomainRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeSubDomainRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeSupportLinesOutcome AlidnsClient::describeSupportLines(const DescribeSupportLinesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSupportLinesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSupportLinesOutcome(DescribeSupportLinesResult(outcome.result()));
	else
		return DescribeSupportLinesOutcome(outcome.error());
}

void AlidnsClient::describeSupportLinesAsync(const DescribeSupportLinesRequest& request, const DescribeSupportLinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSupportLines(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeSupportLinesOutcomeCallable AlidnsClient::describeSupportLinesCallable(const DescribeSupportLinesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSupportLinesOutcome()>>(
			[this, request]()
			{
			return this->describeSupportLines(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::ExecuteGtmRecoveryPlanOutcome AlidnsClient::executeGtmRecoveryPlan(const ExecuteGtmRecoveryPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteGtmRecoveryPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteGtmRecoveryPlanOutcome(ExecuteGtmRecoveryPlanResult(outcome.result()));
	else
		return ExecuteGtmRecoveryPlanOutcome(outcome.error());
}

void AlidnsClient::executeGtmRecoveryPlanAsync(const ExecuteGtmRecoveryPlanRequest& request, const ExecuteGtmRecoveryPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeGtmRecoveryPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::ExecuteGtmRecoveryPlanOutcomeCallable AlidnsClient::executeGtmRecoveryPlanCallable(const ExecuteGtmRecoveryPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteGtmRecoveryPlanOutcome()>>(
			[this, request]()
			{
			return this->executeGtmRecoveryPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::GetMainDomainNameOutcome AlidnsClient::getMainDomainName(const GetMainDomainNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMainDomainNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMainDomainNameOutcome(GetMainDomainNameResult(outcome.result()));
	else
		return GetMainDomainNameOutcome(outcome.error());
}

void AlidnsClient::getMainDomainNameAsync(const GetMainDomainNameRequest& request, const GetMainDomainNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMainDomainName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::GetMainDomainNameOutcomeCallable AlidnsClient::getMainDomainNameCallable(const GetMainDomainNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMainDomainNameOutcome()>>(
			[this, request]()
			{
			return this->getMainDomainName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::ModifyHichinaDomainDNSOutcome AlidnsClient::modifyHichinaDomainDNS(const ModifyHichinaDomainDNSRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyHichinaDomainDNSOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyHichinaDomainDNSOutcome(ModifyHichinaDomainDNSResult(outcome.result()));
	else
		return ModifyHichinaDomainDNSOutcome(outcome.error());
}

void AlidnsClient::modifyHichinaDomainDNSAsync(const ModifyHichinaDomainDNSRequest& request, const ModifyHichinaDomainDNSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyHichinaDomainDNS(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::ModifyHichinaDomainDNSOutcomeCallable AlidnsClient::modifyHichinaDomainDNSCallable(const ModifyHichinaDomainDNSRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyHichinaDomainDNSOutcome()>>(
			[this, request]()
			{
			return this->modifyHichinaDomainDNS(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::OperateBatchDomainOutcome AlidnsClient::operateBatchDomain(const OperateBatchDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateBatchDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateBatchDomainOutcome(OperateBatchDomainResult(outcome.result()));
	else
		return OperateBatchDomainOutcome(outcome.error());
}

void AlidnsClient::operateBatchDomainAsync(const OperateBatchDomainRequest& request, const OperateBatchDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateBatchDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::OperateBatchDomainOutcomeCallable AlidnsClient::operateBatchDomainCallable(const OperateBatchDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateBatchDomainOutcome()>>(
			[this, request]()
			{
			return this->operateBatchDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::PreviewGtmRecoveryPlanOutcome AlidnsClient::previewGtmRecoveryPlan(const PreviewGtmRecoveryPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PreviewGtmRecoveryPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PreviewGtmRecoveryPlanOutcome(PreviewGtmRecoveryPlanResult(outcome.result()));
	else
		return PreviewGtmRecoveryPlanOutcome(outcome.error());
}

void AlidnsClient::previewGtmRecoveryPlanAsync(const PreviewGtmRecoveryPlanRequest& request, const PreviewGtmRecoveryPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, previewGtmRecoveryPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::PreviewGtmRecoveryPlanOutcomeCallable AlidnsClient::previewGtmRecoveryPlanCallable(const PreviewGtmRecoveryPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PreviewGtmRecoveryPlanOutcome()>>(
			[this, request]()
			{
			return this->previewGtmRecoveryPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::RollbackGtmRecoveryPlanOutcome AlidnsClient::rollbackGtmRecoveryPlan(const RollbackGtmRecoveryPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RollbackGtmRecoveryPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RollbackGtmRecoveryPlanOutcome(RollbackGtmRecoveryPlanResult(outcome.result()));
	else
		return RollbackGtmRecoveryPlanOutcome(outcome.error());
}

void AlidnsClient::rollbackGtmRecoveryPlanAsync(const RollbackGtmRecoveryPlanRequest& request, const RollbackGtmRecoveryPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rollbackGtmRecoveryPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::RollbackGtmRecoveryPlanOutcomeCallable AlidnsClient::rollbackGtmRecoveryPlanCallable(const RollbackGtmRecoveryPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RollbackGtmRecoveryPlanOutcome()>>(
			[this, request]()
			{
			return this->rollbackGtmRecoveryPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::SetDNSSLBStatusOutcome AlidnsClient::setDNSSLBStatus(const SetDNSSLBStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDNSSLBStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDNSSLBStatusOutcome(SetDNSSLBStatusResult(outcome.result()));
	else
		return SetDNSSLBStatusOutcome(outcome.error());
}

void AlidnsClient::setDNSSLBStatusAsync(const SetDNSSLBStatusRequest& request, const SetDNSSLBStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDNSSLBStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::SetDNSSLBStatusOutcomeCallable AlidnsClient::setDNSSLBStatusCallable(const SetDNSSLBStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDNSSLBStatusOutcome()>>(
			[this, request]()
			{
			return this->setDNSSLBStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::SetDomainRecordStatusOutcome AlidnsClient::setDomainRecordStatus(const SetDomainRecordStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDomainRecordStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDomainRecordStatusOutcome(SetDomainRecordStatusResult(outcome.result()));
	else
		return SetDomainRecordStatusOutcome(outcome.error());
}

void AlidnsClient::setDomainRecordStatusAsync(const SetDomainRecordStatusRequest& request, const SetDomainRecordStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDomainRecordStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::SetDomainRecordStatusOutcomeCallable AlidnsClient::setDomainRecordStatusCallable(const SetDomainRecordStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDomainRecordStatusOutcome()>>(
			[this, request]()
			{
			return this->setDomainRecordStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::SetGtmAccessModeOutcome AlidnsClient::setGtmAccessMode(const SetGtmAccessModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetGtmAccessModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetGtmAccessModeOutcome(SetGtmAccessModeResult(outcome.result()));
	else
		return SetGtmAccessModeOutcome(outcome.error());
}

void AlidnsClient::setGtmAccessModeAsync(const SetGtmAccessModeRequest& request, const SetGtmAccessModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setGtmAccessMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::SetGtmAccessModeOutcomeCallable AlidnsClient::setGtmAccessModeCallable(const SetGtmAccessModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetGtmAccessModeOutcome()>>(
			[this, request]()
			{
			return this->setGtmAccessMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::SetGtmMonitorStatusOutcome AlidnsClient::setGtmMonitorStatus(const SetGtmMonitorStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetGtmMonitorStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetGtmMonitorStatusOutcome(SetGtmMonitorStatusResult(outcome.result()));
	else
		return SetGtmMonitorStatusOutcome(outcome.error());
}

void AlidnsClient::setGtmMonitorStatusAsync(const SetGtmMonitorStatusRequest& request, const SetGtmMonitorStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setGtmMonitorStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::SetGtmMonitorStatusOutcomeCallable AlidnsClient::setGtmMonitorStatusCallable(const SetGtmMonitorStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetGtmMonitorStatusOutcome()>>(
			[this, request]()
			{
			return this->setGtmMonitorStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::UpdateDNSSLBWeightOutcome AlidnsClient::updateDNSSLBWeight(const UpdateDNSSLBWeightRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDNSSLBWeightOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDNSSLBWeightOutcome(UpdateDNSSLBWeightResult(outcome.result()));
	else
		return UpdateDNSSLBWeightOutcome(outcome.error());
}

void AlidnsClient::updateDNSSLBWeightAsync(const UpdateDNSSLBWeightRequest& request, const UpdateDNSSLBWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDNSSLBWeight(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::UpdateDNSSLBWeightOutcomeCallable AlidnsClient::updateDNSSLBWeightCallable(const UpdateDNSSLBWeightRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDNSSLBWeightOutcome()>>(
			[this, request]()
			{
			return this->updateDNSSLBWeight(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::UpdateDomainGroupOutcome AlidnsClient::updateDomainGroup(const UpdateDomainGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDomainGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDomainGroupOutcome(UpdateDomainGroupResult(outcome.result()));
	else
		return UpdateDomainGroupOutcome(outcome.error());
}

void AlidnsClient::updateDomainGroupAsync(const UpdateDomainGroupRequest& request, const UpdateDomainGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDomainGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::UpdateDomainGroupOutcomeCallable AlidnsClient::updateDomainGroupCallable(const UpdateDomainGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDomainGroupOutcome()>>(
			[this, request]()
			{
			return this->updateDomainGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::UpdateDomainRecordOutcome AlidnsClient::updateDomainRecord(const UpdateDomainRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDomainRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDomainRecordOutcome(UpdateDomainRecordResult(outcome.result()));
	else
		return UpdateDomainRecordOutcome(outcome.error());
}

void AlidnsClient::updateDomainRecordAsync(const UpdateDomainRecordRequest& request, const UpdateDomainRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDomainRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::UpdateDomainRecordOutcomeCallable AlidnsClient::updateDomainRecordCallable(const UpdateDomainRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDomainRecordOutcome()>>(
			[this, request]()
			{
			return this->updateDomainRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::UpdateDomainRecordRemarkOutcome AlidnsClient::updateDomainRecordRemark(const UpdateDomainRecordRemarkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDomainRecordRemarkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDomainRecordRemarkOutcome(UpdateDomainRecordRemarkResult(outcome.result()));
	else
		return UpdateDomainRecordRemarkOutcome(outcome.error());
}

void AlidnsClient::updateDomainRecordRemarkAsync(const UpdateDomainRecordRemarkRequest& request, const UpdateDomainRecordRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDomainRecordRemark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::UpdateDomainRecordRemarkOutcomeCallable AlidnsClient::updateDomainRecordRemarkCallable(const UpdateDomainRecordRemarkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDomainRecordRemarkOutcome()>>(
			[this, request]()
			{
			return this->updateDomainRecordRemark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::UpdateDomainRemarkOutcome AlidnsClient::updateDomainRemark(const UpdateDomainRemarkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDomainRemarkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDomainRemarkOutcome(UpdateDomainRemarkResult(outcome.result()));
	else
		return UpdateDomainRemarkOutcome(outcome.error());
}

void AlidnsClient::updateDomainRemarkAsync(const UpdateDomainRemarkRequest& request, const UpdateDomainRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDomainRemark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::UpdateDomainRemarkOutcomeCallable AlidnsClient::updateDomainRemarkCallable(const UpdateDomainRemarkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDomainRemarkOutcome()>>(
			[this, request]()
			{
			return this->updateDomainRemark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::UpdateGtmAccessStrategyOutcome AlidnsClient::updateGtmAccessStrategy(const UpdateGtmAccessStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGtmAccessStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGtmAccessStrategyOutcome(UpdateGtmAccessStrategyResult(outcome.result()));
	else
		return UpdateGtmAccessStrategyOutcome(outcome.error());
}

void AlidnsClient::updateGtmAccessStrategyAsync(const UpdateGtmAccessStrategyRequest& request, const UpdateGtmAccessStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGtmAccessStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::UpdateGtmAccessStrategyOutcomeCallable AlidnsClient::updateGtmAccessStrategyCallable(const UpdateGtmAccessStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGtmAccessStrategyOutcome()>>(
			[this, request]()
			{
			return this->updateGtmAccessStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::UpdateGtmAddressPoolOutcome AlidnsClient::updateGtmAddressPool(const UpdateGtmAddressPoolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGtmAddressPoolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGtmAddressPoolOutcome(UpdateGtmAddressPoolResult(outcome.result()));
	else
		return UpdateGtmAddressPoolOutcome(outcome.error());
}

void AlidnsClient::updateGtmAddressPoolAsync(const UpdateGtmAddressPoolRequest& request, const UpdateGtmAddressPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGtmAddressPool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::UpdateGtmAddressPoolOutcomeCallable AlidnsClient::updateGtmAddressPoolCallable(const UpdateGtmAddressPoolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGtmAddressPoolOutcome()>>(
			[this, request]()
			{
			return this->updateGtmAddressPool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::UpdateGtmInstanceGlobalConfigOutcome AlidnsClient::updateGtmInstanceGlobalConfig(const UpdateGtmInstanceGlobalConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGtmInstanceGlobalConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGtmInstanceGlobalConfigOutcome(UpdateGtmInstanceGlobalConfigResult(outcome.result()));
	else
		return UpdateGtmInstanceGlobalConfigOutcome(outcome.error());
}

void AlidnsClient::updateGtmInstanceGlobalConfigAsync(const UpdateGtmInstanceGlobalConfigRequest& request, const UpdateGtmInstanceGlobalConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGtmInstanceGlobalConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::UpdateGtmInstanceGlobalConfigOutcomeCallable AlidnsClient::updateGtmInstanceGlobalConfigCallable(const UpdateGtmInstanceGlobalConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGtmInstanceGlobalConfigOutcome()>>(
			[this, request]()
			{
			return this->updateGtmInstanceGlobalConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::UpdateGtmMonitorOutcome AlidnsClient::updateGtmMonitor(const UpdateGtmMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGtmMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGtmMonitorOutcome(UpdateGtmMonitorResult(outcome.result()));
	else
		return UpdateGtmMonitorOutcome(outcome.error());
}

void AlidnsClient::updateGtmMonitorAsync(const UpdateGtmMonitorRequest& request, const UpdateGtmMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGtmMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::UpdateGtmMonitorOutcomeCallable AlidnsClient::updateGtmMonitorCallable(const UpdateGtmMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGtmMonitorOutcome()>>(
			[this, request]()
			{
			return this->updateGtmMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::UpdateGtmRecoveryPlanOutcome AlidnsClient::updateGtmRecoveryPlan(const UpdateGtmRecoveryPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGtmRecoveryPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGtmRecoveryPlanOutcome(UpdateGtmRecoveryPlanResult(outcome.result()));
	else
		return UpdateGtmRecoveryPlanOutcome(outcome.error());
}

void AlidnsClient::updateGtmRecoveryPlanAsync(const UpdateGtmRecoveryPlanRequest& request, const UpdateGtmRecoveryPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGtmRecoveryPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::UpdateGtmRecoveryPlanOutcomeCallable AlidnsClient::updateGtmRecoveryPlanCallable(const UpdateGtmRecoveryPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGtmRecoveryPlanOutcome()>>(
			[this, request]()
			{
			return this->updateGtmRecoveryPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

