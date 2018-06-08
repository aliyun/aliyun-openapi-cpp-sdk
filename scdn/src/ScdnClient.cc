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

#include <alibabacloud/scdn/ScdnClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

namespace
{
	const std::string SERVICE_NAME = "scdn";
}

ScdnClient::ScdnClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ScdnClient::ScdnClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ScdnClient::ScdnClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ScdnClient::~ScdnClient()
{}

ScdnClient::DescribeScdnRefreshQuotaOutcome ScdnClient::describeScdnRefreshQuota(const DescribeScdnRefreshQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnRefreshQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnRefreshQuotaOutcome(DescribeScdnRefreshQuotaResult(outcome.result()));
	else
		return DescribeScdnRefreshQuotaOutcome(outcome.error());
}

void ScdnClient::describeScdnRefreshQuotaAsync(const DescribeScdnRefreshQuotaRequest& request, const DescribeScdnRefreshQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnRefreshQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnRefreshQuotaOutcomeCallable ScdnClient::describeScdnRefreshQuotaCallable(const DescribeScdnRefreshQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnRefreshQuotaOutcome()>>(
			[this, request]()
			{
			return this->describeScdnRefreshQuota(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnDomainTrafficDataOutcome ScdnClient::describeScdnDomainTrafficData(const DescribeScdnDomainTrafficDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnDomainTrafficDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnDomainTrafficDataOutcome(DescribeScdnDomainTrafficDataResult(outcome.result()));
	else
		return DescribeScdnDomainTrafficDataOutcome(outcome.error());
}

void ScdnClient::describeScdnDomainTrafficDataAsync(const DescribeScdnDomainTrafficDataRequest& request, const DescribeScdnDomainTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnDomainTrafficData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnDomainTrafficDataOutcomeCallable ScdnClient::describeScdnDomainTrafficDataCallable(const DescribeScdnDomainTrafficDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnDomainTrafficDataOutcome()>>(
			[this, request]()
			{
			return this->describeScdnDomainTrafficData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnDomainDetailOutcome ScdnClient::describeScdnDomainDetail(const DescribeScdnDomainDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnDomainDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnDomainDetailOutcome(DescribeScdnDomainDetailResult(outcome.result()));
	else
		return DescribeScdnDomainDetailOutcome(outcome.error());
}

void ScdnClient::describeScdnDomainDetailAsync(const DescribeScdnDomainDetailRequest& request, const DescribeScdnDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnDomainDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnDomainDetailOutcomeCallable ScdnClient::describeScdnDomainDetailCallable(const DescribeScdnDomainDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnDomainDetailOutcome()>>(
			[this, request]()
			{
			return this->describeScdnDomainDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnDomainOriginBpsDataOutcome ScdnClient::describeScdnDomainOriginBpsData(const DescribeScdnDomainOriginBpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnDomainOriginBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnDomainOriginBpsDataOutcome(DescribeScdnDomainOriginBpsDataResult(outcome.result()));
	else
		return DescribeScdnDomainOriginBpsDataOutcome(outcome.error());
}

void ScdnClient::describeScdnDomainOriginBpsDataAsync(const DescribeScdnDomainOriginBpsDataRequest& request, const DescribeScdnDomainOriginBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnDomainOriginBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnDomainOriginBpsDataOutcomeCallable ScdnClient::describeScdnDomainOriginBpsDataCallable(const DescribeScdnDomainOriginBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnDomainOriginBpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeScdnDomainOriginBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnCertificateListOutcome ScdnClient::describeScdnCertificateList(const DescribeScdnCertificateListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnCertificateListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnCertificateListOutcome(DescribeScdnCertificateListResult(outcome.result()));
	else
		return DescribeScdnCertificateListOutcome(outcome.error());
}

void ScdnClient::describeScdnCertificateListAsync(const DescribeScdnCertificateListRequest& request, const DescribeScdnCertificateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnCertificateList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnCertificateListOutcomeCallable ScdnClient::describeScdnCertificateListCallable(const DescribeScdnCertificateListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnCertificateListOutcome()>>(
			[this, request]()
			{
			return this->describeScdnCertificateList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnDomainQpsDataOutcome ScdnClient::describeScdnDomainQpsData(const DescribeScdnDomainQpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnDomainQpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnDomainQpsDataOutcome(DescribeScdnDomainQpsDataResult(outcome.result()));
	else
		return DescribeScdnDomainQpsDataOutcome(outcome.error());
}

void ScdnClient::describeScdnDomainQpsDataAsync(const DescribeScdnDomainQpsDataRequest& request, const DescribeScdnDomainQpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnDomainQpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnDomainQpsDataOutcomeCallable ScdnClient::describeScdnDomainQpsDataCallable(const DescribeScdnDomainQpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnDomainQpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeScdnDomainQpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnDomainConfigsOutcome ScdnClient::describeScdnDomainConfigs(const DescribeScdnDomainConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnDomainConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnDomainConfigsOutcome(DescribeScdnDomainConfigsResult(outcome.result()));
	else
		return DescribeScdnDomainConfigsOutcome(outcome.error());
}

void ScdnClient::describeScdnDomainConfigsAsync(const DescribeScdnDomainConfigsRequest& request, const DescribeScdnDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnDomainConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnDomainConfigsOutcomeCallable ScdnClient::describeScdnDomainConfigsCallable(const DescribeScdnDomainConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnDomainConfigsOutcome()>>(
			[this, request]()
			{
			return this->describeScdnDomainConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::SetScdnDomainCertificateOutcome ScdnClient::setScdnDomainCertificate(const SetScdnDomainCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetScdnDomainCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetScdnDomainCertificateOutcome(SetScdnDomainCertificateResult(outcome.result()));
	else
		return SetScdnDomainCertificateOutcome(outcome.error());
}

void ScdnClient::setScdnDomainCertificateAsync(const SetScdnDomainCertificateRequest& request, const SetScdnDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setScdnDomainCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::SetScdnDomainCertificateOutcomeCallable ScdnClient::setScdnDomainCertificateCallable(const SetScdnDomainCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetScdnDomainCertificateOutcome()>>(
			[this, request]()
			{
			return this->setScdnDomainCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::BatchDeleteScdnDomainConfigsOutcome ScdnClient::batchDeleteScdnDomainConfigs(const BatchDeleteScdnDomainConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchDeleteScdnDomainConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchDeleteScdnDomainConfigsOutcome(BatchDeleteScdnDomainConfigsResult(outcome.result()));
	else
		return BatchDeleteScdnDomainConfigsOutcome(outcome.error());
}

void ScdnClient::batchDeleteScdnDomainConfigsAsync(const BatchDeleteScdnDomainConfigsRequest& request, const BatchDeleteScdnDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchDeleteScdnDomainConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::BatchDeleteScdnDomainConfigsOutcomeCallable ScdnClient::batchDeleteScdnDomainConfigsCallable(const BatchDeleteScdnDomainConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchDeleteScdnDomainConfigsOutcome()>>(
			[this, request]()
			{
			return this->batchDeleteScdnDomainConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnDomainBpsDataOutcome ScdnClient::describeScdnDomainBpsData(const DescribeScdnDomainBpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnDomainBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnDomainBpsDataOutcome(DescribeScdnDomainBpsDataResult(outcome.result()));
	else
		return DescribeScdnDomainBpsDataOutcome(outcome.error());
}

void ScdnClient::describeScdnDomainBpsDataAsync(const DescribeScdnDomainBpsDataRequest& request, const DescribeScdnDomainBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnDomainBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnDomainBpsDataOutcomeCallable ScdnClient::describeScdnDomainBpsDataCallable(const DescribeScdnDomainBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnDomainBpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeScdnDomainBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::PreloadScdnObjectCachesOutcome ScdnClient::preloadScdnObjectCaches(const PreloadScdnObjectCachesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PreloadScdnObjectCachesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PreloadScdnObjectCachesOutcome(PreloadScdnObjectCachesResult(outcome.result()));
	else
		return PreloadScdnObjectCachesOutcome(outcome.error());
}

void ScdnClient::preloadScdnObjectCachesAsync(const PreloadScdnObjectCachesRequest& request, const PreloadScdnObjectCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, preloadScdnObjectCaches(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::PreloadScdnObjectCachesOutcomeCallable ScdnClient::preloadScdnObjectCachesCallable(const PreloadScdnObjectCachesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PreloadScdnObjectCachesOutcome()>>(
			[this, request]()
			{
			return this->preloadScdnObjectCaches(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnDomainHitRateDataOutcome ScdnClient::describeScdnDomainHitRateData(const DescribeScdnDomainHitRateDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnDomainHitRateDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnDomainHitRateDataOutcome(DescribeScdnDomainHitRateDataResult(outcome.result()));
	else
		return DescribeScdnDomainHitRateDataOutcome(outcome.error());
}

void ScdnClient::describeScdnDomainHitRateDataAsync(const DescribeScdnDomainHitRateDataRequest& request, const DescribeScdnDomainHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnDomainHitRateData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnDomainHitRateDataOutcomeCallable ScdnClient::describeScdnDomainHitRateDataCallable(const DescribeScdnDomainHitRateDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnDomainHitRateDataOutcome()>>(
			[this, request]()
			{
			return this->describeScdnDomainHitRateData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnUserDomainsOutcome ScdnClient::describeScdnUserDomains(const DescribeScdnUserDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnUserDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnUserDomainsOutcome(DescribeScdnUserDomainsResult(outcome.result()));
	else
		return DescribeScdnUserDomainsOutcome(outcome.error());
}

void ScdnClient::describeScdnUserDomainsAsync(const DescribeScdnUserDomainsRequest& request, const DescribeScdnUserDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnUserDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnUserDomainsOutcomeCallable ScdnClient::describeScdnUserDomainsCallable(const DescribeScdnUserDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnUserDomainsOutcome()>>(
			[this, request]()
			{
			return this->describeScdnUserDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::StopScdnDomainOutcome ScdnClient::stopScdnDomain(const StopScdnDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopScdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopScdnDomainOutcome(StopScdnDomainResult(outcome.result()));
	else
		return StopScdnDomainOutcome(outcome.error());
}

void ScdnClient::stopScdnDomainAsync(const StopScdnDomainRequest& request, const StopScdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopScdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::StopScdnDomainOutcomeCallable ScdnClient::stopScdnDomainCallable(const StopScdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopScdnDomainOutcome()>>(
			[this, request]()
			{
			return this->stopScdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::AddScdnDomainOutcome ScdnClient::addScdnDomain(const AddScdnDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddScdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddScdnDomainOutcome(AddScdnDomainResult(outcome.result()));
	else
		return AddScdnDomainOutcome(outcome.error());
}

void ScdnClient::addScdnDomainAsync(const AddScdnDomainRequest& request, const AddScdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addScdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::AddScdnDomainOutcomeCallable ScdnClient::addScdnDomainCallable(const AddScdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddScdnDomainOutcome()>>(
			[this, request]()
			{
			return this->addScdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnDomainCnameOutcome ScdnClient::describeScdnDomainCname(const DescribeScdnDomainCnameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnDomainCnameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnDomainCnameOutcome(DescribeScdnDomainCnameResult(outcome.result()));
	else
		return DescribeScdnDomainCnameOutcome(outcome.error());
}

void ScdnClient::describeScdnDomainCnameAsync(const DescribeScdnDomainCnameRequest& request, const DescribeScdnDomainCnameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnDomainCname(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnDomainCnameOutcomeCallable ScdnClient::describeScdnDomainCnameCallable(const DescribeScdnDomainCnameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnDomainCnameOutcome()>>(
			[this, request]()
			{
			return this->describeScdnDomainCname(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnCertificateDetailOutcome ScdnClient::describeScdnCertificateDetail(const DescribeScdnCertificateDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnCertificateDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnCertificateDetailOutcome(DescribeScdnCertificateDetailResult(outcome.result()));
	else
		return DescribeScdnCertificateDetailOutcome(outcome.error());
}

void ScdnClient::describeScdnCertificateDetailAsync(const DescribeScdnCertificateDetailRequest& request, const DescribeScdnCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnCertificateDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnCertificateDetailOutcomeCallable ScdnClient::describeScdnCertificateDetailCallable(const DescribeScdnCertificateDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnCertificateDetailOutcome()>>(
			[this, request]()
			{
			return this->describeScdnCertificateDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::StartScdnDomainOutcome ScdnClient::startScdnDomain(const StartScdnDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartScdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartScdnDomainOutcome(StartScdnDomainResult(outcome.result()));
	else
		return StartScdnDomainOutcome(outcome.error());
}

void ScdnClient::startScdnDomainAsync(const StartScdnDomainRequest& request, const StartScdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startScdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::StartScdnDomainOutcomeCallable ScdnClient::startScdnDomainCallable(const StartScdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartScdnDomainOutcome()>>(
			[this, request]()
			{
			return this->startScdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DeleteScdnDomainOutcome ScdnClient::deleteScdnDomain(const DeleteScdnDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteScdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteScdnDomainOutcome(DeleteScdnDomainResult(outcome.result()));
	else
		return DeleteScdnDomainOutcome(outcome.error());
}

void ScdnClient::deleteScdnDomainAsync(const DeleteScdnDomainRequest& request, const DeleteScdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteScdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DeleteScdnDomainOutcomeCallable ScdnClient::deleteScdnDomainCallable(const DeleteScdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteScdnDomainOutcome()>>(
			[this, request]()
			{
			return this->deleteScdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnServiceOutcome ScdnClient::describeScdnService(const DescribeScdnServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnServiceOutcome(DescribeScdnServiceResult(outcome.result()));
	else
		return DescribeScdnServiceOutcome(outcome.error());
}

void ScdnClient::describeScdnServiceAsync(const DescribeScdnServiceRequest& request, const DescribeScdnServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnServiceOutcomeCallable ScdnClient::describeScdnServiceCallable(const DescribeScdnServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnServiceOutcome()>>(
			[this, request]()
			{
			return this->describeScdnService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnDomainLogOutcome ScdnClient::describeScdnDomainLog(const DescribeScdnDomainLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnDomainLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnDomainLogOutcome(DescribeScdnDomainLogResult(outcome.result()));
	else
		return DescribeScdnDomainLogOutcome(outcome.error());
}

void ScdnClient::describeScdnDomainLogAsync(const DescribeScdnDomainLogRequest& request, const DescribeScdnDomainLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnDomainLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnDomainLogOutcomeCallable ScdnClient::describeScdnDomainLogCallable(const DescribeScdnDomainLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnDomainLogOutcome()>>(
			[this, request]()
			{
			return this->describeScdnDomainLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnUserQuotaOutcome ScdnClient::describeScdnUserQuota(const DescribeScdnUserQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnUserQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnUserQuotaOutcome(DescribeScdnUserQuotaResult(outcome.result()));
	else
		return DescribeScdnUserQuotaOutcome(outcome.error());
}

void ScdnClient::describeScdnUserQuotaAsync(const DescribeScdnUserQuotaRequest& request, const DescribeScdnUserQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnUserQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnUserQuotaOutcomeCallable ScdnClient::describeScdnUserQuotaCallable(const DescribeScdnUserQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnUserQuotaOutcome()>>(
			[this, request]()
			{
			return this->describeScdnUserQuota(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnDomainHttpCodeDataOutcome ScdnClient::describeScdnDomainHttpCodeData(const DescribeScdnDomainHttpCodeDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnDomainHttpCodeDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnDomainHttpCodeDataOutcome(DescribeScdnDomainHttpCodeDataResult(outcome.result()));
	else
		return DescribeScdnDomainHttpCodeDataOutcome(outcome.error());
}

void ScdnClient::describeScdnDomainHttpCodeDataAsync(const DescribeScdnDomainHttpCodeDataRequest& request, const DescribeScdnDomainHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnDomainHttpCodeData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnDomainHttpCodeDataOutcomeCallable ScdnClient::describeScdnDomainHttpCodeDataCallable(const DescribeScdnDomainHttpCodeDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnDomainHttpCodeDataOutcome()>>(
			[this, request]()
			{
			return this->describeScdnDomainHttpCodeData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::RefreshScdnObjectCachesOutcome ScdnClient::refreshScdnObjectCaches(const RefreshScdnObjectCachesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshScdnObjectCachesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshScdnObjectCachesOutcome(RefreshScdnObjectCachesResult(outcome.result()));
	else
		return RefreshScdnObjectCachesOutcome(outcome.error());
}

void ScdnClient::refreshScdnObjectCachesAsync(const RefreshScdnObjectCachesRequest& request, const RefreshScdnObjectCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshScdnObjectCaches(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::RefreshScdnObjectCachesOutcomeCallable ScdnClient::refreshScdnObjectCachesCallable(const RefreshScdnObjectCachesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshScdnObjectCachesOutcome()>>(
			[this, request]()
			{
			return this->refreshScdnObjectCaches(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnDomainCertificateInfoOutcome ScdnClient::describeScdnDomainCertificateInfo(const DescribeScdnDomainCertificateInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnDomainCertificateInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnDomainCertificateInfoOutcome(DescribeScdnDomainCertificateInfoResult(outcome.result()));
	else
		return DescribeScdnDomainCertificateInfoOutcome(outcome.error());
}

void ScdnClient::describeScdnDomainCertificateInfoAsync(const DescribeScdnDomainCertificateInfoRequest& request, const DescribeScdnDomainCertificateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnDomainCertificateInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnDomainCertificateInfoOutcomeCallable ScdnClient::describeScdnDomainCertificateInfoCallable(const DescribeScdnDomainCertificateInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnDomainCertificateInfoOutcome()>>(
			[this, request]()
			{
			return this->describeScdnDomainCertificateInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::CheckScdnServiceOutcome ScdnClient::checkScdnService(const CheckScdnServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckScdnServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckScdnServiceOutcome(CheckScdnServiceResult(outcome.result()));
	else
		return CheckScdnServiceOutcome(outcome.error());
}

void ScdnClient::checkScdnServiceAsync(const CheckScdnServiceRequest& request, const CheckScdnServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkScdnService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::CheckScdnServiceOutcomeCallable ScdnClient::checkScdnServiceCallable(const CheckScdnServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckScdnServiceOutcome()>>(
			[this, request]()
			{
			return this->checkScdnService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::UpdateScdnDomainOutcome ScdnClient::updateScdnDomain(const UpdateScdnDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateScdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateScdnDomainOutcome(UpdateScdnDomainResult(outcome.result()));
	else
		return UpdateScdnDomainOutcome(outcome.error());
}

void ScdnClient::updateScdnDomainAsync(const UpdateScdnDomainRequest& request, const UpdateScdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateScdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::UpdateScdnDomainOutcomeCallable ScdnClient::updateScdnDomainCallable(const UpdateScdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateScdnDomainOutcome()>>(
			[this, request]()
			{
			return this->updateScdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnDomainOriginTrafficDataOutcome ScdnClient::describeScdnDomainOriginTrafficData(const DescribeScdnDomainOriginTrafficDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnDomainOriginTrafficDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnDomainOriginTrafficDataOutcome(DescribeScdnDomainOriginTrafficDataResult(outcome.result()));
	else
		return DescribeScdnDomainOriginTrafficDataOutcome(outcome.error());
}

void ScdnClient::describeScdnDomainOriginTrafficDataAsync(const DescribeScdnDomainOriginTrafficDataRequest& request, const DescribeScdnDomainOriginTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnDomainOriginTrafficData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnDomainOriginTrafficDataOutcomeCallable ScdnClient::describeScdnDomainOriginTrafficDataCallable(const DescribeScdnDomainOriginTrafficDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnDomainOriginTrafficDataOutcome()>>(
			[this, request]()
			{
			return this->describeScdnDomainOriginTrafficData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnRefreshTasksOutcome ScdnClient::describeScdnRefreshTasks(const DescribeScdnRefreshTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnRefreshTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnRefreshTasksOutcome(DescribeScdnRefreshTasksResult(outcome.result()));
	else
		return DescribeScdnRefreshTasksOutcome(outcome.error());
}

void ScdnClient::describeScdnRefreshTasksAsync(const DescribeScdnRefreshTasksRequest& request, const DescribeScdnRefreshTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnRefreshTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnRefreshTasksOutcomeCallable ScdnClient::describeScdnRefreshTasksCallable(const DescribeScdnRefreshTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnRefreshTasksOutcome()>>(
			[this, request]()
			{
			return this->describeScdnRefreshTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

