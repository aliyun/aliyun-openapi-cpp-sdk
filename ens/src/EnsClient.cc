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

#include <alibabacloud/ens/EnsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

namespace
{
	const std::string SERVICE_NAME = "Ens";
}

EnsClient::EnsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ens");
}

EnsClient::EnsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ens");
}

EnsClient::EnsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ens");
}

EnsClient::~EnsClient()
{}

EnsClient::AccosicateNetworkAclOutcome EnsClient::accosicateNetworkAcl(const AccosicateNetworkAclRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AccosicateNetworkAclOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AccosicateNetworkAclOutcome(AccosicateNetworkAclResult(outcome.result()));
	else
		return AccosicateNetworkAclOutcome(outcome.error());
}

void EnsClient::accosicateNetworkAclAsync(const AccosicateNetworkAclRequest& request, const AccosicateNetworkAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, accosicateNetworkAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::AccosicateNetworkAclOutcomeCallable EnsClient::accosicateNetworkAclCallable(const AccosicateNetworkAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AccosicateNetworkAclOutcome()>>(
			[this, request]()
			{
			return this->accosicateNetworkAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::AddBackendServersOutcome EnsClient::addBackendServers(const AddBackendServersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddBackendServersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddBackendServersOutcome(AddBackendServersResult(outcome.result()));
	else
		return AddBackendServersOutcome(outcome.error());
}

void EnsClient::addBackendServersAsync(const AddBackendServersRequest& request, const AddBackendServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addBackendServers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::AddBackendServersOutcomeCallable EnsClient::addBackendServersCallable(const AddBackendServersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddBackendServersOutcome()>>(
			[this, request]()
			{
			return this->addBackendServers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::AddDeviceInternetPortOutcome EnsClient::addDeviceInternetPort(const AddDeviceInternetPortRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddDeviceInternetPortOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddDeviceInternetPortOutcome(AddDeviceInternetPortResult(outcome.result()));
	else
		return AddDeviceInternetPortOutcome(outcome.error());
}

void EnsClient::addDeviceInternetPortAsync(const AddDeviceInternetPortRequest& request, const AddDeviceInternetPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDeviceInternetPort(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::AddDeviceInternetPortOutcomeCallable EnsClient::addDeviceInternetPortCallable(const AddDeviceInternetPortRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDeviceInternetPortOutcome()>>(
			[this, request]()
			{
			return this->addDeviceInternetPort(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::AddNetworkInterfaceToInstanceOutcome EnsClient::addNetworkInterfaceToInstance(const AddNetworkInterfaceToInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddNetworkInterfaceToInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddNetworkInterfaceToInstanceOutcome(AddNetworkInterfaceToInstanceResult(outcome.result()));
	else
		return AddNetworkInterfaceToInstanceOutcome(outcome.error());
}

void EnsClient::addNetworkInterfaceToInstanceAsync(const AddNetworkInterfaceToInstanceRequest& request, const AddNetworkInterfaceToInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addNetworkInterfaceToInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::AddNetworkInterfaceToInstanceOutcomeCallable EnsClient::addNetworkInterfaceToInstanceCallable(const AddNetworkInterfaceToInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddNetworkInterfaceToInstanceOutcome()>>(
			[this, request]()
			{
			return this->addNetworkInterfaceToInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::AddSnatIpForSnatEntryOutcome EnsClient::addSnatIpForSnatEntry(const AddSnatIpForSnatEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddSnatIpForSnatEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddSnatIpForSnatEntryOutcome(AddSnatIpForSnatEntryResult(outcome.result()));
	else
		return AddSnatIpForSnatEntryOutcome(outcome.error());
}

void EnsClient::addSnatIpForSnatEntryAsync(const AddSnatIpForSnatEntryRequest& request, const AddSnatIpForSnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addSnatIpForSnatEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::AddSnatIpForSnatEntryOutcomeCallable EnsClient::addSnatIpForSnatEntryCallable(const AddSnatIpForSnatEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddSnatIpForSnatEntryOutcome()>>(
			[this, request]()
			{
			return this->addSnatIpForSnatEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::AssignPrivateIpAddressesOutcome EnsClient::assignPrivateIpAddresses(const AssignPrivateIpAddressesRequest &request) const
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

void EnsClient::assignPrivateIpAddressesAsync(const AssignPrivateIpAddressesRequest& request, const AssignPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, assignPrivateIpAddresses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::AssignPrivateIpAddressesOutcomeCallable EnsClient::assignPrivateIpAddressesCallable(const AssignPrivateIpAddressesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssignPrivateIpAddressesOutcome()>>(
			[this, request]()
			{
			return this->assignPrivateIpAddresses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::AssociateEnsEipAddressOutcome EnsClient::associateEnsEipAddress(const AssociateEnsEipAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateEnsEipAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateEnsEipAddressOutcome(AssociateEnsEipAddressResult(outcome.result()));
	else
		return AssociateEnsEipAddressOutcome(outcome.error());
}

void EnsClient::associateEnsEipAddressAsync(const AssociateEnsEipAddressRequest& request, const AssociateEnsEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateEnsEipAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::AssociateEnsEipAddressOutcomeCallable EnsClient::associateEnsEipAddressCallable(const AssociateEnsEipAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateEnsEipAddressOutcome()>>(
			[this, request]()
			{
			return this->associateEnsEipAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::AssociateHaVipOutcome EnsClient::associateHaVip(const AssociateHaVipRequest &request) const
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

void EnsClient::associateHaVipAsync(const AssociateHaVipRequest& request, const AssociateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateHaVip(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::AssociateHaVipOutcomeCallable EnsClient::associateHaVipCallable(const AssociateHaVipRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateHaVipOutcome()>>(
			[this, request]()
			{
			return this->associateHaVip(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::AttachDiskOutcome EnsClient::attachDisk(const AttachDiskRequest &request) const
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

void EnsClient::attachDiskAsync(const AttachDiskRequest& request, const AttachDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::AttachDiskOutcomeCallable EnsClient::attachDiskCallable(const AttachDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachDiskOutcome()>>(
			[this, request]()
			{
			return this->attachDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::AttachEnsInstancesOutcome EnsClient::attachEnsInstances(const AttachEnsInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachEnsInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachEnsInstancesOutcome(AttachEnsInstancesResult(outcome.result()));
	else
		return AttachEnsInstancesOutcome(outcome.error());
}

void EnsClient::attachEnsInstancesAsync(const AttachEnsInstancesRequest& request, const AttachEnsInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachEnsInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::AttachEnsInstancesOutcomeCallable EnsClient::attachEnsInstancesCallable(const AttachEnsInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachEnsInstancesOutcome()>>(
			[this, request]()
			{
			return this->attachEnsInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::AttachInstanceSDGOutcome EnsClient::attachInstanceSDG(const AttachInstanceSDGRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachInstanceSDGOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachInstanceSDGOutcome(AttachInstanceSDGResult(outcome.result()));
	else
		return AttachInstanceSDGOutcome(outcome.error());
}

void EnsClient::attachInstanceSDGAsync(const AttachInstanceSDGRequest& request, const AttachInstanceSDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachInstanceSDG(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::AttachInstanceSDGOutcomeCallable EnsClient::attachInstanceSDGCallable(const AttachInstanceSDGRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachInstanceSDGOutcome()>>(
			[this, request]()
			{
			return this->attachInstanceSDG(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::AttachNetworkInterfaceOutcome EnsClient::attachNetworkInterface(const AttachNetworkInterfaceRequest &request) const
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

void EnsClient::attachNetworkInterfaceAsync(const AttachNetworkInterfaceRequest& request, const AttachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachNetworkInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::AttachNetworkInterfaceOutcomeCallable EnsClient::attachNetworkInterfaceCallable(const AttachNetworkInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachNetworkInterfaceOutcome()>>(
			[this, request]()
			{
			return this->attachNetworkInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::AuthorizeSecurityGroupOutcome EnsClient::authorizeSecurityGroup(const AuthorizeSecurityGroupRequest &request) const
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

void EnsClient::authorizeSecurityGroupAsync(const AuthorizeSecurityGroupRequest& request, const AuthorizeSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, authorizeSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::AuthorizeSecurityGroupOutcomeCallable EnsClient::authorizeSecurityGroupCallable(const AuthorizeSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AuthorizeSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->authorizeSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::AuthorizeSecurityGroupEgressOutcome EnsClient::authorizeSecurityGroupEgress(const AuthorizeSecurityGroupEgressRequest &request) const
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

void EnsClient::authorizeSecurityGroupEgressAsync(const AuthorizeSecurityGroupEgressRequest& request, const AuthorizeSecurityGroupEgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, authorizeSecurityGroupEgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::AuthorizeSecurityGroupEgressOutcomeCallable EnsClient::authorizeSecurityGroupEgressCallable(const AuthorizeSecurityGroupEgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AuthorizeSecurityGroupEgressOutcome()>>(
			[this, request]()
			{
			return this->authorizeSecurityGroupEgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CleanDistDataOutcome EnsClient::cleanDistData(const CleanDistDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CleanDistDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CleanDistDataOutcome(CleanDistDataResult(outcome.result()));
	else
		return CleanDistDataOutcome(outcome.error());
}

void EnsClient::cleanDistDataAsync(const CleanDistDataRequest& request, const CleanDistDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cleanDistData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CleanDistDataOutcomeCallable EnsClient::cleanDistDataCallable(const CleanDistDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CleanDistDataOutcome()>>(
			[this, request]()
			{
			return this->cleanDistData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CopySDGOutcome EnsClient::copySDG(const CopySDGRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CopySDGOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CopySDGOutcome(CopySDGResult(outcome.result()));
	else
		return CopySDGOutcome(outcome.error());
}

void EnsClient::copySDGAsync(const CopySDGRequest& request, const CopySDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, copySDG(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CopySDGOutcomeCallable EnsClient::copySDGCallable(const CopySDGRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CopySDGOutcome()>>(
			[this, request]()
			{
			return this->copySDG(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CopySnapshotOutcome EnsClient::copySnapshot(const CopySnapshotRequest &request) const
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

void EnsClient::copySnapshotAsync(const CopySnapshotRequest& request, const CopySnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, copySnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CopySnapshotOutcomeCallable EnsClient::copySnapshotCallable(const CopySnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CopySnapshotOutcome()>>(
			[this, request]()
			{
			return this->copySnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateARMServerInstancesOutcome EnsClient::createARMServerInstances(const CreateARMServerInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateARMServerInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateARMServerInstancesOutcome(CreateARMServerInstancesResult(outcome.result()));
	else
		return CreateARMServerInstancesOutcome(outcome.error());
}

void EnsClient::createARMServerInstancesAsync(const CreateARMServerInstancesRequest& request, const CreateARMServerInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createARMServerInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateARMServerInstancesOutcomeCallable EnsClient::createARMServerInstancesCallable(const CreateARMServerInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateARMServerInstancesOutcome()>>(
			[this, request]()
			{
			return this->createARMServerInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateApplicationOutcome EnsClient::createApplication(const CreateApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateApplicationOutcome(CreateApplicationResult(outcome.result()));
	else
		return CreateApplicationOutcome(outcome.error());
}

void EnsClient::createApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateApplicationOutcomeCallable EnsClient::createApplicationCallable(const CreateApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateApplicationOutcome()>>(
			[this, request]()
			{
			return this->createApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateClassicNetworkOutcome EnsClient::createClassicNetwork(const CreateClassicNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateClassicNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateClassicNetworkOutcome(CreateClassicNetworkResult(outcome.result()));
	else
		return CreateClassicNetworkOutcome(outcome.error());
}

void EnsClient::createClassicNetworkAsync(const CreateClassicNetworkRequest& request, const CreateClassicNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createClassicNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateClassicNetworkOutcomeCallable EnsClient::createClassicNetworkCallable(const CreateClassicNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClassicNetworkOutcome()>>(
			[this, request]()
			{
			return this->createClassicNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateClusterOutcome EnsClient::createCluster(const CreateClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateClusterOutcome(CreateClusterResult(outcome.result()));
	else
		return CreateClusterOutcome(outcome.error());
}

void EnsClient::createClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateClusterOutcomeCallable EnsClient::createClusterCallable(const CreateClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClusterOutcome()>>(
			[this, request]()
			{
			return this->createCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateDiskOutcome EnsClient::createDisk(const CreateDiskRequest &request) const
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

void EnsClient::createDiskAsync(const CreateDiskRequest& request, const CreateDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateDiskOutcomeCallable EnsClient::createDiskCallable(const CreateDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDiskOutcome()>>(
			[this, request]()
			{
			return this->createDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateEipInstanceOutcome EnsClient::createEipInstance(const CreateEipInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEipInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEipInstanceOutcome(CreateEipInstanceResult(outcome.result()));
	else
		return CreateEipInstanceOutcome(outcome.error());
}

void EnsClient::createEipInstanceAsync(const CreateEipInstanceRequest& request, const CreateEipInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEipInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateEipInstanceOutcomeCallable EnsClient::createEipInstanceCallable(const CreateEipInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEipInstanceOutcome()>>(
			[this, request]()
			{
			return this->createEipInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateEnsRouteEntryOutcome EnsClient::createEnsRouteEntry(const CreateEnsRouteEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEnsRouteEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEnsRouteEntryOutcome(CreateEnsRouteEntryResult(outcome.result()));
	else
		return CreateEnsRouteEntryOutcome(outcome.error());
}

void EnsClient::createEnsRouteEntryAsync(const CreateEnsRouteEntryRequest& request, const CreateEnsRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEnsRouteEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateEnsRouteEntryOutcomeCallable EnsClient::createEnsRouteEntryCallable(const CreateEnsRouteEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEnsRouteEntryOutcome()>>(
			[this, request]()
			{
			return this->createEnsRouteEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateEnsSaleControlOutcome EnsClient::createEnsSaleControl(const CreateEnsSaleControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEnsSaleControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEnsSaleControlOutcome(CreateEnsSaleControlResult(outcome.result()));
	else
		return CreateEnsSaleControlOutcome(outcome.error());
}

void EnsClient::createEnsSaleControlAsync(const CreateEnsSaleControlRequest& request, const CreateEnsSaleControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEnsSaleControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateEnsSaleControlOutcomeCallable EnsClient::createEnsSaleControlCallable(const CreateEnsSaleControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEnsSaleControlOutcome()>>(
			[this, request]()
			{
			return this->createEnsSaleControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateEnsServiceOutcome EnsClient::createEnsService(const CreateEnsServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEnsServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEnsServiceOutcome(CreateEnsServiceResult(outcome.result()));
	else
		return CreateEnsServiceOutcome(outcome.error());
}

void EnsClient::createEnsServiceAsync(const CreateEnsServiceRequest& request, const CreateEnsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEnsService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateEnsServiceOutcomeCallable EnsClient::createEnsServiceCallable(const CreateEnsServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEnsServiceOutcome()>>(
			[this, request]()
			{
			return this->createEnsService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateEpnInstanceOutcome EnsClient::createEpnInstance(const CreateEpnInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEpnInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEpnInstanceOutcome(CreateEpnInstanceResult(outcome.result()));
	else
		return CreateEpnInstanceOutcome(outcome.error());
}

void EnsClient::createEpnInstanceAsync(const CreateEpnInstanceRequest& request, const CreateEpnInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEpnInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateEpnInstanceOutcomeCallable EnsClient::createEpnInstanceCallable(const CreateEpnInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEpnInstanceOutcome()>>(
			[this, request]()
			{
			return this->createEpnInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateFileSystemOutcome EnsClient::createFileSystem(const CreateFileSystemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFileSystemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFileSystemOutcome(CreateFileSystemResult(outcome.result()));
	else
		return CreateFileSystemOutcome(outcome.error());
}

void EnsClient::createFileSystemAsync(const CreateFileSystemRequest& request, const CreateFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFileSystem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateFileSystemOutcomeCallable EnsClient::createFileSystemCallable(const CreateFileSystemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFileSystemOutcome()>>(
			[this, request]()
			{
			return this->createFileSystem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateForwardEntryOutcome EnsClient::createForwardEntry(const CreateForwardEntryRequest &request) const
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

void EnsClient::createForwardEntryAsync(const CreateForwardEntryRequest& request, const CreateForwardEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createForwardEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateForwardEntryOutcomeCallable EnsClient::createForwardEntryCallable(const CreateForwardEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateForwardEntryOutcome()>>(
			[this, request]()
			{
			return this->createForwardEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateHaVipOutcome EnsClient::createHaVip(const CreateHaVipRequest &request) const
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

void EnsClient::createHaVipAsync(const CreateHaVipRequest& request, const CreateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createHaVip(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateHaVipOutcomeCallable EnsClient::createHaVipCallable(const CreateHaVipRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateHaVipOutcome()>>(
			[this, request]()
			{
			return this->createHaVip(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateImageOutcome EnsClient::createImage(const CreateImageRequest &request) const
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

void EnsClient::createImageAsync(const CreateImageRequest& request, const CreateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateImageOutcomeCallable EnsClient::createImageCallable(const CreateImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateImageOutcome()>>(
			[this, request]()
			{
			return this->createImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateInstanceOutcome EnsClient::createInstance(const CreateInstanceRequest &request) const
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

void EnsClient::createInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateInstanceOutcomeCallable EnsClient::createInstanceCallable(const CreateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
			[this, request]()
			{
			return this->createInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateInstanceActiveOpsTaskOutcome EnsClient::createInstanceActiveOpsTask(const CreateInstanceActiveOpsTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateInstanceActiveOpsTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateInstanceActiveOpsTaskOutcome(CreateInstanceActiveOpsTaskResult(outcome.result()));
	else
		return CreateInstanceActiveOpsTaskOutcome(outcome.error());
}

void EnsClient::createInstanceActiveOpsTaskAsync(const CreateInstanceActiveOpsTaskRequest& request, const CreateInstanceActiveOpsTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstanceActiveOpsTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateInstanceActiveOpsTaskOutcomeCallable EnsClient::createInstanceActiveOpsTaskCallable(const CreateInstanceActiveOpsTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceActiveOpsTaskOutcome()>>(
			[this, request]()
			{
			return this->createInstanceActiveOpsTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateKeyPairOutcome EnsClient::createKeyPair(const CreateKeyPairRequest &request) const
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

void EnsClient::createKeyPairAsync(const CreateKeyPairRequest& request, const CreateKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createKeyPair(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateKeyPairOutcomeCallable EnsClient::createKeyPairCallable(const CreateKeyPairRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateKeyPairOutcome()>>(
			[this, request]()
			{
			return this->createKeyPair(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateLoadBalancerOutcome EnsClient::createLoadBalancer(const CreateLoadBalancerRequest &request) const
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

void EnsClient::createLoadBalancerAsync(const CreateLoadBalancerRequest& request, const CreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLoadBalancer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateLoadBalancerOutcomeCallable EnsClient::createLoadBalancerCallable(const CreateLoadBalancerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLoadBalancerOutcome()>>(
			[this, request]()
			{
			return this->createLoadBalancer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateLoadBalancerHTTPListenerOutcome EnsClient::createLoadBalancerHTTPListener(const CreateLoadBalancerHTTPListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLoadBalancerHTTPListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLoadBalancerHTTPListenerOutcome(CreateLoadBalancerHTTPListenerResult(outcome.result()));
	else
		return CreateLoadBalancerHTTPListenerOutcome(outcome.error());
}

void EnsClient::createLoadBalancerHTTPListenerAsync(const CreateLoadBalancerHTTPListenerRequest& request, const CreateLoadBalancerHTTPListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLoadBalancerHTTPListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateLoadBalancerHTTPListenerOutcomeCallable EnsClient::createLoadBalancerHTTPListenerCallable(const CreateLoadBalancerHTTPListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLoadBalancerHTTPListenerOutcome()>>(
			[this, request]()
			{
			return this->createLoadBalancerHTTPListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateLoadBalancerHTTPSListenerOutcome EnsClient::createLoadBalancerHTTPSListener(const CreateLoadBalancerHTTPSListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLoadBalancerHTTPSListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLoadBalancerHTTPSListenerOutcome(CreateLoadBalancerHTTPSListenerResult(outcome.result()));
	else
		return CreateLoadBalancerHTTPSListenerOutcome(outcome.error());
}

void EnsClient::createLoadBalancerHTTPSListenerAsync(const CreateLoadBalancerHTTPSListenerRequest& request, const CreateLoadBalancerHTTPSListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLoadBalancerHTTPSListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateLoadBalancerHTTPSListenerOutcomeCallable EnsClient::createLoadBalancerHTTPSListenerCallable(const CreateLoadBalancerHTTPSListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLoadBalancerHTTPSListenerOutcome()>>(
			[this, request]()
			{
			return this->createLoadBalancerHTTPSListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateLoadBalancerTCPListenerOutcome EnsClient::createLoadBalancerTCPListener(const CreateLoadBalancerTCPListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLoadBalancerTCPListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLoadBalancerTCPListenerOutcome(CreateLoadBalancerTCPListenerResult(outcome.result()));
	else
		return CreateLoadBalancerTCPListenerOutcome(outcome.error());
}

void EnsClient::createLoadBalancerTCPListenerAsync(const CreateLoadBalancerTCPListenerRequest& request, const CreateLoadBalancerTCPListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLoadBalancerTCPListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateLoadBalancerTCPListenerOutcomeCallable EnsClient::createLoadBalancerTCPListenerCallable(const CreateLoadBalancerTCPListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLoadBalancerTCPListenerOutcome()>>(
			[this, request]()
			{
			return this->createLoadBalancerTCPListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateLoadBalancerUDPListenerOutcome EnsClient::createLoadBalancerUDPListener(const CreateLoadBalancerUDPListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLoadBalancerUDPListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLoadBalancerUDPListenerOutcome(CreateLoadBalancerUDPListenerResult(outcome.result()));
	else
		return CreateLoadBalancerUDPListenerOutcome(outcome.error());
}

void EnsClient::createLoadBalancerUDPListenerAsync(const CreateLoadBalancerUDPListenerRequest& request, const CreateLoadBalancerUDPListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLoadBalancerUDPListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateLoadBalancerUDPListenerOutcomeCallable EnsClient::createLoadBalancerUDPListenerCallable(const CreateLoadBalancerUDPListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLoadBalancerUDPListenerOutcome()>>(
			[this, request]()
			{
			return this->createLoadBalancerUDPListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateMountTargetOutcome EnsClient::createMountTarget(const CreateMountTargetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMountTargetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMountTargetOutcome(CreateMountTargetResult(outcome.result()));
	else
		return CreateMountTargetOutcome(outcome.error());
}

void EnsClient::createMountTargetAsync(const CreateMountTargetRequest& request, const CreateMountTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMountTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateMountTargetOutcomeCallable EnsClient::createMountTargetCallable(const CreateMountTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMountTargetOutcome()>>(
			[this, request]()
			{
			return this->createMountTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateNatGatewayOutcome EnsClient::createNatGateway(const CreateNatGatewayRequest &request) const
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

void EnsClient::createNatGatewayAsync(const CreateNatGatewayRequest& request, const CreateNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNatGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateNatGatewayOutcomeCallable EnsClient::createNatGatewayCallable(const CreateNatGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNatGatewayOutcome()>>(
			[this, request]()
			{
			return this->createNatGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateNetworkOutcome EnsClient::createNetwork(const CreateNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNetworkOutcome(CreateNetworkResult(outcome.result()));
	else
		return CreateNetworkOutcome(outcome.error());
}

void EnsClient::createNetworkAsync(const CreateNetworkRequest& request, const CreateNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateNetworkOutcomeCallable EnsClient::createNetworkCallable(const CreateNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNetworkOutcome()>>(
			[this, request]()
			{
			return this->createNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateNetworkAclOutcome EnsClient::createNetworkAcl(const CreateNetworkAclRequest &request) const
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

void EnsClient::createNetworkAclAsync(const CreateNetworkAclRequest& request, const CreateNetworkAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNetworkAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateNetworkAclOutcomeCallable EnsClient::createNetworkAclCallable(const CreateNetworkAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNetworkAclOutcome()>>(
			[this, request]()
			{
			return this->createNetworkAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateNetworkAclEntryOutcome EnsClient::createNetworkAclEntry(const CreateNetworkAclEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNetworkAclEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNetworkAclEntryOutcome(CreateNetworkAclEntryResult(outcome.result()));
	else
		return CreateNetworkAclEntryOutcome(outcome.error());
}

void EnsClient::createNetworkAclEntryAsync(const CreateNetworkAclEntryRequest& request, const CreateNetworkAclEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNetworkAclEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateNetworkAclEntryOutcomeCallable EnsClient::createNetworkAclEntryCallable(const CreateNetworkAclEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNetworkAclEntryOutcome()>>(
			[this, request]()
			{
			return this->createNetworkAclEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateNetworkInterfaceOutcome EnsClient::createNetworkInterface(const CreateNetworkInterfaceRequest &request) const
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

void EnsClient::createNetworkInterfaceAsync(const CreateNetworkInterfaceRequest& request, const CreateNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNetworkInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateNetworkInterfaceOutcomeCallable EnsClient::createNetworkInterfaceCallable(const CreateNetworkInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNetworkInterfaceOutcome()>>(
			[this, request]()
			{
			return this->createNetworkInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateSDGOutcome EnsClient::createSDG(const CreateSDGRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSDGOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSDGOutcome(CreateSDGResult(outcome.result()));
	else
		return CreateSDGOutcome(outcome.error());
}

void EnsClient::createSDGAsync(const CreateSDGRequest& request, const CreateSDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSDG(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateSDGOutcomeCallable EnsClient::createSDGCallable(const CreateSDGRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSDGOutcome()>>(
			[this, request]()
			{
			return this->createSDG(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateSecurityGroupOutcome EnsClient::createSecurityGroup(const CreateSecurityGroupRequest &request) const
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

void EnsClient::createSecurityGroupAsync(const CreateSecurityGroupRequest& request, const CreateSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateSecurityGroupOutcomeCallable EnsClient::createSecurityGroupCallable(const CreateSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->createSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateSnapshotOutcome EnsClient::createSnapshot(const CreateSnapshotRequest &request) const
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

void EnsClient::createSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateSnapshotOutcomeCallable EnsClient::createSnapshotCallable(const CreateSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSnapshotOutcome()>>(
			[this, request]()
			{
			return this->createSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateSnatEntryOutcome EnsClient::createSnatEntry(const CreateSnatEntryRequest &request) const
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

void EnsClient::createSnatEntryAsync(const CreateSnatEntryRequest& request, const CreateSnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSnatEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateSnatEntryOutcomeCallable EnsClient::createSnatEntryCallable(const CreateSnatEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSnatEntryOutcome()>>(
			[this, request]()
			{
			return this->createSnatEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateStorageGatewayOutcome EnsClient::createStorageGateway(const CreateStorageGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateStorageGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateStorageGatewayOutcome(CreateStorageGatewayResult(outcome.result()));
	else
		return CreateStorageGatewayOutcome(outcome.error());
}

void EnsClient::createStorageGatewayAsync(const CreateStorageGatewayRequest& request, const CreateStorageGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createStorageGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateStorageGatewayOutcomeCallable EnsClient::createStorageGatewayCallable(const CreateStorageGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateStorageGatewayOutcome()>>(
			[this, request]()
			{
			return this->createStorageGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateStorageVolumeOutcome EnsClient::createStorageVolume(const CreateStorageVolumeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateStorageVolumeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateStorageVolumeOutcome(CreateStorageVolumeResult(outcome.result()));
	else
		return CreateStorageVolumeOutcome(outcome.error());
}

void EnsClient::createStorageVolumeAsync(const CreateStorageVolumeRequest& request, const CreateStorageVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createStorageVolume(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateStorageVolumeOutcomeCallable EnsClient::createStorageVolumeCallable(const CreateStorageVolumeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateStorageVolumeOutcome()>>(
			[this, request]()
			{
			return this->createStorageVolume(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::CreateVSwitchOutcome EnsClient::createVSwitch(const CreateVSwitchRequest &request) const
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

void EnsClient::createVSwitchAsync(const CreateVSwitchRequest& request, const CreateVSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVSwitch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::CreateVSwitchOutcomeCallable EnsClient::createVSwitchCallable(const CreateVSwitchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVSwitchOutcome()>>(
			[this, request]()
			{
			return this->createVSwitch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteApplicationOutcome EnsClient::deleteApplication(const DeleteApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteApplicationOutcome(DeleteApplicationResult(outcome.result()));
	else
		return DeleteApplicationOutcome(outcome.error());
}

void EnsClient::deleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteApplicationOutcomeCallable EnsClient::deleteApplicationCallable(const DeleteApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApplicationOutcome()>>(
			[this, request]()
			{
			return this->deleteApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteBucketOutcome EnsClient::deleteBucket(const DeleteBucketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBucketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBucketOutcome(DeleteBucketResult(outcome.result()));
	else
		return DeleteBucketOutcome(outcome.error());
}

void EnsClient::deleteBucketAsync(const DeleteBucketRequest& request, const DeleteBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBucket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteBucketOutcomeCallable EnsClient::deleteBucketCallable(const DeleteBucketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBucketOutcome()>>(
			[this, request]()
			{
			return this->deleteBucket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteBucketLifecycleOutcome EnsClient::deleteBucketLifecycle(const DeleteBucketLifecycleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBucketLifecycleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBucketLifecycleOutcome(DeleteBucketLifecycleResult(outcome.result()));
	else
		return DeleteBucketLifecycleOutcome(outcome.error());
}

void EnsClient::deleteBucketLifecycleAsync(const DeleteBucketLifecycleRequest& request, const DeleteBucketLifecycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBucketLifecycle(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteBucketLifecycleOutcomeCallable EnsClient::deleteBucketLifecycleCallable(const DeleteBucketLifecycleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBucketLifecycleOutcome()>>(
			[this, request]()
			{
			return this->deleteBucketLifecycle(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteDeviceInternetPortOutcome EnsClient::deleteDeviceInternetPort(const DeleteDeviceInternetPortRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDeviceInternetPortOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDeviceInternetPortOutcome(DeleteDeviceInternetPortResult(outcome.result()));
	else
		return DeleteDeviceInternetPortOutcome(outcome.error());
}

void EnsClient::deleteDeviceInternetPortAsync(const DeleteDeviceInternetPortRequest& request, const DeleteDeviceInternetPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDeviceInternetPort(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteDeviceInternetPortOutcomeCallable EnsClient::deleteDeviceInternetPortCallable(const DeleteDeviceInternetPortRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDeviceInternetPortOutcome()>>(
			[this, request]()
			{
			return this->deleteDeviceInternetPort(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteDiskOutcome EnsClient::deleteDisk(const DeleteDiskRequest &request) const
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

void EnsClient::deleteDiskAsync(const DeleteDiskRequest& request, const DeleteDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteDiskOutcomeCallable EnsClient::deleteDiskCallable(const DeleteDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDiskOutcome()>>(
			[this, request]()
			{
			return this->deleteDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteEipOutcome EnsClient::deleteEip(const DeleteEipRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEipOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEipOutcome(DeleteEipResult(outcome.result()));
	else
		return DeleteEipOutcome(outcome.error());
}

void EnsClient::deleteEipAsync(const DeleteEipRequest& request, const DeleteEipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEip(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteEipOutcomeCallable EnsClient::deleteEipCallable(const DeleteEipRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEipOutcome()>>(
			[this, request]()
			{
			return this->deleteEip(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteEnsRouteEntryOutcome EnsClient::deleteEnsRouteEntry(const DeleteEnsRouteEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEnsRouteEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEnsRouteEntryOutcome(DeleteEnsRouteEntryResult(outcome.result()));
	else
		return DeleteEnsRouteEntryOutcome(outcome.error());
}

void EnsClient::deleteEnsRouteEntryAsync(const DeleteEnsRouteEntryRequest& request, const DeleteEnsRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEnsRouteEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteEnsRouteEntryOutcomeCallable EnsClient::deleteEnsRouteEntryCallable(const DeleteEnsRouteEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEnsRouteEntryOutcome()>>(
			[this, request]()
			{
			return this->deleteEnsRouteEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteEnsSaleConditionControlOutcome EnsClient::deleteEnsSaleConditionControl(const DeleteEnsSaleConditionControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEnsSaleConditionControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEnsSaleConditionControlOutcome(DeleteEnsSaleConditionControlResult(outcome.result()));
	else
		return DeleteEnsSaleConditionControlOutcome(outcome.error());
}

void EnsClient::deleteEnsSaleConditionControlAsync(const DeleteEnsSaleConditionControlRequest& request, const DeleteEnsSaleConditionControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEnsSaleConditionControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteEnsSaleConditionControlOutcomeCallable EnsClient::deleteEnsSaleConditionControlCallable(const DeleteEnsSaleConditionControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEnsSaleConditionControlOutcome()>>(
			[this, request]()
			{
			return this->deleteEnsSaleConditionControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteEnsSaleControlOutcome EnsClient::deleteEnsSaleControl(const DeleteEnsSaleControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEnsSaleControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEnsSaleControlOutcome(DeleteEnsSaleControlResult(outcome.result()));
	else
		return DeleteEnsSaleControlOutcome(outcome.error());
}

void EnsClient::deleteEnsSaleControlAsync(const DeleteEnsSaleControlRequest& request, const DeleteEnsSaleControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEnsSaleControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteEnsSaleControlOutcomeCallable EnsClient::deleteEnsSaleControlCallable(const DeleteEnsSaleControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEnsSaleControlOutcome()>>(
			[this, request]()
			{
			return this->deleteEnsSaleControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteEpnInstanceOutcome EnsClient::deleteEpnInstance(const DeleteEpnInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEpnInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEpnInstanceOutcome(DeleteEpnInstanceResult(outcome.result()));
	else
		return DeleteEpnInstanceOutcome(outcome.error());
}

void EnsClient::deleteEpnInstanceAsync(const DeleteEpnInstanceRequest& request, const DeleteEpnInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEpnInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteEpnInstanceOutcomeCallable EnsClient::deleteEpnInstanceCallable(const DeleteEpnInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEpnInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteEpnInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteFileSystemOutcome EnsClient::deleteFileSystem(const DeleteFileSystemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFileSystemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFileSystemOutcome(DeleteFileSystemResult(outcome.result()));
	else
		return DeleteFileSystemOutcome(outcome.error());
}

void EnsClient::deleteFileSystemAsync(const DeleteFileSystemRequest& request, const DeleteFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFileSystem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteFileSystemOutcomeCallable EnsClient::deleteFileSystemCallable(const DeleteFileSystemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFileSystemOutcome()>>(
			[this, request]()
			{
			return this->deleteFileSystem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteForwardEntryOutcome EnsClient::deleteForwardEntry(const DeleteForwardEntryRequest &request) const
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

void EnsClient::deleteForwardEntryAsync(const DeleteForwardEntryRequest& request, const DeleteForwardEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteForwardEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteForwardEntryOutcomeCallable EnsClient::deleteForwardEntryCallable(const DeleteForwardEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteForwardEntryOutcome()>>(
			[this, request]()
			{
			return this->deleteForwardEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteHaVipsOutcome EnsClient::deleteHaVips(const DeleteHaVipsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteHaVipsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteHaVipsOutcome(DeleteHaVipsResult(outcome.result()));
	else
		return DeleteHaVipsOutcome(outcome.error());
}

void EnsClient::deleteHaVipsAsync(const DeleteHaVipsRequest& request, const DeleteHaVipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteHaVips(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteHaVipsOutcomeCallable EnsClient::deleteHaVipsCallable(const DeleteHaVipsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteHaVipsOutcome()>>(
			[this, request]()
			{
			return this->deleteHaVips(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteImageOutcome EnsClient::deleteImage(const DeleteImageRequest &request) const
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

void EnsClient::deleteImageAsync(const DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteImageOutcomeCallable EnsClient::deleteImageCallable(const DeleteImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteImageOutcome()>>(
			[this, request]()
			{
			return this->deleteImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteKeyPairsOutcome EnsClient::deleteKeyPairs(const DeleteKeyPairsRequest &request) const
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

void EnsClient::deleteKeyPairsAsync(const DeleteKeyPairsRequest& request, const DeleteKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteKeyPairs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteKeyPairsOutcomeCallable EnsClient::deleteKeyPairsCallable(const DeleteKeyPairsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteKeyPairsOutcome()>>(
			[this, request]()
			{
			return this->deleteKeyPairs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteLoadBalancerListenerOutcome EnsClient::deleteLoadBalancerListener(const DeleteLoadBalancerListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLoadBalancerListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLoadBalancerListenerOutcome(DeleteLoadBalancerListenerResult(outcome.result()));
	else
		return DeleteLoadBalancerListenerOutcome(outcome.error());
}

void EnsClient::deleteLoadBalancerListenerAsync(const DeleteLoadBalancerListenerRequest& request, const DeleteLoadBalancerListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLoadBalancerListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteLoadBalancerListenerOutcomeCallable EnsClient::deleteLoadBalancerListenerCallable(const DeleteLoadBalancerListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLoadBalancerListenerOutcome()>>(
			[this, request]()
			{
			return this->deleteLoadBalancerListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteMountTargetOutcome EnsClient::deleteMountTarget(const DeleteMountTargetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMountTargetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMountTargetOutcome(DeleteMountTargetResult(outcome.result()));
	else
		return DeleteMountTargetOutcome(outcome.error());
}

void EnsClient::deleteMountTargetAsync(const DeleteMountTargetRequest& request, const DeleteMountTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMountTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteMountTargetOutcomeCallable EnsClient::deleteMountTargetCallable(const DeleteMountTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMountTargetOutcome()>>(
			[this, request]()
			{
			return this->deleteMountTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteNatGatewayOutcome EnsClient::deleteNatGateway(const DeleteNatGatewayRequest &request) const
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

void EnsClient::deleteNatGatewayAsync(const DeleteNatGatewayRequest& request, const DeleteNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNatGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteNatGatewayOutcomeCallable EnsClient::deleteNatGatewayCallable(const DeleteNatGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNatGatewayOutcome()>>(
			[this, request]()
			{
			return this->deleteNatGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteNetworkOutcome EnsClient::deleteNetwork(const DeleteNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNetworkOutcome(DeleteNetworkResult(outcome.result()));
	else
		return DeleteNetworkOutcome(outcome.error());
}

void EnsClient::deleteNetworkAsync(const DeleteNetworkRequest& request, const DeleteNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteNetworkOutcomeCallable EnsClient::deleteNetworkCallable(const DeleteNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNetworkOutcome()>>(
			[this, request]()
			{
			return this->deleteNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteNetworkAclOutcome EnsClient::deleteNetworkAcl(const DeleteNetworkAclRequest &request) const
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

void EnsClient::deleteNetworkAclAsync(const DeleteNetworkAclRequest& request, const DeleteNetworkAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNetworkAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteNetworkAclOutcomeCallable EnsClient::deleteNetworkAclCallable(const DeleteNetworkAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNetworkAclOutcome()>>(
			[this, request]()
			{
			return this->deleteNetworkAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteNetworkAclEntryOutcome EnsClient::deleteNetworkAclEntry(const DeleteNetworkAclEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNetworkAclEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNetworkAclEntryOutcome(DeleteNetworkAclEntryResult(outcome.result()));
	else
		return DeleteNetworkAclEntryOutcome(outcome.error());
}

void EnsClient::deleteNetworkAclEntryAsync(const DeleteNetworkAclEntryRequest& request, const DeleteNetworkAclEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNetworkAclEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteNetworkAclEntryOutcomeCallable EnsClient::deleteNetworkAclEntryCallable(const DeleteNetworkAclEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNetworkAclEntryOutcome()>>(
			[this, request]()
			{
			return this->deleteNetworkAclEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteNetworkInterfacesOutcome EnsClient::deleteNetworkInterfaces(const DeleteNetworkInterfacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNetworkInterfacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNetworkInterfacesOutcome(DeleteNetworkInterfacesResult(outcome.result()));
	else
		return DeleteNetworkInterfacesOutcome(outcome.error());
}

void EnsClient::deleteNetworkInterfacesAsync(const DeleteNetworkInterfacesRequest& request, const DeleteNetworkInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNetworkInterfaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteNetworkInterfacesOutcomeCallable EnsClient::deleteNetworkInterfacesCallable(const DeleteNetworkInterfacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNetworkInterfacesOutcome()>>(
			[this, request]()
			{
			return this->deleteNetworkInterfaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteObjectOutcome EnsClient::deleteObject(const DeleteObjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteObjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteObjectOutcome(DeleteObjectResult(outcome.result()));
	else
		return DeleteObjectOutcome(outcome.error());
}

void EnsClient::deleteObjectAsync(const DeleteObjectRequest& request, const DeleteObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteObject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteObjectOutcomeCallable EnsClient::deleteObjectCallable(const DeleteObjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteObjectOutcome()>>(
			[this, request]()
			{
			return this->deleteObject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteSDGOutcome EnsClient::deleteSDG(const DeleteSDGRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSDGOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSDGOutcome(DeleteSDGResult(outcome.result()));
	else
		return DeleteSDGOutcome(outcome.error());
}

void EnsClient::deleteSDGAsync(const DeleteSDGRequest& request, const DeleteSDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSDG(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteSDGOutcomeCallable EnsClient::deleteSDGCallable(const DeleteSDGRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSDGOutcome()>>(
			[this, request]()
			{
			return this->deleteSDG(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteSecurityGroupOutcome EnsClient::deleteSecurityGroup(const DeleteSecurityGroupRequest &request) const
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

void EnsClient::deleteSecurityGroupAsync(const DeleteSecurityGroupRequest& request, const DeleteSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteSecurityGroupOutcomeCallable EnsClient::deleteSecurityGroupCallable(const DeleteSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteSnapshotOutcome EnsClient::deleteSnapshot(const DeleteSnapshotRequest &request) const
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

void EnsClient::deleteSnapshotAsync(const DeleteSnapshotRequest& request, const DeleteSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteSnapshotOutcomeCallable EnsClient::deleteSnapshotCallable(const DeleteSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSnapshotOutcome()>>(
			[this, request]()
			{
			return this->deleteSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteSnatEntryOutcome EnsClient::deleteSnatEntry(const DeleteSnatEntryRequest &request) const
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

void EnsClient::deleteSnatEntryAsync(const DeleteSnatEntryRequest& request, const DeleteSnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSnatEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteSnatEntryOutcomeCallable EnsClient::deleteSnatEntryCallable(const DeleteSnatEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSnatEntryOutcome()>>(
			[this, request]()
			{
			return this->deleteSnatEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteSnatIpForSnatEntryOutcome EnsClient::deleteSnatIpForSnatEntry(const DeleteSnatIpForSnatEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSnatIpForSnatEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSnatIpForSnatEntryOutcome(DeleteSnatIpForSnatEntryResult(outcome.result()));
	else
		return DeleteSnatIpForSnatEntryOutcome(outcome.error());
}

void EnsClient::deleteSnatIpForSnatEntryAsync(const DeleteSnatIpForSnatEntryRequest& request, const DeleteSnatIpForSnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSnatIpForSnatEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteSnatIpForSnatEntryOutcomeCallable EnsClient::deleteSnatIpForSnatEntryCallable(const DeleteSnatIpForSnatEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSnatIpForSnatEntryOutcome()>>(
			[this, request]()
			{
			return this->deleteSnatIpForSnatEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteStorageGatewayOutcome EnsClient::deleteStorageGateway(const DeleteStorageGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteStorageGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteStorageGatewayOutcome(DeleteStorageGatewayResult(outcome.result()));
	else
		return DeleteStorageGatewayOutcome(outcome.error());
}

void EnsClient::deleteStorageGatewayAsync(const DeleteStorageGatewayRequest& request, const DeleteStorageGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteStorageGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteStorageGatewayOutcomeCallable EnsClient::deleteStorageGatewayCallable(const DeleteStorageGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteStorageGatewayOutcome()>>(
			[this, request]()
			{
			return this->deleteStorageGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteStorageVolumeOutcome EnsClient::deleteStorageVolume(const DeleteStorageVolumeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteStorageVolumeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteStorageVolumeOutcome(DeleteStorageVolumeResult(outcome.result()));
	else
		return DeleteStorageVolumeOutcome(outcome.error());
}

void EnsClient::deleteStorageVolumeAsync(const DeleteStorageVolumeRequest& request, const DeleteStorageVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteStorageVolume(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteStorageVolumeOutcomeCallable EnsClient::deleteStorageVolumeCallable(const DeleteStorageVolumeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteStorageVolumeOutcome()>>(
			[this, request]()
			{
			return this->deleteStorageVolume(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeleteVSwitchOutcome EnsClient::deleteVSwitch(const DeleteVSwitchRequest &request) const
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

void EnsClient::deleteVSwitchAsync(const DeleteVSwitchRequest& request, const DeleteVSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVSwitch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeleteVSwitchOutcomeCallable EnsClient::deleteVSwitchCallable(const DeleteVSwitchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVSwitchOutcome()>>(
			[this, request]()
			{
			return this->deleteVSwitch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeployInstanceSDGOutcome EnsClient::deployInstanceSDG(const DeployInstanceSDGRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeployInstanceSDGOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeployInstanceSDGOutcome(DeployInstanceSDGResult(outcome.result()));
	else
		return DeployInstanceSDGOutcome(outcome.error());
}

void EnsClient::deployInstanceSDGAsync(const DeployInstanceSDGRequest& request, const DeployInstanceSDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deployInstanceSDG(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeployInstanceSDGOutcomeCallable EnsClient::deployInstanceSDGCallable(const DeployInstanceSDGRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeployInstanceSDGOutcome()>>(
			[this, request]()
			{
			return this->deployInstanceSDG(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DeploySDGOutcome EnsClient::deploySDG(const DeploySDGRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeploySDGOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeploySDGOutcome(DeploySDGResult(outcome.result()));
	else
		return DeploySDGOutcome(outcome.error());
}

void EnsClient::deploySDGAsync(const DeploySDGRequest& request, const DeploySDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deploySDG(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DeploySDGOutcomeCallable EnsClient::deploySDGCallable(const DeploySDGRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeploySDGOutcome()>>(
			[this, request]()
			{
			return this->deploySDG(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeAICImagesOutcome EnsClient::describeAICImages(const DescribeAICImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAICImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAICImagesOutcome(DescribeAICImagesResult(outcome.result()));
	else
		return DescribeAICImagesOutcome(outcome.error());
}

void EnsClient::describeAICImagesAsync(const DescribeAICImagesRequest& request, const DescribeAICImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAICImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeAICImagesOutcomeCallable EnsClient::describeAICImagesCallable(const DescribeAICImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAICImagesOutcome()>>(
			[this, request]()
			{
			return this->describeAICImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeARMServerInstancesOutcome EnsClient::describeARMServerInstances(const DescribeARMServerInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeARMServerInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeARMServerInstancesOutcome(DescribeARMServerInstancesResult(outcome.result()));
	else
		return DescribeARMServerInstancesOutcome(outcome.error());
}

void EnsClient::describeARMServerInstancesAsync(const DescribeARMServerInstancesRequest& request, const DescribeARMServerInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeARMServerInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeARMServerInstancesOutcomeCallable EnsClient::describeARMServerInstancesCallable(const DescribeARMServerInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeARMServerInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeARMServerInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeApplicationOutcome EnsClient::describeApplication(const DescribeApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApplicationOutcome(DescribeApplicationResult(outcome.result()));
	else
		return DescribeApplicationOutcome(outcome.error());
}

void EnsClient::describeApplicationAsync(const DescribeApplicationRequest& request, const DescribeApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeApplicationOutcomeCallable EnsClient::describeApplicationCallable(const DescribeApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApplicationOutcome()>>(
			[this, request]()
			{
			return this->describeApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeAvailableResourceOutcome EnsClient::describeAvailableResource(const DescribeAvailableResourceRequest &request) const
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

void EnsClient::describeAvailableResourceAsync(const DescribeAvailableResourceRequest& request, const DescribeAvailableResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeAvailableResourceOutcomeCallable EnsClient::describeAvailableResourceCallable(const DescribeAvailableResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableResourceOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeAvailableResourceInfoOutcome EnsClient::describeAvailableResourceInfo(const DescribeAvailableResourceInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAvailableResourceInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAvailableResourceInfoOutcome(DescribeAvailableResourceInfoResult(outcome.result()));
	else
		return DescribeAvailableResourceInfoOutcome(outcome.error());
}

void EnsClient::describeAvailableResourceInfoAsync(const DescribeAvailableResourceInfoRequest& request, const DescribeAvailableResourceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableResourceInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeAvailableResourceInfoOutcomeCallable EnsClient::describeAvailableResourceInfoCallable(const DescribeAvailableResourceInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableResourceInfoOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableResourceInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeBandWithdChargeTypeOutcome EnsClient::describeBandWithdChargeType(const DescribeBandWithdChargeTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBandWithdChargeTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBandWithdChargeTypeOutcome(DescribeBandWithdChargeTypeResult(outcome.result()));
	else
		return DescribeBandWithdChargeTypeOutcome(outcome.error());
}

void EnsClient::describeBandWithdChargeTypeAsync(const DescribeBandWithdChargeTypeRequest& request, const DescribeBandWithdChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBandWithdChargeType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeBandWithdChargeTypeOutcomeCallable EnsClient::describeBandWithdChargeTypeCallable(const DescribeBandWithdChargeTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBandWithdChargeTypeOutcome()>>(
			[this, request]()
			{
			return this->describeBandWithdChargeType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeBandwitdhByInternetChargeTypeOutcome EnsClient::describeBandwitdhByInternetChargeType(const DescribeBandwitdhByInternetChargeTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBandwitdhByInternetChargeTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBandwitdhByInternetChargeTypeOutcome(DescribeBandwitdhByInternetChargeTypeResult(outcome.result()));
	else
		return DescribeBandwitdhByInternetChargeTypeOutcome(outcome.error());
}

void EnsClient::describeBandwitdhByInternetChargeTypeAsync(const DescribeBandwitdhByInternetChargeTypeRequest& request, const DescribeBandwitdhByInternetChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBandwitdhByInternetChargeType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeBandwitdhByInternetChargeTypeOutcomeCallable EnsClient::describeBandwitdhByInternetChargeTypeCallable(const DescribeBandwitdhByInternetChargeTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBandwitdhByInternetChargeTypeOutcome()>>(
			[this, request]()
			{
			return this->describeBandwitdhByInternetChargeType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeCloudDiskAvailableResourceInfoOutcome EnsClient::describeCloudDiskAvailableResourceInfo(const DescribeCloudDiskAvailableResourceInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCloudDiskAvailableResourceInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCloudDiskAvailableResourceInfoOutcome(DescribeCloudDiskAvailableResourceInfoResult(outcome.result()));
	else
		return DescribeCloudDiskAvailableResourceInfoOutcome(outcome.error());
}

void EnsClient::describeCloudDiskAvailableResourceInfoAsync(const DescribeCloudDiskAvailableResourceInfoRequest& request, const DescribeCloudDiskAvailableResourceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCloudDiskAvailableResourceInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeCloudDiskAvailableResourceInfoOutcomeCallable EnsClient::describeCloudDiskAvailableResourceInfoCallable(const DescribeCloudDiskAvailableResourceInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCloudDiskAvailableResourceInfoOutcome()>>(
			[this, request]()
			{
			return this->describeCloudDiskAvailableResourceInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeCloudDiskTypesOutcome EnsClient::describeCloudDiskTypes(const DescribeCloudDiskTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCloudDiskTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCloudDiskTypesOutcome(DescribeCloudDiskTypesResult(outcome.result()));
	else
		return DescribeCloudDiskTypesOutcome(outcome.error());
}

void EnsClient::describeCloudDiskTypesAsync(const DescribeCloudDiskTypesRequest& request, const DescribeCloudDiskTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCloudDiskTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeCloudDiskTypesOutcomeCallable EnsClient::describeCloudDiskTypesCallable(const DescribeCloudDiskTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCloudDiskTypesOutcome()>>(
			[this, request]()
			{
			return this->describeCloudDiskTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeClusterOutcome EnsClient::describeCluster(const DescribeClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterOutcome(DescribeClusterResult(outcome.result()));
	else
		return DescribeClusterOutcome(outcome.error());
}

void EnsClient::describeClusterAsync(const DescribeClusterRequest& request, const DescribeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeClusterOutcomeCallable EnsClient::describeClusterCallable(const DescribeClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterOutcome()>>(
			[this, request]()
			{
			return this->describeCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeClusterKubeConfigOutcome EnsClient::describeClusterKubeConfig(const DescribeClusterKubeConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterKubeConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterKubeConfigOutcome(DescribeClusterKubeConfigResult(outcome.result()));
	else
		return DescribeClusterKubeConfigOutcome(outcome.error());
}

void EnsClient::describeClusterKubeConfigAsync(const DescribeClusterKubeConfigRequest& request, const DescribeClusterKubeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterKubeConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeClusterKubeConfigOutcomeCallable EnsClient::describeClusterKubeConfigCallable(const DescribeClusterKubeConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterKubeConfigOutcome()>>(
			[this, request]()
			{
			return this->describeClusterKubeConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeCreatePrePaidInstanceResultOutcome EnsClient::describeCreatePrePaidInstanceResult(const DescribeCreatePrePaidInstanceResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCreatePrePaidInstanceResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCreatePrePaidInstanceResultOutcome(DescribeCreatePrePaidInstanceResultResult(outcome.result()));
	else
		return DescribeCreatePrePaidInstanceResultOutcome(outcome.error());
}

void EnsClient::describeCreatePrePaidInstanceResultAsync(const DescribeCreatePrePaidInstanceResultRequest& request, const DescribeCreatePrePaidInstanceResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCreatePrePaidInstanceResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeCreatePrePaidInstanceResultOutcomeCallable EnsClient::describeCreatePrePaidInstanceResultCallable(const DescribeCreatePrePaidInstanceResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCreatePrePaidInstanceResultOutcome()>>(
			[this, request]()
			{
			return this->describeCreatePrePaidInstanceResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeDataDistResultOutcome EnsClient::describeDataDistResult(const DescribeDataDistResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataDistResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataDistResultOutcome(DescribeDataDistResultResult(outcome.result()));
	else
		return DescribeDataDistResultOutcome(outcome.error());
}

void EnsClient::describeDataDistResultAsync(const DescribeDataDistResultRequest& request, const DescribeDataDistResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataDistResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeDataDistResultOutcomeCallable EnsClient::describeDataDistResultCallable(const DescribeDataDistResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataDistResultOutcome()>>(
			[this, request]()
			{
			return this->describeDataDistResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeDataDownloadURLOutcome EnsClient::describeDataDownloadURL(const DescribeDataDownloadURLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataDownloadURLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataDownloadURLOutcome(DescribeDataDownloadURLResult(outcome.result()));
	else
		return DescribeDataDownloadURLOutcome(outcome.error());
}

void EnsClient::describeDataDownloadURLAsync(const DescribeDataDownloadURLRequest& request, const DescribeDataDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataDownloadURL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeDataDownloadURLOutcomeCallable EnsClient::describeDataDownloadURLCallable(const DescribeDataDownloadURLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataDownloadURLOutcome()>>(
			[this, request]()
			{
			return this->describeDataDownloadURL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeDataPushResultOutcome EnsClient::describeDataPushResult(const DescribeDataPushResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataPushResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataPushResultOutcome(DescribeDataPushResultResult(outcome.result()));
	else
		return DescribeDataPushResultOutcome(outcome.error());
}

void EnsClient::describeDataPushResultAsync(const DescribeDataPushResultRequest& request, const DescribeDataPushResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataPushResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeDataPushResultOutcomeCallable EnsClient::describeDataPushResultCallable(const DescribeDataPushResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataPushResultOutcome()>>(
			[this, request]()
			{
			return this->describeDataPushResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeDeviceServiceOutcome EnsClient::describeDeviceService(const DescribeDeviceServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDeviceServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDeviceServiceOutcome(DescribeDeviceServiceResult(outcome.result()));
	else
		return DescribeDeviceServiceOutcome(outcome.error());
}

void EnsClient::describeDeviceServiceAsync(const DescribeDeviceServiceRequest& request, const DescribeDeviceServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDeviceService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeDeviceServiceOutcomeCallable EnsClient::describeDeviceServiceCallable(const DescribeDeviceServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDeviceServiceOutcome()>>(
			[this, request]()
			{
			return this->describeDeviceService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeDiskIopsListOutcome EnsClient::describeDiskIopsList(const DescribeDiskIopsListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDiskIopsListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDiskIopsListOutcome(DescribeDiskIopsListResult(outcome.result()));
	else
		return DescribeDiskIopsListOutcome(outcome.error());
}

void EnsClient::describeDiskIopsListAsync(const DescribeDiskIopsListRequest& request, const DescribeDiskIopsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDiskIopsList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeDiskIopsListOutcomeCallable EnsClient::describeDiskIopsListCallable(const DescribeDiskIopsListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDiskIopsListOutcome()>>(
			[this, request]()
			{
			return this->describeDiskIopsList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeDisksOutcome EnsClient::describeDisks(const DescribeDisksRequest &request) const
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

void EnsClient::describeDisksAsync(const DescribeDisksRequest& request, const DescribeDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDisks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeDisksOutcomeCallable EnsClient::describeDisksCallable(const DescribeDisksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDisksOutcome()>>(
			[this, request]()
			{
			return this->describeDisks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeElbAvailableResourceInfoOutcome EnsClient::describeElbAvailableResourceInfo(const DescribeElbAvailableResourceInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeElbAvailableResourceInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeElbAvailableResourceInfoOutcome(DescribeElbAvailableResourceInfoResult(outcome.result()));
	else
		return DescribeElbAvailableResourceInfoOutcome(outcome.error());
}

void EnsClient::describeElbAvailableResourceInfoAsync(const DescribeElbAvailableResourceInfoRequest& request, const DescribeElbAvailableResourceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeElbAvailableResourceInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeElbAvailableResourceInfoOutcomeCallable EnsClient::describeElbAvailableResourceInfoCallable(const DescribeElbAvailableResourceInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeElbAvailableResourceInfoOutcome()>>(
			[this, request]()
			{
			return this->describeElbAvailableResourceInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeEnsCommodityCodeOutcome EnsClient::describeEnsCommodityCode(const DescribeEnsCommodityCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEnsCommodityCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEnsCommodityCodeOutcome(DescribeEnsCommodityCodeResult(outcome.result()));
	else
		return DescribeEnsCommodityCodeOutcome(outcome.error());
}

void EnsClient::describeEnsCommodityCodeAsync(const DescribeEnsCommodityCodeRequest& request, const DescribeEnsCommodityCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEnsCommodityCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeEnsCommodityCodeOutcomeCallable EnsClient::describeEnsCommodityCodeCallable(const DescribeEnsCommodityCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEnsCommodityCodeOutcome()>>(
			[this, request]()
			{
			return this->describeEnsCommodityCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeEnsCommodityModuleCodeOutcome EnsClient::describeEnsCommodityModuleCode(const DescribeEnsCommodityModuleCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEnsCommodityModuleCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEnsCommodityModuleCodeOutcome(DescribeEnsCommodityModuleCodeResult(outcome.result()));
	else
		return DescribeEnsCommodityModuleCodeOutcome(outcome.error());
}

void EnsClient::describeEnsCommodityModuleCodeAsync(const DescribeEnsCommodityModuleCodeRequest& request, const DescribeEnsCommodityModuleCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEnsCommodityModuleCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeEnsCommodityModuleCodeOutcomeCallable EnsClient::describeEnsCommodityModuleCodeCallable(const DescribeEnsCommodityModuleCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEnsCommodityModuleCodeOutcome()>>(
			[this, request]()
			{
			return this->describeEnsCommodityModuleCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeEnsEipAddressesOutcome EnsClient::describeEnsEipAddresses(const DescribeEnsEipAddressesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEnsEipAddressesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEnsEipAddressesOutcome(DescribeEnsEipAddressesResult(outcome.result()));
	else
		return DescribeEnsEipAddressesOutcome(outcome.error());
}

void EnsClient::describeEnsEipAddressesAsync(const DescribeEnsEipAddressesRequest& request, const DescribeEnsEipAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEnsEipAddresses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeEnsEipAddressesOutcomeCallable EnsClient::describeEnsEipAddressesCallable(const DescribeEnsEipAddressesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEnsEipAddressesOutcome()>>(
			[this, request]()
			{
			return this->describeEnsEipAddresses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeEnsNetDistrictOutcome EnsClient::describeEnsNetDistrict(const DescribeEnsNetDistrictRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEnsNetDistrictOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEnsNetDistrictOutcome(DescribeEnsNetDistrictResult(outcome.result()));
	else
		return DescribeEnsNetDistrictOutcome(outcome.error());
}

void EnsClient::describeEnsNetDistrictAsync(const DescribeEnsNetDistrictRequest& request, const DescribeEnsNetDistrictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEnsNetDistrict(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeEnsNetDistrictOutcomeCallable EnsClient::describeEnsNetDistrictCallable(const DescribeEnsNetDistrictRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEnsNetDistrictOutcome()>>(
			[this, request]()
			{
			return this->describeEnsNetDistrict(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeEnsNetLevelOutcome EnsClient::describeEnsNetLevel(const DescribeEnsNetLevelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEnsNetLevelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEnsNetLevelOutcome(DescribeEnsNetLevelResult(outcome.result()));
	else
		return DescribeEnsNetLevelOutcome(outcome.error());
}

void EnsClient::describeEnsNetLevelAsync(const DescribeEnsNetLevelRequest& request, const DescribeEnsNetLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEnsNetLevel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeEnsNetLevelOutcomeCallable EnsClient::describeEnsNetLevelCallable(const DescribeEnsNetLevelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEnsNetLevelOutcome()>>(
			[this, request]()
			{
			return this->describeEnsNetLevel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeEnsNetSaleDistrictOutcome EnsClient::describeEnsNetSaleDistrict(const DescribeEnsNetSaleDistrictRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEnsNetSaleDistrictOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEnsNetSaleDistrictOutcome(DescribeEnsNetSaleDistrictResult(outcome.result()));
	else
		return DescribeEnsNetSaleDistrictOutcome(outcome.error());
}

void EnsClient::describeEnsNetSaleDistrictAsync(const DescribeEnsNetSaleDistrictRequest& request, const DescribeEnsNetSaleDistrictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEnsNetSaleDistrict(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeEnsNetSaleDistrictOutcomeCallable EnsClient::describeEnsNetSaleDistrictCallable(const DescribeEnsNetSaleDistrictRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEnsNetSaleDistrictOutcome()>>(
			[this, request]()
			{
			return this->describeEnsNetSaleDistrict(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeEnsRegionIdIpv6InfoOutcome EnsClient::describeEnsRegionIdIpv6Info(const DescribeEnsRegionIdIpv6InfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEnsRegionIdIpv6InfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEnsRegionIdIpv6InfoOutcome(DescribeEnsRegionIdIpv6InfoResult(outcome.result()));
	else
		return DescribeEnsRegionIdIpv6InfoOutcome(outcome.error());
}

void EnsClient::describeEnsRegionIdIpv6InfoAsync(const DescribeEnsRegionIdIpv6InfoRequest& request, const DescribeEnsRegionIdIpv6InfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEnsRegionIdIpv6Info(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeEnsRegionIdIpv6InfoOutcomeCallable EnsClient::describeEnsRegionIdIpv6InfoCallable(const DescribeEnsRegionIdIpv6InfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEnsRegionIdIpv6InfoOutcome()>>(
			[this, request]()
			{
			return this->describeEnsRegionIdIpv6Info(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeEnsRegionIdResourceOutcome EnsClient::describeEnsRegionIdResource(const DescribeEnsRegionIdResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEnsRegionIdResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEnsRegionIdResourceOutcome(DescribeEnsRegionIdResourceResult(outcome.result()));
	else
		return DescribeEnsRegionIdResourceOutcome(outcome.error());
}

void EnsClient::describeEnsRegionIdResourceAsync(const DescribeEnsRegionIdResourceRequest& request, const DescribeEnsRegionIdResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEnsRegionIdResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeEnsRegionIdResourceOutcomeCallable EnsClient::describeEnsRegionIdResourceCallable(const DescribeEnsRegionIdResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEnsRegionIdResourceOutcome()>>(
			[this, request]()
			{
			return this->describeEnsRegionIdResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeEnsRegionsOutcome EnsClient::describeEnsRegions(const DescribeEnsRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEnsRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEnsRegionsOutcome(DescribeEnsRegionsResult(outcome.result()));
	else
		return DescribeEnsRegionsOutcome(outcome.error());
}

void EnsClient::describeEnsRegionsAsync(const DescribeEnsRegionsRequest& request, const DescribeEnsRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEnsRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeEnsRegionsOutcomeCallable EnsClient::describeEnsRegionsCallable(const DescribeEnsRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEnsRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeEnsRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeEnsResourceUsageOutcome EnsClient::describeEnsResourceUsage(const DescribeEnsResourceUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEnsResourceUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEnsResourceUsageOutcome(DescribeEnsResourceUsageResult(outcome.result()));
	else
		return DescribeEnsResourceUsageOutcome(outcome.error());
}

void EnsClient::describeEnsResourceUsageAsync(const DescribeEnsResourceUsageRequest& request, const DescribeEnsResourceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEnsResourceUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeEnsResourceUsageOutcomeCallable EnsClient::describeEnsResourceUsageCallable(const DescribeEnsResourceUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEnsResourceUsageOutcome()>>(
			[this, request]()
			{
			return this->describeEnsResourceUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeEnsRouteEntryListOutcome EnsClient::describeEnsRouteEntryList(const DescribeEnsRouteEntryListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEnsRouteEntryListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEnsRouteEntryListOutcome(DescribeEnsRouteEntryListResult(outcome.result()));
	else
		return DescribeEnsRouteEntryListOutcome(outcome.error());
}

void EnsClient::describeEnsRouteEntryListAsync(const DescribeEnsRouteEntryListRequest& request, const DescribeEnsRouteEntryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEnsRouteEntryList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeEnsRouteEntryListOutcomeCallable EnsClient::describeEnsRouteEntryListCallable(const DescribeEnsRouteEntryListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEnsRouteEntryListOutcome()>>(
			[this, request]()
			{
			return this->describeEnsRouteEntryList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeEnsRouteTablesOutcome EnsClient::describeEnsRouteTables(const DescribeEnsRouteTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEnsRouteTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEnsRouteTablesOutcome(DescribeEnsRouteTablesResult(outcome.result()));
	else
		return DescribeEnsRouteTablesOutcome(outcome.error());
}

void EnsClient::describeEnsRouteTablesAsync(const DescribeEnsRouteTablesRequest& request, const DescribeEnsRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEnsRouteTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeEnsRouteTablesOutcomeCallable EnsClient::describeEnsRouteTablesCallable(const DescribeEnsRouteTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEnsRouteTablesOutcome()>>(
			[this, request]()
			{
			return this->describeEnsRouteTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeEnsSaleControlOutcome EnsClient::describeEnsSaleControl(const DescribeEnsSaleControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEnsSaleControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEnsSaleControlOutcome(DescribeEnsSaleControlResult(outcome.result()));
	else
		return DescribeEnsSaleControlOutcome(outcome.error());
}

void EnsClient::describeEnsSaleControlAsync(const DescribeEnsSaleControlRequest& request, const DescribeEnsSaleControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEnsSaleControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeEnsSaleControlOutcomeCallable EnsClient::describeEnsSaleControlCallable(const DescribeEnsSaleControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEnsSaleControlOutcome()>>(
			[this, request]()
			{
			return this->describeEnsSaleControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeEnsSaleControlAvailableResourceOutcome EnsClient::describeEnsSaleControlAvailableResource(const DescribeEnsSaleControlAvailableResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEnsSaleControlAvailableResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEnsSaleControlAvailableResourceOutcome(DescribeEnsSaleControlAvailableResourceResult(outcome.result()));
	else
		return DescribeEnsSaleControlAvailableResourceOutcome(outcome.error());
}

void EnsClient::describeEnsSaleControlAvailableResourceAsync(const DescribeEnsSaleControlAvailableResourceRequest& request, const DescribeEnsSaleControlAvailableResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEnsSaleControlAvailableResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeEnsSaleControlAvailableResourceOutcomeCallable EnsClient::describeEnsSaleControlAvailableResourceCallable(const DescribeEnsSaleControlAvailableResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEnsSaleControlAvailableResourceOutcome()>>(
			[this, request]()
			{
			return this->describeEnsSaleControlAvailableResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeEnsSaleControlStockOutcome EnsClient::describeEnsSaleControlStock(const DescribeEnsSaleControlStockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEnsSaleControlStockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEnsSaleControlStockOutcome(DescribeEnsSaleControlStockResult(outcome.result()));
	else
		return DescribeEnsSaleControlStockOutcome(outcome.error());
}

void EnsClient::describeEnsSaleControlStockAsync(const DescribeEnsSaleControlStockRequest& request, const DescribeEnsSaleControlStockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEnsSaleControlStock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeEnsSaleControlStockOutcomeCallable EnsClient::describeEnsSaleControlStockCallable(const DescribeEnsSaleControlStockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEnsSaleControlStockOutcome()>>(
			[this, request]()
			{
			return this->describeEnsSaleControlStock(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeEpnBandWidthDataOutcome EnsClient::describeEpnBandWidthData(const DescribeEpnBandWidthDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEpnBandWidthDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEpnBandWidthDataOutcome(DescribeEpnBandWidthDataResult(outcome.result()));
	else
		return DescribeEpnBandWidthDataOutcome(outcome.error());
}

void EnsClient::describeEpnBandWidthDataAsync(const DescribeEpnBandWidthDataRequest& request, const DescribeEpnBandWidthDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEpnBandWidthData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeEpnBandWidthDataOutcomeCallable EnsClient::describeEpnBandWidthDataCallable(const DescribeEpnBandWidthDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEpnBandWidthDataOutcome()>>(
			[this, request]()
			{
			return this->describeEpnBandWidthData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeEpnBandwitdhByInternetChargeTypeOutcome EnsClient::describeEpnBandwitdhByInternetChargeType(const DescribeEpnBandwitdhByInternetChargeTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEpnBandwitdhByInternetChargeTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEpnBandwitdhByInternetChargeTypeOutcome(DescribeEpnBandwitdhByInternetChargeTypeResult(outcome.result()));
	else
		return DescribeEpnBandwitdhByInternetChargeTypeOutcome(outcome.error());
}

void EnsClient::describeEpnBandwitdhByInternetChargeTypeAsync(const DescribeEpnBandwitdhByInternetChargeTypeRequest& request, const DescribeEpnBandwitdhByInternetChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEpnBandwitdhByInternetChargeType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeEpnBandwitdhByInternetChargeTypeOutcomeCallable EnsClient::describeEpnBandwitdhByInternetChargeTypeCallable(const DescribeEpnBandwitdhByInternetChargeTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEpnBandwitdhByInternetChargeTypeOutcome()>>(
			[this, request]()
			{
			return this->describeEpnBandwitdhByInternetChargeType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeEpnInstanceAttributeOutcome EnsClient::describeEpnInstanceAttribute(const DescribeEpnInstanceAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEpnInstanceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEpnInstanceAttributeOutcome(DescribeEpnInstanceAttributeResult(outcome.result()));
	else
		return DescribeEpnInstanceAttributeOutcome(outcome.error());
}

void EnsClient::describeEpnInstanceAttributeAsync(const DescribeEpnInstanceAttributeRequest& request, const DescribeEpnInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEpnInstanceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeEpnInstanceAttributeOutcomeCallable EnsClient::describeEpnInstanceAttributeCallable(const DescribeEpnInstanceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEpnInstanceAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeEpnInstanceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeEpnInstancesOutcome EnsClient::describeEpnInstances(const DescribeEpnInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEpnInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEpnInstancesOutcome(DescribeEpnInstancesResult(outcome.result()));
	else
		return DescribeEpnInstancesOutcome(outcome.error());
}

void EnsClient::describeEpnInstancesAsync(const DescribeEpnInstancesRequest& request, const DescribeEpnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEpnInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeEpnInstancesOutcomeCallable EnsClient::describeEpnInstancesCallable(const DescribeEpnInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEpnInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeEpnInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeEpnMeasurementDataOutcome EnsClient::describeEpnMeasurementData(const DescribeEpnMeasurementDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEpnMeasurementDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEpnMeasurementDataOutcome(DescribeEpnMeasurementDataResult(outcome.result()));
	else
		return DescribeEpnMeasurementDataOutcome(outcome.error());
}

void EnsClient::describeEpnMeasurementDataAsync(const DescribeEpnMeasurementDataRequest& request, const DescribeEpnMeasurementDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEpnMeasurementData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeEpnMeasurementDataOutcomeCallable EnsClient::describeEpnMeasurementDataCallable(const DescribeEpnMeasurementDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEpnMeasurementDataOutcome()>>(
			[this, request]()
			{
			return this->describeEpnMeasurementData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeExportImageInfoOutcome EnsClient::describeExportImageInfo(const DescribeExportImageInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExportImageInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExportImageInfoOutcome(DescribeExportImageInfoResult(outcome.result()));
	else
		return DescribeExportImageInfoOutcome(outcome.error());
}

void EnsClient::describeExportImageInfoAsync(const DescribeExportImageInfoRequest& request, const DescribeExportImageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExportImageInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeExportImageInfoOutcomeCallable EnsClient::describeExportImageInfoCallable(const DescribeExportImageInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExportImageInfoOutcome()>>(
			[this, request]()
			{
			return this->describeExportImageInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeExportImageStatusOutcome EnsClient::describeExportImageStatus(const DescribeExportImageStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExportImageStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExportImageStatusOutcome(DescribeExportImageStatusResult(outcome.result()));
	else
		return DescribeExportImageStatusOutcome(outcome.error());
}

void EnsClient::describeExportImageStatusAsync(const DescribeExportImageStatusRequest& request, const DescribeExportImageStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExportImageStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeExportImageStatusOutcomeCallable EnsClient::describeExportImageStatusCallable(const DescribeExportImageStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExportImageStatusOutcome()>>(
			[this, request]()
			{
			return this->describeExportImageStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeFileSystemsOutcome EnsClient::describeFileSystems(const DescribeFileSystemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFileSystemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFileSystemsOutcome(DescribeFileSystemsResult(outcome.result()));
	else
		return DescribeFileSystemsOutcome(outcome.error());
}

void EnsClient::describeFileSystemsAsync(const DescribeFileSystemsRequest& request, const DescribeFileSystemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFileSystems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeFileSystemsOutcomeCallable EnsClient::describeFileSystemsCallable(const DescribeFileSystemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFileSystemsOutcome()>>(
			[this, request]()
			{
			return this->describeFileSystems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeForwardTableEntriesOutcome EnsClient::describeForwardTableEntries(const DescribeForwardTableEntriesRequest &request) const
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

void EnsClient::describeForwardTableEntriesAsync(const DescribeForwardTableEntriesRequest& request, const DescribeForwardTableEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeForwardTableEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeForwardTableEntriesOutcomeCallable EnsClient::describeForwardTableEntriesCallable(const DescribeForwardTableEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeForwardTableEntriesOutcome()>>(
			[this, request]()
			{
			return this->describeForwardTableEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeHaVipsOutcome EnsClient::describeHaVips(const DescribeHaVipsRequest &request) const
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

void EnsClient::describeHaVipsAsync(const DescribeHaVipsRequest& request, const DescribeHaVipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHaVips(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeHaVipsOutcomeCallable EnsClient::describeHaVipsCallable(const DescribeHaVipsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHaVipsOutcome()>>(
			[this, request]()
			{
			return this->describeHaVips(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeImageInfosOutcome EnsClient::describeImageInfos(const DescribeImageInfosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageInfosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageInfosOutcome(DescribeImageInfosResult(outcome.result()));
	else
		return DescribeImageInfosOutcome(outcome.error());
}

void EnsClient::describeImageInfosAsync(const DescribeImageInfosRequest& request, const DescribeImageInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageInfos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeImageInfosOutcomeCallable EnsClient::describeImageInfosCallable(const DescribeImageInfosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageInfosOutcome()>>(
			[this, request]()
			{
			return this->describeImageInfos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeImageSharePermissionOutcome EnsClient::describeImageSharePermission(const DescribeImageSharePermissionRequest &request) const
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

void EnsClient::describeImageSharePermissionAsync(const DescribeImageSharePermissionRequest& request, const DescribeImageSharePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageSharePermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeImageSharePermissionOutcomeCallable EnsClient::describeImageSharePermissionCallable(const DescribeImageSharePermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageSharePermissionOutcome()>>(
			[this, request]()
			{
			return this->describeImageSharePermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeImagesOutcome EnsClient::describeImages(const DescribeImagesRequest &request) const
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

void EnsClient::describeImagesAsync(const DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeImagesOutcomeCallable EnsClient::describeImagesCallable(const DescribeImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImagesOutcome()>>(
			[this, request]()
			{
			return this->describeImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeInstanceAutoRenewAttributeOutcome EnsClient::describeInstanceAutoRenewAttribute(const DescribeInstanceAutoRenewAttributeRequest &request) const
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

void EnsClient::describeInstanceAutoRenewAttributeAsync(const DescribeInstanceAutoRenewAttributeRequest& request, const DescribeInstanceAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceAutoRenewAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeInstanceAutoRenewAttributeOutcomeCallable EnsClient::describeInstanceAutoRenewAttributeCallable(const DescribeInstanceAutoRenewAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceAutoRenewAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceAutoRenewAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeInstanceBandwidthDetailOutcome EnsClient::describeInstanceBandwidthDetail(const DescribeInstanceBandwidthDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceBandwidthDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceBandwidthDetailOutcome(DescribeInstanceBandwidthDetailResult(outcome.result()));
	else
		return DescribeInstanceBandwidthDetailOutcome(outcome.error());
}

void EnsClient::describeInstanceBandwidthDetailAsync(const DescribeInstanceBandwidthDetailRequest& request, const DescribeInstanceBandwidthDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceBandwidthDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeInstanceBandwidthDetailOutcomeCallable EnsClient::describeInstanceBandwidthDetailCallable(const DescribeInstanceBandwidthDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceBandwidthDetailOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceBandwidthDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeInstanceMonitorDataOutcome EnsClient::describeInstanceMonitorData(const DescribeInstanceMonitorDataRequest &request) const
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

void EnsClient::describeInstanceMonitorDataAsync(const DescribeInstanceMonitorDataRequest& request, const DescribeInstanceMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceMonitorData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeInstanceMonitorDataOutcomeCallable EnsClient::describeInstanceMonitorDataCallable(const DescribeInstanceMonitorDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceMonitorDataOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceMonitorData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeInstanceSDGStatusOutcome EnsClient::describeInstanceSDGStatus(const DescribeInstanceSDGStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceSDGStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceSDGStatusOutcome(DescribeInstanceSDGStatusResult(outcome.result()));
	else
		return DescribeInstanceSDGStatusOutcome(outcome.error());
}

void EnsClient::describeInstanceSDGStatusAsync(const DescribeInstanceSDGStatusRequest& request, const DescribeInstanceSDGStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceSDGStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeInstanceSDGStatusOutcomeCallable EnsClient::describeInstanceSDGStatusCallable(const DescribeInstanceSDGStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceSDGStatusOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceSDGStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeInstanceSpecOutcome EnsClient::describeInstanceSpec(const DescribeInstanceSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceSpecOutcome(DescribeInstanceSpecResult(outcome.result()));
	else
		return DescribeInstanceSpecOutcome(outcome.error());
}

void EnsClient::describeInstanceSpecAsync(const DescribeInstanceSpecRequest& request, const DescribeInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeInstanceSpecOutcomeCallable EnsClient::describeInstanceSpecCallable(const DescribeInstanceSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceSpecOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeInstanceTypesOutcome EnsClient::describeInstanceTypes(const DescribeInstanceTypesRequest &request) const
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

void EnsClient::describeInstanceTypesAsync(const DescribeInstanceTypesRequest& request, const DescribeInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeInstanceTypesOutcomeCallable EnsClient::describeInstanceTypesCallable(const DescribeInstanceTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceTypesOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeInstanceVncUrlOutcome EnsClient::describeInstanceVncUrl(const DescribeInstanceVncUrlRequest &request) const
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

void EnsClient::describeInstanceVncUrlAsync(const DescribeInstanceVncUrlRequest& request, const DescribeInstanceVncUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceVncUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeInstanceVncUrlOutcomeCallable EnsClient::describeInstanceVncUrlCallable(const DescribeInstanceVncUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceVncUrlOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceVncUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeInstancesOutcome EnsClient::describeInstances(const DescribeInstancesRequest &request) const
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

void EnsClient::describeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeInstancesOutcomeCallable EnsClient::describeInstancesCallable(const DescribeInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeKeyPairsOutcome EnsClient::describeKeyPairs(const DescribeKeyPairsRequest &request) const
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

void EnsClient::describeKeyPairsAsync(const DescribeKeyPairsRequest& request, const DescribeKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeKeyPairs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeKeyPairsOutcomeCallable EnsClient::describeKeyPairsCallable(const DescribeKeyPairsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeKeyPairsOutcome()>>(
			[this, request]()
			{
			return this->describeKeyPairs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeLoadBalancerAttributeOutcome EnsClient::describeLoadBalancerAttribute(const DescribeLoadBalancerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLoadBalancerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLoadBalancerAttributeOutcome(DescribeLoadBalancerAttributeResult(outcome.result()));
	else
		return DescribeLoadBalancerAttributeOutcome(outcome.error());
}

void EnsClient::describeLoadBalancerAttributeAsync(const DescribeLoadBalancerAttributeRequest& request, const DescribeLoadBalancerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLoadBalancerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeLoadBalancerAttributeOutcomeCallable EnsClient::describeLoadBalancerAttributeCallable(const DescribeLoadBalancerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLoadBalancerAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeLoadBalancerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeLoadBalancerHTTPListenerAttributeOutcome EnsClient::describeLoadBalancerHTTPListenerAttribute(const DescribeLoadBalancerHTTPListenerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLoadBalancerHTTPListenerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLoadBalancerHTTPListenerAttributeOutcome(DescribeLoadBalancerHTTPListenerAttributeResult(outcome.result()));
	else
		return DescribeLoadBalancerHTTPListenerAttributeOutcome(outcome.error());
}

void EnsClient::describeLoadBalancerHTTPListenerAttributeAsync(const DescribeLoadBalancerHTTPListenerAttributeRequest& request, const DescribeLoadBalancerHTTPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLoadBalancerHTTPListenerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeLoadBalancerHTTPListenerAttributeOutcomeCallable EnsClient::describeLoadBalancerHTTPListenerAttributeCallable(const DescribeLoadBalancerHTTPListenerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLoadBalancerHTTPListenerAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeLoadBalancerHTTPListenerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeLoadBalancerHTTPSListenerAttributeOutcome EnsClient::describeLoadBalancerHTTPSListenerAttribute(const DescribeLoadBalancerHTTPSListenerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLoadBalancerHTTPSListenerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLoadBalancerHTTPSListenerAttributeOutcome(DescribeLoadBalancerHTTPSListenerAttributeResult(outcome.result()));
	else
		return DescribeLoadBalancerHTTPSListenerAttributeOutcome(outcome.error());
}

void EnsClient::describeLoadBalancerHTTPSListenerAttributeAsync(const DescribeLoadBalancerHTTPSListenerAttributeRequest& request, const DescribeLoadBalancerHTTPSListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLoadBalancerHTTPSListenerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeLoadBalancerHTTPSListenerAttributeOutcomeCallable EnsClient::describeLoadBalancerHTTPSListenerAttributeCallable(const DescribeLoadBalancerHTTPSListenerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLoadBalancerHTTPSListenerAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeLoadBalancerHTTPSListenerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeLoadBalancerListenMonitorOutcome EnsClient::describeLoadBalancerListenMonitor(const DescribeLoadBalancerListenMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLoadBalancerListenMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLoadBalancerListenMonitorOutcome(DescribeLoadBalancerListenMonitorResult(outcome.result()));
	else
		return DescribeLoadBalancerListenMonitorOutcome(outcome.error());
}

void EnsClient::describeLoadBalancerListenMonitorAsync(const DescribeLoadBalancerListenMonitorRequest& request, const DescribeLoadBalancerListenMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLoadBalancerListenMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeLoadBalancerListenMonitorOutcomeCallable EnsClient::describeLoadBalancerListenMonitorCallable(const DescribeLoadBalancerListenMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLoadBalancerListenMonitorOutcome()>>(
			[this, request]()
			{
			return this->describeLoadBalancerListenMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeLoadBalancerListenersOutcome EnsClient::describeLoadBalancerListeners(const DescribeLoadBalancerListenersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLoadBalancerListenersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLoadBalancerListenersOutcome(DescribeLoadBalancerListenersResult(outcome.result()));
	else
		return DescribeLoadBalancerListenersOutcome(outcome.error());
}

void EnsClient::describeLoadBalancerListenersAsync(const DescribeLoadBalancerListenersRequest& request, const DescribeLoadBalancerListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLoadBalancerListeners(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeLoadBalancerListenersOutcomeCallable EnsClient::describeLoadBalancerListenersCallable(const DescribeLoadBalancerListenersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLoadBalancerListenersOutcome()>>(
			[this, request]()
			{
			return this->describeLoadBalancerListeners(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeLoadBalancerSpecOutcome EnsClient::describeLoadBalancerSpec(const DescribeLoadBalancerSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLoadBalancerSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLoadBalancerSpecOutcome(DescribeLoadBalancerSpecResult(outcome.result()));
	else
		return DescribeLoadBalancerSpecOutcome(outcome.error());
}

void EnsClient::describeLoadBalancerSpecAsync(const DescribeLoadBalancerSpecRequest& request, const DescribeLoadBalancerSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLoadBalancerSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeLoadBalancerSpecOutcomeCallable EnsClient::describeLoadBalancerSpecCallable(const DescribeLoadBalancerSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLoadBalancerSpecOutcome()>>(
			[this, request]()
			{
			return this->describeLoadBalancerSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeLoadBalancerTCPListenerAttributeOutcome EnsClient::describeLoadBalancerTCPListenerAttribute(const DescribeLoadBalancerTCPListenerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLoadBalancerTCPListenerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLoadBalancerTCPListenerAttributeOutcome(DescribeLoadBalancerTCPListenerAttributeResult(outcome.result()));
	else
		return DescribeLoadBalancerTCPListenerAttributeOutcome(outcome.error());
}

void EnsClient::describeLoadBalancerTCPListenerAttributeAsync(const DescribeLoadBalancerTCPListenerAttributeRequest& request, const DescribeLoadBalancerTCPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLoadBalancerTCPListenerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeLoadBalancerTCPListenerAttributeOutcomeCallable EnsClient::describeLoadBalancerTCPListenerAttributeCallable(const DescribeLoadBalancerTCPListenerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLoadBalancerTCPListenerAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeLoadBalancerTCPListenerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeLoadBalancerUDPListenerAttributeOutcome EnsClient::describeLoadBalancerUDPListenerAttribute(const DescribeLoadBalancerUDPListenerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLoadBalancerUDPListenerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLoadBalancerUDPListenerAttributeOutcome(DescribeLoadBalancerUDPListenerAttributeResult(outcome.result()));
	else
		return DescribeLoadBalancerUDPListenerAttributeOutcome(outcome.error());
}

void EnsClient::describeLoadBalancerUDPListenerAttributeAsync(const DescribeLoadBalancerUDPListenerAttributeRequest& request, const DescribeLoadBalancerUDPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLoadBalancerUDPListenerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeLoadBalancerUDPListenerAttributeOutcomeCallable EnsClient::describeLoadBalancerUDPListenerAttributeCallable(const DescribeLoadBalancerUDPListenerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLoadBalancerUDPListenerAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeLoadBalancerUDPListenerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeLoadBalancersOutcome EnsClient::describeLoadBalancers(const DescribeLoadBalancersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLoadBalancersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLoadBalancersOutcome(DescribeLoadBalancersResult(outcome.result()));
	else
		return DescribeLoadBalancersOutcome(outcome.error());
}

void EnsClient::describeLoadBalancersAsync(const DescribeLoadBalancersRequest& request, const DescribeLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLoadBalancers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeLoadBalancersOutcomeCallable EnsClient::describeLoadBalancersCallable(const DescribeLoadBalancersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLoadBalancersOutcome()>>(
			[this, request]()
			{
			return this->describeLoadBalancers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeMeasurementDataOutcome EnsClient::describeMeasurementData(const DescribeMeasurementDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMeasurementDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMeasurementDataOutcome(DescribeMeasurementDataResult(outcome.result()));
	else
		return DescribeMeasurementDataOutcome(outcome.error());
}

void EnsClient::describeMeasurementDataAsync(const DescribeMeasurementDataRequest& request, const DescribeMeasurementDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMeasurementData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeMeasurementDataOutcomeCallable EnsClient::describeMeasurementDataCallable(const DescribeMeasurementDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMeasurementDataOutcome()>>(
			[this, request]()
			{
			return this->describeMeasurementData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeMountTargetsOutcome EnsClient::describeMountTargets(const DescribeMountTargetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMountTargetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMountTargetsOutcome(DescribeMountTargetsResult(outcome.result()));
	else
		return DescribeMountTargetsOutcome(outcome.error());
}

void EnsClient::describeMountTargetsAsync(const DescribeMountTargetsRequest& request, const DescribeMountTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMountTargets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeMountTargetsOutcomeCallable EnsClient::describeMountTargetsCallable(const DescribeMountTargetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMountTargetsOutcome()>>(
			[this, request]()
			{
			return this->describeMountTargets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeNCInformationOutcome EnsClient::describeNCInformation(const DescribeNCInformationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNCInformationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNCInformationOutcome(DescribeNCInformationResult(outcome.result()));
	else
		return DescribeNCInformationOutcome(outcome.error());
}

void EnsClient::describeNCInformationAsync(const DescribeNCInformationRequest& request, const DescribeNCInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNCInformation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeNCInformationOutcomeCallable EnsClient::describeNCInformationCallable(const DescribeNCInformationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNCInformationOutcome()>>(
			[this, request]()
			{
			return this->describeNCInformation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeNatGatewaysOutcome EnsClient::describeNatGateways(const DescribeNatGatewaysRequest &request) const
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

void EnsClient::describeNatGatewaysAsync(const DescribeNatGatewaysRequest& request, const DescribeNatGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNatGateways(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeNatGatewaysOutcomeCallable EnsClient::describeNatGatewaysCallable(const DescribeNatGatewaysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNatGatewaysOutcome()>>(
			[this, request]()
			{
			return this->describeNatGateways(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeNetworkAclsOutcome EnsClient::describeNetworkAcls(const DescribeNetworkAclsRequest &request) const
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

void EnsClient::describeNetworkAclsAsync(const DescribeNetworkAclsRequest& request, const DescribeNetworkAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNetworkAcls(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeNetworkAclsOutcomeCallable EnsClient::describeNetworkAclsCallable(const DescribeNetworkAclsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNetworkAclsOutcome()>>(
			[this, request]()
			{
			return this->describeNetworkAcls(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeNetworkAttributeOutcome EnsClient::describeNetworkAttribute(const DescribeNetworkAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNetworkAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNetworkAttributeOutcome(DescribeNetworkAttributeResult(outcome.result()));
	else
		return DescribeNetworkAttributeOutcome(outcome.error());
}

void EnsClient::describeNetworkAttributeAsync(const DescribeNetworkAttributeRequest& request, const DescribeNetworkAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNetworkAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeNetworkAttributeOutcomeCallable EnsClient::describeNetworkAttributeCallable(const DescribeNetworkAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNetworkAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeNetworkAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeNetworkInterfacesOutcome EnsClient::describeNetworkInterfaces(const DescribeNetworkInterfacesRequest &request) const
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

void EnsClient::describeNetworkInterfacesAsync(const DescribeNetworkInterfacesRequest& request, const DescribeNetworkInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNetworkInterfaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeNetworkInterfacesOutcomeCallable EnsClient::describeNetworkInterfacesCallable(const DescribeNetworkInterfacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNetworkInterfacesOutcome()>>(
			[this, request]()
			{
			return this->describeNetworkInterfaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeNetworksOutcome EnsClient::describeNetworks(const DescribeNetworksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNetworksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNetworksOutcome(DescribeNetworksResult(outcome.result()));
	else
		return DescribeNetworksOutcome(outcome.error());
}

void EnsClient::describeNetworksAsync(const DescribeNetworksRequest& request, const DescribeNetworksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNetworks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeNetworksOutcomeCallable EnsClient::describeNetworksCallable(const DescribeNetworksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNetworksOutcome()>>(
			[this, request]()
			{
			return this->describeNetworks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribePrePaidInstanceStockOutcome EnsClient::describePrePaidInstanceStock(const DescribePrePaidInstanceStockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePrePaidInstanceStockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePrePaidInstanceStockOutcome(DescribePrePaidInstanceStockResult(outcome.result()));
	else
		return DescribePrePaidInstanceStockOutcome(outcome.error());
}

void EnsClient::describePrePaidInstanceStockAsync(const DescribePrePaidInstanceStockRequest& request, const DescribePrePaidInstanceStockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePrePaidInstanceStock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribePrePaidInstanceStockOutcomeCallable EnsClient::describePrePaidInstanceStockCallable(const DescribePrePaidInstanceStockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePrePaidInstanceStockOutcome()>>(
			[this, request]()
			{
			return this->describePrePaidInstanceStock(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribePriceOutcome EnsClient::describePrice(const DescribePriceRequest &request) const
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

void EnsClient::describePriceAsync(const DescribePriceRequest& request, const DescribePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribePriceOutcomeCallable EnsClient::describePriceCallable(const DescribePriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePriceOutcome()>>(
			[this, request]()
			{
			return this->describePrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeRegionIspsOutcome EnsClient::describeRegionIsps(const DescribeRegionIspsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRegionIspsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRegionIspsOutcome(DescribeRegionIspsResult(outcome.result()));
	else
		return DescribeRegionIspsOutcome(outcome.error());
}

void EnsClient::describeRegionIspsAsync(const DescribeRegionIspsRequest& request, const DescribeRegionIspsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegionIsps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeRegionIspsOutcomeCallable EnsClient::describeRegionIspsCallable(const DescribeRegionIspsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionIspsOutcome()>>(
			[this, request]()
			{
			return this->describeRegionIsps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeRegionResourceOutcome EnsClient::describeRegionResource(const DescribeRegionResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRegionResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRegionResourceOutcome(DescribeRegionResourceResult(outcome.result()));
	else
		return DescribeRegionResourceOutcome(outcome.error());
}

void EnsClient::describeRegionResourceAsync(const DescribeRegionResourceRequest& request, const DescribeRegionResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegionResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeRegionResourceOutcomeCallable EnsClient::describeRegionResourceCallable(const DescribeRegionResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionResourceOutcome()>>(
			[this, request]()
			{
			return this->describeRegionResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeReservedResourceOutcome EnsClient::describeReservedResource(const DescribeReservedResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeReservedResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeReservedResourceOutcome(DescribeReservedResourceResult(outcome.result()));
	else
		return DescribeReservedResourceOutcome(outcome.error());
}

void EnsClient::describeReservedResourceAsync(const DescribeReservedResourceRequest& request, const DescribeReservedResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeReservedResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeReservedResourceOutcomeCallable EnsClient::describeReservedResourceCallable(const DescribeReservedResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeReservedResourceOutcome()>>(
			[this, request]()
			{
			return this->describeReservedResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeResourceTimelineOutcome EnsClient::describeResourceTimeline(const DescribeResourceTimelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeResourceTimelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeResourceTimelineOutcome(DescribeResourceTimelineResult(outcome.result()));
	else
		return DescribeResourceTimelineOutcome(outcome.error());
}

void EnsClient::describeResourceTimelineAsync(const DescribeResourceTimelineRequest& request, const DescribeResourceTimelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeResourceTimeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeResourceTimelineOutcomeCallable EnsClient::describeResourceTimelineCallable(const DescribeResourceTimelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeResourceTimelineOutcome()>>(
			[this, request]()
			{
			return this->describeResourceTimeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeSDGOutcome EnsClient::describeSDG(const DescribeSDGRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSDGOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSDGOutcome(DescribeSDGResult(outcome.result()));
	else
		return DescribeSDGOutcome(outcome.error());
}

void EnsClient::describeSDGAsync(const DescribeSDGRequest& request, const DescribeSDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSDG(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeSDGOutcomeCallable EnsClient::describeSDGCallable(const DescribeSDGRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSDGOutcome()>>(
			[this, request]()
			{
			return this->describeSDG(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeSDGDeploymentStatusOutcome EnsClient::describeSDGDeploymentStatus(const DescribeSDGDeploymentStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSDGDeploymentStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSDGDeploymentStatusOutcome(DescribeSDGDeploymentStatusResult(outcome.result()));
	else
		return DescribeSDGDeploymentStatusOutcome(outcome.error());
}

void EnsClient::describeSDGDeploymentStatusAsync(const DescribeSDGDeploymentStatusRequest& request, const DescribeSDGDeploymentStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSDGDeploymentStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeSDGDeploymentStatusOutcomeCallable EnsClient::describeSDGDeploymentStatusCallable(const DescribeSDGDeploymentStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSDGDeploymentStatusOutcome()>>(
			[this, request]()
			{
			return this->describeSDGDeploymentStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeSDGsOutcome EnsClient::describeSDGs(const DescribeSDGsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSDGsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSDGsOutcome(DescribeSDGsResult(outcome.result()));
	else
		return DescribeSDGsOutcome(outcome.error());
}

void EnsClient::describeSDGsAsync(const DescribeSDGsRequest& request, const DescribeSDGsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSDGs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeSDGsOutcomeCallable EnsClient::describeSDGsCallable(const DescribeSDGsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSDGsOutcome()>>(
			[this, request]()
			{
			return this->describeSDGs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeSecondaryPublicIpAddressesOutcome EnsClient::describeSecondaryPublicIpAddresses(const DescribeSecondaryPublicIpAddressesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecondaryPublicIpAddressesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecondaryPublicIpAddressesOutcome(DescribeSecondaryPublicIpAddressesResult(outcome.result()));
	else
		return DescribeSecondaryPublicIpAddressesOutcome(outcome.error());
}

void EnsClient::describeSecondaryPublicIpAddressesAsync(const DescribeSecondaryPublicIpAddressesRequest& request, const DescribeSecondaryPublicIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecondaryPublicIpAddresses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeSecondaryPublicIpAddressesOutcomeCallable EnsClient::describeSecondaryPublicIpAddressesCallable(const DescribeSecondaryPublicIpAddressesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecondaryPublicIpAddressesOutcome()>>(
			[this, request]()
			{
			return this->describeSecondaryPublicIpAddresses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeSecurityGroupAttributeOutcome EnsClient::describeSecurityGroupAttribute(const DescribeSecurityGroupAttributeRequest &request) const
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

void EnsClient::describeSecurityGroupAttributeAsync(const DescribeSecurityGroupAttributeRequest& request, const DescribeSecurityGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityGroupAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeSecurityGroupAttributeOutcomeCallable EnsClient::describeSecurityGroupAttributeCallable(const DescribeSecurityGroupAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityGroupAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityGroupAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeSecurityGroupsOutcome EnsClient::describeSecurityGroups(const DescribeSecurityGroupsRequest &request) const
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

void EnsClient::describeSecurityGroupsAsync(const DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeSecurityGroupsOutcomeCallable EnsClient::describeSecurityGroupsCallable(const DescribeSecurityGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeSelfImagesOutcome EnsClient::describeSelfImages(const DescribeSelfImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSelfImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSelfImagesOutcome(DescribeSelfImagesResult(outcome.result()));
	else
		return DescribeSelfImagesOutcome(outcome.error());
}

void EnsClient::describeSelfImagesAsync(const DescribeSelfImagesRequest& request, const DescribeSelfImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSelfImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeSelfImagesOutcomeCallable EnsClient::describeSelfImagesCallable(const DescribeSelfImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSelfImagesOutcome()>>(
			[this, request]()
			{
			return this->describeSelfImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeServcieScheduleOutcome EnsClient::describeServcieSchedule(const DescribeServcieScheduleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeServcieScheduleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeServcieScheduleOutcome(DescribeServcieScheduleResult(outcome.result()));
	else
		return DescribeServcieScheduleOutcome(outcome.error());
}

void EnsClient::describeServcieScheduleAsync(const DescribeServcieScheduleRequest& request, const DescribeServcieScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeServcieSchedule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeServcieScheduleOutcomeCallable EnsClient::describeServcieScheduleCallable(const DescribeServcieScheduleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeServcieScheduleOutcome()>>(
			[this, request]()
			{
			return this->describeServcieSchedule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeServerLoadBalancerListenMonitorOutcome EnsClient::describeServerLoadBalancerListenMonitor(const DescribeServerLoadBalancerListenMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeServerLoadBalancerListenMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeServerLoadBalancerListenMonitorOutcome(DescribeServerLoadBalancerListenMonitorResult(outcome.result()));
	else
		return DescribeServerLoadBalancerListenMonitorOutcome(outcome.error());
}

void EnsClient::describeServerLoadBalancerListenMonitorAsync(const DescribeServerLoadBalancerListenMonitorRequest& request, const DescribeServerLoadBalancerListenMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeServerLoadBalancerListenMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeServerLoadBalancerListenMonitorOutcomeCallable EnsClient::describeServerLoadBalancerListenMonitorCallable(const DescribeServerLoadBalancerListenMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeServerLoadBalancerListenMonitorOutcome()>>(
			[this, request]()
			{
			return this->describeServerLoadBalancerListenMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeServerLoadBalancerMonitorOutcome EnsClient::describeServerLoadBalancerMonitor(const DescribeServerLoadBalancerMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeServerLoadBalancerMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeServerLoadBalancerMonitorOutcome(DescribeServerLoadBalancerMonitorResult(outcome.result()));
	else
		return DescribeServerLoadBalancerMonitorOutcome(outcome.error());
}

void EnsClient::describeServerLoadBalancerMonitorAsync(const DescribeServerLoadBalancerMonitorRequest& request, const DescribeServerLoadBalancerMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeServerLoadBalancerMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeServerLoadBalancerMonitorOutcomeCallable EnsClient::describeServerLoadBalancerMonitorCallable(const DescribeServerLoadBalancerMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeServerLoadBalancerMonitorOutcome()>>(
			[this, request]()
			{
			return this->describeServerLoadBalancerMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeSnapshotsOutcome EnsClient::describeSnapshots(const DescribeSnapshotsRequest &request) const
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

void EnsClient::describeSnapshotsAsync(const DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSnapshots(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeSnapshotsOutcomeCallable EnsClient::describeSnapshotsCallable(const DescribeSnapshotsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSnapshotsOutcome()>>(
			[this, request]()
			{
			return this->describeSnapshots(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeSnatAttributeOutcome EnsClient::describeSnatAttribute(const DescribeSnatAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSnatAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSnatAttributeOutcome(DescribeSnatAttributeResult(outcome.result()));
	else
		return DescribeSnatAttributeOutcome(outcome.error());
}

void EnsClient::describeSnatAttributeAsync(const DescribeSnatAttributeRequest& request, const DescribeSnatAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSnatAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeSnatAttributeOutcomeCallable EnsClient::describeSnatAttributeCallable(const DescribeSnatAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSnatAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeSnatAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeSnatTableEntriesOutcome EnsClient::describeSnatTableEntries(const DescribeSnatTableEntriesRequest &request) const
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

void EnsClient::describeSnatTableEntriesAsync(const DescribeSnatTableEntriesRequest& request, const DescribeSnatTableEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSnatTableEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeSnatTableEntriesOutcomeCallable EnsClient::describeSnatTableEntriesCallable(const DescribeSnatTableEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSnatTableEntriesOutcome()>>(
			[this, request]()
			{
			return this->describeSnatTableEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeStorageGatewayOutcome EnsClient::describeStorageGateway(const DescribeStorageGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStorageGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStorageGatewayOutcome(DescribeStorageGatewayResult(outcome.result()));
	else
		return DescribeStorageGatewayOutcome(outcome.error());
}

void EnsClient::describeStorageGatewayAsync(const DescribeStorageGatewayRequest& request, const DescribeStorageGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStorageGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeStorageGatewayOutcomeCallable EnsClient::describeStorageGatewayCallable(const DescribeStorageGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStorageGatewayOutcome()>>(
			[this, request]()
			{
			return this->describeStorageGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeStorageVolumeOutcome EnsClient::describeStorageVolume(const DescribeStorageVolumeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStorageVolumeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStorageVolumeOutcome(DescribeStorageVolumeResult(outcome.result()));
	else
		return DescribeStorageVolumeOutcome(outcome.error());
}

void EnsClient::describeStorageVolumeAsync(const DescribeStorageVolumeRequest& request, const DescribeStorageVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStorageVolume(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeStorageVolumeOutcomeCallable EnsClient::describeStorageVolumeCallable(const DescribeStorageVolumeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStorageVolumeOutcome()>>(
			[this, request]()
			{
			return this->describeStorageVolume(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeUserBandWidthDataOutcome EnsClient::describeUserBandWidthData(const DescribeUserBandWidthDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserBandWidthDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserBandWidthDataOutcome(DescribeUserBandWidthDataResult(outcome.result()));
	else
		return DescribeUserBandWidthDataOutcome(outcome.error());
}

void EnsClient::describeUserBandWidthDataAsync(const DescribeUserBandWidthDataRequest& request, const DescribeUserBandWidthDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserBandWidthData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeUserBandWidthDataOutcomeCallable EnsClient::describeUserBandWidthDataCallable(const DescribeUserBandWidthDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserBandWidthDataOutcome()>>(
			[this, request]()
			{
			return this->describeUserBandWidthData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeVSwitchAttributesOutcome EnsClient::describeVSwitchAttributes(const DescribeVSwitchAttributesRequest &request) const
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

void EnsClient::describeVSwitchAttributesAsync(const DescribeVSwitchAttributesRequest& request, const DescribeVSwitchAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVSwitchAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeVSwitchAttributesOutcomeCallable EnsClient::describeVSwitchAttributesCallable(const DescribeVSwitchAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVSwitchAttributesOutcome()>>(
			[this, request]()
			{
			return this->describeVSwitchAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DescribeVSwitchesOutcome EnsClient::describeVSwitches(const DescribeVSwitchesRequest &request) const
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

void EnsClient::describeVSwitchesAsync(const DescribeVSwitchesRequest& request, const DescribeVSwitchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVSwitches(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeVSwitchesOutcomeCallable EnsClient::describeVSwitchesCallable(const DescribeVSwitchesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVSwitchesOutcome()>>(
			[this, request]()
			{
			return this->describeVSwitches(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DetachDiskOutcome EnsClient::detachDisk(const DetachDiskRequest &request) const
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

void EnsClient::detachDiskAsync(const DetachDiskRequest& request, const DetachDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DetachDiskOutcomeCallable EnsClient::detachDiskCallable(const DetachDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachDiskOutcome()>>(
			[this, request]()
			{
			return this->detachDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DetachInstanceSDGOutcome EnsClient::detachInstanceSDG(const DetachInstanceSDGRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachInstanceSDGOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachInstanceSDGOutcome(DetachInstanceSDGResult(outcome.result()));
	else
		return DetachInstanceSDGOutcome(outcome.error());
}

void EnsClient::detachInstanceSDGAsync(const DetachInstanceSDGRequest& request, const DetachInstanceSDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachInstanceSDG(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DetachInstanceSDGOutcomeCallable EnsClient::detachInstanceSDGCallable(const DetachInstanceSDGRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachInstanceSDGOutcome()>>(
			[this, request]()
			{
			return this->detachInstanceSDG(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DetachNetworkInterfaceOutcome EnsClient::detachNetworkInterface(const DetachNetworkInterfaceRequest &request) const
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

void EnsClient::detachNetworkInterfaceAsync(const DetachNetworkInterfaceRequest& request, const DetachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachNetworkInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DetachNetworkInterfaceOutcomeCallable EnsClient::detachNetworkInterfaceCallable(const DetachNetworkInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachNetworkInterfaceOutcome()>>(
			[this, request]()
			{
			return this->detachNetworkInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::DistApplicationDataOutcome EnsClient::distApplicationData(const DistApplicationDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DistApplicationDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DistApplicationDataOutcome(DistApplicationDataResult(outcome.result()));
	else
		return DistApplicationDataOutcome(outcome.error());
}

void EnsClient::distApplicationDataAsync(const DistApplicationDataRequest& request, const DistApplicationDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, distApplicationData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DistApplicationDataOutcomeCallable EnsClient::distApplicationDataCallable(const DistApplicationDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DistApplicationDataOutcome()>>(
			[this, request]()
			{
			return this->distApplicationData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ExportBillDetailDataOutcome EnsClient::exportBillDetailData(const ExportBillDetailDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportBillDetailDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportBillDetailDataOutcome(ExportBillDetailDataResult(outcome.result()));
	else
		return ExportBillDetailDataOutcome(outcome.error());
}

void EnsClient::exportBillDetailDataAsync(const ExportBillDetailDataRequest& request, const ExportBillDetailDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportBillDetailData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ExportBillDetailDataOutcomeCallable EnsClient::exportBillDetailDataCallable(const ExportBillDetailDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportBillDetailDataOutcome()>>(
			[this, request]()
			{
			return this->exportBillDetailData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ExportImageOutcome EnsClient::exportImage(const ExportImageRequest &request) const
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

void EnsClient::exportImageAsync(const ExportImageRequest& request, const ExportImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ExportImageOutcomeCallable EnsClient::exportImageCallable(const ExportImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportImageOutcome()>>(
			[this, request]()
			{
			return this->exportImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ExportMeasurementDataOutcome EnsClient::exportMeasurementData(const ExportMeasurementDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportMeasurementDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportMeasurementDataOutcome(ExportMeasurementDataResult(outcome.result()));
	else
		return ExportMeasurementDataOutcome(outcome.error());
}

void EnsClient::exportMeasurementDataAsync(const ExportMeasurementDataRequest& request, const ExportMeasurementDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportMeasurementData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ExportMeasurementDataOutcomeCallable EnsClient::exportMeasurementDataCallable(const ExportMeasurementDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportMeasurementDataOutcome()>>(
			[this, request]()
			{
			return this->exportMeasurementData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::GetBucketAclOutcome EnsClient::getBucketAcl(const GetBucketAclRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBucketAclOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBucketAclOutcome(GetBucketAclResult(outcome.result()));
	else
		return GetBucketAclOutcome(outcome.error());
}

void EnsClient::getBucketAclAsync(const GetBucketAclRequest& request, const GetBucketAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBucketAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::GetBucketAclOutcomeCallable EnsClient::getBucketAclCallable(const GetBucketAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBucketAclOutcome()>>(
			[this, request]()
			{
			return this->getBucketAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::GetBucketInfoOutcome EnsClient::getBucketInfo(const GetBucketInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBucketInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBucketInfoOutcome(GetBucketInfoResult(outcome.result()));
	else
		return GetBucketInfoOutcome(outcome.error());
}

void EnsClient::getBucketInfoAsync(const GetBucketInfoRequest& request, const GetBucketInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBucketInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::GetBucketInfoOutcomeCallable EnsClient::getBucketInfoCallable(const GetBucketInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBucketInfoOutcome()>>(
			[this, request]()
			{
			return this->getBucketInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::GetBucketLifecycleOutcome EnsClient::getBucketLifecycle(const GetBucketLifecycleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBucketLifecycleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBucketLifecycleOutcome(GetBucketLifecycleResult(outcome.result()));
	else
		return GetBucketLifecycleOutcome(outcome.error());
}

void EnsClient::getBucketLifecycleAsync(const GetBucketLifecycleRequest& request, const GetBucketLifecycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBucketLifecycle(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::GetBucketLifecycleOutcomeCallable EnsClient::getBucketLifecycleCallable(const GetBucketLifecycleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBucketLifecycleOutcome()>>(
			[this, request]()
			{
			return this->getBucketLifecycle(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::GetDeviceInternetPortOutcome EnsClient::getDeviceInternetPort(const GetDeviceInternetPortRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDeviceInternetPortOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDeviceInternetPortOutcome(GetDeviceInternetPortResult(outcome.result()));
	else
		return GetDeviceInternetPortOutcome(outcome.error());
}

void EnsClient::getDeviceInternetPortAsync(const GetDeviceInternetPortRequest& request, const GetDeviceInternetPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDeviceInternetPort(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::GetDeviceInternetPortOutcomeCallable EnsClient::getDeviceInternetPortCallable(const GetDeviceInternetPortRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDeviceInternetPortOutcome()>>(
			[this, request]()
			{
			return this->getDeviceInternetPort(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::GetOssStorageAndAccByBucketsOutcome EnsClient::getOssStorageAndAccByBuckets(const GetOssStorageAndAccByBucketsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOssStorageAndAccByBucketsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOssStorageAndAccByBucketsOutcome(GetOssStorageAndAccByBucketsResult(outcome.result()));
	else
		return GetOssStorageAndAccByBucketsOutcome(outcome.error());
}

void EnsClient::getOssStorageAndAccByBucketsAsync(const GetOssStorageAndAccByBucketsRequest& request, const GetOssStorageAndAccByBucketsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOssStorageAndAccByBuckets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::GetOssStorageAndAccByBucketsOutcomeCallable EnsClient::getOssStorageAndAccByBucketsCallable(const GetOssStorageAndAccByBucketsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOssStorageAndAccByBucketsOutcome()>>(
			[this, request]()
			{
			return this->getOssStorageAndAccByBuckets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::GetOssUsageDataOutcome EnsClient::getOssUsageData(const GetOssUsageDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOssUsageDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOssUsageDataOutcome(GetOssUsageDataResult(outcome.result()));
	else
		return GetOssUsageDataOutcome(outcome.error());
}

void EnsClient::getOssUsageDataAsync(const GetOssUsageDataRequest& request, const GetOssUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOssUsageData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::GetOssUsageDataOutcomeCallable EnsClient::getOssUsageDataCallable(const GetOssUsageDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOssUsageDataOutcome()>>(
			[this, request]()
			{
			return this->getOssUsageData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ImportKeyPairOutcome EnsClient::importKeyPair(const ImportKeyPairRequest &request) const
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

void EnsClient::importKeyPairAsync(const ImportKeyPairRequest& request, const ImportKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importKeyPair(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ImportKeyPairOutcomeCallable EnsClient::importKeyPairCallable(const ImportKeyPairRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportKeyPairOutcome()>>(
			[this, request]()
			{
			return this->importKeyPair(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::JoinPublicIpsToEpnInstanceOutcome EnsClient::joinPublicIpsToEpnInstance(const JoinPublicIpsToEpnInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return JoinPublicIpsToEpnInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return JoinPublicIpsToEpnInstanceOutcome(JoinPublicIpsToEpnInstanceResult(outcome.result()));
	else
		return JoinPublicIpsToEpnInstanceOutcome(outcome.error());
}

void EnsClient::joinPublicIpsToEpnInstanceAsync(const JoinPublicIpsToEpnInstanceRequest& request, const JoinPublicIpsToEpnInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, joinPublicIpsToEpnInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::JoinPublicIpsToEpnInstanceOutcomeCallable EnsClient::joinPublicIpsToEpnInstanceCallable(const JoinPublicIpsToEpnInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<JoinPublicIpsToEpnInstanceOutcome()>>(
			[this, request]()
			{
			return this->joinPublicIpsToEpnInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::JoinSecurityGroupOutcome EnsClient::joinSecurityGroup(const JoinSecurityGroupRequest &request) const
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

void EnsClient::joinSecurityGroupAsync(const JoinSecurityGroupRequest& request, const JoinSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, joinSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::JoinSecurityGroupOutcomeCallable EnsClient::joinSecurityGroupCallable(const JoinSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<JoinSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->joinSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::JoinVSwitchesToEpnInstanceOutcome EnsClient::joinVSwitchesToEpnInstance(const JoinVSwitchesToEpnInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return JoinVSwitchesToEpnInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return JoinVSwitchesToEpnInstanceOutcome(JoinVSwitchesToEpnInstanceResult(outcome.result()));
	else
		return JoinVSwitchesToEpnInstanceOutcome(outcome.error());
}

void EnsClient::joinVSwitchesToEpnInstanceAsync(const JoinVSwitchesToEpnInstanceRequest& request, const JoinVSwitchesToEpnInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, joinVSwitchesToEpnInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::JoinVSwitchesToEpnInstanceOutcomeCallable EnsClient::joinVSwitchesToEpnInstanceCallable(const JoinVSwitchesToEpnInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<JoinVSwitchesToEpnInstanceOutcome()>>(
			[this, request]()
			{
			return this->joinVSwitchesToEpnInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::LeaveSecurityGroupOutcome EnsClient::leaveSecurityGroup(const LeaveSecurityGroupRequest &request) const
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

void EnsClient::leaveSecurityGroupAsync(const LeaveSecurityGroupRequest& request, const LeaveSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, leaveSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::LeaveSecurityGroupOutcomeCallable EnsClient::leaveSecurityGroupCallable(const LeaveSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LeaveSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->leaveSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ListApplicationsOutcome EnsClient::listApplications(const ListApplicationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationsOutcome(ListApplicationsResult(outcome.result()));
	else
		return ListApplicationsOutcome(outcome.error());
}

void EnsClient::listApplicationsAsync(const ListApplicationsRequest& request, const ListApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplications(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ListApplicationsOutcomeCallable EnsClient::listApplicationsCallable(const ListApplicationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationsOutcome()>>(
			[this, request]()
			{
			return this->listApplications(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ListBucketsOutcome EnsClient::listBuckets(const ListBucketsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBucketsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBucketsOutcome(ListBucketsResult(outcome.result()));
	else
		return ListBucketsOutcome(outcome.error());
}

void EnsClient::listBucketsAsync(const ListBucketsRequest& request, const ListBucketsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBuckets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ListBucketsOutcomeCallable EnsClient::listBucketsCallable(const ListBucketsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBucketsOutcome()>>(
			[this, request]()
			{
			return this->listBuckets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ListObjectsOutcome EnsClient::listObjects(const ListObjectsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListObjectsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListObjectsOutcome(ListObjectsResult(outcome.result()));
	else
		return ListObjectsOutcome(outcome.error());
}

void EnsClient::listObjectsAsync(const ListObjectsRequest& request, const ListObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listObjects(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ListObjectsOutcomeCallable EnsClient::listObjectsCallable(const ListObjectsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListObjectsOutcome()>>(
			[this, request]()
			{
			return this->listObjects(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ListProductAbilitiesOutcome EnsClient::listProductAbilities(const ListProductAbilitiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProductAbilitiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProductAbilitiesOutcome(ListProductAbilitiesResult(outcome.result()));
	else
		return ListProductAbilitiesOutcome(outcome.error());
}

void EnsClient::listProductAbilitiesAsync(const ListProductAbilitiesRequest& request, const ListProductAbilitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProductAbilities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ListProductAbilitiesOutcomeCallable EnsClient::listProductAbilitiesCallable(const ListProductAbilitiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProductAbilitiesOutcome()>>(
			[this, request]()
			{
			return this->listProductAbilities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ListTagResourcesOutcome EnsClient::listTagResources(const ListTagResourcesRequest &request) const
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

void EnsClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ListTagResourcesOutcomeCallable EnsClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ModifyEnsEipAddressAttributeOutcome EnsClient::modifyEnsEipAddressAttribute(const ModifyEnsEipAddressAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyEnsEipAddressAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyEnsEipAddressAttributeOutcome(ModifyEnsEipAddressAttributeResult(outcome.result()));
	else
		return ModifyEnsEipAddressAttributeOutcome(outcome.error());
}

void EnsClient::modifyEnsEipAddressAttributeAsync(const ModifyEnsEipAddressAttributeRequest& request, const ModifyEnsEipAddressAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyEnsEipAddressAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ModifyEnsEipAddressAttributeOutcomeCallable EnsClient::modifyEnsEipAddressAttributeCallable(const ModifyEnsEipAddressAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyEnsEipAddressAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyEnsEipAddressAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ModifyEnsRouteEntryOutcome EnsClient::modifyEnsRouteEntry(const ModifyEnsRouteEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyEnsRouteEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyEnsRouteEntryOutcome(ModifyEnsRouteEntryResult(outcome.result()));
	else
		return ModifyEnsRouteEntryOutcome(outcome.error());
}

void EnsClient::modifyEnsRouteEntryAsync(const ModifyEnsRouteEntryRequest& request, const ModifyEnsRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyEnsRouteEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ModifyEnsRouteEntryOutcomeCallable EnsClient::modifyEnsRouteEntryCallable(const ModifyEnsRouteEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyEnsRouteEntryOutcome()>>(
			[this, request]()
			{
			return this->modifyEnsRouteEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ModifyEpnInstanceOutcome EnsClient::modifyEpnInstance(const ModifyEpnInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyEpnInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyEpnInstanceOutcome(ModifyEpnInstanceResult(outcome.result()));
	else
		return ModifyEpnInstanceOutcome(outcome.error());
}

void EnsClient::modifyEpnInstanceAsync(const ModifyEpnInstanceRequest& request, const ModifyEpnInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyEpnInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ModifyEpnInstanceOutcomeCallable EnsClient::modifyEpnInstanceCallable(const ModifyEpnInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyEpnInstanceOutcome()>>(
			[this, request]()
			{
			return this->modifyEpnInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ModifyFileSystemOutcome EnsClient::modifyFileSystem(const ModifyFileSystemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyFileSystemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyFileSystemOutcome(ModifyFileSystemResult(outcome.result()));
	else
		return ModifyFileSystemOutcome(outcome.error());
}

void EnsClient::modifyFileSystemAsync(const ModifyFileSystemRequest& request, const ModifyFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyFileSystem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ModifyFileSystemOutcomeCallable EnsClient::modifyFileSystemCallable(const ModifyFileSystemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyFileSystemOutcome()>>(
			[this, request]()
			{
			return this->modifyFileSystem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ModifyForwardEntryOutcome EnsClient::modifyForwardEntry(const ModifyForwardEntryRequest &request) const
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

void EnsClient::modifyForwardEntryAsync(const ModifyForwardEntryRequest& request, const ModifyForwardEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyForwardEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ModifyForwardEntryOutcomeCallable EnsClient::modifyForwardEntryCallable(const ModifyForwardEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyForwardEntryOutcome()>>(
			[this, request]()
			{
			return this->modifyForwardEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ModifyHaVipAttributeOutcome EnsClient::modifyHaVipAttribute(const ModifyHaVipAttributeRequest &request) const
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

void EnsClient::modifyHaVipAttributeAsync(const ModifyHaVipAttributeRequest& request, const ModifyHaVipAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyHaVipAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ModifyHaVipAttributeOutcomeCallable EnsClient::modifyHaVipAttributeCallable(const ModifyHaVipAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyHaVipAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyHaVipAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ModifyImageAttributeOutcome EnsClient::modifyImageAttribute(const ModifyImageAttributeRequest &request) const
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

void EnsClient::modifyImageAttributeAsync(const ModifyImageAttributeRequest& request, const ModifyImageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyImageAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ModifyImageAttributeOutcomeCallable EnsClient::modifyImageAttributeCallable(const ModifyImageAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyImageAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyImageAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ModifyImageSharePermissionOutcome EnsClient::modifyImageSharePermission(const ModifyImageSharePermissionRequest &request) const
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

void EnsClient::modifyImageSharePermissionAsync(const ModifyImageSharePermissionRequest& request, const ModifyImageSharePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyImageSharePermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ModifyImageSharePermissionOutcomeCallable EnsClient::modifyImageSharePermissionCallable(const ModifyImageSharePermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyImageSharePermissionOutcome()>>(
			[this, request]()
			{
			return this->modifyImageSharePermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ModifyInstanceAttributeOutcome EnsClient::modifyInstanceAttribute(const ModifyInstanceAttributeRequest &request) const
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

void EnsClient::modifyInstanceAttributeAsync(const ModifyInstanceAttributeRequest& request, const ModifyInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ModifyInstanceAttributeOutcomeCallable EnsClient::modifyInstanceAttributeCallable(const ModifyInstanceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ModifyInstanceAutoRenewAttributeOutcome EnsClient::modifyInstanceAutoRenewAttribute(const ModifyInstanceAutoRenewAttributeRequest &request) const
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

void EnsClient::modifyInstanceAutoRenewAttributeAsync(const ModifyInstanceAutoRenewAttributeRequest& request, const ModifyInstanceAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceAutoRenewAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ModifyInstanceAutoRenewAttributeOutcomeCallable EnsClient::modifyInstanceAutoRenewAttributeCallable(const ModifyInstanceAutoRenewAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceAutoRenewAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceAutoRenewAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ModifyInstanceBootConfigurationOutcome EnsClient::modifyInstanceBootConfiguration(const ModifyInstanceBootConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceBootConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceBootConfigurationOutcome(ModifyInstanceBootConfigurationResult(outcome.result()));
	else
		return ModifyInstanceBootConfigurationOutcome(outcome.error());
}

void EnsClient::modifyInstanceBootConfigurationAsync(const ModifyInstanceBootConfigurationRequest& request, const ModifyInstanceBootConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceBootConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ModifyInstanceBootConfigurationOutcomeCallable EnsClient::modifyInstanceBootConfigurationCallable(const ModifyInstanceBootConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceBootConfigurationOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceBootConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ModifyInstanceChargeTypeOutcome EnsClient::modifyInstanceChargeType(const ModifyInstanceChargeTypeRequest &request) const
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

void EnsClient::modifyInstanceChargeTypeAsync(const ModifyInstanceChargeTypeRequest& request, const ModifyInstanceChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceChargeType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ModifyInstanceChargeTypeOutcomeCallable EnsClient::modifyInstanceChargeTypeCallable(const ModifyInstanceChargeTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceChargeTypeOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceChargeType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ModifyLoadBalancerAttributeOutcome EnsClient::modifyLoadBalancerAttribute(const ModifyLoadBalancerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLoadBalancerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLoadBalancerAttributeOutcome(ModifyLoadBalancerAttributeResult(outcome.result()));
	else
		return ModifyLoadBalancerAttributeOutcome(outcome.error());
}

void EnsClient::modifyLoadBalancerAttributeAsync(const ModifyLoadBalancerAttributeRequest& request, const ModifyLoadBalancerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLoadBalancerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ModifyLoadBalancerAttributeOutcomeCallable EnsClient::modifyLoadBalancerAttributeCallable(const ModifyLoadBalancerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLoadBalancerAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyLoadBalancerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ModifyNetworkAttributeOutcome EnsClient::modifyNetworkAttribute(const ModifyNetworkAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyNetworkAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyNetworkAttributeOutcome(ModifyNetworkAttributeResult(outcome.result()));
	else
		return ModifyNetworkAttributeOutcome(outcome.error());
}

void EnsClient::modifyNetworkAttributeAsync(const ModifyNetworkAttributeRequest& request, const ModifyNetworkAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyNetworkAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ModifyNetworkAttributeOutcomeCallable EnsClient::modifyNetworkAttributeCallable(const ModifyNetworkAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyNetworkAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyNetworkAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ModifyNetworkInterfaceAttributeOutcome EnsClient::modifyNetworkInterfaceAttribute(const ModifyNetworkInterfaceAttributeRequest &request) const
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

void EnsClient::modifyNetworkInterfaceAttributeAsync(const ModifyNetworkInterfaceAttributeRequest& request, const ModifyNetworkInterfaceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyNetworkInterfaceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ModifyNetworkInterfaceAttributeOutcomeCallable EnsClient::modifyNetworkInterfaceAttributeCallable(const ModifyNetworkInterfaceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyNetworkInterfaceAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyNetworkInterfaceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ModifyPrepayInstanceSpecOutcome EnsClient::modifyPrepayInstanceSpec(const ModifyPrepayInstanceSpecRequest &request) const
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

void EnsClient::modifyPrepayInstanceSpecAsync(const ModifyPrepayInstanceSpecRequest& request, const ModifyPrepayInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPrepayInstanceSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ModifyPrepayInstanceSpecOutcomeCallable EnsClient::modifyPrepayInstanceSpecCallable(const ModifyPrepayInstanceSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPrepayInstanceSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyPrepayInstanceSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ModifySecurityGroupAttributeOutcome EnsClient::modifySecurityGroupAttribute(const ModifySecurityGroupAttributeRequest &request) const
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

void EnsClient::modifySecurityGroupAttributeAsync(const ModifySecurityGroupAttributeRequest& request, const ModifySecurityGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySecurityGroupAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ModifySecurityGroupAttributeOutcomeCallable EnsClient::modifySecurityGroupAttributeCallable(const ModifySecurityGroupAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySecurityGroupAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifySecurityGroupAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ModifySnapshotAttributeOutcome EnsClient::modifySnapshotAttribute(const ModifySnapshotAttributeRequest &request) const
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

void EnsClient::modifySnapshotAttributeAsync(const ModifySnapshotAttributeRequest& request, const ModifySnapshotAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySnapshotAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ModifySnapshotAttributeOutcomeCallable EnsClient::modifySnapshotAttributeCallable(const ModifySnapshotAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySnapshotAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifySnapshotAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ModifySnatEntryOutcome EnsClient::modifySnatEntry(const ModifySnatEntryRequest &request) const
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

void EnsClient::modifySnatEntryAsync(const ModifySnatEntryRequest& request, const ModifySnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySnatEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ModifySnatEntryOutcomeCallable EnsClient::modifySnatEntryCallable(const ModifySnatEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySnatEntryOutcome()>>(
			[this, request]()
			{
			return this->modifySnatEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ModifyVSwitchAttributeOutcome EnsClient::modifyVSwitchAttribute(const ModifyVSwitchAttributeRequest &request) const
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

void EnsClient::modifyVSwitchAttributeAsync(const ModifyVSwitchAttributeRequest& request, const ModifyVSwitchAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVSwitchAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ModifyVSwitchAttributeOutcomeCallable EnsClient::modifyVSwitchAttributeCallable(const ModifyVSwitchAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVSwitchAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyVSwitchAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::MountInstanceSDGOutcome EnsClient::mountInstanceSDG(const MountInstanceSDGRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MountInstanceSDGOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MountInstanceSDGOutcome(MountInstanceSDGResult(outcome.result()));
	else
		return MountInstanceSDGOutcome(outcome.error());
}

void EnsClient::mountInstanceSDGAsync(const MountInstanceSDGRequest& request, const MountInstanceSDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, mountInstanceSDG(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::MountInstanceSDGOutcomeCallable EnsClient::mountInstanceSDGCallable(const MountInstanceSDGRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MountInstanceSDGOutcome()>>(
			[this, request]()
			{
			return this->mountInstanceSDG(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::PreloadRegionSDGOutcome EnsClient::preloadRegionSDG(const PreloadRegionSDGRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PreloadRegionSDGOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PreloadRegionSDGOutcome(PreloadRegionSDGResult(outcome.result()));
	else
		return PreloadRegionSDGOutcome(outcome.error());
}

void EnsClient::preloadRegionSDGAsync(const PreloadRegionSDGRequest& request, const PreloadRegionSDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, preloadRegionSDG(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::PreloadRegionSDGOutcomeCallable EnsClient::preloadRegionSDGCallable(const PreloadRegionSDGRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PreloadRegionSDGOutcome()>>(
			[this, request]()
			{
			return this->preloadRegionSDG(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::PrepareUploadOutcome EnsClient::prepareUpload(const PrepareUploadRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PrepareUploadOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PrepareUploadOutcome(PrepareUploadResult(outcome.result()));
	else
		return PrepareUploadOutcome(outcome.error());
}

void EnsClient::prepareUploadAsync(const PrepareUploadRequest& request, const PrepareUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, prepareUpload(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::PrepareUploadOutcomeCallable EnsClient::prepareUploadCallable(const PrepareUploadRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PrepareUploadOutcome()>>(
			[this, request]()
			{
			return this->prepareUpload(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::PushApplicationDataOutcome EnsClient::pushApplicationData(const PushApplicationDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PushApplicationDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PushApplicationDataOutcome(PushApplicationDataResult(outcome.result()));
	else
		return PushApplicationDataOutcome(outcome.error());
}

void EnsClient::pushApplicationDataAsync(const PushApplicationDataRequest& request, const PushApplicationDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pushApplicationData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::PushApplicationDataOutcomeCallable EnsClient::pushApplicationDataCallable(const PushApplicationDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PushApplicationDataOutcome()>>(
			[this, request]()
			{
			return this->pushApplicationData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::PutBucketOutcome EnsClient::putBucket(const PutBucketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutBucketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutBucketOutcome(PutBucketResult(outcome.result()));
	else
		return PutBucketOutcome(outcome.error());
}

void EnsClient::putBucketAsync(const PutBucketRequest& request, const PutBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putBucket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::PutBucketOutcomeCallable EnsClient::putBucketCallable(const PutBucketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutBucketOutcome()>>(
			[this, request]()
			{
			return this->putBucket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::PutBucketAclOutcome EnsClient::putBucketAcl(const PutBucketAclRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutBucketAclOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutBucketAclOutcome(PutBucketAclResult(outcome.result()));
	else
		return PutBucketAclOutcome(outcome.error());
}

void EnsClient::putBucketAclAsync(const PutBucketAclRequest& request, const PutBucketAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putBucketAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::PutBucketAclOutcomeCallable EnsClient::putBucketAclCallable(const PutBucketAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutBucketAclOutcome()>>(
			[this, request]()
			{
			return this->putBucketAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::PutBucketLifecycleOutcome EnsClient::putBucketLifecycle(const PutBucketLifecycleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutBucketLifecycleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutBucketLifecycleOutcome(PutBucketLifecycleResult(outcome.result()));
	else
		return PutBucketLifecycleOutcome(outcome.error());
}

void EnsClient::putBucketLifecycleAsync(const PutBucketLifecycleRequest& request, const PutBucketLifecycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putBucketLifecycle(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::PutBucketLifecycleOutcomeCallable EnsClient::putBucketLifecycleCallable(const PutBucketLifecycleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutBucketLifecycleOutcome()>>(
			[this, request]()
			{
			return this->putBucketLifecycle(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ReInitDiskOutcome EnsClient::reInitDisk(const ReInitDiskRequest &request) const
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

void EnsClient::reInitDiskAsync(const ReInitDiskRequest& request, const ReInitDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reInitDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ReInitDiskOutcomeCallable EnsClient::reInitDiskCallable(const ReInitDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReInitDiskOutcome()>>(
			[this, request]()
			{
			return this->reInitDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::RebootAICInstanceOutcome EnsClient::rebootAICInstance(const RebootAICInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RebootAICInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RebootAICInstanceOutcome(RebootAICInstanceResult(outcome.result()));
	else
		return RebootAICInstanceOutcome(outcome.error());
}

void EnsClient::rebootAICInstanceAsync(const RebootAICInstanceRequest& request, const RebootAICInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rebootAICInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::RebootAICInstanceOutcomeCallable EnsClient::rebootAICInstanceCallable(const RebootAICInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RebootAICInstanceOutcome()>>(
			[this, request]()
			{
			return this->rebootAICInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::RebootARMServerInstanceOutcome EnsClient::rebootARMServerInstance(const RebootARMServerInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RebootARMServerInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RebootARMServerInstanceOutcome(RebootARMServerInstanceResult(outcome.result()));
	else
		return RebootARMServerInstanceOutcome(outcome.error());
}

void EnsClient::rebootARMServerInstanceAsync(const RebootARMServerInstanceRequest& request, const RebootARMServerInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rebootARMServerInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::RebootARMServerInstanceOutcomeCallable EnsClient::rebootARMServerInstanceCallable(const RebootARMServerInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RebootARMServerInstanceOutcome()>>(
			[this, request]()
			{
			return this->rebootARMServerInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::RebootInstanceOutcome EnsClient::rebootInstance(const RebootInstanceRequest &request) const
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

void EnsClient::rebootInstanceAsync(const RebootInstanceRequest& request, const RebootInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rebootInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::RebootInstanceOutcomeCallable EnsClient::rebootInstanceCallable(const RebootInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RebootInstanceOutcome()>>(
			[this, request]()
			{
			return this->rebootInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::RebootInstancesOutcome EnsClient::rebootInstances(const RebootInstancesRequest &request) const
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

void EnsClient::rebootInstancesAsync(const RebootInstancesRequest& request, const RebootInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rebootInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::RebootInstancesOutcomeCallable EnsClient::rebootInstancesCallable(const RebootInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RebootInstancesOutcome()>>(
			[this, request]()
			{
			return this->rebootInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::RecoverAICInstanceOutcome EnsClient::recoverAICInstance(const RecoverAICInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecoverAICInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecoverAICInstanceOutcome(RecoverAICInstanceResult(outcome.result()));
	else
		return RecoverAICInstanceOutcome(outcome.error());
}

void EnsClient::recoverAICInstanceAsync(const RecoverAICInstanceRequest& request, const RecoverAICInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recoverAICInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::RecoverAICInstanceOutcomeCallable EnsClient::recoverAICInstanceCallable(const RecoverAICInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecoverAICInstanceOutcome()>>(
			[this, request]()
			{
			return this->recoverAICInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ReinitInstanceOutcome EnsClient::reinitInstance(const ReinitInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReinitInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReinitInstanceOutcome(ReinitInstanceResult(outcome.result()));
	else
		return ReinitInstanceOutcome(outcome.error());
}

void EnsClient::reinitInstanceAsync(const ReinitInstanceRequest& request, const ReinitInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reinitInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ReinitInstanceOutcomeCallable EnsClient::reinitInstanceCallable(const ReinitInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReinitInstanceOutcome()>>(
			[this, request]()
			{
			return this->reinitInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ReinitInstancesOutcome EnsClient::reinitInstances(const ReinitInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReinitInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReinitInstancesOutcome(ReinitInstancesResult(outcome.result()));
	else
		return ReinitInstancesOutcome(outcome.error());
}

void EnsClient::reinitInstancesAsync(const ReinitInstancesRequest& request, const ReinitInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reinitInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ReinitInstancesOutcomeCallable EnsClient::reinitInstancesCallable(const ReinitInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReinitInstancesOutcome()>>(
			[this, request]()
			{
			return this->reinitInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ReleaseAICInstanceOutcome EnsClient::releaseAICInstance(const ReleaseAICInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseAICInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseAICInstanceOutcome(ReleaseAICInstanceResult(outcome.result()));
	else
		return ReleaseAICInstanceOutcome(outcome.error());
}

void EnsClient::releaseAICInstanceAsync(const ReleaseAICInstanceRequest& request, const ReleaseAICInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseAICInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ReleaseAICInstanceOutcomeCallable EnsClient::releaseAICInstanceCallable(const ReleaseAICInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseAICInstanceOutcome()>>(
			[this, request]()
			{
			return this->releaseAICInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ReleaseARMServerInstanceOutcome EnsClient::releaseARMServerInstance(const ReleaseARMServerInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseARMServerInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseARMServerInstanceOutcome(ReleaseARMServerInstanceResult(outcome.result()));
	else
		return ReleaseARMServerInstanceOutcome(outcome.error());
}

void EnsClient::releaseARMServerInstanceAsync(const ReleaseARMServerInstanceRequest& request, const ReleaseARMServerInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseARMServerInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ReleaseARMServerInstanceOutcomeCallable EnsClient::releaseARMServerInstanceCallable(const ReleaseARMServerInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseARMServerInstanceOutcome()>>(
			[this, request]()
			{
			return this->releaseARMServerInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ReleaseInstanceOutcome EnsClient::releaseInstance(const ReleaseInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseInstanceOutcome(ReleaseInstanceResult(outcome.result()));
	else
		return ReleaseInstanceOutcome(outcome.error());
}

void EnsClient::releaseInstanceAsync(const ReleaseInstanceRequest& request, const ReleaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ReleaseInstanceOutcomeCallable EnsClient::releaseInstanceCallable(const ReleaseInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseInstanceOutcome()>>(
			[this, request]()
			{
			return this->releaseInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ReleasePostPaidInstanceOutcome EnsClient::releasePostPaidInstance(const ReleasePostPaidInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleasePostPaidInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleasePostPaidInstanceOutcome(ReleasePostPaidInstanceResult(outcome.result()));
	else
		return ReleasePostPaidInstanceOutcome(outcome.error());
}

void EnsClient::releasePostPaidInstanceAsync(const ReleasePostPaidInstanceRequest& request, const ReleasePostPaidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releasePostPaidInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ReleasePostPaidInstanceOutcomeCallable EnsClient::releasePostPaidInstanceCallable(const ReleasePostPaidInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleasePostPaidInstanceOutcome()>>(
			[this, request]()
			{
			return this->releasePostPaidInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ReleasePrePaidInstanceOutcome EnsClient::releasePrePaidInstance(const ReleasePrePaidInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleasePrePaidInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleasePrePaidInstanceOutcome(ReleasePrePaidInstanceResult(outcome.result()));
	else
		return ReleasePrePaidInstanceOutcome(outcome.error());
}

void EnsClient::releasePrePaidInstanceAsync(const ReleasePrePaidInstanceRequest& request, const ReleasePrePaidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releasePrePaidInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ReleasePrePaidInstanceOutcomeCallable EnsClient::releasePrePaidInstanceCallable(const ReleasePrePaidInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleasePrePaidInstanceOutcome()>>(
			[this, request]()
			{
			return this->releasePrePaidInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::RemoveBackendServersOutcome EnsClient::removeBackendServers(const RemoveBackendServersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveBackendServersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveBackendServersOutcome(RemoveBackendServersResult(outcome.result()));
	else
		return RemoveBackendServersOutcome(outcome.error());
}

void EnsClient::removeBackendServersAsync(const RemoveBackendServersRequest& request, const RemoveBackendServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeBackendServers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::RemoveBackendServersOutcomeCallable EnsClient::removeBackendServersCallable(const RemoveBackendServersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveBackendServersOutcome()>>(
			[this, request]()
			{
			return this->removeBackendServers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::RemoveInstanceSDGOutcome EnsClient::removeInstanceSDG(const RemoveInstanceSDGRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveInstanceSDGOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveInstanceSDGOutcome(RemoveInstanceSDGResult(outcome.result()));
	else
		return RemoveInstanceSDGOutcome(outcome.error());
}

void EnsClient::removeInstanceSDGAsync(const RemoveInstanceSDGRequest& request, const RemoveInstanceSDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeInstanceSDG(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::RemoveInstanceSDGOutcomeCallable EnsClient::removeInstanceSDGCallable(const RemoveInstanceSDGRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveInstanceSDGOutcome()>>(
			[this, request]()
			{
			return this->removeInstanceSDG(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::RemovePublicIpsFromEpnInstanceOutcome EnsClient::removePublicIpsFromEpnInstance(const RemovePublicIpsFromEpnInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemovePublicIpsFromEpnInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemovePublicIpsFromEpnInstanceOutcome(RemovePublicIpsFromEpnInstanceResult(outcome.result()));
	else
		return RemovePublicIpsFromEpnInstanceOutcome(outcome.error());
}

void EnsClient::removePublicIpsFromEpnInstanceAsync(const RemovePublicIpsFromEpnInstanceRequest& request, const RemovePublicIpsFromEpnInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removePublicIpsFromEpnInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::RemovePublicIpsFromEpnInstanceOutcomeCallable EnsClient::removePublicIpsFromEpnInstanceCallable(const RemovePublicIpsFromEpnInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemovePublicIpsFromEpnInstanceOutcome()>>(
			[this, request]()
			{
			return this->removePublicIpsFromEpnInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::RemoveSDGOutcome EnsClient::removeSDG(const RemoveSDGRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveSDGOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveSDGOutcome(RemoveSDGResult(outcome.result()));
	else
		return RemoveSDGOutcome(outcome.error());
}

void EnsClient::removeSDGAsync(const RemoveSDGRequest& request, const RemoveSDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeSDG(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::RemoveSDGOutcomeCallable EnsClient::removeSDGCallable(const RemoveSDGRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveSDGOutcome()>>(
			[this, request]()
			{
			return this->removeSDG(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::RemoveVSwitchesFromEpnInstanceOutcome EnsClient::removeVSwitchesFromEpnInstance(const RemoveVSwitchesFromEpnInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveVSwitchesFromEpnInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveVSwitchesFromEpnInstanceOutcome(RemoveVSwitchesFromEpnInstanceResult(outcome.result()));
	else
		return RemoveVSwitchesFromEpnInstanceOutcome(outcome.error());
}

void EnsClient::removeVSwitchesFromEpnInstanceAsync(const RemoveVSwitchesFromEpnInstanceRequest& request, const RemoveVSwitchesFromEpnInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeVSwitchesFromEpnInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::RemoveVSwitchesFromEpnInstanceOutcomeCallable EnsClient::removeVSwitchesFromEpnInstanceCallable(const RemoveVSwitchesFromEpnInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveVSwitchesFromEpnInstanceOutcome()>>(
			[this, request]()
			{
			return this->removeVSwitchesFromEpnInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::RenewARMServerInstanceOutcome EnsClient::renewARMServerInstance(const RenewARMServerInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenewARMServerInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewARMServerInstanceOutcome(RenewARMServerInstanceResult(outcome.result()));
	else
		return RenewARMServerInstanceOutcome(outcome.error());
}

void EnsClient::renewARMServerInstanceAsync(const RenewARMServerInstanceRequest& request, const RenewARMServerInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewARMServerInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::RenewARMServerInstanceOutcomeCallable EnsClient::renewARMServerInstanceCallable(const RenewARMServerInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewARMServerInstanceOutcome()>>(
			[this, request]()
			{
			return this->renewARMServerInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::RenewInstanceOutcome EnsClient::renewInstance(const RenewInstanceRequest &request) const
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

void EnsClient::renewInstanceAsync(const RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::RenewInstanceOutcomeCallable EnsClient::renewInstanceCallable(const RenewInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewInstanceOutcome()>>(
			[this, request]()
			{
			return this->renewInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::RescaleApplicationOutcome EnsClient::rescaleApplication(const RescaleApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RescaleApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RescaleApplicationOutcome(RescaleApplicationResult(outcome.result()));
	else
		return RescaleApplicationOutcome(outcome.error());
}

void EnsClient::rescaleApplicationAsync(const RescaleApplicationRequest& request, const RescaleApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rescaleApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::RescaleApplicationOutcomeCallable EnsClient::rescaleApplicationCallable(const RescaleApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RescaleApplicationOutcome()>>(
			[this, request]()
			{
			return this->rescaleApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::RescaleDeviceServiceOutcome EnsClient::rescaleDeviceService(const RescaleDeviceServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RescaleDeviceServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RescaleDeviceServiceOutcome(RescaleDeviceServiceResult(outcome.result()));
	else
		return RescaleDeviceServiceOutcome(outcome.error());
}

void EnsClient::rescaleDeviceServiceAsync(const RescaleDeviceServiceRequest& request, const RescaleDeviceServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rescaleDeviceService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::RescaleDeviceServiceOutcomeCallable EnsClient::rescaleDeviceServiceCallable(const RescaleDeviceServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RescaleDeviceServiceOutcome()>>(
			[this, request]()
			{
			return this->rescaleDeviceService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ResetAICInstanceOutcome EnsClient::resetAICInstance(const ResetAICInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetAICInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetAICInstanceOutcome(ResetAICInstanceResult(outcome.result()));
	else
		return ResetAICInstanceOutcome(outcome.error());
}

void EnsClient::resetAICInstanceAsync(const ResetAICInstanceRequest& request, const ResetAICInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetAICInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ResetAICInstanceOutcomeCallable EnsClient::resetAICInstanceCallable(const ResetAICInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetAICInstanceOutcome()>>(
			[this, request]()
			{
			return this->resetAICInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ResetDeviceInstanceOutcome EnsClient::resetDeviceInstance(const ResetDeviceInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetDeviceInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetDeviceInstanceOutcome(ResetDeviceInstanceResult(outcome.result()));
	else
		return ResetDeviceInstanceOutcome(outcome.error());
}

void EnsClient::resetDeviceInstanceAsync(const ResetDeviceInstanceRequest& request, const ResetDeviceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetDeviceInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ResetDeviceInstanceOutcomeCallable EnsClient::resetDeviceInstanceCallable(const ResetDeviceInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetDeviceInstanceOutcome()>>(
			[this, request]()
			{
			return this->resetDeviceInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ResetDiskOutcome EnsClient::resetDisk(const ResetDiskRequest &request) const
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

void EnsClient::resetDiskAsync(const ResetDiskRequest& request, const ResetDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ResetDiskOutcomeCallable EnsClient::resetDiskCallable(const ResetDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetDiskOutcome()>>(
			[this, request]()
			{
			return this->resetDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::ResizeDiskOutcome EnsClient::resizeDisk(const ResizeDiskRequest &request) const
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

void EnsClient::resizeDiskAsync(const ResizeDiskRequest& request, const ResizeDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resizeDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::ResizeDiskOutcomeCallable EnsClient::resizeDiskCallable(const ResizeDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResizeDiskOutcome()>>(
			[this, request]()
			{
			return this->resizeDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::RestartDeviceInstanceOutcome EnsClient::restartDeviceInstance(const RestartDeviceInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartDeviceInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartDeviceInstanceOutcome(RestartDeviceInstanceResult(outcome.result()));
	else
		return RestartDeviceInstanceOutcome(outcome.error());
}

void EnsClient::restartDeviceInstanceAsync(const RestartDeviceInstanceRequest& request, const RestartDeviceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartDeviceInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::RestartDeviceInstanceOutcomeCallable EnsClient::restartDeviceInstanceCallable(const RestartDeviceInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartDeviceInstanceOutcome()>>(
			[this, request]()
			{
			return this->restartDeviceInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::RevokeSecurityGroupOutcome EnsClient::revokeSecurityGroup(const RevokeSecurityGroupRequest &request) const
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

void EnsClient::revokeSecurityGroupAsync(const RevokeSecurityGroupRequest& request, const RevokeSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::RevokeSecurityGroupOutcomeCallable EnsClient::revokeSecurityGroupCallable(const RevokeSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->revokeSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::RevokeSecurityGroupEgressOutcome EnsClient::revokeSecurityGroupEgress(const RevokeSecurityGroupEgressRequest &request) const
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

void EnsClient::revokeSecurityGroupEgressAsync(const RevokeSecurityGroupEgressRequest& request, const RevokeSecurityGroupEgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeSecurityGroupEgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::RevokeSecurityGroupEgressOutcomeCallable EnsClient::revokeSecurityGroupEgressCallable(const RevokeSecurityGroupEgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeSecurityGroupEgressOutcome()>>(
			[this, request]()
			{
			return this->revokeSecurityGroupEgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::RollbackApplicationOutcome EnsClient::rollbackApplication(const RollbackApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RollbackApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RollbackApplicationOutcome(RollbackApplicationResult(outcome.result()));
	else
		return RollbackApplicationOutcome(outcome.error());
}

void EnsClient::rollbackApplicationAsync(const RollbackApplicationRequest& request, const RollbackApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rollbackApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::RollbackApplicationOutcomeCallable EnsClient::rollbackApplicationCallable(const RollbackApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RollbackApplicationOutcome()>>(
			[this, request]()
			{
			return this->rollbackApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::RunInstancesOutcome EnsClient::runInstances(const RunInstancesRequest &request) const
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

void EnsClient::runInstancesAsync(const RunInstancesRequest& request, const RunInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::RunInstancesOutcomeCallable EnsClient::runInstancesCallable(const RunInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunInstancesOutcome()>>(
			[this, request]()
			{
			return this->runInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::RunServiceScheduleOutcome EnsClient::runServiceSchedule(const RunServiceScheduleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunServiceScheduleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunServiceScheduleOutcome(RunServiceScheduleResult(outcome.result()));
	else
		return RunServiceScheduleOutcome(outcome.error());
}

void EnsClient::runServiceScheduleAsync(const RunServiceScheduleRequest& request, const RunServiceScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runServiceSchedule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::RunServiceScheduleOutcomeCallable EnsClient::runServiceScheduleCallable(const RunServiceScheduleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunServiceScheduleOutcome()>>(
			[this, request]()
			{
			return this->runServiceSchedule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::SaveSDGOutcome EnsClient::saveSDG(const SaveSDGRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSDGOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSDGOutcome(SaveSDGResult(outcome.result()));
	else
		return SaveSDGOutcome(outcome.error());
}

void EnsClient::saveSDGAsync(const SaveSDGRequest& request, const SaveSDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSDG(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::SaveSDGOutcomeCallable EnsClient::saveSDGCallable(const SaveSDGRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSDGOutcome()>>(
			[this, request]()
			{
			return this->saveSDG(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::SetBackendServersOutcome EnsClient::setBackendServers(const SetBackendServersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetBackendServersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetBackendServersOutcome(SetBackendServersResult(outcome.result()));
	else
		return SetBackendServersOutcome(outcome.error());
}

void EnsClient::setBackendServersAsync(const SetBackendServersRequest& request, const SetBackendServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setBackendServers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::SetBackendServersOutcomeCallable EnsClient::setBackendServersCallable(const SetBackendServersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetBackendServersOutcome()>>(
			[this, request]()
			{
			return this->setBackendServers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::SetLoadBalancerHTTPListenerAttributeOutcome EnsClient::setLoadBalancerHTTPListenerAttribute(const SetLoadBalancerHTTPListenerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLoadBalancerHTTPListenerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLoadBalancerHTTPListenerAttributeOutcome(SetLoadBalancerHTTPListenerAttributeResult(outcome.result()));
	else
		return SetLoadBalancerHTTPListenerAttributeOutcome(outcome.error());
}

void EnsClient::setLoadBalancerHTTPListenerAttributeAsync(const SetLoadBalancerHTTPListenerAttributeRequest& request, const SetLoadBalancerHTTPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLoadBalancerHTTPListenerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::SetLoadBalancerHTTPListenerAttributeOutcomeCallable EnsClient::setLoadBalancerHTTPListenerAttributeCallable(const SetLoadBalancerHTTPListenerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLoadBalancerHTTPListenerAttributeOutcome()>>(
			[this, request]()
			{
			return this->setLoadBalancerHTTPListenerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::SetLoadBalancerHTTPSListenerAttributeOutcome EnsClient::setLoadBalancerHTTPSListenerAttribute(const SetLoadBalancerHTTPSListenerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLoadBalancerHTTPSListenerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLoadBalancerHTTPSListenerAttributeOutcome(SetLoadBalancerHTTPSListenerAttributeResult(outcome.result()));
	else
		return SetLoadBalancerHTTPSListenerAttributeOutcome(outcome.error());
}

void EnsClient::setLoadBalancerHTTPSListenerAttributeAsync(const SetLoadBalancerHTTPSListenerAttributeRequest& request, const SetLoadBalancerHTTPSListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLoadBalancerHTTPSListenerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::SetLoadBalancerHTTPSListenerAttributeOutcomeCallable EnsClient::setLoadBalancerHTTPSListenerAttributeCallable(const SetLoadBalancerHTTPSListenerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLoadBalancerHTTPSListenerAttributeOutcome()>>(
			[this, request]()
			{
			return this->setLoadBalancerHTTPSListenerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::SetLoadBalancerStatusOutcome EnsClient::setLoadBalancerStatus(const SetLoadBalancerStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLoadBalancerStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLoadBalancerStatusOutcome(SetLoadBalancerStatusResult(outcome.result()));
	else
		return SetLoadBalancerStatusOutcome(outcome.error());
}

void EnsClient::setLoadBalancerStatusAsync(const SetLoadBalancerStatusRequest& request, const SetLoadBalancerStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLoadBalancerStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::SetLoadBalancerStatusOutcomeCallable EnsClient::setLoadBalancerStatusCallable(const SetLoadBalancerStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLoadBalancerStatusOutcome()>>(
			[this, request]()
			{
			return this->setLoadBalancerStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::SetLoadBalancerTCPListenerAttributeOutcome EnsClient::setLoadBalancerTCPListenerAttribute(const SetLoadBalancerTCPListenerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLoadBalancerTCPListenerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLoadBalancerTCPListenerAttributeOutcome(SetLoadBalancerTCPListenerAttributeResult(outcome.result()));
	else
		return SetLoadBalancerTCPListenerAttributeOutcome(outcome.error());
}

void EnsClient::setLoadBalancerTCPListenerAttributeAsync(const SetLoadBalancerTCPListenerAttributeRequest& request, const SetLoadBalancerTCPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLoadBalancerTCPListenerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::SetLoadBalancerTCPListenerAttributeOutcomeCallable EnsClient::setLoadBalancerTCPListenerAttributeCallable(const SetLoadBalancerTCPListenerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLoadBalancerTCPListenerAttributeOutcome()>>(
			[this, request]()
			{
			return this->setLoadBalancerTCPListenerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::SetLoadBalancerUDPListenerAttributeOutcome EnsClient::setLoadBalancerUDPListenerAttribute(const SetLoadBalancerUDPListenerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLoadBalancerUDPListenerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLoadBalancerUDPListenerAttributeOutcome(SetLoadBalancerUDPListenerAttributeResult(outcome.result()));
	else
		return SetLoadBalancerUDPListenerAttributeOutcome(outcome.error());
}

void EnsClient::setLoadBalancerUDPListenerAttributeAsync(const SetLoadBalancerUDPListenerAttributeRequest& request, const SetLoadBalancerUDPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLoadBalancerUDPListenerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::SetLoadBalancerUDPListenerAttributeOutcomeCallable EnsClient::setLoadBalancerUDPListenerAttributeCallable(const SetLoadBalancerUDPListenerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLoadBalancerUDPListenerAttributeOutcome()>>(
			[this, request]()
			{
			return this->setLoadBalancerUDPListenerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::StartEpnInstanceOutcome EnsClient::startEpnInstance(const StartEpnInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartEpnInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartEpnInstanceOutcome(StartEpnInstanceResult(outcome.result()));
	else
		return StartEpnInstanceOutcome(outcome.error());
}

void EnsClient::startEpnInstanceAsync(const StartEpnInstanceRequest& request, const StartEpnInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startEpnInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::StartEpnInstanceOutcomeCallable EnsClient::startEpnInstanceCallable(const StartEpnInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartEpnInstanceOutcome()>>(
			[this, request]()
			{
			return this->startEpnInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::StartInstanceOutcome EnsClient::startInstance(const StartInstanceRequest &request) const
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

void EnsClient::startInstanceAsync(const StartInstanceRequest& request, const StartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::StartInstanceOutcomeCallable EnsClient::startInstanceCallable(const StartInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartInstanceOutcome()>>(
			[this, request]()
			{
			return this->startInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::StartInstancesOutcome EnsClient::startInstances(const StartInstancesRequest &request) const
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

void EnsClient::startInstancesAsync(const StartInstancesRequest& request, const StartInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::StartInstancesOutcomeCallable EnsClient::startInstancesCallable(const StartInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartInstancesOutcome()>>(
			[this, request]()
			{
			return this->startInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::StartLoadBalancerListenerOutcome EnsClient::startLoadBalancerListener(const StartLoadBalancerListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartLoadBalancerListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartLoadBalancerListenerOutcome(StartLoadBalancerListenerResult(outcome.result()));
	else
		return StartLoadBalancerListenerOutcome(outcome.error());
}

void EnsClient::startLoadBalancerListenerAsync(const StartLoadBalancerListenerRequest& request, const StartLoadBalancerListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startLoadBalancerListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::StartLoadBalancerListenerOutcomeCallable EnsClient::startLoadBalancerListenerCallable(const StartLoadBalancerListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartLoadBalancerListenerOutcome()>>(
			[this, request]()
			{
			return this->startLoadBalancerListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::StartSnatIpForSnatEntryOutcome EnsClient::startSnatIpForSnatEntry(const StartSnatIpForSnatEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartSnatIpForSnatEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartSnatIpForSnatEntryOutcome(StartSnatIpForSnatEntryResult(outcome.result()));
	else
		return StartSnatIpForSnatEntryOutcome(outcome.error());
}

void EnsClient::startSnatIpForSnatEntryAsync(const StartSnatIpForSnatEntryRequest& request, const StartSnatIpForSnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startSnatIpForSnatEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::StartSnatIpForSnatEntryOutcomeCallable EnsClient::startSnatIpForSnatEntryCallable(const StartSnatIpForSnatEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartSnatIpForSnatEntryOutcome()>>(
			[this, request]()
			{
			return this->startSnatIpForSnatEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::StopEpnInstanceOutcome EnsClient::stopEpnInstance(const StopEpnInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopEpnInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopEpnInstanceOutcome(StopEpnInstanceResult(outcome.result()));
	else
		return StopEpnInstanceOutcome(outcome.error());
}

void EnsClient::stopEpnInstanceAsync(const StopEpnInstanceRequest& request, const StopEpnInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopEpnInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::StopEpnInstanceOutcomeCallable EnsClient::stopEpnInstanceCallable(const StopEpnInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopEpnInstanceOutcome()>>(
			[this, request]()
			{
			return this->stopEpnInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::StopInstanceOutcome EnsClient::stopInstance(const StopInstanceRequest &request) const
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

void EnsClient::stopInstanceAsync(const StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::StopInstanceOutcomeCallable EnsClient::stopInstanceCallable(const StopInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopInstanceOutcome()>>(
			[this, request]()
			{
			return this->stopInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::StopInstancesOutcome EnsClient::stopInstances(const StopInstancesRequest &request) const
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

void EnsClient::stopInstancesAsync(const StopInstancesRequest& request, const StopInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::StopInstancesOutcomeCallable EnsClient::stopInstancesCallable(const StopInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopInstancesOutcome()>>(
			[this, request]()
			{
			return this->stopInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::StopLoadBalancerListenerOutcome EnsClient::stopLoadBalancerListener(const StopLoadBalancerListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopLoadBalancerListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopLoadBalancerListenerOutcome(StopLoadBalancerListenerResult(outcome.result()));
	else
		return StopLoadBalancerListenerOutcome(outcome.error());
}

void EnsClient::stopLoadBalancerListenerAsync(const StopLoadBalancerListenerRequest& request, const StopLoadBalancerListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopLoadBalancerListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::StopLoadBalancerListenerOutcomeCallable EnsClient::stopLoadBalancerListenerCallable(const StopLoadBalancerListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopLoadBalancerListenerOutcome()>>(
			[this, request]()
			{
			return this->stopLoadBalancerListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::StopSnatIpForSnatEntryOutcome EnsClient::stopSnatIpForSnatEntry(const StopSnatIpForSnatEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopSnatIpForSnatEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopSnatIpForSnatEntryOutcome(StopSnatIpForSnatEntryResult(outcome.result()));
	else
		return StopSnatIpForSnatEntryOutcome(outcome.error());
}

void EnsClient::stopSnatIpForSnatEntryAsync(const StopSnatIpForSnatEntryRequest& request, const StopSnatIpForSnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopSnatIpForSnatEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::StopSnatIpForSnatEntryOutcomeCallable EnsClient::stopSnatIpForSnatEntryCallable(const StopSnatIpForSnatEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopSnatIpForSnatEntryOutcome()>>(
			[this, request]()
			{
			return this->stopSnatIpForSnatEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::TagResourcesOutcome EnsClient::tagResources(const TagResourcesRequest &request) const
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

void EnsClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::TagResourcesOutcomeCallable EnsClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::UnAssociateEnsEipAddressOutcome EnsClient::unAssociateEnsEipAddress(const UnAssociateEnsEipAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnAssociateEnsEipAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnAssociateEnsEipAddressOutcome(UnAssociateEnsEipAddressResult(outcome.result()));
	else
		return UnAssociateEnsEipAddressOutcome(outcome.error());
}

void EnsClient::unAssociateEnsEipAddressAsync(const UnAssociateEnsEipAddressRequest& request, const UnAssociateEnsEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unAssociateEnsEipAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::UnAssociateEnsEipAddressOutcomeCallable EnsClient::unAssociateEnsEipAddressCallable(const UnAssociateEnsEipAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnAssociateEnsEipAddressOutcome()>>(
			[this, request]()
			{
			return this->unAssociateEnsEipAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::UnassignPrivateIpAddressesOutcome EnsClient::unassignPrivateIpAddresses(const UnassignPrivateIpAddressesRequest &request) const
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

void EnsClient::unassignPrivateIpAddressesAsync(const UnassignPrivateIpAddressesRequest& request, const UnassignPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unassignPrivateIpAddresses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::UnassignPrivateIpAddressesOutcomeCallable EnsClient::unassignPrivateIpAddressesCallable(const UnassignPrivateIpAddressesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnassignPrivateIpAddressesOutcome()>>(
			[this, request]()
			{
			return this->unassignPrivateIpAddresses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::UnassociateHaVipOutcome EnsClient::unassociateHaVip(const UnassociateHaVipRequest &request) const
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

void EnsClient::unassociateHaVipAsync(const UnassociateHaVipRequest& request, const UnassociateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unassociateHaVip(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::UnassociateHaVipOutcomeCallable EnsClient::unassociateHaVipCallable(const UnassociateHaVipRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnassociateHaVipOutcome()>>(
			[this, request]()
			{
			return this->unassociateHaVip(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::UnassociateNetworkAclOutcome EnsClient::unassociateNetworkAcl(const UnassociateNetworkAclRequest &request) const
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

void EnsClient::unassociateNetworkAclAsync(const UnassociateNetworkAclRequest& request, const UnassociateNetworkAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unassociateNetworkAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::UnassociateNetworkAclOutcomeCallable EnsClient::unassociateNetworkAclCallable(const UnassociateNetworkAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnassociateNetworkAclOutcome()>>(
			[this, request]()
			{
			return this->unassociateNetworkAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::UnloadRegionSDGOutcome EnsClient::unloadRegionSDG(const UnloadRegionSDGRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnloadRegionSDGOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnloadRegionSDGOutcome(UnloadRegionSDGResult(outcome.result()));
	else
		return UnloadRegionSDGOutcome(outcome.error());
}

void EnsClient::unloadRegionSDGAsync(const UnloadRegionSDGRequest& request, const UnloadRegionSDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unloadRegionSDG(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::UnloadRegionSDGOutcomeCallable EnsClient::unloadRegionSDGCallable(const UnloadRegionSDGRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnloadRegionSDGOutcome()>>(
			[this, request]()
			{
			return this->unloadRegionSDG(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::UnmountInstanceSDGOutcome EnsClient::unmountInstanceSDG(const UnmountInstanceSDGRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnmountInstanceSDGOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnmountInstanceSDGOutcome(UnmountInstanceSDGResult(outcome.result()));
	else
		return UnmountInstanceSDGOutcome(outcome.error());
}

void EnsClient::unmountInstanceSDGAsync(const UnmountInstanceSDGRequest& request, const UnmountInstanceSDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unmountInstanceSDG(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::UnmountInstanceSDGOutcomeCallable EnsClient::unmountInstanceSDGCallable(const UnmountInstanceSDGRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnmountInstanceSDGOutcome()>>(
			[this, request]()
			{
			return this->unmountInstanceSDG(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::UntagResourcesOutcome EnsClient::untagResources(const UntagResourcesRequest &request) const
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

void EnsClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::UntagResourcesOutcomeCallable EnsClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::UpdateEnsSaleControlOutcome EnsClient::updateEnsSaleControl(const UpdateEnsSaleControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEnsSaleControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEnsSaleControlOutcome(UpdateEnsSaleControlResult(outcome.result()));
	else
		return UpdateEnsSaleControlOutcome(outcome.error());
}

void EnsClient::updateEnsSaleControlAsync(const UpdateEnsSaleControlRequest& request, const UpdateEnsSaleControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEnsSaleControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::UpdateEnsSaleControlOutcomeCallable EnsClient::updateEnsSaleControlCallable(const UpdateEnsSaleControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEnsSaleControlOutcome()>>(
			[this, request]()
			{
			return this->updateEnsSaleControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::UpgradeAICInstanceImageOutcome EnsClient::upgradeAICInstanceImage(const UpgradeAICInstanceImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeAICInstanceImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeAICInstanceImageOutcome(UpgradeAICInstanceImageResult(outcome.result()));
	else
		return UpgradeAICInstanceImageOutcome(outcome.error());
}

void EnsClient::upgradeAICInstanceImageAsync(const UpgradeAICInstanceImageRequest& request, const UpgradeAICInstanceImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeAICInstanceImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::UpgradeAICInstanceImageOutcomeCallable EnsClient::upgradeAICInstanceImageCallable(const UpgradeAICInstanceImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeAICInstanceImageOutcome()>>(
			[this, request]()
			{
			return this->upgradeAICInstanceImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EnsClient::UpgradeApplicationOutcome EnsClient::upgradeApplication(const UpgradeApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeApplicationOutcome(UpgradeApplicationResult(outcome.result()));
	else
		return UpgradeApplicationOutcome(outcome.error());
}

void EnsClient::upgradeApplicationAsync(const UpgradeApplicationRequest& request, const UpgradeApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::UpgradeApplicationOutcomeCallable EnsClient::upgradeApplicationCallable(const UpgradeApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeApplicationOutcome()>>(
			[this, request]()
			{
			return this->upgradeApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

