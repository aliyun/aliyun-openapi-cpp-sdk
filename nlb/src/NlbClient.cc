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

#include <alibabacloud/nlb/NlbClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Nlb;
using namespace AlibabaCloud::Nlb::Model;

namespace
{
	const std::string SERVICE_NAME = "Nlb";
}

NlbClient::NlbClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "nlb");
}

NlbClient::NlbClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "nlb");
}

NlbClient::NlbClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "nlb");
}

NlbClient::~NlbClient()
{}

NlbClient::AddServersToServerGroupOutcome NlbClient::addServersToServerGroup(const AddServersToServerGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddServersToServerGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddServersToServerGroupOutcome(AddServersToServerGroupResult(outcome.result()));
	else
		return AddServersToServerGroupOutcome(outcome.error());
}

void NlbClient::addServersToServerGroupAsync(const AddServersToServerGroupRequest& request, const AddServersToServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addServersToServerGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::AddServersToServerGroupOutcomeCallable NlbClient::addServersToServerGroupCallable(const AddServersToServerGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddServersToServerGroupOutcome()>>(
			[this, request]()
			{
			return this->addServersToServerGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::AssociateAdditionalCertificatesWithListenerOutcome NlbClient::associateAdditionalCertificatesWithListener(const AssociateAdditionalCertificatesWithListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateAdditionalCertificatesWithListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateAdditionalCertificatesWithListenerOutcome(AssociateAdditionalCertificatesWithListenerResult(outcome.result()));
	else
		return AssociateAdditionalCertificatesWithListenerOutcome(outcome.error());
}

void NlbClient::associateAdditionalCertificatesWithListenerAsync(const AssociateAdditionalCertificatesWithListenerRequest& request, const AssociateAdditionalCertificatesWithListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateAdditionalCertificatesWithListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::AssociateAdditionalCertificatesWithListenerOutcomeCallable NlbClient::associateAdditionalCertificatesWithListenerCallable(const AssociateAdditionalCertificatesWithListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateAdditionalCertificatesWithListenerOutcome()>>(
			[this, request]()
			{
			return this->associateAdditionalCertificatesWithListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::AttachCommonBandwidthPackageToLoadBalancerOutcome NlbClient::attachCommonBandwidthPackageToLoadBalancer(const AttachCommonBandwidthPackageToLoadBalancerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachCommonBandwidthPackageToLoadBalancerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachCommonBandwidthPackageToLoadBalancerOutcome(AttachCommonBandwidthPackageToLoadBalancerResult(outcome.result()));
	else
		return AttachCommonBandwidthPackageToLoadBalancerOutcome(outcome.error());
}

void NlbClient::attachCommonBandwidthPackageToLoadBalancerAsync(const AttachCommonBandwidthPackageToLoadBalancerRequest& request, const AttachCommonBandwidthPackageToLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachCommonBandwidthPackageToLoadBalancer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::AttachCommonBandwidthPackageToLoadBalancerOutcomeCallable NlbClient::attachCommonBandwidthPackageToLoadBalancerCallable(const AttachCommonBandwidthPackageToLoadBalancerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachCommonBandwidthPackageToLoadBalancerOutcome()>>(
			[this, request]()
			{
			return this->attachCommonBandwidthPackageToLoadBalancer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::CancelShiftLoadBalancerZonesOutcome NlbClient::cancelShiftLoadBalancerZones(const CancelShiftLoadBalancerZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelShiftLoadBalancerZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelShiftLoadBalancerZonesOutcome(CancelShiftLoadBalancerZonesResult(outcome.result()));
	else
		return CancelShiftLoadBalancerZonesOutcome(outcome.error());
}

void NlbClient::cancelShiftLoadBalancerZonesAsync(const CancelShiftLoadBalancerZonesRequest& request, const CancelShiftLoadBalancerZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelShiftLoadBalancerZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::CancelShiftLoadBalancerZonesOutcomeCallable NlbClient::cancelShiftLoadBalancerZonesCallable(const CancelShiftLoadBalancerZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelShiftLoadBalancerZonesOutcome()>>(
			[this, request]()
			{
			return this->cancelShiftLoadBalancerZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::CreateListenerOutcome NlbClient::createListener(const CreateListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateListenerOutcome(CreateListenerResult(outcome.result()));
	else
		return CreateListenerOutcome(outcome.error());
}

void NlbClient::createListenerAsync(const CreateListenerRequest& request, const CreateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::CreateListenerOutcomeCallable NlbClient::createListenerCallable(const CreateListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateListenerOutcome()>>(
			[this, request]()
			{
			return this->createListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::CreateLoadBalancerOutcome NlbClient::createLoadBalancer(const CreateLoadBalancerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLoadBalancerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLoadBalancerOutcome(CreateLoadBalancerResult(outcome.result()));
	else
		return CreateLoadBalancerOutcome(outcome.error());
}

void NlbClient::createLoadBalancerAsync(const CreateLoadBalancerRequest& request, const CreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLoadBalancer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::CreateLoadBalancerOutcomeCallable NlbClient::createLoadBalancerCallable(const CreateLoadBalancerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLoadBalancerOutcome()>>(
			[this, request]()
			{
			return this->createLoadBalancer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::CreateSecurityPolicyOutcome NlbClient::createSecurityPolicy(const CreateSecurityPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSecurityPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSecurityPolicyOutcome(CreateSecurityPolicyResult(outcome.result()));
	else
		return CreateSecurityPolicyOutcome(outcome.error());
}

void NlbClient::createSecurityPolicyAsync(const CreateSecurityPolicyRequest& request, const CreateSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSecurityPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::CreateSecurityPolicyOutcomeCallable NlbClient::createSecurityPolicyCallable(const CreateSecurityPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSecurityPolicyOutcome()>>(
			[this, request]()
			{
			return this->createSecurityPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::CreateServerGroupOutcome NlbClient::createServerGroup(const CreateServerGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServerGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServerGroupOutcome(CreateServerGroupResult(outcome.result()));
	else
		return CreateServerGroupOutcome(outcome.error());
}

void NlbClient::createServerGroupAsync(const CreateServerGroupRequest& request, const CreateServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServerGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::CreateServerGroupOutcomeCallable NlbClient::createServerGroupCallable(const CreateServerGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServerGroupOutcome()>>(
			[this, request]()
			{
			return this->createServerGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::DeleteListenerOutcome NlbClient::deleteListener(const DeleteListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteListenerOutcome(DeleteListenerResult(outcome.result()));
	else
		return DeleteListenerOutcome(outcome.error());
}

void NlbClient::deleteListenerAsync(const DeleteListenerRequest& request, const DeleteListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::DeleteListenerOutcomeCallable NlbClient::deleteListenerCallable(const DeleteListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteListenerOutcome()>>(
			[this, request]()
			{
			return this->deleteListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::DeleteLoadBalancerOutcome NlbClient::deleteLoadBalancer(const DeleteLoadBalancerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLoadBalancerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLoadBalancerOutcome(DeleteLoadBalancerResult(outcome.result()));
	else
		return DeleteLoadBalancerOutcome(outcome.error());
}

void NlbClient::deleteLoadBalancerAsync(const DeleteLoadBalancerRequest& request, const DeleteLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLoadBalancer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::DeleteLoadBalancerOutcomeCallable NlbClient::deleteLoadBalancerCallable(const DeleteLoadBalancerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLoadBalancerOutcome()>>(
			[this, request]()
			{
			return this->deleteLoadBalancer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::DeleteSecurityPolicyOutcome NlbClient::deleteSecurityPolicy(const DeleteSecurityPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSecurityPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSecurityPolicyOutcome(DeleteSecurityPolicyResult(outcome.result()));
	else
		return DeleteSecurityPolicyOutcome(outcome.error());
}

void NlbClient::deleteSecurityPolicyAsync(const DeleteSecurityPolicyRequest& request, const DeleteSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSecurityPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::DeleteSecurityPolicyOutcomeCallable NlbClient::deleteSecurityPolicyCallable(const DeleteSecurityPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSecurityPolicyOutcome()>>(
			[this, request]()
			{
			return this->deleteSecurityPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::DeleteServerGroupOutcome NlbClient::deleteServerGroup(const DeleteServerGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteServerGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteServerGroupOutcome(DeleteServerGroupResult(outcome.result()));
	else
		return DeleteServerGroupOutcome(outcome.error());
}

void NlbClient::deleteServerGroupAsync(const DeleteServerGroupRequest& request, const DeleteServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteServerGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::DeleteServerGroupOutcomeCallable NlbClient::deleteServerGroupCallable(const DeleteServerGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteServerGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteServerGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::DescribeRegionsOutcome NlbClient::describeRegions(const DescribeRegionsRequest &request) const
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

void NlbClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::DescribeRegionsOutcomeCallable NlbClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::DescribeZonesOutcome NlbClient::describeZones(const DescribeZonesRequest &request) const
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

void NlbClient::describeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::DescribeZonesOutcomeCallable NlbClient::describeZonesCallable(const DescribeZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeZonesOutcome()>>(
			[this, request]()
			{
			return this->describeZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::DetachCommonBandwidthPackageFromLoadBalancerOutcome NlbClient::detachCommonBandwidthPackageFromLoadBalancer(const DetachCommonBandwidthPackageFromLoadBalancerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachCommonBandwidthPackageFromLoadBalancerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachCommonBandwidthPackageFromLoadBalancerOutcome(DetachCommonBandwidthPackageFromLoadBalancerResult(outcome.result()));
	else
		return DetachCommonBandwidthPackageFromLoadBalancerOutcome(outcome.error());
}

void NlbClient::detachCommonBandwidthPackageFromLoadBalancerAsync(const DetachCommonBandwidthPackageFromLoadBalancerRequest& request, const DetachCommonBandwidthPackageFromLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachCommonBandwidthPackageFromLoadBalancer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::DetachCommonBandwidthPackageFromLoadBalancerOutcomeCallable NlbClient::detachCommonBandwidthPackageFromLoadBalancerCallable(const DetachCommonBandwidthPackageFromLoadBalancerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachCommonBandwidthPackageFromLoadBalancerOutcome()>>(
			[this, request]()
			{
			return this->detachCommonBandwidthPackageFromLoadBalancer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::DisableLoadBalancerIpv6InternetOutcome NlbClient::disableLoadBalancerIpv6Internet(const DisableLoadBalancerIpv6InternetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableLoadBalancerIpv6InternetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableLoadBalancerIpv6InternetOutcome(DisableLoadBalancerIpv6InternetResult(outcome.result()));
	else
		return DisableLoadBalancerIpv6InternetOutcome(outcome.error());
}

void NlbClient::disableLoadBalancerIpv6InternetAsync(const DisableLoadBalancerIpv6InternetRequest& request, const DisableLoadBalancerIpv6InternetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableLoadBalancerIpv6Internet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::DisableLoadBalancerIpv6InternetOutcomeCallable NlbClient::disableLoadBalancerIpv6InternetCallable(const DisableLoadBalancerIpv6InternetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableLoadBalancerIpv6InternetOutcome()>>(
			[this, request]()
			{
			return this->disableLoadBalancerIpv6Internet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::DisassociateAdditionalCertificatesWithListenerOutcome NlbClient::disassociateAdditionalCertificatesWithListener(const DisassociateAdditionalCertificatesWithListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisassociateAdditionalCertificatesWithListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisassociateAdditionalCertificatesWithListenerOutcome(DisassociateAdditionalCertificatesWithListenerResult(outcome.result()));
	else
		return DisassociateAdditionalCertificatesWithListenerOutcome(outcome.error());
}

void NlbClient::disassociateAdditionalCertificatesWithListenerAsync(const DisassociateAdditionalCertificatesWithListenerRequest& request, const DisassociateAdditionalCertificatesWithListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disassociateAdditionalCertificatesWithListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::DisassociateAdditionalCertificatesWithListenerOutcomeCallable NlbClient::disassociateAdditionalCertificatesWithListenerCallable(const DisassociateAdditionalCertificatesWithListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisassociateAdditionalCertificatesWithListenerOutcome()>>(
			[this, request]()
			{
			return this->disassociateAdditionalCertificatesWithListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::EnableLoadBalancerIpv6InternetOutcome NlbClient::enableLoadBalancerIpv6Internet(const EnableLoadBalancerIpv6InternetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableLoadBalancerIpv6InternetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableLoadBalancerIpv6InternetOutcome(EnableLoadBalancerIpv6InternetResult(outcome.result()));
	else
		return EnableLoadBalancerIpv6InternetOutcome(outcome.error());
}

void NlbClient::enableLoadBalancerIpv6InternetAsync(const EnableLoadBalancerIpv6InternetRequest& request, const EnableLoadBalancerIpv6InternetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableLoadBalancerIpv6Internet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::EnableLoadBalancerIpv6InternetOutcomeCallable NlbClient::enableLoadBalancerIpv6InternetCallable(const EnableLoadBalancerIpv6InternetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableLoadBalancerIpv6InternetOutcome()>>(
			[this, request]()
			{
			return this->enableLoadBalancerIpv6Internet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::GetJobStatusOutcome NlbClient::getJobStatus(const GetJobStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobStatusOutcome(GetJobStatusResult(outcome.result()));
	else
		return GetJobStatusOutcome(outcome.error());
}

void NlbClient::getJobStatusAsync(const GetJobStatusRequest& request, const GetJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::GetJobStatusOutcomeCallable NlbClient::getJobStatusCallable(const GetJobStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobStatusOutcome()>>(
			[this, request]()
			{
			return this->getJobStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::GetListenerAttributeOutcome NlbClient::getListenerAttribute(const GetListenerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetListenerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetListenerAttributeOutcome(GetListenerAttributeResult(outcome.result()));
	else
		return GetListenerAttributeOutcome(outcome.error());
}

void NlbClient::getListenerAttributeAsync(const GetListenerAttributeRequest& request, const GetListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getListenerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::GetListenerAttributeOutcomeCallable NlbClient::getListenerAttributeCallable(const GetListenerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetListenerAttributeOutcome()>>(
			[this, request]()
			{
			return this->getListenerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::GetListenerHealthStatusOutcome NlbClient::getListenerHealthStatus(const GetListenerHealthStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetListenerHealthStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetListenerHealthStatusOutcome(GetListenerHealthStatusResult(outcome.result()));
	else
		return GetListenerHealthStatusOutcome(outcome.error());
}

void NlbClient::getListenerHealthStatusAsync(const GetListenerHealthStatusRequest& request, const GetListenerHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getListenerHealthStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::GetListenerHealthStatusOutcomeCallable NlbClient::getListenerHealthStatusCallable(const GetListenerHealthStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetListenerHealthStatusOutcome()>>(
			[this, request]()
			{
			return this->getListenerHealthStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::GetLoadBalancerAttributeOutcome NlbClient::getLoadBalancerAttribute(const GetLoadBalancerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLoadBalancerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLoadBalancerAttributeOutcome(GetLoadBalancerAttributeResult(outcome.result()));
	else
		return GetLoadBalancerAttributeOutcome(outcome.error());
}

void NlbClient::getLoadBalancerAttributeAsync(const GetLoadBalancerAttributeRequest& request, const GetLoadBalancerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLoadBalancerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::GetLoadBalancerAttributeOutcomeCallable NlbClient::getLoadBalancerAttributeCallable(const GetLoadBalancerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLoadBalancerAttributeOutcome()>>(
			[this, request]()
			{
			return this->getLoadBalancerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::ListListenerCertificatesOutcome NlbClient::listListenerCertificates(const ListListenerCertificatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListListenerCertificatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListListenerCertificatesOutcome(ListListenerCertificatesResult(outcome.result()));
	else
		return ListListenerCertificatesOutcome(outcome.error());
}

void NlbClient::listListenerCertificatesAsync(const ListListenerCertificatesRequest& request, const ListListenerCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listListenerCertificates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::ListListenerCertificatesOutcomeCallable NlbClient::listListenerCertificatesCallable(const ListListenerCertificatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListListenerCertificatesOutcome()>>(
			[this, request]()
			{
			return this->listListenerCertificates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::ListListenersOutcome NlbClient::listListeners(const ListListenersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListListenersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListListenersOutcome(ListListenersResult(outcome.result()));
	else
		return ListListenersOutcome(outcome.error());
}

void NlbClient::listListenersAsync(const ListListenersRequest& request, const ListListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listListeners(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::ListListenersOutcomeCallable NlbClient::listListenersCallable(const ListListenersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListListenersOutcome()>>(
			[this, request]()
			{
			return this->listListeners(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::ListLoadBalancersOutcome NlbClient::listLoadBalancers(const ListLoadBalancersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLoadBalancersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLoadBalancersOutcome(ListLoadBalancersResult(outcome.result()));
	else
		return ListLoadBalancersOutcome(outcome.error());
}

void NlbClient::listLoadBalancersAsync(const ListLoadBalancersRequest& request, const ListLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLoadBalancers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::ListLoadBalancersOutcomeCallable NlbClient::listLoadBalancersCallable(const ListLoadBalancersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLoadBalancersOutcome()>>(
			[this, request]()
			{
			return this->listLoadBalancers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::ListSecurityPolicyOutcome NlbClient::listSecurityPolicy(const ListSecurityPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSecurityPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSecurityPolicyOutcome(ListSecurityPolicyResult(outcome.result()));
	else
		return ListSecurityPolicyOutcome(outcome.error());
}

void NlbClient::listSecurityPolicyAsync(const ListSecurityPolicyRequest& request, const ListSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSecurityPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::ListSecurityPolicyOutcomeCallable NlbClient::listSecurityPolicyCallable(const ListSecurityPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSecurityPolicyOutcome()>>(
			[this, request]()
			{
			return this->listSecurityPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::ListServerGroupServersOutcome NlbClient::listServerGroupServers(const ListServerGroupServersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListServerGroupServersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListServerGroupServersOutcome(ListServerGroupServersResult(outcome.result()));
	else
		return ListServerGroupServersOutcome(outcome.error());
}

void NlbClient::listServerGroupServersAsync(const ListServerGroupServersRequest& request, const ListServerGroupServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listServerGroupServers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::ListServerGroupServersOutcomeCallable NlbClient::listServerGroupServersCallable(const ListServerGroupServersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListServerGroupServersOutcome()>>(
			[this, request]()
			{
			return this->listServerGroupServers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::ListServerGroupsOutcome NlbClient::listServerGroups(const ListServerGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListServerGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListServerGroupsOutcome(ListServerGroupsResult(outcome.result()));
	else
		return ListServerGroupsOutcome(outcome.error());
}

void NlbClient::listServerGroupsAsync(const ListServerGroupsRequest& request, const ListServerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listServerGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::ListServerGroupsOutcomeCallable NlbClient::listServerGroupsCallable(const ListServerGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListServerGroupsOutcome()>>(
			[this, request]()
			{
			return this->listServerGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::ListSystemSecurityPolicyOutcome NlbClient::listSystemSecurityPolicy(const ListSystemSecurityPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSystemSecurityPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSystemSecurityPolicyOutcome(ListSystemSecurityPolicyResult(outcome.result()));
	else
		return ListSystemSecurityPolicyOutcome(outcome.error());
}

void NlbClient::listSystemSecurityPolicyAsync(const ListSystemSecurityPolicyRequest& request, const ListSystemSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSystemSecurityPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::ListSystemSecurityPolicyOutcomeCallable NlbClient::listSystemSecurityPolicyCallable(const ListSystemSecurityPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSystemSecurityPolicyOutcome()>>(
			[this, request]()
			{
			return this->listSystemSecurityPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::ListTagResourcesOutcome NlbClient::listTagResources(const ListTagResourcesRequest &request) const
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

void NlbClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::ListTagResourcesOutcomeCallable NlbClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::LoadBalancerJoinSecurityGroupOutcome NlbClient::loadBalancerJoinSecurityGroup(const LoadBalancerJoinSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LoadBalancerJoinSecurityGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LoadBalancerJoinSecurityGroupOutcome(LoadBalancerJoinSecurityGroupResult(outcome.result()));
	else
		return LoadBalancerJoinSecurityGroupOutcome(outcome.error());
}

void NlbClient::loadBalancerJoinSecurityGroupAsync(const LoadBalancerJoinSecurityGroupRequest& request, const LoadBalancerJoinSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, loadBalancerJoinSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::LoadBalancerJoinSecurityGroupOutcomeCallable NlbClient::loadBalancerJoinSecurityGroupCallable(const LoadBalancerJoinSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LoadBalancerJoinSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->loadBalancerJoinSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::LoadBalancerLeaveSecurityGroupOutcome NlbClient::loadBalancerLeaveSecurityGroup(const LoadBalancerLeaveSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LoadBalancerLeaveSecurityGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LoadBalancerLeaveSecurityGroupOutcome(LoadBalancerLeaveSecurityGroupResult(outcome.result()));
	else
		return LoadBalancerLeaveSecurityGroupOutcome(outcome.error());
}

void NlbClient::loadBalancerLeaveSecurityGroupAsync(const LoadBalancerLeaveSecurityGroupRequest& request, const LoadBalancerLeaveSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, loadBalancerLeaveSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::LoadBalancerLeaveSecurityGroupOutcomeCallable NlbClient::loadBalancerLeaveSecurityGroupCallable(const LoadBalancerLeaveSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LoadBalancerLeaveSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->loadBalancerLeaveSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::MoveResourceGroupOutcome NlbClient::moveResourceGroup(const MoveResourceGroupRequest &request) const
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

void NlbClient::moveResourceGroupAsync(const MoveResourceGroupRequest& request, const MoveResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moveResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::MoveResourceGroupOutcomeCallable NlbClient::moveResourceGroupCallable(const MoveResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoveResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->moveResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::RemoveServersFromServerGroupOutcome NlbClient::removeServersFromServerGroup(const RemoveServersFromServerGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveServersFromServerGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveServersFromServerGroupOutcome(RemoveServersFromServerGroupResult(outcome.result()));
	else
		return RemoveServersFromServerGroupOutcome(outcome.error());
}

void NlbClient::removeServersFromServerGroupAsync(const RemoveServersFromServerGroupRequest& request, const RemoveServersFromServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeServersFromServerGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::RemoveServersFromServerGroupOutcomeCallable NlbClient::removeServersFromServerGroupCallable(const RemoveServersFromServerGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveServersFromServerGroupOutcome()>>(
			[this, request]()
			{
			return this->removeServersFromServerGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::StartListenerOutcome NlbClient::startListener(const StartListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartListenerOutcome(StartListenerResult(outcome.result()));
	else
		return StartListenerOutcome(outcome.error());
}

void NlbClient::startListenerAsync(const StartListenerRequest& request, const StartListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::StartListenerOutcomeCallable NlbClient::startListenerCallable(const StartListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartListenerOutcome()>>(
			[this, request]()
			{
			return this->startListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::StartShiftLoadBalancerZonesOutcome NlbClient::startShiftLoadBalancerZones(const StartShiftLoadBalancerZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartShiftLoadBalancerZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartShiftLoadBalancerZonesOutcome(StartShiftLoadBalancerZonesResult(outcome.result()));
	else
		return StartShiftLoadBalancerZonesOutcome(outcome.error());
}

void NlbClient::startShiftLoadBalancerZonesAsync(const StartShiftLoadBalancerZonesRequest& request, const StartShiftLoadBalancerZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startShiftLoadBalancerZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::StartShiftLoadBalancerZonesOutcomeCallable NlbClient::startShiftLoadBalancerZonesCallable(const StartShiftLoadBalancerZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartShiftLoadBalancerZonesOutcome()>>(
			[this, request]()
			{
			return this->startShiftLoadBalancerZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::StopListenerOutcome NlbClient::stopListener(const StopListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopListenerOutcome(StopListenerResult(outcome.result()));
	else
		return StopListenerOutcome(outcome.error());
}

void NlbClient::stopListenerAsync(const StopListenerRequest& request, const StopListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::StopListenerOutcomeCallable NlbClient::stopListenerCallable(const StopListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopListenerOutcome()>>(
			[this, request]()
			{
			return this->stopListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::TagResourcesOutcome NlbClient::tagResources(const TagResourcesRequest &request) const
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

void NlbClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::TagResourcesOutcomeCallable NlbClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::UntagResourcesOutcome NlbClient::untagResources(const UntagResourcesRequest &request) const
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

void NlbClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::UntagResourcesOutcomeCallable NlbClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::UpdateListenerAttributeOutcome NlbClient::updateListenerAttribute(const UpdateListenerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateListenerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateListenerAttributeOutcome(UpdateListenerAttributeResult(outcome.result()));
	else
		return UpdateListenerAttributeOutcome(outcome.error());
}

void NlbClient::updateListenerAttributeAsync(const UpdateListenerAttributeRequest& request, const UpdateListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateListenerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::UpdateListenerAttributeOutcomeCallable NlbClient::updateListenerAttributeCallable(const UpdateListenerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateListenerAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateListenerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::UpdateLoadBalancerAddressTypeConfigOutcome NlbClient::updateLoadBalancerAddressTypeConfig(const UpdateLoadBalancerAddressTypeConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLoadBalancerAddressTypeConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLoadBalancerAddressTypeConfigOutcome(UpdateLoadBalancerAddressTypeConfigResult(outcome.result()));
	else
		return UpdateLoadBalancerAddressTypeConfigOutcome(outcome.error());
}

void NlbClient::updateLoadBalancerAddressTypeConfigAsync(const UpdateLoadBalancerAddressTypeConfigRequest& request, const UpdateLoadBalancerAddressTypeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLoadBalancerAddressTypeConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::UpdateLoadBalancerAddressTypeConfigOutcomeCallable NlbClient::updateLoadBalancerAddressTypeConfigCallable(const UpdateLoadBalancerAddressTypeConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLoadBalancerAddressTypeConfigOutcome()>>(
			[this, request]()
			{
			return this->updateLoadBalancerAddressTypeConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::UpdateLoadBalancerAttributeOutcome NlbClient::updateLoadBalancerAttribute(const UpdateLoadBalancerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLoadBalancerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLoadBalancerAttributeOutcome(UpdateLoadBalancerAttributeResult(outcome.result()));
	else
		return UpdateLoadBalancerAttributeOutcome(outcome.error());
}

void NlbClient::updateLoadBalancerAttributeAsync(const UpdateLoadBalancerAttributeRequest& request, const UpdateLoadBalancerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLoadBalancerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::UpdateLoadBalancerAttributeOutcomeCallable NlbClient::updateLoadBalancerAttributeCallable(const UpdateLoadBalancerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLoadBalancerAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateLoadBalancerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::UpdateLoadBalancerProtectionOutcome NlbClient::updateLoadBalancerProtection(const UpdateLoadBalancerProtectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLoadBalancerProtectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLoadBalancerProtectionOutcome(UpdateLoadBalancerProtectionResult(outcome.result()));
	else
		return UpdateLoadBalancerProtectionOutcome(outcome.error());
}

void NlbClient::updateLoadBalancerProtectionAsync(const UpdateLoadBalancerProtectionRequest& request, const UpdateLoadBalancerProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLoadBalancerProtection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::UpdateLoadBalancerProtectionOutcomeCallable NlbClient::updateLoadBalancerProtectionCallable(const UpdateLoadBalancerProtectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLoadBalancerProtectionOutcome()>>(
			[this, request]()
			{
			return this->updateLoadBalancerProtection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::UpdateLoadBalancerZonesOutcome NlbClient::updateLoadBalancerZones(const UpdateLoadBalancerZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLoadBalancerZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLoadBalancerZonesOutcome(UpdateLoadBalancerZonesResult(outcome.result()));
	else
		return UpdateLoadBalancerZonesOutcome(outcome.error());
}

void NlbClient::updateLoadBalancerZonesAsync(const UpdateLoadBalancerZonesRequest& request, const UpdateLoadBalancerZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLoadBalancerZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::UpdateLoadBalancerZonesOutcomeCallable NlbClient::updateLoadBalancerZonesCallable(const UpdateLoadBalancerZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLoadBalancerZonesOutcome()>>(
			[this, request]()
			{
			return this->updateLoadBalancerZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::UpdateSecurityPolicyAttributeOutcome NlbClient::updateSecurityPolicyAttribute(const UpdateSecurityPolicyAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSecurityPolicyAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSecurityPolicyAttributeOutcome(UpdateSecurityPolicyAttributeResult(outcome.result()));
	else
		return UpdateSecurityPolicyAttributeOutcome(outcome.error());
}

void NlbClient::updateSecurityPolicyAttributeAsync(const UpdateSecurityPolicyAttributeRequest& request, const UpdateSecurityPolicyAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSecurityPolicyAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::UpdateSecurityPolicyAttributeOutcomeCallable NlbClient::updateSecurityPolicyAttributeCallable(const UpdateSecurityPolicyAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSecurityPolicyAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateSecurityPolicyAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::UpdateServerGroupAttributeOutcome NlbClient::updateServerGroupAttribute(const UpdateServerGroupAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateServerGroupAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateServerGroupAttributeOutcome(UpdateServerGroupAttributeResult(outcome.result()));
	else
		return UpdateServerGroupAttributeOutcome(outcome.error());
}

void NlbClient::updateServerGroupAttributeAsync(const UpdateServerGroupAttributeRequest& request, const UpdateServerGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateServerGroupAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::UpdateServerGroupAttributeOutcomeCallable NlbClient::updateServerGroupAttributeCallable(const UpdateServerGroupAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateServerGroupAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateServerGroupAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NlbClient::UpdateServerGroupServersAttributeOutcome NlbClient::updateServerGroupServersAttribute(const UpdateServerGroupServersAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateServerGroupServersAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateServerGroupServersAttributeOutcome(UpdateServerGroupServersAttributeResult(outcome.result()));
	else
		return UpdateServerGroupServersAttributeOutcome(outcome.error());
}

void NlbClient::updateServerGroupServersAttributeAsync(const UpdateServerGroupServersAttributeRequest& request, const UpdateServerGroupServersAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateServerGroupServersAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NlbClient::UpdateServerGroupServersAttributeOutcomeCallable NlbClient::updateServerGroupServersAttributeCallable(const UpdateServerGroupServersAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateServerGroupServersAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateServerGroupServersAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

