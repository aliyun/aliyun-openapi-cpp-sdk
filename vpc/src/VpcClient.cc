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

#include <alibabacloud/vpc/VpcClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

namespace
{
	const std::string SERVICE_NAME = "Vpc";
}

VpcClient::VpcClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "vpc");
}

VpcClient::VpcClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "vpc");
}

VpcClient::VpcClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "vpc");
}

VpcClient::~VpcClient()
{}

VpcClient::ActivateRouterInterfaceOutcome VpcClient::activateRouterInterface(const ActivateRouterInterfaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ActivateRouterInterfaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ActivateRouterInterfaceOutcome(ActivateRouterInterfaceResult(outcome.result()));
	else
		return ActivateRouterInterfaceOutcome(outcome.error());
}

void VpcClient::activateRouterInterfaceAsync(const ActivateRouterInterfaceRequest& request, const ActivateRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, activateRouterInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ActivateRouterInterfaceOutcomeCallable VpcClient::activateRouterInterfaceCallable(const ActivateRouterInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ActivateRouterInterfaceOutcome()>>(
			[this, request]()
			{
			return this->activateRouterInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ActiveFlowLogOutcome VpcClient::activeFlowLog(const ActiveFlowLogRequest &request) const
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

void VpcClient::activeFlowLogAsync(const ActiveFlowLogRequest& request, const ActiveFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, activeFlowLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ActiveFlowLogOutcomeCallable VpcClient::activeFlowLogCallable(const ActiveFlowLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ActiveFlowLogOutcome()>>(
			[this, request]()
			{
			return this->activeFlowLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::AddBandwidthPackageIpsOutcome VpcClient::addBandwidthPackageIps(const AddBandwidthPackageIpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddBandwidthPackageIpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddBandwidthPackageIpsOutcome(AddBandwidthPackageIpsResult(outcome.result()));
	else
		return AddBandwidthPackageIpsOutcome(outcome.error());
}

void VpcClient::addBandwidthPackageIpsAsync(const AddBandwidthPackageIpsRequest& request, const AddBandwidthPackageIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addBandwidthPackageIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::AddBandwidthPackageIpsOutcomeCallable VpcClient::addBandwidthPackageIpsCallable(const AddBandwidthPackageIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddBandwidthPackageIpsOutcome()>>(
			[this, request]()
			{
			return this->addBandwidthPackageIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::AddBgpNetworkOutcome VpcClient::addBgpNetwork(const AddBgpNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddBgpNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddBgpNetworkOutcome(AddBgpNetworkResult(outcome.result()));
	else
		return AddBgpNetworkOutcome(outcome.error());
}

void VpcClient::addBgpNetworkAsync(const AddBgpNetworkRequest& request, const AddBgpNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addBgpNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::AddBgpNetworkOutcomeCallable VpcClient::addBgpNetworkCallable(const AddBgpNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddBgpNetworkOutcome()>>(
			[this, request]()
			{
			return this->addBgpNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::AddCommonBandwidthPackageIpOutcome VpcClient::addCommonBandwidthPackageIp(const AddCommonBandwidthPackageIpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddCommonBandwidthPackageIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddCommonBandwidthPackageIpOutcome(AddCommonBandwidthPackageIpResult(outcome.result()));
	else
		return AddCommonBandwidthPackageIpOutcome(outcome.error());
}

void VpcClient::addCommonBandwidthPackageIpAsync(const AddCommonBandwidthPackageIpRequest& request, const AddCommonBandwidthPackageIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addCommonBandwidthPackageIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::AddCommonBandwidthPackageIpOutcomeCallable VpcClient::addCommonBandwidthPackageIpCallable(const AddCommonBandwidthPackageIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddCommonBandwidthPackageIpOutcome()>>(
			[this, request]()
			{
			return this->addCommonBandwidthPackageIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::AddGlobalAccelerationInstanceIpOutcome VpcClient::addGlobalAccelerationInstanceIp(const AddGlobalAccelerationInstanceIpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddGlobalAccelerationInstanceIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddGlobalAccelerationInstanceIpOutcome(AddGlobalAccelerationInstanceIpResult(outcome.result()));
	else
		return AddGlobalAccelerationInstanceIpOutcome(outcome.error());
}

void VpcClient::addGlobalAccelerationInstanceIpAsync(const AddGlobalAccelerationInstanceIpRequest& request, const AddGlobalAccelerationInstanceIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addGlobalAccelerationInstanceIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::AddGlobalAccelerationInstanceIpOutcomeCallable VpcClient::addGlobalAccelerationInstanceIpCallable(const AddGlobalAccelerationInstanceIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddGlobalAccelerationInstanceIpOutcome()>>(
			[this, request]()
			{
			return this->addGlobalAccelerationInstanceIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::AddIPv6TranslatorAclListEntryOutcome VpcClient::addIPv6TranslatorAclListEntry(const AddIPv6TranslatorAclListEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddIPv6TranslatorAclListEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddIPv6TranslatorAclListEntryOutcome(AddIPv6TranslatorAclListEntryResult(outcome.result()));
	else
		return AddIPv6TranslatorAclListEntryOutcome(outcome.error());
}

void VpcClient::addIPv6TranslatorAclListEntryAsync(const AddIPv6TranslatorAclListEntryRequest& request, const AddIPv6TranslatorAclListEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addIPv6TranslatorAclListEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::AddIPv6TranslatorAclListEntryOutcomeCallable VpcClient::addIPv6TranslatorAclListEntryCallable(const AddIPv6TranslatorAclListEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddIPv6TranslatorAclListEntryOutcome()>>(
			[this, request]()
			{
			return this->addIPv6TranslatorAclListEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::AllocateEipAddressOutcome VpcClient::allocateEipAddress(const AllocateEipAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AllocateEipAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AllocateEipAddressOutcome(AllocateEipAddressResult(outcome.result()));
	else
		return AllocateEipAddressOutcome(outcome.error());
}

void VpcClient::allocateEipAddressAsync(const AllocateEipAddressRequest& request, const AllocateEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocateEipAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::AllocateEipAddressOutcomeCallable VpcClient::allocateEipAddressCallable(const AllocateEipAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocateEipAddressOutcome()>>(
			[this, request]()
			{
			return this->allocateEipAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::AllocateEipSegmentAddressOutcome VpcClient::allocateEipSegmentAddress(const AllocateEipSegmentAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AllocateEipSegmentAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AllocateEipSegmentAddressOutcome(AllocateEipSegmentAddressResult(outcome.result()));
	else
		return AllocateEipSegmentAddressOutcome(outcome.error());
}

void VpcClient::allocateEipSegmentAddressAsync(const AllocateEipSegmentAddressRequest& request, const AllocateEipSegmentAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocateEipSegmentAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::AllocateEipSegmentAddressOutcomeCallable VpcClient::allocateEipSegmentAddressCallable(const AllocateEipSegmentAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocateEipSegmentAddressOutcome()>>(
			[this, request]()
			{
			return this->allocateEipSegmentAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::AllocateIpv6InternetBandwidthOutcome VpcClient::allocateIpv6InternetBandwidth(const AllocateIpv6InternetBandwidthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AllocateIpv6InternetBandwidthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AllocateIpv6InternetBandwidthOutcome(AllocateIpv6InternetBandwidthResult(outcome.result()));
	else
		return AllocateIpv6InternetBandwidthOutcome(outcome.error());
}

void VpcClient::allocateIpv6InternetBandwidthAsync(const AllocateIpv6InternetBandwidthRequest& request, const AllocateIpv6InternetBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocateIpv6InternetBandwidth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::AllocateIpv6InternetBandwidthOutcomeCallable VpcClient::allocateIpv6InternetBandwidthCallable(const AllocateIpv6InternetBandwidthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocateIpv6InternetBandwidthOutcome()>>(
			[this, request]()
			{
			return this->allocateIpv6InternetBandwidth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ApplyPhysicalConnectionLOAOutcome VpcClient::applyPhysicalConnectionLOA(const ApplyPhysicalConnectionLOARequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApplyPhysicalConnectionLOAOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApplyPhysicalConnectionLOAOutcome(ApplyPhysicalConnectionLOAResult(outcome.result()));
	else
		return ApplyPhysicalConnectionLOAOutcome(outcome.error());
}

void VpcClient::applyPhysicalConnectionLOAAsync(const ApplyPhysicalConnectionLOARequest& request, const ApplyPhysicalConnectionLOAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, applyPhysicalConnectionLOA(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ApplyPhysicalConnectionLOAOutcomeCallable VpcClient::applyPhysicalConnectionLOACallable(const ApplyPhysicalConnectionLOARequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApplyPhysicalConnectionLOAOutcome()>>(
			[this, request]()
			{
			return this->applyPhysicalConnectionLOA(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::AssociateEipAddressOutcome VpcClient::associateEipAddress(const AssociateEipAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateEipAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateEipAddressOutcome(AssociateEipAddressResult(outcome.result()));
	else
		return AssociateEipAddressOutcome(outcome.error());
}

void VpcClient::associateEipAddressAsync(const AssociateEipAddressRequest& request, const AssociateEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateEipAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::AssociateEipAddressOutcomeCallable VpcClient::associateEipAddressCallable(const AssociateEipAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateEipAddressOutcome()>>(
			[this, request]()
			{
			return this->associateEipAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::AssociateGlobalAccelerationInstanceOutcome VpcClient::associateGlobalAccelerationInstance(const AssociateGlobalAccelerationInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateGlobalAccelerationInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateGlobalAccelerationInstanceOutcome(AssociateGlobalAccelerationInstanceResult(outcome.result()));
	else
		return AssociateGlobalAccelerationInstanceOutcome(outcome.error());
}

void VpcClient::associateGlobalAccelerationInstanceAsync(const AssociateGlobalAccelerationInstanceRequest& request, const AssociateGlobalAccelerationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateGlobalAccelerationInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::AssociateGlobalAccelerationInstanceOutcomeCallable VpcClient::associateGlobalAccelerationInstanceCallable(const AssociateGlobalAccelerationInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateGlobalAccelerationInstanceOutcome()>>(
			[this, request]()
			{
			return this->associateGlobalAccelerationInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::AssociateHaVipOutcome VpcClient::associateHaVip(const AssociateHaVipRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateHaVipOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateHaVipOutcome(AssociateHaVipResult(outcome.result()));
	else
		return AssociateHaVipOutcome(outcome.error());
}

void VpcClient::associateHaVipAsync(const AssociateHaVipRequest& request, const AssociateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateHaVip(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::AssociateHaVipOutcomeCallable VpcClient::associateHaVipCallable(const AssociateHaVipRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateHaVipOutcome()>>(
			[this, request]()
			{
			return this->associateHaVip(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::AssociateNetworkAclOutcome VpcClient::associateNetworkAcl(const AssociateNetworkAclRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateNetworkAclOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateNetworkAclOutcome(AssociateNetworkAclResult(outcome.result()));
	else
		return AssociateNetworkAclOutcome(outcome.error());
}

void VpcClient::associateNetworkAclAsync(const AssociateNetworkAclRequest& request, const AssociateNetworkAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateNetworkAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::AssociateNetworkAclOutcomeCallable VpcClient::associateNetworkAclCallable(const AssociateNetworkAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateNetworkAclOutcome()>>(
			[this, request]()
			{
			return this->associateNetworkAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::AssociatePhysicalConnectionToVirtualBorderRouterOutcome VpcClient::associatePhysicalConnectionToVirtualBorderRouter(const AssociatePhysicalConnectionToVirtualBorderRouterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssociatePhysicalConnectionToVirtualBorderRouterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociatePhysicalConnectionToVirtualBorderRouterOutcome(AssociatePhysicalConnectionToVirtualBorderRouterResult(outcome.result()));
	else
		return AssociatePhysicalConnectionToVirtualBorderRouterOutcome(outcome.error());
}

void VpcClient::associatePhysicalConnectionToVirtualBorderRouterAsync(const AssociatePhysicalConnectionToVirtualBorderRouterRequest& request, const AssociatePhysicalConnectionToVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associatePhysicalConnectionToVirtualBorderRouter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::AssociatePhysicalConnectionToVirtualBorderRouterOutcomeCallable VpcClient::associatePhysicalConnectionToVirtualBorderRouterCallable(const AssociatePhysicalConnectionToVirtualBorderRouterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociatePhysicalConnectionToVirtualBorderRouterOutcome()>>(
			[this, request]()
			{
			return this->associatePhysicalConnectionToVirtualBorderRouter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::AssociateRouteTableOutcome VpcClient::associateRouteTable(const AssociateRouteTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateRouteTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateRouteTableOutcome(AssociateRouteTableResult(outcome.result()));
	else
		return AssociateRouteTableOutcome(outcome.error());
}

void VpcClient::associateRouteTableAsync(const AssociateRouteTableRequest& request, const AssociateRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateRouteTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::AssociateRouteTableOutcomeCallable VpcClient::associateRouteTableCallable(const AssociateRouteTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateRouteTableOutcome()>>(
			[this, request]()
			{
			return this->associateRouteTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::AssociateVpcCidrBlockOutcome VpcClient::associateVpcCidrBlock(const AssociateVpcCidrBlockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateVpcCidrBlockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateVpcCidrBlockOutcome(AssociateVpcCidrBlockResult(outcome.result()));
	else
		return AssociateVpcCidrBlockOutcome(outcome.error());
}

void VpcClient::associateVpcCidrBlockAsync(const AssociateVpcCidrBlockRequest& request, const AssociateVpcCidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateVpcCidrBlock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::AssociateVpcCidrBlockOutcomeCallable VpcClient::associateVpcCidrBlockCallable(const AssociateVpcCidrBlockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateVpcCidrBlockOutcome()>>(
			[this, request]()
			{
			return this->associateVpcCidrBlock(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CancelCommonBandwidthPackageIpBandwidthOutcome VpcClient::cancelCommonBandwidthPackageIpBandwidth(const CancelCommonBandwidthPackageIpBandwidthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelCommonBandwidthPackageIpBandwidthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelCommonBandwidthPackageIpBandwidthOutcome(CancelCommonBandwidthPackageIpBandwidthResult(outcome.result()));
	else
		return CancelCommonBandwidthPackageIpBandwidthOutcome(outcome.error());
}

void VpcClient::cancelCommonBandwidthPackageIpBandwidthAsync(const CancelCommonBandwidthPackageIpBandwidthRequest& request, const CancelCommonBandwidthPackageIpBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelCommonBandwidthPackageIpBandwidth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CancelCommonBandwidthPackageIpBandwidthOutcomeCallable VpcClient::cancelCommonBandwidthPackageIpBandwidthCallable(const CancelCommonBandwidthPackageIpBandwidthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelCommonBandwidthPackageIpBandwidthOutcome()>>(
			[this, request]()
			{
			return this->cancelCommonBandwidthPackageIpBandwidth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CancelExpressCloudConnectionOutcome VpcClient::cancelExpressCloudConnection(const CancelExpressCloudConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelExpressCloudConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelExpressCloudConnectionOutcome(CancelExpressCloudConnectionResult(outcome.result()));
	else
		return CancelExpressCloudConnectionOutcome(outcome.error());
}

void VpcClient::cancelExpressCloudConnectionAsync(const CancelExpressCloudConnectionRequest& request, const CancelExpressCloudConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelExpressCloudConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CancelExpressCloudConnectionOutcomeCallable VpcClient::cancelExpressCloudConnectionCallable(const CancelExpressCloudConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelExpressCloudConnectionOutcome()>>(
			[this, request]()
			{
			return this->cancelExpressCloudConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CancelPhysicalConnectionOutcome VpcClient::cancelPhysicalConnection(const CancelPhysicalConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelPhysicalConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelPhysicalConnectionOutcome(CancelPhysicalConnectionResult(outcome.result()));
	else
		return CancelPhysicalConnectionOutcome(outcome.error());
}

void VpcClient::cancelPhysicalConnectionAsync(const CancelPhysicalConnectionRequest& request, const CancelPhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelPhysicalConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CancelPhysicalConnectionOutcomeCallable VpcClient::cancelPhysicalConnectionCallable(const CancelPhysicalConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelPhysicalConnectionOutcome()>>(
			[this, request]()
			{
			return this->cancelPhysicalConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CompletePhysicalConnectionLOAOutcome VpcClient::completePhysicalConnectionLOA(const CompletePhysicalConnectionLOARequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CompletePhysicalConnectionLOAOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CompletePhysicalConnectionLOAOutcome(CompletePhysicalConnectionLOAResult(outcome.result()));
	else
		return CompletePhysicalConnectionLOAOutcome(outcome.error());
}

void VpcClient::completePhysicalConnectionLOAAsync(const CompletePhysicalConnectionLOARequest& request, const CompletePhysicalConnectionLOAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, completePhysicalConnectionLOA(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CompletePhysicalConnectionLOAOutcomeCallable VpcClient::completePhysicalConnectionLOACallable(const CompletePhysicalConnectionLOARequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CompletePhysicalConnectionLOAOutcome()>>(
			[this, request]()
			{
			return this->completePhysicalConnectionLOA(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ConnectRouterInterfaceOutcome VpcClient::connectRouterInterface(const ConnectRouterInterfaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConnectRouterInterfaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConnectRouterInterfaceOutcome(ConnectRouterInterfaceResult(outcome.result()));
	else
		return ConnectRouterInterfaceOutcome(outcome.error());
}

void VpcClient::connectRouterInterfaceAsync(const ConnectRouterInterfaceRequest& request, const ConnectRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, connectRouterInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ConnectRouterInterfaceOutcomeCallable VpcClient::connectRouterInterfaceCallable(const ConnectRouterInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConnectRouterInterfaceOutcome()>>(
			[this, request]()
			{
			return this->connectRouterInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ConvertBandwidthPackageOutcome VpcClient::convertBandwidthPackage(const ConvertBandwidthPackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConvertBandwidthPackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConvertBandwidthPackageOutcome(ConvertBandwidthPackageResult(outcome.result()));
	else
		return ConvertBandwidthPackageOutcome(outcome.error());
}

void VpcClient::convertBandwidthPackageAsync(const ConvertBandwidthPackageRequest& request, const ConvertBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, convertBandwidthPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ConvertBandwidthPackageOutcomeCallable VpcClient::convertBandwidthPackageCallable(const ConvertBandwidthPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConvertBandwidthPackageOutcome()>>(
			[this, request]()
			{
			return this->convertBandwidthPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CopyNetworkAclEntriesOutcome VpcClient::copyNetworkAclEntries(const CopyNetworkAclEntriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CopyNetworkAclEntriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CopyNetworkAclEntriesOutcome(CopyNetworkAclEntriesResult(outcome.result()));
	else
		return CopyNetworkAclEntriesOutcome(outcome.error());
}

void VpcClient::copyNetworkAclEntriesAsync(const CopyNetworkAclEntriesRequest& request, const CopyNetworkAclEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, copyNetworkAclEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CopyNetworkAclEntriesOutcomeCallable VpcClient::copyNetworkAclEntriesCallable(const CopyNetworkAclEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CopyNetworkAclEntriesOutcome()>>(
			[this, request]()
			{
			return this->copyNetworkAclEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateBandwidthPackageOutcome VpcClient::createBandwidthPackage(const CreateBandwidthPackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBandwidthPackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBandwidthPackageOutcome(CreateBandwidthPackageResult(outcome.result()));
	else
		return CreateBandwidthPackageOutcome(outcome.error());
}

void VpcClient::createBandwidthPackageAsync(const CreateBandwidthPackageRequest& request, const CreateBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBandwidthPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateBandwidthPackageOutcomeCallable VpcClient::createBandwidthPackageCallable(const CreateBandwidthPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBandwidthPackageOutcome()>>(
			[this, request]()
			{
			return this->createBandwidthPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateBgpGroupOutcome VpcClient::createBgpGroup(const CreateBgpGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBgpGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBgpGroupOutcome(CreateBgpGroupResult(outcome.result()));
	else
		return CreateBgpGroupOutcome(outcome.error());
}

void VpcClient::createBgpGroupAsync(const CreateBgpGroupRequest& request, const CreateBgpGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBgpGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateBgpGroupOutcomeCallable VpcClient::createBgpGroupCallable(const CreateBgpGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBgpGroupOutcome()>>(
			[this, request]()
			{
			return this->createBgpGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateBgpPeerOutcome VpcClient::createBgpPeer(const CreateBgpPeerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBgpPeerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBgpPeerOutcome(CreateBgpPeerResult(outcome.result()));
	else
		return CreateBgpPeerOutcome(outcome.error());
}

void VpcClient::createBgpPeerAsync(const CreateBgpPeerRequest& request, const CreateBgpPeerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBgpPeer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateBgpPeerOutcomeCallable VpcClient::createBgpPeerCallable(const CreateBgpPeerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBgpPeerOutcome()>>(
			[this, request]()
			{
			return this->createBgpPeer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateCommonBandwidthPackageOutcome VpcClient::createCommonBandwidthPackage(const CreateCommonBandwidthPackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCommonBandwidthPackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCommonBandwidthPackageOutcome(CreateCommonBandwidthPackageResult(outcome.result()));
	else
		return CreateCommonBandwidthPackageOutcome(outcome.error());
}

void VpcClient::createCommonBandwidthPackageAsync(const CreateCommonBandwidthPackageRequest& request, const CreateCommonBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCommonBandwidthPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateCommonBandwidthPackageOutcomeCallable VpcClient::createCommonBandwidthPackageCallable(const CreateCommonBandwidthPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCommonBandwidthPackageOutcome()>>(
			[this, request]()
			{
			return this->createCommonBandwidthPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateCustomerGatewayOutcome VpcClient::createCustomerGateway(const CreateCustomerGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCustomerGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCustomerGatewayOutcome(CreateCustomerGatewayResult(outcome.result()));
	else
		return CreateCustomerGatewayOutcome(outcome.error());
}

void VpcClient::createCustomerGatewayAsync(const CreateCustomerGatewayRequest& request, const CreateCustomerGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCustomerGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateCustomerGatewayOutcomeCallable VpcClient::createCustomerGatewayCallable(const CreateCustomerGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCustomerGatewayOutcome()>>(
			[this, request]()
			{
			return this->createCustomerGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateExpressCloudConnectionOutcome VpcClient::createExpressCloudConnection(const CreateExpressCloudConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateExpressCloudConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateExpressCloudConnectionOutcome(CreateExpressCloudConnectionResult(outcome.result()));
	else
		return CreateExpressCloudConnectionOutcome(outcome.error());
}

void VpcClient::createExpressCloudConnectionAsync(const CreateExpressCloudConnectionRequest& request, const CreateExpressCloudConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createExpressCloudConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateExpressCloudConnectionOutcomeCallable VpcClient::createExpressCloudConnectionCallable(const CreateExpressCloudConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateExpressCloudConnectionOutcome()>>(
			[this, request]()
			{
			return this->createExpressCloudConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateFlowLogOutcome VpcClient::createFlowLog(const CreateFlowLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFlowLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFlowLogOutcome(CreateFlowLogResult(outcome.result()));
	else
		return CreateFlowLogOutcome(outcome.error());
}

void VpcClient::createFlowLogAsync(const CreateFlowLogRequest& request, const CreateFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFlowLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateFlowLogOutcomeCallable VpcClient::createFlowLogCallable(const CreateFlowLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFlowLogOutcome()>>(
			[this, request]()
			{
			return this->createFlowLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateForwardEntryOutcome VpcClient::createForwardEntry(const CreateForwardEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateForwardEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateForwardEntryOutcome(CreateForwardEntryResult(outcome.result()));
	else
		return CreateForwardEntryOutcome(outcome.error());
}

void VpcClient::createForwardEntryAsync(const CreateForwardEntryRequest& request, const CreateForwardEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createForwardEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateForwardEntryOutcomeCallable VpcClient::createForwardEntryCallable(const CreateForwardEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateForwardEntryOutcome()>>(
			[this, request]()
			{
			return this->createForwardEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateGlobalAccelerationInstanceOutcome VpcClient::createGlobalAccelerationInstance(const CreateGlobalAccelerationInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGlobalAccelerationInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGlobalAccelerationInstanceOutcome(CreateGlobalAccelerationInstanceResult(outcome.result()));
	else
		return CreateGlobalAccelerationInstanceOutcome(outcome.error());
}

void VpcClient::createGlobalAccelerationInstanceAsync(const CreateGlobalAccelerationInstanceRequest& request, const CreateGlobalAccelerationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGlobalAccelerationInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateGlobalAccelerationInstanceOutcomeCallable VpcClient::createGlobalAccelerationInstanceCallable(const CreateGlobalAccelerationInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGlobalAccelerationInstanceOutcome()>>(
			[this, request]()
			{
			return this->createGlobalAccelerationInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateHaVipOutcome VpcClient::createHaVip(const CreateHaVipRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateHaVipOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateHaVipOutcome(CreateHaVipResult(outcome.result()));
	else
		return CreateHaVipOutcome(outcome.error());
}

void VpcClient::createHaVipAsync(const CreateHaVipRequest& request, const CreateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createHaVip(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateHaVipOutcomeCallable VpcClient::createHaVipCallable(const CreateHaVipRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateHaVipOutcome()>>(
			[this, request]()
			{
			return this->createHaVip(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateIPv6TranslatorOutcome VpcClient::createIPv6Translator(const CreateIPv6TranslatorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateIPv6TranslatorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateIPv6TranslatorOutcome(CreateIPv6TranslatorResult(outcome.result()));
	else
		return CreateIPv6TranslatorOutcome(outcome.error());
}

void VpcClient::createIPv6TranslatorAsync(const CreateIPv6TranslatorRequest& request, const CreateIPv6TranslatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createIPv6Translator(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateIPv6TranslatorOutcomeCallable VpcClient::createIPv6TranslatorCallable(const CreateIPv6TranslatorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateIPv6TranslatorOutcome()>>(
			[this, request]()
			{
			return this->createIPv6Translator(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateIPv6TranslatorAclListOutcome VpcClient::createIPv6TranslatorAclList(const CreateIPv6TranslatorAclListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateIPv6TranslatorAclListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateIPv6TranslatorAclListOutcome(CreateIPv6TranslatorAclListResult(outcome.result()));
	else
		return CreateIPv6TranslatorAclListOutcome(outcome.error());
}

void VpcClient::createIPv6TranslatorAclListAsync(const CreateIPv6TranslatorAclListRequest& request, const CreateIPv6TranslatorAclListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createIPv6TranslatorAclList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateIPv6TranslatorAclListOutcomeCallable VpcClient::createIPv6TranslatorAclListCallable(const CreateIPv6TranslatorAclListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateIPv6TranslatorAclListOutcome()>>(
			[this, request]()
			{
			return this->createIPv6TranslatorAclList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateIPv6TranslatorEntryOutcome VpcClient::createIPv6TranslatorEntry(const CreateIPv6TranslatorEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateIPv6TranslatorEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateIPv6TranslatorEntryOutcome(CreateIPv6TranslatorEntryResult(outcome.result()));
	else
		return CreateIPv6TranslatorEntryOutcome(outcome.error());
}

void VpcClient::createIPv6TranslatorEntryAsync(const CreateIPv6TranslatorEntryRequest& request, const CreateIPv6TranslatorEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createIPv6TranslatorEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateIPv6TranslatorEntryOutcomeCallable VpcClient::createIPv6TranslatorEntryCallable(const CreateIPv6TranslatorEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateIPv6TranslatorEntryOutcome()>>(
			[this, request]()
			{
			return this->createIPv6TranslatorEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateIpv6EgressOnlyRuleOutcome VpcClient::createIpv6EgressOnlyRule(const CreateIpv6EgressOnlyRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateIpv6EgressOnlyRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateIpv6EgressOnlyRuleOutcome(CreateIpv6EgressOnlyRuleResult(outcome.result()));
	else
		return CreateIpv6EgressOnlyRuleOutcome(outcome.error());
}

void VpcClient::createIpv6EgressOnlyRuleAsync(const CreateIpv6EgressOnlyRuleRequest& request, const CreateIpv6EgressOnlyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createIpv6EgressOnlyRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateIpv6EgressOnlyRuleOutcomeCallable VpcClient::createIpv6EgressOnlyRuleCallable(const CreateIpv6EgressOnlyRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateIpv6EgressOnlyRuleOutcome()>>(
			[this, request]()
			{
			return this->createIpv6EgressOnlyRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateIpv6GatewayOutcome VpcClient::createIpv6Gateway(const CreateIpv6GatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateIpv6GatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateIpv6GatewayOutcome(CreateIpv6GatewayResult(outcome.result()));
	else
		return CreateIpv6GatewayOutcome(outcome.error());
}

void VpcClient::createIpv6GatewayAsync(const CreateIpv6GatewayRequest& request, const CreateIpv6GatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createIpv6Gateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateIpv6GatewayOutcomeCallable VpcClient::createIpv6GatewayCallable(const CreateIpv6GatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateIpv6GatewayOutcome()>>(
			[this, request]()
			{
			return this->createIpv6Gateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateNatGatewayOutcome VpcClient::createNatGateway(const CreateNatGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNatGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNatGatewayOutcome(CreateNatGatewayResult(outcome.result()));
	else
		return CreateNatGatewayOutcome(outcome.error());
}

void VpcClient::createNatGatewayAsync(const CreateNatGatewayRequest& request, const CreateNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNatGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateNatGatewayOutcomeCallable VpcClient::createNatGatewayCallable(const CreateNatGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNatGatewayOutcome()>>(
			[this, request]()
			{
			return this->createNatGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateNetworkAclOutcome VpcClient::createNetworkAcl(const CreateNetworkAclRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNetworkAclOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNetworkAclOutcome(CreateNetworkAclResult(outcome.result()));
	else
		return CreateNetworkAclOutcome(outcome.error());
}

void VpcClient::createNetworkAclAsync(const CreateNetworkAclRequest& request, const CreateNetworkAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNetworkAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateNetworkAclOutcomeCallable VpcClient::createNetworkAclCallable(const CreateNetworkAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNetworkAclOutcome()>>(
			[this, request]()
			{
			return this->createNetworkAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreatePhysicalConnectionOutcome VpcClient::createPhysicalConnection(const CreatePhysicalConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePhysicalConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePhysicalConnectionOutcome(CreatePhysicalConnectionResult(outcome.result()));
	else
		return CreatePhysicalConnectionOutcome(outcome.error());
}

void VpcClient::createPhysicalConnectionAsync(const CreatePhysicalConnectionRequest& request, const CreatePhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPhysicalConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreatePhysicalConnectionOutcomeCallable VpcClient::createPhysicalConnectionCallable(const CreatePhysicalConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePhysicalConnectionOutcome()>>(
			[this, request]()
			{
			return this->createPhysicalConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreatePhysicalConnectionOccupancyOrderOutcome VpcClient::createPhysicalConnectionOccupancyOrder(const CreatePhysicalConnectionOccupancyOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePhysicalConnectionOccupancyOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePhysicalConnectionOccupancyOrderOutcome(CreatePhysicalConnectionOccupancyOrderResult(outcome.result()));
	else
		return CreatePhysicalConnectionOccupancyOrderOutcome(outcome.error());
}

void VpcClient::createPhysicalConnectionOccupancyOrderAsync(const CreatePhysicalConnectionOccupancyOrderRequest& request, const CreatePhysicalConnectionOccupancyOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPhysicalConnectionOccupancyOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreatePhysicalConnectionOccupancyOrderOutcomeCallable VpcClient::createPhysicalConnectionOccupancyOrderCallable(const CreatePhysicalConnectionOccupancyOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePhysicalConnectionOccupancyOrderOutcome()>>(
			[this, request]()
			{
			return this->createPhysicalConnectionOccupancyOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreatePhysicalConnectionSetupOrderOutcome VpcClient::createPhysicalConnectionSetupOrder(const CreatePhysicalConnectionSetupOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePhysicalConnectionSetupOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePhysicalConnectionSetupOrderOutcome(CreatePhysicalConnectionSetupOrderResult(outcome.result()));
	else
		return CreatePhysicalConnectionSetupOrderOutcome(outcome.error());
}

void VpcClient::createPhysicalConnectionSetupOrderAsync(const CreatePhysicalConnectionSetupOrderRequest& request, const CreatePhysicalConnectionSetupOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPhysicalConnectionSetupOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreatePhysicalConnectionSetupOrderOutcomeCallable VpcClient::createPhysicalConnectionSetupOrderCallable(const CreatePhysicalConnectionSetupOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePhysicalConnectionSetupOrderOutcome()>>(
			[this, request]()
			{
			return this->createPhysicalConnectionSetupOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateRouteEntryOutcome VpcClient::createRouteEntry(const CreateRouteEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRouteEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRouteEntryOutcome(CreateRouteEntryResult(outcome.result()));
	else
		return CreateRouteEntryOutcome(outcome.error());
}

void VpcClient::createRouteEntryAsync(const CreateRouteEntryRequest& request, const CreateRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRouteEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateRouteEntryOutcomeCallable VpcClient::createRouteEntryCallable(const CreateRouteEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRouteEntryOutcome()>>(
			[this, request]()
			{
			return this->createRouteEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateRouteTableOutcome VpcClient::createRouteTable(const CreateRouteTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRouteTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRouteTableOutcome(CreateRouteTableResult(outcome.result()));
	else
		return CreateRouteTableOutcome(outcome.error());
}

void VpcClient::createRouteTableAsync(const CreateRouteTableRequest& request, const CreateRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRouteTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateRouteTableOutcomeCallable VpcClient::createRouteTableCallable(const CreateRouteTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRouteTableOutcome()>>(
			[this, request]()
			{
			return this->createRouteTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateRouterInterfaceOutcome VpcClient::createRouterInterface(const CreateRouterInterfaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRouterInterfaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRouterInterfaceOutcome(CreateRouterInterfaceResult(outcome.result()));
	else
		return CreateRouterInterfaceOutcome(outcome.error());
}

void VpcClient::createRouterInterfaceAsync(const CreateRouterInterfaceRequest& request, const CreateRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRouterInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateRouterInterfaceOutcomeCallable VpcClient::createRouterInterfaceCallable(const CreateRouterInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRouterInterfaceOutcome()>>(
			[this, request]()
			{
			return this->createRouterInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateSnatEntryOutcome VpcClient::createSnatEntry(const CreateSnatEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSnatEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSnatEntryOutcome(CreateSnatEntryResult(outcome.result()));
	else
		return CreateSnatEntryOutcome(outcome.error());
}

void VpcClient::createSnatEntryAsync(const CreateSnatEntryRequest& request, const CreateSnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSnatEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateSnatEntryOutcomeCallable VpcClient::createSnatEntryCallable(const CreateSnatEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSnatEntryOutcome()>>(
			[this, request]()
			{
			return this->createSnatEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateSslVpnClientCertOutcome VpcClient::createSslVpnClientCert(const CreateSslVpnClientCertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSslVpnClientCertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSslVpnClientCertOutcome(CreateSslVpnClientCertResult(outcome.result()));
	else
		return CreateSslVpnClientCertOutcome(outcome.error());
}

void VpcClient::createSslVpnClientCertAsync(const CreateSslVpnClientCertRequest& request, const CreateSslVpnClientCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSslVpnClientCert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateSslVpnClientCertOutcomeCallable VpcClient::createSslVpnClientCertCallable(const CreateSslVpnClientCertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSslVpnClientCertOutcome()>>(
			[this, request]()
			{
			return this->createSslVpnClientCert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateSslVpnServerOutcome VpcClient::createSslVpnServer(const CreateSslVpnServerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSslVpnServerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSslVpnServerOutcome(CreateSslVpnServerResult(outcome.result()));
	else
		return CreateSslVpnServerOutcome(outcome.error());
}

void VpcClient::createSslVpnServerAsync(const CreateSslVpnServerRequest& request, const CreateSslVpnServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSslVpnServer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateSslVpnServerOutcomeCallable VpcClient::createSslVpnServerCallable(const CreateSslVpnServerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSslVpnServerOutcome()>>(
			[this, request]()
			{
			return this->createSslVpnServer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateVSwitchOutcome VpcClient::createVSwitch(const CreateVSwitchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVSwitchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVSwitchOutcome(CreateVSwitchResult(outcome.result()));
	else
		return CreateVSwitchOutcome(outcome.error());
}

void VpcClient::createVSwitchAsync(const CreateVSwitchRequest& request, const CreateVSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVSwitch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateVSwitchOutcomeCallable VpcClient::createVSwitchCallable(const CreateVSwitchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVSwitchOutcome()>>(
			[this, request]()
			{
			return this->createVSwitch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateVirtualBorderRouterOutcome VpcClient::createVirtualBorderRouter(const CreateVirtualBorderRouterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVirtualBorderRouterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVirtualBorderRouterOutcome(CreateVirtualBorderRouterResult(outcome.result()));
	else
		return CreateVirtualBorderRouterOutcome(outcome.error());
}

void VpcClient::createVirtualBorderRouterAsync(const CreateVirtualBorderRouterRequest& request, const CreateVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVirtualBorderRouter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateVirtualBorderRouterOutcomeCallable VpcClient::createVirtualBorderRouterCallable(const CreateVirtualBorderRouterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVirtualBorderRouterOutcome()>>(
			[this, request]()
			{
			return this->createVirtualBorderRouter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateVpcOutcome VpcClient::createVpc(const CreateVpcRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVpcOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVpcOutcome(CreateVpcResult(outcome.result()));
	else
		return CreateVpcOutcome(outcome.error());
}

void VpcClient::createVpcAsync(const CreateVpcRequest& request, const CreateVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVpc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateVpcOutcomeCallable VpcClient::createVpcCallable(const CreateVpcRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVpcOutcome()>>(
			[this, request]()
			{
			return this->createVpc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateVpnConnectionOutcome VpcClient::createVpnConnection(const CreateVpnConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVpnConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVpnConnectionOutcome(CreateVpnConnectionResult(outcome.result()));
	else
		return CreateVpnConnectionOutcome(outcome.error());
}

void VpcClient::createVpnConnectionAsync(const CreateVpnConnectionRequest& request, const CreateVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVpnConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateVpnConnectionOutcomeCallable VpcClient::createVpnConnectionCallable(const CreateVpnConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVpnConnectionOutcome()>>(
			[this, request]()
			{
			return this->createVpnConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateVpnGatewayOutcome VpcClient::createVpnGateway(const CreateVpnGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVpnGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVpnGatewayOutcome(CreateVpnGatewayResult(outcome.result()));
	else
		return CreateVpnGatewayOutcome(outcome.error());
}

void VpcClient::createVpnGatewayAsync(const CreateVpnGatewayRequest& request, const CreateVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVpnGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateVpnGatewayOutcomeCallable VpcClient::createVpnGatewayCallable(const CreateVpnGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVpnGatewayOutcome()>>(
			[this, request]()
			{
			return this->createVpnGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateVpnPbrRouteEntryOutcome VpcClient::createVpnPbrRouteEntry(const CreateVpnPbrRouteEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVpnPbrRouteEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVpnPbrRouteEntryOutcome(CreateVpnPbrRouteEntryResult(outcome.result()));
	else
		return CreateVpnPbrRouteEntryOutcome(outcome.error());
}

void VpcClient::createVpnPbrRouteEntryAsync(const CreateVpnPbrRouteEntryRequest& request, const CreateVpnPbrRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVpnPbrRouteEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateVpnPbrRouteEntryOutcomeCallable VpcClient::createVpnPbrRouteEntryCallable(const CreateVpnPbrRouteEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVpnPbrRouteEntryOutcome()>>(
			[this, request]()
			{
			return this->createVpnPbrRouteEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateVpnRouteEntryOutcome VpcClient::createVpnRouteEntry(const CreateVpnRouteEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVpnRouteEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVpnRouteEntryOutcome(CreateVpnRouteEntryResult(outcome.result()));
	else
		return CreateVpnRouteEntryOutcome(outcome.error());
}

void VpcClient::createVpnRouteEntryAsync(const CreateVpnRouteEntryRequest& request, const CreateVpnRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVpnRouteEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateVpnRouteEntryOutcomeCallable VpcClient::createVpnRouteEntryCallable(const CreateVpnRouteEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVpnRouteEntryOutcome()>>(
			[this, request]()
			{
			return this->createVpnRouteEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeactivateRouterInterfaceOutcome VpcClient::deactivateRouterInterface(const DeactivateRouterInterfaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeactivateRouterInterfaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeactivateRouterInterfaceOutcome(DeactivateRouterInterfaceResult(outcome.result()));
	else
		return DeactivateRouterInterfaceOutcome(outcome.error());
}

void VpcClient::deactivateRouterInterfaceAsync(const DeactivateRouterInterfaceRequest& request, const DeactivateRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deactivateRouterInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeactivateRouterInterfaceOutcomeCallable VpcClient::deactivateRouterInterfaceCallable(const DeactivateRouterInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeactivateRouterInterfaceOutcome()>>(
			[this, request]()
			{
			return this->deactivateRouterInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeactiveFlowLogOutcome VpcClient::deactiveFlowLog(const DeactiveFlowLogRequest &request) const
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

void VpcClient::deactiveFlowLogAsync(const DeactiveFlowLogRequest& request, const DeactiveFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deactiveFlowLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeactiveFlowLogOutcomeCallable VpcClient::deactiveFlowLogCallable(const DeactiveFlowLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeactiveFlowLogOutcome()>>(
			[this, request]()
			{
			return this->deactiveFlowLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteBandwidthPackageOutcome VpcClient::deleteBandwidthPackage(const DeleteBandwidthPackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBandwidthPackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBandwidthPackageOutcome(DeleteBandwidthPackageResult(outcome.result()));
	else
		return DeleteBandwidthPackageOutcome(outcome.error());
}

void VpcClient::deleteBandwidthPackageAsync(const DeleteBandwidthPackageRequest& request, const DeleteBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBandwidthPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteBandwidthPackageOutcomeCallable VpcClient::deleteBandwidthPackageCallable(const DeleteBandwidthPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBandwidthPackageOutcome()>>(
			[this, request]()
			{
			return this->deleteBandwidthPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteBgpGroupOutcome VpcClient::deleteBgpGroup(const DeleteBgpGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBgpGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBgpGroupOutcome(DeleteBgpGroupResult(outcome.result()));
	else
		return DeleteBgpGroupOutcome(outcome.error());
}

void VpcClient::deleteBgpGroupAsync(const DeleteBgpGroupRequest& request, const DeleteBgpGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBgpGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteBgpGroupOutcomeCallable VpcClient::deleteBgpGroupCallable(const DeleteBgpGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBgpGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteBgpGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteBgpNetworkOutcome VpcClient::deleteBgpNetwork(const DeleteBgpNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBgpNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBgpNetworkOutcome(DeleteBgpNetworkResult(outcome.result()));
	else
		return DeleteBgpNetworkOutcome(outcome.error());
}

void VpcClient::deleteBgpNetworkAsync(const DeleteBgpNetworkRequest& request, const DeleteBgpNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBgpNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteBgpNetworkOutcomeCallable VpcClient::deleteBgpNetworkCallable(const DeleteBgpNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBgpNetworkOutcome()>>(
			[this, request]()
			{
			return this->deleteBgpNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteBgpPeerOutcome VpcClient::deleteBgpPeer(const DeleteBgpPeerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBgpPeerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBgpPeerOutcome(DeleteBgpPeerResult(outcome.result()));
	else
		return DeleteBgpPeerOutcome(outcome.error());
}

void VpcClient::deleteBgpPeerAsync(const DeleteBgpPeerRequest& request, const DeleteBgpPeerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBgpPeer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteBgpPeerOutcomeCallable VpcClient::deleteBgpPeerCallable(const DeleteBgpPeerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBgpPeerOutcome()>>(
			[this, request]()
			{
			return this->deleteBgpPeer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteCommonBandwidthPackageOutcome VpcClient::deleteCommonBandwidthPackage(const DeleteCommonBandwidthPackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCommonBandwidthPackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCommonBandwidthPackageOutcome(DeleteCommonBandwidthPackageResult(outcome.result()));
	else
		return DeleteCommonBandwidthPackageOutcome(outcome.error());
}

void VpcClient::deleteCommonBandwidthPackageAsync(const DeleteCommonBandwidthPackageRequest& request, const DeleteCommonBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCommonBandwidthPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteCommonBandwidthPackageOutcomeCallable VpcClient::deleteCommonBandwidthPackageCallable(const DeleteCommonBandwidthPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCommonBandwidthPackageOutcome()>>(
			[this, request]()
			{
			return this->deleteCommonBandwidthPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteCustomerGatewayOutcome VpcClient::deleteCustomerGateway(const DeleteCustomerGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCustomerGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCustomerGatewayOutcome(DeleteCustomerGatewayResult(outcome.result()));
	else
		return DeleteCustomerGatewayOutcome(outcome.error());
}

void VpcClient::deleteCustomerGatewayAsync(const DeleteCustomerGatewayRequest& request, const DeleteCustomerGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCustomerGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteCustomerGatewayOutcomeCallable VpcClient::deleteCustomerGatewayCallable(const DeleteCustomerGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCustomerGatewayOutcome()>>(
			[this, request]()
			{
			return this->deleteCustomerGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteExpressCloudConnectionOutcome VpcClient::deleteExpressCloudConnection(const DeleteExpressCloudConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteExpressCloudConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteExpressCloudConnectionOutcome(DeleteExpressCloudConnectionResult(outcome.result()));
	else
		return DeleteExpressCloudConnectionOutcome(outcome.error());
}

void VpcClient::deleteExpressCloudConnectionAsync(const DeleteExpressCloudConnectionRequest& request, const DeleteExpressCloudConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteExpressCloudConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteExpressCloudConnectionOutcomeCallable VpcClient::deleteExpressCloudConnectionCallable(const DeleteExpressCloudConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteExpressCloudConnectionOutcome()>>(
			[this, request]()
			{
			return this->deleteExpressCloudConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteExpressConnectOutcome VpcClient::deleteExpressConnect(const DeleteExpressConnectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteExpressConnectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteExpressConnectOutcome(DeleteExpressConnectResult(outcome.result()));
	else
		return DeleteExpressConnectOutcome(outcome.error());
}

void VpcClient::deleteExpressConnectAsync(const DeleteExpressConnectRequest& request, const DeleteExpressConnectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteExpressConnect(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteExpressConnectOutcomeCallable VpcClient::deleteExpressConnectCallable(const DeleteExpressConnectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteExpressConnectOutcome()>>(
			[this, request]()
			{
			return this->deleteExpressConnect(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteFlowLogOutcome VpcClient::deleteFlowLog(const DeleteFlowLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFlowLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFlowLogOutcome(DeleteFlowLogResult(outcome.result()));
	else
		return DeleteFlowLogOutcome(outcome.error());
}

void VpcClient::deleteFlowLogAsync(const DeleteFlowLogRequest& request, const DeleteFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFlowLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteFlowLogOutcomeCallable VpcClient::deleteFlowLogCallable(const DeleteFlowLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFlowLogOutcome()>>(
			[this, request]()
			{
			return this->deleteFlowLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteForwardEntryOutcome VpcClient::deleteForwardEntry(const DeleteForwardEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteForwardEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteForwardEntryOutcome(DeleteForwardEntryResult(outcome.result()));
	else
		return DeleteForwardEntryOutcome(outcome.error());
}

void VpcClient::deleteForwardEntryAsync(const DeleteForwardEntryRequest& request, const DeleteForwardEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteForwardEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteForwardEntryOutcomeCallable VpcClient::deleteForwardEntryCallable(const DeleteForwardEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteForwardEntryOutcome()>>(
			[this, request]()
			{
			return this->deleteForwardEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteGlobalAccelerationInstanceOutcome VpcClient::deleteGlobalAccelerationInstance(const DeleteGlobalAccelerationInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGlobalAccelerationInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGlobalAccelerationInstanceOutcome(DeleteGlobalAccelerationInstanceResult(outcome.result()));
	else
		return DeleteGlobalAccelerationInstanceOutcome(outcome.error());
}

void VpcClient::deleteGlobalAccelerationInstanceAsync(const DeleteGlobalAccelerationInstanceRequest& request, const DeleteGlobalAccelerationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGlobalAccelerationInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteGlobalAccelerationInstanceOutcomeCallable VpcClient::deleteGlobalAccelerationInstanceCallable(const DeleteGlobalAccelerationInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGlobalAccelerationInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteGlobalAccelerationInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteHaVipOutcome VpcClient::deleteHaVip(const DeleteHaVipRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteHaVipOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteHaVipOutcome(DeleteHaVipResult(outcome.result()));
	else
		return DeleteHaVipOutcome(outcome.error());
}

void VpcClient::deleteHaVipAsync(const DeleteHaVipRequest& request, const DeleteHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteHaVip(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteHaVipOutcomeCallable VpcClient::deleteHaVipCallable(const DeleteHaVipRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteHaVipOutcome()>>(
			[this, request]()
			{
			return this->deleteHaVip(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteIPv6TranslatorOutcome VpcClient::deleteIPv6Translator(const DeleteIPv6TranslatorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteIPv6TranslatorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteIPv6TranslatorOutcome(DeleteIPv6TranslatorResult(outcome.result()));
	else
		return DeleteIPv6TranslatorOutcome(outcome.error());
}

void VpcClient::deleteIPv6TranslatorAsync(const DeleteIPv6TranslatorRequest& request, const DeleteIPv6TranslatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteIPv6Translator(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteIPv6TranslatorOutcomeCallable VpcClient::deleteIPv6TranslatorCallable(const DeleteIPv6TranslatorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteIPv6TranslatorOutcome()>>(
			[this, request]()
			{
			return this->deleteIPv6Translator(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteIPv6TranslatorAclListOutcome VpcClient::deleteIPv6TranslatorAclList(const DeleteIPv6TranslatorAclListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteIPv6TranslatorAclListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteIPv6TranslatorAclListOutcome(DeleteIPv6TranslatorAclListResult(outcome.result()));
	else
		return DeleteIPv6TranslatorAclListOutcome(outcome.error());
}

void VpcClient::deleteIPv6TranslatorAclListAsync(const DeleteIPv6TranslatorAclListRequest& request, const DeleteIPv6TranslatorAclListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteIPv6TranslatorAclList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteIPv6TranslatorAclListOutcomeCallable VpcClient::deleteIPv6TranslatorAclListCallable(const DeleteIPv6TranslatorAclListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteIPv6TranslatorAclListOutcome()>>(
			[this, request]()
			{
			return this->deleteIPv6TranslatorAclList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteIPv6TranslatorEntryOutcome VpcClient::deleteIPv6TranslatorEntry(const DeleteIPv6TranslatorEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteIPv6TranslatorEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteIPv6TranslatorEntryOutcome(DeleteIPv6TranslatorEntryResult(outcome.result()));
	else
		return DeleteIPv6TranslatorEntryOutcome(outcome.error());
}

void VpcClient::deleteIPv6TranslatorEntryAsync(const DeleteIPv6TranslatorEntryRequest& request, const DeleteIPv6TranslatorEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteIPv6TranslatorEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteIPv6TranslatorEntryOutcomeCallable VpcClient::deleteIPv6TranslatorEntryCallable(const DeleteIPv6TranslatorEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteIPv6TranslatorEntryOutcome()>>(
			[this, request]()
			{
			return this->deleteIPv6TranslatorEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteIpv6EgressOnlyRuleOutcome VpcClient::deleteIpv6EgressOnlyRule(const DeleteIpv6EgressOnlyRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteIpv6EgressOnlyRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteIpv6EgressOnlyRuleOutcome(DeleteIpv6EgressOnlyRuleResult(outcome.result()));
	else
		return DeleteIpv6EgressOnlyRuleOutcome(outcome.error());
}

void VpcClient::deleteIpv6EgressOnlyRuleAsync(const DeleteIpv6EgressOnlyRuleRequest& request, const DeleteIpv6EgressOnlyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteIpv6EgressOnlyRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteIpv6EgressOnlyRuleOutcomeCallable VpcClient::deleteIpv6EgressOnlyRuleCallable(const DeleteIpv6EgressOnlyRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteIpv6EgressOnlyRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteIpv6EgressOnlyRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteIpv6GatewayOutcome VpcClient::deleteIpv6Gateway(const DeleteIpv6GatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteIpv6GatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteIpv6GatewayOutcome(DeleteIpv6GatewayResult(outcome.result()));
	else
		return DeleteIpv6GatewayOutcome(outcome.error());
}

void VpcClient::deleteIpv6GatewayAsync(const DeleteIpv6GatewayRequest& request, const DeleteIpv6GatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteIpv6Gateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteIpv6GatewayOutcomeCallable VpcClient::deleteIpv6GatewayCallable(const DeleteIpv6GatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteIpv6GatewayOutcome()>>(
			[this, request]()
			{
			return this->deleteIpv6Gateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteIpv6InternetBandwidthOutcome VpcClient::deleteIpv6InternetBandwidth(const DeleteIpv6InternetBandwidthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteIpv6InternetBandwidthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteIpv6InternetBandwidthOutcome(DeleteIpv6InternetBandwidthResult(outcome.result()));
	else
		return DeleteIpv6InternetBandwidthOutcome(outcome.error());
}

void VpcClient::deleteIpv6InternetBandwidthAsync(const DeleteIpv6InternetBandwidthRequest& request, const DeleteIpv6InternetBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteIpv6InternetBandwidth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteIpv6InternetBandwidthOutcomeCallable VpcClient::deleteIpv6InternetBandwidthCallable(const DeleteIpv6InternetBandwidthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteIpv6InternetBandwidthOutcome()>>(
			[this, request]()
			{
			return this->deleteIpv6InternetBandwidth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteNatGatewayOutcome VpcClient::deleteNatGateway(const DeleteNatGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNatGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNatGatewayOutcome(DeleteNatGatewayResult(outcome.result()));
	else
		return DeleteNatGatewayOutcome(outcome.error());
}

void VpcClient::deleteNatGatewayAsync(const DeleteNatGatewayRequest& request, const DeleteNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNatGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteNatGatewayOutcomeCallable VpcClient::deleteNatGatewayCallable(const DeleteNatGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNatGatewayOutcome()>>(
			[this, request]()
			{
			return this->deleteNatGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteNetworkAclOutcome VpcClient::deleteNetworkAcl(const DeleteNetworkAclRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNetworkAclOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNetworkAclOutcome(DeleteNetworkAclResult(outcome.result()));
	else
		return DeleteNetworkAclOutcome(outcome.error());
}

void VpcClient::deleteNetworkAclAsync(const DeleteNetworkAclRequest& request, const DeleteNetworkAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNetworkAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteNetworkAclOutcomeCallable VpcClient::deleteNetworkAclCallable(const DeleteNetworkAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNetworkAclOutcome()>>(
			[this, request]()
			{
			return this->deleteNetworkAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeletePhysicalConnectionOutcome VpcClient::deletePhysicalConnection(const DeletePhysicalConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePhysicalConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePhysicalConnectionOutcome(DeletePhysicalConnectionResult(outcome.result()));
	else
		return DeletePhysicalConnectionOutcome(outcome.error());
}

void VpcClient::deletePhysicalConnectionAsync(const DeletePhysicalConnectionRequest& request, const DeletePhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePhysicalConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeletePhysicalConnectionOutcomeCallable VpcClient::deletePhysicalConnectionCallable(const DeletePhysicalConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePhysicalConnectionOutcome()>>(
			[this, request]()
			{
			return this->deletePhysicalConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteRouteEntryOutcome VpcClient::deleteRouteEntry(const DeleteRouteEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRouteEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRouteEntryOutcome(DeleteRouteEntryResult(outcome.result()));
	else
		return DeleteRouteEntryOutcome(outcome.error());
}

void VpcClient::deleteRouteEntryAsync(const DeleteRouteEntryRequest& request, const DeleteRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRouteEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteRouteEntryOutcomeCallable VpcClient::deleteRouteEntryCallable(const DeleteRouteEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRouteEntryOutcome()>>(
			[this, request]()
			{
			return this->deleteRouteEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteRouteTableOutcome VpcClient::deleteRouteTable(const DeleteRouteTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRouteTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRouteTableOutcome(DeleteRouteTableResult(outcome.result()));
	else
		return DeleteRouteTableOutcome(outcome.error());
}

void VpcClient::deleteRouteTableAsync(const DeleteRouteTableRequest& request, const DeleteRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRouteTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteRouteTableOutcomeCallable VpcClient::deleteRouteTableCallable(const DeleteRouteTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRouteTableOutcome()>>(
			[this, request]()
			{
			return this->deleteRouteTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteRouterInterfaceOutcome VpcClient::deleteRouterInterface(const DeleteRouterInterfaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRouterInterfaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRouterInterfaceOutcome(DeleteRouterInterfaceResult(outcome.result()));
	else
		return DeleteRouterInterfaceOutcome(outcome.error());
}

void VpcClient::deleteRouterInterfaceAsync(const DeleteRouterInterfaceRequest& request, const DeleteRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRouterInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteRouterInterfaceOutcomeCallable VpcClient::deleteRouterInterfaceCallable(const DeleteRouterInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRouterInterfaceOutcome()>>(
			[this, request]()
			{
			return this->deleteRouterInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteSnatEntryOutcome VpcClient::deleteSnatEntry(const DeleteSnatEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSnatEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSnatEntryOutcome(DeleteSnatEntryResult(outcome.result()));
	else
		return DeleteSnatEntryOutcome(outcome.error());
}

void VpcClient::deleteSnatEntryAsync(const DeleteSnatEntryRequest& request, const DeleteSnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSnatEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteSnatEntryOutcomeCallable VpcClient::deleteSnatEntryCallable(const DeleteSnatEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSnatEntryOutcome()>>(
			[this, request]()
			{
			return this->deleteSnatEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteSslVpnClientCertOutcome VpcClient::deleteSslVpnClientCert(const DeleteSslVpnClientCertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSslVpnClientCertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSslVpnClientCertOutcome(DeleteSslVpnClientCertResult(outcome.result()));
	else
		return DeleteSslVpnClientCertOutcome(outcome.error());
}

void VpcClient::deleteSslVpnClientCertAsync(const DeleteSslVpnClientCertRequest& request, const DeleteSslVpnClientCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSslVpnClientCert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteSslVpnClientCertOutcomeCallable VpcClient::deleteSslVpnClientCertCallable(const DeleteSslVpnClientCertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSslVpnClientCertOutcome()>>(
			[this, request]()
			{
			return this->deleteSslVpnClientCert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteSslVpnServerOutcome VpcClient::deleteSslVpnServer(const DeleteSslVpnServerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSslVpnServerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSslVpnServerOutcome(DeleteSslVpnServerResult(outcome.result()));
	else
		return DeleteSslVpnServerOutcome(outcome.error());
}

void VpcClient::deleteSslVpnServerAsync(const DeleteSslVpnServerRequest& request, const DeleteSslVpnServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSslVpnServer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteSslVpnServerOutcomeCallable VpcClient::deleteSslVpnServerCallable(const DeleteSslVpnServerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSslVpnServerOutcome()>>(
			[this, request]()
			{
			return this->deleteSslVpnServer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteVSwitchOutcome VpcClient::deleteVSwitch(const DeleteVSwitchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVSwitchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVSwitchOutcome(DeleteVSwitchResult(outcome.result()));
	else
		return DeleteVSwitchOutcome(outcome.error());
}

void VpcClient::deleteVSwitchAsync(const DeleteVSwitchRequest& request, const DeleteVSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVSwitch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteVSwitchOutcomeCallable VpcClient::deleteVSwitchCallable(const DeleteVSwitchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVSwitchOutcome()>>(
			[this, request]()
			{
			return this->deleteVSwitch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteVirtualBorderRouterOutcome VpcClient::deleteVirtualBorderRouter(const DeleteVirtualBorderRouterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVirtualBorderRouterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVirtualBorderRouterOutcome(DeleteVirtualBorderRouterResult(outcome.result()));
	else
		return DeleteVirtualBorderRouterOutcome(outcome.error());
}

void VpcClient::deleteVirtualBorderRouterAsync(const DeleteVirtualBorderRouterRequest& request, const DeleteVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVirtualBorderRouter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteVirtualBorderRouterOutcomeCallable VpcClient::deleteVirtualBorderRouterCallable(const DeleteVirtualBorderRouterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVirtualBorderRouterOutcome()>>(
			[this, request]()
			{
			return this->deleteVirtualBorderRouter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteVpcOutcome VpcClient::deleteVpc(const DeleteVpcRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVpcOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVpcOutcome(DeleteVpcResult(outcome.result()));
	else
		return DeleteVpcOutcome(outcome.error());
}

void VpcClient::deleteVpcAsync(const DeleteVpcRequest& request, const DeleteVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVpc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteVpcOutcomeCallable VpcClient::deleteVpcCallable(const DeleteVpcRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVpcOutcome()>>(
			[this, request]()
			{
			return this->deleteVpc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteVpnConnectionOutcome VpcClient::deleteVpnConnection(const DeleteVpnConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVpnConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVpnConnectionOutcome(DeleteVpnConnectionResult(outcome.result()));
	else
		return DeleteVpnConnectionOutcome(outcome.error());
}

void VpcClient::deleteVpnConnectionAsync(const DeleteVpnConnectionRequest& request, const DeleteVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVpnConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteVpnConnectionOutcomeCallable VpcClient::deleteVpnConnectionCallable(const DeleteVpnConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVpnConnectionOutcome()>>(
			[this, request]()
			{
			return this->deleteVpnConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteVpnGatewayOutcome VpcClient::deleteVpnGateway(const DeleteVpnGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVpnGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVpnGatewayOutcome(DeleteVpnGatewayResult(outcome.result()));
	else
		return DeleteVpnGatewayOutcome(outcome.error());
}

void VpcClient::deleteVpnGatewayAsync(const DeleteVpnGatewayRequest& request, const DeleteVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVpnGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteVpnGatewayOutcomeCallable VpcClient::deleteVpnGatewayCallable(const DeleteVpnGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVpnGatewayOutcome()>>(
			[this, request]()
			{
			return this->deleteVpnGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteVpnPbrRouteEntryOutcome VpcClient::deleteVpnPbrRouteEntry(const DeleteVpnPbrRouteEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVpnPbrRouteEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVpnPbrRouteEntryOutcome(DeleteVpnPbrRouteEntryResult(outcome.result()));
	else
		return DeleteVpnPbrRouteEntryOutcome(outcome.error());
}

void VpcClient::deleteVpnPbrRouteEntryAsync(const DeleteVpnPbrRouteEntryRequest& request, const DeleteVpnPbrRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVpnPbrRouteEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteVpnPbrRouteEntryOutcomeCallable VpcClient::deleteVpnPbrRouteEntryCallable(const DeleteVpnPbrRouteEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVpnPbrRouteEntryOutcome()>>(
			[this, request]()
			{
			return this->deleteVpnPbrRouteEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteVpnRouteEntryOutcome VpcClient::deleteVpnRouteEntry(const DeleteVpnRouteEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVpnRouteEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVpnRouteEntryOutcome(DeleteVpnRouteEntryResult(outcome.result()));
	else
		return DeleteVpnRouteEntryOutcome(outcome.error());
}

void VpcClient::deleteVpnRouteEntryAsync(const DeleteVpnRouteEntryRequest& request, const DeleteVpnRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVpnRouteEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteVpnRouteEntryOutcomeCallable VpcClient::deleteVpnRouteEntryCallable(const DeleteVpnRouteEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVpnRouteEntryOutcome()>>(
			[this, request]()
			{
			return this->deleteVpnRouteEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeletionProtectionOutcome VpcClient::deletionProtection(const DeletionProtectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletionProtectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletionProtectionOutcome(DeletionProtectionResult(outcome.result()));
	else
		return DeletionProtectionOutcome(outcome.error());
}

void VpcClient::deletionProtectionAsync(const DeletionProtectionRequest& request, const DeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletionProtection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeletionProtectionOutcomeCallable VpcClient::deletionProtectionCallable(const DeletionProtectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletionProtectionOutcome()>>(
			[this, request]()
			{
			return this->deletionProtection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeAccessPointsOutcome VpcClient::describeAccessPoints(const DescribeAccessPointsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccessPointsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccessPointsOutcome(DescribeAccessPointsResult(outcome.result()));
	else
		return DescribeAccessPointsOutcome(outcome.error());
}

void VpcClient::describeAccessPointsAsync(const DescribeAccessPointsRequest& request, const DescribeAccessPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccessPoints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeAccessPointsOutcomeCallable VpcClient::describeAccessPointsCallable(const DescribeAccessPointsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccessPointsOutcome()>>(
			[this, request]()
			{
			return this->describeAccessPoints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeBandwidthPackagesOutcome VpcClient::describeBandwidthPackages(const DescribeBandwidthPackagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBandwidthPackagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBandwidthPackagesOutcome(DescribeBandwidthPackagesResult(outcome.result()));
	else
		return DescribeBandwidthPackagesOutcome(outcome.error());
}

void VpcClient::describeBandwidthPackagesAsync(const DescribeBandwidthPackagesRequest& request, const DescribeBandwidthPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBandwidthPackages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeBandwidthPackagesOutcomeCallable VpcClient::describeBandwidthPackagesCallable(const DescribeBandwidthPackagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBandwidthPackagesOutcome()>>(
			[this, request]()
			{
			return this->describeBandwidthPackages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeBgpGroupsOutcome VpcClient::describeBgpGroups(const DescribeBgpGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBgpGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBgpGroupsOutcome(DescribeBgpGroupsResult(outcome.result()));
	else
		return DescribeBgpGroupsOutcome(outcome.error());
}

void VpcClient::describeBgpGroupsAsync(const DescribeBgpGroupsRequest& request, const DescribeBgpGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBgpGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeBgpGroupsOutcomeCallable VpcClient::describeBgpGroupsCallable(const DescribeBgpGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBgpGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeBgpGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeBgpNetworksOutcome VpcClient::describeBgpNetworks(const DescribeBgpNetworksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBgpNetworksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBgpNetworksOutcome(DescribeBgpNetworksResult(outcome.result()));
	else
		return DescribeBgpNetworksOutcome(outcome.error());
}

void VpcClient::describeBgpNetworksAsync(const DescribeBgpNetworksRequest& request, const DescribeBgpNetworksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBgpNetworks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeBgpNetworksOutcomeCallable VpcClient::describeBgpNetworksCallable(const DescribeBgpNetworksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBgpNetworksOutcome()>>(
			[this, request]()
			{
			return this->describeBgpNetworks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeBgpPeersOutcome VpcClient::describeBgpPeers(const DescribeBgpPeersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBgpPeersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBgpPeersOutcome(DescribeBgpPeersResult(outcome.result()));
	else
		return DescribeBgpPeersOutcome(outcome.error());
}

void VpcClient::describeBgpPeersAsync(const DescribeBgpPeersRequest& request, const DescribeBgpPeersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBgpPeers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeBgpPeersOutcomeCallable VpcClient::describeBgpPeersCallable(const DescribeBgpPeersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBgpPeersOutcome()>>(
			[this, request]()
			{
			return this->describeBgpPeers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeCommonBandwidthPackagesOutcome VpcClient::describeCommonBandwidthPackages(const DescribeCommonBandwidthPackagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCommonBandwidthPackagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCommonBandwidthPackagesOutcome(DescribeCommonBandwidthPackagesResult(outcome.result()));
	else
		return DescribeCommonBandwidthPackagesOutcome(outcome.error());
}

void VpcClient::describeCommonBandwidthPackagesAsync(const DescribeCommonBandwidthPackagesRequest& request, const DescribeCommonBandwidthPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCommonBandwidthPackages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeCommonBandwidthPackagesOutcomeCallable VpcClient::describeCommonBandwidthPackagesCallable(const DescribeCommonBandwidthPackagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCommonBandwidthPackagesOutcome()>>(
			[this, request]()
			{
			return this->describeCommonBandwidthPackages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeCustomerGatewayOutcome VpcClient::describeCustomerGateway(const DescribeCustomerGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCustomerGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCustomerGatewayOutcome(DescribeCustomerGatewayResult(outcome.result()));
	else
		return DescribeCustomerGatewayOutcome(outcome.error());
}

void VpcClient::describeCustomerGatewayAsync(const DescribeCustomerGatewayRequest& request, const DescribeCustomerGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustomerGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeCustomerGatewayOutcomeCallable VpcClient::describeCustomerGatewayCallable(const DescribeCustomerGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustomerGatewayOutcome()>>(
			[this, request]()
			{
			return this->describeCustomerGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeCustomerGatewaysOutcome VpcClient::describeCustomerGateways(const DescribeCustomerGatewaysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCustomerGatewaysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCustomerGatewaysOutcome(DescribeCustomerGatewaysResult(outcome.result()));
	else
		return DescribeCustomerGatewaysOutcome(outcome.error());
}

void VpcClient::describeCustomerGatewaysAsync(const DescribeCustomerGatewaysRequest& request, const DescribeCustomerGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustomerGateways(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeCustomerGatewaysOutcomeCallable VpcClient::describeCustomerGatewaysCallable(const DescribeCustomerGatewaysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustomerGatewaysOutcome()>>(
			[this, request]()
			{
			return this->describeCustomerGateways(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeEipAddressesOutcome VpcClient::describeEipAddresses(const DescribeEipAddressesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEipAddressesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEipAddressesOutcome(DescribeEipAddressesResult(outcome.result()));
	else
		return DescribeEipAddressesOutcome(outcome.error());
}

void VpcClient::describeEipAddressesAsync(const DescribeEipAddressesRequest& request, const DescribeEipAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEipAddresses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeEipAddressesOutcomeCallable VpcClient::describeEipAddressesCallable(const DescribeEipAddressesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEipAddressesOutcome()>>(
			[this, request]()
			{
			return this->describeEipAddresses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeEipGatewayInfoOutcome VpcClient::describeEipGatewayInfo(const DescribeEipGatewayInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEipGatewayInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEipGatewayInfoOutcome(DescribeEipGatewayInfoResult(outcome.result()));
	else
		return DescribeEipGatewayInfoOutcome(outcome.error());
}

void VpcClient::describeEipGatewayInfoAsync(const DescribeEipGatewayInfoRequest& request, const DescribeEipGatewayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEipGatewayInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeEipGatewayInfoOutcomeCallable VpcClient::describeEipGatewayInfoCallable(const DescribeEipGatewayInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEipGatewayInfoOutcome()>>(
			[this, request]()
			{
			return this->describeEipGatewayInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeEipMonitorDataOutcome VpcClient::describeEipMonitorData(const DescribeEipMonitorDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEipMonitorDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEipMonitorDataOutcome(DescribeEipMonitorDataResult(outcome.result()));
	else
		return DescribeEipMonitorDataOutcome(outcome.error());
}

void VpcClient::describeEipMonitorDataAsync(const DescribeEipMonitorDataRequest& request, const DescribeEipMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEipMonitorData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeEipMonitorDataOutcomeCallable VpcClient::describeEipMonitorDataCallable(const DescribeEipMonitorDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEipMonitorDataOutcome()>>(
			[this, request]()
			{
			return this->describeEipMonitorData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeEipSegmentOutcome VpcClient::describeEipSegment(const DescribeEipSegmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEipSegmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEipSegmentOutcome(DescribeEipSegmentResult(outcome.result()));
	else
		return DescribeEipSegmentOutcome(outcome.error());
}

void VpcClient::describeEipSegmentAsync(const DescribeEipSegmentRequest& request, const DescribeEipSegmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEipSegment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeEipSegmentOutcomeCallable VpcClient::describeEipSegmentCallable(const DescribeEipSegmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEipSegmentOutcome()>>(
			[this, request]()
			{
			return this->describeEipSegment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeExpressCloudConnectionsOutcome VpcClient::describeExpressCloudConnections(const DescribeExpressCloudConnectionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExpressCloudConnectionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExpressCloudConnectionsOutcome(DescribeExpressCloudConnectionsResult(outcome.result()));
	else
		return DescribeExpressCloudConnectionsOutcome(outcome.error());
}

void VpcClient::describeExpressCloudConnectionsAsync(const DescribeExpressCloudConnectionsRequest& request, const DescribeExpressCloudConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExpressCloudConnections(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeExpressCloudConnectionsOutcomeCallable VpcClient::describeExpressCloudConnectionsCallable(const DescribeExpressCloudConnectionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExpressCloudConnectionsOutcome()>>(
			[this, request]()
			{
			return this->describeExpressCloudConnections(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeFlowLogsOutcome VpcClient::describeFlowLogs(const DescribeFlowLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowLogsOutcome(DescribeFlowLogsResult(outcome.result()));
	else
		return DescribeFlowLogsOutcome(outcome.error());
}

void VpcClient::describeFlowLogsAsync(const DescribeFlowLogsRequest& request, const DescribeFlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeFlowLogsOutcomeCallable VpcClient::describeFlowLogsCallable(const DescribeFlowLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowLogsOutcome()>>(
			[this, request]()
			{
			return this->describeFlowLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeForwardTableEntriesOutcome VpcClient::describeForwardTableEntries(const DescribeForwardTableEntriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeForwardTableEntriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeForwardTableEntriesOutcome(DescribeForwardTableEntriesResult(outcome.result()));
	else
		return DescribeForwardTableEntriesOutcome(outcome.error());
}

void VpcClient::describeForwardTableEntriesAsync(const DescribeForwardTableEntriesRequest& request, const DescribeForwardTableEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeForwardTableEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeForwardTableEntriesOutcomeCallable VpcClient::describeForwardTableEntriesCallable(const DescribeForwardTableEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeForwardTableEntriesOutcome()>>(
			[this, request]()
			{
			return this->describeForwardTableEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeGlobalAccelerationInstancesOutcome VpcClient::describeGlobalAccelerationInstances(const DescribeGlobalAccelerationInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGlobalAccelerationInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGlobalAccelerationInstancesOutcome(DescribeGlobalAccelerationInstancesResult(outcome.result()));
	else
		return DescribeGlobalAccelerationInstancesOutcome(outcome.error());
}

void VpcClient::describeGlobalAccelerationInstancesAsync(const DescribeGlobalAccelerationInstancesRequest& request, const DescribeGlobalAccelerationInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGlobalAccelerationInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeGlobalAccelerationInstancesOutcomeCallable VpcClient::describeGlobalAccelerationInstancesCallable(const DescribeGlobalAccelerationInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGlobalAccelerationInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeGlobalAccelerationInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeGrantRulesToCenOutcome VpcClient::describeGrantRulesToCen(const DescribeGrantRulesToCenRequest &request) const
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

void VpcClient::describeGrantRulesToCenAsync(const DescribeGrantRulesToCenRequest& request, const DescribeGrantRulesToCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGrantRulesToCen(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeGrantRulesToCenOutcomeCallable VpcClient::describeGrantRulesToCenCallable(const DescribeGrantRulesToCenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGrantRulesToCenOutcome()>>(
			[this, request]()
			{
			return this->describeGrantRulesToCen(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeHaVipsOutcome VpcClient::describeHaVips(const DescribeHaVipsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHaVipsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHaVipsOutcome(DescribeHaVipsResult(outcome.result()));
	else
		return DescribeHaVipsOutcome(outcome.error());
}

void VpcClient::describeHaVipsAsync(const DescribeHaVipsRequest& request, const DescribeHaVipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHaVips(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeHaVipsOutcomeCallable VpcClient::describeHaVipsCallable(const DescribeHaVipsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHaVipsOutcome()>>(
			[this, request]()
			{
			return this->describeHaVips(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeHighDefinitionMonitorLogAttributeOutcome VpcClient::describeHighDefinitionMonitorLogAttribute(const DescribeHighDefinitionMonitorLogAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHighDefinitionMonitorLogAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHighDefinitionMonitorLogAttributeOutcome(DescribeHighDefinitionMonitorLogAttributeResult(outcome.result()));
	else
		return DescribeHighDefinitionMonitorLogAttributeOutcome(outcome.error());
}

void VpcClient::describeHighDefinitionMonitorLogAttributeAsync(const DescribeHighDefinitionMonitorLogAttributeRequest& request, const DescribeHighDefinitionMonitorLogAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHighDefinitionMonitorLogAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeHighDefinitionMonitorLogAttributeOutcomeCallable VpcClient::describeHighDefinitionMonitorLogAttributeCallable(const DescribeHighDefinitionMonitorLogAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHighDefinitionMonitorLogAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeHighDefinitionMonitorLogAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeIPv6TranslatorAclListAttributesOutcome VpcClient::describeIPv6TranslatorAclListAttributes(const DescribeIPv6TranslatorAclListAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIPv6TranslatorAclListAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIPv6TranslatorAclListAttributesOutcome(DescribeIPv6TranslatorAclListAttributesResult(outcome.result()));
	else
		return DescribeIPv6TranslatorAclListAttributesOutcome(outcome.error());
}

void VpcClient::describeIPv6TranslatorAclListAttributesAsync(const DescribeIPv6TranslatorAclListAttributesRequest& request, const DescribeIPv6TranslatorAclListAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIPv6TranslatorAclListAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeIPv6TranslatorAclListAttributesOutcomeCallable VpcClient::describeIPv6TranslatorAclListAttributesCallable(const DescribeIPv6TranslatorAclListAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIPv6TranslatorAclListAttributesOutcome()>>(
			[this, request]()
			{
			return this->describeIPv6TranslatorAclListAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeIPv6TranslatorAclListsOutcome VpcClient::describeIPv6TranslatorAclLists(const DescribeIPv6TranslatorAclListsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIPv6TranslatorAclListsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIPv6TranslatorAclListsOutcome(DescribeIPv6TranslatorAclListsResult(outcome.result()));
	else
		return DescribeIPv6TranslatorAclListsOutcome(outcome.error());
}

void VpcClient::describeIPv6TranslatorAclListsAsync(const DescribeIPv6TranslatorAclListsRequest& request, const DescribeIPv6TranslatorAclListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIPv6TranslatorAclLists(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeIPv6TranslatorAclListsOutcomeCallable VpcClient::describeIPv6TranslatorAclListsCallable(const DescribeIPv6TranslatorAclListsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIPv6TranslatorAclListsOutcome()>>(
			[this, request]()
			{
			return this->describeIPv6TranslatorAclLists(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeIPv6TranslatorEntriesOutcome VpcClient::describeIPv6TranslatorEntries(const DescribeIPv6TranslatorEntriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIPv6TranslatorEntriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIPv6TranslatorEntriesOutcome(DescribeIPv6TranslatorEntriesResult(outcome.result()));
	else
		return DescribeIPv6TranslatorEntriesOutcome(outcome.error());
}

void VpcClient::describeIPv6TranslatorEntriesAsync(const DescribeIPv6TranslatorEntriesRequest& request, const DescribeIPv6TranslatorEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIPv6TranslatorEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeIPv6TranslatorEntriesOutcomeCallable VpcClient::describeIPv6TranslatorEntriesCallable(const DescribeIPv6TranslatorEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIPv6TranslatorEntriesOutcome()>>(
			[this, request]()
			{
			return this->describeIPv6TranslatorEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeIPv6TranslatorsOutcome VpcClient::describeIPv6Translators(const DescribeIPv6TranslatorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIPv6TranslatorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIPv6TranslatorsOutcome(DescribeIPv6TranslatorsResult(outcome.result()));
	else
		return DescribeIPv6TranslatorsOutcome(outcome.error());
}

void VpcClient::describeIPv6TranslatorsAsync(const DescribeIPv6TranslatorsRequest& request, const DescribeIPv6TranslatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIPv6Translators(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeIPv6TranslatorsOutcomeCallable VpcClient::describeIPv6TranslatorsCallable(const DescribeIPv6TranslatorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIPv6TranslatorsOutcome()>>(
			[this, request]()
			{
			return this->describeIPv6Translators(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeIpv6AddressesOutcome VpcClient::describeIpv6Addresses(const DescribeIpv6AddressesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIpv6AddressesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIpv6AddressesOutcome(DescribeIpv6AddressesResult(outcome.result()));
	else
		return DescribeIpv6AddressesOutcome(outcome.error());
}

void VpcClient::describeIpv6AddressesAsync(const DescribeIpv6AddressesRequest& request, const DescribeIpv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIpv6Addresses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeIpv6AddressesOutcomeCallable VpcClient::describeIpv6AddressesCallable(const DescribeIpv6AddressesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIpv6AddressesOutcome()>>(
			[this, request]()
			{
			return this->describeIpv6Addresses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeIpv6EgressOnlyRulesOutcome VpcClient::describeIpv6EgressOnlyRules(const DescribeIpv6EgressOnlyRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIpv6EgressOnlyRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIpv6EgressOnlyRulesOutcome(DescribeIpv6EgressOnlyRulesResult(outcome.result()));
	else
		return DescribeIpv6EgressOnlyRulesOutcome(outcome.error());
}

void VpcClient::describeIpv6EgressOnlyRulesAsync(const DescribeIpv6EgressOnlyRulesRequest& request, const DescribeIpv6EgressOnlyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIpv6EgressOnlyRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeIpv6EgressOnlyRulesOutcomeCallable VpcClient::describeIpv6EgressOnlyRulesCallable(const DescribeIpv6EgressOnlyRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIpv6EgressOnlyRulesOutcome()>>(
			[this, request]()
			{
			return this->describeIpv6EgressOnlyRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeIpv6GatewayAttributeOutcome VpcClient::describeIpv6GatewayAttribute(const DescribeIpv6GatewayAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIpv6GatewayAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIpv6GatewayAttributeOutcome(DescribeIpv6GatewayAttributeResult(outcome.result()));
	else
		return DescribeIpv6GatewayAttributeOutcome(outcome.error());
}

void VpcClient::describeIpv6GatewayAttributeAsync(const DescribeIpv6GatewayAttributeRequest& request, const DescribeIpv6GatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIpv6GatewayAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeIpv6GatewayAttributeOutcomeCallable VpcClient::describeIpv6GatewayAttributeCallable(const DescribeIpv6GatewayAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIpv6GatewayAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeIpv6GatewayAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeIpv6GatewaysOutcome VpcClient::describeIpv6Gateways(const DescribeIpv6GatewaysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIpv6GatewaysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIpv6GatewaysOutcome(DescribeIpv6GatewaysResult(outcome.result()));
	else
		return DescribeIpv6GatewaysOutcome(outcome.error());
}

void VpcClient::describeIpv6GatewaysAsync(const DescribeIpv6GatewaysRequest& request, const DescribeIpv6GatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIpv6Gateways(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeIpv6GatewaysOutcomeCallable VpcClient::describeIpv6GatewaysCallable(const DescribeIpv6GatewaysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIpv6GatewaysOutcome()>>(
			[this, request]()
			{
			return this->describeIpv6Gateways(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeNatGatewaysOutcome VpcClient::describeNatGateways(const DescribeNatGatewaysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNatGatewaysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNatGatewaysOutcome(DescribeNatGatewaysResult(outcome.result()));
	else
		return DescribeNatGatewaysOutcome(outcome.error());
}

void VpcClient::describeNatGatewaysAsync(const DescribeNatGatewaysRequest& request, const DescribeNatGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNatGateways(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeNatGatewaysOutcomeCallable VpcClient::describeNatGatewaysCallable(const DescribeNatGatewaysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNatGatewaysOutcome()>>(
			[this, request]()
			{
			return this->describeNatGateways(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeNetworkAclAttributesOutcome VpcClient::describeNetworkAclAttributes(const DescribeNetworkAclAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNetworkAclAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNetworkAclAttributesOutcome(DescribeNetworkAclAttributesResult(outcome.result()));
	else
		return DescribeNetworkAclAttributesOutcome(outcome.error());
}

void VpcClient::describeNetworkAclAttributesAsync(const DescribeNetworkAclAttributesRequest& request, const DescribeNetworkAclAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNetworkAclAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeNetworkAclAttributesOutcomeCallable VpcClient::describeNetworkAclAttributesCallable(const DescribeNetworkAclAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNetworkAclAttributesOutcome()>>(
			[this, request]()
			{
			return this->describeNetworkAclAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeNetworkAclsOutcome VpcClient::describeNetworkAcls(const DescribeNetworkAclsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNetworkAclsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNetworkAclsOutcome(DescribeNetworkAclsResult(outcome.result()));
	else
		return DescribeNetworkAclsOutcome(outcome.error());
}

void VpcClient::describeNetworkAclsAsync(const DescribeNetworkAclsRequest& request, const DescribeNetworkAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNetworkAcls(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeNetworkAclsOutcomeCallable VpcClient::describeNetworkAclsCallable(const DescribeNetworkAclsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNetworkAclsOutcome()>>(
			[this, request]()
			{
			return this->describeNetworkAcls(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeNewProjectEipMonitorDataOutcome VpcClient::describeNewProjectEipMonitorData(const DescribeNewProjectEipMonitorDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNewProjectEipMonitorDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNewProjectEipMonitorDataOutcome(DescribeNewProjectEipMonitorDataResult(outcome.result()));
	else
		return DescribeNewProjectEipMonitorDataOutcome(outcome.error());
}

void VpcClient::describeNewProjectEipMonitorDataAsync(const DescribeNewProjectEipMonitorDataRequest& request, const DescribeNewProjectEipMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNewProjectEipMonitorData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeNewProjectEipMonitorDataOutcomeCallable VpcClient::describeNewProjectEipMonitorDataCallable(const DescribeNewProjectEipMonitorDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNewProjectEipMonitorDataOutcome()>>(
			[this, request]()
			{
			return this->describeNewProjectEipMonitorData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribePhysicalConnectionLOAOutcome VpcClient::describePhysicalConnectionLOA(const DescribePhysicalConnectionLOARequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePhysicalConnectionLOAOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePhysicalConnectionLOAOutcome(DescribePhysicalConnectionLOAResult(outcome.result()));
	else
		return DescribePhysicalConnectionLOAOutcome(outcome.error());
}

void VpcClient::describePhysicalConnectionLOAAsync(const DescribePhysicalConnectionLOARequest& request, const DescribePhysicalConnectionLOAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePhysicalConnectionLOA(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribePhysicalConnectionLOAOutcomeCallable VpcClient::describePhysicalConnectionLOACallable(const DescribePhysicalConnectionLOARequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePhysicalConnectionLOAOutcome()>>(
			[this, request]()
			{
			return this->describePhysicalConnectionLOA(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribePhysicalConnectionsOutcome VpcClient::describePhysicalConnections(const DescribePhysicalConnectionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePhysicalConnectionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePhysicalConnectionsOutcome(DescribePhysicalConnectionsResult(outcome.result()));
	else
		return DescribePhysicalConnectionsOutcome(outcome.error());
}

void VpcClient::describePhysicalConnectionsAsync(const DescribePhysicalConnectionsRequest& request, const DescribePhysicalConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePhysicalConnections(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribePhysicalConnectionsOutcomeCallable VpcClient::describePhysicalConnectionsCallable(const DescribePhysicalConnectionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePhysicalConnectionsOutcome()>>(
			[this, request]()
			{
			return this->describePhysicalConnections(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeRegionsOutcome VpcClient::describeRegions(const DescribeRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRegionsOutcome(DescribeRegionsResult(outcome.result()));
	else
		return DescribeRegionsOutcome(outcome.error());
}

void VpcClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeRegionsOutcomeCallable VpcClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeRouteEntryListOutcome VpcClient::describeRouteEntryList(const DescribeRouteEntryListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRouteEntryListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRouteEntryListOutcome(DescribeRouteEntryListResult(outcome.result()));
	else
		return DescribeRouteEntryListOutcome(outcome.error());
}

void VpcClient::describeRouteEntryListAsync(const DescribeRouteEntryListRequest& request, const DescribeRouteEntryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRouteEntryList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeRouteEntryListOutcomeCallable VpcClient::describeRouteEntryListCallable(const DescribeRouteEntryListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRouteEntryListOutcome()>>(
			[this, request]()
			{
			return this->describeRouteEntryList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeRouteTableListOutcome VpcClient::describeRouteTableList(const DescribeRouteTableListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRouteTableListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRouteTableListOutcome(DescribeRouteTableListResult(outcome.result()));
	else
		return DescribeRouteTableListOutcome(outcome.error());
}

void VpcClient::describeRouteTableListAsync(const DescribeRouteTableListRequest& request, const DescribeRouteTableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRouteTableList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeRouteTableListOutcomeCallable VpcClient::describeRouteTableListCallable(const DescribeRouteTableListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRouteTableListOutcome()>>(
			[this, request]()
			{
			return this->describeRouteTableList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeRouteTablesOutcome VpcClient::describeRouteTables(const DescribeRouteTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRouteTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRouteTablesOutcome(DescribeRouteTablesResult(outcome.result()));
	else
		return DescribeRouteTablesOutcome(outcome.error());
}

void VpcClient::describeRouteTablesAsync(const DescribeRouteTablesRequest& request, const DescribeRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRouteTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeRouteTablesOutcomeCallable VpcClient::describeRouteTablesCallable(const DescribeRouteTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRouteTablesOutcome()>>(
			[this, request]()
			{
			return this->describeRouteTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeRouterInterfaceAttributeOutcome VpcClient::describeRouterInterfaceAttribute(const DescribeRouterInterfaceAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRouterInterfaceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRouterInterfaceAttributeOutcome(DescribeRouterInterfaceAttributeResult(outcome.result()));
	else
		return DescribeRouterInterfaceAttributeOutcome(outcome.error());
}

void VpcClient::describeRouterInterfaceAttributeAsync(const DescribeRouterInterfaceAttributeRequest& request, const DescribeRouterInterfaceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRouterInterfaceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeRouterInterfaceAttributeOutcomeCallable VpcClient::describeRouterInterfaceAttributeCallable(const DescribeRouterInterfaceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRouterInterfaceAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeRouterInterfaceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeRouterInterfacesOutcome VpcClient::describeRouterInterfaces(const DescribeRouterInterfacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRouterInterfacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRouterInterfacesOutcome(DescribeRouterInterfacesResult(outcome.result()));
	else
		return DescribeRouterInterfacesOutcome(outcome.error());
}

void VpcClient::describeRouterInterfacesAsync(const DescribeRouterInterfacesRequest& request, const DescribeRouterInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRouterInterfaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeRouterInterfacesOutcomeCallable VpcClient::describeRouterInterfacesCallable(const DescribeRouterInterfacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRouterInterfacesOutcome()>>(
			[this, request]()
			{
			return this->describeRouterInterfaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeServerRelatedGlobalAccelerationInstancesOutcome VpcClient::describeServerRelatedGlobalAccelerationInstances(const DescribeServerRelatedGlobalAccelerationInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeServerRelatedGlobalAccelerationInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeServerRelatedGlobalAccelerationInstancesOutcome(DescribeServerRelatedGlobalAccelerationInstancesResult(outcome.result()));
	else
		return DescribeServerRelatedGlobalAccelerationInstancesOutcome(outcome.error());
}

void VpcClient::describeServerRelatedGlobalAccelerationInstancesAsync(const DescribeServerRelatedGlobalAccelerationInstancesRequest& request, const DescribeServerRelatedGlobalAccelerationInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeServerRelatedGlobalAccelerationInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeServerRelatedGlobalAccelerationInstancesOutcomeCallable VpcClient::describeServerRelatedGlobalAccelerationInstancesCallable(const DescribeServerRelatedGlobalAccelerationInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeServerRelatedGlobalAccelerationInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeServerRelatedGlobalAccelerationInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeSnatTableEntriesOutcome VpcClient::describeSnatTableEntries(const DescribeSnatTableEntriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSnatTableEntriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSnatTableEntriesOutcome(DescribeSnatTableEntriesResult(outcome.result()));
	else
		return DescribeSnatTableEntriesOutcome(outcome.error());
}

void VpcClient::describeSnatTableEntriesAsync(const DescribeSnatTableEntriesRequest& request, const DescribeSnatTableEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSnatTableEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeSnatTableEntriesOutcomeCallable VpcClient::describeSnatTableEntriesCallable(const DescribeSnatTableEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSnatTableEntriesOutcome()>>(
			[this, request]()
			{
			return this->describeSnatTableEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeSslVpnClientCertOutcome VpcClient::describeSslVpnClientCert(const DescribeSslVpnClientCertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSslVpnClientCertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSslVpnClientCertOutcome(DescribeSslVpnClientCertResult(outcome.result()));
	else
		return DescribeSslVpnClientCertOutcome(outcome.error());
}

void VpcClient::describeSslVpnClientCertAsync(const DescribeSslVpnClientCertRequest& request, const DescribeSslVpnClientCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSslVpnClientCert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeSslVpnClientCertOutcomeCallable VpcClient::describeSslVpnClientCertCallable(const DescribeSslVpnClientCertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSslVpnClientCertOutcome()>>(
			[this, request]()
			{
			return this->describeSslVpnClientCert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeSslVpnClientCertsOutcome VpcClient::describeSslVpnClientCerts(const DescribeSslVpnClientCertsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSslVpnClientCertsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSslVpnClientCertsOutcome(DescribeSslVpnClientCertsResult(outcome.result()));
	else
		return DescribeSslVpnClientCertsOutcome(outcome.error());
}

void VpcClient::describeSslVpnClientCertsAsync(const DescribeSslVpnClientCertsRequest& request, const DescribeSslVpnClientCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSslVpnClientCerts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeSslVpnClientCertsOutcomeCallable VpcClient::describeSslVpnClientCertsCallable(const DescribeSslVpnClientCertsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSslVpnClientCertsOutcome()>>(
			[this, request]()
			{
			return this->describeSslVpnClientCerts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeSslVpnServersOutcome VpcClient::describeSslVpnServers(const DescribeSslVpnServersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSslVpnServersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSslVpnServersOutcome(DescribeSslVpnServersResult(outcome.result()));
	else
		return DescribeSslVpnServersOutcome(outcome.error());
}

void VpcClient::describeSslVpnServersAsync(const DescribeSslVpnServersRequest& request, const DescribeSslVpnServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSslVpnServers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeSslVpnServersOutcomeCallable VpcClient::describeSslVpnServersCallable(const DescribeSslVpnServersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSslVpnServersOutcome()>>(
			[this, request]()
			{
			return this->describeSslVpnServers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeVRoutersOutcome VpcClient::describeVRouters(const DescribeVRoutersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVRoutersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVRoutersOutcome(DescribeVRoutersResult(outcome.result()));
	else
		return DescribeVRoutersOutcome(outcome.error());
}

void VpcClient::describeVRoutersAsync(const DescribeVRoutersRequest& request, const DescribeVRoutersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVRouters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeVRoutersOutcomeCallable VpcClient::describeVRoutersCallable(const DescribeVRoutersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVRoutersOutcome()>>(
			[this, request]()
			{
			return this->describeVRouters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeVSwitchAttributesOutcome VpcClient::describeVSwitchAttributes(const DescribeVSwitchAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVSwitchAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVSwitchAttributesOutcome(DescribeVSwitchAttributesResult(outcome.result()));
	else
		return DescribeVSwitchAttributesOutcome(outcome.error());
}

void VpcClient::describeVSwitchAttributesAsync(const DescribeVSwitchAttributesRequest& request, const DescribeVSwitchAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVSwitchAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeVSwitchAttributesOutcomeCallable VpcClient::describeVSwitchAttributesCallable(const DescribeVSwitchAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVSwitchAttributesOutcome()>>(
			[this, request]()
			{
			return this->describeVSwitchAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeVSwitchesOutcome VpcClient::describeVSwitches(const DescribeVSwitchesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVSwitchesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVSwitchesOutcome(DescribeVSwitchesResult(outcome.result()));
	else
		return DescribeVSwitchesOutcome(outcome.error());
}

void VpcClient::describeVSwitchesAsync(const DescribeVSwitchesRequest& request, const DescribeVSwitchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVSwitches(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeVSwitchesOutcomeCallable VpcClient::describeVSwitchesCallable(const DescribeVSwitchesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVSwitchesOutcome()>>(
			[this, request]()
			{
			return this->describeVSwitches(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeVirtualBorderRoutersOutcome VpcClient::describeVirtualBorderRouters(const DescribeVirtualBorderRoutersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVirtualBorderRoutersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVirtualBorderRoutersOutcome(DescribeVirtualBorderRoutersResult(outcome.result()));
	else
		return DescribeVirtualBorderRoutersOutcome(outcome.error());
}

void VpcClient::describeVirtualBorderRoutersAsync(const DescribeVirtualBorderRoutersRequest& request, const DescribeVirtualBorderRoutersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVirtualBorderRouters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeVirtualBorderRoutersOutcomeCallable VpcClient::describeVirtualBorderRoutersCallable(const DescribeVirtualBorderRoutersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVirtualBorderRoutersOutcome()>>(
			[this, request]()
			{
			return this->describeVirtualBorderRouters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeVirtualBorderRoutersForPhysicalConnectionOutcome VpcClient::describeVirtualBorderRoutersForPhysicalConnection(const DescribeVirtualBorderRoutersForPhysicalConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVirtualBorderRoutersForPhysicalConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVirtualBorderRoutersForPhysicalConnectionOutcome(DescribeVirtualBorderRoutersForPhysicalConnectionResult(outcome.result()));
	else
		return DescribeVirtualBorderRoutersForPhysicalConnectionOutcome(outcome.error());
}

void VpcClient::describeVirtualBorderRoutersForPhysicalConnectionAsync(const DescribeVirtualBorderRoutersForPhysicalConnectionRequest& request, const DescribeVirtualBorderRoutersForPhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVirtualBorderRoutersForPhysicalConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeVirtualBorderRoutersForPhysicalConnectionOutcomeCallable VpcClient::describeVirtualBorderRoutersForPhysicalConnectionCallable(const DescribeVirtualBorderRoutersForPhysicalConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVirtualBorderRoutersForPhysicalConnectionOutcome()>>(
			[this, request]()
			{
			return this->describeVirtualBorderRoutersForPhysicalConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeVpcAttributeOutcome VpcClient::describeVpcAttribute(const DescribeVpcAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVpcAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVpcAttributeOutcome(DescribeVpcAttributeResult(outcome.result()));
	else
		return DescribeVpcAttributeOutcome(outcome.error());
}

void VpcClient::describeVpcAttributeAsync(const DescribeVpcAttributeRequest& request, const DescribeVpcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVpcAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeVpcAttributeOutcomeCallable VpcClient::describeVpcAttributeCallable(const DescribeVpcAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVpcAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeVpcAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeVpcsOutcome VpcClient::describeVpcs(const DescribeVpcsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVpcsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVpcsOutcome(DescribeVpcsResult(outcome.result()));
	else
		return DescribeVpcsOutcome(outcome.error());
}

void VpcClient::describeVpcsAsync(const DescribeVpcsRequest& request, const DescribeVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVpcs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeVpcsOutcomeCallable VpcClient::describeVpcsCallable(const DescribeVpcsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVpcsOutcome()>>(
			[this, request]()
			{
			return this->describeVpcs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeVpnConnectionOutcome VpcClient::describeVpnConnection(const DescribeVpnConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVpnConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVpnConnectionOutcome(DescribeVpnConnectionResult(outcome.result()));
	else
		return DescribeVpnConnectionOutcome(outcome.error());
}

void VpcClient::describeVpnConnectionAsync(const DescribeVpnConnectionRequest& request, const DescribeVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVpnConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeVpnConnectionOutcomeCallable VpcClient::describeVpnConnectionCallable(const DescribeVpnConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVpnConnectionOutcome()>>(
			[this, request]()
			{
			return this->describeVpnConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeVpnConnectionsOutcome VpcClient::describeVpnConnections(const DescribeVpnConnectionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVpnConnectionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVpnConnectionsOutcome(DescribeVpnConnectionsResult(outcome.result()));
	else
		return DescribeVpnConnectionsOutcome(outcome.error());
}

void VpcClient::describeVpnConnectionsAsync(const DescribeVpnConnectionsRequest& request, const DescribeVpnConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVpnConnections(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeVpnConnectionsOutcomeCallable VpcClient::describeVpnConnectionsCallable(const DescribeVpnConnectionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVpnConnectionsOutcome()>>(
			[this, request]()
			{
			return this->describeVpnConnections(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeVpnGatewayOutcome VpcClient::describeVpnGateway(const DescribeVpnGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVpnGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVpnGatewayOutcome(DescribeVpnGatewayResult(outcome.result()));
	else
		return DescribeVpnGatewayOutcome(outcome.error());
}

void VpcClient::describeVpnGatewayAsync(const DescribeVpnGatewayRequest& request, const DescribeVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVpnGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeVpnGatewayOutcomeCallable VpcClient::describeVpnGatewayCallable(const DescribeVpnGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVpnGatewayOutcome()>>(
			[this, request]()
			{
			return this->describeVpnGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeVpnGatewaysOutcome VpcClient::describeVpnGateways(const DescribeVpnGatewaysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVpnGatewaysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVpnGatewaysOutcome(DescribeVpnGatewaysResult(outcome.result()));
	else
		return DescribeVpnGatewaysOutcome(outcome.error());
}

void VpcClient::describeVpnGatewaysAsync(const DescribeVpnGatewaysRequest& request, const DescribeVpnGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVpnGateways(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeVpnGatewaysOutcomeCallable VpcClient::describeVpnGatewaysCallable(const DescribeVpnGatewaysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVpnGatewaysOutcome()>>(
			[this, request]()
			{
			return this->describeVpnGateways(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeVpnPbrRouteEntriesOutcome VpcClient::describeVpnPbrRouteEntries(const DescribeVpnPbrRouteEntriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVpnPbrRouteEntriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVpnPbrRouteEntriesOutcome(DescribeVpnPbrRouteEntriesResult(outcome.result()));
	else
		return DescribeVpnPbrRouteEntriesOutcome(outcome.error());
}

void VpcClient::describeVpnPbrRouteEntriesAsync(const DescribeVpnPbrRouteEntriesRequest& request, const DescribeVpnPbrRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVpnPbrRouteEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeVpnPbrRouteEntriesOutcomeCallable VpcClient::describeVpnPbrRouteEntriesCallable(const DescribeVpnPbrRouteEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVpnPbrRouteEntriesOutcome()>>(
			[this, request]()
			{
			return this->describeVpnPbrRouteEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeVpnRouteEntriesOutcome VpcClient::describeVpnRouteEntries(const DescribeVpnRouteEntriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVpnRouteEntriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVpnRouteEntriesOutcome(DescribeVpnRouteEntriesResult(outcome.result()));
	else
		return DescribeVpnRouteEntriesOutcome(outcome.error());
}

void VpcClient::describeVpnRouteEntriesAsync(const DescribeVpnRouteEntriesRequest& request, const DescribeVpnRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVpnRouteEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeVpnRouteEntriesOutcomeCallable VpcClient::describeVpnRouteEntriesCallable(const DescribeVpnRouteEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVpnRouteEntriesOutcome()>>(
			[this, request]()
			{
			return this->describeVpnRouteEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeVpnSslServerLogsOutcome VpcClient::describeVpnSslServerLogs(const DescribeVpnSslServerLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVpnSslServerLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVpnSslServerLogsOutcome(DescribeVpnSslServerLogsResult(outcome.result()));
	else
		return DescribeVpnSslServerLogsOutcome(outcome.error());
}

void VpcClient::describeVpnSslServerLogsAsync(const DescribeVpnSslServerLogsRequest& request, const DescribeVpnSslServerLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVpnSslServerLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeVpnSslServerLogsOutcomeCallable VpcClient::describeVpnSslServerLogsCallable(const DescribeVpnSslServerLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVpnSslServerLogsOutcome()>>(
			[this, request]()
			{
			return this->describeVpnSslServerLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeZonesOutcome VpcClient::describeZones(const DescribeZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeZonesOutcome(DescribeZonesResult(outcome.result()));
	else
		return DescribeZonesOutcome(outcome.error());
}

void VpcClient::describeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeZonesOutcomeCallable VpcClient::describeZonesCallable(const DescribeZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeZonesOutcome()>>(
			[this, request]()
			{
			return this->describeZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DisableVpcClassicLinkOutcome VpcClient::disableVpcClassicLink(const DisableVpcClassicLinkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableVpcClassicLinkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableVpcClassicLinkOutcome(DisableVpcClassicLinkResult(outcome.result()));
	else
		return DisableVpcClassicLinkOutcome(outcome.error());
}

void VpcClient::disableVpcClassicLinkAsync(const DisableVpcClassicLinkRequest& request, const DisableVpcClassicLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableVpcClassicLink(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DisableVpcClassicLinkOutcomeCallable VpcClient::disableVpcClassicLinkCallable(const DisableVpcClassicLinkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableVpcClassicLinkOutcome()>>(
			[this, request]()
			{
			return this->disableVpcClassicLink(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DownloadVpnConnectionConfigOutcome VpcClient::downloadVpnConnectionConfig(const DownloadVpnConnectionConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DownloadVpnConnectionConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DownloadVpnConnectionConfigOutcome(DownloadVpnConnectionConfigResult(outcome.result()));
	else
		return DownloadVpnConnectionConfigOutcome(outcome.error());
}

void VpcClient::downloadVpnConnectionConfigAsync(const DownloadVpnConnectionConfigRequest& request, const DownloadVpnConnectionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadVpnConnectionConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DownloadVpnConnectionConfigOutcomeCallable VpcClient::downloadVpnConnectionConfigCallable(const DownloadVpnConnectionConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadVpnConnectionConfigOutcome()>>(
			[this, request]()
			{
			return this->downloadVpnConnectionConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::EnablePhysicalConnectionOutcome VpcClient::enablePhysicalConnection(const EnablePhysicalConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnablePhysicalConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnablePhysicalConnectionOutcome(EnablePhysicalConnectionResult(outcome.result()));
	else
		return EnablePhysicalConnectionOutcome(outcome.error());
}

void VpcClient::enablePhysicalConnectionAsync(const EnablePhysicalConnectionRequest& request, const EnablePhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enablePhysicalConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::EnablePhysicalConnectionOutcomeCallable VpcClient::enablePhysicalConnectionCallable(const EnablePhysicalConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnablePhysicalConnectionOutcome()>>(
			[this, request]()
			{
			return this->enablePhysicalConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::EnableVpcClassicLinkOutcome VpcClient::enableVpcClassicLink(const EnableVpcClassicLinkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableVpcClassicLinkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableVpcClassicLinkOutcome(EnableVpcClassicLinkResult(outcome.result()));
	else
		return EnableVpcClassicLinkOutcome(outcome.error());
}

void VpcClient::enableVpcClassicLinkAsync(const EnableVpcClassicLinkRequest& request, const EnableVpcClassicLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableVpcClassicLink(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::EnableVpcClassicLinkOutcomeCallable VpcClient::enableVpcClassicLinkCallable(const EnableVpcClassicLinkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableVpcClassicLinkOutcome()>>(
			[this, request]()
			{
			return this->enableVpcClassicLink(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::GrantInstanceToCenOutcome VpcClient::grantInstanceToCen(const GrantInstanceToCenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantInstanceToCenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantInstanceToCenOutcome(GrantInstanceToCenResult(outcome.result()));
	else
		return GrantInstanceToCenOutcome(outcome.error());
}

void VpcClient::grantInstanceToCenAsync(const GrantInstanceToCenRequest& request, const GrantInstanceToCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantInstanceToCen(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::GrantInstanceToCenOutcomeCallable VpcClient::grantInstanceToCenCallable(const GrantInstanceToCenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantInstanceToCenOutcome()>>(
			[this, request]()
			{
			return this->grantInstanceToCen(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ListTagResourcesOutcome VpcClient::listTagResources(const ListTagResourcesRequest &request) const
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

void VpcClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ListTagResourcesOutcomeCallable VpcClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyBandwidthPackageAttributeOutcome VpcClient::modifyBandwidthPackageAttribute(const ModifyBandwidthPackageAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBandwidthPackageAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBandwidthPackageAttributeOutcome(ModifyBandwidthPackageAttributeResult(outcome.result()));
	else
		return ModifyBandwidthPackageAttributeOutcome(outcome.error());
}

void VpcClient::modifyBandwidthPackageAttributeAsync(const ModifyBandwidthPackageAttributeRequest& request, const ModifyBandwidthPackageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBandwidthPackageAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyBandwidthPackageAttributeOutcomeCallable VpcClient::modifyBandwidthPackageAttributeCallable(const ModifyBandwidthPackageAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBandwidthPackageAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyBandwidthPackageAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyBandwidthPackageSpecOutcome VpcClient::modifyBandwidthPackageSpec(const ModifyBandwidthPackageSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBandwidthPackageSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBandwidthPackageSpecOutcome(ModifyBandwidthPackageSpecResult(outcome.result()));
	else
		return ModifyBandwidthPackageSpecOutcome(outcome.error());
}

void VpcClient::modifyBandwidthPackageSpecAsync(const ModifyBandwidthPackageSpecRequest& request, const ModifyBandwidthPackageSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBandwidthPackageSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyBandwidthPackageSpecOutcomeCallable VpcClient::modifyBandwidthPackageSpecCallable(const ModifyBandwidthPackageSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBandwidthPackageSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyBandwidthPackageSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyBgpGroupAttributeOutcome VpcClient::modifyBgpGroupAttribute(const ModifyBgpGroupAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBgpGroupAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBgpGroupAttributeOutcome(ModifyBgpGroupAttributeResult(outcome.result()));
	else
		return ModifyBgpGroupAttributeOutcome(outcome.error());
}

void VpcClient::modifyBgpGroupAttributeAsync(const ModifyBgpGroupAttributeRequest& request, const ModifyBgpGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBgpGroupAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyBgpGroupAttributeOutcomeCallable VpcClient::modifyBgpGroupAttributeCallable(const ModifyBgpGroupAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBgpGroupAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyBgpGroupAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyBgpPeerAttributeOutcome VpcClient::modifyBgpPeerAttribute(const ModifyBgpPeerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBgpPeerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBgpPeerAttributeOutcome(ModifyBgpPeerAttributeResult(outcome.result()));
	else
		return ModifyBgpPeerAttributeOutcome(outcome.error());
}

void VpcClient::modifyBgpPeerAttributeAsync(const ModifyBgpPeerAttributeRequest& request, const ModifyBgpPeerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBgpPeerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyBgpPeerAttributeOutcomeCallable VpcClient::modifyBgpPeerAttributeCallable(const ModifyBgpPeerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBgpPeerAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyBgpPeerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyCommonBandwidthPackageAttributeOutcome VpcClient::modifyCommonBandwidthPackageAttribute(const ModifyCommonBandwidthPackageAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCommonBandwidthPackageAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCommonBandwidthPackageAttributeOutcome(ModifyCommonBandwidthPackageAttributeResult(outcome.result()));
	else
		return ModifyCommonBandwidthPackageAttributeOutcome(outcome.error());
}

void VpcClient::modifyCommonBandwidthPackageAttributeAsync(const ModifyCommonBandwidthPackageAttributeRequest& request, const ModifyCommonBandwidthPackageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCommonBandwidthPackageAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyCommonBandwidthPackageAttributeOutcomeCallable VpcClient::modifyCommonBandwidthPackageAttributeCallable(const ModifyCommonBandwidthPackageAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCommonBandwidthPackageAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyCommonBandwidthPackageAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyCommonBandwidthPackageIpBandwidthOutcome VpcClient::modifyCommonBandwidthPackageIpBandwidth(const ModifyCommonBandwidthPackageIpBandwidthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCommonBandwidthPackageIpBandwidthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCommonBandwidthPackageIpBandwidthOutcome(ModifyCommonBandwidthPackageIpBandwidthResult(outcome.result()));
	else
		return ModifyCommonBandwidthPackageIpBandwidthOutcome(outcome.error());
}

void VpcClient::modifyCommonBandwidthPackageIpBandwidthAsync(const ModifyCommonBandwidthPackageIpBandwidthRequest& request, const ModifyCommonBandwidthPackageIpBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCommonBandwidthPackageIpBandwidth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyCommonBandwidthPackageIpBandwidthOutcomeCallable VpcClient::modifyCommonBandwidthPackageIpBandwidthCallable(const ModifyCommonBandwidthPackageIpBandwidthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCommonBandwidthPackageIpBandwidthOutcome()>>(
			[this, request]()
			{
			return this->modifyCommonBandwidthPackageIpBandwidth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyCommonBandwidthPackagePayTypeOutcome VpcClient::modifyCommonBandwidthPackagePayType(const ModifyCommonBandwidthPackagePayTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCommonBandwidthPackagePayTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCommonBandwidthPackagePayTypeOutcome(ModifyCommonBandwidthPackagePayTypeResult(outcome.result()));
	else
		return ModifyCommonBandwidthPackagePayTypeOutcome(outcome.error());
}

void VpcClient::modifyCommonBandwidthPackagePayTypeAsync(const ModifyCommonBandwidthPackagePayTypeRequest& request, const ModifyCommonBandwidthPackagePayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCommonBandwidthPackagePayType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyCommonBandwidthPackagePayTypeOutcomeCallable VpcClient::modifyCommonBandwidthPackagePayTypeCallable(const ModifyCommonBandwidthPackagePayTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCommonBandwidthPackagePayTypeOutcome()>>(
			[this, request]()
			{
			return this->modifyCommonBandwidthPackagePayType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyCommonBandwidthPackageSpecOutcome VpcClient::modifyCommonBandwidthPackageSpec(const ModifyCommonBandwidthPackageSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCommonBandwidthPackageSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCommonBandwidthPackageSpecOutcome(ModifyCommonBandwidthPackageSpecResult(outcome.result()));
	else
		return ModifyCommonBandwidthPackageSpecOutcome(outcome.error());
}

void VpcClient::modifyCommonBandwidthPackageSpecAsync(const ModifyCommonBandwidthPackageSpecRequest& request, const ModifyCommonBandwidthPackageSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCommonBandwidthPackageSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyCommonBandwidthPackageSpecOutcomeCallable VpcClient::modifyCommonBandwidthPackageSpecCallable(const ModifyCommonBandwidthPackageSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCommonBandwidthPackageSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyCommonBandwidthPackageSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyCustomerGatewayAttributeOutcome VpcClient::modifyCustomerGatewayAttribute(const ModifyCustomerGatewayAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCustomerGatewayAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCustomerGatewayAttributeOutcome(ModifyCustomerGatewayAttributeResult(outcome.result()));
	else
		return ModifyCustomerGatewayAttributeOutcome(outcome.error());
}

void VpcClient::modifyCustomerGatewayAttributeAsync(const ModifyCustomerGatewayAttributeRequest& request, const ModifyCustomerGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCustomerGatewayAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyCustomerGatewayAttributeOutcomeCallable VpcClient::modifyCustomerGatewayAttributeCallable(const ModifyCustomerGatewayAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCustomerGatewayAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyCustomerGatewayAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyEipAddressAttributeOutcome VpcClient::modifyEipAddressAttribute(const ModifyEipAddressAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyEipAddressAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyEipAddressAttributeOutcome(ModifyEipAddressAttributeResult(outcome.result()));
	else
		return ModifyEipAddressAttributeOutcome(outcome.error());
}

void VpcClient::modifyEipAddressAttributeAsync(const ModifyEipAddressAttributeRequest& request, const ModifyEipAddressAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyEipAddressAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyEipAddressAttributeOutcomeCallable VpcClient::modifyEipAddressAttributeCallable(const ModifyEipAddressAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyEipAddressAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyEipAddressAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyExpressCloudConnectionAttributeOutcome VpcClient::modifyExpressCloudConnectionAttribute(const ModifyExpressCloudConnectionAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyExpressCloudConnectionAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyExpressCloudConnectionAttributeOutcome(ModifyExpressCloudConnectionAttributeResult(outcome.result()));
	else
		return ModifyExpressCloudConnectionAttributeOutcome(outcome.error());
}

void VpcClient::modifyExpressCloudConnectionAttributeAsync(const ModifyExpressCloudConnectionAttributeRequest& request, const ModifyExpressCloudConnectionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyExpressCloudConnectionAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyExpressCloudConnectionAttributeOutcomeCallable VpcClient::modifyExpressCloudConnectionAttributeCallable(const ModifyExpressCloudConnectionAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyExpressCloudConnectionAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyExpressCloudConnectionAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyExpressCloudConnectionBandwidthOutcome VpcClient::modifyExpressCloudConnectionBandwidth(const ModifyExpressCloudConnectionBandwidthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyExpressCloudConnectionBandwidthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyExpressCloudConnectionBandwidthOutcome(ModifyExpressCloudConnectionBandwidthResult(outcome.result()));
	else
		return ModifyExpressCloudConnectionBandwidthOutcome(outcome.error());
}

void VpcClient::modifyExpressCloudConnectionBandwidthAsync(const ModifyExpressCloudConnectionBandwidthRequest& request, const ModifyExpressCloudConnectionBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyExpressCloudConnectionBandwidth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyExpressCloudConnectionBandwidthOutcomeCallable VpcClient::modifyExpressCloudConnectionBandwidthCallable(const ModifyExpressCloudConnectionBandwidthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyExpressCloudConnectionBandwidthOutcome()>>(
			[this, request]()
			{
			return this->modifyExpressCloudConnectionBandwidth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyFlowLogAttributeOutcome VpcClient::modifyFlowLogAttribute(const ModifyFlowLogAttributeRequest &request) const
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

void VpcClient::modifyFlowLogAttributeAsync(const ModifyFlowLogAttributeRequest& request, const ModifyFlowLogAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyFlowLogAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyFlowLogAttributeOutcomeCallable VpcClient::modifyFlowLogAttributeCallable(const ModifyFlowLogAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyFlowLogAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyFlowLogAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyForwardEntryOutcome VpcClient::modifyForwardEntry(const ModifyForwardEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyForwardEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyForwardEntryOutcome(ModifyForwardEntryResult(outcome.result()));
	else
		return ModifyForwardEntryOutcome(outcome.error());
}

void VpcClient::modifyForwardEntryAsync(const ModifyForwardEntryRequest& request, const ModifyForwardEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyForwardEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyForwardEntryOutcomeCallable VpcClient::modifyForwardEntryCallable(const ModifyForwardEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyForwardEntryOutcome()>>(
			[this, request]()
			{
			return this->modifyForwardEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyGlobalAccelerationInstanceAttributesOutcome VpcClient::modifyGlobalAccelerationInstanceAttributes(const ModifyGlobalAccelerationInstanceAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyGlobalAccelerationInstanceAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyGlobalAccelerationInstanceAttributesOutcome(ModifyGlobalAccelerationInstanceAttributesResult(outcome.result()));
	else
		return ModifyGlobalAccelerationInstanceAttributesOutcome(outcome.error());
}

void VpcClient::modifyGlobalAccelerationInstanceAttributesAsync(const ModifyGlobalAccelerationInstanceAttributesRequest& request, const ModifyGlobalAccelerationInstanceAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGlobalAccelerationInstanceAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyGlobalAccelerationInstanceAttributesOutcomeCallable VpcClient::modifyGlobalAccelerationInstanceAttributesCallable(const ModifyGlobalAccelerationInstanceAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGlobalAccelerationInstanceAttributesOutcome()>>(
			[this, request]()
			{
			return this->modifyGlobalAccelerationInstanceAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyGlobalAccelerationInstanceSpecOutcome VpcClient::modifyGlobalAccelerationInstanceSpec(const ModifyGlobalAccelerationInstanceSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyGlobalAccelerationInstanceSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyGlobalAccelerationInstanceSpecOutcome(ModifyGlobalAccelerationInstanceSpecResult(outcome.result()));
	else
		return ModifyGlobalAccelerationInstanceSpecOutcome(outcome.error());
}

void VpcClient::modifyGlobalAccelerationInstanceSpecAsync(const ModifyGlobalAccelerationInstanceSpecRequest& request, const ModifyGlobalAccelerationInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGlobalAccelerationInstanceSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyGlobalAccelerationInstanceSpecOutcomeCallable VpcClient::modifyGlobalAccelerationInstanceSpecCallable(const ModifyGlobalAccelerationInstanceSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGlobalAccelerationInstanceSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyGlobalAccelerationInstanceSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyHaVipAttributeOutcome VpcClient::modifyHaVipAttribute(const ModifyHaVipAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyHaVipAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyHaVipAttributeOutcome(ModifyHaVipAttributeResult(outcome.result()));
	else
		return ModifyHaVipAttributeOutcome(outcome.error());
}

void VpcClient::modifyHaVipAttributeAsync(const ModifyHaVipAttributeRequest& request, const ModifyHaVipAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyHaVipAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyHaVipAttributeOutcomeCallable VpcClient::modifyHaVipAttributeCallable(const ModifyHaVipAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyHaVipAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyHaVipAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyIPv6TranslatorAclAttributeOutcome VpcClient::modifyIPv6TranslatorAclAttribute(const ModifyIPv6TranslatorAclAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyIPv6TranslatorAclAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyIPv6TranslatorAclAttributeOutcome(ModifyIPv6TranslatorAclAttributeResult(outcome.result()));
	else
		return ModifyIPv6TranslatorAclAttributeOutcome(outcome.error());
}

void VpcClient::modifyIPv6TranslatorAclAttributeAsync(const ModifyIPv6TranslatorAclAttributeRequest& request, const ModifyIPv6TranslatorAclAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyIPv6TranslatorAclAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyIPv6TranslatorAclAttributeOutcomeCallable VpcClient::modifyIPv6TranslatorAclAttributeCallable(const ModifyIPv6TranslatorAclAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyIPv6TranslatorAclAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyIPv6TranslatorAclAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyIPv6TranslatorAclListEntryOutcome VpcClient::modifyIPv6TranslatorAclListEntry(const ModifyIPv6TranslatorAclListEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyIPv6TranslatorAclListEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyIPv6TranslatorAclListEntryOutcome(ModifyIPv6TranslatorAclListEntryResult(outcome.result()));
	else
		return ModifyIPv6TranslatorAclListEntryOutcome(outcome.error());
}

void VpcClient::modifyIPv6TranslatorAclListEntryAsync(const ModifyIPv6TranslatorAclListEntryRequest& request, const ModifyIPv6TranslatorAclListEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyIPv6TranslatorAclListEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyIPv6TranslatorAclListEntryOutcomeCallable VpcClient::modifyIPv6TranslatorAclListEntryCallable(const ModifyIPv6TranslatorAclListEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyIPv6TranslatorAclListEntryOutcome()>>(
			[this, request]()
			{
			return this->modifyIPv6TranslatorAclListEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyIPv6TranslatorAttributeOutcome VpcClient::modifyIPv6TranslatorAttribute(const ModifyIPv6TranslatorAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyIPv6TranslatorAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyIPv6TranslatorAttributeOutcome(ModifyIPv6TranslatorAttributeResult(outcome.result()));
	else
		return ModifyIPv6TranslatorAttributeOutcome(outcome.error());
}

void VpcClient::modifyIPv6TranslatorAttributeAsync(const ModifyIPv6TranslatorAttributeRequest& request, const ModifyIPv6TranslatorAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyIPv6TranslatorAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyIPv6TranslatorAttributeOutcomeCallable VpcClient::modifyIPv6TranslatorAttributeCallable(const ModifyIPv6TranslatorAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyIPv6TranslatorAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyIPv6TranslatorAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyIPv6TranslatorBandwidthOutcome VpcClient::modifyIPv6TranslatorBandwidth(const ModifyIPv6TranslatorBandwidthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyIPv6TranslatorBandwidthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyIPv6TranslatorBandwidthOutcome(ModifyIPv6TranslatorBandwidthResult(outcome.result()));
	else
		return ModifyIPv6TranslatorBandwidthOutcome(outcome.error());
}

void VpcClient::modifyIPv6TranslatorBandwidthAsync(const ModifyIPv6TranslatorBandwidthRequest& request, const ModifyIPv6TranslatorBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyIPv6TranslatorBandwidth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyIPv6TranslatorBandwidthOutcomeCallable VpcClient::modifyIPv6TranslatorBandwidthCallable(const ModifyIPv6TranslatorBandwidthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyIPv6TranslatorBandwidthOutcome()>>(
			[this, request]()
			{
			return this->modifyIPv6TranslatorBandwidth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyIPv6TranslatorEntryOutcome VpcClient::modifyIPv6TranslatorEntry(const ModifyIPv6TranslatorEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyIPv6TranslatorEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyIPv6TranslatorEntryOutcome(ModifyIPv6TranslatorEntryResult(outcome.result()));
	else
		return ModifyIPv6TranslatorEntryOutcome(outcome.error());
}

void VpcClient::modifyIPv6TranslatorEntryAsync(const ModifyIPv6TranslatorEntryRequest& request, const ModifyIPv6TranslatorEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyIPv6TranslatorEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyIPv6TranslatorEntryOutcomeCallable VpcClient::modifyIPv6TranslatorEntryCallable(const ModifyIPv6TranslatorEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyIPv6TranslatorEntryOutcome()>>(
			[this, request]()
			{
			return this->modifyIPv6TranslatorEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyIpv6AddressAttributeOutcome VpcClient::modifyIpv6AddressAttribute(const ModifyIpv6AddressAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyIpv6AddressAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyIpv6AddressAttributeOutcome(ModifyIpv6AddressAttributeResult(outcome.result()));
	else
		return ModifyIpv6AddressAttributeOutcome(outcome.error());
}

void VpcClient::modifyIpv6AddressAttributeAsync(const ModifyIpv6AddressAttributeRequest& request, const ModifyIpv6AddressAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyIpv6AddressAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyIpv6AddressAttributeOutcomeCallable VpcClient::modifyIpv6AddressAttributeCallable(const ModifyIpv6AddressAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyIpv6AddressAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyIpv6AddressAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyIpv6GatewayAttributeOutcome VpcClient::modifyIpv6GatewayAttribute(const ModifyIpv6GatewayAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyIpv6GatewayAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyIpv6GatewayAttributeOutcome(ModifyIpv6GatewayAttributeResult(outcome.result()));
	else
		return ModifyIpv6GatewayAttributeOutcome(outcome.error());
}

void VpcClient::modifyIpv6GatewayAttributeAsync(const ModifyIpv6GatewayAttributeRequest& request, const ModifyIpv6GatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyIpv6GatewayAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyIpv6GatewayAttributeOutcomeCallable VpcClient::modifyIpv6GatewayAttributeCallable(const ModifyIpv6GatewayAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyIpv6GatewayAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyIpv6GatewayAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyIpv6GatewaySpecOutcome VpcClient::modifyIpv6GatewaySpec(const ModifyIpv6GatewaySpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyIpv6GatewaySpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyIpv6GatewaySpecOutcome(ModifyIpv6GatewaySpecResult(outcome.result()));
	else
		return ModifyIpv6GatewaySpecOutcome(outcome.error());
}

void VpcClient::modifyIpv6GatewaySpecAsync(const ModifyIpv6GatewaySpecRequest& request, const ModifyIpv6GatewaySpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyIpv6GatewaySpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyIpv6GatewaySpecOutcomeCallable VpcClient::modifyIpv6GatewaySpecCallable(const ModifyIpv6GatewaySpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyIpv6GatewaySpecOutcome()>>(
			[this, request]()
			{
			return this->modifyIpv6GatewaySpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyIpv6InternetBandwidthOutcome VpcClient::modifyIpv6InternetBandwidth(const ModifyIpv6InternetBandwidthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyIpv6InternetBandwidthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyIpv6InternetBandwidthOutcome(ModifyIpv6InternetBandwidthResult(outcome.result()));
	else
		return ModifyIpv6InternetBandwidthOutcome(outcome.error());
}

void VpcClient::modifyIpv6InternetBandwidthAsync(const ModifyIpv6InternetBandwidthRequest& request, const ModifyIpv6InternetBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyIpv6InternetBandwidth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyIpv6InternetBandwidthOutcomeCallable VpcClient::modifyIpv6InternetBandwidthCallable(const ModifyIpv6InternetBandwidthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyIpv6InternetBandwidthOutcome()>>(
			[this, request]()
			{
			return this->modifyIpv6InternetBandwidth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyNatGatewayAttributeOutcome VpcClient::modifyNatGatewayAttribute(const ModifyNatGatewayAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyNatGatewayAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyNatGatewayAttributeOutcome(ModifyNatGatewayAttributeResult(outcome.result()));
	else
		return ModifyNatGatewayAttributeOutcome(outcome.error());
}

void VpcClient::modifyNatGatewayAttributeAsync(const ModifyNatGatewayAttributeRequest& request, const ModifyNatGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyNatGatewayAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyNatGatewayAttributeOutcomeCallable VpcClient::modifyNatGatewayAttributeCallable(const ModifyNatGatewayAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyNatGatewayAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyNatGatewayAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyNatGatewaySpecOutcome VpcClient::modifyNatGatewaySpec(const ModifyNatGatewaySpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyNatGatewaySpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyNatGatewaySpecOutcome(ModifyNatGatewaySpecResult(outcome.result()));
	else
		return ModifyNatGatewaySpecOutcome(outcome.error());
}

void VpcClient::modifyNatGatewaySpecAsync(const ModifyNatGatewaySpecRequest& request, const ModifyNatGatewaySpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyNatGatewaySpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyNatGatewaySpecOutcomeCallable VpcClient::modifyNatGatewaySpecCallable(const ModifyNatGatewaySpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyNatGatewaySpecOutcome()>>(
			[this, request]()
			{
			return this->modifyNatGatewaySpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyNetworkAclAttributesOutcome VpcClient::modifyNetworkAclAttributes(const ModifyNetworkAclAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyNetworkAclAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyNetworkAclAttributesOutcome(ModifyNetworkAclAttributesResult(outcome.result()));
	else
		return ModifyNetworkAclAttributesOutcome(outcome.error());
}

void VpcClient::modifyNetworkAclAttributesAsync(const ModifyNetworkAclAttributesRequest& request, const ModifyNetworkAclAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyNetworkAclAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyNetworkAclAttributesOutcomeCallable VpcClient::modifyNetworkAclAttributesCallable(const ModifyNetworkAclAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyNetworkAclAttributesOutcome()>>(
			[this, request]()
			{
			return this->modifyNetworkAclAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyPhysicalConnectionAttributeOutcome VpcClient::modifyPhysicalConnectionAttribute(const ModifyPhysicalConnectionAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPhysicalConnectionAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPhysicalConnectionAttributeOutcome(ModifyPhysicalConnectionAttributeResult(outcome.result()));
	else
		return ModifyPhysicalConnectionAttributeOutcome(outcome.error());
}

void VpcClient::modifyPhysicalConnectionAttributeAsync(const ModifyPhysicalConnectionAttributeRequest& request, const ModifyPhysicalConnectionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPhysicalConnectionAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyPhysicalConnectionAttributeOutcomeCallable VpcClient::modifyPhysicalConnectionAttributeCallable(const ModifyPhysicalConnectionAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPhysicalConnectionAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyPhysicalConnectionAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyRouteEntryOutcome VpcClient::modifyRouteEntry(const ModifyRouteEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRouteEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRouteEntryOutcome(ModifyRouteEntryResult(outcome.result()));
	else
		return ModifyRouteEntryOutcome(outcome.error());
}

void VpcClient::modifyRouteEntryAsync(const ModifyRouteEntryRequest& request, const ModifyRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRouteEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyRouteEntryOutcomeCallable VpcClient::modifyRouteEntryCallable(const ModifyRouteEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRouteEntryOutcome()>>(
			[this, request]()
			{
			return this->modifyRouteEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyRouteTableAttributesOutcome VpcClient::modifyRouteTableAttributes(const ModifyRouteTableAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRouteTableAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRouteTableAttributesOutcome(ModifyRouteTableAttributesResult(outcome.result()));
	else
		return ModifyRouteTableAttributesOutcome(outcome.error());
}

void VpcClient::modifyRouteTableAttributesAsync(const ModifyRouteTableAttributesRequest& request, const ModifyRouteTableAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRouteTableAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyRouteTableAttributesOutcomeCallable VpcClient::modifyRouteTableAttributesCallable(const ModifyRouteTableAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRouteTableAttributesOutcome()>>(
			[this, request]()
			{
			return this->modifyRouteTableAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyRouterInterfaceAttributeOutcome VpcClient::modifyRouterInterfaceAttribute(const ModifyRouterInterfaceAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRouterInterfaceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRouterInterfaceAttributeOutcome(ModifyRouterInterfaceAttributeResult(outcome.result()));
	else
		return ModifyRouterInterfaceAttributeOutcome(outcome.error());
}

void VpcClient::modifyRouterInterfaceAttributeAsync(const ModifyRouterInterfaceAttributeRequest& request, const ModifyRouterInterfaceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRouterInterfaceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyRouterInterfaceAttributeOutcomeCallable VpcClient::modifyRouterInterfaceAttributeCallable(const ModifyRouterInterfaceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRouterInterfaceAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyRouterInterfaceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyRouterInterfaceSpecOutcome VpcClient::modifyRouterInterfaceSpec(const ModifyRouterInterfaceSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRouterInterfaceSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRouterInterfaceSpecOutcome(ModifyRouterInterfaceSpecResult(outcome.result()));
	else
		return ModifyRouterInterfaceSpecOutcome(outcome.error());
}

void VpcClient::modifyRouterInterfaceSpecAsync(const ModifyRouterInterfaceSpecRequest& request, const ModifyRouterInterfaceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRouterInterfaceSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyRouterInterfaceSpecOutcomeCallable VpcClient::modifyRouterInterfaceSpecCallable(const ModifyRouterInterfaceSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRouterInterfaceSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyRouterInterfaceSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifySnatEntryOutcome VpcClient::modifySnatEntry(const ModifySnatEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySnatEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySnatEntryOutcome(ModifySnatEntryResult(outcome.result()));
	else
		return ModifySnatEntryOutcome(outcome.error());
}

void VpcClient::modifySnatEntryAsync(const ModifySnatEntryRequest& request, const ModifySnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySnatEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifySnatEntryOutcomeCallable VpcClient::modifySnatEntryCallable(const ModifySnatEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySnatEntryOutcome()>>(
			[this, request]()
			{
			return this->modifySnatEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifySslVpnClientCertOutcome VpcClient::modifySslVpnClientCert(const ModifySslVpnClientCertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySslVpnClientCertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySslVpnClientCertOutcome(ModifySslVpnClientCertResult(outcome.result()));
	else
		return ModifySslVpnClientCertOutcome(outcome.error());
}

void VpcClient::modifySslVpnClientCertAsync(const ModifySslVpnClientCertRequest& request, const ModifySslVpnClientCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySslVpnClientCert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifySslVpnClientCertOutcomeCallable VpcClient::modifySslVpnClientCertCallable(const ModifySslVpnClientCertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySslVpnClientCertOutcome()>>(
			[this, request]()
			{
			return this->modifySslVpnClientCert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifySslVpnServerOutcome VpcClient::modifySslVpnServer(const ModifySslVpnServerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySslVpnServerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySslVpnServerOutcome(ModifySslVpnServerResult(outcome.result()));
	else
		return ModifySslVpnServerOutcome(outcome.error());
}

void VpcClient::modifySslVpnServerAsync(const ModifySslVpnServerRequest& request, const ModifySslVpnServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySslVpnServer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifySslVpnServerOutcomeCallable VpcClient::modifySslVpnServerCallable(const ModifySslVpnServerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySslVpnServerOutcome()>>(
			[this, request]()
			{
			return this->modifySslVpnServer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyVRouterAttributeOutcome VpcClient::modifyVRouterAttribute(const ModifyVRouterAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyVRouterAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyVRouterAttributeOutcome(ModifyVRouterAttributeResult(outcome.result()));
	else
		return ModifyVRouterAttributeOutcome(outcome.error());
}

void VpcClient::modifyVRouterAttributeAsync(const ModifyVRouterAttributeRequest& request, const ModifyVRouterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVRouterAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyVRouterAttributeOutcomeCallable VpcClient::modifyVRouterAttributeCallable(const ModifyVRouterAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVRouterAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyVRouterAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyVSwitchAttributeOutcome VpcClient::modifyVSwitchAttribute(const ModifyVSwitchAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyVSwitchAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyVSwitchAttributeOutcome(ModifyVSwitchAttributeResult(outcome.result()));
	else
		return ModifyVSwitchAttributeOutcome(outcome.error());
}

void VpcClient::modifyVSwitchAttributeAsync(const ModifyVSwitchAttributeRequest& request, const ModifyVSwitchAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVSwitchAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyVSwitchAttributeOutcomeCallable VpcClient::modifyVSwitchAttributeCallable(const ModifyVSwitchAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVSwitchAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyVSwitchAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyVirtualBorderRouterAttributeOutcome VpcClient::modifyVirtualBorderRouterAttribute(const ModifyVirtualBorderRouterAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyVirtualBorderRouterAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyVirtualBorderRouterAttributeOutcome(ModifyVirtualBorderRouterAttributeResult(outcome.result()));
	else
		return ModifyVirtualBorderRouterAttributeOutcome(outcome.error());
}

void VpcClient::modifyVirtualBorderRouterAttributeAsync(const ModifyVirtualBorderRouterAttributeRequest& request, const ModifyVirtualBorderRouterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVirtualBorderRouterAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyVirtualBorderRouterAttributeOutcomeCallable VpcClient::modifyVirtualBorderRouterAttributeCallable(const ModifyVirtualBorderRouterAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVirtualBorderRouterAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyVirtualBorderRouterAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyVpcAttributeOutcome VpcClient::modifyVpcAttribute(const ModifyVpcAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyVpcAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyVpcAttributeOutcome(ModifyVpcAttributeResult(outcome.result()));
	else
		return ModifyVpcAttributeOutcome(outcome.error());
}

void VpcClient::modifyVpcAttributeAsync(const ModifyVpcAttributeRequest& request, const ModifyVpcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVpcAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyVpcAttributeOutcomeCallable VpcClient::modifyVpcAttributeCallable(const ModifyVpcAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVpcAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyVpcAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyVpnConnectionAttributeOutcome VpcClient::modifyVpnConnectionAttribute(const ModifyVpnConnectionAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyVpnConnectionAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyVpnConnectionAttributeOutcome(ModifyVpnConnectionAttributeResult(outcome.result()));
	else
		return ModifyVpnConnectionAttributeOutcome(outcome.error());
}

void VpcClient::modifyVpnConnectionAttributeAsync(const ModifyVpnConnectionAttributeRequest& request, const ModifyVpnConnectionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVpnConnectionAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyVpnConnectionAttributeOutcomeCallable VpcClient::modifyVpnConnectionAttributeCallable(const ModifyVpnConnectionAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVpnConnectionAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyVpnConnectionAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyVpnGatewayAttributeOutcome VpcClient::modifyVpnGatewayAttribute(const ModifyVpnGatewayAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyVpnGatewayAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyVpnGatewayAttributeOutcome(ModifyVpnGatewayAttributeResult(outcome.result()));
	else
		return ModifyVpnGatewayAttributeOutcome(outcome.error());
}

void VpcClient::modifyVpnGatewayAttributeAsync(const ModifyVpnGatewayAttributeRequest& request, const ModifyVpnGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVpnGatewayAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyVpnGatewayAttributeOutcomeCallable VpcClient::modifyVpnGatewayAttributeCallable(const ModifyVpnGatewayAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVpnGatewayAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyVpnGatewayAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyVpnPbrRouteEntryWeightOutcome VpcClient::modifyVpnPbrRouteEntryWeight(const ModifyVpnPbrRouteEntryWeightRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyVpnPbrRouteEntryWeightOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyVpnPbrRouteEntryWeightOutcome(ModifyVpnPbrRouteEntryWeightResult(outcome.result()));
	else
		return ModifyVpnPbrRouteEntryWeightOutcome(outcome.error());
}

void VpcClient::modifyVpnPbrRouteEntryWeightAsync(const ModifyVpnPbrRouteEntryWeightRequest& request, const ModifyVpnPbrRouteEntryWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVpnPbrRouteEntryWeight(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyVpnPbrRouteEntryWeightOutcomeCallable VpcClient::modifyVpnPbrRouteEntryWeightCallable(const ModifyVpnPbrRouteEntryWeightRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVpnPbrRouteEntryWeightOutcome()>>(
			[this, request]()
			{
			return this->modifyVpnPbrRouteEntryWeight(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyVpnRouteEntryWeightOutcome VpcClient::modifyVpnRouteEntryWeight(const ModifyVpnRouteEntryWeightRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyVpnRouteEntryWeightOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyVpnRouteEntryWeightOutcome(ModifyVpnRouteEntryWeightResult(outcome.result()));
	else
		return ModifyVpnRouteEntryWeightOutcome(outcome.error());
}

void VpcClient::modifyVpnRouteEntryWeightAsync(const ModifyVpnRouteEntryWeightRequest& request, const ModifyVpnRouteEntryWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVpnRouteEntryWeight(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyVpnRouteEntryWeightOutcomeCallable VpcClient::modifyVpnRouteEntryWeightCallable(const ModifyVpnRouteEntryWeightRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVpnRouteEntryWeightOutcome()>>(
			[this, request]()
			{
			return this->modifyVpnRouteEntryWeight(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::MoveResourceGroupOutcome VpcClient::moveResourceGroup(const MoveResourceGroupRequest &request) const
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

void VpcClient::moveResourceGroupAsync(const MoveResourceGroupRequest& request, const MoveResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moveResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::MoveResourceGroupOutcomeCallable VpcClient::moveResourceGroupCallable(const MoveResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoveResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->moveResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::PublishVpnRouteEntryOutcome VpcClient::publishVpnRouteEntry(const PublishVpnRouteEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishVpnRouteEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishVpnRouteEntryOutcome(PublishVpnRouteEntryResult(outcome.result()));
	else
		return PublishVpnRouteEntryOutcome(outcome.error());
}

void VpcClient::publishVpnRouteEntryAsync(const PublishVpnRouteEntryRequest& request, const PublishVpnRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishVpnRouteEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::PublishVpnRouteEntryOutcomeCallable VpcClient::publishVpnRouteEntryCallable(const PublishVpnRouteEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishVpnRouteEntryOutcome()>>(
			[this, request]()
			{
			return this->publishVpnRouteEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::RecoverVirtualBorderRouterOutcome VpcClient::recoverVirtualBorderRouter(const RecoverVirtualBorderRouterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecoverVirtualBorderRouterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecoverVirtualBorderRouterOutcome(RecoverVirtualBorderRouterResult(outcome.result()));
	else
		return RecoverVirtualBorderRouterOutcome(outcome.error());
}

void VpcClient::recoverVirtualBorderRouterAsync(const RecoverVirtualBorderRouterRequest& request, const RecoverVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recoverVirtualBorderRouter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::RecoverVirtualBorderRouterOutcomeCallable VpcClient::recoverVirtualBorderRouterCallable(const RecoverVirtualBorderRouterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecoverVirtualBorderRouterOutcome()>>(
			[this, request]()
			{
			return this->recoverVirtualBorderRouter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ReleaseEipAddressOutcome VpcClient::releaseEipAddress(const ReleaseEipAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseEipAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseEipAddressOutcome(ReleaseEipAddressResult(outcome.result()));
	else
		return ReleaseEipAddressOutcome(outcome.error());
}

void VpcClient::releaseEipAddressAsync(const ReleaseEipAddressRequest& request, const ReleaseEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseEipAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ReleaseEipAddressOutcomeCallable VpcClient::releaseEipAddressCallable(const ReleaseEipAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseEipAddressOutcome()>>(
			[this, request]()
			{
			return this->releaseEipAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ReleaseEipSegmentAddressOutcome VpcClient::releaseEipSegmentAddress(const ReleaseEipSegmentAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseEipSegmentAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseEipSegmentAddressOutcome(ReleaseEipSegmentAddressResult(outcome.result()));
	else
		return ReleaseEipSegmentAddressOutcome(outcome.error());
}

void VpcClient::releaseEipSegmentAddressAsync(const ReleaseEipSegmentAddressRequest& request, const ReleaseEipSegmentAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseEipSegmentAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ReleaseEipSegmentAddressOutcomeCallable VpcClient::releaseEipSegmentAddressCallable(const ReleaseEipSegmentAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseEipSegmentAddressOutcome()>>(
			[this, request]()
			{
			return this->releaseEipSegmentAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::RemoveBandwidthPackageIpsOutcome VpcClient::removeBandwidthPackageIps(const RemoveBandwidthPackageIpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveBandwidthPackageIpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveBandwidthPackageIpsOutcome(RemoveBandwidthPackageIpsResult(outcome.result()));
	else
		return RemoveBandwidthPackageIpsOutcome(outcome.error());
}

void VpcClient::removeBandwidthPackageIpsAsync(const RemoveBandwidthPackageIpsRequest& request, const RemoveBandwidthPackageIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeBandwidthPackageIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::RemoveBandwidthPackageIpsOutcomeCallable VpcClient::removeBandwidthPackageIpsCallable(const RemoveBandwidthPackageIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveBandwidthPackageIpsOutcome()>>(
			[this, request]()
			{
			return this->removeBandwidthPackageIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::RemoveCommonBandwidthPackageIpOutcome VpcClient::removeCommonBandwidthPackageIp(const RemoveCommonBandwidthPackageIpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveCommonBandwidthPackageIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveCommonBandwidthPackageIpOutcome(RemoveCommonBandwidthPackageIpResult(outcome.result()));
	else
		return RemoveCommonBandwidthPackageIpOutcome(outcome.error());
}

void VpcClient::removeCommonBandwidthPackageIpAsync(const RemoveCommonBandwidthPackageIpRequest& request, const RemoveCommonBandwidthPackageIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeCommonBandwidthPackageIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::RemoveCommonBandwidthPackageIpOutcomeCallable VpcClient::removeCommonBandwidthPackageIpCallable(const RemoveCommonBandwidthPackageIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveCommonBandwidthPackageIpOutcome()>>(
			[this, request]()
			{
			return this->removeCommonBandwidthPackageIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::RemoveGlobalAccelerationInstanceIpOutcome VpcClient::removeGlobalAccelerationInstanceIp(const RemoveGlobalAccelerationInstanceIpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveGlobalAccelerationInstanceIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveGlobalAccelerationInstanceIpOutcome(RemoveGlobalAccelerationInstanceIpResult(outcome.result()));
	else
		return RemoveGlobalAccelerationInstanceIpOutcome(outcome.error());
}

void VpcClient::removeGlobalAccelerationInstanceIpAsync(const RemoveGlobalAccelerationInstanceIpRequest& request, const RemoveGlobalAccelerationInstanceIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeGlobalAccelerationInstanceIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::RemoveGlobalAccelerationInstanceIpOutcomeCallable VpcClient::removeGlobalAccelerationInstanceIpCallable(const RemoveGlobalAccelerationInstanceIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveGlobalAccelerationInstanceIpOutcome()>>(
			[this, request]()
			{
			return this->removeGlobalAccelerationInstanceIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::RemoveIPv6TranslatorAclListEntryOutcome VpcClient::removeIPv6TranslatorAclListEntry(const RemoveIPv6TranslatorAclListEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveIPv6TranslatorAclListEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveIPv6TranslatorAclListEntryOutcome(RemoveIPv6TranslatorAclListEntryResult(outcome.result()));
	else
		return RemoveIPv6TranslatorAclListEntryOutcome(outcome.error());
}

void VpcClient::removeIPv6TranslatorAclListEntryAsync(const RemoveIPv6TranslatorAclListEntryRequest& request, const RemoveIPv6TranslatorAclListEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeIPv6TranslatorAclListEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::RemoveIPv6TranslatorAclListEntryOutcomeCallable VpcClient::removeIPv6TranslatorAclListEntryCallable(const RemoveIPv6TranslatorAclListEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveIPv6TranslatorAclListEntryOutcome()>>(
			[this, request]()
			{
			return this->removeIPv6TranslatorAclListEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::RevokeInstanceFromCenOutcome VpcClient::revokeInstanceFromCen(const RevokeInstanceFromCenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeInstanceFromCenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeInstanceFromCenOutcome(RevokeInstanceFromCenResult(outcome.result()));
	else
		return RevokeInstanceFromCenOutcome(outcome.error());
}

void VpcClient::revokeInstanceFromCenAsync(const RevokeInstanceFromCenRequest& request, const RevokeInstanceFromCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeInstanceFromCen(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::RevokeInstanceFromCenOutcomeCallable VpcClient::revokeInstanceFromCenCallable(const RevokeInstanceFromCenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeInstanceFromCenOutcome()>>(
			[this, request]()
			{
			return this->revokeInstanceFromCen(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::TagResourcesOutcome VpcClient::tagResources(const TagResourcesRequest &request) const
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

void VpcClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::TagResourcesOutcomeCallable VpcClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::TerminatePhysicalConnectionOutcome VpcClient::terminatePhysicalConnection(const TerminatePhysicalConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TerminatePhysicalConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TerminatePhysicalConnectionOutcome(TerminatePhysicalConnectionResult(outcome.result()));
	else
		return TerminatePhysicalConnectionOutcome(outcome.error());
}

void VpcClient::terminatePhysicalConnectionAsync(const TerminatePhysicalConnectionRequest& request, const TerminatePhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, terminatePhysicalConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::TerminatePhysicalConnectionOutcomeCallable VpcClient::terminatePhysicalConnectionCallable(const TerminatePhysicalConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TerminatePhysicalConnectionOutcome()>>(
			[this, request]()
			{
			return this->terminatePhysicalConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::TerminateVirtualBorderRouterOutcome VpcClient::terminateVirtualBorderRouter(const TerminateVirtualBorderRouterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TerminateVirtualBorderRouterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TerminateVirtualBorderRouterOutcome(TerminateVirtualBorderRouterResult(outcome.result()));
	else
		return TerminateVirtualBorderRouterOutcome(outcome.error());
}

void VpcClient::terminateVirtualBorderRouterAsync(const TerminateVirtualBorderRouterRequest& request, const TerminateVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, terminateVirtualBorderRouter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::TerminateVirtualBorderRouterOutcomeCallable VpcClient::terminateVirtualBorderRouterCallable(const TerminateVirtualBorderRouterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TerminateVirtualBorderRouterOutcome()>>(
			[this, request]()
			{
			return this->terminateVirtualBorderRouter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::UnTagResourcesOutcome VpcClient::unTagResources(const UnTagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnTagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnTagResourcesOutcome(UnTagResourcesResult(outcome.result()));
	else
		return UnTagResourcesOutcome(outcome.error());
}

void VpcClient::unTagResourcesAsync(const UnTagResourcesRequest& request, const UnTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::UnTagResourcesOutcomeCallable VpcClient::unTagResourcesCallable(const UnTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->unTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::UnassociateEipAddressOutcome VpcClient::unassociateEipAddress(const UnassociateEipAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnassociateEipAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnassociateEipAddressOutcome(UnassociateEipAddressResult(outcome.result()));
	else
		return UnassociateEipAddressOutcome(outcome.error());
}

void VpcClient::unassociateEipAddressAsync(const UnassociateEipAddressRequest& request, const UnassociateEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unassociateEipAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::UnassociateEipAddressOutcomeCallable VpcClient::unassociateEipAddressCallable(const UnassociateEipAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnassociateEipAddressOutcome()>>(
			[this, request]()
			{
			return this->unassociateEipAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::UnassociateGlobalAccelerationInstanceOutcome VpcClient::unassociateGlobalAccelerationInstance(const UnassociateGlobalAccelerationInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnassociateGlobalAccelerationInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnassociateGlobalAccelerationInstanceOutcome(UnassociateGlobalAccelerationInstanceResult(outcome.result()));
	else
		return UnassociateGlobalAccelerationInstanceOutcome(outcome.error());
}

void VpcClient::unassociateGlobalAccelerationInstanceAsync(const UnassociateGlobalAccelerationInstanceRequest& request, const UnassociateGlobalAccelerationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unassociateGlobalAccelerationInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::UnassociateGlobalAccelerationInstanceOutcomeCallable VpcClient::unassociateGlobalAccelerationInstanceCallable(const UnassociateGlobalAccelerationInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnassociateGlobalAccelerationInstanceOutcome()>>(
			[this, request]()
			{
			return this->unassociateGlobalAccelerationInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::UnassociateHaVipOutcome VpcClient::unassociateHaVip(const UnassociateHaVipRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnassociateHaVipOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnassociateHaVipOutcome(UnassociateHaVipResult(outcome.result()));
	else
		return UnassociateHaVipOutcome(outcome.error());
}

void VpcClient::unassociateHaVipAsync(const UnassociateHaVipRequest& request, const UnassociateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unassociateHaVip(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::UnassociateHaVipOutcomeCallable VpcClient::unassociateHaVipCallable(const UnassociateHaVipRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnassociateHaVipOutcome()>>(
			[this, request]()
			{
			return this->unassociateHaVip(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::UnassociateNetworkAclOutcome VpcClient::unassociateNetworkAcl(const UnassociateNetworkAclRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnassociateNetworkAclOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnassociateNetworkAclOutcome(UnassociateNetworkAclResult(outcome.result()));
	else
		return UnassociateNetworkAclOutcome(outcome.error());
}

void VpcClient::unassociateNetworkAclAsync(const UnassociateNetworkAclRequest& request, const UnassociateNetworkAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unassociateNetworkAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::UnassociateNetworkAclOutcomeCallable VpcClient::unassociateNetworkAclCallable(const UnassociateNetworkAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnassociateNetworkAclOutcome()>>(
			[this, request]()
			{
			return this->unassociateNetworkAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::UnassociatePhysicalConnectionFromVirtualBorderRouterOutcome VpcClient::unassociatePhysicalConnectionFromVirtualBorderRouter(const UnassociatePhysicalConnectionFromVirtualBorderRouterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnassociatePhysicalConnectionFromVirtualBorderRouterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnassociatePhysicalConnectionFromVirtualBorderRouterOutcome(UnassociatePhysicalConnectionFromVirtualBorderRouterResult(outcome.result()));
	else
		return UnassociatePhysicalConnectionFromVirtualBorderRouterOutcome(outcome.error());
}

void VpcClient::unassociatePhysicalConnectionFromVirtualBorderRouterAsync(const UnassociatePhysicalConnectionFromVirtualBorderRouterRequest& request, const UnassociatePhysicalConnectionFromVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unassociatePhysicalConnectionFromVirtualBorderRouter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::UnassociatePhysicalConnectionFromVirtualBorderRouterOutcomeCallable VpcClient::unassociatePhysicalConnectionFromVirtualBorderRouterCallable(const UnassociatePhysicalConnectionFromVirtualBorderRouterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnassociatePhysicalConnectionFromVirtualBorderRouterOutcome()>>(
			[this, request]()
			{
			return this->unassociatePhysicalConnectionFromVirtualBorderRouter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::UnassociateRouteTableOutcome VpcClient::unassociateRouteTable(const UnassociateRouteTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnassociateRouteTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnassociateRouteTableOutcome(UnassociateRouteTableResult(outcome.result()));
	else
		return UnassociateRouteTableOutcome(outcome.error());
}

void VpcClient::unassociateRouteTableAsync(const UnassociateRouteTableRequest& request, const UnassociateRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unassociateRouteTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::UnassociateRouteTableOutcomeCallable VpcClient::unassociateRouteTableCallable(const UnassociateRouteTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnassociateRouteTableOutcome()>>(
			[this, request]()
			{
			return this->unassociateRouteTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::UnassociateVpcCidrBlockOutcome VpcClient::unassociateVpcCidrBlock(const UnassociateVpcCidrBlockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnassociateVpcCidrBlockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnassociateVpcCidrBlockOutcome(UnassociateVpcCidrBlockResult(outcome.result()));
	else
		return UnassociateVpcCidrBlockOutcome(outcome.error());
}

void VpcClient::unassociateVpcCidrBlockAsync(const UnassociateVpcCidrBlockRequest& request, const UnassociateVpcCidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unassociateVpcCidrBlock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::UnassociateVpcCidrBlockOutcomeCallable VpcClient::unassociateVpcCidrBlockCallable(const UnassociateVpcCidrBlockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnassociateVpcCidrBlockOutcome()>>(
			[this, request]()
			{
			return this->unassociateVpcCidrBlock(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::UpdateNetworkAclEntriesOutcome VpcClient::updateNetworkAclEntries(const UpdateNetworkAclEntriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateNetworkAclEntriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateNetworkAclEntriesOutcome(UpdateNetworkAclEntriesResult(outcome.result()));
	else
		return UpdateNetworkAclEntriesOutcome(outcome.error());
}

void VpcClient::updateNetworkAclEntriesAsync(const UpdateNetworkAclEntriesRequest& request, const UpdateNetworkAclEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateNetworkAclEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::UpdateNetworkAclEntriesOutcomeCallable VpcClient::updateNetworkAclEntriesCallable(const UpdateNetworkAclEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateNetworkAclEntriesOutcome()>>(
			[this, request]()
			{
			return this->updateNetworkAclEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

