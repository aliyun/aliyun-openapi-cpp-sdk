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

#include <alibabacloud/ecs/EcsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

namespace
{
	const std::string SERVICE_NAME = "Ecs";
}

EcsClient::EcsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ecs");
}

EcsClient::EcsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ecs");
}

EcsClient::EcsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ecs");
}

EcsClient::~EcsClient()
{}

EcsClient::AcceptInquiredSystemEventOutcome EcsClient::acceptInquiredSystemEvent(const AcceptInquiredSystemEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AcceptInquiredSystemEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AcceptInquiredSystemEventOutcome(AcceptInquiredSystemEventResult(outcome.result()));
	else
		return AcceptInquiredSystemEventOutcome(outcome.error());
}

void EcsClient::acceptInquiredSystemEventAsync(const AcceptInquiredSystemEventRequest& request, const AcceptInquiredSystemEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, acceptInquiredSystemEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::AcceptInquiredSystemEventOutcomeCallable EcsClient::acceptInquiredSystemEventCallable(const AcceptInquiredSystemEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AcceptInquiredSystemEventOutcome()>>(
			[this, request]()
			{
			return this->acceptInquiredSystemEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ActivateRouterInterfaceOutcome EcsClient::activateRouterInterface(const ActivateRouterInterfaceRequest &request) const
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

void EcsClient::activateRouterInterfaceAsync(const ActivateRouterInterfaceRequest& request, const ActivateRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, activateRouterInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ActivateRouterInterfaceOutcomeCallable EcsClient::activateRouterInterfaceCallable(const ActivateRouterInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ActivateRouterInterfaceOutcome()>>(
			[this, request]()
			{
			return this->activateRouterInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::AddBandwidthPackageIpsOutcome EcsClient::addBandwidthPackageIps(const AddBandwidthPackageIpsRequest &request) const
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

void EcsClient::addBandwidthPackageIpsAsync(const AddBandwidthPackageIpsRequest& request, const AddBandwidthPackageIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addBandwidthPackageIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::AddBandwidthPackageIpsOutcomeCallable EcsClient::addBandwidthPackageIpsCallable(const AddBandwidthPackageIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddBandwidthPackageIpsOutcome()>>(
			[this, request]()
			{
			return this->addBandwidthPackageIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::AddTagsOutcome EcsClient::addTags(const AddTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddTagsOutcome(AddTagsResult(outcome.result()));
	else
		return AddTagsOutcome(outcome.error());
}

void EcsClient::addTagsAsync(const AddTagsRequest& request, const AddTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::AddTagsOutcomeCallable EcsClient::addTagsCallable(const AddTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddTagsOutcome()>>(
			[this, request]()
			{
			return this->addTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::AllocateDedicatedHostsOutcome EcsClient::allocateDedicatedHosts(const AllocateDedicatedHostsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AllocateDedicatedHostsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AllocateDedicatedHostsOutcome(AllocateDedicatedHostsResult(outcome.result()));
	else
		return AllocateDedicatedHostsOutcome(outcome.error());
}

void EcsClient::allocateDedicatedHostsAsync(const AllocateDedicatedHostsRequest& request, const AllocateDedicatedHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocateDedicatedHosts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::AllocateDedicatedHostsOutcomeCallable EcsClient::allocateDedicatedHostsCallable(const AllocateDedicatedHostsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocateDedicatedHostsOutcome()>>(
			[this, request]()
			{
			return this->allocateDedicatedHosts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::AllocateEipAddressOutcome EcsClient::allocateEipAddress(const AllocateEipAddressRequest &request) const
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

void EcsClient::allocateEipAddressAsync(const AllocateEipAddressRequest& request, const AllocateEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocateEipAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::AllocateEipAddressOutcomeCallable EcsClient::allocateEipAddressCallable(const AllocateEipAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocateEipAddressOutcome()>>(
			[this, request]()
			{
			return this->allocateEipAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::AllocatePublicIpAddressOutcome EcsClient::allocatePublicIpAddress(const AllocatePublicIpAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AllocatePublicIpAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AllocatePublicIpAddressOutcome(AllocatePublicIpAddressResult(outcome.result()));
	else
		return AllocatePublicIpAddressOutcome(outcome.error());
}

void EcsClient::allocatePublicIpAddressAsync(const AllocatePublicIpAddressRequest& request, const AllocatePublicIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocatePublicIpAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::AllocatePublicIpAddressOutcomeCallable EcsClient::allocatePublicIpAddressCallable(const AllocatePublicIpAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocatePublicIpAddressOutcome()>>(
			[this, request]()
			{
			return this->allocatePublicIpAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ApplyAutoSnapshotPolicyOutcome EcsClient::applyAutoSnapshotPolicy(const ApplyAutoSnapshotPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApplyAutoSnapshotPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApplyAutoSnapshotPolicyOutcome(ApplyAutoSnapshotPolicyResult(outcome.result()));
	else
		return ApplyAutoSnapshotPolicyOutcome(outcome.error());
}

void EcsClient::applyAutoSnapshotPolicyAsync(const ApplyAutoSnapshotPolicyRequest& request, const ApplyAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, applyAutoSnapshotPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ApplyAutoSnapshotPolicyOutcomeCallable EcsClient::applyAutoSnapshotPolicyCallable(const ApplyAutoSnapshotPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApplyAutoSnapshotPolicyOutcome()>>(
			[this, request]()
			{
			return this->applyAutoSnapshotPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::AssignIpv6AddressesOutcome EcsClient::assignIpv6Addresses(const AssignIpv6AddressesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssignIpv6AddressesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssignIpv6AddressesOutcome(AssignIpv6AddressesResult(outcome.result()));
	else
		return AssignIpv6AddressesOutcome(outcome.error());
}

void EcsClient::assignIpv6AddressesAsync(const AssignIpv6AddressesRequest& request, const AssignIpv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, assignIpv6Addresses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::AssignIpv6AddressesOutcomeCallable EcsClient::assignIpv6AddressesCallable(const AssignIpv6AddressesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssignIpv6AddressesOutcome()>>(
			[this, request]()
			{
			return this->assignIpv6Addresses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::AssignPrivateIpAddressesOutcome EcsClient::assignPrivateIpAddresses(const AssignPrivateIpAddressesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssignPrivateIpAddressesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssignPrivateIpAddressesOutcome(AssignPrivateIpAddressesResult(outcome.result()));
	else
		return AssignPrivateIpAddressesOutcome(outcome.error());
}

void EcsClient::assignPrivateIpAddressesAsync(const AssignPrivateIpAddressesRequest& request, const AssignPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, assignPrivateIpAddresses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::AssignPrivateIpAddressesOutcomeCallable EcsClient::assignPrivateIpAddressesCallable(const AssignPrivateIpAddressesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssignPrivateIpAddressesOutcome()>>(
			[this, request]()
			{
			return this->assignPrivateIpAddresses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::AssociateEipAddressOutcome EcsClient::associateEipAddress(const AssociateEipAddressRequest &request) const
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

void EcsClient::associateEipAddressAsync(const AssociateEipAddressRequest& request, const AssociateEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateEipAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::AssociateEipAddressOutcomeCallable EcsClient::associateEipAddressCallable(const AssociateEipAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateEipAddressOutcome()>>(
			[this, request]()
			{
			return this->associateEipAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::AssociateHaVipOutcome EcsClient::associateHaVip(const AssociateHaVipRequest &request) const
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

void EcsClient::associateHaVipAsync(const AssociateHaVipRequest& request, const AssociateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateHaVip(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::AssociateHaVipOutcomeCallable EcsClient::associateHaVipCallable(const AssociateHaVipRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateHaVipOutcome()>>(
			[this, request]()
			{
			return this->associateHaVip(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::AttachClassicLinkVpcOutcome EcsClient::attachClassicLinkVpc(const AttachClassicLinkVpcRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachClassicLinkVpcOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachClassicLinkVpcOutcome(AttachClassicLinkVpcResult(outcome.result()));
	else
		return AttachClassicLinkVpcOutcome(outcome.error());
}

void EcsClient::attachClassicLinkVpcAsync(const AttachClassicLinkVpcRequest& request, const AttachClassicLinkVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachClassicLinkVpc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::AttachClassicLinkVpcOutcomeCallable EcsClient::attachClassicLinkVpcCallable(const AttachClassicLinkVpcRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachClassicLinkVpcOutcome()>>(
			[this, request]()
			{
			return this->attachClassicLinkVpc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::AttachDiskOutcome EcsClient::attachDisk(const AttachDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachDiskOutcome(AttachDiskResult(outcome.result()));
	else
		return AttachDiskOutcome(outcome.error());
}

void EcsClient::attachDiskAsync(const AttachDiskRequest& request, const AttachDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::AttachDiskOutcomeCallable EcsClient::attachDiskCallable(const AttachDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachDiskOutcome()>>(
			[this, request]()
			{
			return this->attachDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::AttachInstanceRamRoleOutcome EcsClient::attachInstanceRamRole(const AttachInstanceRamRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachInstanceRamRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachInstanceRamRoleOutcome(AttachInstanceRamRoleResult(outcome.result()));
	else
		return AttachInstanceRamRoleOutcome(outcome.error());
}

void EcsClient::attachInstanceRamRoleAsync(const AttachInstanceRamRoleRequest& request, const AttachInstanceRamRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachInstanceRamRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::AttachInstanceRamRoleOutcomeCallable EcsClient::attachInstanceRamRoleCallable(const AttachInstanceRamRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachInstanceRamRoleOutcome()>>(
			[this, request]()
			{
			return this->attachInstanceRamRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::AttachKeyPairOutcome EcsClient::attachKeyPair(const AttachKeyPairRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachKeyPairOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachKeyPairOutcome(AttachKeyPairResult(outcome.result()));
	else
		return AttachKeyPairOutcome(outcome.error());
}

void EcsClient::attachKeyPairAsync(const AttachKeyPairRequest& request, const AttachKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachKeyPair(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::AttachKeyPairOutcomeCallable EcsClient::attachKeyPairCallable(const AttachKeyPairRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachKeyPairOutcome()>>(
			[this, request]()
			{
			return this->attachKeyPair(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::AttachNetworkInterfaceOutcome EcsClient::attachNetworkInterface(const AttachNetworkInterfaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachNetworkInterfaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachNetworkInterfaceOutcome(AttachNetworkInterfaceResult(outcome.result()));
	else
		return AttachNetworkInterfaceOutcome(outcome.error());
}

void EcsClient::attachNetworkInterfaceAsync(const AttachNetworkInterfaceRequest& request, const AttachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachNetworkInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::AttachNetworkInterfaceOutcomeCallable EcsClient::attachNetworkInterfaceCallable(const AttachNetworkInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachNetworkInterfaceOutcome()>>(
			[this, request]()
			{
			return this->attachNetworkInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::AuthorizeSecurityGroupOutcome EcsClient::authorizeSecurityGroup(const AuthorizeSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AuthorizeSecurityGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AuthorizeSecurityGroupOutcome(AuthorizeSecurityGroupResult(outcome.result()));
	else
		return AuthorizeSecurityGroupOutcome(outcome.error());
}

void EcsClient::authorizeSecurityGroupAsync(const AuthorizeSecurityGroupRequest& request, const AuthorizeSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, authorizeSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::AuthorizeSecurityGroupOutcomeCallable EcsClient::authorizeSecurityGroupCallable(const AuthorizeSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AuthorizeSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->authorizeSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::AuthorizeSecurityGroupEgressOutcome EcsClient::authorizeSecurityGroupEgress(const AuthorizeSecurityGroupEgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AuthorizeSecurityGroupEgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AuthorizeSecurityGroupEgressOutcome(AuthorizeSecurityGroupEgressResult(outcome.result()));
	else
		return AuthorizeSecurityGroupEgressOutcome(outcome.error());
}

void EcsClient::authorizeSecurityGroupEgressAsync(const AuthorizeSecurityGroupEgressRequest& request, const AuthorizeSecurityGroupEgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, authorizeSecurityGroupEgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::AuthorizeSecurityGroupEgressOutcomeCallable EcsClient::authorizeSecurityGroupEgressCallable(const AuthorizeSecurityGroupEgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AuthorizeSecurityGroupEgressOutcome()>>(
			[this, request]()
			{
			return this->authorizeSecurityGroupEgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CancelAutoSnapshotPolicyOutcome EcsClient::cancelAutoSnapshotPolicy(const CancelAutoSnapshotPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelAutoSnapshotPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelAutoSnapshotPolicyOutcome(CancelAutoSnapshotPolicyResult(outcome.result()));
	else
		return CancelAutoSnapshotPolicyOutcome(outcome.error());
}

void EcsClient::cancelAutoSnapshotPolicyAsync(const CancelAutoSnapshotPolicyRequest& request, const CancelAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelAutoSnapshotPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CancelAutoSnapshotPolicyOutcomeCallable EcsClient::cancelAutoSnapshotPolicyCallable(const CancelAutoSnapshotPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelAutoSnapshotPolicyOutcome()>>(
			[this, request]()
			{
			return this->cancelAutoSnapshotPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CancelCopyImageOutcome EcsClient::cancelCopyImage(const CancelCopyImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelCopyImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelCopyImageOutcome(CancelCopyImageResult(outcome.result()));
	else
		return CancelCopyImageOutcome(outcome.error());
}

void EcsClient::cancelCopyImageAsync(const CancelCopyImageRequest& request, const CancelCopyImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelCopyImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CancelCopyImageOutcomeCallable EcsClient::cancelCopyImageCallable(const CancelCopyImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelCopyImageOutcome()>>(
			[this, request]()
			{
			return this->cancelCopyImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CancelImagePipelineExecutionOutcome EcsClient::cancelImagePipelineExecution(const CancelImagePipelineExecutionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelImagePipelineExecutionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelImagePipelineExecutionOutcome(CancelImagePipelineExecutionResult(outcome.result()));
	else
		return CancelImagePipelineExecutionOutcome(outcome.error());
}

void EcsClient::cancelImagePipelineExecutionAsync(const CancelImagePipelineExecutionRequest& request, const CancelImagePipelineExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelImagePipelineExecution(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CancelImagePipelineExecutionOutcomeCallable EcsClient::cancelImagePipelineExecutionCallable(const CancelImagePipelineExecutionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelImagePipelineExecutionOutcome()>>(
			[this, request]()
			{
			return this->cancelImagePipelineExecution(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CancelPhysicalConnectionOutcome EcsClient::cancelPhysicalConnection(const CancelPhysicalConnectionRequest &request) const
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

void EcsClient::cancelPhysicalConnectionAsync(const CancelPhysicalConnectionRequest& request, const CancelPhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelPhysicalConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CancelPhysicalConnectionOutcomeCallable EcsClient::cancelPhysicalConnectionCallable(const CancelPhysicalConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelPhysicalConnectionOutcome()>>(
			[this, request]()
			{
			return this->cancelPhysicalConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CancelSimulatedSystemEventsOutcome EcsClient::cancelSimulatedSystemEvents(const CancelSimulatedSystemEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelSimulatedSystemEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelSimulatedSystemEventsOutcome(CancelSimulatedSystemEventsResult(outcome.result()));
	else
		return CancelSimulatedSystemEventsOutcome(outcome.error());
}

void EcsClient::cancelSimulatedSystemEventsAsync(const CancelSimulatedSystemEventsRequest& request, const CancelSimulatedSystemEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelSimulatedSystemEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CancelSimulatedSystemEventsOutcomeCallable EcsClient::cancelSimulatedSystemEventsCallable(const CancelSimulatedSystemEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelSimulatedSystemEventsOutcome()>>(
			[this, request]()
			{
			return this->cancelSimulatedSystemEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CancelTaskOutcome EcsClient::cancelTask(const CancelTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelTaskOutcome(CancelTaskResult(outcome.result()));
	else
		return CancelTaskOutcome(outcome.error());
}

void EcsClient::cancelTaskAsync(const CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CancelTaskOutcomeCallable EcsClient::cancelTaskCallable(const CancelTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelTaskOutcome()>>(
			[this, request]()
			{
			return this->cancelTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ConnectRouterInterfaceOutcome EcsClient::connectRouterInterface(const ConnectRouterInterfaceRequest &request) const
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

void EcsClient::connectRouterInterfaceAsync(const ConnectRouterInterfaceRequest& request, const ConnectRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, connectRouterInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ConnectRouterInterfaceOutcomeCallable EcsClient::connectRouterInterfaceCallable(const ConnectRouterInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConnectRouterInterfaceOutcome()>>(
			[this, request]()
			{
			return this->connectRouterInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ConvertNatPublicIpToEipOutcome EcsClient::convertNatPublicIpToEip(const ConvertNatPublicIpToEipRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConvertNatPublicIpToEipOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConvertNatPublicIpToEipOutcome(ConvertNatPublicIpToEipResult(outcome.result()));
	else
		return ConvertNatPublicIpToEipOutcome(outcome.error());
}

void EcsClient::convertNatPublicIpToEipAsync(const ConvertNatPublicIpToEipRequest& request, const ConvertNatPublicIpToEipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, convertNatPublicIpToEip(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ConvertNatPublicIpToEipOutcomeCallable EcsClient::convertNatPublicIpToEipCallable(const ConvertNatPublicIpToEipRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConvertNatPublicIpToEipOutcome()>>(
			[this, request]()
			{
			return this->convertNatPublicIpToEip(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CopyImageOutcome EcsClient::copyImage(const CopyImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CopyImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CopyImageOutcome(CopyImageResult(outcome.result()));
	else
		return CopyImageOutcome(outcome.error());
}

void EcsClient::copyImageAsync(const CopyImageRequest& request, const CopyImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, copyImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CopyImageOutcomeCallable EcsClient::copyImageCallable(const CopyImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CopyImageOutcome()>>(
			[this, request]()
			{
			return this->copyImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CopySnapshotOutcome EcsClient::copySnapshot(const CopySnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CopySnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CopySnapshotOutcome(CopySnapshotResult(outcome.result()));
	else
		return CopySnapshotOutcome(outcome.error());
}

void EcsClient::copySnapshotAsync(const CopySnapshotRequest& request, const CopySnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, copySnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CopySnapshotOutcomeCallable EcsClient::copySnapshotCallable(const CopySnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CopySnapshotOutcome()>>(
			[this, request]()
			{
			return this->copySnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateActivationOutcome EcsClient::createActivation(const CreateActivationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateActivationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateActivationOutcome(CreateActivationResult(outcome.result()));
	else
		return CreateActivationOutcome(outcome.error());
}

void EcsClient::createActivationAsync(const CreateActivationRequest& request, const CreateActivationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createActivation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateActivationOutcomeCallable EcsClient::createActivationCallable(const CreateActivationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateActivationOutcome()>>(
			[this, request]()
			{
			return this->createActivation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateAutoProvisioningGroupOutcome EcsClient::createAutoProvisioningGroup(const CreateAutoProvisioningGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAutoProvisioningGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAutoProvisioningGroupOutcome(CreateAutoProvisioningGroupResult(outcome.result()));
	else
		return CreateAutoProvisioningGroupOutcome(outcome.error());
}

void EcsClient::createAutoProvisioningGroupAsync(const CreateAutoProvisioningGroupRequest& request, const CreateAutoProvisioningGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAutoProvisioningGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateAutoProvisioningGroupOutcomeCallable EcsClient::createAutoProvisioningGroupCallable(const CreateAutoProvisioningGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAutoProvisioningGroupOutcome()>>(
			[this, request]()
			{
			return this->createAutoProvisioningGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateAutoSnapshotPolicyOutcome EcsClient::createAutoSnapshotPolicy(const CreateAutoSnapshotPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAutoSnapshotPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAutoSnapshotPolicyOutcome(CreateAutoSnapshotPolicyResult(outcome.result()));
	else
		return CreateAutoSnapshotPolicyOutcome(outcome.error());
}

void EcsClient::createAutoSnapshotPolicyAsync(const CreateAutoSnapshotPolicyRequest& request, const CreateAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAutoSnapshotPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateAutoSnapshotPolicyOutcomeCallable EcsClient::createAutoSnapshotPolicyCallable(const CreateAutoSnapshotPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAutoSnapshotPolicyOutcome()>>(
			[this, request]()
			{
			return this->createAutoSnapshotPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateCapacityReservationOutcome EcsClient::createCapacityReservation(const CreateCapacityReservationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCapacityReservationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCapacityReservationOutcome(CreateCapacityReservationResult(outcome.result()));
	else
		return CreateCapacityReservationOutcome(outcome.error());
}

void EcsClient::createCapacityReservationAsync(const CreateCapacityReservationRequest& request, const CreateCapacityReservationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCapacityReservation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateCapacityReservationOutcomeCallable EcsClient::createCapacityReservationCallable(const CreateCapacityReservationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCapacityReservationOutcome()>>(
			[this, request]()
			{
			return this->createCapacityReservation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateCommandOutcome EcsClient::createCommand(const CreateCommandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCommandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCommandOutcome(CreateCommandResult(outcome.result()));
	else
		return CreateCommandOutcome(outcome.error());
}

void EcsClient::createCommandAsync(const CreateCommandRequest& request, const CreateCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCommand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateCommandOutcomeCallable EcsClient::createCommandCallable(const CreateCommandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCommandOutcome()>>(
			[this, request]()
			{
			return this->createCommand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateDedicatedHostClusterOutcome EcsClient::createDedicatedHostCluster(const CreateDedicatedHostClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDedicatedHostClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDedicatedHostClusterOutcome(CreateDedicatedHostClusterResult(outcome.result()));
	else
		return CreateDedicatedHostClusterOutcome(outcome.error());
}

void EcsClient::createDedicatedHostClusterAsync(const CreateDedicatedHostClusterRequest& request, const CreateDedicatedHostClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDedicatedHostCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateDedicatedHostClusterOutcomeCallable EcsClient::createDedicatedHostClusterCallable(const CreateDedicatedHostClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDedicatedHostClusterOutcome()>>(
			[this, request]()
			{
			return this->createDedicatedHostCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateDeploymentSetOutcome EcsClient::createDeploymentSet(const CreateDeploymentSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDeploymentSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDeploymentSetOutcome(CreateDeploymentSetResult(outcome.result()));
	else
		return CreateDeploymentSetOutcome(outcome.error());
}

void EcsClient::createDeploymentSetAsync(const CreateDeploymentSetRequest& request, const CreateDeploymentSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDeploymentSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateDeploymentSetOutcomeCallable EcsClient::createDeploymentSetCallable(const CreateDeploymentSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDeploymentSetOutcome()>>(
			[this, request]()
			{
			return this->createDeploymentSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateDiagnosticMetricSetOutcome EcsClient::createDiagnosticMetricSet(const CreateDiagnosticMetricSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDiagnosticMetricSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDiagnosticMetricSetOutcome(CreateDiagnosticMetricSetResult(outcome.result()));
	else
		return CreateDiagnosticMetricSetOutcome(outcome.error());
}

void EcsClient::createDiagnosticMetricSetAsync(const CreateDiagnosticMetricSetRequest& request, const CreateDiagnosticMetricSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDiagnosticMetricSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateDiagnosticMetricSetOutcomeCallable EcsClient::createDiagnosticMetricSetCallable(const CreateDiagnosticMetricSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDiagnosticMetricSetOutcome()>>(
			[this, request]()
			{
			return this->createDiagnosticMetricSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateDiagnosticReportOutcome EcsClient::createDiagnosticReport(const CreateDiagnosticReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDiagnosticReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDiagnosticReportOutcome(CreateDiagnosticReportResult(outcome.result()));
	else
		return CreateDiagnosticReportOutcome(outcome.error());
}

void EcsClient::createDiagnosticReportAsync(const CreateDiagnosticReportRequest& request, const CreateDiagnosticReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDiagnosticReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateDiagnosticReportOutcomeCallable EcsClient::createDiagnosticReportCallable(const CreateDiagnosticReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDiagnosticReportOutcome()>>(
			[this, request]()
			{
			return this->createDiagnosticReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateDiskOutcome EcsClient::createDisk(const CreateDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDiskOutcome(CreateDiskResult(outcome.result()));
	else
		return CreateDiskOutcome(outcome.error());
}

void EcsClient::createDiskAsync(const CreateDiskRequest& request, const CreateDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateDiskOutcomeCallable EcsClient::createDiskCallable(const CreateDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDiskOutcome()>>(
			[this, request]()
			{
			return this->createDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateElasticityAssuranceOutcome EcsClient::createElasticityAssurance(const CreateElasticityAssuranceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateElasticityAssuranceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateElasticityAssuranceOutcome(CreateElasticityAssuranceResult(outcome.result()));
	else
		return CreateElasticityAssuranceOutcome(outcome.error());
}

void EcsClient::createElasticityAssuranceAsync(const CreateElasticityAssuranceRequest& request, const CreateElasticityAssuranceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createElasticityAssurance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateElasticityAssuranceOutcomeCallable EcsClient::createElasticityAssuranceCallable(const CreateElasticityAssuranceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateElasticityAssuranceOutcome()>>(
			[this, request]()
			{
			return this->createElasticityAssurance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateForwardEntryOutcome EcsClient::createForwardEntry(const CreateForwardEntryRequest &request) const
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

void EcsClient::createForwardEntryAsync(const CreateForwardEntryRequest& request, const CreateForwardEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createForwardEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateForwardEntryOutcomeCallable EcsClient::createForwardEntryCallable(const CreateForwardEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateForwardEntryOutcome()>>(
			[this, request]()
			{
			return this->createForwardEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateHaVipOutcome EcsClient::createHaVip(const CreateHaVipRequest &request) const
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

void EcsClient::createHaVipAsync(const CreateHaVipRequest& request, const CreateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createHaVip(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateHaVipOutcomeCallable EcsClient::createHaVipCallable(const CreateHaVipRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateHaVipOutcome()>>(
			[this, request]()
			{
			return this->createHaVip(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateHpcClusterOutcome EcsClient::createHpcCluster(const CreateHpcClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateHpcClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateHpcClusterOutcome(CreateHpcClusterResult(outcome.result()));
	else
		return CreateHpcClusterOutcome(outcome.error());
}

void EcsClient::createHpcClusterAsync(const CreateHpcClusterRequest& request, const CreateHpcClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createHpcCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateHpcClusterOutcomeCallable EcsClient::createHpcClusterCallable(const CreateHpcClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateHpcClusterOutcome()>>(
			[this, request]()
			{
			return this->createHpcCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateImageOutcome EcsClient::createImage(const CreateImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateImageOutcome(CreateImageResult(outcome.result()));
	else
		return CreateImageOutcome(outcome.error());
}

void EcsClient::createImageAsync(const CreateImageRequest& request, const CreateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateImageOutcomeCallable EcsClient::createImageCallable(const CreateImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateImageOutcome()>>(
			[this, request]()
			{
			return this->createImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateImageComponentOutcome EcsClient::createImageComponent(const CreateImageComponentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateImageComponentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateImageComponentOutcome(CreateImageComponentResult(outcome.result()));
	else
		return CreateImageComponentOutcome(outcome.error());
}

void EcsClient::createImageComponentAsync(const CreateImageComponentRequest& request, const CreateImageComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createImageComponent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateImageComponentOutcomeCallable EcsClient::createImageComponentCallable(const CreateImageComponentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateImageComponentOutcome()>>(
			[this, request]()
			{
			return this->createImageComponent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateImagePipelineOutcome EcsClient::createImagePipeline(const CreateImagePipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateImagePipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateImagePipelineOutcome(CreateImagePipelineResult(outcome.result()));
	else
		return CreateImagePipelineOutcome(outcome.error());
}

void EcsClient::createImagePipelineAsync(const CreateImagePipelineRequest& request, const CreateImagePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createImagePipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateImagePipelineOutcomeCallable EcsClient::createImagePipelineCallable(const CreateImagePipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateImagePipelineOutcome()>>(
			[this, request]()
			{
			return this->createImagePipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateInstanceOutcome EcsClient::createInstance(const CreateInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateInstanceOutcome(CreateInstanceResult(outcome.result()));
	else
		return CreateInstanceOutcome(outcome.error());
}

void EcsClient::createInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateInstanceOutcomeCallable EcsClient::createInstanceCallable(const CreateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
			[this, request]()
			{
			return this->createInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateKeyPairOutcome EcsClient::createKeyPair(const CreateKeyPairRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateKeyPairOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateKeyPairOutcome(CreateKeyPairResult(outcome.result()));
	else
		return CreateKeyPairOutcome(outcome.error());
}

void EcsClient::createKeyPairAsync(const CreateKeyPairRequest& request, const CreateKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createKeyPair(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateKeyPairOutcomeCallable EcsClient::createKeyPairCallable(const CreateKeyPairRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateKeyPairOutcome()>>(
			[this, request]()
			{
			return this->createKeyPair(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateLaunchTemplateOutcome EcsClient::createLaunchTemplate(const CreateLaunchTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLaunchTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLaunchTemplateOutcome(CreateLaunchTemplateResult(outcome.result()));
	else
		return CreateLaunchTemplateOutcome(outcome.error());
}

void EcsClient::createLaunchTemplateAsync(const CreateLaunchTemplateRequest& request, const CreateLaunchTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLaunchTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateLaunchTemplateOutcomeCallable EcsClient::createLaunchTemplateCallable(const CreateLaunchTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLaunchTemplateOutcome()>>(
			[this, request]()
			{
			return this->createLaunchTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateLaunchTemplateVersionOutcome EcsClient::createLaunchTemplateVersion(const CreateLaunchTemplateVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLaunchTemplateVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLaunchTemplateVersionOutcome(CreateLaunchTemplateVersionResult(outcome.result()));
	else
		return CreateLaunchTemplateVersionOutcome(outcome.error());
}

void EcsClient::createLaunchTemplateVersionAsync(const CreateLaunchTemplateVersionRequest& request, const CreateLaunchTemplateVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLaunchTemplateVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateLaunchTemplateVersionOutcomeCallable EcsClient::createLaunchTemplateVersionCallable(const CreateLaunchTemplateVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLaunchTemplateVersionOutcome()>>(
			[this, request]()
			{
			return this->createLaunchTemplateVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateNatGatewayOutcome EcsClient::createNatGateway(const CreateNatGatewayRequest &request) const
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

void EcsClient::createNatGatewayAsync(const CreateNatGatewayRequest& request, const CreateNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNatGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateNatGatewayOutcomeCallable EcsClient::createNatGatewayCallable(const CreateNatGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNatGatewayOutcome()>>(
			[this, request]()
			{
			return this->createNatGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateNetworkInterfaceOutcome EcsClient::createNetworkInterface(const CreateNetworkInterfaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNetworkInterfaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNetworkInterfaceOutcome(CreateNetworkInterfaceResult(outcome.result()));
	else
		return CreateNetworkInterfaceOutcome(outcome.error());
}

void EcsClient::createNetworkInterfaceAsync(const CreateNetworkInterfaceRequest& request, const CreateNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNetworkInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateNetworkInterfaceOutcomeCallable EcsClient::createNetworkInterfaceCallable(const CreateNetworkInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNetworkInterfaceOutcome()>>(
			[this, request]()
			{
			return this->createNetworkInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateNetworkInterfacePermissionOutcome EcsClient::createNetworkInterfacePermission(const CreateNetworkInterfacePermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNetworkInterfacePermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNetworkInterfacePermissionOutcome(CreateNetworkInterfacePermissionResult(outcome.result()));
	else
		return CreateNetworkInterfacePermissionOutcome(outcome.error());
}

void EcsClient::createNetworkInterfacePermissionAsync(const CreateNetworkInterfacePermissionRequest& request, const CreateNetworkInterfacePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNetworkInterfacePermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateNetworkInterfacePermissionOutcomeCallable EcsClient::createNetworkInterfacePermissionCallable(const CreateNetworkInterfacePermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNetworkInterfacePermissionOutcome()>>(
			[this, request]()
			{
			return this->createNetworkInterfacePermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreatePhysicalConnectionOutcome EcsClient::createPhysicalConnection(const CreatePhysicalConnectionRequest &request) const
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

void EcsClient::createPhysicalConnectionAsync(const CreatePhysicalConnectionRequest& request, const CreatePhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPhysicalConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreatePhysicalConnectionOutcomeCallable EcsClient::createPhysicalConnectionCallable(const CreatePhysicalConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePhysicalConnectionOutcome()>>(
			[this, request]()
			{
			return this->createPhysicalConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreatePortRangeListOutcome EcsClient::createPortRangeList(const CreatePortRangeListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePortRangeListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePortRangeListOutcome(CreatePortRangeListResult(outcome.result()));
	else
		return CreatePortRangeListOutcome(outcome.error());
}

void EcsClient::createPortRangeListAsync(const CreatePortRangeListRequest& request, const CreatePortRangeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPortRangeList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreatePortRangeListOutcomeCallable EcsClient::createPortRangeListCallable(const CreatePortRangeListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePortRangeListOutcome()>>(
			[this, request]()
			{
			return this->createPortRangeList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreatePrefixListOutcome EcsClient::createPrefixList(const CreatePrefixListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePrefixListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePrefixListOutcome(CreatePrefixListResult(outcome.result()));
	else
		return CreatePrefixListOutcome(outcome.error());
}

void EcsClient::createPrefixListAsync(const CreatePrefixListRequest& request, const CreatePrefixListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPrefixList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreatePrefixListOutcomeCallable EcsClient::createPrefixListCallable(const CreatePrefixListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePrefixListOutcome()>>(
			[this, request]()
			{
			return this->createPrefixList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateRouteEntryOutcome EcsClient::createRouteEntry(const CreateRouteEntryRequest &request) const
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

void EcsClient::createRouteEntryAsync(const CreateRouteEntryRequest& request, const CreateRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRouteEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateRouteEntryOutcomeCallable EcsClient::createRouteEntryCallable(const CreateRouteEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRouteEntryOutcome()>>(
			[this, request]()
			{
			return this->createRouteEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateRouterInterfaceOutcome EcsClient::createRouterInterface(const CreateRouterInterfaceRequest &request) const
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

void EcsClient::createRouterInterfaceAsync(const CreateRouterInterfaceRequest& request, const CreateRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRouterInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateRouterInterfaceOutcomeCallable EcsClient::createRouterInterfaceCallable(const CreateRouterInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRouterInterfaceOutcome()>>(
			[this, request]()
			{
			return this->createRouterInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateSavingsPlanOutcome EcsClient::createSavingsPlan(const CreateSavingsPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSavingsPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSavingsPlanOutcome(CreateSavingsPlanResult(outcome.result()));
	else
		return CreateSavingsPlanOutcome(outcome.error());
}

void EcsClient::createSavingsPlanAsync(const CreateSavingsPlanRequest& request, const CreateSavingsPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSavingsPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateSavingsPlanOutcomeCallable EcsClient::createSavingsPlanCallable(const CreateSavingsPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSavingsPlanOutcome()>>(
			[this, request]()
			{
			return this->createSavingsPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateSecurityGroupOutcome EcsClient::createSecurityGroup(const CreateSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSecurityGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSecurityGroupOutcome(CreateSecurityGroupResult(outcome.result()));
	else
		return CreateSecurityGroupOutcome(outcome.error());
}

void EcsClient::createSecurityGroupAsync(const CreateSecurityGroupRequest& request, const CreateSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateSecurityGroupOutcomeCallable EcsClient::createSecurityGroupCallable(const CreateSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->createSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateSimulatedSystemEventsOutcome EcsClient::createSimulatedSystemEvents(const CreateSimulatedSystemEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSimulatedSystemEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSimulatedSystemEventsOutcome(CreateSimulatedSystemEventsResult(outcome.result()));
	else
		return CreateSimulatedSystemEventsOutcome(outcome.error());
}

void EcsClient::createSimulatedSystemEventsAsync(const CreateSimulatedSystemEventsRequest& request, const CreateSimulatedSystemEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSimulatedSystemEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateSimulatedSystemEventsOutcomeCallable EcsClient::createSimulatedSystemEventsCallable(const CreateSimulatedSystemEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSimulatedSystemEventsOutcome()>>(
			[this, request]()
			{
			return this->createSimulatedSystemEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateSnapshotOutcome EcsClient::createSnapshot(const CreateSnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSnapshotOutcome(CreateSnapshotResult(outcome.result()));
	else
		return CreateSnapshotOutcome(outcome.error());
}

void EcsClient::createSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateSnapshotOutcomeCallable EcsClient::createSnapshotCallable(const CreateSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSnapshotOutcome()>>(
			[this, request]()
			{
			return this->createSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateSnapshotGroupOutcome EcsClient::createSnapshotGroup(const CreateSnapshotGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSnapshotGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSnapshotGroupOutcome(CreateSnapshotGroupResult(outcome.result()));
	else
		return CreateSnapshotGroupOutcome(outcome.error());
}

void EcsClient::createSnapshotGroupAsync(const CreateSnapshotGroupRequest& request, const CreateSnapshotGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSnapshotGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateSnapshotGroupOutcomeCallable EcsClient::createSnapshotGroupCallable(const CreateSnapshotGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSnapshotGroupOutcome()>>(
			[this, request]()
			{
			return this->createSnapshotGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateStorageSetOutcome EcsClient::createStorageSet(const CreateStorageSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateStorageSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateStorageSetOutcome(CreateStorageSetResult(outcome.result()));
	else
		return CreateStorageSetOutcome(outcome.error());
}

void EcsClient::createStorageSetAsync(const CreateStorageSetRequest& request, const CreateStorageSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createStorageSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateStorageSetOutcomeCallable EcsClient::createStorageSetCallable(const CreateStorageSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateStorageSetOutcome()>>(
			[this, request]()
			{
			return this->createStorageSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateVSwitchOutcome EcsClient::createVSwitch(const CreateVSwitchRequest &request) const
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

void EcsClient::createVSwitchAsync(const CreateVSwitchRequest& request, const CreateVSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVSwitch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateVSwitchOutcomeCallable EcsClient::createVSwitchCallable(const CreateVSwitchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVSwitchOutcome()>>(
			[this, request]()
			{
			return this->createVSwitch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateVirtualBorderRouterOutcome EcsClient::createVirtualBorderRouter(const CreateVirtualBorderRouterRequest &request) const
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

void EcsClient::createVirtualBorderRouterAsync(const CreateVirtualBorderRouterRequest& request, const CreateVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVirtualBorderRouter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateVirtualBorderRouterOutcomeCallable EcsClient::createVirtualBorderRouterCallable(const CreateVirtualBorderRouterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVirtualBorderRouterOutcome()>>(
			[this, request]()
			{
			return this->createVirtualBorderRouter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateVpcOutcome EcsClient::createVpc(const CreateVpcRequest &request) const
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

void EcsClient::createVpcAsync(const CreateVpcRequest& request, const CreateVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVpc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CreateVpcOutcomeCallable EcsClient::createVpcCallable(const CreateVpcRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVpcOutcome()>>(
			[this, request]()
			{
			return this->createVpc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeactivateRouterInterfaceOutcome EcsClient::deactivateRouterInterface(const DeactivateRouterInterfaceRequest &request) const
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

void EcsClient::deactivateRouterInterfaceAsync(const DeactivateRouterInterfaceRequest& request, const DeactivateRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deactivateRouterInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeactivateRouterInterfaceOutcomeCallable EcsClient::deactivateRouterInterfaceCallable(const DeactivateRouterInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeactivateRouterInterfaceOutcome()>>(
			[this, request]()
			{
			return this->deactivateRouterInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteActivationOutcome EcsClient::deleteActivation(const DeleteActivationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteActivationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteActivationOutcome(DeleteActivationResult(outcome.result()));
	else
		return DeleteActivationOutcome(outcome.error());
}

void EcsClient::deleteActivationAsync(const DeleteActivationRequest& request, const DeleteActivationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteActivation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteActivationOutcomeCallable EcsClient::deleteActivationCallable(const DeleteActivationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteActivationOutcome()>>(
			[this, request]()
			{
			return this->deleteActivation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteAutoProvisioningGroupOutcome EcsClient::deleteAutoProvisioningGroup(const DeleteAutoProvisioningGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAutoProvisioningGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAutoProvisioningGroupOutcome(DeleteAutoProvisioningGroupResult(outcome.result()));
	else
		return DeleteAutoProvisioningGroupOutcome(outcome.error());
}

void EcsClient::deleteAutoProvisioningGroupAsync(const DeleteAutoProvisioningGroupRequest& request, const DeleteAutoProvisioningGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAutoProvisioningGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteAutoProvisioningGroupOutcomeCallable EcsClient::deleteAutoProvisioningGroupCallable(const DeleteAutoProvisioningGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAutoProvisioningGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteAutoProvisioningGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteAutoSnapshotPolicyOutcome EcsClient::deleteAutoSnapshotPolicy(const DeleteAutoSnapshotPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAutoSnapshotPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAutoSnapshotPolicyOutcome(DeleteAutoSnapshotPolicyResult(outcome.result()));
	else
		return DeleteAutoSnapshotPolicyOutcome(outcome.error());
}

void EcsClient::deleteAutoSnapshotPolicyAsync(const DeleteAutoSnapshotPolicyRequest& request, const DeleteAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAutoSnapshotPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteAutoSnapshotPolicyOutcomeCallable EcsClient::deleteAutoSnapshotPolicyCallable(const DeleteAutoSnapshotPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAutoSnapshotPolicyOutcome()>>(
			[this, request]()
			{
			return this->deleteAutoSnapshotPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteBandwidthPackageOutcome EcsClient::deleteBandwidthPackage(const DeleteBandwidthPackageRequest &request) const
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

void EcsClient::deleteBandwidthPackageAsync(const DeleteBandwidthPackageRequest& request, const DeleteBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBandwidthPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteBandwidthPackageOutcomeCallable EcsClient::deleteBandwidthPackageCallable(const DeleteBandwidthPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBandwidthPackageOutcome()>>(
			[this, request]()
			{
			return this->deleteBandwidthPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteCommandOutcome EcsClient::deleteCommand(const DeleteCommandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCommandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCommandOutcome(DeleteCommandResult(outcome.result()));
	else
		return DeleteCommandOutcome(outcome.error());
}

void EcsClient::deleteCommandAsync(const DeleteCommandRequest& request, const DeleteCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCommand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteCommandOutcomeCallable EcsClient::deleteCommandCallable(const DeleteCommandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCommandOutcome()>>(
			[this, request]()
			{
			return this->deleteCommand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteDedicatedHostClusterOutcome EcsClient::deleteDedicatedHostCluster(const DeleteDedicatedHostClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDedicatedHostClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDedicatedHostClusterOutcome(DeleteDedicatedHostClusterResult(outcome.result()));
	else
		return DeleteDedicatedHostClusterOutcome(outcome.error());
}

void EcsClient::deleteDedicatedHostClusterAsync(const DeleteDedicatedHostClusterRequest& request, const DeleteDedicatedHostClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDedicatedHostCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteDedicatedHostClusterOutcomeCallable EcsClient::deleteDedicatedHostClusterCallable(const DeleteDedicatedHostClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDedicatedHostClusterOutcome()>>(
			[this, request]()
			{
			return this->deleteDedicatedHostCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteDeploymentSetOutcome EcsClient::deleteDeploymentSet(const DeleteDeploymentSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDeploymentSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDeploymentSetOutcome(DeleteDeploymentSetResult(outcome.result()));
	else
		return DeleteDeploymentSetOutcome(outcome.error());
}

void EcsClient::deleteDeploymentSetAsync(const DeleteDeploymentSetRequest& request, const DeleteDeploymentSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDeploymentSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteDeploymentSetOutcomeCallable EcsClient::deleteDeploymentSetCallable(const DeleteDeploymentSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDeploymentSetOutcome()>>(
			[this, request]()
			{
			return this->deleteDeploymentSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteDiagnosticMetricSetsOutcome EcsClient::deleteDiagnosticMetricSets(const DeleteDiagnosticMetricSetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDiagnosticMetricSetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDiagnosticMetricSetsOutcome(DeleteDiagnosticMetricSetsResult(outcome.result()));
	else
		return DeleteDiagnosticMetricSetsOutcome(outcome.error());
}

void EcsClient::deleteDiagnosticMetricSetsAsync(const DeleteDiagnosticMetricSetsRequest& request, const DeleteDiagnosticMetricSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDiagnosticMetricSets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteDiagnosticMetricSetsOutcomeCallable EcsClient::deleteDiagnosticMetricSetsCallable(const DeleteDiagnosticMetricSetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDiagnosticMetricSetsOutcome()>>(
			[this, request]()
			{
			return this->deleteDiagnosticMetricSets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteDiagnosticReportsOutcome EcsClient::deleteDiagnosticReports(const DeleteDiagnosticReportsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDiagnosticReportsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDiagnosticReportsOutcome(DeleteDiagnosticReportsResult(outcome.result()));
	else
		return DeleteDiagnosticReportsOutcome(outcome.error());
}

void EcsClient::deleteDiagnosticReportsAsync(const DeleteDiagnosticReportsRequest& request, const DeleteDiagnosticReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDiagnosticReports(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteDiagnosticReportsOutcomeCallable EcsClient::deleteDiagnosticReportsCallable(const DeleteDiagnosticReportsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDiagnosticReportsOutcome()>>(
			[this, request]()
			{
			return this->deleteDiagnosticReports(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteDiskOutcome EcsClient::deleteDisk(const DeleteDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDiskOutcome(DeleteDiskResult(outcome.result()));
	else
		return DeleteDiskOutcome(outcome.error());
}

void EcsClient::deleteDiskAsync(const DeleteDiskRequest& request, const DeleteDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteDiskOutcomeCallable EcsClient::deleteDiskCallable(const DeleteDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDiskOutcome()>>(
			[this, request]()
			{
			return this->deleteDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteForwardEntryOutcome EcsClient::deleteForwardEntry(const DeleteForwardEntryRequest &request) const
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

void EcsClient::deleteForwardEntryAsync(const DeleteForwardEntryRequest& request, const DeleteForwardEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteForwardEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteForwardEntryOutcomeCallable EcsClient::deleteForwardEntryCallable(const DeleteForwardEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteForwardEntryOutcome()>>(
			[this, request]()
			{
			return this->deleteForwardEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteHaVipOutcome EcsClient::deleteHaVip(const DeleteHaVipRequest &request) const
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

void EcsClient::deleteHaVipAsync(const DeleteHaVipRequest& request, const DeleteHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteHaVip(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteHaVipOutcomeCallable EcsClient::deleteHaVipCallable(const DeleteHaVipRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteHaVipOutcome()>>(
			[this, request]()
			{
			return this->deleteHaVip(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteHpcClusterOutcome EcsClient::deleteHpcCluster(const DeleteHpcClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteHpcClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteHpcClusterOutcome(DeleteHpcClusterResult(outcome.result()));
	else
		return DeleteHpcClusterOutcome(outcome.error());
}

void EcsClient::deleteHpcClusterAsync(const DeleteHpcClusterRequest& request, const DeleteHpcClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteHpcCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteHpcClusterOutcomeCallable EcsClient::deleteHpcClusterCallable(const DeleteHpcClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteHpcClusterOutcome()>>(
			[this, request]()
			{
			return this->deleteHpcCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteImageOutcome EcsClient::deleteImage(const DeleteImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteImageOutcome(DeleteImageResult(outcome.result()));
	else
		return DeleteImageOutcome(outcome.error());
}

void EcsClient::deleteImageAsync(const DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteImageOutcomeCallable EcsClient::deleteImageCallable(const DeleteImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteImageOutcome()>>(
			[this, request]()
			{
			return this->deleteImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteImageComponentOutcome EcsClient::deleteImageComponent(const DeleteImageComponentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteImageComponentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteImageComponentOutcome(DeleteImageComponentResult(outcome.result()));
	else
		return DeleteImageComponentOutcome(outcome.error());
}

void EcsClient::deleteImageComponentAsync(const DeleteImageComponentRequest& request, const DeleteImageComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteImageComponent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteImageComponentOutcomeCallable EcsClient::deleteImageComponentCallable(const DeleteImageComponentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteImageComponentOutcome()>>(
			[this, request]()
			{
			return this->deleteImageComponent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteImagePipelineOutcome EcsClient::deleteImagePipeline(const DeleteImagePipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteImagePipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteImagePipelineOutcome(DeleteImagePipelineResult(outcome.result()));
	else
		return DeleteImagePipelineOutcome(outcome.error());
}

void EcsClient::deleteImagePipelineAsync(const DeleteImagePipelineRequest& request, const DeleteImagePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteImagePipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteImagePipelineOutcomeCallable EcsClient::deleteImagePipelineCallable(const DeleteImagePipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteImagePipelineOutcome()>>(
			[this, request]()
			{
			return this->deleteImagePipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteInstanceOutcome EcsClient::deleteInstance(const DeleteInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteInstanceOutcome(DeleteInstanceResult(outcome.result()));
	else
		return DeleteInstanceOutcome(outcome.error());
}

void EcsClient::deleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteInstanceOutcomeCallable EcsClient::deleteInstanceCallable(const DeleteInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteInstancesOutcome EcsClient::deleteInstances(const DeleteInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteInstancesOutcome(DeleteInstancesResult(outcome.result()));
	else
		return DeleteInstancesOutcome(outcome.error());
}

void EcsClient::deleteInstancesAsync(const DeleteInstancesRequest& request, const DeleteInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteInstancesOutcomeCallable EcsClient::deleteInstancesCallable(const DeleteInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteInstancesOutcome()>>(
			[this, request]()
			{
			return this->deleteInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteKeyPairsOutcome EcsClient::deleteKeyPairs(const DeleteKeyPairsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteKeyPairsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteKeyPairsOutcome(DeleteKeyPairsResult(outcome.result()));
	else
		return DeleteKeyPairsOutcome(outcome.error());
}

void EcsClient::deleteKeyPairsAsync(const DeleteKeyPairsRequest& request, const DeleteKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteKeyPairs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteKeyPairsOutcomeCallable EcsClient::deleteKeyPairsCallable(const DeleteKeyPairsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteKeyPairsOutcome()>>(
			[this, request]()
			{
			return this->deleteKeyPairs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteLaunchTemplateOutcome EcsClient::deleteLaunchTemplate(const DeleteLaunchTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLaunchTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLaunchTemplateOutcome(DeleteLaunchTemplateResult(outcome.result()));
	else
		return DeleteLaunchTemplateOutcome(outcome.error());
}

void EcsClient::deleteLaunchTemplateAsync(const DeleteLaunchTemplateRequest& request, const DeleteLaunchTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLaunchTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteLaunchTemplateOutcomeCallable EcsClient::deleteLaunchTemplateCallable(const DeleteLaunchTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLaunchTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteLaunchTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteLaunchTemplateVersionOutcome EcsClient::deleteLaunchTemplateVersion(const DeleteLaunchTemplateVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLaunchTemplateVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLaunchTemplateVersionOutcome(DeleteLaunchTemplateVersionResult(outcome.result()));
	else
		return DeleteLaunchTemplateVersionOutcome(outcome.error());
}

void EcsClient::deleteLaunchTemplateVersionAsync(const DeleteLaunchTemplateVersionRequest& request, const DeleteLaunchTemplateVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLaunchTemplateVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteLaunchTemplateVersionOutcomeCallable EcsClient::deleteLaunchTemplateVersionCallable(const DeleteLaunchTemplateVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLaunchTemplateVersionOutcome()>>(
			[this, request]()
			{
			return this->deleteLaunchTemplateVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteNatGatewayOutcome EcsClient::deleteNatGateway(const DeleteNatGatewayRequest &request) const
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

void EcsClient::deleteNatGatewayAsync(const DeleteNatGatewayRequest& request, const DeleteNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNatGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteNatGatewayOutcomeCallable EcsClient::deleteNatGatewayCallable(const DeleteNatGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNatGatewayOutcome()>>(
			[this, request]()
			{
			return this->deleteNatGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteNetworkInterfaceOutcome EcsClient::deleteNetworkInterface(const DeleteNetworkInterfaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNetworkInterfaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNetworkInterfaceOutcome(DeleteNetworkInterfaceResult(outcome.result()));
	else
		return DeleteNetworkInterfaceOutcome(outcome.error());
}

void EcsClient::deleteNetworkInterfaceAsync(const DeleteNetworkInterfaceRequest& request, const DeleteNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNetworkInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteNetworkInterfaceOutcomeCallable EcsClient::deleteNetworkInterfaceCallable(const DeleteNetworkInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNetworkInterfaceOutcome()>>(
			[this, request]()
			{
			return this->deleteNetworkInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteNetworkInterfacePermissionOutcome EcsClient::deleteNetworkInterfacePermission(const DeleteNetworkInterfacePermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNetworkInterfacePermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNetworkInterfacePermissionOutcome(DeleteNetworkInterfacePermissionResult(outcome.result()));
	else
		return DeleteNetworkInterfacePermissionOutcome(outcome.error());
}

void EcsClient::deleteNetworkInterfacePermissionAsync(const DeleteNetworkInterfacePermissionRequest& request, const DeleteNetworkInterfacePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNetworkInterfacePermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteNetworkInterfacePermissionOutcomeCallable EcsClient::deleteNetworkInterfacePermissionCallable(const DeleteNetworkInterfacePermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNetworkInterfacePermissionOutcome()>>(
			[this, request]()
			{
			return this->deleteNetworkInterfacePermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeletePhysicalConnectionOutcome EcsClient::deletePhysicalConnection(const DeletePhysicalConnectionRequest &request) const
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

void EcsClient::deletePhysicalConnectionAsync(const DeletePhysicalConnectionRequest& request, const DeletePhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePhysicalConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeletePhysicalConnectionOutcomeCallable EcsClient::deletePhysicalConnectionCallable(const DeletePhysicalConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePhysicalConnectionOutcome()>>(
			[this, request]()
			{
			return this->deletePhysicalConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeletePortRangeListOutcome EcsClient::deletePortRangeList(const DeletePortRangeListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePortRangeListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePortRangeListOutcome(DeletePortRangeListResult(outcome.result()));
	else
		return DeletePortRangeListOutcome(outcome.error());
}

void EcsClient::deletePortRangeListAsync(const DeletePortRangeListRequest& request, const DeletePortRangeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePortRangeList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeletePortRangeListOutcomeCallable EcsClient::deletePortRangeListCallable(const DeletePortRangeListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePortRangeListOutcome()>>(
			[this, request]()
			{
			return this->deletePortRangeList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeletePrefixListOutcome EcsClient::deletePrefixList(const DeletePrefixListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePrefixListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePrefixListOutcome(DeletePrefixListResult(outcome.result()));
	else
		return DeletePrefixListOutcome(outcome.error());
}

void EcsClient::deletePrefixListAsync(const DeletePrefixListRequest& request, const DeletePrefixListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePrefixList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeletePrefixListOutcomeCallable EcsClient::deletePrefixListCallable(const DeletePrefixListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePrefixListOutcome()>>(
			[this, request]()
			{
			return this->deletePrefixList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteRouteEntryOutcome EcsClient::deleteRouteEntry(const DeleteRouteEntryRequest &request) const
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

void EcsClient::deleteRouteEntryAsync(const DeleteRouteEntryRequest& request, const DeleteRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRouteEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteRouteEntryOutcomeCallable EcsClient::deleteRouteEntryCallable(const DeleteRouteEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRouteEntryOutcome()>>(
			[this, request]()
			{
			return this->deleteRouteEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteRouterInterfaceOutcome EcsClient::deleteRouterInterface(const DeleteRouterInterfaceRequest &request) const
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

void EcsClient::deleteRouterInterfaceAsync(const DeleteRouterInterfaceRequest& request, const DeleteRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRouterInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteRouterInterfaceOutcomeCallable EcsClient::deleteRouterInterfaceCallable(const DeleteRouterInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRouterInterfaceOutcome()>>(
			[this, request]()
			{
			return this->deleteRouterInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteSecurityGroupOutcome EcsClient::deleteSecurityGroup(const DeleteSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSecurityGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSecurityGroupOutcome(DeleteSecurityGroupResult(outcome.result()));
	else
		return DeleteSecurityGroupOutcome(outcome.error());
}

void EcsClient::deleteSecurityGroupAsync(const DeleteSecurityGroupRequest& request, const DeleteSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteSecurityGroupOutcomeCallable EcsClient::deleteSecurityGroupCallable(const DeleteSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteSnapshotOutcome EcsClient::deleteSnapshot(const DeleteSnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSnapshotOutcome(DeleteSnapshotResult(outcome.result()));
	else
		return DeleteSnapshotOutcome(outcome.error());
}

void EcsClient::deleteSnapshotAsync(const DeleteSnapshotRequest& request, const DeleteSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteSnapshotOutcomeCallable EcsClient::deleteSnapshotCallable(const DeleteSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSnapshotOutcome()>>(
			[this, request]()
			{
			return this->deleteSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteSnapshotGroupOutcome EcsClient::deleteSnapshotGroup(const DeleteSnapshotGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSnapshotGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSnapshotGroupOutcome(DeleteSnapshotGroupResult(outcome.result()));
	else
		return DeleteSnapshotGroupOutcome(outcome.error());
}

void EcsClient::deleteSnapshotGroupAsync(const DeleteSnapshotGroupRequest& request, const DeleteSnapshotGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSnapshotGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteSnapshotGroupOutcomeCallable EcsClient::deleteSnapshotGroupCallable(const DeleteSnapshotGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSnapshotGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteSnapshotGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteStorageSetOutcome EcsClient::deleteStorageSet(const DeleteStorageSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteStorageSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteStorageSetOutcome(DeleteStorageSetResult(outcome.result()));
	else
		return DeleteStorageSetOutcome(outcome.error());
}

void EcsClient::deleteStorageSetAsync(const DeleteStorageSetRequest& request, const DeleteStorageSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteStorageSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteStorageSetOutcomeCallable EcsClient::deleteStorageSetCallable(const DeleteStorageSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteStorageSetOutcome()>>(
			[this, request]()
			{
			return this->deleteStorageSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteVSwitchOutcome EcsClient::deleteVSwitch(const DeleteVSwitchRequest &request) const
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

void EcsClient::deleteVSwitchAsync(const DeleteVSwitchRequest& request, const DeleteVSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVSwitch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteVSwitchOutcomeCallable EcsClient::deleteVSwitchCallable(const DeleteVSwitchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVSwitchOutcome()>>(
			[this, request]()
			{
			return this->deleteVSwitch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteVirtualBorderRouterOutcome EcsClient::deleteVirtualBorderRouter(const DeleteVirtualBorderRouterRequest &request) const
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

void EcsClient::deleteVirtualBorderRouterAsync(const DeleteVirtualBorderRouterRequest& request, const DeleteVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVirtualBorderRouter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteVirtualBorderRouterOutcomeCallable EcsClient::deleteVirtualBorderRouterCallable(const DeleteVirtualBorderRouterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVirtualBorderRouterOutcome()>>(
			[this, request]()
			{
			return this->deleteVirtualBorderRouter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteVpcOutcome EcsClient::deleteVpc(const DeleteVpcRequest &request) const
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

void EcsClient::deleteVpcAsync(const DeleteVpcRequest& request, const DeleteVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVpc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteVpcOutcomeCallable EcsClient::deleteVpcCallable(const DeleteVpcRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVpcOutcome()>>(
			[this, request]()
			{
			return this->deleteVpc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeregisterManagedInstanceOutcome EcsClient::deregisterManagedInstance(const DeregisterManagedInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeregisterManagedInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeregisterManagedInstanceOutcome(DeregisterManagedInstanceResult(outcome.result()));
	else
		return DeregisterManagedInstanceOutcome(outcome.error());
}

void EcsClient::deregisterManagedInstanceAsync(const DeregisterManagedInstanceRequest& request, const DeregisterManagedInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deregisterManagedInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeregisterManagedInstanceOutcomeCallable EcsClient::deregisterManagedInstanceCallable(const DeregisterManagedInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeregisterManagedInstanceOutcome()>>(
			[this, request]()
			{
			return this->deregisterManagedInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeAccessPointsOutcome EcsClient::describeAccessPoints(const DescribeAccessPointsRequest &request) const
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

void EcsClient::describeAccessPointsAsync(const DescribeAccessPointsRequest& request, const DescribeAccessPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccessPoints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeAccessPointsOutcomeCallable EcsClient::describeAccessPointsCallable(const DescribeAccessPointsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccessPointsOutcome()>>(
			[this, request]()
			{
			return this->describeAccessPoints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeAccountAttributesOutcome EcsClient::describeAccountAttributes(const DescribeAccountAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccountAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccountAttributesOutcome(DescribeAccountAttributesResult(outcome.result()));
	else
		return DescribeAccountAttributesOutcome(outcome.error());
}

void EcsClient::describeAccountAttributesAsync(const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccountAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeAccountAttributesOutcomeCallable EcsClient::describeAccountAttributesCallable(const DescribeAccountAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountAttributesOutcome()>>(
			[this, request]()
			{
			return this->describeAccountAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeActivationsOutcome EcsClient::describeActivations(const DescribeActivationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeActivationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeActivationsOutcome(DescribeActivationsResult(outcome.result()));
	else
		return DescribeActivationsOutcome(outcome.error());
}

void EcsClient::describeActivationsAsync(const DescribeActivationsRequest& request, const DescribeActivationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeActivations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeActivationsOutcomeCallable EcsClient::describeActivationsCallable(const DescribeActivationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeActivationsOutcome()>>(
			[this, request]()
			{
			return this->describeActivations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeAutoProvisioningGroupHistoryOutcome EcsClient::describeAutoProvisioningGroupHistory(const DescribeAutoProvisioningGroupHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAutoProvisioningGroupHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAutoProvisioningGroupHistoryOutcome(DescribeAutoProvisioningGroupHistoryResult(outcome.result()));
	else
		return DescribeAutoProvisioningGroupHistoryOutcome(outcome.error());
}

void EcsClient::describeAutoProvisioningGroupHistoryAsync(const DescribeAutoProvisioningGroupHistoryRequest& request, const DescribeAutoProvisioningGroupHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAutoProvisioningGroupHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeAutoProvisioningGroupHistoryOutcomeCallable EcsClient::describeAutoProvisioningGroupHistoryCallable(const DescribeAutoProvisioningGroupHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAutoProvisioningGroupHistoryOutcome()>>(
			[this, request]()
			{
			return this->describeAutoProvisioningGroupHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeAutoProvisioningGroupInstancesOutcome EcsClient::describeAutoProvisioningGroupInstances(const DescribeAutoProvisioningGroupInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAutoProvisioningGroupInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAutoProvisioningGroupInstancesOutcome(DescribeAutoProvisioningGroupInstancesResult(outcome.result()));
	else
		return DescribeAutoProvisioningGroupInstancesOutcome(outcome.error());
}

void EcsClient::describeAutoProvisioningGroupInstancesAsync(const DescribeAutoProvisioningGroupInstancesRequest& request, const DescribeAutoProvisioningGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAutoProvisioningGroupInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeAutoProvisioningGroupInstancesOutcomeCallable EcsClient::describeAutoProvisioningGroupInstancesCallable(const DescribeAutoProvisioningGroupInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAutoProvisioningGroupInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeAutoProvisioningGroupInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeAutoProvisioningGroupsOutcome EcsClient::describeAutoProvisioningGroups(const DescribeAutoProvisioningGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAutoProvisioningGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAutoProvisioningGroupsOutcome(DescribeAutoProvisioningGroupsResult(outcome.result()));
	else
		return DescribeAutoProvisioningGroupsOutcome(outcome.error());
}

void EcsClient::describeAutoProvisioningGroupsAsync(const DescribeAutoProvisioningGroupsRequest& request, const DescribeAutoProvisioningGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAutoProvisioningGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeAutoProvisioningGroupsOutcomeCallable EcsClient::describeAutoProvisioningGroupsCallable(const DescribeAutoProvisioningGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAutoProvisioningGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeAutoProvisioningGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeAutoSnapshotPolicyExOutcome EcsClient::describeAutoSnapshotPolicyEx(const DescribeAutoSnapshotPolicyExRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAutoSnapshotPolicyExOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAutoSnapshotPolicyExOutcome(DescribeAutoSnapshotPolicyExResult(outcome.result()));
	else
		return DescribeAutoSnapshotPolicyExOutcome(outcome.error());
}

void EcsClient::describeAutoSnapshotPolicyExAsync(const DescribeAutoSnapshotPolicyExRequest& request, const DescribeAutoSnapshotPolicyExAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAutoSnapshotPolicyEx(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeAutoSnapshotPolicyExOutcomeCallable EcsClient::describeAutoSnapshotPolicyExCallable(const DescribeAutoSnapshotPolicyExRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAutoSnapshotPolicyExOutcome()>>(
			[this, request]()
			{
			return this->describeAutoSnapshotPolicyEx(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeAvailableResourceOutcome EcsClient::describeAvailableResource(const DescribeAvailableResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAvailableResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAvailableResourceOutcome(DescribeAvailableResourceResult(outcome.result()));
	else
		return DescribeAvailableResourceOutcome(outcome.error());
}

void EcsClient::describeAvailableResourceAsync(const DescribeAvailableResourceRequest& request, const DescribeAvailableResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeAvailableResourceOutcomeCallable EcsClient::describeAvailableResourceCallable(const DescribeAvailableResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableResourceOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeBandwidthLimitationOutcome EcsClient::describeBandwidthLimitation(const DescribeBandwidthLimitationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBandwidthLimitationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBandwidthLimitationOutcome(DescribeBandwidthLimitationResult(outcome.result()));
	else
		return DescribeBandwidthLimitationOutcome(outcome.error());
}

void EcsClient::describeBandwidthLimitationAsync(const DescribeBandwidthLimitationRequest& request, const DescribeBandwidthLimitationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBandwidthLimitation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeBandwidthLimitationOutcomeCallable EcsClient::describeBandwidthLimitationCallable(const DescribeBandwidthLimitationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBandwidthLimitationOutcome()>>(
			[this, request]()
			{
			return this->describeBandwidthLimitation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeBandwidthPackagesOutcome EcsClient::describeBandwidthPackages(const DescribeBandwidthPackagesRequest &request) const
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

void EcsClient::describeBandwidthPackagesAsync(const DescribeBandwidthPackagesRequest& request, const DescribeBandwidthPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBandwidthPackages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeBandwidthPackagesOutcomeCallable EcsClient::describeBandwidthPackagesCallable(const DescribeBandwidthPackagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBandwidthPackagesOutcome()>>(
			[this, request]()
			{
			return this->describeBandwidthPackages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeCapacityReservationInstancesOutcome EcsClient::describeCapacityReservationInstances(const DescribeCapacityReservationInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCapacityReservationInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCapacityReservationInstancesOutcome(DescribeCapacityReservationInstancesResult(outcome.result()));
	else
		return DescribeCapacityReservationInstancesOutcome(outcome.error());
}

void EcsClient::describeCapacityReservationInstancesAsync(const DescribeCapacityReservationInstancesRequest& request, const DescribeCapacityReservationInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCapacityReservationInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeCapacityReservationInstancesOutcomeCallable EcsClient::describeCapacityReservationInstancesCallable(const DescribeCapacityReservationInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCapacityReservationInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeCapacityReservationInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeCapacityReservationsOutcome EcsClient::describeCapacityReservations(const DescribeCapacityReservationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCapacityReservationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCapacityReservationsOutcome(DescribeCapacityReservationsResult(outcome.result()));
	else
		return DescribeCapacityReservationsOutcome(outcome.error());
}

void EcsClient::describeCapacityReservationsAsync(const DescribeCapacityReservationsRequest& request, const DescribeCapacityReservationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCapacityReservations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeCapacityReservationsOutcomeCallable EcsClient::describeCapacityReservationsCallable(const DescribeCapacityReservationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCapacityReservationsOutcome()>>(
			[this, request]()
			{
			return this->describeCapacityReservations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeClassicLinkInstancesOutcome EcsClient::describeClassicLinkInstances(const DescribeClassicLinkInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClassicLinkInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClassicLinkInstancesOutcome(DescribeClassicLinkInstancesResult(outcome.result()));
	else
		return DescribeClassicLinkInstancesOutcome(outcome.error());
}

void EcsClient::describeClassicLinkInstancesAsync(const DescribeClassicLinkInstancesRequest& request, const DescribeClassicLinkInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClassicLinkInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeClassicLinkInstancesOutcomeCallable EcsClient::describeClassicLinkInstancesCallable(const DescribeClassicLinkInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClassicLinkInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeClassicLinkInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeCloudAssistantSettingsOutcome EcsClient::describeCloudAssistantSettings(const DescribeCloudAssistantSettingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCloudAssistantSettingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCloudAssistantSettingsOutcome(DescribeCloudAssistantSettingsResult(outcome.result()));
	else
		return DescribeCloudAssistantSettingsOutcome(outcome.error());
}

void EcsClient::describeCloudAssistantSettingsAsync(const DescribeCloudAssistantSettingsRequest& request, const DescribeCloudAssistantSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCloudAssistantSettings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeCloudAssistantSettingsOutcomeCallable EcsClient::describeCloudAssistantSettingsCallable(const DescribeCloudAssistantSettingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCloudAssistantSettingsOutcome()>>(
			[this, request]()
			{
			return this->describeCloudAssistantSettings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeCloudAssistantStatusOutcome EcsClient::describeCloudAssistantStatus(const DescribeCloudAssistantStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCloudAssistantStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCloudAssistantStatusOutcome(DescribeCloudAssistantStatusResult(outcome.result()));
	else
		return DescribeCloudAssistantStatusOutcome(outcome.error());
}

void EcsClient::describeCloudAssistantStatusAsync(const DescribeCloudAssistantStatusRequest& request, const DescribeCloudAssistantStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCloudAssistantStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeCloudAssistantStatusOutcomeCallable EcsClient::describeCloudAssistantStatusCallable(const DescribeCloudAssistantStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCloudAssistantStatusOutcome()>>(
			[this, request]()
			{
			return this->describeCloudAssistantStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeClustersOutcome EcsClient::describeClusters(const DescribeClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClustersOutcome(DescribeClustersResult(outcome.result()));
	else
		return DescribeClustersOutcome(outcome.error());
}

void EcsClient::describeClustersAsync(const DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeClustersOutcomeCallable EcsClient::describeClustersCallable(const DescribeClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClustersOutcome()>>(
			[this, request]()
			{
			return this->describeClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeCommandsOutcome EcsClient::describeCommands(const DescribeCommandsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCommandsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCommandsOutcome(DescribeCommandsResult(outcome.result()));
	else
		return DescribeCommandsOutcome(outcome.error());
}

void EcsClient::describeCommandsAsync(const DescribeCommandsRequest& request, const DescribeCommandsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCommands(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeCommandsOutcomeCallable EcsClient::describeCommandsCallable(const DescribeCommandsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCommandsOutcome()>>(
			[this, request]()
			{
			return this->describeCommands(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeDedicatedHostAutoRenewOutcome EcsClient::describeDedicatedHostAutoRenew(const DescribeDedicatedHostAutoRenewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDedicatedHostAutoRenewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDedicatedHostAutoRenewOutcome(DescribeDedicatedHostAutoRenewResult(outcome.result()));
	else
		return DescribeDedicatedHostAutoRenewOutcome(outcome.error());
}

void EcsClient::describeDedicatedHostAutoRenewAsync(const DescribeDedicatedHostAutoRenewRequest& request, const DescribeDedicatedHostAutoRenewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDedicatedHostAutoRenew(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeDedicatedHostAutoRenewOutcomeCallable EcsClient::describeDedicatedHostAutoRenewCallable(const DescribeDedicatedHostAutoRenewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDedicatedHostAutoRenewOutcome()>>(
			[this, request]()
			{
			return this->describeDedicatedHostAutoRenew(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeDedicatedHostClustersOutcome EcsClient::describeDedicatedHostClusters(const DescribeDedicatedHostClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDedicatedHostClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDedicatedHostClustersOutcome(DescribeDedicatedHostClustersResult(outcome.result()));
	else
		return DescribeDedicatedHostClustersOutcome(outcome.error());
}

void EcsClient::describeDedicatedHostClustersAsync(const DescribeDedicatedHostClustersRequest& request, const DescribeDedicatedHostClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDedicatedHostClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeDedicatedHostClustersOutcomeCallable EcsClient::describeDedicatedHostClustersCallable(const DescribeDedicatedHostClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDedicatedHostClustersOutcome()>>(
			[this, request]()
			{
			return this->describeDedicatedHostClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeDedicatedHostTypesOutcome EcsClient::describeDedicatedHostTypes(const DescribeDedicatedHostTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDedicatedHostTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDedicatedHostTypesOutcome(DescribeDedicatedHostTypesResult(outcome.result()));
	else
		return DescribeDedicatedHostTypesOutcome(outcome.error());
}

void EcsClient::describeDedicatedHostTypesAsync(const DescribeDedicatedHostTypesRequest& request, const DescribeDedicatedHostTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDedicatedHostTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeDedicatedHostTypesOutcomeCallable EcsClient::describeDedicatedHostTypesCallable(const DescribeDedicatedHostTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDedicatedHostTypesOutcome()>>(
			[this, request]()
			{
			return this->describeDedicatedHostTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeDedicatedHostsOutcome EcsClient::describeDedicatedHosts(const DescribeDedicatedHostsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDedicatedHostsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDedicatedHostsOutcome(DescribeDedicatedHostsResult(outcome.result()));
	else
		return DescribeDedicatedHostsOutcome(outcome.error());
}

void EcsClient::describeDedicatedHostsAsync(const DescribeDedicatedHostsRequest& request, const DescribeDedicatedHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDedicatedHosts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeDedicatedHostsOutcomeCallable EcsClient::describeDedicatedHostsCallable(const DescribeDedicatedHostsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDedicatedHostsOutcome()>>(
			[this, request]()
			{
			return this->describeDedicatedHosts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeDeploymentSetSupportedInstanceTypeFamilyOutcome EcsClient::describeDeploymentSetSupportedInstanceTypeFamily(const DescribeDeploymentSetSupportedInstanceTypeFamilyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDeploymentSetSupportedInstanceTypeFamilyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDeploymentSetSupportedInstanceTypeFamilyOutcome(DescribeDeploymentSetSupportedInstanceTypeFamilyResult(outcome.result()));
	else
		return DescribeDeploymentSetSupportedInstanceTypeFamilyOutcome(outcome.error());
}

void EcsClient::describeDeploymentSetSupportedInstanceTypeFamilyAsync(const DescribeDeploymentSetSupportedInstanceTypeFamilyRequest& request, const DescribeDeploymentSetSupportedInstanceTypeFamilyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDeploymentSetSupportedInstanceTypeFamily(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeDeploymentSetSupportedInstanceTypeFamilyOutcomeCallable EcsClient::describeDeploymentSetSupportedInstanceTypeFamilyCallable(const DescribeDeploymentSetSupportedInstanceTypeFamilyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDeploymentSetSupportedInstanceTypeFamilyOutcome()>>(
			[this, request]()
			{
			return this->describeDeploymentSetSupportedInstanceTypeFamily(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeDeploymentSetsOutcome EcsClient::describeDeploymentSets(const DescribeDeploymentSetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDeploymentSetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDeploymentSetsOutcome(DescribeDeploymentSetsResult(outcome.result()));
	else
		return DescribeDeploymentSetsOutcome(outcome.error());
}

void EcsClient::describeDeploymentSetsAsync(const DescribeDeploymentSetsRequest& request, const DescribeDeploymentSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDeploymentSets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeDeploymentSetsOutcomeCallable EcsClient::describeDeploymentSetsCallable(const DescribeDeploymentSetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDeploymentSetsOutcome()>>(
			[this, request]()
			{
			return this->describeDeploymentSets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeDiagnosticMetricSetsOutcome EcsClient::describeDiagnosticMetricSets(const DescribeDiagnosticMetricSetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDiagnosticMetricSetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDiagnosticMetricSetsOutcome(DescribeDiagnosticMetricSetsResult(outcome.result()));
	else
		return DescribeDiagnosticMetricSetsOutcome(outcome.error());
}

void EcsClient::describeDiagnosticMetricSetsAsync(const DescribeDiagnosticMetricSetsRequest& request, const DescribeDiagnosticMetricSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDiagnosticMetricSets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeDiagnosticMetricSetsOutcomeCallable EcsClient::describeDiagnosticMetricSetsCallable(const DescribeDiagnosticMetricSetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDiagnosticMetricSetsOutcome()>>(
			[this, request]()
			{
			return this->describeDiagnosticMetricSets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeDiagnosticMetricsOutcome EcsClient::describeDiagnosticMetrics(const DescribeDiagnosticMetricsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDiagnosticMetricsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDiagnosticMetricsOutcome(DescribeDiagnosticMetricsResult(outcome.result()));
	else
		return DescribeDiagnosticMetricsOutcome(outcome.error());
}

void EcsClient::describeDiagnosticMetricsAsync(const DescribeDiagnosticMetricsRequest& request, const DescribeDiagnosticMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDiagnosticMetrics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeDiagnosticMetricsOutcomeCallable EcsClient::describeDiagnosticMetricsCallable(const DescribeDiagnosticMetricsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDiagnosticMetricsOutcome()>>(
			[this, request]()
			{
			return this->describeDiagnosticMetrics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeDiagnosticReportAttributesOutcome EcsClient::describeDiagnosticReportAttributes(const DescribeDiagnosticReportAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDiagnosticReportAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDiagnosticReportAttributesOutcome(DescribeDiagnosticReportAttributesResult(outcome.result()));
	else
		return DescribeDiagnosticReportAttributesOutcome(outcome.error());
}

void EcsClient::describeDiagnosticReportAttributesAsync(const DescribeDiagnosticReportAttributesRequest& request, const DescribeDiagnosticReportAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDiagnosticReportAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeDiagnosticReportAttributesOutcomeCallable EcsClient::describeDiagnosticReportAttributesCallable(const DescribeDiagnosticReportAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDiagnosticReportAttributesOutcome()>>(
			[this, request]()
			{
			return this->describeDiagnosticReportAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeDiagnosticReportsOutcome EcsClient::describeDiagnosticReports(const DescribeDiagnosticReportsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDiagnosticReportsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDiagnosticReportsOutcome(DescribeDiagnosticReportsResult(outcome.result()));
	else
		return DescribeDiagnosticReportsOutcome(outcome.error());
}

void EcsClient::describeDiagnosticReportsAsync(const DescribeDiagnosticReportsRequest& request, const DescribeDiagnosticReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDiagnosticReports(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeDiagnosticReportsOutcomeCallable EcsClient::describeDiagnosticReportsCallable(const DescribeDiagnosticReportsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDiagnosticReportsOutcome()>>(
			[this, request]()
			{
			return this->describeDiagnosticReports(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeDiskDefaultKMSKeyIdOutcome EcsClient::describeDiskDefaultKMSKeyId(const DescribeDiskDefaultKMSKeyIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDiskDefaultKMSKeyIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDiskDefaultKMSKeyIdOutcome(DescribeDiskDefaultKMSKeyIdResult(outcome.result()));
	else
		return DescribeDiskDefaultKMSKeyIdOutcome(outcome.error());
}

void EcsClient::describeDiskDefaultKMSKeyIdAsync(const DescribeDiskDefaultKMSKeyIdRequest& request, const DescribeDiskDefaultKMSKeyIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDiskDefaultKMSKeyId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeDiskDefaultKMSKeyIdOutcomeCallable EcsClient::describeDiskDefaultKMSKeyIdCallable(const DescribeDiskDefaultKMSKeyIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDiskDefaultKMSKeyIdOutcome()>>(
			[this, request]()
			{
			return this->describeDiskDefaultKMSKeyId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeDiskEncryptionByDefaultStatusOutcome EcsClient::describeDiskEncryptionByDefaultStatus(const DescribeDiskEncryptionByDefaultStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDiskEncryptionByDefaultStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDiskEncryptionByDefaultStatusOutcome(DescribeDiskEncryptionByDefaultStatusResult(outcome.result()));
	else
		return DescribeDiskEncryptionByDefaultStatusOutcome(outcome.error());
}

void EcsClient::describeDiskEncryptionByDefaultStatusAsync(const DescribeDiskEncryptionByDefaultStatusRequest& request, const DescribeDiskEncryptionByDefaultStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDiskEncryptionByDefaultStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeDiskEncryptionByDefaultStatusOutcomeCallable EcsClient::describeDiskEncryptionByDefaultStatusCallable(const DescribeDiskEncryptionByDefaultStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDiskEncryptionByDefaultStatusOutcome()>>(
			[this, request]()
			{
			return this->describeDiskEncryptionByDefaultStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeDiskMonitorDataOutcome EcsClient::describeDiskMonitorData(const DescribeDiskMonitorDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDiskMonitorDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDiskMonitorDataOutcome(DescribeDiskMonitorDataResult(outcome.result()));
	else
		return DescribeDiskMonitorDataOutcome(outcome.error());
}

void EcsClient::describeDiskMonitorDataAsync(const DescribeDiskMonitorDataRequest& request, const DescribeDiskMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDiskMonitorData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeDiskMonitorDataOutcomeCallable EcsClient::describeDiskMonitorDataCallable(const DescribeDiskMonitorDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDiskMonitorDataOutcome()>>(
			[this, request]()
			{
			return this->describeDiskMonitorData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeDisksOutcome EcsClient::describeDisks(const DescribeDisksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDisksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDisksOutcome(DescribeDisksResult(outcome.result()));
	else
		return DescribeDisksOutcome(outcome.error());
}

void EcsClient::describeDisksAsync(const DescribeDisksRequest& request, const DescribeDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDisks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeDisksOutcomeCallable EcsClient::describeDisksCallable(const DescribeDisksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDisksOutcome()>>(
			[this, request]()
			{
			return this->describeDisks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeDisksFullStatusOutcome EcsClient::describeDisksFullStatus(const DescribeDisksFullStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDisksFullStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDisksFullStatusOutcome(DescribeDisksFullStatusResult(outcome.result()));
	else
		return DescribeDisksFullStatusOutcome(outcome.error());
}

void EcsClient::describeDisksFullStatusAsync(const DescribeDisksFullStatusRequest& request, const DescribeDisksFullStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDisksFullStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeDisksFullStatusOutcomeCallable EcsClient::describeDisksFullStatusCallable(const DescribeDisksFullStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDisksFullStatusOutcome()>>(
			[this, request]()
			{
			return this->describeDisksFullStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeEipAddressesOutcome EcsClient::describeEipAddresses(const DescribeEipAddressesRequest &request) const
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

void EcsClient::describeEipAddressesAsync(const DescribeEipAddressesRequest& request, const DescribeEipAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEipAddresses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeEipAddressesOutcomeCallable EcsClient::describeEipAddressesCallable(const DescribeEipAddressesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEipAddressesOutcome()>>(
			[this, request]()
			{
			return this->describeEipAddresses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeEipMonitorDataOutcome EcsClient::describeEipMonitorData(const DescribeEipMonitorDataRequest &request) const
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

void EcsClient::describeEipMonitorDataAsync(const DescribeEipMonitorDataRequest& request, const DescribeEipMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEipMonitorData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeEipMonitorDataOutcomeCallable EcsClient::describeEipMonitorDataCallable(const DescribeEipMonitorDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEipMonitorDataOutcome()>>(
			[this, request]()
			{
			return this->describeEipMonitorData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeElasticityAssuranceAutoRenewAttributeOutcome EcsClient::describeElasticityAssuranceAutoRenewAttribute(const DescribeElasticityAssuranceAutoRenewAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeElasticityAssuranceAutoRenewAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeElasticityAssuranceAutoRenewAttributeOutcome(DescribeElasticityAssuranceAutoRenewAttributeResult(outcome.result()));
	else
		return DescribeElasticityAssuranceAutoRenewAttributeOutcome(outcome.error());
}

void EcsClient::describeElasticityAssuranceAutoRenewAttributeAsync(const DescribeElasticityAssuranceAutoRenewAttributeRequest& request, const DescribeElasticityAssuranceAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeElasticityAssuranceAutoRenewAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeElasticityAssuranceAutoRenewAttributeOutcomeCallable EcsClient::describeElasticityAssuranceAutoRenewAttributeCallable(const DescribeElasticityAssuranceAutoRenewAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeElasticityAssuranceAutoRenewAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeElasticityAssuranceAutoRenewAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeElasticityAssuranceInstancesOutcome EcsClient::describeElasticityAssuranceInstances(const DescribeElasticityAssuranceInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeElasticityAssuranceInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeElasticityAssuranceInstancesOutcome(DescribeElasticityAssuranceInstancesResult(outcome.result()));
	else
		return DescribeElasticityAssuranceInstancesOutcome(outcome.error());
}

void EcsClient::describeElasticityAssuranceInstancesAsync(const DescribeElasticityAssuranceInstancesRequest& request, const DescribeElasticityAssuranceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeElasticityAssuranceInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeElasticityAssuranceInstancesOutcomeCallable EcsClient::describeElasticityAssuranceInstancesCallable(const DescribeElasticityAssuranceInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeElasticityAssuranceInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeElasticityAssuranceInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeElasticityAssurancesOutcome EcsClient::describeElasticityAssurances(const DescribeElasticityAssurancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeElasticityAssurancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeElasticityAssurancesOutcome(DescribeElasticityAssurancesResult(outcome.result()));
	else
		return DescribeElasticityAssurancesOutcome(outcome.error());
}

void EcsClient::describeElasticityAssurancesAsync(const DescribeElasticityAssurancesRequest& request, const DescribeElasticityAssurancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeElasticityAssurances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeElasticityAssurancesOutcomeCallable EcsClient::describeElasticityAssurancesCallable(const DescribeElasticityAssurancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeElasticityAssurancesOutcome()>>(
			[this, request]()
			{
			return this->describeElasticityAssurances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeEniMonitorDataOutcome EcsClient::describeEniMonitorData(const DescribeEniMonitorDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEniMonitorDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEniMonitorDataOutcome(DescribeEniMonitorDataResult(outcome.result()));
	else
		return DescribeEniMonitorDataOutcome(outcome.error());
}

void EcsClient::describeEniMonitorDataAsync(const DescribeEniMonitorDataRequest& request, const DescribeEniMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEniMonitorData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeEniMonitorDataOutcomeCallable EcsClient::describeEniMonitorDataCallable(const DescribeEniMonitorDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEniMonitorDataOutcome()>>(
			[this, request]()
			{
			return this->describeEniMonitorData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeForwardTableEntriesOutcome EcsClient::describeForwardTableEntries(const DescribeForwardTableEntriesRequest &request) const
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

void EcsClient::describeForwardTableEntriesAsync(const DescribeForwardTableEntriesRequest& request, const DescribeForwardTableEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeForwardTableEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeForwardTableEntriesOutcomeCallable EcsClient::describeForwardTableEntriesCallable(const DescribeForwardTableEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeForwardTableEntriesOutcome()>>(
			[this, request]()
			{
			return this->describeForwardTableEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeHaVipsOutcome EcsClient::describeHaVips(const DescribeHaVipsRequest &request) const
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

void EcsClient::describeHaVipsAsync(const DescribeHaVipsRequest& request, const DescribeHaVipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHaVips(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeHaVipsOutcomeCallable EcsClient::describeHaVipsCallable(const DescribeHaVipsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHaVipsOutcome()>>(
			[this, request]()
			{
			return this->describeHaVips(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeHpcClustersOutcome EcsClient::describeHpcClusters(const DescribeHpcClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHpcClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHpcClustersOutcome(DescribeHpcClustersResult(outcome.result()));
	else
		return DescribeHpcClustersOutcome(outcome.error());
}

void EcsClient::describeHpcClustersAsync(const DescribeHpcClustersRequest& request, const DescribeHpcClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHpcClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeHpcClustersOutcomeCallable EcsClient::describeHpcClustersCallable(const DescribeHpcClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHpcClustersOutcome()>>(
			[this, request]()
			{
			return this->describeHpcClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeImageComponentsOutcome EcsClient::describeImageComponents(const DescribeImageComponentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageComponentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageComponentsOutcome(DescribeImageComponentsResult(outcome.result()));
	else
		return DescribeImageComponentsOutcome(outcome.error());
}

void EcsClient::describeImageComponentsAsync(const DescribeImageComponentsRequest& request, const DescribeImageComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageComponents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeImageComponentsOutcomeCallable EcsClient::describeImageComponentsCallable(const DescribeImageComponentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageComponentsOutcome()>>(
			[this, request]()
			{
			return this->describeImageComponents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeImageFromFamilyOutcome EcsClient::describeImageFromFamily(const DescribeImageFromFamilyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageFromFamilyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageFromFamilyOutcome(DescribeImageFromFamilyResult(outcome.result()));
	else
		return DescribeImageFromFamilyOutcome(outcome.error());
}

void EcsClient::describeImageFromFamilyAsync(const DescribeImageFromFamilyRequest& request, const DescribeImageFromFamilyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageFromFamily(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeImageFromFamilyOutcomeCallable EcsClient::describeImageFromFamilyCallable(const DescribeImageFromFamilyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageFromFamilyOutcome()>>(
			[this, request]()
			{
			return this->describeImageFromFamily(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeImagePipelineExecutionsOutcome EcsClient::describeImagePipelineExecutions(const DescribeImagePipelineExecutionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImagePipelineExecutionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImagePipelineExecutionsOutcome(DescribeImagePipelineExecutionsResult(outcome.result()));
	else
		return DescribeImagePipelineExecutionsOutcome(outcome.error());
}

void EcsClient::describeImagePipelineExecutionsAsync(const DescribeImagePipelineExecutionsRequest& request, const DescribeImagePipelineExecutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImagePipelineExecutions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeImagePipelineExecutionsOutcomeCallable EcsClient::describeImagePipelineExecutionsCallable(const DescribeImagePipelineExecutionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImagePipelineExecutionsOutcome()>>(
			[this, request]()
			{
			return this->describeImagePipelineExecutions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeImagePipelinesOutcome EcsClient::describeImagePipelines(const DescribeImagePipelinesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImagePipelinesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImagePipelinesOutcome(DescribeImagePipelinesResult(outcome.result()));
	else
		return DescribeImagePipelinesOutcome(outcome.error());
}

void EcsClient::describeImagePipelinesAsync(const DescribeImagePipelinesRequest& request, const DescribeImagePipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImagePipelines(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeImagePipelinesOutcomeCallable EcsClient::describeImagePipelinesCallable(const DescribeImagePipelinesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImagePipelinesOutcome()>>(
			[this, request]()
			{
			return this->describeImagePipelines(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeImageSharePermissionOutcome EcsClient::describeImageSharePermission(const DescribeImageSharePermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageSharePermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageSharePermissionOutcome(DescribeImageSharePermissionResult(outcome.result()));
	else
		return DescribeImageSharePermissionOutcome(outcome.error());
}

void EcsClient::describeImageSharePermissionAsync(const DescribeImageSharePermissionRequest& request, const DescribeImageSharePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageSharePermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeImageSharePermissionOutcomeCallable EcsClient::describeImageSharePermissionCallable(const DescribeImageSharePermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageSharePermissionOutcome()>>(
			[this, request]()
			{
			return this->describeImageSharePermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeImageSupportInstanceTypesOutcome EcsClient::describeImageSupportInstanceTypes(const DescribeImageSupportInstanceTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageSupportInstanceTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageSupportInstanceTypesOutcome(DescribeImageSupportInstanceTypesResult(outcome.result()));
	else
		return DescribeImageSupportInstanceTypesOutcome(outcome.error());
}

void EcsClient::describeImageSupportInstanceTypesAsync(const DescribeImageSupportInstanceTypesRequest& request, const DescribeImageSupportInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageSupportInstanceTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeImageSupportInstanceTypesOutcomeCallable EcsClient::describeImageSupportInstanceTypesCallable(const DescribeImageSupportInstanceTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageSupportInstanceTypesOutcome()>>(
			[this, request]()
			{
			return this->describeImageSupportInstanceTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeImagesOutcome EcsClient::describeImages(const DescribeImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImagesOutcome(DescribeImagesResult(outcome.result()));
	else
		return DescribeImagesOutcome(outcome.error());
}

void EcsClient::describeImagesAsync(const DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeImagesOutcomeCallable EcsClient::describeImagesCallable(const DescribeImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImagesOutcome()>>(
			[this, request]()
			{
			return this->describeImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeInstanceAttachmentAttributesOutcome EcsClient::describeInstanceAttachmentAttributes(const DescribeInstanceAttachmentAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceAttachmentAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceAttachmentAttributesOutcome(DescribeInstanceAttachmentAttributesResult(outcome.result()));
	else
		return DescribeInstanceAttachmentAttributesOutcome(outcome.error());
}

void EcsClient::describeInstanceAttachmentAttributesAsync(const DescribeInstanceAttachmentAttributesRequest& request, const DescribeInstanceAttachmentAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceAttachmentAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeInstanceAttachmentAttributesOutcomeCallable EcsClient::describeInstanceAttachmentAttributesCallable(const DescribeInstanceAttachmentAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceAttachmentAttributesOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceAttachmentAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeInstanceAttributeOutcome EcsClient::describeInstanceAttribute(const DescribeInstanceAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceAttributeOutcome(DescribeInstanceAttributeResult(outcome.result()));
	else
		return DescribeInstanceAttributeOutcome(outcome.error());
}

void EcsClient::describeInstanceAttributeAsync(const DescribeInstanceAttributeRequest& request, const DescribeInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeInstanceAttributeOutcomeCallable EcsClient::describeInstanceAttributeCallable(const DescribeInstanceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeInstanceAutoRenewAttributeOutcome EcsClient::describeInstanceAutoRenewAttribute(const DescribeInstanceAutoRenewAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceAutoRenewAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceAutoRenewAttributeOutcome(DescribeInstanceAutoRenewAttributeResult(outcome.result()));
	else
		return DescribeInstanceAutoRenewAttributeOutcome(outcome.error());
}

void EcsClient::describeInstanceAutoRenewAttributeAsync(const DescribeInstanceAutoRenewAttributeRequest& request, const DescribeInstanceAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceAutoRenewAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeInstanceAutoRenewAttributeOutcomeCallable EcsClient::describeInstanceAutoRenewAttributeCallable(const DescribeInstanceAutoRenewAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceAutoRenewAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceAutoRenewAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeInstanceHistoryEventsOutcome EcsClient::describeInstanceHistoryEvents(const DescribeInstanceHistoryEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceHistoryEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceHistoryEventsOutcome(DescribeInstanceHistoryEventsResult(outcome.result()));
	else
		return DescribeInstanceHistoryEventsOutcome(outcome.error());
}

void EcsClient::describeInstanceHistoryEventsAsync(const DescribeInstanceHistoryEventsRequest& request, const DescribeInstanceHistoryEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceHistoryEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeInstanceHistoryEventsOutcomeCallable EcsClient::describeInstanceHistoryEventsCallable(const DescribeInstanceHistoryEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceHistoryEventsOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceHistoryEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeInstanceMaintenanceAttributesOutcome EcsClient::describeInstanceMaintenanceAttributes(const DescribeInstanceMaintenanceAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceMaintenanceAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceMaintenanceAttributesOutcome(DescribeInstanceMaintenanceAttributesResult(outcome.result()));
	else
		return DescribeInstanceMaintenanceAttributesOutcome(outcome.error());
}

void EcsClient::describeInstanceMaintenanceAttributesAsync(const DescribeInstanceMaintenanceAttributesRequest& request, const DescribeInstanceMaintenanceAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceMaintenanceAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeInstanceMaintenanceAttributesOutcomeCallable EcsClient::describeInstanceMaintenanceAttributesCallable(const DescribeInstanceMaintenanceAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceMaintenanceAttributesOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceMaintenanceAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeInstanceModificationPriceOutcome EcsClient::describeInstanceModificationPrice(const DescribeInstanceModificationPriceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceModificationPriceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceModificationPriceOutcome(DescribeInstanceModificationPriceResult(outcome.result()));
	else
		return DescribeInstanceModificationPriceOutcome(outcome.error());
}

void EcsClient::describeInstanceModificationPriceAsync(const DescribeInstanceModificationPriceRequest& request, const DescribeInstanceModificationPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceModificationPrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeInstanceModificationPriceOutcomeCallable EcsClient::describeInstanceModificationPriceCallable(const DescribeInstanceModificationPriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceModificationPriceOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceModificationPrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeInstanceMonitorDataOutcome EcsClient::describeInstanceMonitorData(const DescribeInstanceMonitorDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceMonitorDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceMonitorDataOutcome(DescribeInstanceMonitorDataResult(outcome.result()));
	else
		return DescribeInstanceMonitorDataOutcome(outcome.error());
}

void EcsClient::describeInstanceMonitorDataAsync(const DescribeInstanceMonitorDataRequest& request, const DescribeInstanceMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceMonitorData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeInstanceMonitorDataOutcomeCallable EcsClient::describeInstanceMonitorDataCallable(const DescribeInstanceMonitorDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceMonitorDataOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceMonitorData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeInstanceRamRoleOutcome EcsClient::describeInstanceRamRole(const DescribeInstanceRamRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceRamRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceRamRoleOutcome(DescribeInstanceRamRoleResult(outcome.result()));
	else
		return DescribeInstanceRamRoleOutcome(outcome.error());
}

void EcsClient::describeInstanceRamRoleAsync(const DescribeInstanceRamRoleRequest& request, const DescribeInstanceRamRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceRamRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeInstanceRamRoleOutcomeCallable EcsClient::describeInstanceRamRoleCallable(const DescribeInstanceRamRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceRamRoleOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceRamRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeInstanceStatusOutcome EcsClient::describeInstanceStatus(const DescribeInstanceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceStatusOutcome(DescribeInstanceStatusResult(outcome.result()));
	else
		return DescribeInstanceStatusOutcome(outcome.error());
}

void EcsClient::describeInstanceStatusAsync(const DescribeInstanceStatusRequest& request, const DescribeInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeInstanceStatusOutcomeCallable EcsClient::describeInstanceStatusCallable(const DescribeInstanceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceStatusOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeInstanceTopologyOutcome EcsClient::describeInstanceTopology(const DescribeInstanceTopologyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceTopologyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceTopologyOutcome(DescribeInstanceTopologyResult(outcome.result()));
	else
		return DescribeInstanceTopologyOutcome(outcome.error());
}

void EcsClient::describeInstanceTopologyAsync(const DescribeInstanceTopologyRequest& request, const DescribeInstanceTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceTopology(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeInstanceTopologyOutcomeCallable EcsClient::describeInstanceTopologyCallable(const DescribeInstanceTopologyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceTopologyOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceTopology(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeInstanceTypeFamiliesOutcome EcsClient::describeInstanceTypeFamilies(const DescribeInstanceTypeFamiliesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceTypeFamiliesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceTypeFamiliesOutcome(DescribeInstanceTypeFamiliesResult(outcome.result()));
	else
		return DescribeInstanceTypeFamiliesOutcome(outcome.error());
}

void EcsClient::describeInstanceTypeFamiliesAsync(const DescribeInstanceTypeFamiliesRequest& request, const DescribeInstanceTypeFamiliesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceTypeFamilies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeInstanceTypeFamiliesOutcomeCallable EcsClient::describeInstanceTypeFamiliesCallable(const DescribeInstanceTypeFamiliesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceTypeFamiliesOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceTypeFamilies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeInstanceTypesOutcome EcsClient::describeInstanceTypes(const DescribeInstanceTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceTypesOutcome(DescribeInstanceTypesResult(outcome.result()));
	else
		return DescribeInstanceTypesOutcome(outcome.error());
}

void EcsClient::describeInstanceTypesAsync(const DescribeInstanceTypesRequest& request, const DescribeInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeInstanceTypesOutcomeCallable EcsClient::describeInstanceTypesCallable(const DescribeInstanceTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceTypesOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeInstanceVncUrlOutcome EcsClient::describeInstanceVncUrl(const DescribeInstanceVncUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceVncUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceVncUrlOutcome(DescribeInstanceVncUrlResult(outcome.result()));
	else
		return DescribeInstanceVncUrlOutcome(outcome.error());
}

void EcsClient::describeInstanceVncUrlAsync(const DescribeInstanceVncUrlRequest& request, const DescribeInstanceVncUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceVncUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeInstanceVncUrlOutcomeCallable EcsClient::describeInstanceVncUrlCallable(const DescribeInstanceVncUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceVncUrlOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceVncUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeInstancesOutcome EcsClient::describeInstances(const DescribeInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstancesOutcome(DescribeInstancesResult(outcome.result()));
	else
		return DescribeInstancesOutcome(outcome.error());
}

void EcsClient::describeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeInstancesOutcomeCallable EcsClient::describeInstancesCallable(const DescribeInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeInstancesFullStatusOutcome EcsClient::describeInstancesFullStatus(const DescribeInstancesFullStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstancesFullStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstancesFullStatusOutcome(DescribeInstancesFullStatusResult(outcome.result()));
	else
		return DescribeInstancesFullStatusOutcome(outcome.error());
}

void EcsClient::describeInstancesFullStatusAsync(const DescribeInstancesFullStatusRequest& request, const DescribeInstancesFullStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstancesFullStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeInstancesFullStatusOutcomeCallable EcsClient::describeInstancesFullStatusCallable(const DescribeInstancesFullStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstancesFullStatusOutcome()>>(
			[this, request]()
			{
			return this->describeInstancesFullStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeInvocationResultsOutcome EcsClient::describeInvocationResults(const DescribeInvocationResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInvocationResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInvocationResultsOutcome(DescribeInvocationResultsResult(outcome.result()));
	else
		return DescribeInvocationResultsOutcome(outcome.error());
}

void EcsClient::describeInvocationResultsAsync(const DescribeInvocationResultsRequest& request, const DescribeInvocationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInvocationResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeInvocationResultsOutcomeCallable EcsClient::describeInvocationResultsCallable(const DescribeInvocationResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInvocationResultsOutcome()>>(
			[this, request]()
			{
			return this->describeInvocationResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeInvocationsOutcome EcsClient::describeInvocations(const DescribeInvocationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInvocationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInvocationsOutcome(DescribeInvocationsResult(outcome.result()));
	else
		return DescribeInvocationsOutcome(outcome.error());
}

void EcsClient::describeInvocationsAsync(const DescribeInvocationsRequest& request, const DescribeInvocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInvocations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeInvocationsOutcomeCallable EcsClient::describeInvocationsCallable(const DescribeInvocationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInvocationsOutcome()>>(
			[this, request]()
			{
			return this->describeInvocations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeKeyPairsOutcome EcsClient::describeKeyPairs(const DescribeKeyPairsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeKeyPairsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeKeyPairsOutcome(DescribeKeyPairsResult(outcome.result()));
	else
		return DescribeKeyPairsOutcome(outcome.error());
}

void EcsClient::describeKeyPairsAsync(const DescribeKeyPairsRequest& request, const DescribeKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeKeyPairs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeKeyPairsOutcomeCallable EcsClient::describeKeyPairsCallable(const DescribeKeyPairsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeKeyPairsOutcome()>>(
			[this, request]()
			{
			return this->describeKeyPairs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeLaunchTemplateVersionsOutcome EcsClient::describeLaunchTemplateVersions(const DescribeLaunchTemplateVersionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLaunchTemplateVersionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLaunchTemplateVersionsOutcome(DescribeLaunchTemplateVersionsResult(outcome.result()));
	else
		return DescribeLaunchTemplateVersionsOutcome(outcome.error());
}

void EcsClient::describeLaunchTemplateVersionsAsync(const DescribeLaunchTemplateVersionsRequest& request, const DescribeLaunchTemplateVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLaunchTemplateVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeLaunchTemplateVersionsOutcomeCallable EcsClient::describeLaunchTemplateVersionsCallable(const DescribeLaunchTemplateVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLaunchTemplateVersionsOutcome()>>(
			[this, request]()
			{
			return this->describeLaunchTemplateVersions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeLaunchTemplatesOutcome EcsClient::describeLaunchTemplates(const DescribeLaunchTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLaunchTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLaunchTemplatesOutcome(DescribeLaunchTemplatesResult(outcome.result()));
	else
		return DescribeLaunchTemplatesOutcome(outcome.error());
}

void EcsClient::describeLaunchTemplatesAsync(const DescribeLaunchTemplatesRequest& request, const DescribeLaunchTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLaunchTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeLaunchTemplatesOutcomeCallable EcsClient::describeLaunchTemplatesCallable(const DescribeLaunchTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLaunchTemplatesOutcome()>>(
			[this, request]()
			{
			return this->describeLaunchTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeLimitationOutcome EcsClient::describeLimitation(const DescribeLimitationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLimitationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLimitationOutcome(DescribeLimitationResult(outcome.result()));
	else
		return DescribeLimitationOutcome(outcome.error());
}

void EcsClient::describeLimitationAsync(const DescribeLimitationRequest& request, const DescribeLimitationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLimitation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeLimitationOutcomeCallable EcsClient::describeLimitationCallable(const DescribeLimitationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLimitationOutcome()>>(
			[this, request]()
			{
			return this->describeLimitation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeManagedInstancesOutcome EcsClient::describeManagedInstances(const DescribeManagedInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeManagedInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeManagedInstancesOutcome(DescribeManagedInstancesResult(outcome.result()));
	else
		return DescribeManagedInstancesOutcome(outcome.error());
}

void EcsClient::describeManagedInstancesAsync(const DescribeManagedInstancesRequest& request, const DescribeManagedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeManagedInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeManagedInstancesOutcomeCallable EcsClient::describeManagedInstancesCallable(const DescribeManagedInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeManagedInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeManagedInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeNatGatewaysOutcome EcsClient::describeNatGateways(const DescribeNatGatewaysRequest &request) const
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

void EcsClient::describeNatGatewaysAsync(const DescribeNatGatewaysRequest& request, const DescribeNatGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNatGateways(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeNatGatewaysOutcomeCallable EcsClient::describeNatGatewaysCallable(const DescribeNatGatewaysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNatGatewaysOutcome()>>(
			[this, request]()
			{
			return this->describeNatGateways(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeNetworkInterfaceAttributeOutcome EcsClient::describeNetworkInterfaceAttribute(const DescribeNetworkInterfaceAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNetworkInterfaceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNetworkInterfaceAttributeOutcome(DescribeNetworkInterfaceAttributeResult(outcome.result()));
	else
		return DescribeNetworkInterfaceAttributeOutcome(outcome.error());
}

void EcsClient::describeNetworkInterfaceAttributeAsync(const DescribeNetworkInterfaceAttributeRequest& request, const DescribeNetworkInterfaceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNetworkInterfaceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeNetworkInterfaceAttributeOutcomeCallable EcsClient::describeNetworkInterfaceAttributeCallable(const DescribeNetworkInterfaceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNetworkInterfaceAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeNetworkInterfaceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeNetworkInterfacePermissionsOutcome EcsClient::describeNetworkInterfacePermissions(const DescribeNetworkInterfacePermissionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNetworkInterfacePermissionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNetworkInterfacePermissionsOutcome(DescribeNetworkInterfacePermissionsResult(outcome.result()));
	else
		return DescribeNetworkInterfacePermissionsOutcome(outcome.error());
}

void EcsClient::describeNetworkInterfacePermissionsAsync(const DescribeNetworkInterfacePermissionsRequest& request, const DescribeNetworkInterfacePermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNetworkInterfacePermissions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeNetworkInterfacePermissionsOutcomeCallable EcsClient::describeNetworkInterfacePermissionsCallable(const DescribeNetworkInterfacePermissionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNetworkInterfacePermissionsOutcome()>>(
			[this, request]()
			{
			return this->describeNetworkInterfacePermissions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeNetworkInterfacesOutcome EcsClient::describeNetworkInterfaces(const DescribeNetworkInterfacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNetworkInterfacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNetworkInterfacesOutcome(DescribeNetworkInterfacesResult(outcome.result()));
	else
		return DescribeNetworkInterfacesOutcome(outcome.error());
}

void EcsClient::describeNetworkInterfacesAsync(const DescribeNetworkInterfacesRequest& request, const DescribeNetworkInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNetworkInterfaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeNetworkInterfacesOutcomeCallable EcsClient::describeNetworkInterfacesCallable(const DescribeNetworkInterfacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNetworkInterfacesOutcome()>>(
			[this, request]()
			{
			return this->describeNetworkInterfaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeNewProjectEipMonitorDataOutcome EcsClient::describeNewProjectEipMonitorData(const DescribeNewProjectEipMonitorDataRequest &request) const
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

void EcsClient::describeNewProjectEipMonitorDataAsync(const DescribeNewProjectEipMonitorDataRequest& request, const DescribeNewProjectEipMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNewProjectEipMonitorData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeNewProjectEipMonitorDataOutcomeCallable EcsClient::describeNewProjectEipMonitorDataCallable(const DescribeNewProjectEipMonitorDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNewProjectEipMonitorDataOutcome()>>(
			[this, request]()
			{
			return this->describeNewProjectEipMonitorData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribePhysicalConnectionsOutcome EcsClient::describePhysicalConnections(const DescribePhysicalConnectionsRequest &request) const
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

void EcsClient::describePhysicalConnectionsAsync(const DescribePhysicalConnectionsRequest& request, const DescribePhysicalConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePhysicalConnections(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribePhysicalConnectionsOutcomeCallable EcsClient::describePhysicalConnectionsCallable(const DescribePhysicalConnectionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePhysicalConnectionsOutcome()>>(
			[this, request]()
			{
			return this->describePhysicalConnections(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribePortRangeListAssociationsOutcome EcsClient::describePortRangeListAssociations(const DescribePortRangeListAssociationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePortRangeListAssociationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePortRangeListAssociationsOutcome(DescribePortRangeListAssociationsResult(outcome.result()));
	else
		return DescribePortRangeListAssociationsOutcome(outcome.error());
}

void EcsClient::describePortRangeListAssociationsAsync(const DescribePortRangeListAssociationsRequest& request, const DescribePortRangeListAssociationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePortRangeListAssociations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribePortRangeListAssociationsOutcomeCallable EcsClient::describePortRangeListAssociationsCallable(const DescribePortRangeListAssociationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePortRangeListAssociationsOutcome()>>(
			[this, request]()
			{
			return this->describePortRangeListAssociations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribePortRangeListEntriesOutcome EcsClient::describePortRangeListEntries(const DescribePortRangeListEntriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePortRangeListEntriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePortRangeListEntriesOutcome(DescribePortRangeListEntriesResult(outcome.result()));
	else
		return DescribePortRangeListEntriesOutcome(outcome.error());
}

void EcsClient::describePortRangeListEntriesAsync(const DescribePortRangeListEntriesRequest& request, const DescribePortRangeListEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePortRangeListEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribePortRangeListEntriesOutcomeCallable EcsClient::describePortRangeListEntriesCallable(const DescribePortRangeListEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePortRangeListEntriesOutcome()>>(
			[this, request]()
			{
			return this->describePortRangeListEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribePortRangeListsOutcome EcsClient::describePortRangeLists(const DescribePortRangeListsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePortRangeListsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePortRangeListsOutcome(DescribePortRangeListsResult(outcome.result()));
	else
		return DescribePortRangeListsOutcome(outcome.error());
}

void EcsClient::describePortRangeListsAsync(const DescribePortRangeListsRequest& request, const DescribePortRangeListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePortRangeLists(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribePortRangeListsOutcomeCallable EcsClient::describePortRangeListsCallable(const DescribePortRangeListsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePortRangeListsOutcome()>>(
			[this, request]()
			{
			return this->describePortRangeLists(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribePrefixListAssociationsOutcome EcsClient::describePrefixListAssociations(const DescribePrefixListAssociationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePrefixListAssociationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePrefixListAssociationsOutcome(DescribePrefixListAssociationsResult(outcome.result()));
	else
		return DescribePrefixListAssociationsOutcome(outcome.error());
}

void EcsClient::describePrefixListAssociationsAsync(const DescribePrefixListAssociationsRequest& request, const DescribePrefixListAssociationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePrefixListAssociations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribePrefixListAssociationsOutcomeCallable EcsClient::describePrefixListAssociationsCallable(const DescribePrefixListAssociationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePrefixListAssociationsOutcome()>>(
			[this, request]()
			{
			return this->describePrefixListAssociations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribePrefixListAttributesOutcome EcsClient::describePrefixListAttributes(const DescribePrefixListAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePrefixListAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePrefixListAttributesOutcome(DescribePrefixListAttributesResult(outcome.result()));
	else
		return DescribePrefixListAttributesOutcome(outcome.error());
}

void EcsClient::describePrefixListAttributesAsync(const DescribePrefixListAttributesRequest& request, const DescribePrefixListAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePrefixListAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribePrefixListAttributesOutcomeCallable EcsClient::describePrefixListAttributesCallable(const DescribePrefixListAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePrefixListAttributesOutcome()>>(
			[this, request]()
			{
			return this->describePrefixListAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribePrefixListsOutcome EcsClient::describePrefixLists(const DescribePrefixListsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePrefixListsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePrefixListsOutcome(DescribePrefixListsResult(outcome.result()));
	else
		return DescribePrefixListsOutcome(outcome.error());
}

void EcsClient::describePrefixListsAsync(const DescribePrefixListsRequest& request, const DescribePrefixListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePrefixLists(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribePrefixListsOutcomeCallable EcsClient::describePrefixListsCallable(const DescribePrefixListsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePrefixListsOutcome()>>(
			[this, request]()
			{
			return this->describePrefixLists(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribePriceOutcome EcsClient::describePrice(const DescribePriceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePriceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePriceOutcome(DescribePriceResult(outcome.result()));
	else
		return DescribePriceOutcome(outcome.error());
}

void EcsClient::describePriceAsync(const DescribePriceRequest& request, const DescribePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribePriceOutcomeCallable EcsClient::describePriceCallable(const DescribePriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePriceOutcome()>>(
			[this, request]()
			{
			return this->describePrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeRecommendInstanceTypeOutcome EcsClient::describeRecommendInstanceType(const DescribeRecommendInstanceTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRecommendInstanceTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRecommendInstanceTypeOutcome(DescribeRecommendInstanceTypeResult(outcome.result()));
	else
		return DescribeRecommendInstanceTypeOutcome(outcome.error());
}

void EcsClient::describeRecommendInstanceTypeAsync(const DescribeRecommendInstanceTypeRequest& request, const DescribeRecommendInstanceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRecommendInstanceType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeRecommendInstanceTypeOutcomeCallable EcsClient::describeRecommendInstanceTypeCallable(const DescribeRecommendInstanceTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRecommendInstanceTypeOutcome()>>(
			[this, request]()
			{
			return this->describeRecommendInstanceType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeRegionsOutcome EcsClient::describeRegions(const DescribeRegionsRequest &request) const
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

void EcsClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeRegionsOutcomeCallable EcsClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeRenewalPriceOutcome EcsClient::describeRenewalPrice(const DescribeRenewalPriceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRenewalPriceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRenewalPriceOutcome(DescribeRenewalPriceResult(outcome.result()));
	else
		return DescribeRenewalPriceOutcome(outcome.error());
}

void EcsClient::describeRenewalPriceAsync(const DescribeRenewalPriceRequest& request, const DescribeRenewalPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRenewalPrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeRenewalPriceOutcomeCallable EcsClient::describeRenewalPriceCallable(const DescribeRenewalPriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRenewalPriceOutcome()>>(
			[this, request]()
			{
			return this->describeRenewalPrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeReservedInstanceAutoRenewAttributeOutcome EcsClient::describeReservedInstanceAutoRenewAttribute(const DescribeReservedInstanceAutoRenewAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeReservedInstanceAutoRenewAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeReservedInstanceAutoRenewAttributeOutcome(DescribeReservedInstanceAutoRenewAttributeResult(outcome.result()));
	else
		return DescribeReservedInstanceAutoRenewAttributeOutcome(outcome.error());
}

void EcsClient::describeReservedInstanceAutoRenewAttributeAsync(const DescribeReservedInstanceAutoRenewAttributeRequest& request, const DescribeReservedInstanceAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeReservedInstanceAutoRenewAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeReservedInstanceAutoRenewAttributeOutcomeCallable EcsClient::describeReservedInstanceAutoRenewAttributeCallable(const DescribeReservedInstanceAutoRenewAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeReservedInstanceAutoRenewAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeReservedInstanceAutoRenewAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeReservedInstancesOutcome EcsClient::describeReservedInstances(const DescribeReservedInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeReservedInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeReservedInstancesOutcome(DescribeReservedInstancesResult(outcome.result()));
	else
		return DescribeReservedInstancesOutcome(outcome.error());
}

void EcsClient::describeReservedInstancesAsync(const DescribeReservedInstancesRequest& request, const DescribeReservedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeReservedInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeReservedInstancesOutcomeCallable EcsClient::describeReservedInstancesCallable(const DescribeReservedInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeReservedInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeReservedInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeResourceByTagsOutcome EcsClient::describeResourceByTags(const DescribeResourceByTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeResourceByTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeResourceByTagsOutcome(DescribeResourceByTagsResult(outcome.result()));
	else
		return DescribeResourceByTagsOutcome(outcome.error());
}

void EcsClient::describeResourceByTagsAsync(const DescribeResourceByTagsRequest& request, const DescribeResourceByTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeResourceByTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeResourceByTagsOutcomeCallable EcsClient::describeResourceByTagsCallable(const DescribeResourceByTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeResourceByTagsOutcome()>>(
			[this, request]()
			{
			return this->describeResourceByTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeResourcesModificationOutcome EcsClient::describeResourcesModification(const DescribeResourcesModificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeResourcesModificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeResourcesModificationOutcome(DescribeResourcesModificationResult(outcome.result()));
	else
		return DescribeResourcesModificationOutcome(outcome.error());
}

void EcsClient::describeResourcesModificationAsync(const DescribeResourcesModificationRequest& request, const DescribeResourcesModificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeResourcesModification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeResourcesModificationOutcomeCallable EcsClient::describeResourcesModificationCallable(const DescribeResourcesModificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeResourcesModificationOutcome()>>(
			[this, request]()
			{
			return this->describeResourcesModification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeRouteTablesOutcome EcsClient::describeRouteTables(const DescribeRouteTablesRequest &request) const
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

void EcsClient::describeRouteTablesAsync(const DescribeRouteTablesRequest& request, const DescribeRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRouteTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeRouteTablesOutcomeCallable EcsClient::describeRouteTablesCallable(const DescribeRouteTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRouteTablesOutcome()>>(
			[this, request]()
			{
			return this->describeRouteTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeRouterInterfacesOutcome EcsClient::describeRouterInterfaces(const DescribeRouterInterfacesRequest &request) const
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

void EcsClient::describeRouterInterfacesAsync(const DescribeRouterInterfacesRequest& request, const DescribeRouterInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRouterInterfaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeRouterInterfacesOutcomeCallable EcsClient::describeRouterInterfacesCallable(const DescribeRouterInterfacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRouterInterfacesOutcome()>>(
			[this, request]()
			{
			return this->describeRouterInterfaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeSavingsPlanEstimationOutcome EcsClient::describeSavingsPlanEstimation(const DescribeSavingsPlanEstimationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSavingsPlanEstimationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSavingsPlanEstimationOutcome(DescribeSavingsPlanEstimationResult(outcome.result()));
	else
		return DescribeSavingsPlanEstimationOutcome(outcome.error());
}

void EcsClient::describeSavingsPlanEstimationAsync(const DescribeSavingsPlanEstimationRequest& request, const DescribeSavingsPlanEstimationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSavingsPlanEstimation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeSavingsPlanEstimationOutcomeCallable EcsClient::describeSavingsPlanEstimationCallable(const DescribeSavingsPlanEstimationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSavingsPlanEstimationOutcome()>>(
			[this, request]()
			{
			return this->describeSavingsPlanEstimation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeSavingsPlanPriceOutcome EcsClient::describeSavingsPlanPrice(const DescribeSavingsPlanPriceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSavingsPlanPriceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSavingsPlanPriceOutcome(DescribeSavingsPlanPriceResult(outcome.result()));
	else
		return DescribeSavingsPlanPriceOutcome(outcome.error());
}

void EcsClient::describeSavingsPlanPriceAsync(const DescribeSavingsPlanPriceRequest& request, const DescribeSavingsPlanPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSavingsPlanPrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeSavingsPlanPriceOutcomeCallable EcsClient::describeSavingsPlanPriceCallable(const DescribeSavingsPlanPriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSavingsPlanPriceOutcome()>>(
			[this, request]()
			{
			return this->describeSavingsPlanPrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeSecurityGroupAttributeOutcome EcsClient::describeSecurityGroupAttribute(const DescribeSecurityGroupAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecurityGroupAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecurityGroupAttributeOutcome(DescribeSecurityGroupAttributeResult(outcome.result()));
	else
		return DescribeSecurityGroupAttributeOutcome(outcome.error());
}

void EcsClient::describeSecurityGroupAttributeAsync(const DescribeSecurityGroupAttributeRequest& request, const DescribeSecurityGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityGroupAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeSecurityGroupAttributeOutcomeCallable EcsClient::describeSecurityGroupAttributeCallable(const DescribeSecurityGroupAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityGroupAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityGroupAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeSecurityGroupReferencesOutcome EcsClient::describeSecurityGroupReferences(const DescribeSecurityGroupReferencesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecurityGroupReferencesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecurityGroupReferencesOutcome(DescribeSecurityGroupReferencesResult(outcome.result()));
	else
		return DescribeSecurityGroupReferencesOutcome(outcome.error());
}

void EcsClient::describeSecurityGroupReferencesAsync(const DescribeSecurityGroupReferencesRequest& request, const DescribeSecurityGroupReferencesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityGroupReferences(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeSecurityGroupReferencesOutcomeCallable EcsClient::describeSecurityGroupReferencesCallable(const DescribeSecurityGroupReferencesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityGroupReferencesOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityGroupReferences(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeSecurityGroupsOutcome EcsClient::describeSecurityGroups(const DescribeSecurityGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecurityGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecurityGroupsOutcome(DescribeSecurityGroupsResult(outcome.result()));
	else
		return DescribeSecurityGroupsOutcome(outcome.error());
}

void EcsClient::describeSecurityGroupsAsync(const DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeSecurityGroupsOutcomeCallable EcsClient::describeSecurityGroupsCallable(const DescribeSecurityGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeSendFileResultsOutcome EcsClient::describeSendFileResults(const DescribeSendFileResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSendFileResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSendFileResultsOutcome(DescribeSendFileResultsResult(outcome.result()));
	else
		return DescribeSendFileResultsOutcome(outcome.error());
}

void EcsClient::describeSendFileResultsAsync(const DescribeSendFileResultsRequest& request, const DescribeSendFileResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSendFileResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeSendFileResultsOutcomeCallable EcsClient::describeSendFileResultsCallable(const DescribeSendFileResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSendFileResultsOutcome()>>(
			[this, request]()
			{
			return this->describeSendFileResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeSnapshotGroupsOutcome EcsClient::describeSnapshotGroups(const DescribeSnapshotGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSnapshotGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSnapshotGroupsOutcome(DescribeSnapshotGroupsResult(outcome.result()));
	else
		return DescribeSnapshotGroupsOutcome(outcome.error());
}

void EcsClient::describeSnapshotGroupsAsync(const DescribeSnapshotGroupsRequest& request, const DescribeSnapshotGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSnapshotGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeSnapshotGroupsOutcomeCallable EcsClient::describeSnapshotGroupsCallable(const DescribeSnapshotGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSnapshotGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeSnapshotGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeSnapshotLinksOutcome EcsClient::describeSnapshotLinks(const DescribeSnapshotLinksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSnapshotLinksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSnapshotLinksOutcome(DescribeSnapshotLinksResult(outcome.result()));
	else
		return DescribeSnapshotLinksOutcome(outcome.error());
}

void EcsClient::describeSnapshotLinksAsync(const DescribeSnapshotLinksRequest& request, const DescribeSnapshotLinksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSnapshotLinks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeSnapshotLinksOutcomeCallable EcsClient::describeSnapshotLinksCallable(const DescribeSnapshotLinksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSnapshotLinksOutcome()>>(
			[this, request]()
			{
			return this->describeSnapshotLinks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeSnapshotMonitorDataOutcome EcsClient::describeSnapshotMonitorData(const DescribeSnapshotMonitorDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSnapshotMonitorDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSnapshotMonitorDataOutcome(DescribeSnapshotMonitorDataResult(outcome.result()));
	else
		return DescribeSnapshotMonitorDataOutcome(outcome.error());
}

void EcsClient::describeSnapshotMonitorDataAsync(const DescribeSnapshotMonitorDataRequest& request, const DescribeSnapshotMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSnapshotMonitorData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeSnapshotMonitorDataOutcomeCallable EcsClient::describeSnapshotMonitorDataCallable(const DescribeSnapshotMonitorDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSnapshotMonitorDataOutcome()>>(
			[this, request]()
			{
			return this->describeSnapshotMonitorData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeSnapshotPackageOutcome EcsClient::describeSnapshotPackage(const DescribeSnapshotPackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSnapshotPackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSnapshotPackageOutcome(DescribeSnapshotPackageResult(outcome.result()));
	else
		return DescribeSnapshotPackageOutcome(outcome.error());
}

void EcsClient::describeSnapshotPackageAsync(const DescribeSnapshotPackageRequest& request, const DescribeSnapshotPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSnapshotPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeSnapshotPackageOutcomeCallable EcsClient::describeSnapshotPackageCallable(const DescribeSnapshotPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSnapshotPackageOutcome()>>(
			[this, request]()
			{
			return this->describeSnapshotPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeSnapshotsOutcome EcsClient::describeSnapshots(const DescribeSnapshotsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSnapshotsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSnapshotsOutcome(DescribeSnapshotsResult(outcome.result()));
	else
		return DescribeSnapshotsOutcome(outcome.error());
}

void EcsClient::describeSnapshotsAsync(const DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSnapshots(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeSnapshotsOutcomeCallable EcsClient::describeSnapshotsCallable(const DescribeSnapshotsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSnapshotsOutcome()>>(
			[this, request]()
			{
			return this->describeSnapshots(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeSnapshotsUsageOutcome EcsClient::describeSnapshotsUsage(const DescribeSnapshotsUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSnapshotsUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSnapshotsUsageOutcome(DescribeSnapshotsUsageResult(outcome.result()));
	else
		return DescribeSnapshotsUsageOutcome(outcome.error());
}

void EcsClient::describeSnapshotsUsageAsync(const DescribeSnapshotsUsageRequest& request, const DescribeSnapshotsUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSnapshotsUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeSnapshotsUsageOutcomeCallable EcsClient::describeSnapshotsUsageCallable(const DescribeSnapshotsUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSnapshotsUsageOutcome()>>(
			[this, request]()
			{
			return this->describeSnapshotsUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeSpotAdviceOutcome EcsClient::describeSpotAdvice(const DescribeSpotAdviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSpotAdviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSpotAdviceOutcome(DescribeSpotAdviceResult(outcome.result()));
	else
		return DescribeSpotAdviceOutcome(outcome.error());
}

void EcsClient::describeSpotAdviceAsync(const DescribeSpotAdviceRequest& request, const DescribeSpotAdviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSpotAdvice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeSpotAdviceOutcomeCallable EcsClient::describeSpotAdviceCallable(const DescribeSpotAdviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSpotAdviceOutcome()>>(
			[this, request]()
			{
			return this->describeSpotAdvice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeSpotPriceHistoryOutcome EcsClient::describeSpotPriceHistory(const DescribeSpotPriceHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSpotPriceHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSpotPriceHistoryOutcome(DescribeSpotPriceHistoryResult(outcome.result()));
	else
		return DescribeSpotPriceHistoryOutcome(outcome.error());
}

void EcsClient::describeSpotPriceHistoryAsync(const DescribeSpotPriceHistoryRequest& request, const DescribeSpotPriceHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSpotPriceHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeSpotPriceHistoryOutcomeCallable EcsClient::describeSpotPriceHistoryCallable(const DescribeSpotPriceHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSpotPriceHistoryOutcome()>>(
			[this, request]()
			{
			return this->describeSpotPriceHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeStorageCapacityUnitsOutcome EcsClient::describeStorageCapacityUnits(const DescribeStorageCapacityUnitsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStorageCapacityUnitsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStorageCapacityUnitsOutcome(DescribeStorageCapacityUnitsResult(outcome.result()));
	else
		return DescribeStorageCapacityUnitsOutcome(outcome.error());
}

void EcsClient::describeStorageCapacityUnitsAsync(const DescribeStorageCapacityUnitsRequest& request, const DescribeStorageCapacityUnitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStorageCapacityUnits(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeStorageCapacityUnitsOutcomeCallable EcsClient::describeStorageCapacityUnitsCallable(const DescribeStorageCapacityUnitsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStorageCapacityUnitsOutcome()>>(
			[this, request]()
			{
			return this->describeStorageCapacityUnits(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeStorageSetDetailsOutcome EcsClient::describeStorageSetDetails(const DescribeStorageSetDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStorageSetDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStorageSetDetailsOutcome(DescribeStorageSetDetailsResult(outcome.result()));
	else
		return DescribeStorageSetDetailsOutcome(outcome.error());
}

void EcsClient::describeStorageSetDetailsAsync(const DescribeStorageSetDetailsRequest& request, const DescribeStorageSetDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStorageSetDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeStorageSetDetailsOutcomeCallable EcsClient::describeStorageSetDetailsCallable(const DescribeStorageSetDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStorageSetDetailsOutcome()>>(
			[this, request]()
			{
			return this->describeStorageSetDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeStorageSetsOutcome EcsClient::describeStorageSets(const DescribeStorageSetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStorageSetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStorageSetsOutcome(DescribeStorageSetsResult(outcome.result()));
	else
		return DescribeStorageSetsOutcome(outcome.error());
}

void EcsClient::describeStorageSetsAsync(const DescribeStorageSetsRequest& request, const DescribeStorageSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStorageSets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeStorageSetsOutcomeCallable EcsClient::describeStorageSetsCallable(const DescribeStorageSetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStorageSetsOutcome()>>(
			[this, request]()
			{
			return this->describeStorageSets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeTagsOutcome EcsClient::describeTags(const DescribeTagsRequest &request) const
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

void EcsClient::describeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeTagsOutcomeCallable EcsClient::describeTagsCallable(const DescribeTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTagsOutcome()>>(
			[this, request]()
			{
			return this->describeTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeTaskAttributeOutcome EcsClient::describeTaskAttribute(const DescribeTaskAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTaskAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTaskAttributeOutcome(DescribeTaskAttributeResult(outcome.result()));
	else
		return DescribeTaskAttributeOutcome(outcome.error());
}

void EcsClient::describeTaskAttributeAsync(const DescribeTaskAttributeRequest& request, const DescribeTaskAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTaskAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeTaskAttributeOutcomeCallable EcsClient::describeTaskAttributeCallable(const DescribeTaskAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTaskAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeTaskAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeTasksOutcome EcsClient::describeTasks(const DescribeTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTasksOutcome(DescribeTasksResult(outcome.result()));
	else
		return DescribeTasksOutcome(outcome.error());
}

void EcsClient::describeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeTasksOutcomeCallable EcsClient::describeTasksCallable(const DescribeTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTasksOutcome()>>(
			[this, request]()
			{
			return this->describeTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeTerminalSessionsOutcome EcsClient::describeTerminalSessions(const DescribeTerminalSessionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTerminalSessionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTerminalSessionsOutcome(DescribeTerminalSessionsResult(outcome.result()));
	else
		return DescribeTerminalSessionsOutcome(outcome.error());
}

void EcsClient::describeTerminalSessionsAsync(const DescribeTerminalSessionsRequest& request, const DescribeTerminalSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTerminalSessions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeTerminalSessionsOutcomeCallable EcsClient::describeTerminalSessionsCallable(const DescribeTerminalSessionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTerminalSessionsOutcome()>>(
			[this, request]()
			{
			return this->describeTerminalSessions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeUserBusinessBehaviorOutcome EcsClient::describeUserBusinessBehavior(const DescribeUserBusinessBehaviorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserBusinessBehaviorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserBusinessBehaviorOutcome(DescribeUserBusinessBehaviorResult(outcome.result()));
	else
		return DescribeUserBusinessBehaviorOutcome(outcome.error());
}

void EcsClient::describeUserBusinessBehaviorAsync(const DescribeUserBusinessBehaviorRequest& request, const DescribeUserBusinessBehaviorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserBusinessBehavior(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeUserBusinessBehaviorOutcomeCallable EcsClient::describeUserBusinessBehaviorCallable(const DescribeUserBusinessBehaviorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserBusinessBehaviorOutcome()>>(
			[this, request]()
			{
			return this->describeUserBusinessBehavior(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeUserDataOutcome EcsClient::describeUserData(const DescribeUserDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserDataOutcome(DescribeUserDataResult(outcome.result()));
	else
		return DescribeUserDataOutcome(outcome.error());
}

void EcsClient::describeUserDataAsync(const DescribeUserDataRequest& request, const DescribeUserDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeUserDataOutcomeCallable EcsClient::describeUserDataCallable(const DescribeUserDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserDataOutcome()>>(
			[this, request]()
			{
			return this->describeUserData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeVRoutersOutcome EcsClient::describeVRouters(const DescribeVRoutersRequest &request) const
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

void EcsClient::describeVRoutersAsync(const DescribeVRoutersRequest& request, const DescribeVRoutersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVRouters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeVRoutersOutcomeCallable EcsClient::describeVRoutersCallable(const DescribeVRoutersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVRoutersOutcome()>>(
			[this, request]()
			{
			return this->describeVRouters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeVSwitchesOutcome EcsClient::describeVSwitches(const DescribeVSwitchesRequest &request) const
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

void EcsClient::describeVSwitchesAsync(const DescribeVSwitchesRequest& request, const DescribeVSwitchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVSwitches(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeVSwitchesOutcomeCallable EcsClient::describeVSwitchesCallable(const DescribeVSwitchesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVSwitchesOutcome()>>(
			[this, request]()
			{
			return this->describeVSwitches(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeVirtualBorderRoutersOutcome EcsClient::describeVirtualBorderRouters(const DescribeVirtualBorderRoutersRequest &request) const
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

void EcsClient::describeVirtualBorderRoutersAsync(const DescribeVirtualBorderRoutersRequest& request, const DescribeVirtualBorderRoutersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVirtualBorderRouters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeVirtualBorderRoutersOutcomeCallable EcsClient::describeVirtualBorderRoutersCallable(const DescribeVirtualBorderRoutersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVirtualBorderRoutersOutcome()>>(
			[this, request]()
			{
			return this->describeVirtualBorderRouters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeVirtualBorderRoutersForPhysicalConnectionOutcome EcsClient::describeVirtualBorderRoutersForPhysicalConnection(const DescribeVirtualBorderRoutersForPhysicalConnectionRequest &request) const
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

void EcsClient::describeVirtualBorderRoutersForPhysicalConnectionAsync(const DescribeVirtualBorderRoutersForPhysicalConnectionRequest& request, const DescribeVirtualBorderRoutersForPhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVirtualBorderRoutersForPhysicalConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeVirtualBorderRoutersForPhysicalConnectionOutcomeCallable EcsClient::describeVirtualBorderRoutersForPhysicalConnectionCallable(const DescribeVirtualBorderRoutersForPhysicalConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVirtualBorderRoutersForPhysicalConnectionOutcome()>>(
			[this, request]()
			{
			return this->describeVirtualBorderRoutersForPhysicalConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeVpcsOutcome EcsClient::describeVpcs(const DescribeVpcsRequest &request) const
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

void EcsClient::describeVpcsAsync(const DescribeVpcsRequest& request, const DescribeVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVpcs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeVpcsOutcomeCallable EcsClient::describeVpcsCallable(const DescribeVpcsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVpcsOutcome()>>(
			[this, request]()
			{
			return this->describeVpcs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeZonesOutcome EcsClient::describeZones(const DescribeZonesRequest &request) const
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

void EcsClient::describeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeZonesOutcomeCallable EcsClient::describeZonesCallable(const DescribeZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeZonesOutcome()>>(
			[this, request]()
			{
			return this->describeZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DetachClassicLinkVpcOutcome EcsClient::detachClassicLinkVpc(const DetachClassicLinkVpcRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachClassicLinkVpcOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachClassicLinkVpcOutcome(DetachClassicLinkVpcResult(outcome.result()));
	else
		return DetachClassicLinkVpcOutcome(outcome.error());
}

void EcsClient::detachClassicLinkVpcAsync(const DetachClassicLinkVpcRequest& request, const DetachClassicLinkVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachClassicLinkVpc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DetachClassicLinkVpcOutcomeCallable EcsClient::detachClassicLinkVpcCallable(const DetachClassicLinkVpcRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachClassicLinkVpcOutcome()>>(
			[this, request]()
			{
			return this->detachClassicLinkVpc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DetachDiskOutcome EcsClient::detachDisk(const DetachDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachDiskOutcome(DetachDiskResult(outcome.result()));
	else
		return DetachDiskOutcome(outcome.error());
}

void EcsClient::detachDiskAsync(const DetachDiskRequest& request, const DetachDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DetachDiskOutcomeCallable EcsClient::detachDiskCallable(const DetachDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachDiskOutcome()>>(
			[this, request]()
			{
			return this->detachDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DetachInstanceRamRoleOutcome EcsClient::detachInstanceRamRole(const DetachInstanceRamRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachInstanceRamRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachInstanceRamRoleOutcome(DetachInstanceRamRoleResult(outcome.result()));
	else
		return DetachInstanceRamRoleOutcome(outcome.error());
}

void EcsClient::detachInstanceRamRoleAsync(const DetachInstanceRamRoleRequest& request, const DetachInstanceRamRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachInstanceRamRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DetachInstanceRamRoleOutcomeCallable EcsClient::detachInstanceRamRoleCallable(const DetachInstanceRamRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachInstanceRamRoleOutcome()>>(
			[this, request]()
			{
			return this->detachInstanceRamRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DetachKeyPairOutcome EcsClient::detachKeyPair(const DetachKeyPairRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachKeyPairOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachKeyPairOutcome(DetachKeyPairResult(outcome.result()));
	else
		return DetachKeyPairOutcome(outcome.error());
}

void EcsClient::detachKeyPairAsync(const DetachKeyPairRequest& request, const DetachKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachKeyPair(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DetachKeyPairOutcomeCallable EcsClient::detachKeyPairCallable(const DetachKeyPairRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachKeyPairOutcome()>>(
			[this, request]()
			{
			return this->detachKeyPair(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DetachNetworkInterfaceOutcome EcsClient::detachNetworkInterface(const DetachNetworkInterfaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachNetworkInterfaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachNetworkInterfaceOutcome(DetachNetworkInterfaceResult(outcome.result()));
	else
		return DetachNetworkInterfaceOutcome(outcome.error());
}

void EcsClient::detachNetworkInterfaceAsync(const DetachNetworkInterfaceRequest& request, const DetachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachNetworkInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DetachNetworkInterfaceOutcomeCallable EcsClient::detachNetworkInterfaceCallable(const DetachNetworkInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachNetworkInterfaceOutcome()>>(
			[this, request]()
			{
			return this->detachNetworkInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DisableActivationOutcome EcsClient::disableActivation(const DisableActivationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableActivationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableActivationOutcome(DisableActivationResult(outcome.result()));
	else
		return DisableActivationOutcome(outcome.error());
}

void EcsClient::disableActivationAsync(const DisableActivationRequest& request, const DisableActivationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableActivation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DisableActivationOutcomeCallable EcsClient::disableActivationCallable(const DisableActivationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableActivationOutcome()>>(
			[this, request]()
			{
			return this->disableActivation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DisableDiskEncryptionByDefaultOutcome EcsClient::disableDiskEncryptionByDefault(const DisableDiskEncryptionByDefaultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableDiskEncryptionByDefaultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableDiskEncryptionByDefaultOutcome(DisableDiskEncryptionByDefaultResult(outcome.result()));
	else
		return DisableDiskEncryptionByDefaultOutcome(outcome.error());
}

void EcsClient::disableDiskEncryptionByDefaultAsync(const DisableDiskEncryptionByDefaultRequest& request, const DisableDiskEncryptionByDefaultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableDiskEncryptionByDefault(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DisableDiskEncryptionByDefaultOutcomeCallable EcsClient::disableDiskEncryptionByDefaultCallable(const DisableDiskEncryptionByDefaultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableDiskEncryptionByDefaultOutcome()>>(
			[this, request]()
			{
			return this->disableDiskEncryptionByDefault(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::EnableDiskEncryptionByDefaultOutcome EcsClient::enableDiskEncryptionByDefault(const EnableDiskEncryptionByDefaultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableDiskEncryptionByDefaultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableDiskEncryptionByDefaultOutcome(EnableDiskEncryptionByDefaultResult(outcome.result()));
	else
		return EnableDiskEncryptionByDefaultOutcome(outcome.error());
}

void EcsClient::enableDiskEncryptionByDefaultAsync(const EnableDiskEncryptionByDefaultRequest& request, const EnableDiskEncryptionByDefaultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableDiskEncryptionByDefault(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::EnableDiskEncryptionByDefaultOutcomeCallable EcsClient::enableDiskEncryptionByDefaultCallable(const EnableDiskEncryptionByDefaultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableDiskEncryptionByDefaultOutcome()>>(
			[this, request]()
			{
			return this->enableDiskEncryptionByDefault(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::EnablePhysicalConnectionOutcome EcsClient::enablePhysicalConnection(const EnablePhysicalConnectionRequest &request) const
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

void EcsClient::enablePhysicalConnectionAsync(const EnablePhysicalConnectionRequest& request, const EnablePhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enablePhysicalConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::EnablePhysicalConnectionOutcomeCallable EcsClient::enablePhysicalConnectionCallable(const EnablePhysicalConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnablePhysicalConnectionOutcome()>>(
			[this, request]()
			{
			return this->enablePhysicalConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::EndTerminalSessionOutcome EcsClient::endTerminalSession(const EndTerminalSessionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EndTerminalSessionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EndTerminalSessionOutcome(EndTerminalSessionResult(outcome.result()));
	else
		return EndTerminalSessionOutcome(outcome.error());
}

void EcsClient::endTerminalSessionAsync(const EndTerminalSessionRequest& request, const EndTerminalSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, endTerminalSession(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::EndTerminalSessionOutcomeCallable EcsClient::endTerminalSessionCallable(const EndTerminalSessionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EndTerminalSessionOutcome()>>(
			[this, request]()
			{
			return this->endTerminalSession(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ExportImageOutcome EcsClient::exportImage(const ExportImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportImageOutcome(ExportImageResult(outcome.result()));
	else
		return ExportImageOutcome(outcome.error());
}

void EcsClient::exportImageAsync(const ExportImageRequest& request, const ExportImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ExportImageOutcomeCallable EcsClient::exportImageCallable(const ExportImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportImageOutcome()>>(
			[this, request]()
			{
			return this->exportImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ExportSnapshotOutcome EcsClient::exportSnapshot(const ExportSnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportSnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportSnapshotOutcome(ExportSnapshotResult(outcome.result()));
	else
		return ExportSnapshotOutcome(outcome.error());
}

void EcsClient::exportSnapshotAsync(const ExportSnapshotRequest& request, const ExportSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ExportSnapshotOutcomeCallable EcsClient::exportSnapshotCallable(const ExportSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportSnapshotOutcome()>>(
			[this, request]()
			{
			return this->exportSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::GetInstanceConsoleOutputOutcome EcsClient::getInstanceConsoleOutput(const GetInstanceConsoleOutputRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceConsoleOutputOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceConsoleOutputOutcome(GetInstanceConsoleOutputResult(outcome.result()));
	else
		return GetInstanceConsoleOutputOutcome(outcome.error());
}

void EcsClient::getInstanceConsoleOutputAsync(const GetInstanceConsoleOutputRequest& request, const GetInstanceConsoleOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceConsoleOutput(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::GetInstanceConsoleOutputOutcomeCallable EcsClient::getInstanceConsoleOutputCallable(const GetInstanceConsoleOutputRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceConsoleOutputOutcome()>>(
			[this, request]()
			{
			return this->getInstanceConsoleOutput(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::GetInstanceScreenshotOutcome EcsClient::getInstanceScreenshot(const GetInstanceScreenshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceScreenshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceScreenshotOutcome(GetInstanceScreenshotResult(outcome.result()));
	else
		return GetInstanceScreenshotOutcome(outcome.error());
}

void EcsClient::getInstanceScreenshotAsync(const GetInstanceScreenshotRequest& request, const GetInstanceScreenshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceScreenshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::GetInstanceScreenshotOutcomeCallable EcsClient::getInstanceScreenshotCallable(const GetInstanceScreenshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceScreenshotOutcome()>>(
			[this, request]()
			{
			return this->getInstanceScreenshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ImportImageOutcome EcsClient::importImage(const ImportImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportImageOutcome(ImportImageResult(outcome.result()));
	else
		return ImportImageOutcome(outcome.error());
}

void EcsClient::importImageAsync(const ImportImageRequest& request, const ImportImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ImportImageOutcomeCallable EcsClient::importImageCallable(const ImportImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportImageOutcome()>>(
			[this, request]()
			{
			return this->importImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ImportKeyPairOutcome EcsClient::importKeyPair(const ImportKeyPairRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportKeyPairOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportKeyPairOutcome(ImportKeyPairResult(outcome.result()));
	else
		return ImportKeyPairOutcome(outcome.error());
}

void EcsClient::importKeyPairAsync(const ImportKeyPairRequest& request, const ImportKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importKeyPair(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ImportKeyPairOutcomeCallable EcsClient::importKeyPairCallable(const ImportKeyPairRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportKeyPairOutcome()>>(
			[this, request]()
			{
			return this->importKeyPair(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::InstallCloudAssistantOutcome EcsClient::installCloudAssistant(const InstallCloudAssistantRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InstallCloudAssistantOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InstallCloudAssistantOutcome(InstallCloudAssistantResult(outcome.result()));
	else
		return InstallCloudAssistantOutcome(outcome.error());
}

void EcsClient::installCloudAssistantAsync(const InstallCloudAssistantRequest& request, const InstallCloudAssistantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, installCloudAssistant(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::InstallCloudAssistantOutcomeCallable EcsClient::installCloudAssistantCallable(const InstallCloudAssistantRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InstallCloudAssistantOutcome()>>(
			[this, request]()
			{
			return this->installCloudAssistant(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::InvokeCommandOutcome EcsClient::invokeCommand(const InvokeCommandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InvokeCommandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InvokeCommandOutcome(InvokeCommandResult(outcome.result()));
	else
		return InvokeCommandOutcome(outcome.error());
}

void EcsClient::invokeCommandAsync(const InvokeCommandRequest& request, const InvokeCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, invokeCommand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::InvokeCommandOutcomeCallable EcsClient::invokeCommandCallable(const InvokeCommandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InvokeCommandOutcome()>>(
			[this, request]()
			{
			return this->invokeCommand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::JoinResourceGroupOutcome EcsClient::joinResourceGroup(const JoinResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return JoinResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return JoinResourceGroupOutcome(JoinResourceGroupResult(outcome.result()));
	else
		return JoinResourceGroupOutcome(outcome.error());
}

void EcsClient::joinResourceGroupAsync(const JoinResourceGroupRequest& request, const JoinResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, joinResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::JoinResourceGroupOutcomeCallable EcsClient::joinResourceGroupCallable(const JoinResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<JoinResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->joinResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::JoinSecurityGroupOutcome EcsClient::joinSecurityGroup(const JoinSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return JoinSecurityGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return JoinSecurityGroupOutcome(JoinSecurityGroupResult(outcome.result()));
	else
		return JoinSecurityGroupOutcome(outcome.error());
}

void EcsClient::joinSecurityGroupAsync(const JoinSecurityGroupRequest& request, const JoinSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, joinSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::JoinSecurityGroupOutcomeCallable EcsClient::joinSecurityGroupCallable(const JoinSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<JoinSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->joinSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::LeaveSecurityGroupOutcome EcsClient::leaveSecurityGroup(const LeaveSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LeaveSecurityGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LeaveSecurityGroupOutcome(LeaveSecurityGroupResult(outcome.result()));
	else
		return LeaveSecurityGroupOutcome(outcome.error());
}

void EcsClient::leaveSecurityGroupAsync(const LeaveSecurityGroupRequest& request, const LeaveSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, leaveSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::LeaveSecurityGroupOutcomeCallable EcsClient::leaveSecurityGroupCallable(const LeaveSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LeaveSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->leaveSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ListPluginStatusOutcome EcsClient::listPluginStatus(const ListPluginStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPluginStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPluginStatusOutcome(ListPluginStatusResult(outcome.result()));
	else
		return ListPluginStatusOutcome(outcome.error());
}

void EcsClient::listPluginStatusAsync(const ListPluginStatusRequest& request, const ListPluginStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPluginStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ListPluginStatusOutcomeCallable EcsClient::listPluginStatusCallable(const ListPluginStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPluginStatusOutcome()>>(
			[this, request]()
			{
			return this->listPluginStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ListTagResourcesOutcome EcsClient::listTagResources(const ListTagResourcesRequest &request) const
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

void EcsClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ListTagResourcesOutcomeCallable EcsClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyAutoProvisioningGroupOutcome EcsClient::modifyAutoProvisioningGroup(const ModifyAutoProvisioningGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAutoProvisioningGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAutoProvisioningGroupOutcome(ModifyAutoProvisioningGroupResult(outcome.result()));
	else
		return ModifyAutoProvisioningGroupOutcome(outcome.error());
}

void EcsClient::modifyAutoProvisioningGroupAsync(const ModifyAutoProvisioningGroupRequest& request, const ModifyAutoProvisioningGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAutoProvisioningGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyAutoProvisioningGroupOutcomeCallable EcsClient::modifyAutoProvisioningGroupCallable(const ModifyAutoProvisioningGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAutoProvisioningGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyAutoProvisioningGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyAutoSnapshotPolicyExOutcome EcsClient::modifyAutoSnapshotPolicyEx(const ModifyAutoSnapshotPolicyExRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAutoSnapshotPolicyExOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAutoSnapshotPolicyExOutcome(ModifyAutoSnapshotPolicyExResult(outcome.result()));
	else
		return ModifyAutoSnapshotPolicyExOutcome(outcome.error());
}

void EcsClient::modifyAutoSnapshotPolicyExAsync(const ModifyAutoSnapshotPolicyExRequest& request, const ModifyAutoSnapshotPolicyExAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAutoSnapshotPolicyEx(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyAutoSnapshotPolicyExOutcomeCallable EcsClient::modifyAutoSnapshotPolicyExCallable(const ModifyAutoSnapshotPolicyExRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAutoSnapshotPolicyExOutcome()>>(
			[this, request]()
			{
			return this->modifyAutoSnapshotPolicyEx(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyBandwidthPackageSpecOutcome EcsClient::modifyBandwidthPackageSpec(const ModifyBandwidthPackageSpecRequest &request) const
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

void EcsClient::modifyBandwidthPackageSpecAsync(const ModifyBandwidthPackageSpecRequest& request, const ModifyBandwidthPackageSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBandwidthPackageSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyBandwidthPackageSpecOutcomeCallable EcsClient::modifyBandwidthPackageSpecCallable(const ModifyBandwidthPackageSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBandwidthPackageSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyBandwidthPackageSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyCapacityReservationOutcome EcsClient::modifyCapacityReservation(const ModifyCapacityReservationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCapacityReservationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCapacityReservationOutcome(ModifyCapacityReservationResult(outcome.result()));
	else
		return ModifyCapacityReservationOutcome(outcome.error());
}

void EcsClient::modifyCapacityReservationAsync(const ModifyCapacityReservationRequest& request, const ModifyCapacityReservationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCapacityReservation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyCapacityReservationOutcomeCallable EcsClient::modifyCapacityReservationCallable(const ModifyCapacityReservationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCapacityReservationOutcome()>>(
			[this, request]()
			{
			return this->modifyCapacityReservation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyCloudAssistantSettingsOutcome EcsClient::modifyCloudAssistantSettings(const ModifyCloudAssistantSettingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCloudAssistantSettingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCloudAssistantSettingsOutcome(ModifyCloudAssistantSettingsResult(outcome.result()));
	else
		return ModifyCloudAssistantSettingsOutcome(outcome.error());
}

void EcsClient::modifyCloudAssistantSettingsAsync(const ModifyCloudAssistantSettingsRequest& request, const ModifyCloudAssistantSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCloudAssistantSettings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyCloudAssistantSettingsOutcomeCallable EcsClient::modifyCloudAssistantSettingsCallable(const ModifyCloudAssistantSettingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCloudAssistantSettingsOutcome()>>(
			[this, request]()
			{
			return this->modifyCloudAssistantSettings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyCommandOutcome EcsClient::modifyCommand(const ModifyCommandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCommandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCommandOutcome(ModifyCommandResult(outcome.result()));
	else
		return ModifyCommandOutcome(outcome.error());
}

void EcsClient::modifyCommandAsync(const ModifyCommandRequest& request, const ModifyCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCommand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyCommandOutcomeCallable EcsClient::modifyCommandCallable(const ModifyCommandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCommandOutcome()>>(
			[this, request]()
			{
			return this->modifyCommand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyDedicatedHostAttributeOutcome EcsClient::modifyDedicatedHostAttribute(const ModifyDedicatedHostAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDedicatedHostAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDedicatedHostAttributeOutcome(ModifyDedicatedHostAttributeResult(outcome.result()));
	else
		return ModifyDedicatedHostAttributeOutcome(outcome.error());
}

void EcsClient::modifyDedicatedHostAttributeAsync(const ModifyDedicatedHostAttributeRequest& request, const ModifyDedicatedHostAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDedicatedHostAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyDedicatedHostAttributeOutcomeCallable EcsClient::modifyDedicatedHostAttributeCallable(const ModifyDedicatedHostAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDedicatedHostAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyDedicatedHostAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyDedicatedHostAutoReleaseTimeOutcome EcsClient::modifyDedicatedHostAutoReleaseTime(const ModifyDedicatedHostAutoReleaseTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDedicatedHostAutoReleaseTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDedicatedHostAutoReleaseTimeOutcome(ModifyDedicatedHostAutoReleaseTimeResult(outcome.result()));
	else
		return ModifyDedicatedHostAutoReleaseTimeOutcome(outcome.error());
}

void EcsClient::modifyDedicatedHostAutoReleaseTimeAsync(const ModifyDedicatedHostAutoReleaseTimeRequest& request, const ModifyDedicatedHostAutoReleaseTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDedicatedHostAutoReleaseTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyDedicatedHostAutoReleaseTimeOutcomeCallable EcsClient::modifyDedicatedHostAutoReleaseTimeCallable(const ModifyDedicatedHostAutoReleaseTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDedicatedHostAutoReleaseTimeOutcome()>>(
			[this, request]()
			{
			return this->modifyDedicatedHostAutoReleaseTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyDedicatedHostAutoRenewAttributeOutcome EcsClient::modifyDedicatedHostAutoRenewAttribute(const ModifyDedicatedHostAutoRenewAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDedicatedHostAutoRenewAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDedicatedHostAutoRenewAttributeOutcome(ModifyDedicatedHostAutoRenewAttributeResult(outcome.result()));
	else
		return ModifyDedicatedHostAutoRenewAttributeOutcome(outcome.error());
}

void EcsClient::modifyDedicatedHostAutoRenewAttributeAsync(const ModifyDedicatedHostAutoRenewAttributeRequest& request, const ModifyDedicatedHostAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDedicatedHostAutoRenewAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyDedicatedHostAutoRenewAttributeOutcomeCallable EcsClient::modifyDedicatedHostAutoRenewAttributeCallable(const ModifyDedicatedHostAutoRenewAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDedicatedHostAutoRenewAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyDedicatedHostAutoRenewAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyDedicatedHostClusterAttributeOutcome EcsClient::modifyDedicatedHostClusterAttribute(const ModifyDedicatedHostClusterAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDedicatedHostClusterAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDedicatedHostClusterAttributeOutcome(ModifyDedicatedHostClusterAttributeResult(outcome.result()));
	else
		return ModifyDedicatedHostClusterAttributeOutcome(outcome.error());
}

void EcsClient::modifyDedicatedHostClusterAttributeAsync(const ModifyDedicatedHostClusterAttributeRequest& request, const ModifyDedicatedHostClusterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDedicatedHostClusterAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyDedicatedHostClusterAttributeOutcomeCallable EcsClient::modifyDedicatedHostClusterAttributeCallable(const ModifyDedicatedHostClusterAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDedicatedHostClusterAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyDedicatedHostClusterAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyDedicatedHostsChargeTypeOutcome EcsClient::modifyDedicatedHostsChargeType(const ModifyDedicatedHostsChargeTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDedicatedHostsChargeTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDedicatedHostsChargeTypeOutcome(ModifyDedicatedHostsChargeTypeResult(outcome.result()));
	else
		return ModifyDedicatedHostsChargeTypeOutcome(outcome.error());
}

void EcsClient::modifyDedicatedHostsChargeTypeAsync(const ModifyDedicatedHostsChargeTypeRequest& request, const ModifyDedicatedHostsChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDedicatedHostsChargeType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyDedicatedHostsChargeTypeOutcomeCallable EcsClient::modifyDedicatedHostsChargeTypeCallable(const ModifyDedicatedHostsChargeTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDedicatedHostsChargeTypeOutcome()>>(
			[this, request]()
			{
			return this->modifyDedicatedHostsChargeType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyDeploymentSetAttributeOutcome EcsClient::modifyDeploymentSetAttribute(const ModifyDeploymentSetAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDeploymentSetAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDeploymentSetAttributeOutcome(ModifyDeploymentSetAttributeResult(outcome.result()));
	else
		return ModifyDeploymentSetAttributeOutcome(outcome.error());
}

void EcsClient::modifyDeploymentSetAttributeAsync(const ModifyDeploymentSetAttributeRequest& request, const ModifyDeploymentSetAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDeploymentSetAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyDeploymentSetAttributeOutcomeCallable EcsClient::modifyDeploymentSetAttributeCallable(const ModifyDeploymentSetAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDeploymentSetAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyDeploymentSetAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyDiagnosticMetricSetOutcome EcsClient::modifyDiagnosticMetricSet(const ModifyDiagnosticMetricSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDiagnosticMetricSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDiagnosticMetricSetOutcome(ModifyDiagnosticMetricSetResult(outcome.result()));
	else
		return ModifyDiagnosticMetricSetOutcome(outcome.error());
}

void EcsClient::modifyDiagnosticMetricSetAsync(const ModifyDiagnosticMetricSetRequest& request, const ModifyDiagnosticMetricSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDiagnosticMetricSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyDiagnosticMetricSetOutcomeCallable EcsClient::modifyDiagnosticMetricSetCallable(const ModifyDiagnosticMetricSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDiagnosticMetricSetOutcome()>>(
			[this, request]()
			{
			return this->modifyDiagnosticMetricSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyDiskAttributeOutcome EcsClient::modifyDiskAttribute(const ModifyDiskAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDiskAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDiskAttributeOutcome(ModifyDiskAttributeResult(outcome.result()));
	else
		return ModifyDiskAttributeOutcome(outcome.error());
}

void EcsClient::modifyDiskAttributeAsync(const ModifyDiskAttributeRequest& request, const ModifyDiskAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDiskAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyDiskAttributeOutcomeCallable EcsClient::modifyDiskAttributeCallable(const ModifyDiskAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDiskAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyDiskAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyDiskChargeTypeOutcome EcsClient::modifyDiskChargeType(const ModifyDiskChargeTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDiskChargeTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDiskChargeTypeOutcome(ModifyDiskChargeTypeResult(outcome.result()));
	else
		return ModifyDiskChargeTypeOutcome(outcome.error());
}

void EcsClient::modifyDiskChargeTypeAsync(const ModifyDiskChargeTypeRequest& request, const ModifyDiskChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDiskChargeType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyDiskChargeTypeOutcomeCallable EcsClient::modifyDiskChargeTypeCallable(const ModifyDiskChargeTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDiskChargeTypeOutcome()>>(
			[this, request]()
			{
			return this->modifyDiskChargeType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyDiskDefaultKMSKeyIdOutcome EcsClient::modifyDiskDefaultKMSKeyId(const ModifyDiskDefaultKMSKeyIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDiskDefaultKMSKeyIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDiskDefaultKMSKeyIdOutcome(ModifyDiskDefaultKMSKeyIdResult(outcome.result()));
	else
		return ModifyDiskDefaultKMSKeyIdOutcome(outcome.error());
}

void EcsClient::modifyDiskDefaultKMSKeyIdAsync(const ModifyDiskDefaultKMSKeyIdRequest& request, const ModifyDiskDefaultKMSKeyIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDiskDefaultKMSKeyId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyDiskDefaultKMSKeyIdOutcomeCallable EcsClient::modifyDiskDefaultKMSKeyIdCallable(const ModifyDiskDefaultKMSKeyIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDiskDefaultKMSKeyIdOutcome()>>(
			[this, request]()
			{
			return this->modifyDiskDefaultKMSKeyId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyDiskDeploymentOutcome EcsClient::modifyDiskDeployment(const ModifyDiskDeploymentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDiskDeploymentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDiskDeploymentOutcome(ModifyDiskDeploymentResult(outcome.result()));
	else
		return ModifyDiskDeploymentOutcome(outcome.error());
}

void EcsClient::modifyDiskDeploymentAsync(const ModifyDiskDeploymentRequest& request, const ModifyDiskDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDiskDeployment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyDiskDeploymentOutcomeCallable EcsClient::modifyDiskDeploymentCallable(const ModifyDiskDeploymentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDiskDeploymentOutcome()>>(
			[this, request]()
			{
			return this->modifyDiskDeployment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyDiskSpecOutcome EcsClient::modifyDiskSpec(const ModifyDiskSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDiskSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDiskSpecOutcome(ModifyDiskSpecResult(outcome.result()));
	else
		return ModifyDiskSpecOutcome(outcome.error());
}

void EcsClient::modifyDiskSpecAsync(const ModifyDiskSpecRequest& request, const ModifyDiskSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDiskSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyDiskSpecOutcomeCallable EcsClient::modifyDiskSpecCallable(const ModifyDiskSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDiskSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyDiskSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyEipAddressAttributeOutcome EcsClient::modifyEipAddressAttribute(const ModifyEipAddressAttributeRequest &request) const
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

void EcsClient::modifyEipAddressAttributeAsync(const ModifyEipAddressAttributeRequest& request, const ModifyEipAddressAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyEipAddressAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyEipAddressAttributeOutcomeCallable EcsClient::modifyEipAddressAttributeCallable(const ModifyEipAddressAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyEipAddressAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyEipAddressAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyElasticityAssuranceOutcome EcsClient::modifyElasticityAssurance(const ModifyElasticityAssuranceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyElasticityAssuranceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyElasticityAssuranceOutcome(ModifyElasticityAssuranceResult(outcome.result()));
	else
		return ModifyElasticityAssuranceOutcome(outcome.error());
}

void EcsClient::modifyElasticityAssuranceAsync(const ModifyElasticityAssuranceRequest& request, const ModifyElasticityAssuranceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyElasticityAssurance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyElasticityAssuranceOutcomeCallable EcsClient::modifyElasticityAssuranceCallable(const ModifyElasticityAssuranceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyElasticityAssuranceOutcome()>>(
			[this, request]()
			{
			return this->modifyElasticityAssurance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyElasticityAssuranceAutoRenewAttributeOutcome EcsClient::modifyElasticityAssuranceAutoRenewAttribute(const ModifyElasticityAssuranceAutoRenewAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyElasticityAssuranceAutoRenewAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyElasticityAssuranceAutoRenewAttributeOutcome(ModifyElasticityAssuranceAutoRenewAttributeResult(outcome.result()));
	else
		return ModifyElasticityAssuranceAutoRenewAttributeOutcome(outcome.error());
}

void EcsClient::modifyElasticityAssuranceAutoRenewAttributeAsync(const ModifyElasticityAssuranceAutoRenewAttributeRequest& request, const ModifyElasticityAssuranceAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyElasticityAssuranceAutoRenewAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyElasticityAssuranceAutoRenewAttributeOutcomeCallable EcsClient::modifyElasticityAssuranceAutoRenewAttributeCallable(const ModifyElasticityAssuranceAutoRenewAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyElasticityAssuranceAutoRenewAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyElasticityAssuranceAutoRenewAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyForwardEntryOutcome EcsClient::modifyForwardEntry(const ModifyForwardEntryRequest &request) const
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

void EcsClient::modifyForwardEntryAsync(const ModifyForwardEntryRequest& request, const ModifyForwardEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyForwardEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyForwardEntryOutcomeCallable EcsClient::modifyForwardEntryCallable(const ModifyForwardEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyForwardEntryOutcome()>>(
			[this, request]()
			{
			return this->modifyForwardEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyHaVipAttributeOutcome EcsClient::modifyHaVipAttribute(const ModifyHaVipAttributeRequest &request) const
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

void EcsClient::modifyHaVipAttributeAsync(const ModifyHaVipAttributeRequest& request, const ModifyHaVipAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyHaVipAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyHaVipAttributeOutcomeCallable EcsClient::modifyHaVipAttributeCallable(const ModifyHaVipAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyHaVipAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyHaVipAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyHpcClusterAttributeOutcome EcsClient::modifyHpcClusterAttribute(const ModifyHpcClusterAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyHpcClusterAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyHpcClusterAttributeOutcome(ModifyHpcClusterAttributeResult(outcome.result()));
	else
		return ModifyHpcClusterAttributeOutcome(outcome.error());
}

void EcsClient::modifyHpcClusterAttributeAsync(const ModifyHpcClusterAttributeRequest& request, const ModifyHpcClusterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyHpcClusterAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyHpcClusterAttributeOutcomeCallable EcsClient::modifyHpcClusterAttributeCallable(const ModifyHpcClusterAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyHpcClusterAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyHpcClusterAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyImageAttributeOutcome EcsClient::modifyImageAttribute(const ModifyImageAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyImageAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyImageAttributeOutcome(ModifyImageAttributeResult(outcome.result()));
	else
		return ModifyImageAttributeOutcome(outcome.error());
}

void EcsClient::modifyImageAttributeAsync(const ModifyImageAttributeRequest& request, const ModifyImageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyImageAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyImageAttributeOutcomeCallable EcsClient::modifyImageAttributeCallable(const ModifyImageAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyImageAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyImageAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyImageShareGroupPermissionOutcome EcsClient::modifyImageShareGroupPermission(const ModifyImageShareGroupPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyImageShareGroupPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyImageShareGroupPermissionOutcome(ModifyImageShareGroupPermissionResult(outcome.result()));
	else
		return ModifyImageShareGroupPermissionOutcome(outcome.error());
}

void EcsClient::modifyImageShareGroupPermissionAsync(const ModifyImageShareGroupPermissionRequest& request, const ModifyImageShareGroupPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyImageShareGroupPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyImageShareGroupPermissionOutcomeCallable EcsClient::modifyImageShareGroupPermissionCallable(const ModifyImageShareGroupPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyImageShareGroupPermissionOutcome()>>(
			[this, request]()
			{
			return this->modifyImageShareGroupPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyImageSharePermissionOutcome EcsClient::modifyImageSharePermission(const ModifyImageSharePermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyImageSharePermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyImageSharePermissionOutcome(ModifyImageSharePermissionResult(outcome.result()));
	else
		return ModifyImageSharePermissionOutcome(outcome.error());
}

void EcsClient::modifyImageSharePermissionAsync(const ModifyImageSharePermissionRequest& request, const ModifyImageSharePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyImageSharePermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyImageSharePermissionOutcomeCallable EcsClient::modifyImageSharePermissionCallable(const ModifyImageSharePermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyImageSharePermissionOutcome()>>(
			[this, request]()
			{
			return this->modifyImageSharePermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyInstanceAttachmentAttributesOutcome EcsClient::modifyInstanceAttachmentAttributes(const ModifyInstanceAttachmentAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceAttachmentAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceAttachmentAttributesOutcome(ModifyInstanceAttachmentAttributesResult(outcome.result()));
	else
		return ModifyInstanceAttachmentAttributesOutcome(outcome.error());
}

void EcsClient::modifyInstanceAttachmentAttributesAsync(const ModifyInstanceAttachmentAttributesRequest& request, const ModifyInstanceAttachmentAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceAttachmentAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyInstanceAttachmentAttributesOutcomeCallable EcsClient::modifyInstanceAttachmentAttributesCallable(const ModifyInstanceAttachmentAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceAttachmentAttributesOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceAttachmentAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyInstanceAttributeOutcome EcsClient::modifyInstanceAttribute(const ModifyInstanceAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceAttributeOutcome(ModifyInstanceAttributeResult(outcome.result()));
	else
		return ModifyInstanceAttributeOutcome(outcome.error());
}

void EcsClient::modifyInstanceAttributeAsync(const ModifyInstanceAttributeRequest& request, const ModifyInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyInstanceAttributeOutcomeCallable EcsClient::modifyInstanceAttributeCallable(const ModifyInstanceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyInstanceAutoReleaseTimeOutcome EcsClient::modifyInstanceAutoReleaseTime(const ModifyInstanceAutoReleaseTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceAutoReleaseTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceAutoReleaseTimeOutcome(ModifyInstanceAutoReleaseTimeResult(outcome.result()));
	else
		return ModifyInstanceAutoReleaseTimeOutcome(outcome.error());
}

void EcsClient::modifyInstanceAutoReleaseTimeAsync(const ModifyInstanceAutoReleaseTimeRequest& request, const ModifyInstanceAutoReleaseTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceAutoReleaseTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyInstanceAutoReleaseTimeOutcomeCallable EcsClient::modifyInstanceAutoReleaseTimeCallable(const ModifyInstanceAutoReleaseTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceAutoReleaseTimeOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceAutoReleaseTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyInstanceAutoRenewAttributeOutcome EcsClient::modifyInstanceAutoRenewAttribute(const ModifyInstanceAutoRenewAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceAutoRenewAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceAutoRenewAttributeOutcome(ModifyInstanceAutoRenewAttributeResult(outcome.result()));
	else
		return ModifyInstanceAutoRenewAttributeOutcome(outcome.error());
}

void EcsClient::modifyInstanceAutoRenewAttributeAsync(const ModifyInstanceAutoRenewAttributeRequest& request, const ModifyInstanceAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceAutoRenewAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyInstanceAutoRenewAttributeOutcomeCallable EcsClient::modifyInstanceAutoRenewAttributeCallable(const ModifyInstanceAutoRenewAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceAutoRenewAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceAutoRenewAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyInstanceChargeTypeOutcome EcsClient::modifyInstanceChargeType(const ModifyInstanceChargeTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceChargeTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceChargeTypeOutcome(ModifyInstanceChargeTypeResult(outcome.result()));
	else
		return ModifyInstanceChargeTypeOutcome(outcome.error());
}

void EcsClient::modifyInstanceChargeTypeAsync(const ModifyInstanceChargeTypeRequest& request, const ModifyInstanceChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceChargeType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyInstanceChargeTypeOutcomeCallable EcsClient::modifyInstanceChargeTypeCallable(const ModifyInstanceChargeTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceChargeTypeOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceChargeType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyInstanceDeploymentOutcome EcsClient::modifyInstanceDeployment(const ModifyInstanceDeploymentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceDeploymentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceDeploymentOutcome(ModifyInstanceDeploymentResult(outcome.result()));
	else
		return ModifyInstanceDeploymentOutcome(outcome.error());
}

void EcsClient::modifyInstanceDeploymentAsync(const ModifyInstanceDeploymentRequest& request, const ModifyInstanceDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceDeployment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyInstanceDeploymentOutcomeCallable EcsClient::modifyInstanceDeploymentCallable(const ModifyInstanceDeploymentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceDeploymentOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceDeployment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyInstanceMaintenanceAttributesOutcome EcsClient::modifyInstanceMaintenanceAttributes(const ModifyInstanceMaintenanceAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceMaintenanceAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceMaintenanceAttributesOutcome(ModifyInstanceMaintenanceAttributesResult(outcome.result()));
	else
		return ModifyInstanceMaintenanceAttributesOutcome(outcome.error());
}

void EcsClient::modifyInstanceMaintenanceAttributesAsync(const ModifyInstanceMaintenanceAttributesRequest& request, const ModifyInstanceMaintenanceAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceMaintenanceAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyInstanceMaintenanceAttributesOutcomeCallable EcsClient::modifyInstanceMaintenanceAttributesCallable(const ModifyInstanceMaintenanceAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceMaintenanceAttributesOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceMaintenanceAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyInstanceMetadataOptionsOutcome EcsClient::modifyInstanceMetadataOptions(const ModifyInstanceMetadataOptionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceMetadataOptionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceMetadataOptionsOutcome(ModifyInstanceMetadataOptionsResult(outcome.result()));
	else
		return ModifyInstanceMetadataOptionsOutcome(outcome.error());
}

void EcsClient::modifyInstanceMetadataOptionsAsync(const ModifyInstanceMetadataOptionsRequest& request, const ModifyInstanceMetadataOptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceMetadataOptions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyInstanceMetadataOptionsOutcomeCallable EcsClient::modifyInstanceMetadataOptionsCallable(const ModifyInstanceMetadataOptionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceMetadataOptionsOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceMetadataOptions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyInstanceNetworkSpecOutcome EcsClient::modifyInstanceNetworkSpec(const ModifyInstanceNetworkSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceNetworkSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceNetworkSpecOutcome(ModifyInstanceNetworkSpecResult(outcome.result()));
	else
		return ModifyInstanceNetworkSpecOutcome(outcome.error());
}

void EcsClient::modifyInstanceNetworkSpecAsync(const ModifyInstanceNetworkSpecRequest& request, const ModifyInstanceNetworkSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceNetworkSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyInstanceNetworkSpecOutcomeCallable EcsClient::modifyInstanceNetworkSpecCallable(const ModifyInstanceNetworkSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceNetworkSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceNetworkSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyInstanceSpecOutcome EcsClient::modifyInstanceSpec(const ModifyInstanceSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceSpecOutcome(ModifyInstanceSpecResult(outcome.result()));
	else
		return ModifyInstanceSpecOutcome(outcome.error());
}

void EcsClient::modifyInstanceSpecAsync(const ModifyInstanceSpecRequest& request, const ModifyInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyInstanceSpecOutcomeCallable EcsClient::modifyInstanceSpecCallable(const ModifyInstanceSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyInstanceVncPasswdOutcome EcsClient::modifyInstanceVncPasswd(const ModifyInstanceVncPasswdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceVncPasswdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceVncPasswdOutcome(ModifyInstanceVncPasswdResult(outcome.result()));
	else
		return ModifyInstanceVncPasswdOutcome(outcome.error());
}

void EcsClient::modifyInstanceVncPasswdAsync(const ModifyInstanceVncPasswdRequest& request, const ModifyInstanceVncPasswdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceVncPasswd(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyInstanceVncPasswdOutcomeCallable EcsClient::modifyInstanceVncPasswdCallable(const ModifyInstanceVncPasswdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceVncPasswdOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceVncPasswd(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyInstanceVpcAttributeOutcome EcsClient::modifyInstanceVpcAttribute(const ModifyInstanceVpcAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceVpcAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceVpcAttributeOutcome(ModifyInstanceVpcAttributeResult(outcome.result()));
	else
		return ModifyInstanceVpcAttributeOutcome(outcome.error());
}

void EcsClient::modifyInstanceVpcAttributeAsync(const ModifyInstanceVpcAttributeRequest& request, const ModifyInstanceVpcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceVpcAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyInstanceVpcAttributeOutcomeCallable EcsClient::modifyInstanceVpcAttributeCallable(const ModifyInstanceVpcAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceVpcAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceVpcAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyInvocationAttributeOutcome EcsClient::modifyInvocationAttribute(const ModifyInvocationAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInvocationAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInvocationAttributeOutcome(ModifyInvocationAttributeResult(outcome.result()));
	else
		return ModifyInvocationAttributeOutcome(outcome.error());
}

void EcsClient::modifyInvocationAttributeAsync(const ModifyInvocationAttributeRequest& request, const ModifyInvocationAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInvocationAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyInvocationAttributeOutcomeCallable EcsClient::modifyInvocationAttributeCallable(const ModifyInvocationAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInvocationAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyInvocationAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyLaunchTemplateDefaultVersionOutcome EcsClient::modifyLaunchTemplateDefaultVersion(const ModifyLaunchTemplateDefaultVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLaunchTemplateDefaultVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLaunchTemplateDefaultVersionOutcome(ModifyLaunchTemplateDefaultVersionResult(outcome.result()));
	else
		return ModifyLaunchTemplateDefaultVersionOutcome(outcome.error());
}

void EcsClient::modifyLaunchTemplateDefaultVersionAsync(const ModifyLaunchTemplateDefaultVersionRequest& request, const ModifyLaunchTemplateDefaultVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLaunchTemplateDefaultVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyLaunchTemplateDefaultVersionOutcomeCallable EcsClient::modifyLaunchTemplateDefaultVersionCallable(const ModifyLaunchTemplateDefaultVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLaunchTemplateDefaultVersionOutcome()>>(
			[this, request]()
			{
			return this->modifyLaunchTemplateDefaultVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyManagedInstanceOutcome EcsClient::modifyManagedInstance(const ModifyManagedInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyManagedInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyManagedInstanceOutcome(ModifyManagedInstanceResult(outcome.result()));
	else
		return ModifyManagedInstanceOutcome(outcome.error());
}

void EcsClient::modifyManagedInstanceAsync(const ModifyManagedInstanceRequest& request, const ModifyManagedInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyManagedInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyManagedInstanceOutcomeCallable EcsClient::modifyManagedInstanceCallable(const ModifyManagedInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyManagedInstanceOutcome()>>(
			[this, request]()
			{
			return this->modifyManagedInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyNetworkInterfaceAttributeOutcome EcsClient::modifyNetworkInterfaceAttribute(const ModifyNetworkInterfaceAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyNetworkInterfaceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyNetworkInterfaceAttributeOutcome(ModifyNetworkInterfaceAttributeResult(outcome.result()));
	else
		return ModifyNetworkInterfaceAttributeOutcome(outcome.error());
}

void EcsClient::modifyNetworkInterfaceAttributeAsync(const ModifyNetworkInterfaceAttributeRequest& request, const ModifyNetworkInterfaceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyNetworkInterfaceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyNetworkInterfaceAttributeOutcomeCallable EcsClient::modifyNetworkInterfaceAttributeCallable(const ModifyNetworkInterfaceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyNetworkInterfaceAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyNetworkInterfaceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyPhysicalConnectionAttributeOutcome EcsClient::modifyPhysicalConnectionAttribute(const ModifyPhysicalConnectionAttributeRequest &request) const
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

void EcsClient::modifyPhysicalConnectionAttributeAsync(const ModifyPhysicalConnectionAttributeRequest& request, const ModifyPhysicalConnectionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPhysicalConnectionAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyPhysicalConnectionAttributeOutcomeCallable EcsClient::modifyPhysicalConnectionAttributeCallable(const ModifyPhysicalConnectionAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPhysicalConnectionAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyPhysicalConnectionAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyPortRangeListOutcome EcsClient::modifyPortRangeList(const ModifyPortRangeListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPortRangeListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPortRangeListOutcome(ModifyPortRangeListResult(outcome.result()));
	else
		return ModifyPortRangeListOutcome(outcome.error());
}

void EcsClient::modifyPortRangeListAsync(const ModifyPortRangeListRequest& request, const ModifyPortRangeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPortRangeList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyPortRangeListOutcomeCallable EcsClient::modifyPortRangeListCallable(const ModifyPortRangeListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPortRangeListOutcome()>>(
			[this, request]()
			{
			return this->modifyPortRangeList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyPrefixListOutcome EcsClient::modifyPrefixList(const ModifyPrefixListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPrefixListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPrefixListOutcome(ModifyPrefixListResult(outcome.result()));
	else
		return ModifyPrefixListOutcome(outcome.error());
}

void EcsClient::modifyPrefixListAsync(const ModifyPrefixListRequest& request, const ModifyPrefixListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPrefixList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyPrefixListOutcomeCallable EcsClient::modifyPrefixListCallable(const ModifyPrefixListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPrefixListOutcome()>>(
			[this, request]()
			{
			return this->modifyPrefixList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyPrepayInstanceSpecOutcome EcsClient::modifyPrepayInstanceSpec(const ModifyPrepayInstanceSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPrepayInstanceSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPrepayInstanceSpecOutcome(ModifyPrepayInstanceSpecResult(outcome.result()));
	else
		return ModifyPrepayInstanceSpecOutcome(outcome.error());
}

void EcsClient::modifyPrepayInstanceSpecAsync(const ModifyPrepayInstanceSpecRequest& request, const ModifyPrepayInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPrepayInstanceSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyPrepayInstanceSpecOutcomeCallable EcsClient::modifyPrepayInstanceSpecCallable(const ModifyPrepayInstanceSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPrepayInstanceSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyPrepayInstanceSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyReservedInstanceAttributeOutcome EcsClient::modifyReservedInstanceAttribute(const ModifyReservedInstanceAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyReservedInstanceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyReservedInstanceAttributeOutcome(ModifyReservedInstanceAttributeResult(outcome.result()));
	else
		return ModifyReservedInstanceAttributeOutcome(outcome.error());
}

void EcsClient::modifyReservedInstanceAttributeAsync(const ModifyReservedInstanceAttributeRequest& request, const ModifyReservedInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyReservedInstanceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyReservedInstanceAttributeOutcomeCallable EcsClient::modifyReservedInstanceAttributeCallable(const ModifyReservedInstanceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyReservedInstanceAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyReservedInstanceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyReservedInstanceAutoRenewAttributeOutcome EcsClient::modifyReservedInstanceAutoRenewAttribute(const ModifyReservedInstanceAutoRenewAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyReservedInstanceAutoRenewAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyReservedInstanceAutoRenewAttributeOutcome(ModifyReservedInstanceAutoRenewAttributeResult(outcome.result()));
	else
		return ModifyReservedInstanceAutoRenewAttributeOutcome(outcome.error());
}

void EcsClient::modifyReservedInstanceAutoRenewAttributeAsync(const ModifyReservedInstanceAutoRenewAttributeRequest& request, const ModifyReservedInstanceAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyReservedInstanceAutoRenewAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyReservedInstanceAutoRenewAttributeOutcomeCallable EcsClient::modifyReservedInstanceAutoRenewAttributeCallable(const ModifyReservedInstanceAutoRenewAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyReservedInstanceAutoRenewAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyReservedInstanceAutoRenewAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyReservedInstancesOutcome EcsClient::modifyReservedInstances(const ModifyReservedInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyReservedInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyReservedInstancesOutcome(ModifyReservedInstancesResult(outcome.result()));
	else
		return ModifyReservedInstancesOutcome(outcome.error());
}

void EcsClient::modifyReservedInstancesAsync(const ModifyReservedInstancesRequest& request, const ModifyReservedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyReservedInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyReservedInstancesOutcomeCallable EcsClient::modifyReservedInstancesCallable(const ModifyReservedInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyReservedInstancesOutcome()>>(
			[this, request]()
			{
			return this->modifyReservedInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyRouterInterfaceAttributeOutcome EcsClient::modifyRouterInterfaceAttribute(const ModifyRouterInterfaceAttributeRequest &request) const
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

void EcsClient::modifyRouterInterfaceAttributeAsync(const ModifyRouterInterfaceAttributeRequest& request, const ModifyRouterInterfaceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRouterInterfaceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyRouterInterfaceAttributeOutcomeCallable EcsClient::modifyRouterInterfaceAttributeCallable(const ModifyRouterInterfaceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRouterInterfaceAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyRouterInterfaceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyRouterInterfaceSpecOutcome EcsClient::modifyRouterInterfaceSpec(const ModifyRouterInterfaceSpecRequest &request) const
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

void EcsClient::modifyRouterInterfaceSpecAsync(const ModifyRouterInterfaceSpecRequest& request, const ModifyRouterInterfaceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRouterInterfaceSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyRouterInterfaceSpecOutcomeCallable EcsClient::modifyRouterInterfaceSpecCallable(const ModifyRouterInterfaceSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRouterInterfaceSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyRouterInterfaceSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifySecurityGroupAttributeOutcome EcsClient::modifySecurityGroupAttribute(const ModifySecurityGroupAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySecurityGroupAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySecurityGroupAttributeOutcome(ModifySecurityGroupAttributeResult(outcome.result()));
	else
		return ModifySecurityGroupAttributeOutcome(outcome.error());
}

void EcsClient::modifySecurityGroupAttributeAsync(const ModifySecurityGroupAttributeRequest& request, const ModifySecurityGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySecurityGroupAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifySecurityGroupAttributeOutcomeCallable EcsClient::modifySecurityGroupAttributeCallable(const ModifySecurityGroupAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySecurityGroupAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifySecurityGroupAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifySecurityGroupEgressRuleOutcome EcsClient::modifySecurityGroupEgressRule(const ModifySecurityGroupEgressRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySecurityGroupEgressRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySecurityGroupEgressRuleOutcome(ModifySecurityGroupEgressRuleResult(outcome.result()));
	else
		return ModifySecurityGroupEgressRuleOutcome(outcome.error());
}

void EcsClient::modifySecurityGroupEgressRuleAsync(const ModifySecurityGroupEgressRuleRequest& request, const ModifySecurityGroupEgressRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySecurityGroupEgressRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifySecurityGroupEgressRuleOutcomeCallable EcsClient::modifySecurityGroupEgressRuleCallable(const ModifySecurityGroupEgressRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySecurityGroupEgressRuleOutcome()>>(
			[this, request]()
			{
			return this->modifySecurityGroupEgressRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifySecurityGroupPolicyOutcome EcsClient::modifySecurityGroupPolicy(const ModifySecurityGroupPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySecurityGroupPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySecurityGroupPolicyOutcome(ModifySecurityGroupPolicyResult(outcome.result()));
	else
		return ModifySecurityGroupPolicyOutcome(outcome.error());
}

void EcsClient::modifySecurityGroupPolicyAsync(const ModifySecurityGroupPolicyRequest& request, const ModifySecurityGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySecurityGroupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifySecurityGroupPolicyOutcomeCallable EcsClient::modifySecurityGroupPolicyCallable(const ModifySecurityGroupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySecurityGroupPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifySecurityGroupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifySecurityGroupRuleOutcome EcsClient::modifySecurityGroupRule(const ModifySecurityGroupRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySecurityGroupRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySecurityGroupRuleOutcome(ModifySecurityGroupRuleResult(outcome.result()));
	else
		return ModifySecurityGroupRuleOutcome(outcome.error());
}

void EcsClient::modifySecurityGroupRuleAsync(const ModifySecurityGroupRuleRequest& request, const ModifySecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySecurityGroupRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifySecurityGroupRuleOutcomeCallable EcsClient::modifySecurityGroupRuleCallable(const ModifySecurityGroupRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySecurityGroupRuleOutcome()>>(
			[this, request]()
			{
			return this->modifySecurityGroupRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifySnapshotAttributeOutcome EcsClient::modifySnapshotAttribute(const ModifySnapshotAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySnapshotAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySnapshotAttributeOutcome(ModifySnapshotAttributeResult(outcome.result()));
	else
		return ModifySnapshotAttributeOutcome(outcome.error());
}

void EcsClient::modifySnapshotAttributeAsync(const ModifySnapshotAttributeRequest& request, const ModifySnapshotAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySnapshotAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifySnapshotAttributeOutcomeCallable EcsClient::modifySnapshotAttributeCallable(const ModifySnapshotAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySnapshotAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifySnapshotAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifySnapshotCategoryOutcome EcsClient::modifySnapshotCategory(const ModifySnapshotCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySnapshotCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySnapshotCategoryOutcome(ModifySnapshotCategoryResult(outcome.result()));
	else
		return ModifySnapshotCategoryOutcome(outcome.error());
}

void EcsClient::modifySnapshotCategoryAsync(const ModifySnapshotCategoryRequest& request, const ModifySnapshotCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySnapshotCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifySnapshotCategoryOutcomeCallable EcsClient::modifySnapshotCategoryCallable(const ModifySnapshotCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySnapshotCategoryOutcome()>>(
			[this, request]()
			{
			return this->modifySnapshotCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifySnapshotGroupOutcome EcsClient::modifySnapshotGroup(const ModifySnapshotGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySnapshotGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySnapshotGroupOutcome(ModifySnapshotGroupResult(outcome.result()));
	else
		return ModifySnapshotGroupOutcome(outcome.error());
}

void EcsClient::modifySnapshotGroupAsync(const ModifySnapshotGroupRequest& request, const ModifySnapshotGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySnapshotGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifySnapshotGroupOutcomeCallable EcsClient::modifySnapshotGroupCallable(const ModifySnapshotGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySnapshotGroupOutcome()>>(
			[this, request]()
			{
			return this->modifySnapshotGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyStorageCapacityUnitAttributeOutcome EcsClient::modifyStorageCapacityUnitAttribute(const ModifyStorageCapacityUnitAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyStorageCapacityUnitAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyStorageCapacityUnitAttributeOutcome(ModifyStorageCapacityUnitAttributeResult(outcome.result()));
	else
		return ModifyStorageCapacityUnitAttributeOutcome(outcome.error());
}

void EcsClient::modifyStorageCapacityUnitAttributeAsync(const ModifyStorageCapacityUnitAttributeRequest& request, const ModifyStorageCapacityUnitAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyStorageCapacityUnitAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyStorageCapacityUnitAttributeOutcomeCallable EcsClient::modifyStorageCapacityUnitAttributeCallable(const ModifyStorageCapacityUnitAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyStorageCapacityUnitAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyStorageCapacityUnitAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyStorageSetAttributeOutcome EcsClient::modifyStorageSetAttribute(const ModifyStorageSetAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyStorageSetAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyStorageSetAttributeOutcome(ModifyStorageSetAttributeResult(outcome.result()));
	else
		return ModifyStorageSetAttributeOutcome(outcome.error());
}

void EcsClient::modifyStorageSetAttributeAsync(const ModifyStorageSetAttributeRequest& request, const ModifyStorageSetAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyStorageSetAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyStorageSetAttributeOutcomeCallable EcsClient::modifyStorageSetAttributeCallable(const ModifyStorageSetAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyStorageSetAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyStorageSetAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyUserBusinessBehaviorOutcome EcsClient::modifyUserBusinessBehavior(const ModifyUserBusinessBehaviorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyUserBusinessBehaviorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyUserBusinessBehaviorOutcome(ModifyUserBusinessBehaviorResult(outcome.result()));
	else
		return ModifyUserBusinessBehaviorOutcome(outcome.error());
}

void EcsClient::modifyUserBusinessBehaviorAsync(const ModifyUserBusinessBehaviorRequest& request, const ModifyUserBusinessBehaviorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyUserBusinessBehavior(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyUserBusinessBehaviorOutcomeCallable EcsClient::modifyUserBusinessBehaviorCallable(const ModifyUserBusinessBehaviorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyUserBusinessBehaviorOutcome()>>(
			[this, request]()
			{
			return this->modifyUserBusinessBehavior(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyVRouterAttributeOutcome EcsClient::modifyVRouterAttribute(const ModifyVRouterAttributeRequest &request) const
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

void EcsClient::modifyVRouterAttributeAsync(const ModifyVRouterAttributeRequest& request, const ModifyVRouterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVRouterAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyVRouterAttributeOutcomeCallable EcsClient::modifyVRouterAttributeCallable(const ModifyVRouterAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVRouterAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyVRouterAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyVSwitchAttributeOutcome EcsClient::modifyVSwitchAttribute(const ModifyVSwitchAttributeRequest &request) const
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

void EcsClient::modifyVSwitchAttributeAsync(const ModifyVSwitchAttributeRequest& request, const ModifyVSwitchAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVSwitchAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyVSwitchAttributeOutcomeCallable EcsClient::modifyVSwitchAttributeCallable(const ModifyVSwitchAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVSwitchAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyVSwitchAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyVirtualBorderRouterAttributeOutcome EcsClient::modifyVirtualBorderRouterAttribute(const ModifyVirtualBorderRouterAttributeRequest &request) const
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

void EcsClient::modifyVirtualBorderRouterAttributeAsync(const ModifyVirtualBorderRouterAttributeRequest& request, const ModifyVirtualBorderRouterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVirtualBorderRouterAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyVirtualBorderRouterAttributeOutcomeCallable EcsClient::modifyVirtualBorderRouterAttributeCallable(const ModifyVirtualBorderRouterAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVirtualBorderRouterAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyVirtualBorderRouterAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyVpcAttributeOutcome EcsClient::modifyVpcAttribute(const ModifyVpcAttributeRequest &request) const
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

void EcsClient::modifyVpcAttributeAsync(const ModifyVpcAttributeRequest& request, const ModifyVpcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVpcAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyVpcAttributeOutcomeCallable EcsClient::modifyVpcAttributeCallable(const ModifyVpcAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVpcAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyVpcAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::PurchaseElasticityAssuranceOutcome EcsClient::purchaseElasticityAssurance(const PurchaseElasticityAssuranceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PurchaseElasticityAssuranceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PurchaseElasticityAssuranceOutcome(PurchaseElasticityAssuranceResult(outcome.result()));
	else
		return PurchaseElasticityAssuranceOutcome(outcome.error());
}

void EcsClient::purchaseElasticityAssuranceAsync(const PurchaseElasticityAssuranceRequest& request, const PurchaseElasticityAssuranceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, purchaseElasticityAssurance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::PurchaseElasticityAssuranceOutcomeCallable EcsClient::purchaseElasticityAssuranceCallable(const PurchaseElasticityAssuranceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PurchaseElasticityAssuranceOutcome()>>(
			[this, request]()
			{
			return this->purchaseElasticityAssurance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::PurchaseReservedInstancesOfferingOutcome EcsClient::purchaseReservedInstancesOffering(const PurchaseReservedInstancesOfferingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PurchaseReservedInstancesOfferingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PurchaseReservedInstancesOfferingOutcome(PurchaseReservedInstancesOfferingResult(outcome.result()));
	else
		return PurchaseReservedInstancesOfferingOutcome(outcome.error());
}

void EcsClient::purchaseReservedInstancesOfferingAsync(const PurchaseReservedInstancesOfferingRequest& request, const PurchaseReservedInstancesOfferingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, purchaseReservedInstancesOffering(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::PurchaseReservedInstancesOfferingOutcomeCallable EcsClient::purchaseReservedInstancesOfferingCallable(const PurchaseReservedInstancesOfferingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PurchaseReservedInstancesOfferingOutcome()>>(
			[this, request]()
			{
			return this->purchaseReservedInstancesOffering(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::PurchaseStorageCapacityUnitOutcome EcsClient::purchaseStorageCapacityUnit(const PurchaseStorageCapacityUnitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PurchaseStorageCapacityUnitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PurchaseStorageCapacityUnitOutcome(PurchaseStorageCapacityUnitResult(outcome.result()));
	else
		return PurchaseStorageCapacityUnitOutcome(outcome.error());
}

void EcsClient::purchaseStorageCapacityUnitAsync(const PurchaseStorageCapacityUnitRequest& request, const PurchaseStorageCapacityUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, purchaseStorageCapacityUnit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::PurchaseStorageCapacityUnitOutcomeCallable EcsClient::purchaseStorageCapacityUnitCallable(const PurchaseStorageCapacityUnitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PurchaseStorageCapacityUnitOutcome()>>(
			[this, request]()
			{
			return this->purchaseStorageCapacityUnit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ReActivateInstancesOutcome EcsClient::reActivateInstances(const ReActivateInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReActivateInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReActivateInstancesOutcome(ReActivateInstancesResult(outcome.result()));
	else
		return ReActivateInstancesOutcome(outcome.error());
}

void EcsClient::reActivateInstancesAsync(const ReActivateInstancesRequest& request, const ReActivateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reActivateInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ReActivateInstancesOutcomeCallable EcsClient::reActivateInstancesCallable(const ReActivateInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReActivateInstancesOutcome()>>(
			[this, request]()
			{
			return this->reActivateInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ReInitDiskOutcome EcsClient::reInitDisk(const ReInitDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReInitDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReInitDiskOutcome(ReInitDiskResult(outcome.result()));
	else
		return ReInitDiskOutcome(outcome.error());
}

void EcsClient::reInitDiskAsync(const ReInitDiskRequest& request, const ReInitDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reInitDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ReInitDiskOutcomeCallable EcsClient::reInitDiskCallable(const ReInitDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReInitDiskOutcome()>>(
			[this, request]()
			{
			return this->reInitDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::RebootInstanceOutcome EcsClient::rebootInstance(const RebootInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RebootInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RebootInstanceOutcome(RebootInstanceResult(outcome.result()));
	else
		return RebootInstanceOutcome(outcome.error());
}

void EcsClient::rebootInstanceAsync(const RebootInstanceRequest& request, const RebootInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rebootInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::RebootInstanceOutcomeCallable EcsClient::rebootInstanceCallable(const RebootInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RebootInstanceOutcome()>>(
			[this, request]()
			{
			return this->rebootInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::RebootInstancesOutcome EcsClient::rebootInstances(const RebootInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RebootInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RebootInstancesOutcome(RebootInstancesResult(outcome.result()));
	else
		return RebootInstancesOutcome(outcome.error());
}

void EcsClient::rebootInstancesAsync(const RebootInstancesRequest& request, const RebootInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rebootInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::RebootInstancesOutcomeCallable EcsClient::rebootInstancesCallable(const RebootInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RebootInstancesOutcome()>>(
			[this, request]()
			{
			return this->rebootInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::RecoverVirtualBorderRouterOutcome EcsClient::recoverVirtualBorderRouter(const RecoverVirtualBorderRouterRequest &request) const
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

void EcsClient::recoverVirtualBorderRouterAsync(const RecoverVirtualBorderRouterRequest& request, const RecoverVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recoverVirtualBorderRouter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::RecoverVirtualBorderRouterOutcomeCallable EcsClient::recoverVirtualBorderRouterCallable(const RecoverVirtualBorderRouterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecoverVirtualBorderRouterOutcome()>>(
			[this, request]()
			{
			return this->recoverVirtualBorderRouter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::RedeployDedicatedHostOutcome EcsClient::redeployDedicatedHost(const RedeployDedicatedHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RedeployDedicatedHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RedeployDedicatedHostOutcome(RedeployDedicatedHostResult(outcome.result()));
	else
		return RedeployDedicatedHostOutcome(outcome.error());
}

void EcsClient::redeployDedicatedHostAsync(const RedeployDedicatedHostRequest& request, const RedeployDedicatedHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, redeployDedicatedHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::RedeployDedicatedHostOutcomeCallable EcsClient::redeployDedicatedHostCallable(const RedeployDedicatedHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RedeployDedicatedHostOutcome()>>(
			[this, request]()
			{
			return this->redeployDedicatedHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::RedeployInstanceOutcome EcsClient::redeployInstance(const RedeployInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RedeployInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RedeployInstanceOutcome(RedeployInstanceResult(outcome.result()));
	else
		return RedeployInstanceOutcome(outcome.error());
}

void EcsClient::redeployInstanceAsync(const RedeployInstanceRequest& request, const RedeployInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, redeployInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::RedeployInstanceOutcomeCallable EcsClient::redeployInstanceCallable(const RedeployInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RedeployInstanceOutcome()>>(
			[this, request]()
			{
			return this->redeployInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ReleaseCapacityReservationOutcome EcsClient::releaseCapacityReservation(const ReleaseCapacityReservationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseCapacityReservationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseCapacityReservationOutcome(ReleaseCapacityReservationResult(outcome.result()));
	else
		return ReleaseCapacityReservationOutcome(outcome.error());
}

void EcsClient::releaseCapacityReservationAsync(const ReleaseCapacityReservationRequest& request, const ReleaseCapacityReservationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseCapacityReservation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ReleaseCapacityReservationOutcomeCallable EcsClient::releaseCapacityReservationCallable(const ReleaseCapacityReservationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseCapacityReservationOutcome()>>(
			[this, request]()
			{
			return this->releaseCapacityReservation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ReleaseDedicatedHostOutcome EcsClient::releaseDedicatedHost(const ReleaseDedicatedHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseDedicatedHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseDedicatedHostOutcome(ReleaseDedicatedHostResult(outcome.result()));
	else
		return ReleaseDedicatedHostOutcome(outcome.error());
}

void EcsClient::releaseDedicatedHostAsync(const ReleaseDedicatedHostRequest& request, const ReleaseDedicatedHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseDedicatedHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ReleaseDedicatedHostOutcomeCallable EcsClient::releaseDedicatedHostCallable(const ReleaseDedicatedHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseDedicatedHostOutcome()>>(
			[this, request]()
			{
			return this->releaseDedicatedHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ReleaseEipAddressOutcome EcsClient::releaseEipAddress(const ReleaseEipAddressRequest &request) const
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

void EcsClient::releaseEipAddressAsync(const ReleaseEipAddressRequest& request, const ReleaseEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseEipAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ReleaseEipAddressOutcomeCallable EcsClient::releaseEipAddressCallable(const ReleaseEipAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseEipAddressOutcome()>>(
			[this, request]()
			{
			return this->releaseEipAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ReleasePublicIpAddressOutcome EcsClient::releasePublicIpAddress(const ReleasePublicIpAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleasePublicIpAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleasePublicIpAddressOutcome(ReleasePublicIpAddressResult(outcome.result()));
	else
		return ReleasePublicIpAddressOutcome(outcome.error());
}

void EcsClient::releasePublicIpAddressAsync(const ReleasePublicIpAddressRequest& request, const ReleasePublicIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releasePublicIpAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ReleasePublicIpAddressOutcomeCallable EcsClient::releasePublicIpAddressCallable(const ReleasePublicIpAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleasePublicIpAddressOutcome()>>(
			[this, request]()
			{
			return this->releasePublicIpAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::RemoveBandwidthPackageIpsOutcome EcsClient::removeBandwidthPackageIps(const RemoveBandwidthPackageIpsRequest &request) const
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

void EcsClient::removeBandwidthPackageIpsAsync(const RemoveBandwidthPackageIpsRequest& request, const RemoveBandwidthPackageIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeBandwidthPackageIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::RemoveBandwidthPackageIpsOutcomeCallable EcsClient::removeBandwidthPackageIpsCallable(const RemoveBandwidthPackageIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveBandwidthPackageIpsOutcome()>>(
			[this, request]()
			{
			return this->removeBandwidthPackageIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::RemoveTagsOutcome EcsClient::removeTags(const RemoveTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveTagsOutcome(RemoveTagsResult(outcome.result()));
	else
		return RemoveTagsOutcome(outcome.error());
}

void EcsClient::removeTagsAsync(const RemoveTagsRequest& request, const RemoveTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::RemoveTagsOutcomeCallable EcsClient::removeTagsCallable(const RemoveTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveTagsOutcome()>>(
			[this, request]()
			{
			return this->removeTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::RenewDedicatedHostsOutcome EcsClient::renewDedicatedHosts(const RenewDedicatedHostsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenewDedicatedHostsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewDedicatedHostsOutcome(RenewDedicatedHostsResult(outcome.result()));
	else
		return RenewDedicatedHostsOutcome(outcome.error());
}

void EcsClient::renewDedicatedHostsAsync(const RenewDedicatedHostsRequest& request, const RenewDedicatedHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewDedicatedHosts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::RenewDedicatedHostsOutcomeCallable EcsClient::renewDedicatedHostsCallable(const RenewDedicatedHostsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewDedicatedHostsOutcome()>>(
			[this, request]()
			{
			return this->renewDedicatedHosts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::RenewElasticityAssurancesOutcome EcsClient::renewElasticityAssurances(const RenewElasticityAssurancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenewElasticityAssurancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewElasticityAssurancesOutcome(RenewElasticityAssurancesResult(outcome.result()));
	else
		return RenewElasticityAssurancesOutcome(outcome.error());
}

void EcsClient::renewElasticityAssurancesAsync(const RenewElasticityAssurancesRequest& request, const RenewElasticityAssurancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewElasticityAssurances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::RenewElasticityAssurancesOutcomeCallable EcsClient::renewElasticityAssurancesCallable(const RenewElasticityAssurancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewElasticityAssurancesOutcome()>>(
			[this, request]()
			{
			return this->renewElasticityAssurances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::RenewInstanceOutcome EcsClient::renewInstance(const RenewInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenewInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewInstanceOutcome(RenewInstanceResult(outcome.result()));
	else
		return RenewInstanceOutcome(outcome.error());
}

void EcsClient::renewInstanceAsync(const RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::RenewInstanceOutcomeCallable EcsClient::renewInstanceCallable(const RenewInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewInstanceOutcome()>>(
			[this, request]()
			{
			return this->renewInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::RenewReservedInstancesOutcome EcsClient::renewReservedInstances(const RenewReservedInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenewReservedInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewReservedInstancesOutcome(RenewReservedInstancesResult(outcome.result()));
	else
		return RenewReservedInstancesOutcome(outcome.error());
}

void EcsClient::renewReservedInstancesAsync(const RenewReservedInstancesRequest& request, const RenewReservedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewReservedInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::RenewReservedInstancesOutcomeCallable EcsClient::renewReservedInstancesCallable(const RenewReservedInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewReservedInstancesOutcome()>>(
			[this, request]()
			{
			return this->renewReservedInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ReplaceSystemDiskOutcome EcsClient::replaceSystemDisk(const ReplaceSystemDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReplaceSystemDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReplaceSystemDiskOutcome(ReplaceSystemDiskResult(outcome.result()));
	else
		return ReplaceSystemDiskOutcome(outcome.error());
}

void EcsClient::replaceSystemDiskAsync(const ReplaceSystemDiskRequest& request, const ReplaceSystemDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, replaceSystemDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ReplaceSystemDiskOutcomeCallable EcsClient::replaceSystemDiskCallable(const ReplaceSystemDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReplaceSystemDiskOutcome()>>(
			[this, request]()
			{
			return this->replaceSystemDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ReportInstancesStatusOutcome EcsClient::reportInstancesStatus(const ReportInstancesStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReportInstancesStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReportInstancesStatusOutcome(ReportInstancesStatusResult(outcome.result()));
	else
		return ReportInstancesStatusOutcome(outcome.error());
}

void EcsClient::reportInstancesStatusAsync(const ReportInstancesStatusRequest& request, const ReportInstancesStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reportInstancesStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ReportInstancesStatusOutcomeCallable EcsClient::reportInstancesStatusCallable(const ReportInstancesStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReportInstancesStatusOutcome()>>(
			[this, request]()
			{
			return this->reportInstancesStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ResetDiskOutcome EcsClient::resetDisk(const ResetDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetDiskOutcome(ResetDiskResult(outcome.result()));
	else
		return ResetDiskOutcome(outcome.error());
}

void EcsClient::resetDiskAsync(const ResetDiskRequest& request, const ResetDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ResetDiskOutcomeCallable EcsClient::resetDiskCallable(const ResetDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetDiskOutcome()>>(
			[this, request]()
			{
			return this->resetDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ResetDiskDefaultKMSKeyIdOutcome EcsClient::resetDiskDefaultKMSKeyId(const ResetDiskDefaultKMSKeyIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetDiskDefaultKMSKeyIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetDiskDefaultKMSKeyIdOutcome(ResetDiskDefaultKMSKeyIdResult(outcome.result()));
	else
		return ResetDiskDefaultKMSKeyIdOutcome(outcome.error());
}

void EcsClient::resetDiskDefaultKMSKeyIdAsync(const ResetDiskDefaultKMSKeyIdRequest& request, const ResetDiskDefaultKMSKeyIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetDiskDefaultKMSKeyId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ResetDiskDefaultKMSKeyIdOutcomeCallable EcsClient::resetDiskDefaultKMSKeyIdCallable(const ResetDiskDefaultKMSKeyIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetDiskDefaultKMSKeyIdOutcome()>>(
			[this, request]()
			{
			return this->resetDiskDefaultKMSKeyId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ResetDisksOutcome EcsClient::resetDisks(const ResetDisksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetDisksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetDisksOutcome(ResetDisksResult(outcome.result()));
	else
		return ResetDisksOutcome(outcome.error());
}

void EcsClient::resetDisksAsync(const ResetDisksRequest& request, const ResetDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetDisks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ResetDisksOutcomeCallable EcsClient::resetDisksCallable(const ResetDisksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetDisksOutcome()>>(
			[this, request]()
			{
			return this->resetDisks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ResizeDiskOutcome EcsClient::resizeDisk(const ResizeDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResizeDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResizeDiskOutcome(ResizeDiskResult(outcome.result()));
	else
		return ResizeDiskOutcome(outcome.error());
}

void EcsClient::resizeDiskAsync(const ResizeDiskRequest& request, const ResizeDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resizeDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ResizeDiskOutcomeCallable EcsClient::resizeDiskCallable(const ResizeDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResizeDiskOutcome()>>(
			[this, request]()
			{
			return this->resizeDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::RevokeSecurityGroupOutcome EcsClient::revokeSecurityGroup(const RevokeSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeSecurityGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeSecurityGroupOutcome(RevokeSecurityGroupResult(outcome.result()));
	else
		return RevokeSecurityGroupOutcome(outcome.error());
}

void EcsClient::revokeSecurityGroupAsync(const RevokeSecurityGroupRequest& request, const RevokeSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::RevokeSecurityGroupOutcomeCallable EcsClient::revokeSecurityGroupCallable(const RevokeSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->revokeSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::RevokeSecurityGroupEgressOutcome EcsClient::revokeSecurityGroupEgress(const RevokeSecurityGroupEgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeSecurityGroupEgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeSecurityGroupEgressOutcome(RevokeSecurityGroupEgressResult(outcome.result()));
	else
		return RevokeSecurityGroupEgressOutcome(outcome.error());
}

void EcsClient::revokeSecurityGroupEgressAsync(const RevokeSecurityGroupEgressRequest& request, const RevokeSecurityGroupEgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeSecurityGroupEgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::RevokeSecurityGroupEgressOutcomeCallable EcsClient::revokeSecurityGroupEgressCallable(const RevokeSecurityGroupEgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeSecurityGroupEgressOutcome()>>(
			[this, request]()
			{
			return this->revokeSecurityGroupEgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::RunCommandOutcome EcsClient::runCommand(const RunCommandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunCommandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunCommandOutcome(RunCommandResult(outcome.result()));
	else
		return RunCommandOutcome(outcome.error());
}

void EcsClient::runCommandAsync(const RunCommandRequest& request, const RunCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runCommand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::RunCommandOutcomeCallable EcsClient::runCommandCallable(const RunCommandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunCommandOutcome()>>(
			[this, request]()
			{
			return this->runCommand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::RunInstancesOutcome EcsClient::runInstances(const RunInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunInstancesOutcome(RunInstancesResult(outcome.result()));
	else
		return RunInstancesOutcome(outcome.error());
}

void EcsClient::runInstancesAsync(const RunInstancesRequest& request, const RunInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::RunInstancesOutcomeCallable EcsClient::runInstancesCallable(const RunInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunInstancesOutcome()>>(
			[this, request]()
			{
			return this->runInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::SendFileOutcome EcsClient::sendFile(const SendFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendFileOutcome(SendFileResult(outcome.result()));
	else
		return SendFileOutcome(outcome.error());
}

void EcsClient::sendFileAsync(const SendFileRequest& request, const SendFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::SendFileOutcomeCallable EcsClient::sendFileCallable(const SendFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendFileOutcome()>>(
			[this, request]()
			{
			return this->sendFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::StartImagePipelineExecutionOutcome EcsClient::startImagePipelineExecution(const StartImagePipelineExecutionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartImagePipelineExecutionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartImagePipelineExecutionOutcome(StartImagePipelineExecutionResult(outcome.result()));
	else
		return StartImagePipelineExecutionOutcome(outcome.error());
}

void EcsClient::startImagePipelineExecutionAsync(const StartImagePipelineExecutionRequest& request, const StartImagePipelineExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startImagePipelineExecution(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::StartImagePipelineExecutionOutcomeCallable EcsClient::startImagePipelineExecutionCallable(const StartImagePipelineExecutionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartImagePipelineExecutionOutcome()>>(
			[this, request]()
			{
			return this->startImagePipelineExecution(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::StartInstanceOutcome EcsClient::startInstance(const StartInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartInstanceOutcome(StartInstanceResult(outcome.result()));
	else
		return StartInstanceOutcome(outcome.error());
}

void EcsClient::startInstanceAsync(const StartInstanceRequest& request, const StartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::StartInstanceOutcomeCallable EcsClient::startInstanceCallable(const StartInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartInstanceOutcome()>>(
			[this, request]()
			{
			return this->startInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::StartInstancesOutcome EcsClient::startInstances(const StartInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartInstancesOutcome(StartInstancesResult(outcome.result()));
	else
		return StartInstancesOutcome(outcome.error());
}

void EcsClient::startInstancesAsync(const StartInstancesRequest& request, const StartInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::StartInstancesOutcomeCallable EcsClient::startInstancesCallable(const StartInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartInstancesOutcome()>>(
			[this, request]()
			{
			return this->startInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::StartTerminalSessionOutcome EcsClient::startTerminalSession(const StartTerminalSessionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartTerminalSessionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartTerminalSessionOutcome(StartTerminalSessionResult(outcome.result()));
	else
		return StartTerminalSessionOutcome(outcome.error());
}

void EcsClient::startTerminalSessionAsync(const StartTerminalSessionRequest& request, const StartTerminalSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startTerminalSession(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::StartTerminalSessionOutcomeCallable EcsClient::startTerminalSessionCallable(const StartTerminalSessionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartTerminalSessionOutcome()>>(
			[this, request]()
			{
			return this->startTerminalSession(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::StopInstanceOutcome EcsClient::stopInstance(const StopInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopInstanceOutcome(StopInstanceResult(outcome.result()));
	else
		return StopInstanceOutcome(outcome.error());
}

void EcsClient::stopInstanceAsync(const StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::StopInstanceOutcomeCallable EcsClient::stopInstanceCallable(const StopInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopInstanceOutcome()>>(
			[this, request]()
			{
			return this->stopInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::StopInstancesOutcome EcsClient::stopInstances(const StopInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopInstancesOutcome(StopInstancesResult(outcome.result()));
	else
		return StopInstancesOutcome(outcome.error());
}

void EcsClient::stopInstancesAsync(const StopInstancesRequest& request, const StopInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::StopInstancesOutcomeCallable EcsClient::stopInstancesCallable(const StopInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopInstancesOutcome()>>(
			[this, request]()
			{
			return this->stopInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::StopInvocationOutcome EcsClient::stopInvocation(const StopInvocationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopInvocationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopInvocationOutcome(StopInvocationResult(outcome.result()));
	else
		return StopInvocationOutcome(outcome.error());
}

void EcsClient::stopInvocationAsync(const StopInvocationRequest& request, const StopInvocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopInvocation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::StopInvocationOutcomeCallable EcsClient::stopInvocationCallable(const StopInvocationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopInvocationOutcome()>>(
			[this, request]()
			{
			return this->stopInvocation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::TagResourcesOutcome EcsClient::tagResources(const TagResourcesRequest &request) const
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

void EcsClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::TagResourcesOutcomeCallable EcsClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::TerminatePhysicalConnectionOutcome EcsClient::terminatePhysicalConnection(const TerminatePhysicalConnectionRequest &request) const
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

void EcsClient::terminatePhysicalConnectionAsync(const TerminatePhysicalConnectionRequest& request, const TerminatePhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, terminatePhysicalConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::TerminatePhysicalConnectionOutcomeCallable EcsClient::terminatePhysicalConnectionCallable(const TerminatePhysicalConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TerminatePhysicalConnectionOutcome()>>(
			[this, request]()
			{
			return this->terminatePhysicalConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::TerminateVirtualBorderRouterOutcome EcsClient::terminateVirtualBorderRouter(const TerminateVirtualBorderRouterRequest &request) const
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

void EcsClient::terminateVirtualBorderRouterAsync(const TerminateVirtualBorderRouterRequest& request, const TerminateVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, terminateVirtualBorderRouter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::TerminateVirtualBorderRouterOutcomeCallable EcsClient::terminateVirtualBorderRouterCallable(const TerminateVirtualBorderRouterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TerminateVirtualBorderRouterOutcome()>>(
			[this, request]()
			{
			return this->terminateVirtualBorderRouter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::UnassignIpv6AddressesOutcome EcsClient::unassignIpv6Addresses(const UnassignIpv6AddressesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnassignIpv6AddressesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnassignIpv6AddressesOutcome(UnassignIpv6AddressesResult(outcome.result()));
	else
		return UnassignIpv6AddressesOutcome(outcome.error());
}

void EcsClient::unassignIpv6AddressesAsync(const UnassignIpv6AddressesRequest& request, const UnassignIpv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unassignIpv6Addresses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::UnassignIpv6AddressesOutcomeCallable EcsClient::unassignIpv6AddressesCallable(const UnassignIpv6AddressesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnassignIpv6AddressesOutcome()>>(
			[this, request]()
			{
			return this->unassignIpv6Addresses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::UnassignPrivateIpAddressesOutcome EcsClient::unassignPrivateIpAddresses(const UnassignPrivateIpAddressesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnassignPrivateIpAddressesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnassignPrivateIpAddressesOutcome(UnassignPrivateIpAddressesResult(outcome.result()));
	else
		return UnassignPrivateIpAddressesOutcome(outcome.error());
}

void EcsClient::unassignPrivateIpAddressesAsync(const UnassignPrivateIpAddressesRequest& request, const UnassignPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unassignPrivateIpAddresses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::UnassignPrivateIpAddressesOutcomeCallable EcsClient::unassignPrivateIpAddressesCallable(const UnassignPrivateIpAddressesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnassignPrivateIpAddressesOutcome()>>(
			[this, request]()
			{
			return this->unassignPrivateIpAddresses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::UnassociateEipAddressOutcome EcsClient::unassociateEipAddress(const UnassociateEipAddressRequest &request) const
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

void EcsClient::unassociateEipAddressAsync(const UnassociateEipAddressRequest& request, const UnassociateEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unassociateEipAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::UnassociateEipAddressOutcomeCallable EcsClient::unassociateEipAddressCallable(const UnassociateEipAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnassociateEipAddressOutcome()>>(
			[this, request]()
			{
			return this->unassociateEipAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::UnassociateHaVipOutcome EcsClient::unassociateHaVip(const UnassociateHaVipRequest &request) const
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

void EcsClient::unassociateHaVipAsync(const UnassociateHaVipRequest& request, const UnassociateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unassociateHaVip(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::UnassociateHaVipOutcomeCallable EcsClient::unassociateHaVipCallable(const UnassociateHaVipRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnassociateHaVipOutcome()>>(
			[this, request]()
			{
			return this->unassociateHaVip(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::UntagResourcesOutcome EcsClient::untagResources(const UntagResourcesRequest &request) const
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

void EcsClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::UntagResourcesOutcomeCallable EcsClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

