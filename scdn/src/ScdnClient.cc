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

ScdnClient::BatchSetScdnDomainConfigsOutcome ScdnClient::batchSetScdnDomainConfigs(const BatchSetScdnDomainConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchSetScdnDomainConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchSetScdnDomainConfigsOutcome(BatchSetScdnDomainConfigsResult(outcome.result()));
	else
		return BatchSetScdnDomainConfigsOutcome(outcome.error());
}

void ScdnClient::batchSetScdnDomainConfigsAsync(const BatchSetScdnDomainConfigsRequest& request, const BatchSetScdnDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchSetScdnDomainConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::BatchSetScdnDomainConfigsOutcomeCallable ScdnClient::batchSetScdnDomainConfigsCallable(const BatchSetScdnDomainConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchSetScdnDomainConfigsOutcome()>>(
			[this, request]()
			{
			return this->batchSetScdnDomainConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::BatchStartScdnDomainOutcome ScdnClient::batchStartScdnDomain(const BatchStartScdnDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchStartScdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchStartScdnDomainOutcome(BatchStartScdnDomainResult(outcome.result()));
	else
		return BatchStartScdnDomainOutcome(outcome.error());
}

void ScdnClient::batchStartScdnDomainAsync(const BatchStartScdnDomainRequest& request, const BatchStartScdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchStartScdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::BatchStartScdnDomainOutcomeCallable ScdnClient::batchStartScdnDomainCallable(const BatchStartScdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchStartScdnDomainOutcome()>>(
			[this, request]()
			{
			return this->batchStartScdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::BatchStopScdnDomainOutcome ScdnClient::batchStopScdnDomain(const BatchStopScdnDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchStopScdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchStopScdnDomainOutcome(BatchStopScdnDomainResult(outcome.result()));
	else
		return BatchStopScdnDomainOutcome(outcome.error());
}

void ScdnClient::batchStopScdnDomainAsync(const BatchStopScdnDomainRequest& request, const BatchStopScdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchStopScdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::BatchStopScdnDomainOutcomeCallable ScdnClient::batchStopScdnDomainCallable(const BatchStopScdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchStopScdnDomainOutcome()>>(
			[this, request]()
			{
			return this->batchStopScdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::BatchUpdateScdnDomainOutcome ScdnClient::batchUpdateScdnDomain(const BatchUpdateScdnDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchUpdateScdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchUpdateScdnDomainOutcome(BatchUpdateScdnDomainResult(outcome.result()));
	else
		return BatchUpdateScdnDomainOutcome(outcome.error());
}

void ScdnClient::batchUpdateScdnDomainAsync(const BatchUpdateScdnDomainRequest& request, const BatchUpdateScdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchUpdateScdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::BatchUpdateScdnDomainOutcomeCallable ScdnClient::batchUpdateScdnDomainCallable(const BatchUpdateScdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchUpdateScdnDomainOutcome()>>(
			[this, request]()
			{
			return this->batchUpdateScdnDomain(request);
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

ScdnClient::DeleteScdnSpecificConfigOutcome ScdnClient::deleteScdnSpecificConfig(const DeleteScdnSpecificConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteScdnSpecificConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteScdnSpecificConfigOutcome(DeleteScdnSpecificConfigResult(outcome.result()));
	else
		return DeleteScdnSpecificConfigOutcome(outcome.error());
}

void ScdnClient::deleteScdnSpecificConfigAsync(const DeleteScdnSpecificConfigRequest& request, const DeleteScdnSpecificConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteScdnSpecificConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DeleteScdnSpecificConfigOutcomeCallable ScdnClient::deleteScdnSpecificConfigCallable(const DeleteScdnSpecificConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteScdnSpecificConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteScdnSpecificConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnCcInfoOutcome ScdnClient::describeScdnCcInfo(const DescribeScdnCcInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnCcInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnCcInfoOutcome(DescribeScdnCcInfoResult(outcome.result()));
	else
		return DescribeScdnCcInfoOutcome(outcome.error());
}

void ScdnClient::describeScdnCcInfoAsync(const DescribeScdnCcInfoRequest& request, const DescribeScdnCcInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnCcInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnCcInfoOutcomeCallable ScdnClient::describeScdnCcInfoCallable(const DescribeScdnCcInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnCcInfoOutcome()>>(
			[this, request]()
			{
			return this->describeScdnCcInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnCcQpsInfoOutcome ScdnClient::describeScdnCcQpsInfo(const DescribeScdnCcQpsInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnCcQpsInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnCcQpsInfoOutcome(DescribeScdnCcQpsInfoResult(outcome.result()));
	else
		return DescribeScdnCcQpsInfoOutcome(outcome.error());
}

void ScdnClient::describeScdnCcQpsInfoAsync(const DescribeScdnCcQpsInfoRequest& request, const DescribeScdnCcQpsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnCcQpsInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnCcQpsInfoOutcomeCallable ScdnClient::describeScdnCcQpsInfoCallable(const DescribeScdnCcQpsInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnCcQpsInfoOutcome()>>(
			[this, request]()
			{
			return this->describeScdnCcQpsInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnCcTopIpOutcome ScdnClient::describeScdnCcTopIp(const DescribeScdnCcTopIpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnCcTopIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnCcTopIpOutcome(DescribeScdnCcTopIpResult(outcome.result()));
	else
		return DescribeScdnCcTopIpOutcome(outcome.error());
}

void ScdnClient::describeScdnCcTopIpAsync(const DescribeScdnCcTopIpRequest& request, const DescribeScdnCcTopIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnCcTopIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnCcTopIpOutcomeCallable ScdnClient::describeScdnCcTopIpCallable(const DescribeScdnCcTopIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnCcTopIpOutcome()>>(
			[this, request]()
			{
			return this->describeScdnCcTopIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnCcTopUrlOutcome ScdnClient::describeScdnCcTopUrl(const DescribeScdnCcTopUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnCcTopUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnCcTopUrlOutcome(DescribeScdnCcTopUrlResult(outcome.result()));
	else
		return DescribeScdnCcTopUrlOutcome(outcome.error());
}

void ScdnClient::describeScdnCcTopUrlAsync(const DescribeScdnCcTopUrlRequest& request, const DescribeScdnCcTopUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnCcTopUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnCcTopUrlOutcomeCallable ScdnClient::describeScdnCcTopUrlCallable(const DescribeScdnCcTopUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnCcTopUrlOutcome()>>(
			[this, request]()
			{
			return this->describeScdnCcTopUrl(request);
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

ScdnClient::DescribeScdnDDoSInfoOutcome ScdnClient::describeScdnDDoSInfo(const DescribeScdnDDoSInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnDDoSInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnDDoSInfoOutcome(DescribeScdnDDoSInfoResult(outcome.result()));
	else
		return DescribeScdnDDoSInfoOutcome(outcome.error());
}

void ScdnClient::describeScdnDDoSInfoAsync(const DescribeScdnDDoSInfoRequest& request, const DescribeScdnDDoSInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnDDoSInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnDDoSInfoOutcomeCallable ScdnClient::describeScdnDDoSInfoCallable(const DescribeScdnDDoSInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnDDoSInfoOutcome()>>(
			[this, request]()
			{
			return this->describeScdnDDoSInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnDDoSTrafficInfoOutcome ScdnClient::describeScdnDDoSTrafficInfo(const DescribeScdnDDoSTrafficInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnDDoSTrafficInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnDDoSTrafficInfoOutcome(DescribeScdnDDoSTrafficInfoResult(outcome.result()));
	else
		return DescribeScdnDDoSTrafficInfoOutcome(outcome.error());
}

void ScdnClient::describeScdnDDoSTrafficInfoAsync(const DescribeScdnDDoSTrafficInfoRequest& request, const DescribeScdnDDoSTrafficInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnDDoSTrafficInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnDDoSTrafficInfoOutcomeCallable ScdnClient::describeScdnDDoSTrafficInfoCallable(const DescribeScdnDDoSTrafficInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnDDoSTrafficInfoOutcome()>>(
			[this, request]()
			{
			return this->describeScdnDDoSTrafficInfo(request);
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

ScdnClient::DescribeScdnDomainIspDataOutcome ScdnClient::describeScdnDomainIspData(const DescribeScdnDomainIspDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnDomainIspDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnDomainIspDataOutcome(DescribeScdnDomainIspDataResult(outcome.result()));
	else
		return DescribeScdnDomainIspDataOutcome(outcome.error());
}

void ScdnClient::describeScdnDomainIspDataAsync(const DescribeScdnDomainIspDataRequest& request, const DescribeScdnDomainIspDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnDomainIspData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnDomainIspDataOutcomeCallable ScdnClient::describeScdnDomainIspDataCallable(const DescribeScdnDomainIspDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnDomainIspDataOutcome()>>(
			[this, request]()
			{
			return this->describeScdnDomainIspData(request);
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

ScdnClient::DescribeScdnDomainPvDataOutcome ScdnClient::describeScdnDomainPvData(const DescribeScdnDomainPvDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnDomainPvDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnDomainPvDataOutcome(DescribeScdnDomainPvDataResult(outcome.result()));
	else
		return DescribeScdnDomainPvDataOutcome(outcome.error());
}

void ScdnClient::describeScdnDomainPvDataAsync(const DescribeScdnDomainPvDataRequest& request, const DescribeScdnDomainPvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnDomainPvData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnDomainPvDataOutcomeCallable ScdnClient::describeScdnDomainPvDataCallable(const DescribeScdnDomainPvDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnDomainPvDataOutcome()>>(
			[this, request]()
			{
			return this->describeScdnDomainPvData(request);
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

ScdnClient::DescribeScdnDomainRealTimeBpsDataOutcome ScdnClient::describeScdnDomainRealTimeBpsData(const DescribeScdnDomainRealTimeBpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnDomainRealTimeBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnDomainRealTimeBpsDataOutcome(DescribeScdnDomainRealTimeBpsDataResult(outcome.result()));
	else
		return DescribeScdnDomainRealTimeBpsDataOutcome(outcome.error());
}

void ScdnClient::describeScdnDomainRealTimeBpsDataAsync(const DescribeScdnDomainRealTimeBpsDataRequest& request, const DescribeScdnDomainRealTimeBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnDomainRealTimeBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnDomainRealTimeBpsDataOutcomeCallable ScdnClient::describeScdnDomainRealTimeBpsDataCallable(const DescribeScdnDomainRealTimeBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnDomainRealTimeBpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeScdnDomainRealTimeBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnDomainRealTimeByteHitRateDataOutcome ScdnClient::describeScdnDomainRealTimeByteHitRateData(const DescribeScdnDomainRealTimeByteHitRateDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnDomainRealTimeByteHitRateDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnDomainRealTimeByteHitRateDataOutcome(DescribeScdnDomainRealTimeByteHitRateDataResult(outcome.result()));
	else
		return DescribeScdnDomainRealTimeByteHitRateDataOutcome(outcome.error());
}

void ScdnClient::describeScdnDomainRealTimeByteHitRateDataAsync(const DescribeScdnDomainRealTimeByteHitRateDataRequest& request, const DescribeScdnDomainRealTimeByteHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnDomainRealTimeByteHitRateData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnDomainRealTimeByteHitRateDataOutcomeCallable ScdnClient::describeScdnDomainRealTimeByteHitRateDataCallable(const DescribeScdnDomainRealTimeByteHitRateDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnDomainRealTimeByteHitRateDataOutcome()>>(
			[this, request]()
			{
			return this->describeScdnDomainRealTimeByteHitRateData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnDomainRealTimeHttpCodeDataOutcome ScdnClient::describeScdnDomainRealTimeHttpCodeData(const DescribeScdnDomainRealTimeHttpCodeDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnDomainRealTimeHttpCodeDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnDomainRealTimeHttpCodeDataOutcome(DescribeScdnDomainRealTimeHttpCodeDataResult(outcome.result()));
	else
		return DescribeScdnDomainRealTimeHttpCodeDataOutcome(outcome.error());
}

void ScdnClient::describeScdnDomainRealTimeHttpCodeDataAsync(const DescribeScdnDomainRealTimeHttpCodeDataRequest& request, const DescribeScdnDomainRealTimeHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnDomainRealTimeHttpCodeData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnDomainRealTimeHttpCodeDataOutcomeCallable ScdnClient::describeScdnDomainRealTimeHttpCodeDataCallable(const DescribeScdnDomainRealTimeHttpCodeDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnDomainRealTimeHttpCodeDataOutcome()>>(
			[this, request]()
			{
			return this->describeScdnDomainRealTimeHttpCodeData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnDomainRealTimeQpsDataOutcome ScdnClient::describeScdnDomainRealTimeQpsData(const DescribeScdnDomainRealTimeQpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnDomainRealTimeQpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnDomainRealTimeQpsDataOutcome(DescribeScdnDomainRealTimeQpsDataResult(outcome.result()));
	else
		return DescribeScdnDomainRealTimeQpsDataOutcome(outcome.error());
}

void ScdnClient::describeScdnDomainRealTimeQpsDataAsync(const DescribeScdnDomainRealTimeQpsDataRequest& request, const DescribeScdnDomainRealTimeQpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnDomainRealTimeQpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnDomainRealTimeQpsDataOutcomeCallable ScdnClient::describeScdnDomainRealTimeQpsDataCallable(const DescribeScdnDomainRealTimeQpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnDomainRealTimeQpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeScdnDomainRealTimeQpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnDomainRealTimeReqHitRateDataOutcome ScdnClient::describeScdnDomainRealTimeReqHitRateData(const DescribeScdnDomainRealTimeReqHitRateDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnDomainRealTimeReqHitRateDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnDomainRealTimeReqHitRateDataOutcome(DescribeScdnDomainRealTimeReqHitRateDataResult(outcome.result()));
	else
		return DescribeScdnDomainRealTimeReqHitRateDataOutcome(outcome.error());
}

void ScdnClient::describeScdnDomainRealTimeReqHitRateDataAsync(const DescribeScdnDomainRealTimeReqHitRateDataRequest& request, const DescribeScdnDomainRealTimeReqHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnDomainRealTimeReqHitRateData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnDomainRealTimeReqHitRateDataOutcomeCallable ScdnClient::describeScdnDomainRealTimeReqHitRateDataCallable(const DescribeScdnDomainRealTimeReqHitRateDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnDomainRealTimeReqHitRateDataOutcome()>>(
			[this, request]()
			{
			return this->describeScdnDomainRealTimeReqHitRateData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnDomainRealTimeSrcBpsDataOutcome ScdnClient::describeScdnDomainRealTimeSrcBpsData(const DescribeScdnDomainRealTimeSrcBpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnDomainRealTimeSrcBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnDomainRealTimeSrcBpsDataOutcome(DescribeScdnDomainRealTimeSrcBpsDataResult(outcome.result()));
	else
		return DescribeScdnDomainRealTimeSrcBpsDataOutcome(outcome.error());
}

void ScdnClient::describeScdnDomainRealTimeSrcBpsDataAsync(const DescribeScdnDomainRealTimeSrcBpsDataRequest& request, const DescribeScdnDomainRealTimeSrcBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnDomainRealTimeSrcBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnDomainRealTimeSrcBpsDataOutcomeCallable ScdnClient::describeScdnDomainRealTimeSrcBpsDataCallable(const DescribeScdnDomainRealTimeSrcBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnDomainRealTimeSrcBpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeScdnDomainRealTimeSrcBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnDomainRealTimeSrcTrafficDataOutcome ScdnClient::describeScdnDomainRealTimeSrcTrafficData(const DescribeScdnDomainRealTimeSrcTrafficDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnDomainRealTimeSrcTrafficDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnDomainRealTimeSrcTrafficDataOutcome(DescribeScdnDomainRealTimeSrcTrafficDataResult(outcome.result()));
	else
		return DescribeScdnDomainRealTimeSrcTrafficDataOutcome(outcome.error());
}

void ScdnClient::describeScdnDomainRealTimeSrcTrafficDataAsync(const DescribeScdnDomainRealTimeSrcTrafficDataRequest& request, const DescribeScdnDomainRealTimeSrcTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnDomainRealTimeSrcTrafficData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnDomainRealTimeSrcTrafficDataOutcomeCallable ScdnClient::describeScdnDomainRealTimeSrcTrafficDataCallable(const DescribeScdnDomainRealTimeSrcTrafficDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnDomainRealTimeSrcTrafficDataOutcome()>>(
			[this, request]()
			{
			return this->describeScdnDomainRealTimeSrcTrafficData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnDomainRealTimeTrafficDataOutcome ScdnClient::describeScdnDomainRealTimeTrafficData(const DescribeScdnDomainRealTimeTrafficDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnDomainRealTimeTrafficDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnDomainRealTimeTrafficDataOutcome(DescribeScdnDomainRealTimeTrafficDataResult(outcome.result()));
	else
		return DescribeScdnDomainRealTimeTrafficDataOutcome(outcome.error());
}

void ScdnClient::describeScdnDomainRealTimeTrafficDataAsync(const DescribeScdnDomainRealTimeTrafficDataRequest& request, const DescribeScdnDomainRealTimeTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnDomainRealTimeTrafficData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnDomainRealTimeTrafficDataOutcomeCallable ScdnClient::describeScdnDomainRealTimeTrafficDataCallable(const DescribeScdnDomainRealTimeTrafficDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnDomainRealTimeTrafficDataOutcome()>>(
			[this, request]()
			{
			return this->describeScdnDomainRealTimeTrafficData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnDomainRegionDataOutcome ScdnClient::describeScdnDomainRegionData(const DescribeScdnDomainRegionDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnDomainRegionDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnDomainRegionDataOutcome(DescribeScdnDomainRegionDataResult(outcome.result()));
	else
		return DescribeScdnDomainRegionDataOutcome(outcome.error());
}

void ScdnClient::describeScdnDomainRegionDataAsync(const DescribeScdnDomainRegionDataRequest& request, const DescribeScdnDomainRegionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnDomainRegionData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnDomainRegionDataOutcomeCallable ScdnClient::describeScdnDomainRegionDataCallable(const DescribeScdnDomainRegionDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnDomainRegionDataOutcome()>>(
			[this, request]()
			{
			return this->describeScdnDomainRegionData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnDomainTopReferVisitOutcome ScdnClient::describeScdnDomainTopReferVisit(const DescribeScdnDomainTopReferVisitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnDomainTopReferVisitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnDomainTopReferVisitOutcome(DescribeScdnDomainTopReferVisitResult(outcome.result()));
	else
		return DescribeScdnDomainTopReferVisitOutcome(outcome.error());
}

void ScdnClient::describeScdnDomainTopReferVisitAsync(const DescribeScdnDomainTopReferVisitRequest& request, const DescribeScdnDomainTopReferVisitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnDomainTopReferVisit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnDomainTopReferVisitOutcomeCallable ScdnClient::describeScdnDomainTopReferVisitCallable(const DescribeScdnDomainTopReferVisitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnDomainTopReferVisitOutcome()>>(
			[this, request]()
			{
			return this->describeScdnDomainTopReferVisit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::DescribeScdnDomainTopUrlVisitOutcome ScdnClient::describeScdnDomainTopUrlVisit(const DescribeScdnDomainTopUrlVisitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnDomainTopUrlVisitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnDomainTopUrlVisitOutcome(DescribeScdnDomainTopUrlVisitResult(outcome.result()));
	else
		return DescribeScdnDomainTopUrlVisitOutcome(outcome.error());
}

void ScdnClient::describeScdnDomainTopUrlVisitAsync(const DescribeScdnDomainTopUrlVisitRequest& request, const DescribeScdnDomainTopUrlVisitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnDomainTopUrlVisit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnDomainTopUrlVisitOutcomeCallable ScdnClient::describeScdnDomainTopUrlVisitCallable(const DescribeScdnDomainTopUrlVisitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnDomainTopUrlVisitOutcome()>>(
			[this, request]()
			{
			return this->describeScdnDomainTopUrlVisit(request);
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

ScdnClient::DescribeScdnDomainUvDataOutcome ScdnClient::describeScdnDomainUvData(const DescribeScdnDomainUvDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnDomainUvDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnDomainUvDataOutcome(DescribeScdnDomainUvDataResult(outcome.result()));
	else
		return DescribeScdnDomainUvDataOutcome(outcome.error());
}

void ScdnClient::describeScdnDomainUvDataAsync(const DescribeScdnDomainUvDataRequest& request, const DescribeScdnDomainUvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnDomainUvData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnDomainUvDataOutcomeCallable ScdnClient::describeScdnDomainUvDataCallable(const DescribeScdnDomainUvDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnDomainUvDataOutcome()>>(
			[this, request]()
			{
			return this->describeScdnDomainUvData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

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

ScdnClient::DescribeScdnTopDomainsByFlowOutcome ScdnClient::describeScdnTopDomainsByFlow(const DescribeScdnTopDomainsByFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnTopDomainsByFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnTopDomainsByFlowOutcome(DescribeScdnTopDomainsByFlowResult(outcome.result()));
	else
		return DescribeScdnTopDomainsByFlowOutcome(outcome.error());
}

void ScdnClient::describeScdnTopDomainsByFlowAsync(const DescribeScdnTopDomainsByFlowRequest& request, const DescribeScdnTopDomainsByFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnTopDomainsByFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnTopDomainsByFlowOutcomeCallable ScdnClient::describeScdnTopDomainsByFlowCallable(const DescribeScdnTopDomainsByFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnTopDomainsByFlowOutcome()>>(
			[this, request]()
			{
			return this->describeScdnTopDomainsByFlow(request);
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

ScdnClient::DescribeScdnUserProtectInfoOutcome ScdnClient::describeScdnUserProtectInfo(const DescribeScdnUserProtectInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnUserProtectInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnUserProtectInfoOutcome(DescribeScdnUserProtectInfoResult(outcome.result()));
	else
		return DescribeScdnUserProtectInfoOutcome(outcome.error());
}

void ScdnClient::describeScdnUserProtectInfoAsync(const DescribeScdnUserProtectInfoRequest& request, const DescribeScdnUserProtectInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnUserProtectInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnUserProtectInfoOutcomeCallable ScdnClient::describeScdnUserProtectInfoCallable(const DescribeScdnUserProtectInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnUserProtectInfoOutcome()>>(
			[this, request]()
			{
			return this->describeScdnUserProtectInfo(request);
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

ScdnClient::DescribeScdnVerifyContentOutcome ScdnClient::describeScdnVerifyContent(const DescribeScdnVerifyContentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScdnVerifyContentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScdnVerifyContentOutcome(DescribeScdnVerifyContentResult(outcome.result()));
	else
		return DescribeScdnVerifyContentOutcome(outcome.error());
}

void ScdnClient::describeScdnVerifyContentAsync(const DescribeScdnVerifyContentRequest& request, const DescribeScdnVerifyContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScdnVerifyContent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::DescribeScdnVerifyContentOutcomeCallable ScdnClient::describeScdnVerifyContentCallable(const DescribeScdnVerifyContentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScdnVerifyContentOutcome()>>(
			[this, request]()
			{
			return this->describeScdnVerifyContent(request);
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

ScdnClient::SetScdnBotInfoOutcome ScdnClient::setScdnBotInfo(const SetScdnBotInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetScdnBotInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetScdnBotInfoOutcome(SetScdnBotInfoResult(outcome.result()));
	else
		return SetScdnBotInfoOutcome(outcome.error());
}

void ScdnClient::setScdnBotInfoAsync(const SetScdnBotInfoRequest& request, const SetScdnBotInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setScdnBotInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::SetScdnBotInfoOutcomeCallable ScdnClient::setScdnBotInfoCallable(const SetScdnBotInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetScdnBotInfoOutcome()>>(
			[this, request]()
			{
			return this->setScdnBotInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::SetScdnCcInfoOutcome ScdnClient::setScdnCcInfo(const SetScdnCcInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetScdnCcInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetScdnCcInfoOutcome(SetScdnCcInfoResult(outcome.result()));
	else
		return SetScdnCcInfoOutcome(outcome.error());
}

void ScdnClient::setScdnCcInfoAsync(const SetScdnCcInfoRequest& request, const SetScdnCcInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setScdnCcInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::SetScdnCcInfoOutcomeCallable ScdnClient::setScdnCcInfoCallable(const SetScdnCcInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetScdnCcInfoOutcome()>>(
			[this, request]()
			{
			return this->setScdnCcInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScdnClient::SetScdnDDoSInfoOutcome ScdnClient::setScdnDDoSInfo(const SetScdnDDoSInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetScdnDDoSInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetScdnDDoSInfoOutcome(SetScdnDDoSInfoResult(outcome.result()));
	else
		return SetScdnDDoSInfoOutcome(outcome.error());
}

void ScdnClient::setScdnDDoSInfoAsync(const SetScdnDDoSInfoRequest& request, const SetScdnDDoSInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setScdnDDoSInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::SetScdnDDoSInfoOutcomeCallable ScdnClient::setScdnDDoSInfoCallable(const SetScdnDDoSInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetScdnDDoSInfoOutcome()>>(
			[this, request]()
			{
			return this->setScdnDDoSInfo(request);
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

ScdnClient::VerifyScdnDomainOwnerOutcome ScdnClient::verifyScdnDomainOwner(const VerifyScdnDomainOwnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyScdnDomainOwnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyScdnDomainOwnerOutcome(VerifyScdnDomainOwnerResult(outcome.result()));
	else
		return VerifyScdnDomainOwnerOutcome(outcome.error());
}

void ScdnClient::verifyScdnDomainOwnerAsync(const VerifyScdnDomainOwnerRequest& request, const VerifyScdnDomainOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyScdnDomainOwner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScdnClient::VerifyScdnDomainOwnerOutcomeCallable ScdnClient::verifyScdnDomainOwnerCallable(const VerifyScdnDomainOwnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyScdnDomainOwnerOutcome()>>(
			[this, request]()
			{
			return this->verifyScdnDomainOwner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

