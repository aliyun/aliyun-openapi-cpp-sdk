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

AlidnsClient::AddCustomLineOutcome AlidnsClient::addCustomLine(const AddCustomLineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddCustomLineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddCustomLineOutcome(AddCustomLineResult(outcome.result()));
	else
		return AddCustomLineOutcome(outcome.error());
}

void AlidnsClient::addCustomLineAsync(const AddCustomLineRequest& request, const AddCustomLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addCustomLine(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::AddCustomLineOutcomeCallable AlidnsClient::addCustomLineCallable(const AddCustomLineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddCustomLineOutcome()>>(
			[this, request]()
			{
			return this->addCustomLine(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::AddDnsCacheDomainOutcome AlidnsClient::addDnsCacheDomain(const AddDnsCacheDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddDnsCacheDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddDnsCacheDomainOutcome(AddDnsCacheDomainResult(outcome.result()));
	else
		return AddDnsCacheDomainOutcome(outcome.error());
}

void AlidnsClient::addDnsCacheDomainAsync(const AddDnsCacheDomainRequest& request, const AddDnsCacheDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDnsCacheDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::AddDnsCacheDomainOutcomeCallable AlidnsClient::addDnsCacheDomainCallable(const AddDnsCacheDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDnsCacheDomainOutcome()>>(
			[this, request]()
			{
			return this->addDnsCacheDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::AddDnsGtmAccessStrategyOutcome AlidnsClient::addDnsGtmAccessStrategy(const AddDnsGtmAccessStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddDnsGtmAccessStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddDnsGtmAccessStrategyOutcome(AddDnsGtmAccessStrategyResult(outcome.result()));
	else
		return AddDnsGtmAccessStrategyOutcome(outcome.error());
}

void AlidnsClient::addDnsGtmAccessStrategyAsync(const AddDnsGtmAccessStrategyRequest& request, const AddDnsGtmAccessStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDnsGtmAccessStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::AddDnsGtmAccessStrategyOutcomeCallable AlidnsClient::addDnsGtmAccessStrategyCallable(const AddDnsGtmAccessStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDnsGtmAccessStrategyOutcome()>>(
			[this, request]()
			{
			return this->addDnsGtmAccessStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::AddDnsGtmAddressPoolOutcome AlidnsClient::addDnsGtmAddressPool(const AddDnsGtmAddressPoolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddDnsGtmAddressPoolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddDnsGtmAddressPoolOutcome(AddDnsGtmAddressPoolResult(outcome.result()));
	else
		return AddDnsGtmAddressPoolOutcome(outcome.error());
}

void AlidnsClient::addDnsGtmAddressPoolAsync(const AddDnsGtmAddressPoolRequest& request, const AddDnsGtmAddressPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDnsGtmAddressPool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::AddDnsGtmAddressPoolOutcomeCallable AlidnsClient::addDnsGtmAddressPoolCallable(const AddDnsGtmAddressPoolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDnsGtmAddressPoolOutcome()>>(
			[this, request]()
			{
			return this->addDnsGtmAddressPool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::AddDnsGtmMonitorOutcome AlidnsClient::addDnsGtmMonitor(const AddDnsGtmMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddDnsGtmMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddDnsGtmMonitorOutcome(AddDnsGtmMonitorResult(outcome.result()));
	else
		return AddDnsGtmMonitorOutcome(outcome.error());
}

void AlidnsClient::addDnsGtmMonitorAsync(const AddDnsGtmMonitorRequest& request, const AddDnsGtmMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDnsGtmMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::AddDnsGtmMonitorOutcomeCallable AlidnsClient::addDnsGtmMonitorCallable(const AddDnsGtmMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDnsGtmMonitorOutcome()>>(
			[this, request]()
			{
			return this->addDnsGtmMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

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

AlidnsClient::BindInstanceDomainsOutcome AlidnsClient::bindInstanceDomains(const BindInstanceDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindInstanceDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindInstanceDomainsOutcome(BindInstanceDomainsResult(outcome.result()));
	else
		return BindInstanceDomainsOutcome(outcome.error());
}

void AlidnsClient::bindInstanceDomainsAsync(const BindInstanceDomainsRequest& request, const BindInstanceDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindInstanceDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::BindInstanceDomainsOutcomeCallable AlidnsClient::bindInstanceDomainsCallable(const BindInstanceDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindInstanceDomainsOutcome()>>(
			[this, request]()
			{
			return this->bindInstanceDomains(request);
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

AlidnsClient::CopyGtmConfigOutcome AlidnsClient::copyGtmConfig(const CopyGtmConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CopyGtmConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CopyGtmConfigOutcome(CopyGtmConfigResult(outcome.result()));
	else
		return CopyGtmConfigOutcome(outcome.error());
}

void AlidnsClient::copyGtmConfigAsync(const CopyGtmConfigRequest& request, const CopyGtmConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, copyGtmConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::CopyGtmConfigOutcomeCallable AlidnsClient::copyGtmConfigCallable(const CopyGtmConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CopyGtmConfigOutcome()>>(
			[this, request]()
			{
			return this->copyGtmConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::CreatePdnsAppKeyOutcome AlidnsClient::createPdnsAppKey(const CreatePdnsAppKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePdnsAppKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePdnsAppKeyOutcome(CreatePdnsAppKeyResult(outcome.result()));
	else
		return CreatePdnsAppKeyOutcome(outcome.error());
}

void AlidnsClient::createPdnsAppKeyAsync(const CreatePdnsAppKeyRequest& request, const CreatePdnsAppKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPdnsAppKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::CreatePdnsAppKeyOutcomeCallable AlidnsClient::createPdnsAppKeyCallable(const CreatePdnsAppKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePdnsAppKeyOutcome()>>(
			[this, request]()
			{
			return this->createPdnsAppKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::CreatePdnsUdpIpSegmentOutcome AlidnsClient::createPdnsUdpIpSegment(const CreatePdnsUdpIpSegmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePdnsUdpIpSegmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePdnsUdpIpSegmentOutcome(CreatePdnsUdpIpSegmentResult(outcome.result()));
	else
		return CreatePdnsUdpIpSegmentOutcome(outcome.error());
}

void AlidnsClient::createPdnsUdpIpSegmentAsync(const CreatePdnsUdpIpSegmentRequest& request, const CreatePdnsUdpIpSegmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPdnsUdpIpSegment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::CreatePdnsUdpIpSegmentOutcomeCallable AlidnsClient::createPdnsUdpIpSegmentCallable(const CreatePdnsUdpIpSegmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePdnsUdpIpSegmentOutcome()>>(
			[this, request]()
			{
			return this->createPdnsUdpIpSegment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DeleteCustomLinesOutcome AlidnsClient::deleteCustomLines(const DeleteCustomLinesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCustomLinesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCustomLinesOutcome(DeleteCustomLinesResult(outcome.result()));
	else
		return DeleteCustomLinesOutcome(outcome.error());
}

void AlidnsClient::deleteCustomLinesAsync(const DeleteCustomLinesRequest& request, const DeleteCustomLinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCustomLines(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DeleteCustomLinesOutcomeCallable AlidnsClient::deleteCustomLinesCallable(const DeleteCustomLinesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCustomLinesOutcome()>>(
			[this, request]()
			{
			return this->deleteCustomLines(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DeleteDnsCacheDomainOutcome AlidnsClient::deleteDnsCacheDomain(const DeleteDnsCacheDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDnsCacheDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDnsCacheDomainOutcome(DeleteDnsCacheDomainResult(outcome.result()));
	else
		return DeleteDnsCacheDomainOutcome(outcome.error());
}

void AlidnsClient::deleteDnsCacheDomainAsync(const DeleteDnsCacheDomainRequest& request, const DeleteDnsCacheDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDnsCacheDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DeleteDnsCacheDomainOutcomeCallable AlidnsClient::deleteDnsCacheDomainCallable(const DeleteDnsCacheDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDnsCacheDomainOutcome()>>(
			[this, request]()
			{
			return this->deleteDnsCacheDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DeleteDnsGtmAccessStrategyOutcome AlidnsClient::deleteDnsGtmAccessStrategy(const DeleteDnsGtmAccessStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDnsGtmAccessStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDnsGtmAccessStrategyOutcome(DeleteDnsGtmAccessStrategyResult(outcome.result()));
	else
		return DeleteDnsGtmAccessStrategyOutcome(outcome.error());
}

void AlidnsClient::deleteDnsGtmAccessStrategyAsync(const DeleteDnsGtmAccessStrategyRequest& request, const DeleteDnsGtmAccessStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDnsGtmAccessStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DeleteDnsGtmAccessStrategyOutcomeCallable AlidnsClient::deleteDnsGtmAccessStrategyCallable(const DeleteDnsGtmAccessStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDnsGtmAccessStrategyOutcome()>>(
			[this, request]()
			{
			return this->deleteDnsGtmAccessStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DeleteDnsGtmAddressPoolOutcome AlidnsClient::deleteDnsGtmAddressPool(const DeleteDnsGtmAddressPoolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDnsGtmAddressPoolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDnsGtmAddressPoolOutcome(DeleteDnsGtmAddressPoolResult(outcome.result()));
	else
		return DeleteDnsGtmAddressPoolOutcome(outcome.error());
}

void AlidnsClient::deleteDnsGtmAddressPoolAsync(const DeleteDnsGtmAddressPoolRequest& request, const DeleteDnsGtmAddressPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDnsGtmAddressPool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DeleteDnsGtmAddressPoolOutcomeCallable AlidnsClient::deleteDnsGtmAddressPoolCallable(const DeleteDnsGtmAddressPoolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDnsGtmAddressPoolOutcome()>>(
			[this, request]()
			{
			return this->deleteDnsGtmAddressPool(request);
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

AlidnsClient::DescribeCustomLineOutcome AlidnsClient::describeCustomLine(const DescribeCustomLineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCustomLineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCustomLineOutcome(DescribeCustomLineResult(outcome.result()));
	else
		return DescribeCustomLineOutcome(outcome.error());
}

void AlidnsClient::describeCustomLineAsync(const DescribeCustomLineRequest& request, const DescribeCustomLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustomLine(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeCustomLineOutcomeCallable AlidnsClient::describeCustomLineCallable(const DescribeCustomLineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustomLineOutcome()>>(
			[this, request]()
			{
			return this->describeCustomLine(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeCustomLinesOutcome AlidnsClient::describeCustomLines(const DescribeCustomLinesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCustomLinesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCustomLinesOutcome(DescribeCustomLinesResult(outcome.result()));
	else
		return DescribeCustomLinesOutcome(outcome.error());
}

void AlidnsClient::describeCustomLinesAsync(const DescribeCustomLinesRequest& request, const DescribeCustomLinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustomLines(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeCustomLinesOutcomeCallable AlidnsClient::describeCustomLinesCallable(const DescribeCustomLinesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustomLinesOutcome()>>(
			[this, request]()
			{
			return this->describeCustomLines(request);
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

AlidnsClient::DescribeDnsCacheDomainsOutcome AlidnsClient::describeDnsCacheDomains(const DescribeDnsCacheDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDnsCacheDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDnsCacheDomainsOutcome(DescribeDnsCacheDomainsResult(outcome.result()));
	else
		return DescribeDnsCacheDomainsOutcome(outcome.error());
}

void AlidnsClient::describeDnsCacheDomainsAsync(const DescribeDnsCacheDomainsRequest& request, const DescribeDnsCacheDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDnsCacheDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDnsCacheDomainsOutcomeCallable AlidnsClient::describeDnsCacheDomainsCallable(const DescribeDnsCacheDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDnsCacheDomainsOutcome()>>(
			[this, request]()
			{
			return this->describeDnsCacheDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDnsGtmAccessStrategiesOutcome AlidnsClient::describeDnsGtmAccessStrategies(const DescribeDnsGtmAccessStrategiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDnsGtmAccessStrategiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDnsGtmAccessStrategiesOutcome(DescribeDnsGtmAccessStrategiesResult(outcome.result()));
	else
		return DescribeDnsGtmAccessStrategiesOutcome(outcome.error());
}

void AlidnsClient::describeDnsGtmAccessStrategiesAsync(const DescribeDnsGtmAccessStrategiesRequest& request, const DescribeDnsGtmAccessStrategiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDnsGtmAccessStrategies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDnsGtmAccessStrategiesOutcomeCallable AlidnsClient::describeDnsGtmAccessStrategiesCallable(const DescribeDnsGtmAccessStrategiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDnsGtmAccessStrategiesOutcome()>>(
			[this, request]()
			{
			return this->describeDnsGtmAccessStrategies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDnsGtmAccessStrategyOutcome AlidnsClient::describeDnsGtmAccessStrategy(const DescribeDnsGtmAccessStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDnsGtmAccessStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDnsGtmAccessStrategyOutcome(DescribeDnsGtmAccessStrategyResult(outcome.result()));
	else
		return DescribeDnsGtmAccessStrategyOutcome(outcome.error());
}

void AlidnsClient::describeDnsGtmAccessStrategyAsync(const DescribeDnsGtmAccessStrategyRequest& request, const DescribeDnsGtmAccessStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDnsGtmAccessStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDnsGtmAccessStrategyOutcomeCallable AlidnsClient::describeDnsGtmAccessStrategyCallable(const DescribeDnsGtmAccessStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDnsGtmAccessStrategyOutcome()>>(
			[this, request]()
			{
			return this->describeDnsGtmAccessStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDnsGtmAccessStrategyAvailableConfigOutcome AlidnsClient::describeDnsGtmAccessStrategyAvailableConfig(const DescribeDnsGtmAccessStrategyAvailableConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDnsGtmAccessStrategyAvailableConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDnsGtmAccessStrategyAvailableConfigOutcome(DescribeDnsGtmAccessStrategyAvailableConfigResult(outcome.result()));
	else
		return DescribeDnsGtmAccessStrategyAvailableConfigOutcome(outcome.error());
}

void AlidnsClient::describeDnsGtmAccessStrategyAvailableConfigAsync(const DescribeDnsGtmAccessStrategyAvailableConfigRequest& request, const DescribeDnsGtmAccessStrategyAvailableConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDnsGtmAccessStrategyAvailableConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDnsGtmAccessStrategyAvailableConfigOutcomeCallable AlidnsClient::describeDnsGtmAccessStrategyAvailableConfigCallable(const DescribeDnsGtmAccessStrategyAvailableConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDnsGtmAccessStrategyAvailableConfigOutcome()>>(
			[this, request]()
			{
			return this->describeDnsGtmAccessStrategyAvailableConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDnsGtmAddrAttributeInfoOutcome AlidnsClient::describeDnsGtmAddrAttributeInfo(const DescribeDnsGtmAddrAttributeInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDnsGtmAddrAttributeInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDnsGtmAddrAttributeInfoOutcome(DescribeDnsGtmAddrAttributeInfoResult(outcome.result()));
	else
		return DescribeDnsGtmAddrAttributeInfoOutcome(outcome.error());
}

void AlidnsClient::describeDnsGtmAddrAttributeInfoAsync(const DescribeDnsGtmAddrAttributeInfoRequest& request, const DescribeDnsGtmAddrAttributeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDnsGtmAddrAttributeInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDnsGtmAddrAttributeInfoOutcomeCallable AlidnsClient::describeDnsGtmAddrAttributeInfoCallable(const DescribeDnsGtmAddrAttributeInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDnsGtmAddrAttributeInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDnsGtmAddrAttributeInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDnsGtmAddressPoolAvailableConfigOutcome AlidnsClient::describeDnsGtmAddressPoolAvailableConfig(const DescribeDnsGtmAddressPoolAvailableConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDnsGtmAddressPoolAvailableConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDnsGtmAddressPoolAvailableConfigOutcome(DescribeDnsGtmAddressPoolAvailableConfigResult(outcome.result()));
	else
		return DescribeDnsGtmAddressPoolAvailableConfigOutcome(outcome.error());
}

void AlidnsClient::describeDnsGtmAddressPoolAvailableConfigAsync(const DescribeDnsGtmAddressPoolAvailableConfigRequest& request, const DescribeDnsGtmAddressPoolAvailableConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDnsGtmAddressPoolAvailableConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDnsGtmAddressPoolAvailableConfigOutcomeCallable AlidnsClient::describeDnsGtmAddressPoolAvailableConfigCallable(const DescribeDnsGtmAddressPoolAvailableConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDnsGtmAddressPoolAvailableConfigOutcome()>>(
			[this, request]()
			{
			return this->describeDnsGtmAddressPoolAvailableConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDnsGtmAvailableAlertGroupOutcome AlidnsClient::describeDnsGtmAvailableAlertGroup(const DescribeDnsGtmAvailableAlertGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDnsGtmAvailableAlertGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDnsGtmAvailableAlertGroupOutcome(DescribeDnsGtmAvailableAlertGroupResult(outcome.result()));
	else
		return DescribeDnsGtmAvailableAlertGroupOutcome(outcome.error());
}

void AlidnsClient::describeDnsGtmAvailableAlertGroupAsync(const DescribeDnsGtmAvailableAlertGroupRequest& request, const DescribeDnsGtmAvailableAlertGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDnsGtmAvailableAlertGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDnsGtmAvailableAlertGroupOutcomeCallable AlidnsClient::describeDnsGtmAvailableAlertGroupCallable(const DescribeDnsGtmAvailableAlertGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDnsGtmAvailableAlertGroupOutcome()>>(
			[this, request]()
			{
			return this->describeDnsGtmAvailableAlertGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDnsGtmInstanceOutcome AlidnsClient::describeDnsGtmInstance(const DescribeDnsGtmInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDnsGtmInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDnsGtmInstanceOutcome(DescribeDnsGtmInstanceResult(outcome.result()));
	else
		return DescribeDnsGtmInstanceOutcome(outcome.error());
}

void AlidnsClient::describeDnsGtmInstanceAsync(const DescribeDnsGtmInstanceRequest& request, const DescribeDnsGtmInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDnsGtmInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDnsGtmInstanceOutcomeCallable AlidnsClient::describeDnsGtmInstanceCallable(const DescribeDnsGtmInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDnsGtmInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeDnsGtmInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDnsGtmInstanceAddressPoolOutcome AlidnsClient::describeDnsGtmInstanceAddressPool(const DescribeDnsGtmInstanceAddressPoolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDnsGtmInstanceAddressPoolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDnsGtmInstanceAddressPoolOutcome(DescribeDnsGtmInstanceAddressPoolResult(outcome.result()));
	else
		return DescribeDnsGtmInstanceAddressPoolOutcome(outcome.error());
}

void AlidnsClient::describeDnsGtmInstanceAddressPoolAsync(const DescribeDnsGtmInstanceAddressPoolRequest& request, const DescribeDnsGtmInstanceAddressPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDnsGtmInstanceAddressPool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDnsGtmInstanceAddressPoolOutcomeCallable AlidnsClient::describeDnsGtmInstanceAddressPoolCallable(const DescribeDnsGtmInstanceAddressPoolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDnsGtmInstanceAddressPoolOutcome()>>(
			[this, request]()
			{
			return this->describeDnsGtmInstanceAddressPool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDnsGtmInstanceAddressPoolsOutcome AlidnsClient::describeDnsGtmInstanceAddressPools(const DescribeDnsGtmInstanceAddressPoolsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDnsGtmInstanceAddressPoolsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDnsGtmInstanceAddressPoolsOutcome(DescribeDnsGtmInstanceAddressPoolsResult(outcome.result()));
	else
		return DescribeDnsGtmInstanceAddressPoolsOutcome(outcome.error());
}

void AlidnsClient::describeDnsGtmInstanceAddressPoolsAsync(const DescribeDnsGtmInstanceAddressPoolsRequest& request, const DescribeDnsGtmInstanceAddressPoolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDnsGtmInstanceAddressPools(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDnsGtmInstanceAddressPoolsOutcomeCallable AlidnsClient::describeDnsGtmInstanceAddressPoolsCallable(const DescribeDnsGtmInstanceAddressPoolsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDnsGtmInstanceAddressPoolsOutcome()>>(
			[this, request]()
			{
			return this->describeDnsGtmInstanceAddressPools(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDnsGtmInstanceStatusOutcome AlidnsClient::describeDnsGtmInstanceStatus(const DescribeDnsGtmInstanceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDnsGtmInstanceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDnsGtmInstanceStatusOutcome(DescribeDnsGtmInstanceStatusResult(outcome.result()));
	else
		return DescribeDnsGtmInstanceStatusOutcome(outcome.error());
}

void AlidnsClient::describeDnsGtmInstanceStatusAsync(const DescribeDnsGtmInstanceStatusRequest& request, const DescribeDnsGtmInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDnsGtmInstanceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDnsGtmInstanceStatusOutcomeCallable AlidnsClient::describeDnsGtmInstanceStatusCallable(const DescribeDnsGtmInstanceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDnsGtmInstanceStatusOutcome()>>(
			[this, request]()
			{
			return this->describeDnsGtmInstanceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDnsGtmInstanceSystemCnameOutcome AlidnsClient::describeDnsGtmInstanceSystemCname(const DescribeDnsGtmInstanceSystemCnameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDnsGtmInstanceSystemCnameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDnsGtmInstanceSystemCnameOutcome(DescribeDnsGtmInstanceSystemCnameResult(outcome.result()));
	else
		return DescribeDnsGtmInstanceSystemCnameOutcome(outcome.error());
}

void AlidnsClient::describeDnsGtmInstanceSystemCnameAsync(const DescribeDnsGtmInstanceSystemCnameRequest& request, const DescribeDnsGtmInstanceSystemCnameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDnsGtmInstanceSystemCname(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDnsGtmInstanceSystemCnameOutcomeCallable AlidnsClient::describeDnsGtmInstanceSystemCnameCallable(const DescribeDnsGtmInstanceSystemCnameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDnsGtmInstanceSystemCnameOutcome()>>(
			[this, request]()
			{
			return this->describeDnsGtmInstanceSystemCname(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDnsGtmInstancesOutcome AlidnsClient::describeDnsGtmInstances(const DescribeDnsGtmInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDnsGtmInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDnsGtmInstancesOutcome(DescribeDnsGtmInstancesResult(outcome.result()));
	else
		return DescribeDnsGtmInstancesOutcome(outcome.error());
}

void AlidnsClient::describeDnsGtmInstancesAsync(const DescribeDnsGtmInstancesRequest& request, const DescribeDnsGtmInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDnsGtmInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDnsGtmInstancesOutcomeCallable AlidnsClient::describeDnsGtmInstancesCallable(const DescribeDnsGtmInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDnsGtmInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeDnsGtmInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDnsGtmLogsOutcome AlidnsClient::describeDnsGtmLogs(const DescribeDnsGtmLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDnsGtmLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDnsGtmLogsOutcome(DescribeDnsGtmLogsResult(outcome.result()));
	else
		return DescribeDnsGtmLogsOutcome(outcome.error());
}

void AlidnsClient::describeDnsGtmLogsAsync(const DescribeDnsGtmLogsRequest& request, const DescribeDnsGtmLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDnsGtmLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDnsGtmLogsOutcomeCallable AlidnsClient::describeDnsGtmLogsCallable(const DescribeDnsGtmLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDnsGtmLogsOutcome()>>(
			[this, request]()
			{
			return this->describeDnsGtmLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDnsGtmMonitorAvailableConfigOutcome AlidnsClient::describeDnsGtmMonitorAvailableConfig(const DescribeDnsGtmMonitorAvailableConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDnsGtmMonitorAvailableConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDnsGtmMonitorAvailableConfigOutcome(DescribeDnsGtmMonitorAvailableConfigResult(outcome.result()));
	else
		return DescribeDnsGtmMonitorAvailableConfigOutcome(outcome.error());
}

void AlidnsClient::describeDnsGtmMonitorAvailableConfigAsync(const DescribeDnsGtmMonitorAvailableConfigRequest& request, const DescribeDnsGtmMonitorAvailableConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDnsGtmMonitorAvailableConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDnsGtmMonitorAvailableConfigOutcomeCallable AlidnsClient::describeDnsGtmMonitorAvailableConfigCallable(const DescribeDnsGtmMonitorAvailableConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDnsGtmMonitorAvailableConfigOutcome()>>(
			[this, request]()
			{
			return this->describeDnsGtmMonitorAvailableConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDnsGtmMonitorConfigOutcome AlidnsClient::describeDnsGtmMonitorConfig(const DescribeDnsGtmMonitorConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDnsGtmMonitorConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDnsGtmMonitorConfigOutcome(DescribeDnsGtmMonitorConfigResult(outcome.result()));
	else
		return DescribeDnsGtmMonitorConfigOutcome(outcome.error());
}

void AlidnsClient::describeDnsGtmMonitorConfigAsync(const DescribeDnsGtmMonitorConfigRequest& request, const DescribeDnsGtmMonitorConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDnsGtmMonitorConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDnsGtmMonitorConfigOutcomeCallable AlidnsClient::describeDnsGtmMonitorConfigCallable(const DescribeDnsGtmMonitorConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDnsGtmMonitorConfigOutcome()>>(
			[this, request]()
			{
			return this->describeDnsGtmMonitorConfig(request);
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

AlidnsClient::DescribeDohAccountStatisticsOutcome AlidnsClient::describeDohAccountStatistics(const DescribeDohAccountStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDohAccountStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDohAccountStatisticsOutcome(DescribeDohAccountStatisticsResult(outcome.result()));
	else
		return DescribeDohAccountStatisticsOutcome(outcome.error());
}

void AlidnsClient::describeDohAccountStatisticsAsync(const DescribeDohAccountStatisticsRequest& request, const DescribeDohAccountStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDohAccountStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDohAccountStatisticsOutcomeCallable AlidnsClient::describeDohAccountStatisticsCallable(const DescribeDohAccountStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDohAccountStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeDohAccountStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDohDomainStatisticsOutcome AlidnsClient::describeDohDomainStatistics(const DescribeDohDomainStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDohDomainStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDohDomainStatisticsOutcome(DescribeDohDomainStatisticsResult(outcome.result()));
	else
		return DescribeDohDomainStatisticsOutcome(outcome.error());
}

void AlidnsClient::describeDohDomainStatisticsAsync(const DescribeDohDomainStatisticsRequest& request, const DescribeDohDomainStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDohDomainStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDohDomainStatisticsOutcomeCallable AlidnsClient::describeDohDomainStatisticsCallable(const DescribeDohDomainStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDohDomainStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeDohDomainStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDohDomainStatisticsSummaryOutcome AlidnsClient::describeDohDomainStatisticsSummary(const DescribeDohDomainStatisticsSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDohDomainStatisticsSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDohDomainStatisticsSummaryOutcome(DescribeDohDomainStatisticsSummaryResult(outcome.result()));
	else
		return DescribeDohDomainStatisticsSummaryOutcome(outcome.error());
}

void AlidnsClient::describeDohDomainStatisticsSummaryAsync(const DescribeDohDomainStatisticsSummaryRequest& request, const DescribeDohDomainStatisticsSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDohDomainStatisticsSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDohDomainStatisticsSummaryOutcomeCallable AlidnsClient::describeDohDomainStatisticsSummaryCallable(const DescribeDohDomainStatisticsSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDohDomainStatisticsSummaryOutcome()>>(
			[this, request]()
			{
			return this->describeDohDomainStatisticsSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDohSubDomainStatisticsOutcome AlidnsClient::describeDohSubDomainStatistics(const DescribeDohSubDomainStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDohSubDomainStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDohSubDomainStatisticsOutcome(DescribeDohSubDomainStatisticsResult(outcome.result()));
	else
		return DescribeDohSubDomainStatisticsOutcome(outcome.error());
}

void AlidnsClient::describeDohSubDomainStatisticsAsync(const DescribeDohSubDomainStatisticsRequest& request, const DescribeDohSubDomainStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDohSubDomainStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDohSubDomainStatisticsOutcomeCallable AlidnsClient::describeDohSubDomainStatisticsCallable(const DescribeDohSubDomainStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDohSubDomainStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeDohSubDomainStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDohSubDomainStatisticsSummaryOutcome AlidnsClient::describeDohSubDomainStatisticsSummary(const DescribeDohSubDomainStatisticsSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDohSubDomainStatisticsSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDohSubDomainStatisticsSummaryOutcome(DescribeDohSubDomainStatisticsSummaryResult(outcome.result()));
	else
		return DescribeDohSubDomainStatisticsSummaryOutcome(outcome.error());
}

void AlidnsClient::describeDohSubDomainStatisticsSummaryAsync(const DescribeDohSubDomainStatisticsSummaryRequest& request, const DescribeDohSubDomainStatisticsSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDohSubDomainStatisticsSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDohSubDomainStatisticsSummaryOutcomeCallable AlidnsClient::describeDohSubDomainStatisticsSummaryCallable(const DescribeDohSubDomainStatisticsSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDohSubDomainStatisticsSummaryOutcome()>>(
			[this, request]()
			{
			return this->describeDohSubDomainStatisticsSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDohUserInfoOutcome AlidnsClient::describeDohUserInfo(const DescribeDohUserInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDohUserInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDohUserInfoOutcome(DescribeDohUserInfoResult(outcome.result()));
	else
		return DescribeDohUserInfoOutcome(outcome.error());
}

void AlidnsClient::describeDohUserInfoAsync(const DescribeDohUserInfoRequest& request, const DescribeDohUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDohUserInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDohUserInfoOutcomeCallable AlidnsClient::describeDohUserInfoCallable(const DescribeDohUserInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDohUserInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDohUserInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeDomainDnssecInfoOutcome AlidnsClient::describeDomainDnssecInfo(const DescribeDomainDnssecInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainDnssecInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainDnssecInfoOutcome(DescribeDomainDnssecInfoResult(outcome.result()));
	else
		return DescribeDomainDnssecInfoOutcome(outcome.error());
}

void AlidnsClient::describeDomainDnssecInfoAsync(const DescribeDomainDnssecInfoRequest& request, const DescribeDomainDnssecInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainDnssecInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDomainDnssecInfoOutcomeCallable AlidnsClient::describeDomainDnssecInfoCallable(const DescribeDomainDnssecInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainDnssecInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDomainDnssecInfo(request);
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

AlidnsClient::DescribeDomainResolveStatisticsSummaryOutcome AlidnsClient::describeDomainResolveStatisticsSummary(const DescribeDomainResolveStatisticsSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainResolveStatisticsSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainResolveStatisticsSummaryOutcome(DescribeDomainResolveStatisticsSummaryResult(outcome.result()));
	else
		return DescribeDomainResolveStatisticsSummaryOutcome(outcome.error());
}

void AlidnsClient::describeDomainResolveStatisticsSummaryAsync(const DescribeDomainResolveStatisticsSummaryRequest& request, const DescribeDomainResolveStatisticsSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainResolveStatisticsSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeDomainResolveStatisticsSummaryOutcomeCallable AlidnsClient::describeDomainResolveStatisticsSummaryCallable(const DescribeDomainResolveStatisticsSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainResolveStatisticsSummaryOutcome()>>(
			[this, request]()
			{
			return this->describeDomainResolveStatisticsSummary(request);
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

AlidnsClient::DescribeInstanceDomainsOutcome AlidnsClient::describeInstanceDomains(const DescribeInstanceDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceDomainsOutcome(DescribeInstanceDomainsResult(outcome.result()));
	else
		return DescribeInstanceDomainsOutcome(outcome.error());
}

void AlidnsClient::describeInstanceDomainsAsync(const DescribeInstanceDomainsRequest& request, const DescribeInstanceDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeInstanceDomainsOutcomeCallable AlidnsClient::describeInstanceDomainsCallable(const DescribeInstanceDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceDomainsOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeIspFlushCacheInstancesOutcome AlidnsClient::describeIspFlushCacheInstances(const DescribeIspFlushCacheInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIspFlushCacheInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIspFlushCacheInstancesOutcome(DescribeIspFlushCacheInstancesResult(outcome.result()));
	else
		return DescribeIspFlushCacheInstancesOutcome(outcome.error());
}

void AlidnsClient::describeIspFlushCacheInstancesAsync(const DescribeIspFlushCacheInstancesRequest& request, const DescribeIspFlushCacheInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIspFlushCacheInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeIspFlushCacheInstancesOutcomeCallable AlidnsClient::describeIspFlushCacheInstancesCallable(const DescribeIspFlushCacheInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIspFlushCacheInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeIspFlushCacheInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeIspFlushCacheRemainQuotaOutcome AlidnsClient::describeIspFlushCacheRemainQuota(const DescribeIspFlushCacheRemainQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIspFlushCacheRemainQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIspFlushCacheRemainQuotaOutcome(DescribeIspFlushCacheRemainQuotaResult(outcome.result()));
	else
		return DescribeIspFlushCacheRemainQuotaOutcome(outcome.error());
}

void AlidnsClient::describeIspFlushCacheRemainQuotaAsync(const DescribeIspFlushCacheRemainQuotaRequest& request, const DescribeIspFlushCacheRemainQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIspFlushCacheRemainQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeIspFlushCacheRemainQuotaOutcomeCallable AlidnsClient::describeIspFlushCacheRemainQuotaCallable(const DescribeIspFlushCacheRemainQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIspFlushCacheRemainQuotaOutcome()>>(
			[this, request]()
			{
			return this->describeIspFlushCacheRemainQuota(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeIspFlushCacheTaskOutcome AlidnsClient::describeIspFlushCacheTask(const DescribeIspFlushCacheTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIspFlushCacheTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIspFlushCacheTaskOutcome(DescribeIspFlushCacheTaskResult(outcome.result()));
	else
		return DescribeIspFlushCacheTaskOutcome(outcome.error());
}

void AlidnsClient::describeIspFlushCacheTaskAsync(const DescribeIspFlushCacheTaskRequest& request, const DescribeIspFlushCacheTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIspFlushCacheTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeIspFlushCacheTaskOutcomeCallable AlidnsClient::describeIspFlushCacheTaskCallable(const DescribeIspFlushCacheTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIspFlushCacheTaskOutcome()>>(
			[this, request]()
			{
			return this->describeIspFlushCacheTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeIspFlushCacheTasksOutcome AlidnsClient::describeIspFlushCacheTasks(const DescribeIspFlushCacheTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIspFlushCacheTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIspFlushCacheTasksOutcome(DescribeIspFlushCacheTasksResult(outcome.result()));
	else
		return DescribeIspFlushCacheTasksOutcome(outcome.error());
}

void AlidnsClient::describeIspFlushCacheTasksAsync(const DescribeIspFlushCacheTasksRequest& request, const DescribeIspFlushCacheTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIspFlushCacheTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeIspFlushCacheTasksOutcomeCallable AlidnsClient::describeIspFlushCacheTasksCallable(const DescribeIspFlushCacheTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIspFlushCacheTasksOutcome()>>(
			[this, request]()
			{
			return this->describeIspFlushCacheTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribePdnsAccountSummaryOutcome AlidnsClient::describePdnsAccountSummary(const DescribePdnsAccountSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePdnsAccountSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePdnsAccountSummaryOutcome(DescribePdnsAccountSummaryResult(outcome.result()));
	else
		return DescribePdnsAccountSummaryOutcome(outcome.error());
}

void AlidnsClient::describePdnsAccountSummaryAsync(const DescribePdnsAccountSummaryRequest& request, const DescribePdnsAccountSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePdnsAccountSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribePdnsAccountSummaryOutcomeCallable AlidnsClient::describePdnsAccountSummaryCallable(const DescribePdnsAccountSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePdnsAccountSummaryOutcome()>>(
			[this, request]()
			{
			return this->describePdnsAccountSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribePdnsAppKeyOutcome AlidnsClient::describePdnsAppKey(const DescribePdnsAppKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePdnsAppKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePdnsAppKeyOutcome(DescribePdnsAppKeyResult(outcome.result()));
	else
		return DescribePdnsAppKeyOutcome(outcome.error());
}

void AlidnsClient::describePdnsAppKeyAsync(const DescribePdnsAppKeyRequest& request, const DescribePdnsAppKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePdnsAppKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribePdnsAppKeyOutcomeCallable AlidnsClient::describePdnsAppKeyCallable(const DescribePdnsAppKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePdnsAppKeyOutcome()>>(
			[this, request]()
			{
			return this->describePdnsAppKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribePdnsAppKeysOutcome AlidnsClient::describePdnsAppKeys(const DescribePdnsAppKeysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePdnsAppKeysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePdnsAppKeysOutcome(DescribePdnsAppKeysResult(outcome.result()));
	else
		return DescribePdnsAppKeysOutcome(outcome.error());
}

void AlidnsClient::describePdnsAppKeysAsync(const DescribePdnsAppKeysRequest& request, const DescribePdnsAppKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePdnsAppKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribePdnsAppKeysOutcomeCallable AlidnsClient::describePdnsAppKeysCallable(const DescribePdnsAppKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePdnsAppKeysOutcome()>>(
			[this, request]()
			{
			return this->describePdnsAppKeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribePdnsOperateLogsOutcome AlidnsClient::describePdnsOperateLogs(const DescribePdnsOperateLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePdnsOperateLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePdnsOperateLogsOutcome(DescribePdnsOperateLogsResult(outcome.result()));
	else
		return DescribePdnsOperateLogsOutcome(outcome.error());
}

void AlidnsClient::describePdnsOperateLogsAsync(const DescribePdnsOperateLogsRequest& request, const DescribePdnsOperateLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePdnsOperateLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribePdnsOperateLogsOutcomeCallable AlidnsClient::describePdnsOperateLogsCallable(const DescribePdnsOperateLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePdnsOperateLogsOutcome()>>(
			[this, request]()
			{
			return this->describePdnsOperateLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribePdnsRequestStatisticOutcome AlidnsClient::describePdnsRequestStatistic(const DescribePdnsRequestStatisticRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePdnsRequestStatisticOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePdnsRequestStatisticOutcome(DescribePdnsRequestStatisticResult(outcome.result()));
	else
		return DescribePdnsRequestStatisticOutcome(outcome.error());
}

void AlidnsClient::describePdnsRequestStatisticAsync(const DescribePdnsRequestStatisticRequest& request, const DescribePdnsRequestStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePdnsRequestStatistic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribePdnsRequestStatisticOutcomeCallable AlidnsClient::describePdnsRequestStatisticCallable(const DescribePdnsRequestStatisticRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePdnsRequestStatisticOutcome()>>(
			[this, request]()
			{
			return this->describePdnsRequestStatistic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribePdnsRequestStatisticsOutcome AlidnsClient::describePdnsRequestStatistics(const DescribePdnsRequestStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePdnsRequestStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePdnsRequestStatisticsOutcome(DescribePdnsRequestStatisticsResult(outcome.result()));
	else
		return DescribePdnsRequestStatisticsOutcome(outcome.error());
}

void AlidnsClient::describePdnsRequestStatisticsAsync(const DescribePdnsRequestStatisticsRequest& request, const DescribePdnsRequestStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePdnsRequestStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribePdnsRequestStatisticsOutcomeCallable AlidnsClient::describePdnsRequestStatisticsCallable(const DescribePdnsRequestStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePdnsRequestStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describePdnsRequestStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribePdnsThreatLogsOutcome AlidnsClient::describePdnsThreatLogs(const DescribePdnsThreatLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePdnsThreatLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePdnsThreatLogsOutcome(DescribePdnsThreatLogsResult(outcome.result()));
	else
		return DescribePdnsThreatLogsOutcome(outcome.error());
}

void AlidnsClient::describePdnsThreatLogsAsync(const DescribePdnsThreatLogsRequest& request, const DescribePdnsThreatLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePdnsThreatLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribePdnsThreatLogsOutcomeCallable AlidnsClient::describePdnsThreatLogsCallable(const DescribePdnsThreatLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePdnsThreatLogsOutcome()>>(
			[this, request]()
			{
			return this->describePdnsThreatLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribePdnsThreatStatisticOutcome AlidnsClient::describePdnsThreatStatistic(const DescribePdnsThreatStatisticRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePdnsThreatStatisticOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePdnsThreatStatisticOutcome(DescribePdnsThreatStatisticResult(outcome.result()));
	else
		return DescribePdnsThreatStatisticOutcome(outcome.error());
}

void AlidnsClient::describePdnsThreatStatisticAsync(const DescribePdnsThreatStatisticRequest& request, const DescribePdnsThreatStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePdnsThreatStatistic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribePdnsThreatStatisticOutcomeCallable AlidnsClient::describePdnsThreatStatisticCallable(const DescribePdnsThreatStatisticRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePdnsThreatStatisticOutcome()>>(
			[this, request]()
			{
			return this->describePdnsThreatStatistic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribePdnsThreatStatisticsOutcome AlidnsClient::describePdnsThreatStatistics(const DescribePdnsThreatStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePdnsThreatStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePdnsThreatStatisticsOutcome(DescribePdnsThreatStatisticsResult(outcome.result()));
	else
		return DescribePdnsThreatStatisticsOutcome(outcome.error());
}

void AlidnsClient::describePdnsThreatStatisticsAsync(const DescribePdnsThreatStatisticsRequest& request, const DescribePdnsThreatStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePdnsThreatStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribePdnsThreatStatisticsOutcomeCallable AlidnsClient::describePdnsThreatStatisticsCallable(const DescribePdnsThreatStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePdnsThreatStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describePdnsThreatStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribePdnsUdpIpSegmentsOutcome AlidnsClient::describePdnsUdpIpSegments(const DescribePdnsUdpIpSegmentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePdnsUdpIpSegmentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePdnsUdpIpSegmentsOutcome(DescribePdnsUdpIpSegmentsResult(outcome.result()));
	else
		return DescribePdnsUdpIpSegmentsOutcome(outcome.error());
}

void AlidnsClient::describePdnsUdpIpSegmentsAsync(const DescribePdnsUdpIpSegmentsRequest& request, const DescribePdnsUdpIpSegmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePdnsUdpIpSegments(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribePdnsUdpIpSegmentsOutcomeCallable AlidnsClient::describePdnsUdpIpSegmentsCallable(const DescribePdnsUdpIpSegmentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePdnsUdpIpSegmentsOutcome()>>(
			[this, request]()
			{
			return this->describePdnsUdpIpSegments(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribePdnsUserInfoOutcome AlidnsClient::describePdnsUserInfo(const DescribePdnsUserInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePdnsUserInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePdnsUserInfoOutcome(DescribePdnsUserInfoResult(outcome.result()));
	else
		return DescribePdnsUserInfoOutcome(outcome.error());
}

void AlidnsClient::describePdnsUserInfoAsync(const DescribePdnsUserInfoRequest& request, const DescribePdnsUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePdnsUserInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribePdnsUserInfoOutcomeCallable AlidnsClient::describePdnsUserInfoCallable(const DescribePdnsUserInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePdnsUserInfoOutcome()>>(
			[this, request]()
			{
			return this->describePdnsUserInfo(request);
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

AlidnsClient::DescribeRecordResolveStatisticsSummaryOutcome AlidnsClient::describeRecordResolveStatisticsSummary(const DescribeRecordResolveStatisticsSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRecordResolveStatisticsSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRecordResolveStatisticsSummaryOutcome(DescribeRecordResolveStatisticsSummaryResult(outcome.result()));
	else
		return DescribeRecordResolveStatisticsSummaryOutcome(outcome.error());
}

void AlidnsClient::describeRecordResolveStatisticsSummaryAsync(const DescribeRecordResolveStatisticsSummaryRequest& request, const DescribeRecordResolveStatisticsSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRecordResolveStatisticsSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeRecordResolveStatisticsSummaryOutcomeCallable AlidnsClient::describeRecordResolveStatisticsSummaryCallable(const DescribeRecordResolveStatisticsSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRecordResolveStatisticsSummaryOutcome()>>(
			[this, request]()
			{
			return this->describeRecordResolveStatisticsSummary(request);
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

AlidnsClient::DescribeTagsOutcome AlidnsClient::describeTags(const DescribeTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTagsOutcome(DescribeTagsResult(outcome.result()));
	else
		return DescribeTagsOutcome(outcome.error());
}

void AlidnsClient::describeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeTagsOutcomeCallable AlidnsClient::describeTagsCallable(const DescribeTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTagsOutcome()>>(
			[this, request]()
			{
			return this->describeTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::DescribeTransferDomainsOutcome AlidnsClient::describeTransferDomains(const DescribeTransferDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTransferDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTransferDomainsOutcome(DescribeTransferDomainsResult(outcome.result()));
	else
		return DescribeTransferDomainsOutcome(outcome.error());
}

void AlidnsClient::describeTransferDomainsAsync(const DescribeTransferDomainsRequest& request, const DescribeTransferDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTransferDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::DescribeTransferDomainsOutcomeCallable AlidnsClient::describeTransferDomainsCallable(const DescribeTransferDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTransferDomainsOutcome()>>(
			[this, request]()
			{
			return this->describeTransferDomains(request);
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

AlidnsClient::GetTxtRecordForVerifyOutcome AlidnsClient::getTxtRecordForVerify(const GetTxtRecordForVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTxtRecordForVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTxtRecordForVerifyOutcome(GetTxtRecordForVerifyResult(outcome.result()));
	else
		return GetTxtRecordForVerifyOutcome(outcome.error());
}

void AlidnsClient::getTxtRecordForVerifyAsync(const GetTxtRecordForVerifyRequest& request, const GetTxtRecordForVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTxtRecordForVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::GetTxtRecordForVerifyOutcomeCallable AlidnsClient::getTxtRecordForVerifyCallable(const GetTxtRecordForVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTxtRecordForVerifyOutcome()>>(
			[this, request]()
			{
			return this->getTxtRecordForVerify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::ListTagResourcesOutcome AlidnsClient::listTagResources(const ListTagResourcesRequest &request) const
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

void AlidnsClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::ListTagResourcesOutcomeCallable AlidnsClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
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

AlidnsClient::MoveDomainResourceGroupOutcome AlidnsClient::moveDomainResourceGroup(const MoveDomainResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MoveDomainResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MoveDomainResourceGroupOutcome(MoveDomainResourceGroupResult(outcome.result()));
	else
		return MoveDomainResourceGroupOutcome(outcome.error());
}

void AlidnsClient::moveDomainResourceGroupAsync(const MoveDomainResourceGroupRequest& request, const MoveDomainResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moveDomainResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::MoveDomainResourceGroupOutcomeCallable AlidnsClient::moveDomainResourceGroupCallable(const MoveDomainResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoveDomainResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->moveDomainResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::MoveGtmResourceGroupOutcome AlidnsClient::moveGtmResourceGroup(const MoveGtmResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MoveGtmResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MoveGtmResourceGroupOutcome(MoveGtmResourceGroupResult(outcome.result()));
	else
		return MoveGtmResourceGroupOutcome(outcome.error());
}

void AlidnsClient::moveGtmResourceGroupAsync(const MoveGtmResourceGroupRequest& request, const MoveGtmResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moveGtmResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::MoveGtmResourceGroupOutcomeCallable AlidnsClient::moveGtmResourceGroupCallable(const MoveGtmResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoveGtmResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->moveGtmResourceGroup(request);
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

AlidnsClient::PausePdnsServiceOutcome AlidnsClient::pausePdnsService(const PausePdnsServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PausePdnsServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PausePdnsServiceOutcome(PausePdnsServiceResult(outcome.result()));
	else
		return PausePdnsServiceOutcome(outcome.error());
}

void AlidnsClient::pausePdnsServiceAsync(const PausePdnsServiceRequest& request, const PausePdnsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pausePdnsService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::PausePdnsServiceOutcomeCallable AlidnsClient::pausePdnsServiceCallable(const PausePdnsServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PausePdnsServiceOutcome()>>(
			[this, request]()
			{
			return this->pausePdnsService(request);
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

AlidnsClient::RemovePdnsAppKeyOutcome AlidnsClient::removePdnsAppKey(const RemovePdnsAppKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemovePdnsAppKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemovePdnsAppKeyOutcome(RemovePdnsAppKeyResult(outcome.result()));
	else
		return RemovePdnsAppKeyOutcome(outcome.error());
}

void AlidnsClient::removePdnsAppKeyAsync(const RemovePdnsAppKeyRequest& request, const RemovePdnsAppKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removePdnsAppKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::RemovePdnsAppKeyOutcomeCallable AlidnsClient::removePdnsAppKeyCallable(const RemovePdnsAppKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemovePdnsAppKeyOutcome()>>(
			[this, request]()
			{
			return this->removePdnsAppKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::RemovePdnsUdpIpSegmentOutcome AlidnsClient::removePdnsUdpIpSegment(const RemovePdnsUdpIpSegmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemovePdnsUdpIpSegmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemovePdnsUdpIpSegmentOutcome(RemovePdnsUdpIpSegmentResult(outcome.result()));
	else
		return RemovePdnsUdpIpSegmentOutcome(outcome.error());
}

void AlidnsClient::removePdnsUdpIpSegmentAsync(const RemovePdnsUdpIpSegmentRequest& request, const RemovePdnsUdpIpSegmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removePdnsUdpIpSegment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::RemovePdnsUdpIpSegmentOutcomeCallable AlidnsClient::removePdnsUdpIpSegmentCallable(const RemovePdnsUdpIpSegmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemovePdnsUdpIpSegmentOutcome()>>(
			[this, request]()
			{
			return this->removePdnsUdpIpSegment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::ResumePdnsServiceOutcome AlidnsClient::resumePdnsService(const ResumePdnsServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumePdnsServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumePdnsServiceOutcome(ResumePdnsServiceResult(outcome.result()));
	else
		return ResumePdnsServiceOutcome(outcome.error());
}

void AlidnsClient::resumePdnsServiceAsync(const ResumePdnsServiceRequest& request, const ResumePdnsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumePdnsService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::ResumePdnsServiceOutcomeCallable AlidnsClient::resumePdnsServiceCallable(const ResumePdnsServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumePdnsServiceOutcome()>>(
			[this, request]()
			{
			return this->resumePdnsService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::RetrieveDomainOutcome AlidnsClient::retrieveDomain(const RetrieveDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RetrieveDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RetrieveDomainOutcome(RetrieveDomainResult(outcome.result()));
	else
		return RetrieveDomainOutcome(outcome.error());
}

void AlidnsClient::retrieveDomainAsync(const RetrieveDomainRequest& request, const RetrieveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, retrieveDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::RetrieveDomainOutcomeCallable AlidnsClient::retrieveDomainCallable(const RetrieveDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RetrieveDomainOutcome()>>(
			[this, request]()
			{
			return this->retrieveDomain(request);
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

AlidnsClient::SetDnsGtmAccessModeOutcome AlidnsClient::setDnsGtmAccessMode(const SetDnsGtmAccessModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDnsGtmAccessModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDnsGtmAccessModeOutcome(SetDnsGtmAccessModeResult(outcome.result()));
	else
		return SetDnsGtmAccessModeOutcome(outcome.error());
}

void AlidnsClient::setDnsGtmAccessModeAsync(const SetDnsGtmAccessModeRequest& request, const SetDnsGtmAccessModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDnsGtmAccessMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::SetDnsGtmAccessModeOutcomeCallable AlidnsClient::setDnsGtmAccessModeCallable(const SetDnsGtmAccessModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDnsGtmAccessModeOutcome()>>(
			[this, request]()
			{
			return this->setDnsGtmAccessMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::SetDnsGtmMonitorStatusOutcome AlidnsClient::setDnsGtmMonitorStatus(const SetDnsGtmMonitorStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDnsGtmMonitorStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDnsGtmMonitorStatusOutcome(SetDnsGtmMonitorStatusResult(outcome.result()));
	else
		return SetDnsGtmMonitorStatusOutcome(outcome.error());
}

void AlidnsClient::setDnsGtmMonitorStatusAsync(const SetDnsGtmMonitorStatusRequest& request, const SetDnsGtmMonitorStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDnsGtmMonitorStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::SetDnsGtmMonitorStatusOutcomeCallable AlidnsClient::setDnsGtmMonitorStatusCallable(const SetDnsGtmMonitorStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDnsGtmMonitorStatusOutcome()>>(
			[this, request]()
			{
			return this->setDnsGtmMonitorStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::SetDomainDnssecStatusOutcome AlidnsClient::setDomainDnssecStatus(const SetDomainDnssecStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDomainDnssecStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDomainDnssecStatusOutcome(SetDomainDnssecStatusResult(outcome.result()));
	else
		return SetDomainDnssecStatusOutcome(outcome.error());
}

void AlidnsClient::setDomainDnssecStatusAsync(const SetDomainDnssecStatusRequest& request, const SetDomainDnssecStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDomainDnssecStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::SetDomainDnssecStatusOutcomeCallable AlidnsClient::setDomainDnssecStatusCallable(const SetDomainDnssecStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDomainDnssecStatusOutcome()>>(
			[this, request]()
			{
			return this->setDomainDnssecStatus(request);
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

AlidnsClient::SubmitIspFlushCacheTaskOutcome AlidnsClient::submitIspFlushCacheTask(const SubmitIspFlushCacheTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitIspFlushCacheTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitIspFlushCacheTaskOutcome(SubmitIspFlushCacheTaskResult(outcome.result()));
	else
		return SubmitIspFlushCacheTaskOutcome(outcome.error());
}

void AlidnsClient::submitIspFlushCacheTaskAsync(const SubmitIspFlushCacheTaskRequest& request, const SubmitIspFlushCacheTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitIspFlushCacheTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::SubmitIspFlushCacheTaskOutcomeCallable AlidnsClient::submitIspFlushCacheTaskCallable(const SubmitIspFlushCacheTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitIspFlushCacheTaskOutcome()>>(
			[this, request]()
			{
			return this->submitIspFlushCacheTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::SwitchDnsGtmInstanceStrategyModeOutcome AlidnsClient::switchDnsGtmInstanceStrategyMode(const SwitchDnsGtmInstanceStrategyModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchDnsGtmInstanceStrategyModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchDnsGtmInstanceStrategyModeOutcome(SwitchDnsGtmInstanceStrategyModeResult(outcome.result()));
	else
		return SwitchDnsGtmInstanceStrategyModeOutcome(outcome.error());
}

void AlidnsClient::switchDnsGtmInstanceStrategyModeAsync(const SwitchDnsGtmInstanceStrategyModeRequest& request, const SwitchDnsGtmInstanceStrategyModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchDnsGtmInstanceStrategyMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::SwitchDnsGtmInstanceStrategyModeOutcomeCallable AlidnsClient::switchDnsGtmInstanceStrategyModeCallable(const SwitchDnsGtmInstanceStrategyModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchDnsGtmInstanceStrategyModeOutcome()>>(
			[this, request]()
			{
			return this->switchDnsGtmInstanceStrategyMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::TagResourcesOutcome AlidnsClient::tagResources(const TagResourcesRequest &request) const
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

void AlidnsClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::TagResourcesOutcomeCallable AlidnsClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::TransferDomainOutcome AlidnsClient::transferDomain(const TransferDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TransferDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TransferDomainOutcome(TransferDomainResult(outcome.result()));
	else
		return TransferDomainOutcome(outcome.error());
}

void AlidnsClient::transferDomainAsync(const TransferDomainRequest& request, const TransferDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transferDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::TransferDomainOutcomeCallable AlidnsClient::transferDomainCallable(const TransferDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransferDomainOutcome()>>(
			[this, request]()
			{
			return this->transferDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::UnbindInstanceDomainsOutcome AlidnsClient::unbindInstanceDomains(const UnbindInstanceDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindInstanceDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindInstanceDomainsOutcome(UnbindInstanceDomainsResult(outcome.result()));
	else
		return UnbindInstanceDomainsOutcome(outcome.error());
}

void AlidnsClient::unbindInstanceDomainsAsync(const UnbindInstanceDomainsRequest& request, const UnbindInstanceDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindInstanceDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::UnbindInstanceDomainsOutcomeCallable AlidnsClient::unbindInstanceDomainsCallable(const UnbindInstanceDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindInstanceDomainsOutcome()>>(
			[this, request]()
			{
			return this->unbindInstanceDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::UntagResourcesOutcome AlidnsClient::untagResources(const UntagResourcesRequest &request) const
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

void AlidnsClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::UntagResourcesOutcomeCallable AlidnsClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::UpdateAppKeyStateOutcome AlidnsClient::updateAppKeyState(const UpdateAppKeyStateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAppKeyStateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAppKeyStateOutcome(UpdateAppKeyStateResult(outcome.result()));
	else
		return UpdateAppKeyStateOutcome(outcome.error());
}

void AlidnsClient::updateAppKeyStateAsync(const UpdateAppKeyStateRequest& request, const UpdateAppKeyStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAppKeyState(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::UpdateAppKeyStateOutcomeCallable AlidnsClient::updateAppKeyStateCallable(const UpdateAppKeyStateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAppKeyStateOutcome()>>(
			[this, request]()
			{
			return this->updateAppKeyState(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::UpdateCustomLineOutcome AlidnsClient::updateCustomLine(const UpdateCustomLineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCustomLineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCustomLineOutcome(UpdateCustomLineResult(outcome.result()));
	else
		return UpdateCustomLineOutcome(outcome.error());
}

void AlidnsClient::updateCustomLineAsync(const UpdateCustomLineRequest& request, const UpdateCustomLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCustomLine(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::UpdateCustomLineOutcomeCallable AlidnsClient::updateCustomLineCallable(const UpdateCustomLineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCustomLineOutcome()>>(
			[this, request]()
			{
			return this->updateCustomLine(request);
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

AlidnsClient::UpdateDnsCacheDomainOutcome AlidnsClient::updateDnsCacheDomain(const UpdateDnsCacheDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDnsCacheDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDnsCacheDomainOutcome(UpdateDnsCacheDomainResult(outcome.result()));
	else
		return UpdateDnsCacheDomainOutcome(outcome.error());
}

void AlidnsClient::updateDnsCacheDomainAsync(const UpdateDnsCacheDomainRequest& request, const UpdateDnsCacheDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDnsCacheDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::UpdateDnsCacheDomainOutcomeCallable AlidnsClient::updateDnsCacheDomainCallable(const UpdateDnsCacheDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDnsCacheDomainOutcome()>>(
			[this, request]()
			{
			return this->updateDnsCacheDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::UpdateDnsCacheDomainRemarkOutcome AlidnsClient::updateDnsCacheDomainRemark(const UpdateDnsCacheDomainRemarkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDnsCacheDomainRemarkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDnsCacheDomainRemarkOutcome(UpdateDnsCacheDomainRemarkResult(outcome.result()));
	else
		return UpdateDnsCacheDomainRemarkOutcome(outcome.error());
}

void AlidnsClient::updateDnsCacheDomainRemarkAsync(const UpdateDnsCacheDomainRemarkRequest& request, const UpdateDnsCacheDomainRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDnsCacheDomainRemark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::UpdateDnsCacheDomainRemarkOutcomeCallable AlidnsClient::updateDnsCacheDomainRemarkCallable(const UpdateDnsCacheDomainRemarkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDnsCacheDomainRemarkOutcome()>>(
			[this, request]()
			{
			return this->updateDnsCacheDomainRemark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::UpdateDnsGtmAccessStrategyOutcome AlidnsClient::updateDnsGtmAccessStrategy(const UpdateDnsGtmAccessStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDnsGtmAccessStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDnsGtmAccessStrategyOutcome(UpdateDnsGtmAccessStrategyResult(outcome.result()));
	else
		return UpdateDnsGtmAccessStrategyOutcome(outcome.error());
}

void AlidnsClient::updateDnsGtmAccessStrategyAsync(const UpdateDnsGtmAccessStrategyRequest& request, const UpdateDnsGtmAccessStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDnsGtmAccessStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::UpdateDnsGtmAccessStrategyOutcomeCallable AlidnsClient::updateDnsGtmAccessStrategyCallable(const UpdateDnsGtmAccessStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDnsGtmAccessStrategyOutcome()>>(
			[this, request]()
			{
			return this->updateDnsGtmAccessStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::UpdateDnsGtmAddressPoolOutcome AlidnsClient::updateDnsGtmAddressPool(const UpdateDnsGtmAddressPoolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDnsGtmAddressPoolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDnsGtmAddressPoolOutcome(UpdateDnsGtmAddressPoolResult(outcome.result()));
	else
		return UpdateDnsGtmAddressPoolOutcome(outcome.error());
}

void AlidnsClient::updateDnsGtmAddressPoolAsync(const UpdateDnsGtmAddressPoolRequest& request, const UpdateDnsGtmAddressPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDnsGtmAddressPool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::UpdateDnsGtmAddressPoolOutcomeCallable AlidnsClient::updateDnsGtmAddressPoolCallable(const UpdateDnsGtmAddressPoolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDnsGtmAddressPoolOutcome()>>(
			[this, request]()
			{
			return this->updateDnsGtmAddressPool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::UpdateDnsGtmInstanceGlobalConfigOutcome AlidnsClient::updateDnsGtmInstanceGlobalConfig(const UpdateDnsGtmInstanceGlobalConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDnsGtmInstanceGlobalConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDnsGtmInstanceGlobalConfigOutcome(UpdateDnsGtmInstanceGlobalConfigResult(outcome.result()));
	else
		return UpdateDnsGtmInstanceGlobalConfigOutcome(outcome.error());
}

void AlidnsClient::updateDnsGtmInstanceGlobalConfigAsync(const UpdateDnsGtmInstanceGlobalConfigRequest& request, const UpdateDnsGtmInstanceGlobalConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDnsGtmInstanceGlobalConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::UpdateDnsGtmInstanceGlobalConfigOutcomeCallable AlidnsClient::updateDnsGtmInstanceGlobalConfigCallable(const UpdateDnsGtmInstanceGlobalConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDnsGtmInstanceGlobalConfigOutcome()>>(
			[this, request]()
			{
			return this->updateDnsGtmInstanceGlobalConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::UpdateDnsGtmMonitorOutcome AlidnsClient::updateDnsGtmMonitor(const UpdateDnsGtmMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDnsGtmMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDnsGtmMonitorOutcome(UpdateDnsGtmMonitorResult(outcome.result()));
	else
		return UpdateDnsGtmMonitorOutcome(outcome.error());
}

void AlidnsClient::updateDnsGtmMonitorAsync(const UpdateDnsGtmMonitorRequest& request, const UpdateDnsGtmMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDnsGtmMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::UpdateDnsGtmMonitorOutcomeCallable AlidnsClient::updateDnsGtmMonitorCallable(const UpdateDnsGtmMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDnsGtmMonitorOutcome()>>(
			[this, request]()
			{
			return this->updateDnsGtmMonitor(request);
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

AlidnsClient::UpdateIspFlushCacheInstanceConfigOutcome AlidnsClient::updateIspFlushCacheInstanceConfig(const UpdateIspFlushCacheInstanceConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateIspFlushCacheInstanceConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateIspFlushCacheInstanceConfigOutcome(UpdateIspFlushCacheInstanceConfigResult(outcome.result()));
	else
		return UpdateIspFlushCacheInstanceConfigOutcome(outcome.error());
}

void AlidnsClient::updateIspFlushCacheInstanceConfigAsync(const UpdateIspFlushCacheInstanceConfigRequest& request, const UpdateIspFlushCacheInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateIspFlushCacheInstanceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::UpdateIspFlushCacheInstanceConfigOutcomeCallable AlidnsClient::updateIspFlushCacheInstanceConfigCallable(const UpdateIspFlushCacheInstanceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateIspFlushCacheInstanceConfigOutcome()>>(
			[this, request]()
			{
			return this->updateIspFlushCacheInstanceConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::ValidateDnsGtmCnameRrCanUseOutcome AlidnsClient::validateDnsGtmCnameRrCanUse(const ValidateDnsGtmCnameRrCanUseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ValidateDnsGtmCnameRrCanUseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ValidateDnsGtmCnameRrCanUseOutcome(ValidateDnsGtmCnameRrCanUseResult(outcome.result()));
	else
		return ValidateDnsGtmCnameRrCanUseOutcome(outcome.error());
}

void AlidnsClient::validateDnsGtmCnameRrCanUseAsync(const ValidateDnsGtmCnameRrCanUseRequest& request, const ValidateDnsGtmCnameRrCanUseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, validateDnsGtmCnameRrCanUse(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::ValidateDnsGtmCnameRrCanUseOutcomeCallable AlidnsClient::validateDnsGtmCnameRrCanUseCallable(const ValidateDnsGtmCnameRrCanUseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ValidateDnsGtmCnameRrCanUseOutcome()>>(
			[this, request]()
			{
			return this->validateDnsGtmCnameRrCanUse(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlidnsClient::ValidatePdnsUdpIpSegmentOutcome AlidnsClient::validatePdnsUdpIpSegment(const ValidatePdnsUdpIpSegmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ValidatePdnsUdpIpSegmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ValidatePdnsUdpIpSegmentOutcome(ValidatePdnsUdpIpSegmentResult(outcome.result()));
	else
		return ValidatePdnsUdpIpSegmentOutcome(outcome.error());
}

void AlidnsClient::validatePdnsUdpIpSegmentAsync(const ValidatePdnsUdpIpSegmentRequest& request, const ValidatePdnsUdpIpSegmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, validatePdnsUdpIpSegment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlidnsClient::ValidatePdnsUdpIpSegmentOutcomeCallable AlidnsClient::validatePdnsUdpIpSegmentCallable(const ValidatePdnsUdpIpSegmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ValidatePdnsUdpIpSegmentOutcome()>>(
			[this, request]()
			{
			return this->validatePdnsUdpIpSegment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

