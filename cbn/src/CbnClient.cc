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

#include <alibabacloud/cbn/CbnClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

namespace
{
	const std::string SERVICE_NAME = "Cbn";
}

CbnClient::CbnClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cbn");
}

CbnClient::CbnClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cbn");
}

CbnClient::CbnClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cbn");
}

CbnClient::~CbnClient()
{}

CbnClient::ActiveFlowLogOutcome CbnClient::activeFlowLog(const ActiveFlowLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ActiveFlowLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ActiveFlowLogOutcome(ActiveFlowLogResult(outcome.result()));
	else
		return ActiveFlowLogOutcome(outcome.error());
}

void CbnClient::activeFlowLogAsync(const ActiveFlowLogRequest& request, const ActiveFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, activeFlowLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ActiveFlowLogOutcomeCallable CbnClient::activeFlowLogCallable(const ActiveFlowLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ActiveFlowLogOutcome()>>(
			[this, request]()
			{
			return this->activeFlowLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::AssociateCenBandwidthPackageOutcome CbnClient::associateCenBandwidthPackage(const AssociateCenBandwidthPackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateCenBandwidthPackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateCenBandwidthPackageOutcome(AssociateCenBandwidthPackageResult(outcome.result()));
	else
		return AssociateCenBandwidthPackageOutcome(outcome.error());
}

void CbnClient::associateCenBandwidthPackageAsync(const AssociateCenBandwidthPackageRequest& request, const AssociateCenBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateCenBandwidthPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::AssociateCenBandwidthPackageOutcomeCallable CbnClient::associateCenBandwidthPackageCallable(const AssociateCenBandwidthPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateCenBandwidthPackageOutcome()>>(
			[this, request]()
			{
			return this->associateCenBandwidthPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::AttachCenChildInstanceOutcome CbnClient::attachCenChildInstance(const AttachCenChildInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachCenChildInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachCenChildInstanceOutcome(AttachCenChildInstanceResult(outcome.result()));
	else
		return AttachCenChildInstanceOutcome(outcome.error());
}

void CbnClient::attachCenChildInstanceAsync(const AttachCenChildInstanceRequest& request, const AttachCenChildInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachCenChildInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::AttachCenChildInstanceOutcomeCallable CbnClient::attachCenChildInstanceCallable(const AttachCenChildInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachCenChildInstanceOutcome()>>(
			[this, request]()
			{
			return this->attachCenChildInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::CreateCenOutcome CbnClient::createCen(const CreateCenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCenOutcome(CreateCenResult(outcome.result()));
	else
		return CreateCenOutcome(outcome.error());
}

void CbnClient::createCenAsync(const CreateCenRequest& request, const CreateCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCen(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::CreateCenOutcomeCallable CbnClient::createCenCallable(const CreateCenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCenOutcome()>>(
			[this, request]()
			{
			return this->createCen(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::CreateCenBandwidthPackageOutcome CbnClient::createCenBandwidthPackage(const CreateCenBandwidthPackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCenBandwidthPackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCenBandwidthPackageOutcome(CreateCenBandwidthPackageResult(outcome.result()));
	else
		return CreateCenBandwidthPackageOutcome(outcome.error());
}

void CbnClient::createCenBandwidthPackageAsync(const CreateCenBandwidthPackageRequest& request, const CreateCenBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCenBandwidthPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::CreateCenBandwidthPackageOutcomeCallable CbnClient::createCenBandwidthPackageCallable(const CreateCenBandwidthPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCenBandwidthPackageOutcome()>>(
			[this, request]()
			{
			return this->createCenBandwidthPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::CreateCenRouteMapOutcome CbnClient::createCenRouteMap(const CreateCenRouteMapRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCenRouteMapOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCenRouteMapOutcome(CreateCenRouteMapResult(outcome.result()));
	else
		return CreateCenRouteMapOutcome(outcome.error());
}

void CbnClient::createCenRouteMapAsync(const CreateCenRouteMapRequest& request, const CreateCenRouteMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCenRouteMap(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::CreateCenRouteMapOutcomeCallable CbnClient::createCenRouteMapCallable(const CreateCenRouteMapRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCenRouteMapOutcome()>>(
			[this, request]()
			{
			return this->createCenRouteMap(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::CreateFlowlogOutcome CbnClient::createFlowlog(const CreateFlowlogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFlowlogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFlowlogOutcome(CreateFlowlogResult(outcome.result()));
	else
		return CreateFlowlogOutcome(outcome.error());
}

void CbnClient::createFlowlogAsync(const CreateFlowlogRequest& request, const CreateFlowlogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFlowlog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::CreateFlowlogOutcomeCallable CbnClient::createFlowlogCallable(const CreateFlowlogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFlowlogOutcome()>>(
			[this, request]()
			{
			return this->createFlowlog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DeactiveFlowLogOutcome CbnClient::deactiveFlowLog(const DeactiveFlowLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeactiveFlowLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeactiveFlowLogOutcome(DeactiveFlowLogResult(outcome.result()));
	else
		return DeactiveFlowLogOutcome(outcome.error());
}

void CbnClient::deactiveFlowLogAsync(const DeactiveFlowLogRequest& request, const DeactiveFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deactiveFlowLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DeactiveFlowLogOutcomeCallable CbnClient::deactiveFlowLogCallable(const DeactiveFlowLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeactiveFlowLogOutcome()>>(
			[this, request]()
			{
			return this->deactiveFlowLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DeleteCenOutcome CbnClient::deleteCen(const DeleteCenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCenOutcome(DeleteCenResult(outcome.result()));
	else
		return DeleteCenOutcome(outcome.error());
}

void CbnClient::deleteCenAsync(const DeleteCenRequest& request, const DeleteCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCen(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DeleteCenOutcomeCallable CbnClient::deleteCenCallable(const DeleteCenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCenOutcome()>>(
			[this, request]()
			{
			return this->deleteCen(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DeleteCenBandwidthPackageOutcome CbnClient::deleteCenBandwidthPackage(const DeleteCenBandwidthPackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCenBandwidthPackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCenBandwidthPackageOutcome(DeleteCenBandwidthPackageResult(outcome.result()));
	else
		return DeleteCenBandwidthPackageOutcome(outcome.error());
}

void CbnClient::deleteCenBandwidthPackageAsync(const DeleteCenBandwidthPackageRequest& request, const DeleteCenBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCenBandwidthPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DeleteCenBandwidthPackageOutcomeCallable CbnClient::deleteCenBandwidthPackageCallable(const DeleteCenBandwidthPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCenBandwidthPackageOutcome()>>(
			[this, request]()
			{
			return this->deleteCenBandwidthPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DeleteCenRouteMapOutcome CbnClient::deleteCenRouteMap(const DeleteCenRouteMapRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCenRouteMapOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCenRouteMapOutcome(DeleteCenRouteMapResult(outcome.result()));
	else
		return DeleteCenRouteMapOutcome(outcome.error());
}

void CbnClient::deleteCenRouteMapAsync(const DeleteCenRouteMapRequest& request, const DeleteCenRouteMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCenRouteMap(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DeleteCenRouteMapOutcomeCallable CbnClient::deleteCenRouteMapCallable(const DeleteCenRouteMapRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCenRouteMapOutcome()>>(
			[this, request]()
			{
			return this->deleteCenRouteMap(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DeleteFlowlogOutcome CbnClient::deleteFlowlog(const DeleteFlowlogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFlowlogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFlowlogOutcome(DeleteFlowlogResult(outcome.result()));
	else
		return DeleteFlowlogOutcome(outcome.error());
}

void CbnClient::deleteFlowlogAsync(const DeleteFlowlogRequest& request, const DeleteFlowlogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFlowlog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DeleteFlowlogOutcomeCallable CbnClient::deleteFlowlogCallable(const DeleteFlowlogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFlowlogOutcome()>>(
			[this, request]()
			{
			return this->deleteFlowlog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DeleteRouteServiceInCenOutcome CbnClient::deleteRouteServiceInCen(const DeleteRouteServiceInCenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRouteServiceInCenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRouteServiceInCenOutcome(DeleteRouteServiceInCenResult(outcome.result()));
	else
		return DeleteRouteServiceInCenOutcome(outcome.error());
}

void CbnClient::deleteRouteServiceInCenAsync(const DeleteRouteServiceInCenRequest& request, const DeleteRouteServiceInCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRouteServiceInCen(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DeleteRouteServiceInCenOutcomeCallable CbnClient::deleteRouteServiceInCenCallable(const DeleteRouteServiceInCenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRouteServiceInCenOutcome()>>(
			[this, request]()
			{
			return this->deleteRouteServiceInCen(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DescribeCenAttachedChildInstanceAttributeOutcome CbnClient::describeCenAttachedChildInstanceAttribute(const DescribeCenAttachedChildInstanceAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCenAttachedChildInstanceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCenAttachedChildInstanceAttributeOutcome(DescribeCenAttachedChildInstanceAttributeResult(outcome.result()));
	else
		return DescribeCenAttachedChildInstanceAttributeOutcome(outcome.error());
}

void CbnClient::describeCenAttachedChildInstanceAttributeAsync(const DescribeCenAttachedChildInstanceAttributeRequest& request, const DescribeCenAttachedChildInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCenAttachedChildInstanceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DescribeCenAttachedChildInstanceAttributeOutcomeCallable CbnClient::describeCenAttachedChildInstanceAttributeCallable(const DescribeCenAttachedChildInstanceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCenAttachedChildInstanceAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeCenAttachedChildInstanceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DescribeCenAttachedChildInstancesOutcome CbnClient::describeCenAttachedChildInstances(const DescribeCenAttachedChildInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCenAttachedChildInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCenAttachedChildInstancesOutcome(DescribeCenAttachedChildInstancesResult(outcome.result()));
	else
		return DescribeCenAttachedChildInstancesOutcome(outcome.error());
}

void CbnClient::describeCenAttachedChildInstancesAsync(const DescribeCenAttachedChildInstancesRequest& request, const DescribeCenAttachedChildInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCenAttachedChildInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DescribeCenAttachedChildInstancesOutcomeCallable CbnClient::describeCenAttachedChildInstancesCallable(const DescribeCenAttachedChildInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCenAttachedChildInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeCenAttachedChildInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DescribeCenBandwidthPackagesOutcome CbnClient::describeCenBandwidthPackages(const DescribeCenBandwidthPackagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCenBandwidthPackagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCenBandwidthPackagesOutcome(DescribeCenBandwidthPackagesResult(outcome.result()));
	else
		return DescribeCenBandwidthPackagesOutcome(outcome.error());
}

void CbnClient::describeCenBandwidthPackagesAsync(const DescribeCenBandwidthPackagesRequest& request, const DescribeCenBandwidthPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCenBandwidthPackages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DescribeCenBandwidthPackagesOutcomeCallable CbnClient::describeCenBandwidthPackagesCallable(const DescribeCenBandwidthPackagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCenBandwidthPackagesOutcome()>>(
			[this, request]()
			{
			return this->describeCenBandwidthPackages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DescribeCenChildInstanceRouteEntriesOutcome CbnClient::describeCenChildInstanceRouteEntries(const DescribeCenChildInstanceRouteEntriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCenChildInstanceRouteEntriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCenChildInstanceRouteEntriesOutcome(DescribeCenChildInstanceRouteEntriesResult(outcome.result()));
	else
		return DescribeCenChildInstanceRouteEntriesOutcome(outcome.error());
}

void CbnClient::describeCenChildInstanceRouteEntriesAsync(const DescribeCenChildInstanceRouteEntriesRequest& request, const DescribeCenChildInstanceRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCenChildInstanceRouteEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DescribeCenChildInstanceRouteEntriesOutcomeCallable CbnClient::describeCenChildInstanceRouteEntriesCallable(const DescribeCenChildInstanceRouteEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCenChildInstanceRouteEntriesOutcome()>>(
			[this, request]()
			{
			return this->describeCenChildInstanceRouteEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DescribeCenGeographicSpanRemainingBandwidthOutcome CbnClient::describeCenGeographicSpanRemainingBandwidth(const DescribeCenGeographicSpanRemainingBandwidthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCenGeographicSpanRemainingBandwidthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCenGeographicSpanRemainingBandwidthOutcome(DescribeCenGeographicSpanRemainingBandwidthResult(outcome.result()));
	else
		return DescribeCenGeographicSpanRemainingBandwidthOutcome(outcome.error());
}

void CbnClient::describeCenGeographicSpanRemainingBandwidthAsync(const DescribeCenGeographicSpanRemainingBandwidthRequest& request, const DescribeCenGeographicSpanRemainingBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCenGeographicSpanRemainingBandwidth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DescribeCenGeographicSpanRemainingBandwidthOutcomeCallable CbnClient::describeCenGeographicSpanRemainingBandwidthCallable(const DescribeCenGeographicSpanRemainingBandwidthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCenGeographicSpanRemainingBandwidthOutcome()>>(
			[this, request]()
			{
			return this->describeCenGeographicSpanRemainingBandwidth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DescribeCenGeographicSpansOutcome CbnClient::describeCenGeographicSpans(const DescribeCenGeographicSpansRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCenGeographicSpansOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCenGeographicSpansOutcome(DescribeCenGeographicSpansResult(outcome.result()));
	else
		return DescribeCenGeographicSpansOutcome(outcome.error());
}

void CbnClient::describeCenGeographicSpansAsync(const DescribeCenGeographicSpansRequest& request, const DescribeCenGeographicSpansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCenGeographicSpans(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DescribeCenGeographicSpansOutcomeCallable CbnClient::describeCenGeographicSpansCallable(const DescribeCenGeographicSpansRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCenGeographicSpansOutcome()>>(
			[this, request]()
			{
			return this->describeCenGeographicSpans(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DescribeCenInterRegionBandwidthLimitsOutcome CbnClient::describeCenInterRegionBandwidthLimits(const DescribeCenInterRegionBandwidthLimitsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCenInterRegionBandwidthLimitsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCenInterRegionBandwidthLimitsOutcome(DescribeCenInterRegionBandwidthLimitsResult(outcome.result()));
	else
		return DescribeCenInterRegionBandwidthLimitsOutcome(outcome.error());
}

void CbnClient::describeCenInterRegionBandwidthLimitsAsync(const DescribeCenInterRegionBandwidthLimitsRequest& request, const DescribeCenInterRegionBandwidthLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCenInterRegionBandwidthLimits(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DescribeCenInterRegionBandwidthLimitsOutcomeCallable CbnClient::describeCenInterRegionBandwidthLimitsCallable(const DescribeCenInterRegionBandwidthLimitsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCenInterRegionBandwidthLimitsOutcome()>>(
			[this, request]()
			{
			return this->describeCenInterRegionBandwidthLimits(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DescribeCenPrivateZoneRoutesOutcome CbnClient::describeCenPrivateZoneRoutes(const DescribeCenPrivateZoneRoutesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCenPrivateZoneRoutesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCenPrivateZoneRoutesOutcome(DescribeCenPrivateZoneRoutesResult(outcome.result()));
	else
		return DescribeCenPrivateZoneRoutesOutcome(outcome.error());
}

void CbnClient::describeCenPrivateZoneRoutesAsync(const DescribeCenPrivateZoneRoutesRequest& request, const DescribeCenPrivateZoneRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCenPrivateZoneRoutes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DescribeCenPrivateZoneRoutesOutcomeCallable CbnClient::describeCenPrivateZoneRoutesCallable(const DescribeCenPrivateZoneRoutesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCenPrivateZoneRoutesOutcome()>>(
			[this, request]()
			{
			return this->describeCenPrivateZoneRoutes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DescribeCenRegionDomainRouteEntriesOutcome CbnClient::describeCenRegionDomainRouteEntries(const DescribeCenRegionDomainRouteEntriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCenRegionDomainRouteEntriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCenRegionDomainRouteEntriesOutcome(DescribeCenRegionDomainRouteEntriesResult(outcome.result()));
	else
		return DescribeCenRegionDomainRouteEntriesOutcome(outcome.error());
}

void CbnClient::describeCenRegionDomainRouteEntriesAsync(const DescribeCenRegionDomainRouteEntriesRequest& request, const DescribeCenRegionDomainRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCenRegionDomainRouteEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DescribeCenRegionDomainRouteEntriesOutcomeCallable CbnClient::describeCenRegionDomainRouteEntriesCallable(const DescribeCenRegionDomainRouteEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCenRegionDomainRouteEntriesOutcome()>>(
			[this, request]()
			{
			return this->describeCenRegionDomainRouteEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DescribeCenRouteMapsOutcome CbnClient::describeCenRouteMaps(const DescribeCenRouteMapsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCenRouteMapsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCenRouteMapsOutcome(DescribeCenRouteMapsResult(outcome.result()));
	else
		return DescribeCenRouteMapsOutcome(outcome.error());
}

void CbnClient::describeCenRouteMapsAsync(const DescribeCenRouteMapsRequest& request, const DescribeCenRouteMapsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCenRouteMaps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DescribeCenRouteMapsOutcomeCallable CbnClient::describeCenRouteMapsCallable(const DescribeCenRouteMapsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCenRouteMapsOutcome()>>(
			[this, request]()
			{
			return this->describeCenRouteMaps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DescribeCenVbrHealthCheckOutcome CbnClient::describeCenVbrHealthCheck(const DescribeCenVbrHealthCheckRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCenVbrHealthCheckOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCenVbrHealthCheckOutcome(DescribeCenVbrHealthCheckResult(outcome.result()));
	else
		return DescribeCenVbrHealthCheckOutcome(outcome.error());
}

void CbnClient::describeCenVbrHealthCheckAsync(const DescribeCenVbrHealthCheckRequest& request, const DescribeCenVbrHealthCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCenVbrHealthCheck(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DescribeCenVbrHealthCheckOutcomeCallable CbnClient::describeCenVbrHealthCheckCallable(const DescribeCenVbrHealthCheckRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCenVbrHealthCheckOutcome()>>(
			[this, request]()
			{
			return this->describeCenVbrHealthCheck(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DescribeCensOutcome CbnClient::describeCens(const DescribeCensRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCensOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCensOutcome(DescribeCensResult(outcome.result()));
	else
		return DescribeCensOutcome(outcome.error());
}

void CbnClient::describeCensAsync(const DescribeCensRequest& request, const DescribeCensAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCens(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DescribeCensOutcomeCallable CbnClient::describeCensCallable(const DescribeCensRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCensOutcome()>>(
			[this, request]()
			{
			return this->describeCens(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DescribeChildInstanceRegionsOutcome CbnClient::describeChildInstanceRegions(const DescribeChildInstanceRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeChildInstanceRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeChildInstanceRegionsOutcome(DescribeChildInstanceRegionsResult(outcome.result()));
	else
		return DescribeChildInstanceRegionsOutcome(outcome.error());
}

void CbnClient::describeChildInstanceRegionsAsync(const DescribeChildInstanceRegionsRequest& request, const DescribeChildInstanceRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeChildInstanceRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DescribeChildInstanceRegionsOutcomeCallable CbnClient::describeChildInstanceRegionsCallable(const DescribeChildInstanceRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeChildInstanceRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeChildInstanceRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DescribeFlowlogsOutcome CbnClient::describeFlowlogs(const DescribeFlowlogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowlogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowlogsOutcome(DescribeFlowlogsResult(outcome.result()));
	else
		return DescribeFlowlogsOutcome(outcome.error());
}

void CbnClient::describeFlowlogsAsync(const DescribeFlowlogsRequest& request, const DescribeFlowlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowlogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DescribeFlowlogsOutcomeCallable CbnClient::describeFlowlogsCallable(const DescribeFlowlogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowlogsOutcome()>>(
			[this, request]()
			{
			return this->describeFlowlogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DescribeGeographicRegionMembershipOutcome CbnClient::describeGeographicRegionMembership(const DescribeGeographicRegionMembershipRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGeographicRegionMembershipOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGeographicRegionMembershipOutcome(DescribeGeographicRegionMembershipResult(outcome.result()));
	else
		return DescribeGeographicRegionMembershipOutcome(outcome.error());
}

void CbnClient::describeGeographicRegionMembershipAsync(const DescribeGeographicRegionMembershipRequest& request, const DescribeGeographicRegionMembershipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGeographicRegionMembership(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DescribeGeographicRegionMembershipOutcomeCallable CbnClient::describeGeographicRegionMembershipCallable(const DescribeGeographicRegionMembershipRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGeographicRegionMembershipOutcome()>>(
			[this, request]()
			{
			return this->describeGeographicRegionMembership(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DescribeGrantRulesToCenOutcome CbnClient::describeGrantRulesToCen(const DescribeGrantRulesToCenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGrantRulesToCenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGrantRulesToCenOutcome(DescribeGrantRulesToCenResult(outcome.result()));
	else
		return DescribeGrantRulesToCenOutcome(outcome.error());
}

void CbnClient::describeGrantRulesToCenAsync(const DescribeGrantRulesToCenRequest& request, const DescribeGrantRulesToCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGrantRulesToCen(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DescribeGrantRulesToCenOutcomeCallable CbnClient::describeGrantRulesToCenCallable(const DescribeGrantRulesToCenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGrantRulesToCenOutcome()>>(
			[this, request]()
			{
			return this->describeGrantRulesToCen(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DescribePublishedRouteEntriesOutcome CbnClient::describePublishedRouteEntries(const DescribePublishedRouteEntriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePublishedRouteEntriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePublishedRouteEntriesOutcome(DescribePublishedRouteEntriesResult(outcome.result()));
	else
		return DescribePublishedRouteEntriesOutcome(outcome.error());
}

void CbnClient::describePublishedRouteEntriesAsync(const DescribePublishedRouteEntriesRequest& request, const DescribePublishedRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePublishedRouteEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DescribePublishedRouteEntriesOutcomeCallable CbnClient::describePublishedRouteEntriesCallable(const DescribePublishedRouteEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePublishedRouteEntriesOutcome()>>(
			[this, request]()
			{
			return this->describePublishedRouteEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DescribeRouteConflictOutcome CbnClient::describeRouteConflict(const DescribeRouteConflictRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRouteConflictOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRouteConflictOutcome(DescribeRouteConflictResult(outcome.result()));
	else
		return DescribeRouteConflictOutcome(outcome.error());
}

void CbnClient::describeRouteConflictAsync(const DescribeRouteConflictRequest& request, const DescribeRouteConflictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRouteConflict(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DescribeRouteConflictOutcomeCallable CbnClient::describeRouteConflictCallable(const DescribeRouteConflictRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRouteConflictOutcome()>>(
			[this, request]()
			{
			return this->describeRouteConflict(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DescribeRouteServicesInCenOutcome CbnClient::describeRouteServicesInCen(const DescribeRouteServicesInCenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRouteServicesInCenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRouteServicesInCenOutcome(DescribeRouteServicesInCenResult(outcome.result()));
	else
		return DescribeRouteServicesInCenOutcome(outcome.error());
}

void CbnClient::describeRouteServicesInCenAsync(const DescribeRouteServicesInCenRequest& request, const DescribeRouteServicesInCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRouteServicesInCen(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DescribeRouteServicesInCenOutcomeCallable CbnClient::describeRouteServicesInCenCallable(const DescribeRouteServicesInCenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRouteServicesInCenOutcome()>>(
			[this, request]()
			{
			return this->describeRouteServicesInCen(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DetachCenChildInstanceOutcome CbnClient::detachCenChildInstance(const DetachCenChildInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachCenChildInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachCenChildInstanceOutcome(DetachCenChildInstanceResult(outcome.result()));
	else
		return DetachCenChildInstanceOutcome(outcome.error());
}

void CbnClient::detachCenChildInstanceAsync(const DetachCenChildInstanceRequest& request, const DetachCenChildInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachCenChildInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DetachCenChildInstanceOutcomeCallable CbnClient::detachCenChildInstanceCallable(const DetachCenChildInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachCenChildInstanceOutcome()>>(
			[this, request]()
			{
			return this->detachCenChildInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DisableCenVbrHealthCheckOutcome CbnClient::disableCenVbrHealthCheck(const DisableCenVbrHealthCheckRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableCenVbrHealthCheckOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableCenVbrHealthCheckOutcome(DisableCenVbrHealthCheckResult(outcome.result()));
	else
		return DisableCenVbrHealthCheckOutcome(outcome.error());
}

void CbnClient::disableCenVbrHealthCheckAsync(const DisableCenVbrHealthCheckRequest& request, const DisableCenVbrHealthCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableCenVbrHealthCheck(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DisableCenVbrHealthCheckOutcomeCallable CbnClient::disableCenVbrHealthCheckCallable(const DisableCenVbrHealthCheckRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableCenVbrHealthCheckOutcome()>>(
			[this, request]()
			{
			return this->disableCenVbrHealthCheck(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::EnableCenVbrHealthCheckOutcome CbnClient::enableCenVbrHealthCheck(const EnableCenVbrHealthCheckRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableCenVbrHealthCheckOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableCenVbrHealthCheckOutcome(EnableCenVbrHealthCheckResult(outcome.result()));
	else
		return EnableCenVbrHealthCheckOutcome(outcome.error());
}

void CbnClient::enableCenVbrHealthCheckAsync(const EnableCenVbrHealthCheckRequest& request, const EnableCenVbrHealthCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableCenVbrHealthCheck(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::EnableCenVbrHealthCheckOutcomeCallable CbnClient::enableCenVbrHealthCheckCallable(const EnableCenVbrHealthCheckRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableCenVbrHealthCheckOutcome()>>(
			[this, request]()
			{
			return this->enableCenVbrHealthCheck(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ListTagResourcesOutcome CbnClient::listTagResources(const ListTagResourcesRequest &request) const
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

void CbnClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ListTagResourcesOutcomeCallable CbnClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ModifyCenAttributeOutcome CbnClient::modifyCenAttribute(const ModifyCenAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCenAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCenAttributeOutcome(ModifyCenAttributeResult(outcome.result()));
	else
		return ModifyCenAttributeOutcome(outcome.error());
}

void CbnClient::modifyCenAttributeAsync(const ModifyCenAttributeRequest& request, const ModifyCenAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCenAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ModifyCenAttributeOutcomeCallable CbnClient::modifyCenAttributeCallable(const ModifyCenAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCenAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyCenAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ModifyCenBandwidthPackageAttributeOutcome CbnClient::modifyCenBandwidthPackageAttribute(const ModifyCenBandwidthPackageAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCenBandwidthPackageAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCenBandwidthPackageAttributeOutcome(ModifyCenBandwidthPackageAttributeResult(outcome.result()));
	else
		return ModifyCenBandwidthPackageAttributeOutcome(outcome.error());
}

void CbnClient::modifyCenBandwidthPackageAttributeAsync(const ModifyCenBandwidthPackageAttributeRequest& request, const ModifyCenBandwidthPackageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCenBandwidthPackageAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ModifyCenBandwidthPackageAttributeOutcomeCallable CbnClient::modifyCenBandwidthPackageAttributeCallable(const ModifyCenBandwidthPackageAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCenBandwidthPackageAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyCenBandwidthPackageAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ModifyCenBandwidthPackageSpecOutcome CbnClient::modifyCenBandwidthPackageSpec(const ModifyCenBandwidthPackageSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCenBandwidthPackageSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCenBandwidthPackageSpecOutcome(ModifyCenBandwidthPackageSpecResult(outcome.result()));
	else
		return ModifyCenBandwidthPackageSpecOutcome(outcome.error());
}

void CbnClient::modifyCenBandwidthPackageSpecAsync(const ModifyCenBandwidthPackageSpecRequest& request, const ModifyCenBandwidthPackageSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCenBandwidthPackageSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ModifyCenBandwidthPackageSpecOutcomeCallable CbnClient::modifyCenBandwidthPackageSpecCallable(const ModifyCenBandwidthPackageSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCenBandwidthPackageSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyCenBandwidthPackageSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ModifyCenRouteMapOutcome CbnClient::modifyCenRouteMap(const ModifyCenRouteMapRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCenRouteMapOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCenRouteMapOutcome(ModifyCenRouteMapResult(outcome.result()));
	else
		return ModifyCenRouteMapOutcome(outcome.error());
}

void CbnClient::modifyCenRouteMapAsync(const ModifyCenRouteMapRequest& request, const ModifyCenRouteMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCenRouteMap(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ModifyCenRouteMapOutcomeCallable CbnClient::modifyCenRouteMapCallable(const ModifyCenRouteMapRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCenRouteMapOutcome()>>(
			[this, request]()
			{
			return this->modifyCenRouteMap(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ModifyFlowLogAttributeOutcome CbnClient::modifyFlowLogAttribute(const ModifyFlowLogAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyFlowLogAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyFlowLogAttributeOutcome(ModifyFlowLogAttributeResult(outcome.result()));
	else
		return ModifyFlowLogAttributeOutcome(outcome.error());
}

void CbnClient::modifyFlowLogAttributeAsync(const ModifyFlowLogAttributeRequest& request, const ModifyFlowLogAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyFlowLogAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ModifyFlowLogAttributeOutcomeCallable CbnClient::modifyFlowLogAttributeCallable(const ModifyFlowLogAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyFlowLogAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyFlowLogAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::PublishRouteEntriesOutcome CbnClient::publishRouteEntries(const PublishRouteEntriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishRouteEntriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishRouteEntriesOutcome(PublishRouteEntriesResult(outcome.result()));
	else
		return PublishRouteEntriesOutcome(outcome.error());
}

void CbnClient::publishRouteEntriesAsync(const PublishRouteEntriesRequest& request, const PublishRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishRouteEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::PublishRouteEntriesOutcomeCallable CbnClient::publishRouteEntriesCallable(const PublishRouteEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishRouteEntriesOutcome()>>(
			[this, request]()
			{
			return this->publishRouteEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ResolveAndRouteServiceInCenOutcome CbnClient::resolveAndRouteServiceInCen(const ResolveAndRouteServiceInCenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResolveAndRouteServiceInCenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResolveAndRouteServiceInCenOutcome(ResolveAndRouteServiceInCenResult(outcome.result()));
	else
		return ResolveAndRouteServiceInCenOutcome(outcome.error());
}

void CbnClient::resolveAndRouteServiceInCenAsync(const ResolveAndRouteServiceInCenRequest& request, const ResolveAndRouteServiceInCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resolveAndRouteServiceInCen(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ResolveAndRouteServiceInCenOutcomeCallable CbnClient::resolveAndRouteServiceInCenCallable(const ResolveAndRouteServiceInCenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResolveAndRouteServiceInCenOutcome()>>(
			[this, request]()
			{
			return this->resolveAndRouteServiceInCen(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::RoutePrivateZoneInCenToVpcOutcome CbnClient::routePrivateZoneInCenToVpc(const RoutePrivateZoneInCenToVpcRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RoutePrivateZoneInCenToVpcOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RoutePrivateZoneInCenToVpcOutcome(RoutePrivateZoneInCenToVpcResult(outcome.result()));
	else
		return RoutePrivateZoneInCenToVpcOutcome(outcome.error());
}

void CbnClient::routePrivateZoneInCenToVpcAsync(const RoutePrivateZoneInCenToVpcRequest& request, const RoutePrivateZoneInCenToVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, routePrivateZoneInCenToVpc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::RoutePrivateZoneInCenToVpcOutcomeCallable CbnClient::routePrivateZoneInCenToVpcCallable(const RoutePrivateZoneInCenToVpcRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RoutePrivateZoneInCenToVpcOutcome()>>(
			[this, request]()
			{
			return this->routePrivateZoneInCenToVpc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::SetCenInterRegionBandwidthLimitOutcome CbnClient::setCenInterRegionBandwidthLimit(const SetCenInterRegionBandwidthLimitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetCenInterRegionBandwidthLimitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetCenInterRegionBandwidthLimitOutcome(SetCenInterRegionBandwidthLimitResult(outcome.result()));
	else
		return SetCenInterRegionBandwidthLimitOutcome(outcome.error());
}

void CbnClient::setCenInterRegionBandwidthLimitAsync(const SetCenInterRegionBandwidthLimitRequest& request, const SetCenInterRegionBandwidthLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setCenInterRegionBandwidthLimit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::SetCenInterRegionBandwidthLimitOutcomeCallable CbnClient::setCenInterRegionBandwidthLimitCallable(const SetCenInterRegionBandwidthLimitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetCenInterRegionBandwidthLimitOutcome()>>(
			[this, request]()
			{
			return this->setCenInterRegionBandwidthLimit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::TagResourcesOutcome CbnClient::tagResources(const TagResourcesRequest &request) const
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

void CbnClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::TagResourcesOutcomeCallable CbnClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::UnassociateCenBandwidthPackageOutcome CbnClient::unassociateCenBandwidthPackage(const UnassociateCenBandwidthPackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnassociateCenBandwidthPackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnassociateCenBandwidthPackageOutcome(UnassociateCenBandwidthPackageResult(outcome.result()));
	else
		return UnassociateCenBandwidthPackageOutcome(outcome.error());
}

void CbnClient::unassociateCenBandwidthPackageAsync(const UnassociateCenBandwidthPackageRequest& request, const UnassociateCenBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unassociateCenBandwidthPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::UnassociateCenBandwidthPackageOutcomeCallable CbnClient::unassociateCenBandwidthPackageCallable(const UnassociateCenBandwidthPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnassociateCenBandwidthPackageOutcome()>>(
			[this, request]()
			{
			return this->unassociateCenBandwidthPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::UnroutePrivateZoneInCenToVpcOutcome CbnClient::unroutePrivateZoneInCenToVpc(const UnroutePrivateZoneInCenToVpcRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnroutePrivateZoneInCenToVpcOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnroutePrivateZoneInCenToVpcOutcome(UnroutePrivateZoneInCenToVpcResult(outcome.result()));
	else
		return UnroutePrivateZoneInCenToVpcOutcome(outcome.error());
}

void CbnClient::unroutePrivateZoneInCenToVpcAsync(const UnroutePrivateZoneInCenToVpcRequest& request, const UnroutePrivateZoneInCenToVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unroutePrivateZoneInCenToVpc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::UnroutePrivateZoneInCenToVpcOutcomeCallable CbnClient::unroutePrivateZoneInCenToVpcCallable(const UnroutePrivateZoneInCenToVpcRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnroutePrivateZoneInCenToVpcOutcome()>>(
			[this, request]()
			{
			return this->unroutePrivateZoneInCenToVpc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::UntagResourcesOutcome CbnClient::untagResources(const UntagResourcesRequest &request) const
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

void CbnClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::UntagResourcesOutcomeCallable CbnClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::WithdrawPublishedRouteEntriesOutcome CbnClient::withdrawPublishedRouteEntries(const WithdrawPublishedRouteEntriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return WithdrawPublishedRouteEntriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return WithdrawPublishedRouteEntriesOutcome(WithdrawPublishedRouteEntriesResult(outcome.result()));
	else
		return WithdrawPublishedRouteEntriesOutcome(outcome.error());
}

void CbnClient::withdrawPublishedRouteEntriesAsync(const WithdrawPublishedRouteEntriesRequest& request, const WithdrawPublishedRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, withdrawPublishedRouteEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::WithdrawPublishedRouteEntriesOutcomeCallable CbnClient::withdrawPublishedRouteEntriesCallable(const WithdrawPublishedRouteEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<WithdrawPublishedRouteEntriesOutcome()>>(
			[this, request]()
			{
			return this->withdrawPublishedRouteEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

