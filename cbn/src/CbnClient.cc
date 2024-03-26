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

CbnClient::AddTrafficMatchRuleToTrafficMarkingPolicyOutcome CbnClient::addTrafficMatchRuleToTrafficMarkingPolicy(const AddTrafficMatchRuleToTrafficMarkingPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddTrafficMatchRuleToTrafficMarkingPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddTrafficMatchRuleToTrafficMarkingPolicyOutcome(AddTrafficMatchRuleToTrafficMarkingPolicyResult(outcome.result()));
	else
		return AddTrafficMatchRuleToTrafficMarkingPolicyOutcome(outcome.error());
}

void CbnClient::addTrafficMatchRuleToTrafficMarkingPolicyAsync(const AddTrafficMatchRuleToTrafficMarkingPolicyRequest& request, const AddTrafficMatchRuleToTrafficMarkingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addTrafficMatchRuleToTrafficMarkingPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::AddTrafficMatchRuleToTrafficMarkingPolicyOutcomeCallable CbnClient::addTrafficMatchRuleToTrafficMarkingPolicyCallable(const AddTrafficMatchRuleToTrafficMarkingPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddTrafficMatchRuleToTrafficMarkingPolicyOutcome()>>(
			[this, request]()
			{
			return this->addTrafficMatchRuleToTrafficMarkingPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::AddTraficMatchRuleToTrafficMarkingPolicyOutcome CbnClient::addTraficMatchRuleToTrafficMarkingPolicy(const AddTraficMatchRuleToTrafficMarkingPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddTraficMatchRuleToTrafficMarkingPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddTraficMatchRuleToTrafficMarkingPolicyOutcome(AddTraficMatchRuleToTrafficMarkingPolicyResult(outcome.result()));
	else
		return AddTraficMatchRuleToTrafficMarkingPolicyOutcome(outcome.error());
}

void CbnClient::addTraficMatchRuleToTrafficMarkingPolicyAsync(const AddTraficMatchRuleToTrafficMarkingPolicyRequest& request, const AddTraficMatchRuleToTrafficMarkingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addTraficMatchRuleToTrafficMarkingPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::AddTraficMatchRuleToTrafficMarkingPolicyOutcomeCallable CbnClient::addTraficMatchRuleToTrafficMarkingPolicyCallable(const AddTraficMatchRuleToTrafficMarkingPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddTraficMatchRuleToTrafficMarkingPolicyOutcome()>>(
			[this, request]()
			{
			return this->addTraficMatchRuleToTrafficMarkingPolicy(request);
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

CbnClient::AssociateTransitRouterAttachmentWithRouteTableOutcome CbnClient::associateTransitRouterAttachmentWithRouteTable(const AssociateTransitRouterAttachmentWithRouteTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateTransitRouterAttachmentWithRouteTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateTransitRouterAttachmentWithRouteTableOutcome(AssociateTransitRouterAttachmentWithRouteTableResult(outcome.result()));
	else
		return AssociateTransitRouterAttachmentWithRouteTableOutcome(outcome.error());
}

void CbnClient::associateTransitRouterAttachmentWithRouteTableAsync(const AssociateTransitRouterAttachmentWithRouteTableRequest& request, const AssociateTransitRouterAttachmentWithRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateTransitRouterAttachmentWithRouteTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::AssociateTransitRouterAttachmentWithRouteTableOutcomeCallable CbnClient::associateTransitRouterAttachmentWithRouteTableCallable(const AssociateTransitRouterAttachmentWithRouteTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateTransitRouterAttachmentWithRouteTableOutcome()>>(
			[this, request]()
			{
			return this->associateTransitRouterAttachmentWithRouteTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::AssociateTransitRouterMulticastDomainOutcome CbnClient::associateTransitRouterMulticastDomain(const AssociateTransitRouterMulticastDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateTransitRouterMulticastDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateTransitRouterMulticastDomainOutcome(AssociateTransitRouterMulticastDomainResult(outcome.result()));
	else
		return AssociateTransitRouterMulticastDomainOutcome(outcome.error());
}

void CbnClient::associateTransitRouterMulticastDomainAsync(const AssociateTransitRouterMulticastDomainRequest& request, const AssociateTransitRouterMulticastDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateTransitRouterMulticastDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::AssociateTransitRouterMulticastDomainOutcomeCallable CbnClient::associateTransitRouterMulticastDomainCallable(const AssociateTransitRouterMulticastDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateTransitRouterMulticastDomainOutcome()>>(
			[this, request]()
			{
			return this->associateTransitRouterMulticastDomain(request);
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

CbnClient::CheckTransitRouterServiceOutcome CbnClient::checkTransitRouterService(const CheckTransitRouterServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckTransitRouterServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckTransitRouterServiceOutcome(CheckTransitRouterServiceResult(outcome.result()));
	else
		return CheckTransitRouterServiceOutcome(outcome.error());
}

void CbnClient::checkTransitRouterServiceAsync(const CheckTransitRouterServiceRequest& request, const CheckTransitRouterServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkTransitRouterService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::CheckTransitRouterServiceOutcomeCallable CbnClient::checkTransitRouterServiceCallable(const CheckTransitRouterServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckTransitRouterServiceOutcome()>>(
			[this, request]()
			{
			return this->checkTransitRouterService(request);
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

CbnClient::CreateCenChildInstanceRouteEntryToAttachmentOutcome CbnClient::createCenChildInstanceRouteEntryToAttachment(const CreateCenChildInstanceRouteEntryToAttachmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCenChildInstanceRouteEntryToAttachmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCenChildInstanceRouteEntryToAttachmentOutcome(CreateCenChildInstanceRouteEntryToAttachmentResult(outcome.result()));
	else
		return CreateCenChildInstanceRouteEntryToAttachmentOutcome(outcome.error());
}

void CbnClient::createCenChildInstanceRouteEntryToAttachmentAsync(const CreateCenChildInstanceRouteEntryToAttachmentRequest& request, const CreateCenChildInstanceRouteEntryToAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCenChildInstanceRouteEntryToAttachment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::CreateCenChildInstanceRouteEntryToAttachmentOutcomeCallable CbnClient::createCenChildInstanceRouteEntryToAttachmentCallable(const CreateCenChildInstanceRouteEntryToAttachmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCenChildInstanceRouteEntryToAttachmentOutcome()>>(
			[this, request]()
			{
			return this->createCenChildInstanceRouteEntryToAttachment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::CreateCenChildInstanceRouteEntryToCenOutcome CbnClient::createCenChildInstanceRouteEntryToCen(const CreateCenChildInstanceRouteEntryToCenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCenChildInstanceRouteEntryToCenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCenChildInstanceRouteEntryToCenOutcome(CreateCenChildInstanceRouteEntryToCenResult(outcome.result()));
	else
		return CreateCenChildInstanceRouteEntryToCenOutcome(outcome.error());
}

void CbnClient::createCenChildInstanceRouteEntryToCenAsync(const CreateCenChildInstanceRouteEntryToCenRequest& request, const CreateCenChildInstanceRouteEntryToCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCenChildInstanceRouteEntryToCen(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::CreateCenChildInstanceRouteEntryToCenOutcomeCallable CbnClient::createCenChildInstanceRouteEntryToCenCallable(const CreateCenChildInstanceRouteEntryToCenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCenChildInstanceRouteEntryToCenOutcome()>>(
			[this, request]()
			{
			return this->createCenChildInstanceRouteEntryToCen(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::CreateCenInterRegionTrafficQosPolicyOutcome CbnClient::createCenInterRegionTrafficQosPolicy(const CreateCenInterRegionTrafficQosPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCenInterRegionTrafficQosPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCenInterRegionTrafficQosPolicyOutcome(CreateCenInterRegionTrafficQosPolicyResult(outcome.result()));
	else
		return CreateCenInterRegionTrafficQosPolicyOutcome(outcome.error());
}

void CbnClient::createCenInterRegionTrafficQosPolicyAsync(const CreateCenInterRegionTrafficQosPolicyRequest& request, const CreateCenInterRegionTrafficQosPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCenInterRegionTrafficQosPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::CreateCenInterRegionTrafficQosPolicyOutcomeCallable CbnClient::createCenInterRegionTrafficQosPolicyCallable(const CreateCenInterRegionTrafficQosPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCenInterRegionTrafficQosPolicyOutcome()>>(
			[this, request]()
			{
			return this->createCenInterRegionTrafficQosPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::CreateCenInterRegionTrafficQosQueueOutcome CbnClient::createCenInterRegionTrafficQosQueue(const CreateCenInterRegionTrafficQosQueueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCenInterRegionTrafficQosQueueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCenInterRegionTrafficQosQueueOutcome(CreateCenInterRegionTrafficQosQueueResult(outcome.result()));
	else
		return CreateCenInterRegionTrafficQosQueueOutcome(outcome.error());
}

void CbnClient::createCenInterRegionTrafficQosQueueAsync(const CreateCenInterRegionTrafficQosQueueRequest& request, const CreateCenInterRegionTrafficQosQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCenInterRegionTrafficQosQueue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::CreateCenInterRegionTrafficQosQueueOutcomeCallable CbnClient::createCenInterRegionTrafficQosQueueCallable(const CreateCenInterRegionTrafficQosQueueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCenInterRegionTrafficQosQueueOutcome()>>(
			[this, request]()
			{
			return this->createCenInterRegionTrafficQosQueue(request);
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

CbnClient::CreateTrafficMarkingPolicyOutcome CbnClient::createTrafficMarkingPolicy(const CreateTrafficMarkingPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTrafficMarkingPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTrafficMarkingPolicyOutcome(CreateTrafficMarkingPolicyResult(outcome.result()));
	else
		return CreateTrafficMarkingPolicyOutcome(outcome.error());
}

void CbnClient::createTrafficMarkingPolicyAsync(const CreateTrafficMarkingPolicyRequest& request, const CreateTrafficMarkingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTrafficMarkingPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::CreateTrafficMarkingPolicyOutcomeCallable CbnClient::createTrafficMarkingPolicyCallable(const CreateTrafficMarkingPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTrafficMarkingPolicyOutcome()>>(
			[this, request]()
			{
			return this->createTrafficMarkingPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::CreateTransitRouteTableAggregationOutcome CbnClient::createTransitRouteTableAggregation(const CreateTransitRouteTableAggregationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTransitRouteTableAggregationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTransitRouteTableAggregationOutcome(CreateTransitRouteTableAggregationResult(outcome.result()));
	else
		return CreateTransitRouteTableAggregationOutcome(outcome.error());
}

void CbnClient::createTransitRouteTableAggregationAsync(const CreateTransitRouteTableAggregationRequest& request, const CreateTransitRouteTableAggregationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTransitRouteTableAggregation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::CreateTransitRouteTableAggregationOutcomeCallable CbnClient::createTransitRouteTableAggregationCallable(const CreateTransitRouteTableAggregationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTransitRouteTableAggregationOutcome()>>(
			[this, request]()
			{
			return this->createTransitRouteTableAggregation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::CreateTransitRouterOutcome CbnClient::createTransitRouter(const CreateTransitRouterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTransitRouterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTransitRouterOutcome(CreateTransitRouterResult(outcome.result()));
	else
		return CreateTransitRouterOutcome(outcome.error());
}

void CbnClient::createTransitRouterAsync(const CreateTransitRouterRequest& request, const CreateTransitRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTransitRouter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::CreateTransitRouterOutcomeCallable CbnClient::createTransitRouterCallable(const CreateTransitRouterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTransitRouterOutcome()>>(
			[this, request]()
			{
			return this->createTransitRouter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::CreateTransitRouterCidrOutcome CbnClient::createTransitRouterCidr(const CreateTransitRouterCidrRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTransitRouterCidrOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTransitRouterCidrOutcome(CreateTransitRouterCidrResult(outcome.result()));
	else
		return CreateTransitRouterCidrOutcome(outcome.error());
}

void CbnClient::createTransitRouterCidrAsync(const CreateTransitRouterCidrRequest& request, const CreateTransitRouterCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTransitRouterCidr(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::CreateTransitRouterCidrOutcomeCallable CbnClient::createTransitRouterCidrCallable(const CreateTransitRouterCidrRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTransitRouterCidrOutcome()>>(
			[this, request]()
			{
			return this->createTransitRouterCidr(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::CreateTransitRouterEcrAttachmentOutcome CbnClient::createTransitRouterEcrAttachment(const CreateTransitRouterEcrAttachmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTransitRouterEcrAttachmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTransitRouterEcrAttachmentOutcome(CreateTransitRouterEcrAttachmentResult(outcome.result()));
	else
		return CreateTransitRouterEcrAttachmentOutcome(outcome.error());
}

void CbnClient::createTransitRouterEcrAttachmentAsync(const CreateTransitRouterEcrAttachmentRequest& request, const CreateTransitRouterEcrAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTransitRouterEcrAttachment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::CreateTransitRouterEcrAttachmentOutcomeCallable CbnClient::createTransitRouterEcrAttachmentCallable(const CreateTransitRouterEcrAttachmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTransitRouterEcrAttachmentOutcome()>>(
			[this, request]()
			{
			return this->createTransitRouterEcrAttachment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::CreateTransitRouterMulticastDomainOutcome CbnClient::createTransitRouterMulticastDomain(const CreateTransitRouterMulticastDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTransitRouterMulticastDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTransitRouterMulticastDomainOutcome(CreateTransitRouterMulticastDomainResult(outcome.result()));
	else
		return CreateTransitRouterMulticastDomainOutcome(outcome.error());
}

void CbnClient::createTransitRouterMulticastDomainAsync(const CreateTransitRouterMulticastDomainRequest& request, const CreateTransitRouterMulticastDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTransitRouterMulticastDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::CreateTransitRouterMulticastDomainOutcomeCallable CbnClient::createTransitRouterMulticastDomainCallable(const CreateTransitRouterMulticastDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTransitRouterMulticastDomainOutcome()>>(
			[this, request]()
			{
			return this->createTransitRouterMulticastDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::CreateTransitRouterPeerAttachmentOutcome CbnClient::createTransitRouterPeerAttachment(const CreateTransitRouterPeerAttachmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTransitRouterPeerAttachmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTransitRouterPeerAttachmentOutcome(CreateTransitRouterPeerAttachmentResult(outcome.result()));
	else
		return CreateTransitRouterPeerAttachmentOutcome(outcome.error());
}

void CbnClient::createTransitRouterPeerAttachmentAsync(const CreateTransitRouterPeerAttachmentRequest& request, const CreateTransitRouterPeerAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTransitRouterPeerAttachment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::CreateTransitRouterPeerAttachmentOutcomeCallable CbnClient::createTransitRouterPeerAttachmentCallable(const CreateTransitRouterPeerAttachmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTransitRouterPeerAttachmentOutcome()>>(
			[this, request]()
			{
			return this->createTransitRouterPeerAttachment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::CreateTransitRouterPrefixListAssociationOutcome CbnClient::createTransitRouterPrefixListAssociation(const CreateTransitRouterPrefixListAssociationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTransitRouterPrefixListAssociationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTransitRouterPrefixListAssociationOutcome(CreateTransitRouterPrefixListAssociationResult(outcome.result()));
	else
		return CreateTransitRouterPrefixListAssociationOutcome(outcome.error());
}

void CbnClient::createTransitRouterPrefixListAssociationAsync(const CreateTransitRouterPrefixListAssociationRequest& request, const CreateTransitRouterPrefixListAssociationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTransitRouterPrefixListAssociation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::CreateTransitRouterPrefixListAssociationOutcomeCallable CbnClient::createTransitRouterPrefixListAssociationCallable(const CreateTransitRouterPrefixListAssociationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTransitRouterPrefixListAssociationOutcome()>>(
			[this, request]()
			{
			return this->createTransitRouterPrefixListAssociation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::CreateTransitRouterRouteEntryOutcome CbnClient::createTransitRouterRouteEntry(const CreateTransitRouterRouteEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTransitRouterRouteEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTransitRouterRouteEntryOutcome(CreateTransitRouterRouteEntryResult(outcome.result()));
	else
		return CreateTransitRouterRouteEntryOutcome(outcome.error());
}

void CbnClient::createTransitRouterRouteEntryAsync(const CreateTransitRouterRouteEntryRequest& request, const CreateTransitRouterRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTransitRouterRouteEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::CreateTransitRouterRouteEntryOutcomeCallable CbnClient::createTransitRouterRouteEntryCallable(const CreateTransitRouterRouteEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTransitRouterRouteEntryOutcome()>>(
			[this, request]()
			{
			return this->createTransitRouterRouteEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::CreateTransitRouterRouteTableOutcome CbnClient::createTransitRouterRouteTable(const CreateTransitRouterRouteTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTransitRouterRouteTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTransitRouterRouteTableOutcome(CreateTransitRouterRouteTableResult(outcome.result()));
	else
		return CreateTransitRouterRouteTableOutcome(outcome.error());
}

void CbnClient::createTransitRouterRouteTableAsync(const CreateTransitRouterRouteTableRequest& request, const CreateTransitRouterRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTransitRouterRouteTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::CreateTransitRouterRouteTableOutcomeCallable CbnClient::createTransitRouterRouteTableCallable(const CreateTransitRouterRouteTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTransitRouterRouteTableOutcome()>>(
			[this, request]()
			{
			return this->createTransitRouterRouteTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::CreateTransitRouterVbrAttachmentOutcome CbnClient::createTransitRouterVbrAttachment(const CreateTransitRouterVbrAttachmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTransitRouterVbrAttachmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTransitRouterVbrAttachmentOutcome(CreateTransitRouterVbrAttachmentResult(outcome.result()));
	else
		return CreateTransitRouterVbrAttachmentOutcome(outcome.error());
}

void CbnClient::createTransitRouterVbrAttachmentAsync(const CreateTransitRouterVbrAttachmentRequest& request, const CreateTransitRouterVbrAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTransitRouterVbrAttachment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::CreateTransitRouterVbrAttachmentOutcomeCallable CbnClient::createTransitRouterVbrAttachmentCallable(const CreateTransitRouterVbrAttachmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTransitRouterVbrAttachmentOutcome()>>(
			[this, request]()
			{
			return this->createTransitRouterVbrAttachment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::CreateTransitRouterVpcAttachmentOutcome CbnClient::createTransitRouterVpcAttachment(const CreateTransitRouterVpcAttachmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTransitRouterVpcAttachmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTransitRouterVpcAttachmentOutcome(CreateTransitRouterVpcAttachmentResult(outcome.result()));
	else
		return CreateTransitRouterVpcAttachmentOutcome(outcome.error());
}

void CbnClient::createTransitRouterVpcAttachmentAsync(const CreateTransitRouterVpcAttachmentRequest& request, const CreateTransitRouterVpcAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTransitRouterVpcAttachment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::CreateTransitRouterVpcAttachmentOutcomeCallable CbnClient::createTransitRouterVpcAttachmentCallable(const CreateTransitRouterVpcAttachmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTransitRouterVpcAttachmentOutcome()>>(
			[this, request]()
			{
			return this->createTransitRouterVpcAttachment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::CreateTransitRouterVpnAttachmentOutcome CbnClient::createTransitRouterVpnAttachment(const CreateTransitRouterVpnAttachmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTransitRouterVpnAttachmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTransitRouterVpnAttachmentOutcome(CreateTransitRouterVpnAttachmentResult(outcome.result()));
	else
		return CreateTransitRouterVpnAttachmentOutcome(outcome.error());
}

void CbnClient::createTransitRouterVpnAttachmentAsync(const CreateTransitRouterVpnAttachmentRequest& request, const CreateTransitRouterVpnAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTransitRouterVpnAttachment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::CreateTransitRouterVpnAttachmentOutcomeCallable CbnClient::createTransitRouterVpnAttachmentCallable(const CreateTransitRouterVpnAttachmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTransitRouterVpnAttachmentOutcome()>>(
			[this, request]()
			{
			return this->createTransitRouterVpnAttachment(request);
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

CbnClient::DeleteCenChildInstanceRouteEntryToAttachmentOutcome CbnClient::deleteCenChildInstanceRouteEntryToAttachment(const DeleteCenChildInstanceRouteEntryToAttachmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCenChildInstanceRouteEntryToAttachmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCenChildInstanceRouteEntryToAttachmentOutcome(DeleteCenChildInstanceRouteEntryToAttachmentResult(outcome.result()));
	else
		return DeleteCenChildInstanceRouteEntryToAttachmentOutcome(outcome.error());
}

void CbnClient::deleteCenChildInstanceRouteEntryToAttachmentAsync(const DeleteCenChildInstanceRouteEntryToAttachmentRequest& request, const DeleteCenChildInstanceRouteEntryToAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCenChildInstanceRouteEntryToAttachment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DeleteCenChildInstanceRouteEntryToAttachmentOutcomeCallable CbnClient::deleteCenChildInstanceRouteEntryToAttachmentCallable(const DeleteCenChildInstanceRouteEntryToAttachmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCenChildInstanceRouteEntryToAttachmentOutcome()>>(
			[this, request]()
			{
			return this->deleteCenChildInstanceRouteEntryToAttachment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DeleteCenChildInstanceRouteEntryToCenOutcome CbnClient::deleteCenChildInstanceRouteEntryToCen(const DeleteCenChildInstanceRouteEntryToCenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCenChildInstanceRouteEntryToCenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCenChildInstanceRouteEntryToCenOutcome(DeleteCenChildInstanceRouteEntryToCenResult(outcome.result()));
	else
		return DeleteCenChildInstanceRouteEntryToCenOutcome(outcome.error());
}

void CbnClient::deleteCenChildInstanceRouteEntryToCenAsync(const DeleteCenChildInstanceRouteEntryToCenRequest& request, const DeleteCenChildInstanceRouteEntryToCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCenChildInstanceRouteEntryToCen(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DeleteCenChildInstanceRouteEntryToCenOutcomeCallable CbnClient::deleteCenChildInstanceRouteEntryToCenCallable(const DeleteCenChildInstanceRouteEntryToCenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCenChildInstanceRouteEntryToCenOutcome()>>(
			[this, request]()
			{
			return this->deleteCenChildInstanceRouteEntryToCen(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DeleteCenInterRegionTrafficQosPolicyOutcome CbnClient::deleteCenInterRegionTrafficQosPolicy(const DeleteCenInterRegionTrafficQosPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCenInterRegionTrafficQosPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCenInterRegionTrafficQosPolicyOutcome(DeleteCenInterRegionTrafficQosPolicyResult(outcome.result()));
	else
		return DeleteCenInterRegionTrafficQosPolicyOutcome(outcome.error());
}

void CbnClient::deleteCenInterRegionTrafficQosPolicyAsync(const DeleteCenInterRegionTrafficQosPolicyRequest& request, const DeleteCenInterRegionTrafficQosPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCenInterRegionTrafficQosPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DeleteCenInterRegionTrafficQosPolicyOutcomeCallable CbnClient::deleteCenInterRegionTrafficQosPolicyCallable(const DeleteCenInterRegionTrafficQosPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCenInterRegionTrafficQosPolicyOutcome()>>(
			[this, request]()
			{
			return this->deleteCenInterRegionTrafficQosPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DeleteCenInterRegionTrafficQosQueueOutcome CbnClient::deleteCenInterRegionTrafficQosQueue(const DeleteCenInterRegionTrafficQosQueueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCenInterRegionTrafficQosQueueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCenInterRegionTrafficQosQueueOutcome(DeleteCenInterRegionTrafficQosQueueResult(outcome.result()));
	else
		return DeleteCenInterRegionTrafficQosQueueOutcome(outcome.error());
}

void CbnClient::deleteCenInterRegionTrafficQosQueueAsync(const DeleteCenInterRegionTrafficQosQueueRequest& request, const DeleteCenInterRegionTrafficQosQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCenInterRegionTrafficQosQueue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DeleteCenInterRegionTrafficQosQueueOutcomeCallable CbnClient::deleteCenInterRegionTrafficQosQueueCallable(const DeleteCenInterRegionTrafficQosQueueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCenInterRegionTrafficQosQueueOutcome()>>(
			[this, request]()
			{
			return this->deleteCenInterRegionTrafficQosQueue(request);
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

CbnClient::DeleteTrafficMarkingPolicyOutcome CbnClient::deleteTrafficMarkingPolicy(const DeleteTrafficMarkingPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTrafficMarkingPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTrafficMarkingPolicyOutcome(DeleteTrafficMarkingPolicyResult(outcome.result()));
	else
		return DeleteTrafficMarkingPolicyOutcome(outcome.error());
}

void CbnClient::deleteTrafficMarkingPolicyAsync(const DeleteTrafficMarkingPolicyRequest& request, const DeleteTrafficMarkingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTrafficMarkingPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DeleteTrafficMarkingPolicyOutcomeCallable CbnClient::deleteTrafficMarkingPolicyCallable(const DeleteTrafficMarkingPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTrafficMarkingPolicyOutcome()>>(
			[this, request]()
			{
			return this->deleteTrafficMarkingPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DeleteTransitRouteTableAggregationOutcome CbnClient::deleteTransitRouteTableAggregation(const DeleteTransitRouteTableAggregationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTransitRouteTableAggregationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTransitRouteTableAggregationOutcome(DeleteTransitRouteTableAggregationResult(outcome.result()));
	else
		return DeleteTransitRouteTableAggregationOutcome(outcome.error());
}

void CbnClient::deleteTransitRouteTableAggregationAsync(const DeleteTransitRouteTableAggregationRequest& request, const DeleteTransitRouteTableAggregationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTransitRouteTableAggregation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DeleteTransitRouteTableAggregationOutcomeCallable CbnClient::deleteTransitRouteTableAggregationCallable(const DeleteTransitRouteTableAggregationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTransitRouteTableAggregationOutcome()>>(
			[this, request]()
			{
			return this->deleteTransitRouteTableAggregation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DeleteTransitRouterOutcome CbnClient::deleteTransitRouter(const DeleteTransitRouterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTransitRouterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTransitRouterOutcome(DeleteTransitRouterResult(outcome.result()));
	else
		return DeleteTransitRouterOutcome(outcome.error());
}

void CbnClient::deleteTransitRouterAsync(const DeleteTransitRouterRequest& request, const DeleteTransitRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTransitRouter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DeleteTransitRouterOutcomeCallable CbnClient::deleteTransitRouterCallable(const DeleteTransitRouterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTransitRouterOutcome()>>(
			[this, request]()
			{
			return this->deleteTransitRouter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DeleteTransitRouterCidrOutcome CbnClient::deleteTransitRouterCidr(const DeleteTransitRouterCidrRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTransitRouterCidrOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTransitRouterCidrOutcome(DeleteTransitRouterCidrResult(outcome.result()));
	else
		return DeleteTransitRouterCidrOutcome(outcome.error());
}

void CbnClient::deleteTransitRouterCidrAsync(const DeleteTransitRouterCidrRequest& request, const DeleteTransitRouterCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTransitRouterCidr(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DeleteTransitRouterCidrOutcomeCallable CbnClient::deleteTransitRouterCidrCallable(const DeleteTransitRouterCidrRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTransitRouterCidrOutcome()>>(
			[this, request]()
			{
			return this->deleteTransitRouterCidr(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DeleteTransitRouterEcrAttachmentOutcome CbnClient::deleteTransitRouterEcrAttachment(const DeleteTransitRouterEcrAttachmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTransitRouterEcrAttachmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTransitRouterEcrAttachmentOutcome(DeleteTransitRouterEcrAttachmentResult(outcome.result()));
	else
		return DeleteTransitRouterEcrAttachmentOutcome(outcome.error());
}

void CbnClient::deleteTransitRouterEcrAttachmentAsync(const DeleteTransitRouterEcrAttachmentRequest& request, const DeleteTransitRouterEcrAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTransitRouterEcrAttachment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DeleteTransitRouterEcrAttachmentOutcomeCallable CbnClient::deleteTransitRouterEcrAttachmentCallable(const DeleteTransitRouterEcrAttachmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTransitRouterEcrAttachmentOutcome()>>(
			[this, request]()
			{
			return this->deleteTransitRouterEcrAttachment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DeleteTransitRouterMulticastDomainOutcome CbnClient::deleteTransitRouterMulticastDomain(const DeleteTransitRouterMulticastDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTransitRouterMulticastDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTransitRouterMulticastDomainOutcome(DeleteTransitRouterMulticastDomainResult(outcome.result()));
	else
		return DeleteTransitRouterMulticastDomainOutcome(outcome.error());
}

void CbnClient::deleteTransitRouterMulticastDomainAsync(const DeleteTransitRouterMulticastDomainRequest& request, const DeleteTransitRouterMulticastDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTransitRouterMulticastDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DeleteTransitRouterMulticastDomainOutcomeCallable CbnClient::deleteTransitRouterMulticastDomainCallable(const DeleteTransitRouterMulticastDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTransitRouterMulticastDomainOutcome()>>(
			[this, request]()
			{
			return this->deleteTransitRouterMulticastDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DeleteTransitRouterPeerAttachmentOutcome CbnClient::deleteTransitRouterPeerAttachment(const DeleteTransitRouterPeerAttachmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTransitRouterPeerAttachmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTransitRouterPeerAttachmentOutcome(DeleteTransitRouterPeerAttachmentResult(outcome.result()));
	else
		return DeleteTransitRouterPeerAttachmentOutcome(outcome.error());
}

void CbnClient::deleteTransitRouterPeerAttachmentAsync(const DeleteTransitRouterPeerAttachmentRequest& request, const DeleteTransitRouterPeerAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTransitRouterPeerAttachment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DeleteTransitRouterPeerAttachmentOutcomeCallable CbnClient::deleteTransitRouterPeerAttachmentCallable(const DeleteTransitRouterPeerAttachmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTransitRouterPeerAttachmentOutcome()>>(
			[this, request]()
			{
			return this->deleteTransitRouterPeerAttachment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DeleteTransitRouterPrefixListAssociationOutcome CbnClient::deleteTransitRouterPrefixListAssociation(const DeleteTransitRouterPrefixListAssociationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTransitRouterPrefixListAssociationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTransitRouterPrefixListAssociationOutcome(DeleteTransitRouterPrefixListAssociationResult(outcome.result()));
	else
		return DeleteTransitRouterPrefixListAssociationOutcome(outcome.error());
}

void CbnClient::deleteTransitRouterPrefixListAssociationAsync(const DeleteTransitRouterPrefixListAssociationRequest& request, const DeleteTransitRouterPrefixListAssociationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTransitRouterPrefixListAssociation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DeleteTransitRouterPrefixListAssociationOutcomeCallable CbnClient::deleteTransitRouterPrefixListAssociationCallable(const DeleteTransitRouterPrefixListAssociationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTransitRouterPrefixListAssociationOutcome()>>(
			[this, request]()
			{
			return this->deleteTransitRouterPrefixListAssociation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DeleteTransitRouterRouteEntryOutcome CbnClient::deleteTransitRouterRouteEntry(const DeleteTransitRouterRouteEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTransitRouterRouteEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTransitRouterRouteEntryOutcome(DeleteTransitRouterRouteEntryResult(outcome.result()));
	else
		return DeleteTransitRouterRouteEntryOutcome(outcome.error());
}

void CbnClient::deleteTransitRouterRouteEntryAsync(const DeleteTransitRouterRouteEntryRequest& request, const DeleteTransitRouterRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTransitRouterRouteEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DeleteTransitRouterRouteEntryOutcomeCallable CbnClient::deleteTransitRouterRouteEntryCallable(const DeleteTransitRouterRouteEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTransitRouterRouteEntryOutcome()>>(
			[this, request]()
			{
			return this->deleteTransitRouterRouteEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DeleteTransitRouterRouteTableOutcome CbnClient::deleteTransitRouterRouteTable(const DeleteTransitRouterRouteTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTransitRouterRouteTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTransitRouterRouteTableOutcome(DeleteTransitRouterRouteTableResult(outcome.result()));
	else
		return DeleteTransitRouterRouteTableOutcome(outcome.error());
}

void CbnClient::deleteTransitRouterRouteTableAsync(const DeleteTransitRouterRouteTableRequest& request, const DeleteTransitRouterRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTransitRouterRouteTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DeleteTransitRouterRouteTableOutcomeCallable CbnClient::deleteTransitRouterRouteTableCallable(const DeleteTransitRouterRouteTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTransitRouterRouteTableOutcome()>>(
			[this, request]()
			{
			return this->deleteTransitRouterRouteTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DeleteTransitRouterVbrAttachmentOutcome CbnClient::deleteTransitRouterVbrAttachment(const DeleteTransitRouterVbrAttachmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTransitRouterVbrAttachmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTransitRouterVbrAttachmentOutcome(DeleteTransitRouterVbrAttachmentResult(outcome.result()));
	else
		return DeleteTransitRouterVbrAttachmentOutcome(outcome.error());
}

void CbnClient::deleteTransitRouterVbrAttachmentAsync(const DeleteTransitRouterVbrAttachmentRequest& request, const DeleteTransitRouterVbrAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTransitRouterVbrAttachment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DeleteTransitRouterVbrAttachmentOutcomeCallable CbnClient::deleteTransitRouterVbrAttachmentCallable(const DeleteTransitRouterVbrAttachmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTransitRouterVbrAttachmentOutcome()>>(
			[this, request]()
			{
			return this->deleteTransitRouterVbrAttachment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DeleteTransitRouterVpcAttachmentOutcome CbnClient::deleteTransitRouterVpcAttachment(const DeleteTransitRouterVpcAttachmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTransitRouterVpcAttachmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTransitRouterVpcAttachmentOutcome(DeleteTransitRouterVpcAttachmentResult(outcome.result()));
	else
		return DeleteTransitRouterVpcAttachmentOutcome(outcome.error());
}

void CbnClient::deleteTransitRouterVpcAttachmentAsync(const DeleteTransitRouterVpcAttachmentRequest& request, const DeleteTransitRouterVpcAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTransitRouterVpcAttachment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DeleteTransitRouterVpcAttachmentOutcomeCallable CbnClient::deleteTransitRouterVpcAttachmentCallable(const DeleteTransitRouterVpcAttachmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTransitRouterVpcAttachmentOutcome()>>(
			[this, request]()
			{
			return this->deleteTransitRouterVpcAttachment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DeleteTransitRouterVpnAttachmentOutcome CbnClient::deleteTransitRouterVpnAttachment(const DeleteTransitRouterVpnAttachmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTransitRouterVpnAttachmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTransitRouterVpnAttachmentOutcome(DeleteTransitRouterVpnAttachmentResult(outcome.result()));
	else
		return DeleteTransitRouterVpnAttachmentOutcome(outcome.error());
}

void CbnClient::deleteTransitRouterVpnAttachmentAsync(const DeleteTransitRouterVpnAttachmentRequest& request, const DeleteTransitRouterVpnAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTransitRouterVpnAttachment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DeleteTransitRouterVpnAttachmentOutcomeCallable CbnClient::deleteTransitRouterVpnAttachmentCallable(const DeleteTransitRouterVpnAttachmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTransitRouterVpnAttachmentOutcome()>>(
			[this, request]()
			{
			return this->deleteTransitRouterVpnAttachment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DeregisterTransitRouterMulticastGroupMembersOutcome CbnClient::deregisterTransitRouterMulticastGroupMembers(const DeregisterTransitRouterMulticastGroupMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeregisterTransitRouterMulticastGroupMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeregisterTransitRouterMulticastGroupMembersOutcome(DeregisterTransitRouterMulticastGroupMembersResult(outcome.result()));
	else
		return DeregisterTransitRouterMulticastGroupMembersOutcome(outcome.error());
}

void CbnClient::deregisterTransitRouterMulticastGroupMembersAsync(const DeregisterTransitRouterMulticastGroupMembersRequest& request, const DeregisterTransitRouterMulticastGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deregisterTransitRouterMulticastGroupMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DeregisterTransitRouterMulticastGroupMembersOutcomeCallable CbnClient::deregisterTransitRouterMulticastGroupMembersCallable(const DeregisterTransitRouterMulticastGroupMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeregisterTransitRouterMulticastGroupMembersOutcome()>>(
			[this, request]()
			{
			return this->deregisterTransitRouterMulticastGroupMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DeregisterTransitRouterMulticastGroupSourcesOutcome CbnClient::deregisterTransitRouterMulticastGroupSources(const DeregisterTransitRouterMulticastGroupSourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeregisterTransitRouterMulticastGroupSourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeregisterTransitRouterMulticastGroupSourcesOutcome(DeregisterTransitRouterMulticastGroupSourcesResult(outcome.result()));
	else
		return DeregisterTransitRouterMulticastGroupSourcesOutcome(outcome.error());
}

void CbnClient::deregisterTransitRouterMulticastGroupSourcesAsync(const DeregisterTransitRouterMulticastGroupSourcesRequest& request, const DeregisterTransitRouterMulticastGroupSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deregisterTransitRouterMulticastGroupSources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DeregisterTransitRouterMulticastGroupSourcesOutcomeCallable CbnClient::deregisterTransitRouterMulticastGroupSourcesCallable(const DeregisterTransitRouterMulticastGroupSourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeregisterTransitRouterMulticastGroupSourcesOutcome()>>(
			[this, request]()
			{
			return this->deregisterTransitRouterMulticastGroupSources(request);
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

CbnClient::DescribeGrantRulesToResourceOutcome CbnClient::describeGrantRulesToResource(const DescribeGrantRulesToResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGrantRulesToResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGrantRulesToResourceOutcome(DescribeGrantRulesToResourceResult(outcome.result()));
	else
		return DescribeGrantRulesToResourceOutcome(outcome.error());
}

void CbnClient::describeGrantRulesToResourceAsync(const DescribeGrantRulesToResourceRequest& request, const DescribeGrantRulesToResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGrantRulesToResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DescribeGrantRulesToResourceOutcomeCallable CbnClient::describeGrantRulesToResourceCallable(const DescribeGrantRulesToResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGrantRulesToResourceOutcome()>>(
			[this, request]()
			{
			return this->describeGrantRulesToResource(request);
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

CbnClient::DescribeTransitRouteTableAggregationOutcome CbnClient::describeTransitRouteTableAggregation(const DescribeTransitRouteTableAggregationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTransitRouteTableAggregationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTransitRouteTableAggregationOutcome(DescribeTransitRouteTableAggregationResult(outcome.result()));
	else
		return DescribeTransitRouteTableAggregationOutcome(outcome.error());
}

void CbnClient::describeTransitRouteTableAggregationAsync(const DescribeTransitRouteTableAggregationRequest& request, const DescribeTransitRouteTableAggregationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTransitRouteTableAggregation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DescribeTransitRouteTableAggregationOutcomeCallable CbnClient::describeTransitRouteTableAggregationCallable(const DescribeTransitRouteTableAggregationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTransitRouteTableAggregationOutcome()>>(
			[this, request]()
			{
			return this->describeTransitRouteTableAggregation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DescribeTransitRouteTableAggregationDetailOutcome CbnClient::describeTransitRouteTableAggregationDetail(const DescribeTransitRouteTableAggregationDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTransitRouteTableAggregationDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTransitRouteTableAggregationDetailOutcome(DescribeTransitRouteTableAggregationDetailResult(outcome.result()));
	else
		return DescribeTransitRouteTableAggregationDetailOutcome(outcome.error());
}

void CbnClient::describeTransitRouteTableAggregationDetailAsync(const DescribeTransitRouteTableAggregationDetailRequest& request, const DescribeTransitRouteTableAggregationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTransitRouteTableAggregationDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DescribeTransitRouteTableAggregationDetailOutcomeCallable CbnClient::describeTransitRouteTableAggregationDetailCallable(const DescribeTransitRouteTableAggregationDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTransitRouteTableAggregationDetailOutcome()>>(
			[this, request]()
			{
			return this->describeTransitRouteTableAggregationDetail(request);
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

CbnClient::DisableTransitRouterRouteTablePropagationOutcome CbnClient::disableTransitRouterRouteTablePropagation(const DisableTransitRouterRouteTablePropagationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableTransitRouterRouteTablePropagationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableTransitRouterRouteTablePropagationOutcome(DisableTransitRouterRouteTablePropagationResult(outcome.result()));
	else
		return DisableTransitRouterRouteTablePropagationOutcome(outcome.error());
}

void CbnClient::disableTransitRouterRouteTablePropagationAsync(const DisableTransitRouterRouteTablePropagationRequest& request, const DisableTransitRouterRouteTablePropagationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableTransitRouterRouteTablePropagation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DisableTransitRouterRouteTablePropagationOutcomeCallable CbnClient::disableTransitRouterRouteTablePropagationCallable(const DisableTransitRouterRouteTablePropagationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableTransitRouterRouteTablePropagationOutcome()>>(
			[this, request]()
			{
			return this->disableTransitRouterRouteTablePropagation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DisassociateTransitRouterMulticastDomainOutcome CbnClient::disassociateTransitRouterMulticastDomain(const DisassociateTransitRouterMulticastDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisassociateTransitRouterMulticastDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisassociateTransitRouterMulticastDomainOutcome(DisassociateTransitRouterMulticastDomainResult(outcome.result()));
	else
		return DisassociateTransitRouterMulticastDomainOutcome(outcome.error());
}

void CbnClient::disassociateTransitRouterMulticastDomainAsync(const DisassociateTransitRouterMulticastDomainRequest& request, const DisassociateTransitRouterMulticastDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disassociateTransitRouterMulticastDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DisassociateTransitRouterMulticastDomainOutcomeCallable CbnClient::disassociateTransitRouterMulticastDomainCallable(const DisassociateTransitRouterMulticastDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisassociateTransitRouterMulticastDomainOutcome()>>(
			[this, request]()
			{
			return this->disassociateTransitRouterMulticastDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::DissociateTransitRouterAttachmentFromRouteTableOutcome CbnClient::dissociateTransitRouterAttachmentFromRouteTable(const DissociateTransitRouterAttachmentFromRouteTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DissociateTransitRouterAttachmentFromRouteTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DissociateTransitRouterAttachmentFromRouteTableOutcome(DissociateTransitRouterAttachmentFromRouteTableResult(outcome.result()));
	else
		return DissociateTransitRouterAttachmentFromRouteTableOutcome(outcome.error());
}

void CbnClient::dissociateTransitRouterAttachmentFromRouteTableAsync(const DissociateTransitRouterAttachmentFromRouteTableRequest& request, const DissociateTransitRouterAttachmentFromRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dissociateTransitRouterAttachmentFromRouteTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::DissociateTransitRouterAttachmentFromRouteTableOutcomeCallable CbnClient::dissociateTransitRouterAttachmentFromRouteTableCallable(const DissociateTransitRouterAttachmentFromRouteTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DissociateTransitRouterAttachmentFromRouteTableOutcome()>>(
			[this, request]()
			{
			return this->dissociateTransitRouterAttachmentFromRouteTable(request);
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

CbnClient::EnableTransitRouterRouteTablePropagationOutcome CbnClient::enableTransitRouterRouteTablePropagation(const EnableTransitRouterRouteTablePropagationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableTransitRouterRouteTablePropagationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableTransitRouterRouteTablePropagationOutcome(EnableTransitRouterRouteTablePropagationResult(outcome.result()));
	else
		return EnableTransitRouterRouteTablePropagationOutcome(outcome.error());
}

void CbnClient::enableTransitRouterRouteTablePropagationAsync(const EnableTransitRouterRouteTablePropagationRequest& request, const EnableTransitRouterRouteTablePropagationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableTransitRouterRouteTablePropagation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::EnableTransitRouterRouteTablePropagationOutcomeCallable CbnClient::enableTransitRouterRouteTablePropagationCallable(const EnableTransitRouterRouteTablePropagationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableTransitRouterRouteTablePropagationOutcome()>>(
			[this, request]()
			{
			return this->enableTransitRouterRouteTablePropagation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::GrantInstanceToTransitRouterOutcome CbnClient::grantInstanceToTransitRouter(const GrantInstanceToTransitRouterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantInstanceToTransitRouterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantInstanceToTransitRouterOutcome(GrantInstanceToTransitRouterResult(outcome.result()));
	else
		return GrantInstanceToTransitRouterOutcome(outcome.error());
}

void CbnClient::grantInstanceToTransitRouterAsync(const GrantInstanceToTransitRouterRequest& request, const GrantInstanceToTransitRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantInstanceToTransitRouter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::GrantInstanceToTransitRouterOutcomeCallable CbnClient::grantInstanceToTransitRouterCallable(const GrantInstanceToTransitRouterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantInstanceToTransitRouterOutcome()>>(
			[this, request]()
			{
			return this->grantInstanceToTransitRouter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ListCenChildInstanceRouteEntriesToAttachmentOutcome CbnClient::listCenChildInstanceRouteEntriesToAttachment(const ListCenChildInstanceRouteEntriesToAttachmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCenChildInstanceRouteEntriesToAttachmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCenChildInstanceRouteEntriesToAttachmentOutcome(ListCenChildInstanceRouteEntriesToAttachmentResult(outcome.result()));
	else
		return ListCenChildInstanceRouteEntriesToAttachmentOutcome(outcome.error());
}

void CbnClient::listCenChildInstanceRouteEntriesToAttachmentAsync(const ListCenChildInstanceRouteEntriesToAttachmentRequest& request, const ListCenChildInstanceRouteEntriesToAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCenChildInstanceRouteEntriesToAttachment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ListCenChildInstanceRouteEntriesToAttachmentOutcomeCallable CbnClient::listCenChildInstanceRouteEntriesToAttachmentCallable(const ListCenChildInstanceRouteEntriesToAttachmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCenChildInstanceRouteEntriesToAttachmentOutcome()>>(
			[this, request]()
			{
			return this->listCenChildInstanceRouteEntriesToAttachment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ListCenInterRegionTrafficQosPoliciesOutcome CbnClient::listCenInterRegionTrafficQosPolicies(const ListCenInterRegionTrafficQosPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCenInterRegionTrafficQosPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCenInterRegionTrafficQosPoliciesOutcome(ListCenInterRegionTrafficQosPoliciesResult(outcome.result()));
	else
		return ListCenInterRegionTrafficQosPoliciesOutcome(outcome.error());
}

void CbnClient::listCenInterRegionTrafficQosPoliciesAsync(const ListCenInterRegionTrafficQosPoliciesRequest& request, const ListCenInterRegionTrafficQosPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCenInterRegionTrafficQosPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ListCenInterRegionTrafficQosPoliciesOutcomeCallable CbnClient::listCenInterRegionTrafficQosPoliciesCallable(const ListCenInterRegionTrafficQosPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCenInterRegionTrafficQosPoliciesOutcome()>>(
			[this, request]()
			{
			return this->listCenInterRegionTrafficQosPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ListCenInterRegionTrafficQosQueuesOutcome CbnClient::listCenInterRegionTrafficQosQueues(const ListCenInterRegionTrafficQosQueuesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCenInterRegionTrafficQosQueuesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCenInterRegionTrafficQosQueuesOutcome(ListCenInterRegionTrafficQosQueuesResult(outcome.result()));
	else
		return ListCenInterRegionTrafficQosQueuesOutcome(outcome.error());
}

void CbnClient::listCenInterRegionTrafficQosQueuesAsync(const ListCenInterRegionTrafficQosQueuesRequest& request, const ListCenInterRegionTrafficQosQueuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCenInterRegionTrafficQosQueues(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ListCenInterRegionTrafficQosQueuesOutcomeCallable CbnClient::listCenInterRegionTrafficQosQueuesCallable(const ListCenInterRegionTrafficQosQueuesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCenInterRegionTrafficQosQueuesOutcome()>>(
			[this, request]()
			{
			return this->listCenInterRegionTrafficQosQueues(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ListGrantVSwitchEnisOutcome CbnClient::listGrantVSwitchEnis(const ListGrantVSwitchEnisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGrantVSwitchEnisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGrantVSwitchEnisOutcome(ListGrantVSwitchEnisResult(outcome.result()));
	else
		return ListGrantVSwitchEnisOutcome(outcome.error());
}

void CbnClient::listGrantVSwitchEnisAsync(const ListGrantVSwitchEnisRequest& request, const ListGrantVSwitchEnisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGrantVSwitchEnis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ListGrantVSwitchEnisOutcomeCallable CbnClient::listGrantVSwitchEnisCallable(const ListGrantVSwitchEnisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGrantVSwitchEnisOutcome()>>(
			[this, request]()
			{
			return this->listGrantVSwitchEnis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ListGrantVSwitchesToCenOutcome CbnClient::listGrantVSwitchesToCen(const ListGrantVSwitchesToCenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGrantVSwitchesToCenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGrantVSwitchesToCenOutcome(ListGrantVSwitchesToCenResult(outcome.result()));
	else
		return ListGrantVSwitchesToCenOutcome(outcome.error());
}

void CbnClient::listGrantVSwitchesToCenAsync(const ListGrantVSwitchesToCenRequest& request, const ListGrantVSwitchesToCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGrantVSwitchesToCen(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ListGrantVSwitchesToCenOutcomeCallable CbnClient::listGrantVSwitchesToCenCallable(const ListGrantVSwitchesToCenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGrantVSwitchesToCenOutcome()>>(
			[this, request]()
			{
			return this->listGrantVSwitchesToCen(request);
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

CbnClient::ListTrafficMarkingPoliciesOutcome CbnClient::listTrafficMarkingPolicies(const ListTrafficMarkingPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTrafficMarkingPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTrafficMarkingPoliciesOutcome(ListTrafficMarkingPoliciesResult(outcome.result()));
	else
		return ListTrafficMarkingPoliciesOutcome(outcome.error());
}

void CbnClient::listTrafficMarkingPoliciesAsync(const ListTrafficMarkingPoliciesRequest& request, const ListTrafficMarkingPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTrafficMarkingPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ListTrafficMarkingPoliciesOutcomeCallable CbnClient::listTrafficMarkingPoliciesCallable(const ListTrafficMarkingPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTrafficMarkingPoliciesOutcome()>>(
			[this, request]()
			{
			return this->listTrafficMarkingPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ListTransitRouterAvailableResourceOutcome CbnClient::listTransitRouterAvailableResource(const ListTransitRouterAvailableResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTransitRouterAvailableResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTransitRouterAvailableResourceOutcome(ListTransitRouterAvailableResourceResult(outcome.result()));
	else
		return ListTransitRouterAvailableResourceOutcome(outcome.error());
}

void CbnClient::listTransitRouterAvailableResourceAsync(const ListTransitRouterAvailableResourceRequest& request, const ListTransitRouterAvailableResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTransitRouterAvailableResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ListTransitRouterAvailableResourceOutcomeCallable CbnClient::listTransitRouterAvailableResourceCallable(const ListTransitRouterAvailableResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTransitRouterAvailableResourceOutcome()>>(
			[this, request]()
			{
			return this->listTransitRouterAvailableResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ListTransitRouterCidrOutcome CbnClient::listTransitRouterCidr(const ListTransitRouterCidrRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTransitRouterCidrOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTransitRouterCidrOutcome(ListTransitRouterCidrResult(outcome.result()));
	else
		return ListTransitRouterCidrOutcome(outcome.error());
}

void CbnClient::listTransitRouterCidrAsync(const ListTransitRouterCidrRequest& request, const ListTransitRouterCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTransitRouterCidr(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ListTransitRouterCidrOutcomeCallable CbnClient::listTransitRouterCidrCallable(const ListTransitRouterCidrRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTransitRouterCidrOutcome()>>(
			[this, request]()
			{
			return this->listTransitRouterCidr(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ListTransitRouterCidrAllocationOutcome CbnClient::listTransitRouterCidrAllocation(const ListTransitRouterCidrAllocationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTransitRouterCidrAllocationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTransitRouterCidrAllocationOutcome(ListTransitRouterCidrAllocationResult(outcome.result()));
	else
		return ListTransitRouterCidrAllocationOutcome(outcome.error());
}

void CbnClient::listTransitRouterCidrAllocationAsync(const ListTransitRouterCidrAllocationRequest& request, const ListTransitRouterCidrAllocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTransitRouterCidrAllocation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ListTransitRouterCidrAllocationOutcomeCallable CbnClient::listTransitRouterCidrAllocationCallable(const ListTransitRouterCidrAllocationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTransitRouterCidrAllocationOutcome()>>(
			[this, request]()
			{
			return this->listTransitRouterCidrAllocation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ListTransitRouterEcrAttachmentsOutcome CbnClient::listTransitRouterEcrAttachments(const ListTransitRouterEcrAttachmentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTransitRouterEcrAttachmentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTransitRouterEcrAttachmentsOutcome(ListTransitRouterEcrAttachmentsResult(outcome.result()));
	else
		return ListTransitRouterEcrAttachmentsOutcome(outcome.error());
}

void CbnClient::listTransitRouterEcrAttachmentsAsync(const ListTransitRouterEcrAttachmentsRequest& request, const ListTransitRouterEcrAttachmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTransitRouterEcrAttachments(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ListTransitRouterEcrAttachmentsOutcomeCallable CbnClient::listTransitRouterEcrAttachmentsCallable(const ListTransitRouterEcrAttachmentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTransitRouterEcrAttachmentsOutcome()>>(
			[this, request]()
			{
			return this->listTransitRouterEcrAttachments(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ListTransitRouterMulticastDomainAssociationsOutcome CbnClient::listTransitRouterMulticastDomainAssociations(const ListTransitRouterMulticastDomainAssociationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTransitRouterMulticastDomainAssociationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTransitRouterMulticastDomainAssociationsOutcome(ListTransitRouterMulticastDomainAssociationsResult(outcome.result()));
	else
		return ListTransitRouterMulticastDomainAssociationsOutcome(outcome.error());
}

void CbnClient::listTransitRouterMulticastDomainAssociationsAsync(const ListTransitRouterMulticastDomainAssociationsRequest& request, const ListTransitRouterMulticastDomainAssociationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTransitRouterMulticastDomainAssociations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ListTransitRouterMulticastDomainAssociationsOutcomeCallable CbnClient::listTransitRouterMulticastDomainAssociationsCallable(const ListTransitRouterMulticastDomainAssociationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTransitRouterMulticastDomainAssociationsOutcome()>>(
			[this, request]()
			{
			return this->listTransitRouterMulticastDomainAssociations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ListTransitRouterMulticastDomainVSwitchesOutcome CbnClient::listTransitRouterMulticastDomainVSwitches(const ListTransitRouterMulticastDomainVSwitchesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTransitRouterMulticastDomainVSwitchesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTransitRouterMulticastDomainVSwitchesOutcome(ListTransitRouterMulticastDomainVSwitchesResult(outcome.result()));
	else
		return ListTransitRouterMulticastDomainVSwitchesOutcome(outcome.error());
}

void CbnClient::listTransitRouterMulticastDomainVSwitchesAsync(const ListTransitRouterMulticastDomainVSwitchesRequest& request, const ListTransitRouterMulticastDomainVSwitchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTransitRouterMulticastDomainVSwitches(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ListTransitRouterMulticastDomainVSwitchesOutcomeCallable CbnClient::listTransitRouterMulticastDomainVSwitchesCallable(const ListTransitRouterMulticastDomainVSwitchesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTransitRouterMulticastDomainVSwitchesOutcome()>>(
			[this, request]()
			{
			return this->listTransitRouterMulticastDomainVSwitches(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ListTransitRouterMulticastDomainsOutcome CbnClient::listTransitRouterMulticastDomains(const ListTransitRouterMulticastDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTransitRouterMulticastDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTransitRouterMulticastDomainsOutcome(ListTransitRouterMulticastDomainsResult(outcome.result()));
	else
		return ListTransitRouterMulticastDomainsOutcome(outcome.error());
}

void CbnClient::listTransitRouterMulticastDomainsAsync(const ListTransitRouterMulticastDomainsRequest& request, const ListTransitRouterMulticastDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTransitRouterMulticastDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ListTransitRouterMulticastDomainsOutcomeCallable CbnClient::listTransitRouterMulticastDomainsCallable(const ListTransitRouterMulticastDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTransitRouterMulticastDomainsOutcome()>>(
			[this, request]()
			{
			return this->listTransitRouterMulticastDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ListTransitRouterMulticastGroupsOutcome CbnClient::listTransitRouterMulticastGroups(const ListTransitRouterMulticastGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTransitRouterMulticastGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTransitRouterMulticastGroupsOutcome(ListTransitRouterMulticastGroupsResult(outcome.result()));
	else
		return ListTransitRouterMulticastGroupsOutcome(outcome.error());
}

void CbnClient::listTransitRouterMulticastGroupsAsync(const ListTransitRouterMulticastGroupsRequest& request, const ListTransitRouterMulticastGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTransitRouterMulticastGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ListTransitRouterMulticastGroupsOutcomeCallable CbnClient::listTransitRouterMulticastGroupsCallable(const ListTransitRouterMulticastGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTransitRouterMulticastGroupsOutcome()>>(
			[this, request]()
			{
			return this->listTransitRouterMulticastGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ListTransitRouterPeerAttachmentsOutcome CbnClient::listTransitRouterPeerAttachments(const ListTransitRouterPeerAttachmentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTransitRouterPeerAttachmentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTransitRouterPeerAttachmentsOutcome(ListTransitRouterPeerAttachmentsResult(outcome.result()));
	else
		return ListTransitRouterPeerAttachmentsOutcome(outcome.error());
}

void CbnClient::listTransitRouterPeerAttachmentsAsync(const ListTransitRouterPeerAttachmentsRequest& request, const ListTransitRouterPeerAttachmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTransitRouterPeerAttachments(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ListTransitRouterPeerAttachmentsOutcomeCallable CbnClient::listTransitRouterPeerAttachmentsCallable(const ListTransitRouterPeerAttachmentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTransitRouterPeerAttachmentsOutcome()>>(
			[this, request]()
			{
			return this->listTransitRouterPeerAttachments(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ListTransitRouterPrefixListAssociationOutcome CbnClient::listTransitRouterPrefixListAssociation(const ListTransitRouterPrefixListAssociationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTransitRouterPrefixListAssociationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTransitRouterPrefixListAssociationOutcome(ListTransitRouterPrefixListAssociationResult(outcome.result()));
	else
		return ListTransitRouterPrefixListAssociationOutcome(outcome.error());
}

void CbnClient::listTransitRouterPrefixListAssociationAsync(const ListTransitRouterPrefixListAssociationRequest& request, const ListTransitRouterPrefixListAssociationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTransitRouterPrefixListAssociation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ListTransitRouterPrefixListAssociationOutcomeCallable CbnClient::listTransitRouterPrefixListAssociationCallable(const ListTransitRouterPrefixListAssociationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTransitRouterPrefixListAssociationOutcome()>>(
			[this, request]()
			{
			return this->listTransitRouterPrefixListAssociation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ListTransitRouterRouteEntriesOutcome CbnClient::listTransitRouterRouteEntries(const ListTransitRouterRouteEntriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTransitRouterRouteEntriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTransitRouterRouteEntriesOutcome(ListTransitRouterRouteEntriesResult(outcome.result()));
	else
		return ListTransitRouterRouteEntriesOutcome(outcome.error());
}

void CbnClient::listTransitRouterRouteEntriesAsync(const ListTransitRouterRouteEntriesRequest& request, const ListTransitRouterRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTransitRouterRouteEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ListTransitRouterRouteEntriesOutcomeCallable CbnClient::listTransitRouterRouteEntriesCallable(const ListTransitRouterRouteEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTransitRouterRouteEntriesOutcome()>>(
			[this, request]()
			{
			return this->listTransitRouterRouteEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ListTransitRouterRouteTableAssociationsOutcome CbnClient::listTransitRouterRouteTableAssociations(const ListTransitRouterRouteTableAssociationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTransitRouterRouteTableAssociationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTransitRouterRouteTableAssociationsOutcome(ListTransitRouterRouteTableAssociationsResult(outcome.result()));
	else
		return ListTransitRouterRouteTableAssociationsOutcome(outcome.error());
}

void CbnClient::listTransitRouterRouteTableAssociationsAsync(const ListTransitRouterRouteTableAssociationsRequest& request, const ListTransitRouterRouteTableAssociationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTransitRouterRouteTableAssociations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ListTransitRouterRouteTableAssociationsOutcomeCallable CbnClient::listTransitRouterRouteTableAssociationsCallable(const ListTransitRouterRouteTableAssociationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTransitRouterRouteTableAssociationsOutcome()>>(
			[this, request]()
			{
			return this->listTransitRouterRouteTableAssociations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ListTransitRouterRouteTablePropagationsOutcome CbnClient::listTransitRouterRouteTablePropagations(const ListTransitRouterRouteTablePropagationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTransitRouterRouteTablePropagationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTransitRouterRouteTablePropagationsOutcome(ListTransitRouterRouteTablePropagationsResult(outcome.result()));
	else
		return ListTransitRouterRouteTablePropagationsOutcome(outcome.error());
}

void CbnClient::listTransitRouterRouteTablePropagationsAsync(const ListTransitRouterRouteTablePropagationsRequest& request, const ListTransitRouterRouteTablePropagationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTransitRouterRouteTablePropagations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ListTransitRouterRouteTablePropagationsOutcomeCallable CbnClient::listTransitRouterRouteTablePropagationsCallable(const ListTransitRouterRouteTablePropagationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTransitRouterRouteTablePropagationsOutcome()>>(
			[this, request]()
			{
			return this->listTransitRouterRouteTablePropagations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ListTransitRouterRouteTablesOutcome CbnClient::listTransitRouterRouteTables(const ListTransitRouterRouteTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTransitRouterRouteTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTransitRouterRouteTablesOutcome(ListTransitRouterRouteTablesResult(outcome.result()));
	else
		return ListTransitRouterRouteTablesOutcome(outcome.error());
}

void CbnClient::listTransitRouterRouteTablesAsync(const ListTransitRouterRouteTablesRequest& request, const ListTransitRouterRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTransitRouterRouteTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ListTransitRouterRouteTablesOutcomeCallable CbnClient::listTransitRouterRouteTablesCallable(const ListTransitRouterRouteTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTransitRouterRouteTablesOutcome()>>(
			[this, request]()
			{
			return this->listTransitRouterRouteTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ListTransitRouterVbrAttachmentsOutcome CbnClient::listTransitRouterVbrAttachments(const ListTransitRouterVbrAttachmentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTransitRouterVbrAttachmentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTransitRouterVbrAttachmentsOutcome(ListTransitRouterVbrAttachmentsResult(outcome.result()));
	else
		return ListTransitRouterVbrAttachmentsOutcome(outcome.error());
}

void CbnClient::listTransitRouterVbrAttachmentsAsync(const ListTransitRouterVbrAttachmentsRequest& request, const ListTransitRouterVbrAttachmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTransitRouterVbrAttachments(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ListTransitRouterVbrAttachmentsOutcomeCallable CbnClient::listTransitRouterVbrAttachmentsCallable(const ListTransitRouterVbrAttachmentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTransitRouterVbrAttachmentsOutcome()>>(
			[this, request]()
			{
			return this->listTransitRouterVbrAttachments(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ListTransitRouterVpcAttachmentsOutcome CbnClient::listTransitRouterVpcAttachments(const ListTransitRouterVpcAttachmentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTransitRouterVpcAttachmentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTransitRouterVpcAttachmentsOutcome(ListTransitRouterVpcAttachmentsResult(outcome.result()));
	else
		return ListTransitRouterVpcAttachmentsOutcome(outcome.error());
}

void CbnClient::listTransitRouterVpcAttachmentsAsync(const ListTransitRouterVpcAttachmentsRequest& request, const ListTransitRouterVpcAttachmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTransitRouterVpcAttachments(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ListTransitRouterVpcAttachmentsOutcomeCallable CbnClient::listTransitRouterVpcAttachmentsCallable(const ListTransitRouterVpcAttachmentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTransitRouterVpcAttachmentsOutcome()>>(
			[this, request]()
			{
			return this->listTransitRouterVpcAttachments(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ListTransitRouterVpnAttachmentsOutcome CbnClient::listTransitRouterVpnAttachments(const ListTransitRouterVpnAttachmentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTransitRouterVpnAttachmentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTransitRouterVpnAttachmentsOutcome(ListTransitRouterVpnAttachmentsResult(outcome.result()));
	else
		return ListTransitRouterVpnAttachmentsOutcome(outcome.error());
}

void CbnClient::listTransitRouterVpnAttachmentsAsync(const ListTransitRouterVpnAttachmentsRequest& request, const ListTransitRouterVpnAttachmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTransitRouterVpnAttachments(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ListTransitRouterVpnAttachmentsOutcomeCallable CbnClient::listTransitRouterVpnAttachmentsCallable(const ListTransitRouterVpnAttachmentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTransitRouterVpnAttachmentsOutcome()>>(
			[this, request]()
			{
			return this->listTransitRouterVpnAttachments(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ListTransitRoutersOutcome CbnClient::listTransitRouters(const ListTransitRoutersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTransitRoutersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTransitRoutersOutcome(ListTransitRoutersResult(outcome.result()));
	else
		return ListTransitRoutersOutcome(outcome.error());
}

void CbnClient::listTransitRoutersAsync(const ListTransitRoutersRequest& request, const ListTransitRoutersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTransitRouters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ListTransitRoutersOutcomeCallable CbnClient::listTransitRoutersCallable(const ListTransitRoutersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTransitRoutersOutcome()>>(
			[this, request]()
			{
			return this->listTransitRouters(request);
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

CbnClient::ModifyTransitRouterCidrOutcome CbnClient::modifyTransitRouterCidr(const ModifyTransitRouterCidrRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTransitRouterCidrOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTransitRouterCidrOutcome(ModifyTransitRouterCidrResult(outcome.result()));
	else
		return ModifyTransitRouterCidrOutcome(outcome.error());
}

void CbnClient::modifyTransitRouterCidrAsync(const ModifyTransitRouterCidrRequest& request, const ModifyTransitRouterCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTransitRouterCidr(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ModifyTransitRouterCidrOutcomeCallable CbnClient::modifyTransitRouterCidrCallable(const ModifyTransitRouterCidrRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTransitRouterCidrOutcome()>>(
			[this, request]()
			{
			return this->modifyTransitRouterCidr(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ModifyTransitRouterMulticastDomainOutcome CbnClient::modifyTransitRouterMulticastDomain(const ModifyTransitRouterMulticastDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTransitRouterMulticastDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTransitRouterMulticastDomainOutcome(ModifyTransitRouterMulticastDomainResult(outcome.result()));
	else
		return ModifyTransitRouterMulticastDomainOutcome(outcome.error());
}

void CbnClient::modifyTransitRouterMulticastDomainAsync(const ModifyTransitRouterMulticastDomainRequest& request, const ModifyTransitRouterMulticastDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTransitRouterMulticastDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ModifyTransitRouterMulticastDomainOutcomeCallable CbnClient::modifyTransitRouterMulticastDomainCallable(const ModifyTransitRouterMulticastDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTransitRouterMulticastDomainOutcome()>>(
			[this, request]()
			{
			return this->modifyTransitRouterMulticastDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::MoveResourceGroupOutcome CbnClient::moveResourceGroup(const MoveResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MoveResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MoveResourceGroupOutcome(MoveResourceGroupResult(outcome.result()));
	else
		return MoveResourceGroupOutcome(outcome.error());
}

void CbnClient::moveResourceGroupAsync(const MoveResourceGroupRequest& request, const MoveResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moveResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::MoveResourceGroupOutcomeCallable CbnClient::moveResourceGroupCallable(const MoveResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoveResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->moveResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::OpenTransitRouterServiceOutcome CbnClient::openTransitRouterService(const OpenTransitRouterServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenTransitRouterServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenTransitRouterServiceOutcome(OpenTransitRouterServiceResult(outcome.result()));
	else
		return OpenTransitRouterServiceOutcome(outcome.error());
}

void CbnClient::openTransitRouterServiceAsync(const OpenTransitRouterServiceRequest& request, const OpenTransitRouterServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openTransitRouterService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::OpenTransitRouterServiceOutcomeCallable CbnClient::openTransitRouterServiceCallable(const OpenTransitRouterServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenTransitRouterServiceOutcome()>>(
			[this, request]()
			{
			return this->openTransitRouterService(request);
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

CbnClient::RefreshTransitRouteTableAggregationOutcome CbnClient::refreshTransitRouteTableAggregation(const RefreshTransitRouteTableAggregationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshTransitRouteTableAggregationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshTransitRouteTableAggregationOutcome(RefreshTransitRouteTableAggregationResult(outcome.result()));
	else
		return RefreshTransitRouteTableAggregationOutcome(outcome.error());
}

void CbnClient::refreshTransitRouteTableAggregationAsync(const RefreshTransitRouteTableAggregationRequest& request, const RefreshTransitRouteTableAggregationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshTransitRouteTableAggregation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::RefreshTransitRouteTableAggregationOutcomeCallable CbnClient::refreshTransitRouteTableAggregationCallable(const RefreshTransitRouteTableAggregationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshTransitRouteTableAggregationOutcome()>>(
			[this, request]()
			{
			return this->refreshTransitRouteTableAggregation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::RegisterTransitRouterMulticastGroupMembersOutcome CbnClient::registerTransitRouterMulticastGroupMembers(const RegisterTransitRouterMulticastGroupMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RegisterTransitRouterMulticastGroupMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RegisterTransitRouterMulticastGroupMembersOutcome(RegisterTransitRouterMulticastGroupMembersResult(outcome.result()));
	else
		return RegisterTransitRouterMulticastGroupMembersOutcome(outcome.error());
}

void CbnClient::registerTransitRouterMulticastGroupMembersAsync(const RegisterTransitRouterMulticastGroupMembersRequest& request, const RegisterTransitRouterMulticastGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, registerTransitRouterMulticastGroupMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::RegisterTransitRouterMulticastGroupMembersOutcomeCallable CbnClient::registerTransitRouterMulticastGroupMembersCallable(const RegisterTransitRouterMulticastGroupMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RegisterTransitRouterMulticastGroupMembersOutcome()>>(
			[this, request]()
			{
			return this->registerTransitRouterMulticastGroupMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::RegisterTransitRouterMulticastGroupSourcesOutcome CbnClient::registerTransitRouterMulticastGroupSources(const RegisterTransitRouterMulticastGroupSourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RegisterTransitRouterMulticastGroupSourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RegisterTransitRouterMulticastGroupSourcesOutcome(RegisterTransitRouterMulticastGroupSourcesResult(outcome.result()));
	else
		return RegisterTransitRouterMulticastGroupSourcesOutcome(outcome.error());
}

void CbnClient::registerTransitRouterMulticastGroupSourcesAsync(const RegisterTransitRouterMulticastGroupSourcesRequest& request, const RegisterTransitRouterMulticastGroupSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, registerTransitRouterMulticastGroupSources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::RegisterTransitRouterMulticastGroupSourcesOutcomeCallable CbnClient::registerTransitRouterMulticastGroupSourcesCallable(const RegisterTransitRouterMulticastGroupSourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RegisterTransitRouterMulticastGroupSourcesOutcome()>>(
			[this, request]()
			{
			return this->registerTransitRouterMulticastGroupSources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::RemoveTrafficMatchRuleFromTrafficMarkingPolicyOutcome CbnClient::removeTrafficMatchRuleFromTrafficMarkingPolicy(const RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveTrafficMatchRuleFromTrafficMarkingPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveTrafficMatchRuleFromTrafficMarkingPolicyOutcome(RemoveTrafficMatchRuleFromTrafficMarkingPolicyResult(outcome.result()));
	else
		return RemoveTrafficMatchRuleFromTrafficMarkingPolicyOutcome(outcome.error());
}

void CbnClient::removeTrafficMatchRuleFromTrafficMarkingPolicyAsync(const RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest& request, const RemoveTrafficMatchRuleFromTrafficMarkingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeTrafficMatchRuleFromTrafficMarkingPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::RemoveTrafficMatchRuleFromTrafficMarkingPolicyOutcomeCallable CbnClient::removeTrafficMatchRuleFromTrafficMarkingPolicyCallable(const RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveTrafficMatchRuleFromTrafficMarkingPolicyOutcome()>>(
			[this, request]()
			{
			return this->removeTrafficMatchRuleFromTrafficMarkingPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::RemoveTraficMatchRuleFromTrafficMarkingPolicyOutcome CbnClient::removeTraficMatchRuleFromTrafficMarkingPolicy(const RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveTraficMatchRuleFromTrafficMarkingPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveTraficMatchRuleFromTrafficMarkingPolicyOutcome(RemoveTraficMatchRuleFromTrafficMarkingPolicyResult(outcome.result()));
	else
		return RemoveTraficMatchRuleFromTrafficMarkingPolicyOutcome(outcome.error());
}

void CbnClient::removeTraficMatchRuleFromTrafficMarkingPolicyAsync(const RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest& request, const RemoveTraficMatchRuleFromTrafficMarkingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeTraficMatchRuleFromTrafficMarkingPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::RemoveTraficMatchRuleFromTrafficMarkingPolicyOutcomeCallable CbnClient::removeTraficMatchRuleFromTrafficMarkingPolicyCallable(const RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveTraficMatchRuleFromTrafficMarkingPolicyOutcome()>>(
			[this, request]()
			{
			return this->removeTraficMatchRuleFromTrafficMarkingPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::ReplaceTransitRouterRouteTableAssociationOutcome CbnClient::replaceTransitRouterRouteTableAssociation(const ReplaceTransitRouterRouteTableAssociationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReplaceTransitRouterRouteTableAssociationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReplaceTransitRouterRouteTableAssociationOutcome(ReplaceTransitRouterRouteTableAssociationResult(outcome.result()));
	else
		return ReplaceTransitRouterRouteTableAssociationOutcome(outcome.error());
}

void CbnClient::replaceTransitRouterRouteTableAssociationAsync(const ReplaceTransitRouterRouteTableAssociationRequest& request, const ReplaceTransitRouterRouteTableAssociationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, replaceTransitRouterRouteTableAssociation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::ReplaceTransitRouterRouteTableAssociationOutcomeCallable CbnClient::replaceTransitRouterRouteTableAssociationCallable(const ReplaceTransitRouterRouteTableAssociationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReplaceTransitRouterRouteTableAssociationOutcome()>>(
			[this, request]()
			{
			return this->replaceTransitRouterRouteTableAssociation(request);
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

CbnClient::RevokeInstanceFromTransitRouterOutcome CbnClient::revokeInstanceFromTransitRouter(const RevokeInstanceFromTransitRouterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeInstanceFromTransitRouterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeInstanceFromTransitRouterOutcome(RevokeInstanceFromTransitRouterResult(outcome.result()));
	else
		return RevokeInstanceFromTransitRouterOutcome(outcome.error());
}

void CbnClient::revokeInstanceFromTransitRouterAsync(const RevokeInstanceFromTransitRouterRequest& request, const RevokeInstanceFromTransitRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeInstanceFromTransitRouter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::RevokeInstanceFromTransitRouterOutcomeCallable CbnClient::revokeInstanceFromTransitRouterCallable(const RevokeInstanceFromTransitRouterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeInstanceFromTransitRouterOutcome()>>(
			[this, request]()
			{
			return this->revokeInstanceFromTransitRouter(request);
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

CbnClient::TempUpgradeCenBandwidthPackageSpecOutcome CbnClient::tempUpgradeCenBandwidthPackageSpec(const TempUpgradeCenBandwidthPackageSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TempUpgradeCenBandwidthPackageSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TempUpgradeCenBandwidthPackageSpecOutcome(TempUpgradeCenBandwidthPackageSpecResult(outcome.result()));
	else
		return TempUpgradeCenBandwidthPackageSpecOutcome(outcome.error());
}

void CbnClient::tempUpgradeCenBandwidthPackageSpecAsync(const TempUpgradeCenBandwidthPackageSpecRequest& request, const TempUpgradeCenBandwidthPackageSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tempUpgradeCenBandwidthPackageSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::TempUpgradeCenBandwidthPackageSpecOutcomeCallable CbnClient::tempUpgradeCenBandwidthPackageSpecCallable(const TempUpgradeCenBandwidthPackageSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TempUpgradeCenBandwidthPackageSpecOutcome()>>(
			[this, request]()
			{
			return this->tempUpgradeCenBandwidthPackageSpec(request);
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

CbnClient::UpdateCenInterRegionTrafficQosPolicyAttributeOutcome CbnClient::updateCenInterRegionTrafficQosPolicyAttribute(const UpdateCenInterRegionTrafficQosPolicyAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCenInterRegionTrafficQosPolicyAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCenInterRegionTrafficQosPolicyAttributeOutcome(UpdateCenInterRegionTrafficQosPolicyAttributeResult(outcome.result()));
	else
		return UpdateCenInterRegionTrafficQosPolicyAttributeOutcome(outcome.error());
}

void CbnClient::updateCenInterRegionTrafficQosPolicyAttributeAsync(const UpdateCenInterRegionTrafficQosPolicyAttributeRequest& request, const UpdateCenInterRegionTrafficQosPolicyAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCenInterRegionTrafficQosPolicyAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::UpdateCenInterRegionTrafficQosPolicyAttributeOutcomeCallable CbnClient::updateCenInterRegionTrafficQosPolicyAttributeCallable(const UpdateCenInterRegionTrafficQosPolicyAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCenInterRegionTrafficQosPolicyAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateCenInterRegionTrafficQosPolicyAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::UpdateCenInterRegionTrafficQosQueueAttributeOutcome CbnClient::updateCenInterRegionTrafficQosQueueAttribute(const UpdateCenInterRegionTrafficQosQueueAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCenInterRegionTrafficQosQueueAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCenInterRegionTrafficQosQueueAttributeOutcome(UpdateCenInterRegionTrafficQosQueueAttributeResult(outcome.result()));
	else
		return UpdateCenInterRegionTrafficQosQueueAttributeOutcome(outcome.error());
}

void CbnClient::updateCenInterRegionTrafficQosQueueAttributeAsync(const UpdateCenInterRegionTrafficQosQueueAttributeRequest& request, const UpdateCenInterRegionTrafficQosQueueAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCenInterRegionTrafficQosQueueAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::UpdateCenInterRegionTrafficQosQueueAttributeOutcomeCallable CbnClient::updateCenInterRegionTrafficQosQueueAttributeCallable(const UpdateCenInterRegionTrafficQosQueueAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCenInterRegionTrafficQosQueueAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateCenInterRegionTrafficQosQueueAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::UpdateTrafficMarkingPolicyAttributeOutcome CbnClient::updateTrafficMarkingPolicyAttribute(const UpdateTrafficMarkingPolicyAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTrafficMarkingPolicyAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTrafficMarkingPolicyAttributeOutcome(UpdateTrafficMarkingPolicyAttributeResult(outcome.result()));
	else
		return UpdateTrafficMarkingPolicyAttributeOutcome(outcome.error());
}

void CbnClient::updateTrafficMarkingPolicyAttributeAsync(const UpdateTrafficMarkingPolicyAttributeRequest& request, const UpdateTrafficMarkingPolicyAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTrafficMarkingPolicyAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::UpdateTrafficMarkingPolicyAttributeOutcomeCallable CbnClient::updateTrafficMarkingPolicyAttributeCallable(const UpdateTrafficMarkingPolicyAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTrafficMarkingPolicyAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateTrafficMarkingPolicyAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::UpdateTransitRouterOutcome CbnClient::updateTransitRouter(const UpdateTransitRouterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTransitRouterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTransitRouterOutcome(UpdateTransitRouterResult(outcome.result()));
	else
		return UpdateTransitRouterOutcome(outcome.error());
}

void CbnClient::updateTransitRouterAsync(const UpdateTransitRouterRequest& request, const UpdateTransitRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTransitRouter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::UpdateTransitRouterOutcomeCallable CbnClient::updateTransitRouterCallable(const UpdateTransitRouterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTransitRouterOutcome()>>(
			[this, request]()
			{
			return this->updateTransitRouter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::UpdateTransitRouterEcrAttachmentAttributeOutcome CbnClient::updateTransitRouterEcrAttachmentAttribute(const UpdateTransitRouterEcrAttachmentAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTransitRouterEcrAttachmentAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTransitRouterEcrAttachmentAttributeOutcome(UpdateTransitRouterEcrAttachmentAttributeResult(outcome.result()));
	else
		return UpdateTransitRouterEcrAttachmentAttributeOutcome(outcome.error());
}

void CbnClient::updateTransitRouterEcrAttachmentAttributeAsync(const UpdateTransitRouterEcrAttachmentAttributeRequest& request, const UpdateTransitRouterEcrAttachmentAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTransitRouterEcrAttachmentAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::UpdateTransitRouterEcrAttachmentAttributeOutcomeCallable CbnClient::updateTransitRouterEcrAttachmentAttributeCallable(const UpdateTransitRouterEcrAttachmentAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTransitRouterEcrAttachmentAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateTransitRouterEcrAttachmentAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::UpdateTransitRouterPeerAttachmentAttributeOutcome CbnClient::updateTransitRouterPeerAttachmentAttribute(const UpdateTransitRouterPeerAttachmentAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTransitRouterPeerAttachmentAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTransitRouterPeerAttachmentAttributeOutcome(UpdateTransitRouterPeerAttachmentAttributeResult(outcome.result()));
	else
		return UpdateTransitRouterPeerAttachmentAttributeOutcome(outcome.error());
}

void CbnClient::updateTransitRouterPeerAttachmentAttributeAsync(const UpdateTransitRouterPeerAttachmentAttributeRequest& request, const UpdateTransitRouterPeerAttachmentAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTransitRouterPeerAttachmentAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::UpdateTransitRouterPeerAttachmentAttributeOutcomeCallable CbnClient::updateTransitRouterPeerAttachmentAttributeCallable(const UpdateTransitRouterPeerAttachmentAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTransitRouterPeerAttachmentAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateTransitRouterPeerAttachmentAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::UpdateTransitRouterRouteEntryOutcome CbnClient::updateTransitRouterRouteEntry(const UpdateTransitRouterRouteEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTransitRouterRouteEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTransitRouterRouteEntryOutcome(UpdateTransitRouterRouteEntryResult(outcome.result()));
	else
		return UpdateTransitRouterRouteEntryOutcome(outcome.error());
}

void CbnClient::updateTransitRouterRouteEntryAsync(const UpdateTransitRouterRouteEntryRequest& request, const UpdateTransitRouterRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTransitRouterRouteEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::UpdateTransitRouterRouteEntryOutcomeCallable CbnClient::updateTransitRouterRouteEntryCallable(const UpdateTransitRouterRouteEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTransitRouterRouteEntryOutcome()>>(
			[this, request]()
			{
			return this->updateTransitRouterRouteEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::UpdateTransitRouterRouteTableOutcome CbnClient::updateTransitRouterRouteTable(const UpdateTransitRouterRouteTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTransitRouterRouteTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTransitRouterRouteTableOutcome(UpdateTransitRouterRouteTableResult(outcome.result()));
	else
		return UpdateTransitRouterRouteTableOutcome(outcome.error());
}

void CbnClient::updateTransitRouterRouteTableAsync(const UpdateTransitRouterRouteTableRequest& request, const UpdateTransitRouterRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTransitRouterRouteTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::UpdateTransitRouterRouteTableOutcomeCallable CbnClient::updateTransitRouterRouteTableCallable(const UpdateTransitRouterRouteTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTransitRouterRouteTableOutcome()>>(
			[this, request]()
			{
			return this->updateTransitRouterRouteTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::UpdateTransitRouterVbrAttachmentAttributeOutcome CbnClient::updateTransitRouterVbrAttachmentAttribute(const UpdateTransitRouterVbrAttachmentAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTransitRouterVbrAttachmentAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTransitRouterVbrAttachmentAttributeOutcome(UpdateTransitRouterVbrAttachmentAttributeResult(outcome.result()));
	else
		return UpdateTransitRouterVbrAttachmentAttributeOutcome(outcome.error());
}

void CbnClient::updateTransitRouterVbrAttachmentAttributeAsync(const UpdateTransitRouterVbrAttachmentAttributeRequest& request, const UpdateTransitRouterVbrAttachmentAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTransitRouterVbrAttachmentAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::UpdateTransitRouterVbrAttachmentAttributeOutcomeCallable CbnClient::updateTransitRouterVbrAttachmentAttributeCallable(const UpdateTransitRouterVbrAttachmentAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTransitRouterVbrAttachmentAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateTransitRouterVbrAttachmentAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::UpdateTransitRouterVpcAttachmentAttributeOutcome CbnClient::updateTransitRouterVpcAttachmentAttribute(const UpdateTransitRouterVpcAttachmentAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTransitRouterVpcAttachmentAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTransitRouterVpcAttachmentAttributeOutcome(UpdateTransitRouterVpcAttachmentAttributeResult(outcome.result()));
	else
		return UpdateTransitRouterVpcAttachmentAttributeOutcome(outcome.error());
}

void CbnClient::updateTransitRouterVpcAttachmentAttributeAsync(const UpdateTransitRouterVpcAttachmentAttributeRequest& request, const UpdateTransitRouterVpcAttachmentAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTransitRouterVpcAttachmentAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::UpdateTransitRouterVpcAttachmentAttributeOutcomeCallable CbnClient::updateTransitRouterVpcAttachmentAttributeCallable(const UpdateTransitRouterVpcAttachmentAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTransitRouterVpcAttachmentAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateTransitRouterVpcAttachmentAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::UpdateTransitRouterVpcAttachmentZonesOutcome CbnClient::updateTransitRouterVpcAttachmentZones(const UpdateTransitRouterVpcAttachmentZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTransitRouterVpcAttachmentZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTransitRouterVpcAttachmentZonesOutcome(UpdateTransitRouterVpcAttachmentZonesResult(outcome.result()));
	else
		return UpdateTransitRouterVpcAttachmentZonesOutcome(outcome.error());
}

void CbnClient::updateTransitRouterVpcAttachmentZonesAsync(const UpdateTransitRouterVpcAttachmentZonesRequest& request, const UpdateTransitRouterVpcAttachmentZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTransitRouterVpcAttachmentZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::UpdateTransitRouterVpcAttachmentZonesOutcomeCallable CbnClient::updateTransitRouterVpcAttachmentZonesCallable(const UpdateTransitRouterVpcAttachmentZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTransitRouterVpcAttachmentZonesOutcome()>>(
			[this, request]()
			{
			return this->updateTransitRouterVpcAttachmentZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CbnClient::UpdateTransitRouterVpnAttachmentAttributeOutcome CbnClient::updateTransitRouterVpnAttachmentAttribute(const UpdateTransitRouterVpnAttachmentAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTransitRouterVpnAttachmentAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTransitRouterVpnAttachmentAttributeOutcome(UpdateTransitRouterVpnAttachmentAttributeResult(outcome.result()));
	else
		return UpdateTransitRouterVpnAttachmentAttributeOutcome(outcome.error());
}

void CbnClient::updateTransitRouterVpnAttachmentAttributeAsync(const UpdateTransitRouterVpnAttachmentAttributeRequest& request, const UpdateTransitRouterVpnAttachmentAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTransitRouterVpnAttachmentAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CbnClient::UpdateTransitRouterVpnAttachmentAttributeOutcomeCallable CbnClient::updateTransitRouterVpnAttachmentAttributeCallable(const UpdateTransitRouterVpnAttachmentAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTransitRouterVpnAttachmentAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateTransitRouterVpnAttachmentAttribute(request);
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

