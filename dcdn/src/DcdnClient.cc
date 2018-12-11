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
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dcdn");
}

DcdnClient::DcdnClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dcdn");
}

DcdnClient::DcdnClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dcdn");
}

DcdnClient::~DcdnClient()
{}

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

