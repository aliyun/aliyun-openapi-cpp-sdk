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

EcsClient::EcsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), "ecs");
}

EcsClient::EcsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), "ecs");
}

EcsClient::EcsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), "ecs");
}

EcsClient::~EcsClient()
{}

CoreClient::EndpointOutcome EcsClient::endpoint()const
{
	if(!configuration().endpoint().empty())
		return CoreClient::EndpointOutcome(configuration().endpoint());

	auto endpoint = endpointProvider_->getEndpoint();
	
	if (endpoint.empty())
		return CoreClient::EndpointOutcome(Error("InvalidEndpoint",""));
	else
		return CoreClient::EndpointOutcome(endpoint);
}

EcsClient::ModifySnapshotAttributeOutcome EcsClient::modifySnapshotAttribute(const ModifySnapshotAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::JoinSecurityGroupOutcome EcsClient::joinSecurityGroup(const JoinSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeSnapshotsOutcome EcsClient::describeSnapshots(const DescribeSnapshotsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyBandwidthPackageSpecOutcome EcsClient::modifyBandwidthPackageSpec(const ModifyBandwidthPackageSpecRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyInstanceVncPasswdOutcome EcsClient::modifyInstanceVncPasswd(const ModifyInstanceVncPasswdRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::CreateNatGatewayOutcome EcsClient::createNatGateway(const CreateNatGatewayRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::AttachDiskOutcome EcsClient::attachDisk(const AttachDiskRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ReInitDiskOutcome EcsClient::reInitDisk(const ReInitDiskRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::CreateHaVipOutcome EcsClient::createHaVip(const CreateHaVipRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyAutoSnapshotPolicyOutcome EcsClient::modifyAutoSnapshotPolicy(const ModifyAutoSnapshotPolicyRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAutoSnapshotPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAutoSnapshotPolicyOutcome(ModifyAutoSnapshotPolicyResult(outcome.result()));
	else
		return ModifyAutoSnapshotPolicyOutcome(outcome.error());
}

void EcsClient::modifyAutoSnapshotPolicyAsync(const ModifyAutoSnapshotPolicyRequest& request, const ModifyAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAutoSnapshotPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyAutoSnapshotPolicyOutcomeCallable EcsClient::modifyAutoSnapshotPolicyCallable(const ModifyAutoSnapshotPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAutoSnapshotPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyAutoSnapshotPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::AssociateEipAddressOutcome EcsClient::associateEipAddress(const AssociateEipAddressRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeEipAddressesOutcome EcsClient::describeEipAddresses(const DescribeEipAddressesRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::RevokeSecurityGroupEgressOutcome EcsClient::revokeSecurityGroupEgress(const RevokeSecurityGroupEgressRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ActivateRouterInterfaceOutcome EcsClient::activateRouterInterface(const ActivateRouterInterfaceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeSpotPriceHistoryOutcome EcsClient::describeSpotPriceHistory(const DescribeSpotPriceHistoryRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::TerminateVirtualBorderRouterOutcome EcsClient::terminateVirtualBorderRouter(const TerminateVirtualBorderRouterRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::StopInstanceOutcome EcsClient::stopInstance(const StopInstanceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeInstanceHistoryEventsOutcome EcsClient::describeInstanceHistoryEvents(const DescribeInstanceHistoryEventsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DeletePhysicalConnectionOutcome EcsClient::deletePhysicalConnection(const DeletePhysicalConnectionRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::RevokeSecurityGroupOutcome EcsClient::revokeSecurityGroup(const RevokeSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::CheckAutoSnapshotPolicyOutcome EcsClient::checkAutoSnapshotPolicy(const CheckAutoSnapshotPolicyRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CheckAutoSnapshotPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckAutoSnapshotPolicyOutcome(CheckAutoSnapshotPolicyResult(outcome.result()));
	else
		return CheckAutoSnapshotPolicyOutcome(outcome.error());
}

void EcsClient::checkAutoSnapshotPolicyAsync(const CheckAutoSnapshotPolicyRequest& request, const CheckAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkAutoSnapshotPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CheckAutoSnapshotPolicyOutcomeCallable EcsClient::checkAutoSnapshotPolicyCallable(const CheckAutoSnapshotPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckAutoSnapshotPolicyOutcome()>>(
			[this, request]()
			{
			return this->checkAutoSnapshotPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeTaskAttributeOutcome EcsClient::describeTaskAttribute(const DescribeTaskAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::CreateAutoSnapshotPolicyOutcome EcsClient::createAutoSnapshotPolicy(const CreateAutoSnapshotPolicyRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ReActivateInstancesOutcome EcsClient::reActivateInstances(const ReActivateInstancesRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeForwardTableEntriesOutcome EcsClient::describeForwardTableEntries(const DescribeForwardTableEntriesRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeInstancesOutcome EcsClient::describeInstances(const DescribeInstancesRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeSecurityGroupReferencesOutcome EcsClient::describeSecurityGroupReferences(const DescribeSecurityGroupReferencesRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DeleteRouterInterfaceOutcome EcsClient::deleteRouterInterface(const DeleteRouterInterfaceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DetachInstanceRamRoleOutcome EcsClient::detachInstanceRamRole(const DetachInstanceRamRoleRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::AllocatePublicIpAddressOutcome EcsClient::allocatePublicIpAddress(const AllocatePublicIpAddressRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeEipMonitorDataOutcome EcsClient::describeEipMonitorData(const DescribeEipMonitorDataRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::CancelAutoSnapshotPolicyOutcome EcsClient::cancelAutoSnapshotPolicy(const CancelAutoSnapshotPolicyRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeDisksFullStatusOutcome EcsClient::describeDisksFullStatus(const DescribeDisksFullStatusRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DeleteNetworkInterfaceOutcome EcsClient::deleteNetworkInterface(const DeleteNetworkInterfaceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyInstanceSpecOutcome EcsClient::modifyInstanceSpec(const ModifyInstanceSpecRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DeleteSnapshotOutcome EcsClient::deleteSnapshot(const DeleteSnapshotRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DeleteKeyPairsOutcome EcsClient::deleteKeyPairs(const DeleteKeyPairsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::AuthorizeSecurityGroupOutcome EcsClient::authorizeSecurityGroup(const AuthorizeSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DeleteSecurityGroupOutcome EcsClient::deleteSecurityGroup(const DeleteSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeSnapshotMonitorDataOutcome EcsClient::describeSnapshotMonitorData(const DescribeSnapshotMonitorDataRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ConnectRouterInterfaceOutcome EcsClient::connectRouterInterface(const ConnectRouterInterfaceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::AddIpRangeOutcome EcsClient::addIpRange(const AddIpRangeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return AddIpRangeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddIpRangeOutcome(AddIpRangeResult(outcome.result()));
	else
		return AddIpRangeOutcome(outcome.error());
}

void EcsClient::addIpRangeAsync(const AddIpRangeRequest& request, const AddIpRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addIpRange(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::AddIpRangeOutcomeCallable EcsClient::addIpRangeCallable(const AddIpRangeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddIpRangeOutcome()>>(
			[this, request]()
			{
			return this->addIpRange(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CancelTaskOutcome EcsClient::cancelTask(const CancelTaskRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyPhysicalConnectionAttributeOutcome EcsClient::modifyPhysicalConnectionAttribute(const ModifyPhysicalConnectionAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyCommandOutcome EcsClient::modifyCommand(const ModifyCommandRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyVSwitchAttributeOutcome EcsClient::modifyVSwitchAttribute(const ModifyVSwitchAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyInstanceAttributeOutcome EcsClient::modifyInstanceAttribute(const ModifyInstanceAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DeleteHaVipOutcome EcsClient::deleteHaVip(const DeleteHaVipRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeSecurityGroupsOutcome EcsClient::describeSecurityGroups(const DescribeSecurityGroupsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ResizeDiskOutcome EcsClient::resizeDisk(const ResizeDiskRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::CreateRouteEntryOutcome EcsClient::createRouteEntry(const CreateRouteEntryRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeInvocationsOutcome EcsClient::describeInvocations(const DescribeInvocationsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::AttachKeyPairOutcome EcsClient::attachKeyPair(const AttachKeyPairRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::CreateRouterInterfaceOutcome EcsClient::createRouterInterface(const CreateRouterInterfaceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::CheckDiskEnableAutoSnapshotValidationOutcome EcsClient::checkDiskEnableAutoSnapshotValidation(const CheckDiskEnableAutoSnapshotValidationRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CheckDiskEnableAutoSnapshotValidationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckDiskEnableAutoSnapshotValidationOutcome(CheckDiskEnableAutoSnapshotValidationResult(outcome.result()));
	else
		return CheckDiskEnableAutoSnapshotValidationOutcome(outcome.error());
}

void EcsClient::checkDiskEnableAutoSnapshotValidationAsync(const CheckDiskEnableAutoSnapshotValidationRequest& request, const CheckDiskEnableAutoSnapshotValidationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkDiskEnableAutoSnapshotValidation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CheckDiskEnableAutoSnapshotValidationOutcomeCallable EcsClient::checkDiskEnableAutoSnapshotValidationCallable(const CheckDiskEnableAutoSnapshotValidationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckDiskEnableAutoSnapshotValidationOutcome()>>(
			[this, request]()
			{
			return this->checkDiskEnableAutoSnapshotValidation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::RunInstancesOutcome EcsClient::runInstances(const RunInstancesRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::StopInvocationOutcome EcsClient::stopInvocation(const StopInvocationRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyInstanceNetworkSpecOutcome EcsClient::modifyInstanceNetworkSpec(const ModifyInstanceNetworkSpecRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyDiskAttributeOutcome EcsClient::modifyDiskAttribute(const ModifyDiskAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::CreateVSwitchOutcome EcsClient::createVSwitch(const CreateVSwitchRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyEipAddressAttributeOutcome EcsClient::modifyEipAddressAttribute(const ModifyEipAddressAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::RemoveTagsOutcome EcsClient::removeTags(const RemoveTagsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifySecurityGroupAttributeOutcome EcsClient::modifySecurityGroupAttribute(const ModifySecurityGroupAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyInstanceAutoReleaseTimeOutcome EcsClient::modifyInstanceAutoReleaseTime(const ModifyInstanceAutoReleaseTimeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DeleteNatGatewayOutcome EcsClient::deleteNatGateway(const DeleteNatGatewayRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeZonesOutcome EcsClient::describeZones(const DescribeZonesRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DeactivateRouterInterfaceOutcome EcsClient::deactivateRouterInterface(const DeactivateRouterInterfaceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeAccessPointsOutcome EcsClient::describeAccessPoints(const DescribeAccessPointsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::CreateCommandOutcome EcsClient::createCommand(const CreateCommandRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeInstancesFullStatusOutcome EcsClient::describeInstancesFullStatus(const DescribeInstancesFullStatusRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ReleaseEipAddressOutcome EcsClient::releaseEipAddress(const ReleaseEipAddressRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DetachClassicLinkVpcOutcome EcsClient::detachClassicLinkVpc(const DetachClassicLinkVpcRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeVSwitchesOutcome EcsClient::describeVSwitches(const DescribeVSwitchesRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyRouterInterfaceSpecOutcome EcsClient::modifyRouterInterfaceSpec(const ModifyRouterInterfaceSpecRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeVpcsOutcome EcsClient::describeVpcs(const DescribeVpcsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ExportImageOutcome EcsClient::exportImage(const ExportImageRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeDiskMonitorDataOutcome EcsClient::describeDiskMonitorData(const DescribeDiskMonitorDataRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyDeploymentSetAttributeOutcome EcsClient::modifyDeploymentSetAttribute(const ModifyDeploymentSetAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyRouterInterfaceAttributeOutcome EcsClient::modifyRouterInterfaceAttribute(const ModifyRouterInterfaceAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeVirtualBorderRoutersForPhysicalConnectionOutcome EcsClient::describeVirtualBorderRoutersForPhysicalConnection(const DescribeVirtualBorderRoutersForPhysicalConnectionRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::CreateDiskOutcome EcsClient::createDisk(const CreateDiskRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::StartInstanceOutcome EcsClient::startInstance(const StartInstanceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeInstanceTypesOutcome EcsClient::describeInstanceTypes(const DescribeInstanceTypesRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeSnapshotPackageOutcome EcsClient::describeSnapshotPackage(const DescribeSnapshotPackageRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::RebootInstanceOutcome EcsClient::rebootInstance(const RebootInstanceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::BindIpRangeOutcome EcsClient::bindIpRange(const BindIpRangeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return BindIpRangeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindIpRangeOutcome(BindIpRangeResult(outcome.result()));
	else
		return BindIpRangeOutcome(outcome.error());
}

void EcsClient::bindIpRangeAsync(const BindIpRangeRequest& request, const BindIpRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindIpRange(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::BindIpRangeOutcomeCallable EcsClient::bindIpRangeCallable(const BindIpRangeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindIpRangeOutcome()>>(
			[this, request]()
			{
			return this->bindIpRange(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::InvokeCommandOutcome EcsClient::invokeCommand(const InvokeCommandRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyUserBusinessBehaviorOutcome EcsClient::modifyUserBusinessBehavior(const ModifyUserBusinessBehaviorRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DeleteForwardEntryOutcome EcsClient::deleteForwardEntry(const DeleteForwardEntryRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeHpcClustersOutcome EcsClient::describeHpcClusters(const DescribeHpcClustersRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::CancelAgreementOutcome EcsClient::cancelAgreement(const CancelAgreementRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CancelAgreementOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelAgreementOutcome(CancelAgreementResult(outcome.result()));
	else
		return CancelAgreementOutcome(outcome.error());
}

void EcsClient::cancelAgreementAsync(const CancelAgreementRequest& request, const CancelAgreementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelAgreement(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::CancelAgreementOutcomeCallable EcsClient::cancelAgreementCallable(const CancelAgreementRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelAgreementOutcome()>>(
			[this, request]()
			{
			return this->cancelAgreement(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyInstanceChargeTypeOutcome EcsClient::modifyInstanceChargeType(const ModifyInstanceChargeTypeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyInstanceAutoRenewAttributeOutcome EcsClient::modifyInstanceAutoRenewAttribute(const ModifyInstanceAutoRenewAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeVirtualBorderRoutersOutcome EcsClient::describeVirtualBorderRouters(const DescribeVirtualBorderRoutersRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyHpcClusterAttributeOutcome EcsClient::modifyHpcClusterAttribute(const ModifyHpcClusterAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeLimitationOutcome EcsClient::describeLimitation(const DescribeLimitationRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribePriceOutcome EcsClient::describePrice(const DescribePriceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DeleteDeploymentSetOutcome EcsClient::deleteDeploymentSet(const DeleteDeploymentSetRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeDeploymentSetTopologyOutcome EcsClient::describeDeploymentSetTopology(const DescribeDeploymentSetTopologyRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDeploymentSetTopologyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDeploymentSetTopologyOutcome(DescribeDeploymentSetTopologyResult(outcome.result()));
	else
		return DescribeDeploymentSetTopologyOutcome(outcome.error());
}

void EcsClient::describeDeploymentSetTopologyAsync(const DescribeDeploymentSetTopologyRequest& request, const DescribeDeploymentSetTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDeploymentSetTopology(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeDeploymentSetTopologyOutcomeCallable EcsClient::describeDeploymentSetTopologyCallable(const DescribeDeploymentSetTopologyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDeploymentSetTopologyOutcome()>>(
			[this, request]()
			{
			return this->describeDeploymentSetTopology(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyInstanceVpcAttributeOutcome EcsClient::modifyInstanceVpcAttribute(const ModifyInstanceVpcAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::AddTagsOutcome EcsClient::addTags(const AddTagsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::CreateHpcClusterOutcome EcsClient::createHpcCluster(const CreateHpcClusterRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeUserBusinessBehaviorOutcome EcsClient::describeUserBusinessBehavior(const DescribeUserBusinessBehaviorRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeCommandsOutcome EcsClient::describeCommands(const DescribeCommandsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DeleteImageOutcome EcsClient::deleteImage(const DeleteImageRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeDisksOutcome EcsClient::describeDisks(const DescribeDisksRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DeleteVpcOutcome EcsClient::deleteVpc(const DeleteVpcRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeImageSupportInstanceTypesOutcome EcsClient::describeImageSupportInstanceTypes(const DescribeImageSupportInstanceTypesRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DeleteCommandOutcome EcsClient::deleteCommand(const DeleteCommandRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ReplaceSystemDiskOutcome EcsClient::replaceSystemDisk(const ReplaceSystemDiskRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DeleteVSwitchOutcome EcsClient::deleteVSwitch(const DeleteVSwitchRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyImageShareGroupPermissionOutcome EcsClient::modifyImageShareGroupPermission(const ModifyImageShareGroupPermissionRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeInstanceVncUrlOutcome EcsClient::describeInstanceVncUrl(const DescribeInstanceVncUrlRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::RecoverVirtualBorderRouterOutcome EcsClient::recoverVirtualBorderRouter(const RecoverVirtualBorderRouterRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeResourceByTagsOutcome EcsClient::describeResourceByTags(const DescribeResourceByTagsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeClustersOutcome EcsClient::describeClusters(const DescribeClustersRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeTagsOutcome EcsClient::describeTags(const DescribeTagsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DeleteBandwidthPackageOutcome EcsClient::deleteBandwidthPackage(const DeleteBandwidthPackageRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeImagesOutcome EcsClient::describeImages(const DescribeImagesRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::AuthorizeSecurityGroupEgressOutcome EcsClient::authorizeSecurityGroupEgress(const AuthorizeSecurityGroupEgressRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::SignAgreementOutcome EcsClient::signAgreement(const SignAgreementRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SignAgreementOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SignAgreementOutcome(SignAgreementResult(outcome.result()));
	else
		return SignAgreementOutcome(outcome.error());
}

void EcsClient::signAgreementAsync(const SignAgreementRequest& request, const SignAgreementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, signAgreement(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::SignAgreementOutcomeCallable EcsClient::signAgreementCallable(const SignAgreementRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SignAgreementOutcome()>>(
			[this, request]()
			{
			return this->signAgreement(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ImportImageOutcome EcsClient::importImage(const ImportImageRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyForwardEntryOutcome EcsClient::modifyForwardEntry(const ModifyForwardEntryRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::RenewInstanceOutcome EcsClient::renewInstance(const RenewInstanceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::CreateVpcOutcome EcsClient::createVpc(const CreateVpcRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::CopyImageOutcome EcsClient::copyImage(const CopyImageRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeInstanceMonitorDataOutcome EcsClient::describeInstanceMonitorData(const DescribeInstanceMonitorDataRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::UnassociateEipAddressOutcome EcsClient::unassociateEipAddress(const UnassociateEipAddressRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::CreateSnapshotOutcome EcsClient::createSnapshot(const CreateSnapshotRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyVirtualBorderRouterAttributeOutcome EcsClient::modifyVirtualBorderRouterAttribute(const ModifyVirtualBorderRouterAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DetachKeyPairOutcome EcsClient::detachKeyPair(const DetachKeyPairRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeTasksOutcome EcsClient::describeTasks(const DescribeTasksRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::LeaveSecurityGroupOutcome EcsClient::leaveSecurityGroup(const LeaveSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeRenewalPriceOutcome EcsClient::describeRenewalPrice(const DescribeRenewalPriceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeInstanceVncPasswdOutcome EcsClient::describeInstanceVncPasswd(const DescribeInstanceVncPasswdRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceVncPasswdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceVncPasswdOutcome(DescribeInstanceVncPasswdResult(outcome.result()));
	else
		return DescribeInstanceVncPasswdOutcome(outcome.error());
}

void EcsClient::describeInstanceVncPasswdAsync(const DescribeInstanceVncPasswdRequest& request, const DescribeInstanceVncPasswdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceVncPasswd(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeInstanceVncPasswdOutcomeCallable EcsClient::describeInstanceVncPasswdCallable(const DescribeInstanceVncPasswdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceVncPasswdOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceVncPasswd(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeInstanceAutoRenewAttributeOutcome EcsClient::describeInstanceAutoRenewAttribute(const DescribeInstanceAutoRenewAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifySecurityGroupRuleOutcome EcsClient::modifySecurityGroupRule(const ModifySecurityGroupRuleRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ImportKeyPairOutcome EcsClient::importKeyPair(const ImportKeyPairRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeNewProjectEipMonitorDataOutcome EcsClient::describeNewProjectEipMonitorData(const DescribeNewProjectEipMonitorDataRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::UnbindIpRangeOutcome EcsClient::unbindIpRange(const UnbindIpRangeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindIpRangeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindIpRangeOutcome(UnbindIpRangeResult(outcome.result()));
	else
		return UnbindIpRangeOutcome(outcome.error());
}

void EcsClient::unbindIpRangeAsync(const UnbindIpRangeRequest& request, const UnbindIpRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindIpRange(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::UnbindIpRangeOutcomeCallable EcsClient::unbindIpRangeCallable(const UnbindIpRangeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindIpRangeOutcome()>>(
			[this, request]()
			{
			return this->unbindIpRange(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteRecycleBinOutcome EcsClient::deleteRecycleBin(const DeleteRecycleBinRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRecycleBinOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRecycleBinOutcome(DeleteRecycleBinResult(outcome.result()));
	else
		return DeleteRecycleBinOutcome(outcome.error());
}

void EcsClient::deleteRecycleBinAsync(const DeleteRecycleBinRequest& request, const DeleteRecycleBinAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRecycleBin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DeleteRecycleBinOutcomeCallable EcsClient::deleteRecycleBinCallable(const DeleteRecycleBinRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRecycleBinOutcome()>>(
			[this, request]()
			{
			return this->deleteRecycleBin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeInstanceRamRoleOutcome EcsClient::describeInstanceRamRole(const DescribeInstanceRamRoleRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::CreateImageOutcome EcsClient::createImage(const CreateImageRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeHaVipsOutcome EcsClient::describeHaVips(const DescribeHaVipsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeInstanceAttributeOutcome EcsClient::describeInstanceAttribute(const DescribeInstanceAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DetachDiskOutcome EcsClient::detachDisk(const DetachDiskRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyImageAttributeOutcome EcsClient::modifyImageAttribute(const ModifyImageAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::AddBandwidthPackageIpsOutcome EcsClient::addBandwidthPackageIps(const AddBandwidthPackageIpsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeInstanceStatusOutcome EcsClient::describeInstanceStatus(const DescribeInstanceStatusRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeNatGatewaysOutcome EcsClient::describeNatGateways(const DescribeNatGatewaysRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DeleteHpcClusterOutcome EcsClient::deleteHpcCluster(const DeleteHpcClusterRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ResetDiskOutcome EcsClient::resetDisk(const ResetDiskRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyDiskChargeTypeOutcome EcsClient::modifyDiskChargeType(const ModifyDiskChargeTypeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyIntranetBandwidthKbOutcome EcsClient::modifyIntranetBandwidthKb(const ModifyIntranetBandwidthKbRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyIntranetBandwidthKbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyIntranetBandwidthKbOutcome(ModifyIntranetBandwidthKbResult(outcome.result()));
	else
		return ModifyIntranetBandwidthKbOutcome(outcome.error());
}

void EcsClient::modifyIntranetBandwidthKbAsync(const ModifyIntranetBandwidthKbRequest& request, const ModifyIntranetBandwidthKbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyIntranetBandwidthKb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::ModifyIntranetBandwidthKbOutcomeCallable EcsClient::modifyIntranetBandwidthKbCallable(const ModifyIntranetBandwidthKbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyIntranetBandwidthKbOutcome()>>(
			[this, request]()
			{
			return this->modifyIntranetBandwidthKb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeBandwidthPackagesOutcome EcsClient::describeBandwidthPackages(const DescribeBandwidthPackagesRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ApplyAutoSnapshotPolicyOutcome EcsClient::applyAutoSnapshotPolicy(const ApplyAutoSnapshotPolicyRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::CreateSecurityGroupOutcome EcsClient::createSecurityGroup(const CreateSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeSnapshotLinksOutcome EcsClient::describeSnapshotLinks(const DescribeSnapshotLinksRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeInvocationResultsOutcome EcsClient::describeInvocationResults(const DescribeInvocationResultsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeRecommendInstanceTypeOutcome EcsClient::describeRecommendInstanceType(const DescribeRecommendInstanceTypeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeTagKeysOutcome EcsClient::describeTagKeys(const DescribeTagKeysRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTagKeysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTagKeysOutcome(DescribeTagKeysResult(outcome.result()));
	else
		return DescribeTagKeysOutcome(outcome.error());
}

void EcsClient::describeTagKeysAsync(const DescribeTagKeysRequest& request, const DescribeTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTagKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeTagKeysOutcomeCallable EcsClient::describeTagKeysCallable(const DescribeTagKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTagKeysOutcome()>>(
			[this, request]()
			{
			return this->describeTagKeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DeleteInstanceOutcome EcsClient::deleteInstance(const DeleteInstanceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeIntranetAttributeKbOutcome EcsClient::describeIntranetAttributeKb(const DescribeIntranetAttributeKbRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIntranetAttributeKbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIntranetAttributeKbOutcome(DescribeIntranetAttributeKbResult(outcome.result()));
	else
		return DescribeIntranetAttributeKbOutcome(outcome.error());
}

void EcsClient::describeIntranetAttributeKbAsync(const DescribeIntranetAttributeKbRequest& request, const DescribeIntranetAttributeKbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIntranetAttributeKb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeIntranetAttributeKbOutcomeCallable EcsClient::describeIntranetAttributeKbCallable(const DescribeIntranetAttributeKbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIntranetAttributeKbOutcome()>>(
			[this, request]()
			{
			return this->describeIntranetAttributeKb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::RemoveBandwidthPackageIpsOutcome EcsClient::removeBandwidthPackageIps(const RemoveBandwidthPackageIpsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyVpcAttributeOutcome EcsClient::modifyVpcAttribute(const ModifyVpcAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeSnapshotsUsageOutcome EcsClient::describeSnapshotsUsage(const DescribeSnapshotsUsageRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DeleteAutoSnapshotPolicyOutcome EcsClient::deleteAutoSnapshotPolicy(const DeleteAutoSnapshotPolicyRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifySecurityGroupEgressRuleOutcome EcsClient::modifySecurityGroupEgressRule(const ModifySecurityGroupEgressRuleRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::CreateInstanceOutcome EcsClient::createInstance(const CreateInstanceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::EnablePhysicalConnectionOutcome EcsClient::enablePhysicalConnection(const EnablePhysicalConnectionRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeInstanceTypeFamiliesOutcome EcsClient::describeInstanceTypeFamilies(const DescribeInstanceTypeFamiliesRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::CreateForwardEntryOutcome EcsClient::createForwardEntry(const CreateForwardEntryRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeRouterInterfacesOutcome EcsClient::describeRouterInterfaces(const DescribeRouterInterfacesRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::EipNotifyPaidOutcome EcsClient::eipNotifyPaid(const EipNotifyPaidRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return EipNotifyPaidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EipNotifyPaidOutcome(EipNotifyPaidResult(outcome.result()));
	else
		return EipNotifyPaidOutcome(outcome.error());
}

void EcsClient::eipNotifyPaidAsync(const EipNotifyPaidRequest& request, const EipNotifyPaidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, eipNotifyPaid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::EipNotifyPaidOutcomeCallable EcsClient::eipNotifyPaidCallable(const EipNotifyPaidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EipNotifyPaidOutcome()>>(
			[this, request]()
			{
			return this->eipNotifyPaid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ReleasePublicIpAddressOutcome EcsClient::releasePublicIpAddress(const ReleasePublicIpAddressRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::CreateVirtualBorderRouterOutcome EcsClient::createVirtualBorderRouter(const CreateVirtualBorderRouterRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::EipFillParamsOutcome EcsClient::eipFillParams(const EipFillParamsRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return EipFillParamsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EipFillParamsOutcome(EipFillParamsResult(outcome.result()));
	else
		return EipFillParamsOutcome(outcome.error());
}

void EcsClient::eipFillParamsAsync(const EipFillParamsRequest& request, const EipFillParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, eipFillParams(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::EipFillParamsOutcomeCallable EcsClient::eipFillParamsCallable(const EipFillParamsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EipFillParamsOutcome()>>(
			[this, request]()
			{
			return this->eipFillParams(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::ModifyPrepayInstanceSpecOutcome EcsClient::modifyPrepayInstanceSpec(const ModifyPrepayInstanceSpecRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::EipFillProductOutcome EcsClient::eipFillProduct(const EipFillProductRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return EipFillProductOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EipFillProductOutcome(EipFillProductResult(outcome.result()));
	else
		return EipFillProductOutcome(outcome.error());
}

void EcsClient::eipFillProductAsync(const EipFillProductRequest& request, const EipFillProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, eipFillProduct(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::EipFillProductOutcomeCallable EcsClient::eipFillProductCallable(const EipFillProductRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EipFillProductOutcome()>>(
			[this, request]()
			{
			return this->eipFillProduct(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribeRouteTablesOutcome EcsClient::describeRouteTables(const DescribeRouteTablesRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeUserDataOutcome EcsClient::describeUserData(const DescribeUserDataRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::JoinResourceGroupOutcome EcsClient::joinResourceGroup(const JoinResourceGroupRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyAutoSnapshotPolicyExOutcome EcsClient::modifyAutoSnapshotPolicyEx(const ModifyAutoSnapshotPolicyExRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::CreatePhysicalConnectionOutcome EcsClient::createPhysicalConnection(const CreatePhysicalConnectionRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeKeyPairsOutcome EcsClient::describeKeyPairs(const DescribeKeyPairsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifySecurityGroupPolicyOutcome EcsClient::modifySecurityGroupPolicy(const ModifySecurityGroupPolicyRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::AssociateHaVipOutcome EcsClient::associateHaVip(const AssociateHaVipRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ConvertNatPublicIpToEipOutcome EcsClient::convertNatPublicIpToEip(const ConvertNatPublicIpToEipRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DeleteRouteEntryOutcome EcsClient::deleteRouteEntry(const DeleteRouteEntryRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DeleteVirtualBorderRouterOutcome EcsClient::deleteVirtualBorderRouter(const DeleteVirtualBorderRouterRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeInstancePhysicalAttributeOutcome EcsClient::describeInstancePhysicalAttribute(const DescribeInstancePhysicalAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstancePhysicalAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstancePhysicalAttributeOutcome(DescribeInstancePhysicalAttributeResult(outcome.result()));
	else
		return DescribeInstancePhysicalAttributeOutcome(outcome.error());
}

void EcsClient::describeInstancePhysicalAttributeAsync(const DescribeInstancePhysicalAttributeRequest& request, const DescribeInstancePhysicalAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstancePhysicalAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeInstancePhysicalAttributeOutcomeCallable EcsClient::describeInstancePhysicalAttributeCallable(const DescribeInstancePhysicalAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstancePhysicalAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeInstancePhysicalAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::TerminatePhysicalConnectionOutcome EcsClient::terminatePhysicalConnection(const TerminatePhysicalConnectionRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::AttachNetworkInterfaceOutcome EcsClient::attachNetworkInterface(const AttachNetworkInterfaceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeSecurityGroupAttributeOutcome EcsClient::describeSecurityGroupAttribute(const DescribeSecurityGroupAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyImageSharePermissionOutcome EcsClient::modifyImageSharePermission(const ModifyImageSharePermissionRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeAutoSnapshotPolicyExOutcome EcsClient::describeAutoSnapshotPolicyEx(const DescribeAutoSnapshotPolicyExRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeImageSharePermissionOutcome EcsClient::describeImageSharePermission(const DescribeImageSharePermissionRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::CancelCopyImageOutcome EcsClient::cancelCopyImage(const CancelCopyImageRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::CreateDeploymentSetOutcome EcsClient::createDeploymentSet(const CreateDeploymentSetRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeRegionsOutcome EcsClient::describeRegions(const DescribeRegionsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeClassicLinkInstancesOutcome EcsClient::describeClassicLinkInstances(const DescribeClassicLinkInstancesRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeAutoSnapshotPolicyOutcome EcsClient::describeAutoSnapshotPolicy(const DescribeAutoSnapshotPolicyRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAutoSnapshotPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAutoSnapshotPolicyOutcome(DescribeAutoSnapshotPolicyResult(outcome.result()));
	else
		return DescribeAutoSnapshotPolicyOutcome(outcome.error());
}

void EcsClient::describeAutoSnapshotPolicyAsync(const DescribeAutoSnapshotPolicyRequest& request, const DescribeAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAutoSnapshotPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeAutoSnapshotPolicyOutcomeCallable EcsClient::describeAutoSnapshotPolicyCallable(const DescribeAutoSnapshotPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAutoSnapshotPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeAutoSnapshotPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::DescribePhysicalConnectionsOutcome EcsClient::describePhysicalConnections(const DescribePhysicalConnectionsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeRecycleBinOutcome EcsClient::describeRecycleBin(const DescribeRecycleBinRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRecycleBinOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRecycleBinOutcome(DescribeRecycleBinResult(outcome.result()));
	else
		return DescribeRecycleBinOutcome(outcome.error());
}

void EcsClient::describeRecycleBinAsync(const DescribeRecycleBinRequest& request, const DescribeRecycleBinAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRecycleBin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeRecycleBinOutcomeCallable EcsClient::describeRecycleBinCallable(const DescribeRecycleBinRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRecycleBinOutcome()>>(
			[this, request]()
			{
			return this->describeRecycleBin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CreateNetworkInterfaceOutcome EcsClient::createNetworkInterface(const CreateNetworkInterfaceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeIpRangesOutcome EcsClient::describeIpRanges(const DescribeIpRangesRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIpRangesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIpRangesOutcome(DescribeIpRangesResult(outcome.result()));
	else
		return DescribeIpRangesOutcome(outcome.error());
}

void EcsClient::describeIpRangesAsync(const DescribeIpRangesRequest& request, const DescribeIpRangesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIpRanges(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsClient::DescribeIpRangesOutcomeCallable EcsClient::describeIpRangesCallable(const DescribeIpRangesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIpRangesOutcome()>>(
			[this, request]()
			{
			return this->describeIpRanges(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsClient::CancelPhysicalConnectionOutcome EcsClient::cancelPhysicalConnection(const CancelPhysicalConnectionRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeVRoutersOutcome EcsClient::describeVRouters(const DescribeVRoutersRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeNetworkInterfacesOutcome EcsClient::describeNetworkInterfaces(const DescribeNetworkInterfacesRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyNetworkInterfaceAttributeOutcome EcsClient::modifyNetworkInterfaceAttribute(const ModifyNetworkInterfaceAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DetachNetworkInterfaceOutcome EcsClient::detachNetworkInterface(const DetachNetworkInterfaceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::AllocateEipAddressOutcome EcsClient::allocateEipAddress(const AllocateEipAddressRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DeleteDiskOutcome EcsClient::deleteDisk(const DeleteDiskRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::UnassociateHaVipOutcome EcsClient::unassociateHaVip(const UnassociateHaVipRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyHaVipAttributeOutcome EcsClient::modifyHaVipAttribute(const ModifyHaVipAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::CreateKeyPairOutcome EcsClient::createKeyPair(const CreateKeyPairRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::AttachClassicLinkVpcOutcome EcsClient::attachClassicLinkVpc(const AttachClassicLinkVpcRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::DescribeDeploymentSetsOutcome EcsClient::describeDeploymentSets(const DescribeDeploymentSetsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::AttachInstanceRamRoleOutcome EcsClient::attachInstanceRamRole(const AttachInstanceRamRoleRequest &request) const
{
	auto endpointOutcome = endpoint();
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

EcsClient::ModifyVRouterAttributeOutcome EcsClient::modifyVRouterAttribute(const ModifyVRouterAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

