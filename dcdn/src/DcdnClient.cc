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

DcdnClient::BatchCreateDcdnWafRulesOutcome DcdnClient::batchCreateDcdnWafRules(const BatchCreateDcdnWafRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchCreateDcdnWafRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchCreateDcdnWafRulesOutcome(BatchCreateDcdnWafRulesResult(outcome.result()));
	else
		return BatchCreateDcdnWafRulesOutcome(outcome.error());
}

void DcdnClient::batchCreateDcdnWafRulesAsync(const BatchCreateDcdnWafRulesRequest& request, const BatchCreateDcdnWafRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchCreateDcdnWafRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::BatchCreateDcdnWafRulesOutcomeCallable DcdnClient::batchCreateDcdnWafRulesCallable(const BatchCreateDcdnWafRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchCreateDcdnWafRulesOutcome()>>(
			[this, request]()
			{
			return this->batchCreateDcdnWafRules(request);
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

DcdnClient::BatchDeleteDcdnKvOutcome DcdnClient::batchDeleteDcdnKv(const BatchDeleteDcdnKvRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchDeleteDcdnKvOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchDeleteDcdnKvOutcome(BatchDeleteDcdnKvResult(outcome.result()));
	else
		return BatchDeleteDcdnKvOutcome(outcome.error());
}

void DcdnClient::batchDeleteDcdnKvAsync(const BatchDeleteDcdnKvRequest& request, const BatchDeleteDcdnKvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchDeleteDcdnKv(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::BatchDeleteDcdnKvOutcomeCallable DcdnClient::batchDeleteDcdnKvCallable(const BatchDeleteDcdnKvRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchDeleteDcdnKvOutcome()>>(
			[this, request]()
			{
			return this->batchDeleteDcdnKv(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::BatchDeleteDcdnKvWithHighCapacityOutcome DcdnClient::batchDeleteDcdnKvWithHighCapacity(const BatchDeleteDcdnKvWithHighCapacityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchDeleteDcdnKvWithHighCapacityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchDeleteDcdnKvWithHighCapacityOutcome(BatchDeleteDcdnKvWithHighCapacityResult(outcome.result()));
	else
		return BatchDeleteDcdnKvWithHighCapacityOutcome(outcome.error());
}

void DcdnClient::batchDeleteDcdnKvWithHighCapacityAsync(const BatchDeleteDcdnKvWithHighCapacityRequest& request, const BatchDeleteDcdnKvWithHighCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchDeleteDcdnKvWithHighCapacity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::BatchDeleteDcdnKvWithHighCapacityOutcomeCallable DcdnClient::batchDeleteDcdnKvWithHighCapacityCallable(const BatchDeleteDcdnKvWithHighCapacityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchDeleteDcdnKvWithHighCapacityOutcome()>>(
			[this, request]()
			{
			return this->batchDeleteDcdnKvWithHighCapacity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::BatchDeleteDcdnWafRulesOutcome DcdnClient::batchDeleteDcdnWafRules(const BatchDeleteDcdnWafRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchDeleteDcdnWafRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchDeleteDcdnWafRulesOutcome(BatchDeleteDcdnWafRulesResult(outcome.result()));
	else
		return BatchDeleteDcdnWafRulesOutcome(outcome.error());
}

void DcdnClient::batchDeleteDcdnWafRulesAsync(const BatchDeleteDcdnWafRulesRequest& request, const BatchDeleteDcdnWafRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchDeleteDcdnWafRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::BatchDeleteDcdnWafRulesOutcomeCallable DcdnClient::batchDeleteDcdnWafRulesCallable(const BatchDeleteDcdnWafRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchDeleteDcdnWafRulesOutcome()>>(
			[this, request]()
			{
			return this->batchDeleteDcdnWafRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::BatchModifyDcdnWafRulesOutcome DcdnClient::batchModifyDcdnWafRules(const BatchModifyDcdnWafRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchModifyDcdnWafRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchModifyDcdnWafRulesOutcome(BatchModifyDcdnWafRulesResult(outcome.result()));
	else
		return BatchModifyDcdnWafRulesOutcome(outcome.error());
}

void DcdnClient::batchModifyDcdnWafRulesAsync(const BatchModifyDcdnWafRulesRequest& request, const BatchModifyDcdnWafRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchModifyDcdnWafRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::BatchModifyDcdnWafRulesOutcomeCallable DcdnClient::batchModifyDcdnWafRulesCallable(const BatchModifyDcdnWafRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchModifyDcdnWafRulesOutcome()>>(
			[this, request]()
			{
			return this->batchModifyDcdnWafRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::BatchPutDcdnKvOutcome DcdnClient::batchPutDcdnKv(const BatchPutDcdnKvRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchPutDcdnKvOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchPutDcdnKvOutcome(BatchPutDcdnKvResult(outcome.result()));
	else
		return BatchPutDcdnKvOutcome(outcome.error());
}

void DcdnClient::batchPutDcdnKvAsync(const BatchPutDcdnKvRequest& request, const BatchPutDcdnKvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchPutDcdnKv(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::BatchPutDcdnKvOutcomeCallable DcdnClient::batchPutDcdnKvCallable(const BatchPutDcdnKvRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchPutDcdnKvOutcome()>>(
			[this, request]()
			{
			return this->batchPutDcdnKv(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::BatchPutDcdnKvWithHighCapacityOutcome DcdnClient::batchPutDcdnKvWithHighCapacity(const BatchPutDcdnKvWithHighCapacityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchPutDcdnKvWithHighCapacityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchPutDcdnKvWithHighCapacityOutcome(BatchPutDcdnKvWithHighCapacityResult(outcome.result()));
	else
		return BatchPutDcdnKvWithHighCapacityOutcome(outcome.error());
}

void DcdnClient::batchPutDcdnKvWithHighCapacityAsync(const BatchPutDcdnKvWithHighCapacityRequest& request, const BatchPutDcdnKvWithHighCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchPutDcdnKvWithHighCapacity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::BatchPutDcdnKvWithHighCapacityOutcomeCallable DcdnClient::batchPutDcdnKvWithHighCapacityCallable(const BatchPutDcdnKvWithHighCapacityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchPutDcdnKvWithHighCapacityOutcome()>>(
			[this, request]()
			{
			return this->batchPutDcdnKvWithHighCapacity(request);
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

DcdnClient::BatchSetDcdnWafDomainConfigsOutcome DcdnClient::batchSetDcdnWafDomainConfigs(const BatchSetDcdnWafDomainConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchSetDcdnWafDomainConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchSetDcdnWafDomainConfigsOutcome(BatchSetDcdnWafDomainConfigsResult(outcome.result()));
	else
		return BatchSetDcdnWafDomainConfigsOutcome(outcome.error());
}

void DcdnClient::batchSetDcdnWafDomainConfigsAsync(const BatchSetDcdnWafDomainConfigsRequest& request, const BatchSetDcdnWafDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchSetDcdnWafDomainConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::BatchSetDcdnWafDomainConfigsOutcomeCallable DcdnClient::batchSetDcdnWafDomainConfigsCallable(const BatchSetDcdnWafDomainConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchSetDcdnWafDomainConfigsOutcome()>>(
			[this, request]()
			{
			return this->batchSetDcdnWafDomainConfigs(request);
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

DcdnClient::CreateDcdnWafGroupOutcome DcdnClient::createDcdnWafGroup(const CreateDcdnWafGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDcdnWafGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDcdnWafGroupOutcome(CreateDcdnWafGroupResult(outcome.result()));
	else
		return CreateDcdnWafGroupOutcome(outcome.error());
}

void DcdnClient::createDcdnWafGroupAsync(const CreateDcdnWafGroupRequest& request, const CreateDcdnWafGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDcdnWafGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::CreateDcdnWafGroupOutcomeCallable DcdnClient::createDcdnWafGroupCallable(const CreateDcdnWafGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDcdnWafGroupOutcome()>>(
			[this, request]()
			{
			return this->createDcdnWafGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::CreateDcdnWafPolicyOutcome DcdnClient::createDcdnWafPolicy(const CreateDcdnWafPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDcdnWafPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDcdnWafPolicyOutcome(CreateDcdnWafPolicyResult(outcome.result()));
	else
		return CreateDcdnWafPolicyOutcome(outcome.error());
}

void DcdnClient::createDcdnWafPolicyAsync(const CreateDcdnWafPolicyRequest& request, const CreateDcdnWafPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDcdnWafPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::CreateDcdnWafPolicyOutcomeCallable DcdnClient::createDcdnWafPolicyCallable(const CreateDcdnWafPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDcdnWafPolicyOutcome()>>(
			[this, request]()
			{
			return this->createDcdnWafPolicy(request);
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

DcdnClient::DeleteDcdnKvOutcome DcdnClient::deleteDcdnKv(const DeleteDcdnKvRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDcdnKvOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDcdnKvOutcome(DeleteDcdnKvResult(outcome.result()));
	else
		return DeleteDcdnKvOutcome(outcome.error());
}

void DcdnClient::deleteDcdnKvAsync(const DeleteDcdnKvRequest& request, const DeleteDcdnKvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDcdnKv(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DeleteDcdnKvOutcomeCallable DcdnClient::deleteDcdnKvCallable(const DeleteDcdnKvRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDcdnKvOutcome()>>(
			[this, request]()
			{
			return this->deleteDcdnKv(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DeleteDcdnKvNamespaceOutcome DcdnClient::deleteDcdnKvNamespace(const DeleteDcdnKvNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDcdnKvNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDcdnKvNamespaceOutcome(DeleteDcdnKvNamespaceResult(outcome.result()));
	else
		return DeleteDcdnKvNamespaceOutcome(outcome.error());
}

void DcdnClient::deleteDcdnKvNamespaceAsync(const DeleteDcdnKvNamespaceRequest& request, const DeleteDcdnKvNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDcdnKvNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DeleteDcdnKvNamespaceOutcomeCallable DcdnClient::deleteDcdnKvNamespaceCallable(const DeleteDcdnKvNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDcdnKvNamespaceOutcome()>>(
			[this, request]()
			{
			return this->deleteDcdnKvNamespace(request);
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

DcdnClient::DeleteDcdnUserConfigOutcome DcdnClient::deleteDcdnUserConfig(const DeleteDcdnUserConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDcdnUserConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDcdnUserConfigOutcome(DeleteDcdnUserConfigResult(outcome.result()));
	else
		return DeleteDcdnUserConfigOutcome(outcome.error());
}

void DcdnClient::deleteDcdnUserConfigAsync(const DeleteDcdnUserConfigRequest& request, const DeleteDcdnUserConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDcdnUserConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DeleteDcdnUserConfigOutcomeCallable DcdnClient::deleteDcdnUserConfigCallable(const DeleteDcdnUserConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDcdnUserConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteDcdnUserConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DeleteDcdnWafGroupOutcome DcdnClient::deleteDcdnWafGroup(const DeleteDcdnWafGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDcdnWafGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDcdnWafGroupOutcome(DeleteDcdnWafGroupResult(outcome.result()));
	else
		return DeleteDcdnWafGroupOutcome(outcome.error());
}

void DcdnClient::deleteDcdnWafGroupAsync(const DeleteDcdnWafGroupRequest& request, const DeleteDcdnWafGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDcdnWafGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DeleteDcdnWafGroupOutcomeCallable DcdnClient::deleteDcdnWafGroupCallable(const DeleteDcdnWafGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDcdnWafGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteDcdnWafGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DeleteDcdnWafPolicyOutcome DcdnClient::deleteDcdnWafPolicy(const DeleteDcdnWafPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDcdnWafPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDcdnWafPolicyOutcome(DeleteDcdnWafPolicyResult(outcome.result()));
	else
		return DeleteDcdnWafPolicyOutcome(outcome.error());
}

void DcdnClient::deleteDcdnWafPolicyAsync(const DeleteDcdnWafPolicyRequest& request, const DeleteDcdnWafPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDcdnWafPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DeleteDcdnWafPolicyOutcomeCallable DcdnClient::deleteDcdnWafPolicyCallable(const DeleteDcdnWafPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDcdnWafPolicyOutcome()>>(
			[this, request]()
			{
			return this->deleteDcdnWafPolicy(request);
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

DcdnClient::DescribeDcdnDdosServiceOutcome DcdnClient::describeDcdnDdosService(const DescribeDcdnDdosServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDdosServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDdosServiceOutcome(DescribeDcdnDdosServiceResult(outcome.result()));
	else
		return DescribeDcdnDdosServiceOutcome(outcome.error());
}

void DcdnClient::describeDcdnDdosServiceAsync(const DescribeDcdnDdosServiceRequest& request, const DescribeDcdnDdosServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDdosService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDdosServiceOutcomeCallable DcdnClient::describeDcdnDdosServiceCallable(const DescribeDcdnDdosServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDdosServiceOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDdosService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnDdosSpecInfoOutcome DcdnClient::describeDcdnDdosSpecInfo(const DescribeDcdnDdosSpecInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDdosSpecInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDdosSpecInfoOutcome(DescribeDcdnDdosSpecInfoResult(outcome.result()));
	else
		return DescribeDcdnDdosSpecInfoOutcome(outcome.error());
}

void DcdnClient::describeDcdnDdosSpecInfoAsync(const DescribeDcdnDdosSpecInfoRequest& request, const DescribeDcdnDdosSpecInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDdosSpecInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDdosSpecInfoOutcomeCallable DcdnClient::describeDcdnDdosSpecInfoCallable(const DescribeDcdnDdosSpecInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDdosSpecInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDdosSpecInfo(request);
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

DcdnClient::DescribeDcdnDomainBpsDataByLayerOutcome DcdnClient::describeDcdnDomainBpsDataByLayer(const DescribeDcdnDomainBpsDataByLayerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainBpsDataByLayerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainBpsDataByLayerOutcome(DescribeDcdnDomainBpsDataByLayerResult(outcome.result()));
	else
		return DescribeDcdnDomainBpsDataByLayerOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainBpsDataByLayerAsync(const DescribeDcdnDomainBpsDataByLayerRequest& request, const DescribeDcdnDomainBpsDataByLayerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainBpsDataByLayer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainBpsDataByLayerOutcomeCallable DcdnClient::describeDcdnDomainBpsDataByLayerCallable(const DescribeDcdnDomainBpsDataByLayerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainBpsDataByLayerOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainBpsDataByLayer(request);
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

DcdnClient::DescribeDcdnDomainHttpCodeDataByLayerOutcome DcdnClient::describeDcdnDomainHttpCodeDataByLayer(const DescribeDcdnDomainHttpCodeDataByLayerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainHttpCodeDataByLayerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainHttpCodeDataByLayerOutcome(DescribeDcdnDomainHttpCodeDataByLayerResult(outcome.result()));
	else
		return DescribeDcdnDomainHttpCodeDataByLayerOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainHttpCodeDataByLayerAsync(const DescribeDcdnDomainHttpCodeDataByLayerRequest& request, const DescribeDcdnDomainHttpCodeDataByLayerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainHttpCodeDataByLayer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainHttpCodeDataByLayerOutcomeCallable DcdnClient::describeDcdnDomainHttpCodeDataByLayerCallable(const DescribeDcdnDomainHttpCodeDataByLayerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainHttpCodeDataByLayerOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainHttpCodeDataByLayer(request);
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

DcdnClient::DescribeDcdnDomainIpaConnDataOutcome DcdnClient::describeDcdnDomainIpaConnData(const DescribeDcdnDomainIpaConnDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainIpaConnDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainIpaConnDataOutcome(DescribeDcdnDomainIpaConnDataResult(outcome.result()));
	else
		return DescribeDcdnDomainIpaConnDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainIpaConnDataAsync(const DescribeDcdnDomainIpaConnDataRequest& request, const DescribeDcdnDomainIpaConnDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainIpaConnData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainIpaConnDataOutcomeCallable DcdnClient::describeDcdnDomainIpaConnDataCallable(const DescribeDcdnDomainIpaConnDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainIpaConnDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainIpaConnData(request);
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

DcdnClient::DescribeDcdnDomainLogExTtlOutcome DcdnClient::describeDcdnDomainLogExTtl(const DescribeDcdnDomainLogExTtlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainLogExTtlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainLogExTtlOutcome(DescribeDcdnDomainLogExTtlResult(outcome.result()));
	else
		return DescribeDcdnDomainLogExTtlOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainLogExTtlAsync(const DescribeDcdnDomainLogExTtlRequest& request, const DescribeDcdnDomainLogExTtlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainLogExTtl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainLogExTtlOutcomeCallable DcdnClient::describeDcdnDomainLogExTtlCallable(const DescribeDcdnDomainLogExTtlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainLogExTtlOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainLogExTtl(request);
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

DcdnClient::DescribeDcdnDomainQpsDataByLayerOutcome DcdnClient::describeDcdnDomainQpsDataByLayer(const DescribeDcdnDomainQpsDataByLayerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainQpsDataByLayerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainQpsDataByLayerOutcome(DescribeDcdnDomainQpsDataByLayerResult(outcome.result()));
	else
		return DescribeDcdnDomainQpsDataByLayerOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainQpsDataByLayerAsync(const DescribeDcdnDomainQpsDataByLayerRequest& request, const DescribeDcdnDomainQpsDataByLayerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainQpsDataByLayer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainQpsDataByLayerOutcomeCallable DcdnClient::describeDcdnDomainQpsDataByLayerCallable(const DescribeDcdnDomainQpsDataByLayerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainQpsDataByLayerOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainQpsDataByLayer(request);
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

DcdnClient::DescribeDcdnDomainsBySourceOutcome DcdnClient::describeDcdnDomainsBySource(const DescribeDcdnDomainsBySourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnDomainsBySourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnDomainsBySourceOutcome(DescribeDcdnDomainsBySourceResult(outcome.result()));
	else
		return DescribeDcdnDomainsBySourceOutcome(outcome.error());
}

void DcdnClient::describeDcdnDomainsBySourceAsync(const DescribeDcdnDomainsBySourceRequest& request, const DescribeDcdnDomainsBySourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnDomainsBySource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnDomainsBySourceOutcomeCallable DcdnClient::describeDcdnDomainsBySourceCallable(const DescribeDcdnDomainsBySourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnDomainsBySourceOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnDomainsBySource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnErUsageDataOutcome DcdnClient::describeDcdnErUsageData(const DescribeDcdnErUsageDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnErUsageDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnErUsageDataOutcome(DescribeDcdnErUsageDataResult(outcome.result()));
	else
		return DescribeDcdnErUsageDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnErUsageDataAsync(const DescribeDcdnErUsageDataRequest& request, const DescribeDcdnErUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnErUsageData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnErUsageDataOutcomeCallable DcdnClient::describeDcdnErUsageDataCallable(const DescribeDcdnErUsageDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnErUsageDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnErUsageData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnFullDomainsBlockIPConfigOutcome DcdnClient::describeDcdnFullDomainsBlockIPConfig(const DescribeDcdnFullDomainsBlockIPConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnFullDomainsBlockIPConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnFullDomainsBlockIPConfigOutcome(DescribeDcdnFullDomainsBlockIPConfigResult(outcome.result()));
	else
		return DescribeDcdnFullDomainsBlockIPConfigOutcome(outcome.error());
}

void DcdnClient::describeDcdnFullDomainsBlockIPConfigAsync(const DescribeDcdnFullDomainsBlockIPConfigRequest& request, const DescribeDcdnFullDomainsBlockIPConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnFullDomainsBlockIPConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnFullDomainsBlockIPConfigOutcomeCallable DcdnClient::describeDcdnFullDomainsBlockIPConfigCallable(const DescribeDcdnFullDomainsBlockIPConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnFullDomainsBlockIPConfigOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnFullDomainsBlockIPConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnFullDomainsBlockIPHistoryOutcome DcdnClient::describeDcdnFullDomainsBlockIPHistory(const DescribeDcdnFullDomainsBlockIPHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnFullDomainsBlockIPHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnFullDomainsBlockIPHistoryOutcome(DescribeDcdnFullDomainsBlockIPHistoryResult(outcome.result()));
	else
		return DescribeDcdnFullDomainsBlockIPHistoryOutcome(outcome.error());
}

void DcdnClient::describeDcdnFullDomainsBlockIPHistoryAsync(const DescribeDcdnFullDomainsBlockIPHistoryRequest& request, const DescribeDcdnFullDomainsBlockIPHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnFullDomainsBlockIPHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnFullDomainsBlockIPHistoryOutcomeCallable DcdnClient::describeDcdnFullDomainsBlockIPHistoryCallable(const DescribeDcdnFullDomainsBlockIPHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnFullDomainsBlockIPHistoryOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnFullDomainsBlockIPHistory(request);
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

DcdnClient::DescribeDcdnIpaDomainCidrOutcome DcdnClient::describeDcdnIpaDomainCidr(const DescribeDcdnIpaDomainCidrRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnIpaDomainCidrOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnIpaDomainCidrOutcome(DescribeDcdnIpaDomainCidrResult(outcome.result()));
	else
		return DescribeDcdnIpaDomainCidrOutcome(outcome.error());
}

void DcdnClient::describeDcdnIpaDomainCidrAsync(const DescribeDcdnIpaDomainCidrRequest& request, const DescribeDcdnIpaDomainCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnIpaDomainCidr(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnIpaDomainCidrOutcomeCallable DcdnClient::describeDcdnIpaDomainCidrCallable(const DescribeDcdnIpaDomainCidrRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnIpaDomainCidrOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnIpaDomainCidr(request);
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

DcdnClient::DescribeDcdnKvAccountOutcome DcdnClient::describeDcdnKvAccount(const DescribeDcdnKvAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnKvAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnKvAccountOutcome(DescribeDcdnKvAccountResult(outcome.result()));
	else
		return DescribeDcdnKvAccountOutcome(outcome.error());
}

void DcdnClient::describeDcdnKvAccountAsync(const DescribeDcdnKvAccountRequest& request, const DescribeDcdnKvAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnKvAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnKvAccountOutcomeCallable DcdnClient::describeDcdnKvAccountCallable(const DescribeDcdnKvAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnKvAccountOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnKvAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnKvAccountStatusOutcome DcdnClient::describeDcdnKvAccountStatus(const DescribeDcdnKvAccountStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnKvAccountStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnKvAccountStatusOutcome(DescribeDcdnKvAccountStatusResult(outcome.result()));
	else
		return DescribeDcdnKvAccountStatusOutcome(outcome.error());
}

void DcdnClient::describeDcdnKvAccountStatusAsync(const DescribeDcdnKvAccountStatusRequest& request, const DescribeDcdnKvAccountStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnKvAccountStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnKvAccountStatusOutcomeCallable DcdnClient::describeDcdnKvAccountStatusCallable(const DescribeDcdnKvAccountStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnKvAccountStatusOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnKvAccountStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnKvNamespaceOutcome DcdnClient::describeDcdnKvNamespace(const DescribeDcdnKvNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnKvNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnKvNamespaceOutcome(DescribeDcdnKvNamespaceResult(outcome.result()));
	else
		return DescribeDcdnKvNamespaceOutcome(outcome.error());
}

void DcdnClient::describeDcdnKvNamespaceAsync(const DescribeDcdnKvNamespaceRequest& request, const DescribeDcdnKvNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnKvNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnKvNamespaceOutcomeCallable DcdnClient::describeDcdnKvNamespaceCallable(const DescribeDcdnKvNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnKvNamespaceOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnKvNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnL2IpsOutcome DcdnClient::describeDcdnL2Ips(const DescribeDcdnL2IpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnL2IpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnL2IpsOutcome(DescribeDcdnL2IpsResult(outcome.result()));
	else
		return DescribeDcdnL2IpsOutcome(outcome.error());
}

void DcdnClient::describeDcdnL2IpsAsync(const DescribeDcdnL2IpsRequest& request, const DescribeDcdnL2IpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnL2Ips(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnL2IpsOutcomeCallable DcdnClient::describeDcdnL2IpsCallable(const DescribeDcdnL2IpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnL2IpsOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnL2Ips(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnL2VipsOutcome DcdnClient::describeDcdnL2Vips(const DescribeDcdnL2VipsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnL2VipsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnL2VipsOutcome(DescribeDcdnL2VipsResult(outcome.result()));
	else
		return DescribeDcdnL2VipsOutcome(outcome.error());
}

void DcdnClient::describeDcdnL2VipsAsync(const DescribeDcdnL2VipsRequest& request, const DescribeDcdnL2VipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnL2Vips(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnL2VipsOutcomeCallable DcdnClient::describeDcdnL2VipsCallable(const DescribeDcdnL2VipsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnL2VipsOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnL2Vips(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnOriginSiteHealthStatusOutcome DcdnClient::describeDcdnOriginSiteHealthStatus(const DescribeDcdnOriginSiteHealthStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnOriginSiteHealthStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnOriginSiteHealthStatusOutcome(DescribeDcdnOriginSiteHealthStatusResult(outcome.result()));
	else
		return DescribeDcdnOriginSiteHealthStatusOutcome(outcome.error());
}

void DcdnClient::describeDcdnOriginSiteHealthStatusAsync(const DescribeDcdnOriginSiteHealthStatusRequest& request, const DescribeDcdnOriginSiteHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnOriginSiteHealthStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnOriginSiteHealthStatusOutcomeCallable DcdnClient::describeDcdnOriginSiteHealthStatusCallable(const DescribeDcdnOriginSiteHealthStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnOriginSiteHealthStatusOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnOriginSiteHealthStatus(request);
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

DcdnClient::DescribeDcdnSLSRealTimeLogTypeOutcome DcdnClient::describeDcdnSLSRealTimeLogType(const DescribeDcdnSLSRealTimeLogTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnSLSRealTimeLogTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnSLSRealTimeLogTypeOutcome(DescribeDcdnSLSRealTimeLogTypeResult(outcome.result()));
	else
		return DescribeDcdnSLSRealTimeLogTypeOutcome(outcome.error());
}

void DcdnClient::describeDcdnSLSRealTimeLogTypeAsync(const DescribeDcdnSLSRealTimeLogTypeRequest& request, const DescribeDcdnSLSRealTimeLogTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnSLSRealTimeLogType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnSLSRealTimeLogTypeOutcomeCallable DcdnClient::describeDcdnSLSRealTimeLogTypeCallable(const DescribeDcdnSLSRealTimeLogTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnSLSRealTimeLogTypeOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnSLSRealTimeLogType(request);
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

DcdnClient::DescribeDcdnSSLCertificateListOutcome DcdnClient::describeDcdnSSLCertificateList(const DescribeDcdnSSLCertificateListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnSSLCertificateListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnSSLCertificateListOutcome(DescribeDcdnSSLCertificateListResult(outcome.result()));
	else
		return DescribeDcdnSSLCertificateListOutcome(outcome.error());
}

void DcdnClient::describeDcdnSSLCertificateListAsync(const DescribeDcdnSSLCertificateListRequest& request, const DescribeDcdnSSLCertificateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnSSLCertificateList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnSSLCertificateListOutcomeCallable DcdnClient::describeDcdnSSLCertificateListCallable(const DescribeDcdnSSLCertificateListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnSSLCertificateListOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnSSLCertificateList(request);
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

DcdnClient::DescribeDcdnUserCertificateExpireCountOutcome DcdnClient::describeDcdnUserCertificateExpireCount(const DescribeDcdnUserCertificateExpireCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnUserCertificateExpireCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnUserCertificateExpireCountOutcome(DescribeDcdnUserCertificateExpireCountResult(outcome.result()));
	else
		return DescribeDcdnUserCertificateExpireCountOutcome(outcome.error());
}

void DcdnClient::describeDcdnUserCertificateExpireCountAsync(const DescribeDcdnUserCertificateExpireCountRequest& request, const DescribeDcdnUserCertificateExpireCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnUserCertificateExpireCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnUserCertificateExpireCountOutcomeCallable DcdnClient::describeDcdnUserCertificateExpireCountCallable(const DescribeDcdnUserCertificateExpireCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnUserCertificateExpireCountOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnUserCertificateExpireCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnUserConfigsOutcome DcdnClient::describeDcdnUserConfigs(const DescribeDcdnUserConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnUserConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnUserConfigsOutcome(DescribeDcdnUserConfigsResult(outcome.result()));
	else
		return DescribeDcdnUserConfigsOutcome(outcome.error());
}

void DcdnClient::describeDcdnUserConfigsAsync(const DescribeDcdnUserConfigsRequest& request, const DescribeDcdnUserConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnUserConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnUserConfigsOutcomeCallable DcdnClient::describeDcdnUserConfigsCallable(const DescribeDcdnUserConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnUserConfigsOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnUserConfigs(request);
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

DcdnClient::DescribeDcdnUserVipsByDomainOutcome DcdnClient::describeDcdnUserVipsByDomain(const DescribeDcdnUserVipsByDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnUserVipsByDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnUserVipsByDomainOutcome(DescribeDcdnUserVipsByDomainResult(outcome.result()));
	else
		return DescribeDcdnUserVipsByDomainOutcome(outcome.error());
}

void DcdnClient::describeDcdnUserVipsByDomainAsync(const DescribeDcdnUserVipsByDomainRequest& request, const DescribeDcdnUserVipsByDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnUserVipsByDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnUserVipsByDomainOutcomeCallable DcdnClient::describeDcdnUserVipsByDomainCallable(const DescribeDcdnUserVipsByDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnUserVipsByDomainOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnUserVipsByDomain(request);
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

DcdnClient::DescribeDcdnWafBotAppKeyOutcome DcdnClient::describeDcdnWafBotAppKey(const DescribeDcdnWafBotAppKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnWafBotAppKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnWafBotAppKeyOutcome(DescribeDcdnWafBotAppKeyResult(outcome.result()));
	else
		return DescribeDcdnWafBotAppKeyOutcome(outcome.error());
}

void DcdnClient::describeDcdnWafBotAppKeyAsync(const DescribeDcdnWafBotAppKeyRequest& request, const DescribeDcdnWafBotAppKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnWafBotAppKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnWafBotAppKeyOutcomeCallable DcdnClient::describeDcdnWafBotAppKeyCallable(const DescribeDcdnWafBotAppKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnWafBotAppKeyOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnWafBotAppKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnWafDefaultRulesOutcome DcdnClient::describeDcdnWafDefaultRules(const DescribeDcdnWafDefaultRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnWafDefaultRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnWafDefaultRulesOutcome(DescribeDcdnWafDefaultRulesResult(outcome.result()));
	else
		return DescribeDcdnWafDefaultRulesOutcome(outcome.error());
}

void DcdnClient::describeDcdnWafDefaultRulesAsync(const DescribeDcdnWafDefaultRulesRequest& request, const DescribeDcdnWafDefaultRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnWafDefaultRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnWafDefaultRulesOutcomeCallable DcdnClient::describeDcdnWafDefaultRulesCallable(const DescribeDcdnWafDefaultRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnWafDefaultRulesOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnWafDefaultRules(request);
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

DcdnClient::DescribeDcdnWafDomainDetailOutcome DcdnClient::describeDcdnWafDomainDetail(const DescribeDcdnWafDomainDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnWafDomainDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnWafDomainDetailOutcome(DescribeDcdnWafDomainDetailResult(outcome.result()));
	else
		return DescribeDcdnWafDomainDetailOutcome(outcome.error());
}

void DcdnClient::describeDcdnWafDomainDetailAsync(const DescribeDcdnWafDomainDetailRequest& request, const DescribeDcdnWafDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnWafDomainDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnWafDomainDetailOutcomeCallable DcdnClient::describeDcdnWafDomainDetailCallable(const DescribeDcdnWafDomainDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnWafDomainDetailOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnWafDomainDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnWafDomainsOutcome DcdnClient::describeDcdnWafDomains(const DescribeDcdnWafDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnWafDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnWafDomainsOutcome(DescribeDcdnWafDomainsResult(outcome.result()));
	else
		return DescribeDcdnWafDomainsOutcome(outcome.error());
}

void DcdnClient::describeDcdnWafDomainsAsync(const DescribeDcdnWafDomainsRequest& request, const DescribeDcdnWafDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnWafDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnWafDomainsOutcomeCallable DcdnClient::describeDcdnWafDomainsCallable(const DescribeDcdnWafDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnWafDomainsOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnWafDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnWafFilterInfoOutcome DcdnClient::describeDcdnWafFilterInfo(const DescribeDcdnWafFilterInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnWafFilterInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnWafFilterInfoOutcome(DescribeDcdnWafFilterInfoResult(outcome.result()));
	else
		return DescribeDcdnWafFilterInfoOutcome(outcome.error());
}

void DcdnClient::describeDcdnWafFilterInfoAsync(const DescribeDcdnWafFilterInfoRequest& request, const DescribeDcdnWafFilterInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnWafFilterInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnWafFilterInfoOutcomeCallable DcdnClient::describeDcdnWafFilterInfoCallable(const DescribeDcdnWafFilterInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnWafFilterInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnWafFilterInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnWafGeoInfoOutcome DcdnClient::describeDcdnWafGeoInfo(const DescribeDcdnWafGeoInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnWafGeoInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnWafGeoInfoOutcome(DescribeDcdnWafGeoInfoResult(outcome.result()));
	else
		return DescribeDcdnWafGeoInfoOutcome(outcome.error());
}

void DcdnClient::describeDcdnWafGeoInfoAsync(const DescribeDcdnWafGeoInfoRequest& request, const DescribeDcdnWafGeoInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnWafGeoInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnWafGeoInfoOutcomeCallable DcdnClient::describeDcdnWafGeoInfoCallable(const DescribeDcdnWafGeoInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnWafGeoInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnWafGeoInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnWafGroupOutcome DcdnClient::describeDcdnWafGroup(const DescribeDcdnWafGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnWafGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnWafGroupOutcome(DescribeDcdnWafGroupResult(outcome.result()));
	else
		return DescribeDcdnWafGroupOutcome(outcome.error());
}

void DcdnClient::describeDcdnWafGroupAsync(const DescribeDcdnWafGroupRequest& request, const DescribeDcdnWafGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnWafGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnWafGroupOutcomeCallable DcdnClient::describeDcdnWafGroupCallable(const DescribeDcdnWafGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnWafGroupOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnWafGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnWafGroupsOutcome DcdnClient::describeDcdnWafGroups(const DescribeDcdnWafGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnWafGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnWafGroupsOutcome(DescribeDcdnWafGroupsResult(outcome.result()));
	else
		return DescribeDcdnWafGroupsOutcome(outcome.error());
}

void DcdnClient::describeDcdnWafGroupsAsync(const DescribeDcdnWafGroupsRequest& request, const DescribeDcdnWafGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnWafGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnWafGroupsOutcomeCallable DcdnClient::describeDcdnWafGroupsCallable(const DescribeDcdnWafGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnWafGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnWafGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnWafLogsOutcome DcdnClient::describeDcdnWafLogs(const DescribeDcdnWafLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnWafLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnWafLogsOutcome(DescribeDcdnWafLogsResult(outcome.result()));
	else
		return DescribeDcdnWafLogsOutcome(outcome.error());
}

void DcdnClient::describeDcdnWafLogsAsync(const DescribeDcdnWafLogsRequest& request, const DescribeDcdnWafLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnWafLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnWafLogsOutcomeCallable DcdnClient::describeDcdnWafLogsCallable(const DescribeDcdnWafLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnWafLogsOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnWafLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnWafPoliciesOutcome DcdnClient::describeDcdnWafPolicies(const DescribeDcdnWafPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnWafPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnWafPoliciesOutcome(DescribeDcdnWafPoliciesResult(outcome.result()));
	else
		return DescribeDcdnWafPoliciesOutcome(outcome.error());
}

void DcdnClient::describeDcdnWafPoliciesAsync(const DescribeDcdnWafPoliciesRequest& request, const DescribeDcdnWafPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnWafPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnWafPoliciesOutcomeCallable DcdnClient::describeDcdnWafPoliciesCallable(const DescribeDcdnWafPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnWafPoliciesOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnWafPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnWafPolicyOutcome DcdnClient::describeDcdnWafPolicy(const DescribeDcdnWafPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnWafPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnWafPolicyOutcome(DescribeDcdnWafPolicyResult(outcome.result()));
	else
		return DescribeDcdnWafPolicyOutcome(outcome.error());
}

void DcdnClient::describeDcdnWafPolicyAsync(const DescribeDcdnWafPolicyRequest& request, const DescribeDcdnWafPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnWafPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnWafPolicyOutcomeCallable DcdnClient::describeDcdnWafPolicyCallable(const DescribeDcdnWafPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnWafPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnWafPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnWafPolicyDomainsOutcome DcdnClient::describeDcdnWafPolicyDomains(const DescribeDcdnWafPolicyDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnWafPolicyDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnWafPolicyDomainsOutcome(DescribeDcdnWafPolicyDomainsResult(outcome.result()));
	else
		return DescribeDcdnWafPolicyDomainsOutcome(outcome.error());
}

void DcdnClient::describeDcdnWafPolicyDomainsAsync(const DescribeDcdnWafPolicyDomainsRequest& request, const DescribeDcdnWafPolicyDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnWafPolicyDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnWafPolicyDomainsOutcomeCallable DcdnClient::describeDcdnWafPolicyDomainsCallable(const DescribeDcdnWafPolicyDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnWafPolicyDomainsOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnWafPolicyDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnWafPolicyValidDomainsOutcome DcdnClient::describeDcdnWafPolicyValidDomains(const DescribeDcdnWafPolicyValidDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnWafPolicyValidDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnWafPolicyValidDomainsOutcome(DescribeDcdnWafPolicyValidDomainsResult(outcome.result()));
	else
		return DescribeDcdnWafPolicyValidDomainsOutcome(outcome.error());
}

void DcdnClient::describeDcdnWafPolicyValidDomainsAsync(const DescribeDcdnWafPolicyValidDomainsRequest& request, const DescribeDcdnWafPolicyValidDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnWafPolicyValidDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnWafPolicyValidDomainsOutcomeCallable DcdnClient::describeDcdnWafPolicyValidDomainsCallable(const DescribeDcdnWafPolicyValidDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnWafPolicyValidDomainsOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnWafPolicyValidDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnWafRuleOutcome DcdnClient::describeDcdnWafRule(const DescribeDcdnWafRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnWafRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnWafRuleOutcome(DescribeDcdnWafRuleResult(outcome.result()));
	else
		return DescribeDcdnWafRuleOutcome(outcome.error());
}

void DcdnClient::describeDcdnWafRuleAsync(const DescribeDcdnWafRuleRequest& request, const DescribeDcdnWafRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnWafRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnWafRuleOutcomeCallable DcdnClient::describeDcdnWafRuleCallable(const DescribeDcdnWafRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnWafRuleOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnWafRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnWafRulesOutcome DcdnClient::describeDcdnWafRules(const DescribeDcdnWafRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnWafRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnWafRulesOutcome(DescribeDcdnWafRulesResult(outcome.result()));
	else
		return DescribeDcdnWafRulesOutcome(outcome.error());
}

void DcdnClient::describeDcdnWafRulesAsync(const DescribeDcdnWafRulesRequest& request, const DescribeDcdnWafRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnWafRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnWafRulesOutcomeCallable DcdnClient::describeDcdnWafRulesCallable(const DescribeDcdnWafRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnWafRulesOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnWafRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnWafScenesOutcome DcdnClient::describeDcdnWafScenes(const DescribeDcdnWafScenesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnWafScenesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnWafScenesOutcome(DescribeDcdnWafScenesResult(outcome.result()));
	else
		return DescribeDcdnWafScenesOutcome(outcome.error());
}

void DcdnClient::describeDcdnWafScenesAsync(const DescribeDcdnWafScenesRequest& request, const DescribeDcdnWafScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnWafScenes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnWafScenesOutcomeCallable DcdnClient::describeDcdnWafScenesCallable(const DescribeDcdnWafScenesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnWafScenesOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnWafScenes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnWafServiceOutcome DcdnClient::describeDcdnWafService(const DescribeDcdnWafServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnWafServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnWafServiceOutcome(DescribeDcdnWafServiceResult(outcome.result()));
	else
		return DescribeDcdnWafServiceOutcome(outcome.error());
}

void DcdnClient::describeDcdnWafServiceAsync(const DescribeDcdnWafServiceRequest& request, const DescribeDcdnWafServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnWafService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnWafServiceOutcomeCallable DcdnClient::describeDcdnWafServiceCallable(const DescribeDcdnWafServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnWafServiceOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnWafService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnWafSpecInfoOutcome DcdnClient::describeDcdnWafSpecInfo(const DescribeDcdnWafSpecInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnWafSpecInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnWafSpecInfoOutcome(DescribeDcdnWafSpecInfoResult(outcome.result()));
	else
		return DescribeDcdnWafSpecInfoOutcome(outcome.error());
}

void DcdnClient::describeDcdnWafSpecInfoAsync(const DescribeDcdnWafSpecInfoRequest& request, const DescribeDcdnWafSpecInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnWafSpecInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnWafSpecInfoOutcomeCallable DcdnClient::describeDcdnWafSpecInfoCallable(const DescribeDcdnWafSpecInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnWafSpecInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnWafSpecInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeDcdnWafUsageDataOutcome DcdnClient::describeDcdnWafUsageData(const DescribeDcdnWafUsageDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDcdnWafUsageDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDcdnWafUsageDataOutcome(DescribeDcdnWafUsageDataResult(outcome.result()));
	else
		return DescribeDcdnWafUsageDataOutcome(outcome.error());
}

void DcdnClient::describeDcdnWafUsageDataAsync(const DescribeDcdnWafUsageDataRequest& request, const DescribeDcdnWafUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDcdnWafUsageData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDcdnWafUsageDataOutcomeCallable DcdnClient::describeDcdnWafUsageDataCallable(const DescribeDcdnWafUsageDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDcdnWafUsageDataOutcome()>>(
			[this, request]()
			{
			return this->describeDcdnWafUsageData(request);
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

DcdnClient::DescribeDdosAllEventListOutcome DcdnClient::describeDdosAllEventList(const DescribeDdosAllEventListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDdosAllEventListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDdosAllEventListOutcome(DescribeDdosAllEventListResult(outcome.result()));
	else
		return DescribeDdosAllEventListOutcome(outcome.error());
}

void DcdnClient::describeDdosAllEventListAsync(const DescribeDdosAllEventListRequest& request, const DescribeDdosAllEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDdosAllEventList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeDdosAllEventListOutcomeCallable DcdnClient::describeDdosAllEventListCallable(const DescribeDdosAllEventListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDdosAllEventListOutcome()>>(
			[this, request]()
			{
			return this->describeDdosAllEventList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeEncryptRoutineUidOutcome DcdnClient::describeEncryptRoutineUid(const DescribeEncryptRoutineUidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEncryptRoutineUidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEncryptRoutineUidOutcome(DescribeEncryptRoutineUidResult(outcome.result()));
	else
		return DescribeEncryptRoutineUidOutcome(outcome.error());
}

void DcdnClient::describeEncryptRoutineUidAsync(const DescribeEncryptRoutineUidRequest& request, const DescribeEncryptRoutineUidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEncryptRoutineUid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeEncryptRoutineUidOutcomeCallable DcdnClient::describeEncryptRoutineUidCallable(const DescribeEncryptRoutineUidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEncryptRoutineUidOutcome()>>(
			[this, request]()
			{
			return this->describeEncryptRoutineUid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeHighlightInfoOutcome DcdnClient::describeHighlightInfo(const DescribeHighlightInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHighlightInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHighlightInfoOutcome(DescribeHighlightInfoResult(outcome.result()));
	else
		return DescribeHighlightInfoOutcome(outcome.error());
}

void DcdnClient::describeHighlightInfoAsync(const DescribeHighlightInfoRequest& request, const DescribeHighlightInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHighlightInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeHighlightInfoOutcomeCallable DcdnClient::describeHighlightInfoCallable(const DescribeHighlightInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHighlightInfoOutcome()>>(
			[this, request]()
			{
			return this->describeHighlightInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeKvUsageDataOutcome DcdnClient::describeKvUsageData(const DescribeKvUsageDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeKvUsageDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeKvUsageDataOutcome(DescribeKvUsageDataResult(outcome.result()));
	else
		return DescribeKvUsageDataOutcome(outcome.error());
}

void DcdnClient::describeKvUsageDataAsync(const DescribeKvUsageDataRequest& request, const DescribeKvUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeKvUsageData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeKvUsageDataOutcomeCallable DcdnClient::describeKvUsageDataCallable(const DescribeKvUsageDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeKvUsageDataOutcome()>>(
			[this, request]()
			{
			return this->describeKvUsageData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeRDDomainConfigOutcome DcdnClient::describeRDDomainConfig(const DescribeRDDomainConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRDDomainConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRDDomainConfigOutcome(DescribeRDDomainConfigResult(outcome.result()));
	else
		return DescribeRDDomainConfigOutcome(outcome.error());
}

void DcdnClient::describeRDDomainConfigAsync(const DescribeRDDomainConfigRequest& request, const DescribeRDDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRDDomainConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeRDDomainConfigOutcomeCallable DcdnClient::describeRDDomainConfigCallable(const DescribeRDDomainConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRDDomainConfigOutcome()>>(
			[this, request]()
			{
			return this->describeRDDomainConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::DescribeRDDomainsOutcome DcdnClient::describeRDDomains(const DescribeRDDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRDDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRDDomainsOutcome(DescribeRDDomainsResult(outcome.result()));
	else
		return DescribeRDDomainsOutcome(outcome.error());
}

void DcdnClient::describeRDDomainsAsync(const DescribeRDDomainsRequest& request, const DescribeRDDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRDDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeRDDomainsOutcomeCallable DcdnClient::describeRDDomainsCallable(const DescribeRDDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRDDomainsOutcome()>>(
			[this, request]()
			{
			return this->describeRDDomains(request);
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

DcdnClient::DescribeRoutineRelatedDomainsOutcome DcdnClient::describeRoutineRelatedDomains(const DescribeRoutineRelatedDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRoutineRelatedDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRoutineRelatedDomainsOutcome(DescribeRoutineRelatedDomainsResult(outcome.result()));
	else
		return DescribeRoutineRelatedDomainsOutcome(outcome.error());
}

void DcdnClient::describeRoutineRelatedDomainsAsync(const DescribeRoutineRelatedDomainsRequest& request, const DescribeRoutineRelatedDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRoutineRelatedDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::DescribeRoutineRelatedDomainsOutcomeCallable DcdnClient::describeRoutineRelatedDomainsCallable(const DescribeRoutineRelatedDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRoutineRelatedDomainsOutcome()>>(
			[this, request]()
			{
			return this->describeRoutineRelatedDomains(request);
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

DcdnClient::GetDcdnKvOutcome DcdnClient::getDcdnKv(const GetDcdnKvRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDcdnKvOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDcdnKvOutcome(GetDcdnKvResult(outcome.result()));
	else
		return GetDcdnKvOutcome(outcome.error());
}

void DcdnClient::getDcdnKvAsync(const GetDcdnKvRequest& request, const GetDcdnKvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDcdnKv(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::GetDcdnKvOutcomeCallable DcdnClient::getDcdnKvCallable(const GetDcdnKvRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDcdnKvOutcome()>>(
			[this, request]()
			{
			return this->getDcdnKv(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::GetDcdnKvStatusOutcome DcdnClient::getDcdnKvStatus(const GetDcdnKvStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDcdnKvStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDcdnKvStatusOutcome(GetDcdnKvStatusResult(outcome.result()));
	else
		return GetDcdnKvStatusOutcome(outcome.error());
}

void DcdnClient::getDcdnKvStatusAsync(const GetDcdnKvStatusRequest& request, const GetDcdnKvStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDcdnKvStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::GetDcdnKvStatusOutcomeCallable DcdnClient::getDcdnKvStatusCallable(const GetDcdnKvStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDcdnKvStatusOutcome()>>(
			[this, request]()
			{
			return this->getDcdnKvStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::ListDcdnKvOutcome DcdnClient::listDcdnKv(const ListDcdnKvRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDcdnKvOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDcdnKvOutcome(ListDcdnKvResult(outcome.result()));
	else
		return ListDcdnKvOutcome(outcome.error());
}

void DcdnClient::listDcdnKvAsync(const ListDcdnKvRequest& request, const ListDcdnKvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDcdnKv(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::ListDcdnKvOutcomeCallable DcdnClient::listDcdnKvCallable(const ListDcdnKvRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDcdnKvOutcome()>>(
			[this, request]()
			{
			return this->listDcdnKv(request);
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

DcdnClient::ModifyDcdnWafGroupOutcome DcdnClient::modifyDcdnWafGroup(const ModifyDcdnWafGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDcdnWafGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDcdnWafGroupOutcome(ModifyDcdnWafGroupResult(outcome.result()));
	else
		return ModifyDcdnWafGroupOutcome(outcome.error());
}

void DcdnClient::modifyDcdnWafGroupAsync(const ModifyDcdnWafGroupRequest& request, const ModifyDcdnWafGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDcdnWafGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::ModifyDcdnWafGroupOutcomeCallable DcdnClient::modifyDcdnWafGroupCallable(const ModifyDcdnWafGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDcdnWafGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyDcdnWafGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::ModifyDcdnWafPolicyOutcome DcdnClient::modifyDcdnWafPolicy(const ModifyDcdnWafPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDcdnWafPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDcdnWafPolicyOutcome(ModifyDcdnWafPolicyResult(outcome.result()));
	else
		return ModifyDcdnWafPolicyOutcome(outcome.error());
}

void DcdnClient::modifyDcdnWafPolicyAsync(const ModifyDcdnWafPolicyRequest& request, const ModifyDcdnWafPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDcdnWafPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::ModifyDcdnWafPolicyOutcomeCallable DcdnClient::modifyDcdnWafPolicyCallable(const ModifyDcdnWafPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDcdnWafPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyDcdnWafPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::ModifyDcdnWafPolicyDomainsOutcome DcdnClient::modifyDcdnWafPolicyDomains(const ModifyDcdnWafPolicyDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDcdnWafPolicyDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDcdnWafPolicyDomainsOutcome(ModifyDcdnWafPolicyDomainsResult(outcome.result()));
	else
		return ModifyDcdnWafPolicyDomainsOutcome(outcome.error());
}

void DcdnClient::modifyDcdnWafPolicyDomainsAsync(const ModifyDcdnWafPolicyDomainsRequest& request, const ModifyDcdnWafPolicyDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDcdnWafPolicyDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::ModifyDcdnWafPolicyDomainsOutcomeCallable DcdnClient::modifyDcdnWafPolicyDomainsCallable(const ModifyDcdnWafPolicyDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDcdnWafPolicyDomainsOutcome()>>(
			[this, request]()
			{
			return this->modifyDcdnWafPolicyDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::ModifyDcdnWafRuleOutcome DcdnClient::modifyDcdnWafRule(const ModifyDcdnWafRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDcdnWafRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDcdnWafRuleOutcome(ModifyDcdnWafRuleResult(outcome.result()));
	else
		return ModifyDcdnWafRuleOutcome(outcome.error());
}

void DcdnClient::modifyDcdnWafRuleAsync(const ModifyDcdnWafRuleRequest& request, const ModifyDcdnWafRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDcdnWafRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::ModifyDcdnWafRuleOutcomeCallable DcdnClient::modifyDcdnWafRuleCallable(const ModifyDcdnWafRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDcdnWafRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyDcdnWafRule(request);
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

DcdnClient::PutDcdnKvOutcome DcdnClient::putDcdnKv(const PutDcdnKvRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutDcdnKvOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutDcdnKvOutcome(PutDcdnKvResult(outcome.result()));
	else
		return PutDcdnKvOutcome(outcome.error());
}

void DcdnClient::putDcdnKvAsync(const PutDcdnKvRequest& request, const PutDcdnKvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putDcdnKv(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::PutDcdnKvOutcomeCallable DcdnClient::putDcdnKvCallable(const PutDcdnKvRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutDcdnKvOutcome()>>(
			[this, request]()
			{
			return this->putDcdnKv(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::PutDcdnKvNamespaceOutcome DcdnClient::putDcdnKvNamespace(const PutDcdnKvNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutDcdnKvNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutDcdnKvNamespaceOutcome(PutDcdnKvNamespaceResult(outcome.result()));
	else
		return PutDcdnKvNamespaceOutcome(outcome.error());
}

void DcdnClient::putDcdnKvNamespaceAsync(const PutDcdnKvNamespaceRequest& request, const PutDcdnKvNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putDcdnKvNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::PutDcdnKvNamespaceOutcomeCallable DcdnClient::putDcdnKvNamespaceCallable(const PutDcdnKvNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutDcdnKvNamespaceOutcome()>>(
			[this, request]()
			{
			return this->putDcdnKvNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::PutDcdnKvWithHighCapacityOutcome DcdnClient::putDcdnKvWithHighCapacity(const PutDcdnKvWithHighCapacityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutDcdnKvWithHighCapacityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutDcdnKvWithHighCapacityOutcome(PutDcdnKvWithHighCapacityResult(outcome.result()));
	else
		return PutDcdnKvWithHighCapacityOutcome(outcome.error());
}

void DcdnClient::putDcdnKvWithHighCapacityAsync(const PutDcdnKvWithHighCapacityRequest& request, const PutDcdnKvWithHighCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putDcdnKvWithHighCapacity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::PutDcdnKvWithHighCapacityOutcomeCallable DcdnClient::putDcdnKvWithHighCapacityCallable(const PutDcdnKvWithHighCapacityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutDcdnKvWithHighCapacityOutcome()>>(
			[this, request]()
			{
			return this->putDcdnKvWithHighCapacity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DcdnClient::RefreshDcdnObjectCacheByCacheTagOutcome DcdnClient::refreshDcdnObjectCacheByCacheTag(const RefreshDcdnObjectCacheByCacheTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshDcdnObjectCacheByCacheTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshDcdnObjectCacheByCacheTagOutcome(RefreshDcdnObjectCacheByCacheTagResult(outcome.result()));
	else
		return RefreshDcdnObjectCacheByCacheTagOutcome(outcome.error());
}

void DcdnClient::refreshDcdnObjectCacheByCacheTagAsync(const RefreshDcdnObjectCacheByCacheTagRequest& request, const RefreshDcdnObjectCacheByCacheTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshDcdnObjectCacheByCacheTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::RefreshDcdnObjectCacheByCacheTagOutcomeCallable DcdnClient::refreshDcdnObjectCacheByCacheTagCallable(const RefreshDcdnObjectCacheByCacheTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshDcdnObjectCacheByCacheTagOutcome()>>(
			[this, request]()
			{
			return this->refreshDcdnObjectCacheByCacheTag(request);
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

DcdnClient::RefreshErObjectCachesOutcome DcdnClient::refreshErObjectCaches(const RefreshErObjectCachesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshErObjectCachesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshErObjectCachesOutcome(RefreshErObjectCachesResult(outcome.result()));
	else
		return RefreshErObjectCachesOutcome(outcome.error());
}

void DcdnClient::refreshErObjectCachesAsync(const RefreshErObjectCachesRequest& request, const RefreshErObjectCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshErObjectCaches(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::RefreshErObjectCachesOutcomeCallable DcdnClient::refreshErObjectCachesCallable(const RefreshErObjectCachesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshErObjectCachesOutcome()>>(
			[this, request]()
			{
			return this->refreshErObjectCaches(request);
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

DcdnClient::SetDcdnDomainSSLCertificateOutcome DcdnClient::setDcdnDomainSSLCertificate(const SetDcdnDomainSSLCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDcdnDomainSSLCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDcdnDomainSSLCertificateOutcome(SetDcdnDomainSSLCertificateResult(outcome.result()));
	else
		return SetDcdnDomainSSLCertificateOutcome(outcome.error());
}

void DcdnClient::setDcdnDomainSSLCertificateAsync(const SetDcdnDomainSSLCertificateRequest& request, const SetDcdnDomainSSLCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDcdnDomainSSLCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DcdnClient::SetDcdnDomainSSLCertificateOutcomeCallable DcdnClient::setDcdnDomainSSLCertificateCallable(const SetDcdnDomainSSLCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDcdnDomainSSLCertificateOutcome()>>(
			[this, request]()
			{
			return this->setDcdnDomainSSLCertificate(request);
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

