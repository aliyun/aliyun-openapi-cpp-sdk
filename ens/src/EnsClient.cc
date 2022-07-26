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

EnsClient::DescribeApplicationResourceSummaryOutcome EnsClient::describeApplicationResourceSummary(const DescribeApplicationResourceSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApplicationResourceSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApplicationResourceSummaryOutcome(DescribeApplicationResourceSummaryResult(outcome.result()));
	else
		return DescribeApplicationResourceSummaryOutcome(outcome.error());
}

void EnsClient::describeApplicationResourceSummaryAsync(const DescribeApplicationResourceSummaryRequest& request, const DescribeApplicationResourceSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApplicationResourceSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeApplicationResourceSummaryOutcomeCallable EnsClient::describeApplicationResourceSummaryCallable(const DescribeApplicationResourceSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApplicationResourceSummaryOutcome()>>(
			[this, request]()
			{
			return this->describeApplicationResourceSummary(request);
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

EnsClient::DescribeEipAddressesOutcome EnsClient::describeEipAddresses(const DescribeEipAddressesRequest &request) const
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

void EnsClient::describeEipAddressesAsync(const DescribeEipAddressesRequest& request, const DescribeEipAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEipAddresses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::DescribeEipAddressesOutcomeCallable EnsClient::describeEipAddressesCallable(const DescribeEipAddressesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEipAddressesOutcome()>>(
			[this, request]()
			{
			return this->describeEipAddresses(request);
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

EnsClient::PreCreateEnsServiceOutcome EnsClient::preCreateEnsService(const PreCreateEnsServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PreCreateEnsServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PreCreateEnsServiceOutcome(PreCreateEnsServiceResult(outcome.result()));
	else
		return PreCreateEnsServiceOutcome(outcome.error());
}

void EnsClient::preCreateEnsServiceAsync(const PreCreateEnsServiceRequest& request, const PreCreateEnsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, preCreateEnsService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EnsClient::PreCreateEnsServiceOutcomeCallable EnsClient::preCreateEnsServiceCallable(const PreCreateEnsServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PreCreateEnsServiceOutcome()>>(
			[this, request]()
			{
			return this->preCreateEnsService(request);
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

