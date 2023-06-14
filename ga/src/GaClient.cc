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

#include <alibabacloud/ga/GaClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

namespace
{
	const std::string SERVICE_NAME = "Ga";
}

GaClient::GaClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "gaplus");
}

GaClient::GaClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "gaplus");
}

GaClient::GaClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "gaplus");
}

GaClient::~GaClient()
{}

GaClient::AddEntriesToAclOutcome GaClient::addEntriesToAcl(const AddEntriesToAclRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddEntriesToAclOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddEntriesToAclOutcome(AddEntriesToAclResult(outcome.result()));
	else
		return AddEntriesToAclOutcome(outcome.error());
}

void GaClient::addEntriesToAclAsync(const AddEntriesToAclRequest& request, const AddEntriesToAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addEntriesToAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::AddEntriesToAclOutcomeCallable GaClient::addEntriesToAclCallable(const AddEntriesToAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddEntriesToAclOutcome()>>(
			[this, request]()
			{
			return this->addEntriesToAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::AssociateAclsWithListenerOutcome GaClient::associateAclsWithListener(const AssociateAclsWithListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateAclsWithListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateAclsWithListenerOutcome(AssociateAclsWithListenerResult(outcome.result()));
	else
		return AssociateAclsWithListenerOutcome(outcome.error());
}

void GaClient::associateAclsWithListenerAsync(const AssociateAclsWithListenerRequest& request, const AssociateAclsWithListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateAclsWithListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::AssociateAclsWithListenerOutcomeCallable GaClient::associateAclsWithListenerCallable(const AssociateAclsWithListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateAclsWithListenerOutcome()>>(
			[this, request]()
			{
			return this->associateAclsWithListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::AssociateAdditionalCertificatesWithListenerOutcome GaClient::associateAdditionalCertificatesWithListener(const AssociateAdditionalCertificatesWithListenerRequest &request) const
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

void GaClient::associateAdditionalCertificatesWithListenerAsync(const AssociateAdditionalCertificatesWithListenerRequest& request, const AssociateAdditionalCertificatesWithListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateAdditionalCertificatesWithListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::AssociateAdditionalCertificatesWithListenerOutcomeCallable GaClient::associateAdditionalCertificatesWithListenerCallable(const AssociateAdditionalCertificatesWithListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateAdditionalCertificatesWithListenerOutcome()>>(
			[this, request]()
			{
			return this->associateAdditionalCertificatesWithListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::AttachDdosToAcceleratorOutcome GaClient::attachDdosToAccelerator(const AttachDdosToAcceleratorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachDdosToAcceleratorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachDdosToAcceleratorOutcome(AttachDdosToAcceleratorResult(outcome.result()));
	else
		return AttachDdosToAcceleratorOutcome(outcome.error());
}

void GaClient::attachDdosToAcceleratorAsync(const AttachDdosToAcceleratorRequest& request, const AttachDdosToAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachDdosToAccelerator(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::AttachDdosToAcceleratorOutcomeCallable GaClient::attachDdosToAcceleratorCallable(const AttachDdosToAcceleratorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachDdosToAcceleratorOutcome()>>(
			[this, request]()
			{
			return this->attachDdosToAccelerator(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::AttachLogStoreToEndpointGroupOutcome GaClient::attachLogStoreToEndpointGroup(const AttachLogStoreToEndpointGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachLogStoreToEndpointGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachLogStoreToEndpointGroupOutcome(AttachLogStoreToEndpointGroupResult(outcome.result()));
	else
		return AttachLogStoreToEndpointGroupOutcome(outcome.error());
}

void GaClient::attachLogStoreToEndpointGroupAsync(const AttachLogStoreToEndpointGroupRequest& request, const AttachLogStoreToEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachLogStoreToEndpointGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::AttachLogStoreToEndpointGroupOutcomeCallable GaClient::attachLogStoreToEndpointGroupCallable(const AttachLogStoreToEndpointGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachLogStoreToEndpointGroupOutcome()>>(
			[this, request]()
			{
			return this->attachLogStoreToEndpointGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::BandwidthPackageAddAcceleratorOutcome GaClient::bandwidthPackageAddAccelerator(const BandwidthPackageAddAcceleratorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BandwidthPackageAddAcceleratorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BandwidthPackageAddAcceleratorOutcome(BandwidthPackageAddAcceleratorResult(outcome.result()));
	else
		return BandwidthPackageAddAcceleratorOutcome(outcome.error());
}

void GaClient::bandwidthPackageAddAcceleratorAsync(const BandwidthPackageAddAcceleratorRequest& request, const BandwidthPackageAddAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bandwidthPackageAddAccelerator(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::BandwidthPackageAddAcceleratorOutcomeCallable GaClient::bandwidthPackageAddAcceleratorCallable(const BandwidthPackageAddAcceleratorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BandwidthPackageAddAcceleratorOutcome()>>(
			[this, request]()
			{
			return this->bandwidthPackageAddAccelerator(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::BandwidthPackageRemoveAcceleratorOutcome GaClient::bandwidthPackageRemoveAccelerator(const BandwidthPackageRemoveAcceleratorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BandwidthPackageRemoveAcceleratorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BandwidthPackageRemoveAcceleratorOutcome(BandwidthPackageRemoveAcceleratorResult(outcome.result()));
	else
		return BandwidthPackageRemoveAcceleratorOutcome(outcome.error());
}

void GaClient::bandwidthPackageRemoveAcceleratorAsync(const BandwidthPackageRemoveAcceleratorRequest& request, const BandwidthPackageRemoveAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bandwidthPackageRemoveAccelerator(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::BandwidthPackageRemoveAcceleratorOutcomeCallable GaClient::bandwidthPackageRemoveAcceleratorCallable(const BandwidthPackageRemoveAcceleratorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BandwidthPackageRemoveAcceleratorOutcome()>>(
			[this, request]()
			{
			return this->bandwidthPackageRemoveAccelerator(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ChangeResourceGroupOutcome GaClient::changeResourceGroup(const ChangeResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeResourceGroupOutcome(ChangeResourceGroupResult(outcome.result()));
	else
		return ChangeResourceGroupOutcome(outcome.error());
}

void GaClient::changeResourceGroupAsync(const ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ChangeResourceGroupOutcomeCallable GaClient::changeResourceGroupCallable(const ChangeResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->changeResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ConfigEndpointProbeOutcome GaClient::configEndpointProbe(const ConfigEndpointProbeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigEndpointProbeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigEndpointProbeOutcome(ConfigEndpointProbeResult(outcome.result()));
	else
		return ConfigEndpointProbeOutcome(outcome.error());
}

void GaClient::configEndpointProbeAsync(const ConfigEndpointProbeRequest& request, const ConfigEndpointProbeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configEndpointProbe(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ConfigEndpointProbeOutcomeCallable GaClient::configEndpointProbeCallable(const ConfigEndpointProbeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigEndpointProbeOutcome()>>(
			[this, request]()
			{
			return this->configEndpointProbe(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::CreateAcceleratorOutcome GaClient::createAccelerator(const CreateAcceleratorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAcceleratorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAcceleratorOutcome(CreateAcceleratorResult(outcome.result()));
	else
		return CreateAcceleratorOutcome(outcome.error());
}

void GaClient::createAcceleratorAsync(const CreateAcceleratorRequest& request, const CreateAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAccelerator(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::CreateAcceleratorOutcomeCallable GaClient::createAcceleratorCallable(const CreateAcceleratorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAcceleratorOutcome()>>(
			[this, request]()
			{
			return this->createAccelerator(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::CreateAclOutcome GaClient::createAcl(const CreateAclRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAclOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAclOutcome(CreateAclResult(outcome.result()));
	else
		return CreateAclOutcome(outcome.error());
}

void GaClient::createAclAsync(const CreateAclRequest& request, const CreateAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::CreateAclOutcomeCallable GaClient::createAclCallable(const CreateAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAclOutcome()>>(
			[this, request]()
			{
			return this->createAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::CreateApplicationMonitorOutcome GaClient::createApplicationMonitor(const CreateApplicationMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateApplicationMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateApplicationMonitorOutcome(CreateApplicationMonitorResult(outcome.result()));
	else
		return CreateApplicationMonitorOutcome(outcome.error());
}

void GaClient::createApplicationMonitorAsync(const CreateApplicationMonitorRequest& request, const CreateApplicationMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApplicationMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::CreateApplicationMonitorOutcomeCallable GaClient::createApplicationMonitorCallable(const CreateApplicationMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateApplicationMonitorOutcome()>>(
			[this, request]()
			{
			return this->createApplicationMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::CreateBandwidthPackageOutcome GaClient::createBandwidthPackage(const CreateBandwidthPackageRequest &request) const
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

void GaClient::createBandwidthPackageAsync(const CreateBandwidthPackageRequest& request, const CreateBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBandwidthPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::CreateBandwidthPackageOutcomeCallable GaClient::createBandwidthPackageCallable(const CreateBandwidthPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBandwidthPackageOutcome()>>(
			[this, request]()
			{
			return this->createBandwidthPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::CreateBasicAccelerateIpOutcome GaClient::createBasicAccelerateIp(const CreateBasicAccelerateIpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBasicAccelerateIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBasicAccelerateIpOutcome(CreateBasicAccelerateIpResult(outcome.result()));
	else
		return CreateBasicAccelerateIpOutcome(outcome.error());
}

void GaClient::createBasicAccelerateIpAsync(const CreateBasicAccelerateIpRequest& request, const CreateBasicAccelerateIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBasicAccelerateIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::CreateBasicAccelerateIpOutcomeCallable GaClient::createBasicAccelerateIpCallable(const CreateBasicAccelerateIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBasicAccelerateIpOutcome()>>(
			[this, request]()
			{
			return this->createBasicAccelerateIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::CreateBasicAccelerateIpEndpointRelationOutcome GaClient::createBasicAccelerateIpEndpointRelation(const CreateBasicAccelerateIpEndpointRelationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBasicAccelerateIpEndpointRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBasicAccelerateIpEndpointRelationOutcome(CreateBasicAccelerateIpEndpointRelationResult(outcome.result()));
	else
		return CreateBasicAccelerateIpEndpointRelationOutcome(outcome.error());
}

void GaClient::createBasicAccelerateIpEndpointRelationAsync(const CreateBasicAccelerateIpEndpointRelationRequest& request, const CreateBasicAccelerateIpEndpointRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBasicAccelerateIpEndpointRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::CreateBasicAccelerateIpEndpointRelationOutcomeCallable GaClient::createBasicAccelerateIpEndpointRelationCallable(const CreateBasicAccelerateIpEndpointRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBasicAccelerateIpEndpointRelationOutcome()>>(
			[this, request]()
			{
			return this->createBasicAccelerateIpEndpointRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::CreateBasicAccelerateIpEndpointRelationsOutcome GaClient::createBasicAccelerateIpEndpointRelations(const CreateBasicAccelerateIpEndpointRelationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBasicAccelerateIpEndpointRelationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBasicAccelerateIpEndpointRelationsOutcome(CreateBasicAccelerateIpEndpointRelationsResult(outcome.result()));
	else
		return CreateBasicAccelerateIpEndpointRelationsOutcome(outcome.error());
}

void GaClient::createBasicAccelerateIpEndpointRelationsAsync(const CreateBasicAccelerateIpEndpointRelationsRequest& request, const CreateBasicAccelerateIpEndpointRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBasicAccelerateIpEndpointRelations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::CreateBasicAccelerateIpEndpointRelationsOutcomeCallable GaClient::createBasicAccelerateIpEndpointRelationsCallable(const CreateBasicAccelerateIpEndpointRelationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBasicAccelerateIpEndpointRelationsOutcome()>>(
			[this, request]()
			{
			return this->createBasicAccelerateIpEndpointRelations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::CreateBasicAcceleratorOutcome GaClient::createBasicAccelerator(const CreateBasicAcceleratorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBasicAcceleratorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBasicAcceleratorOutcome(CreateBasicAcceleratorResult(outcome.result()));
	else
		return CreateBasicAcceleratorOutcome(outcome.error());
}

void GaClient::createBasicAcceleratorAsync(const CreateBasicAcceleratorRequest& request, const CreateBasicAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBasicAccelerator(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::CreateBasicAcceleratorOutcomeCallable GaClient::createBasicAcceleratorCallable(const CreateBasicAcceleratorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBasicAcceleratorOutcome()>>(
			[this, request]()
			{
			return this->createBasicAccelerator(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::CreateBasicEndpointOutcome GaClient::createBasicEndpoint(const CreateBasicEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBasicEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBasicEndpointOutcome(CreateBasicEndpointResult(outcome.result()));
	else
		return CreateBasicEndpointOutcome(outcome.error());
}

void GaClient::createBasicEndpointAsync(const CreateBasicEndpointRequest& request, const CreateBasicEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBasicEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::CreateBasicEndpointOutcomeCallable GaClient::createBasicEndpointCallable(const CreateBasicEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBasicEndpointOutcome()>>(
			[this, request]()
			{
			return this->createBasicEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::CreateBasicEndpointGroupOutcome GaClient::createBasicEndpointGroup(const CreateBasicEndpointGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBasicEndpointGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBasicEndpointGroupOutcome(CreateBasicEndpointGroupResult(outcome.result()));
	else
		return CreateBasicEndpointGroupOutcome(outcome.error());
}

void GaClient::createBasicEndpointGroupAsync(const CreateBasicEndpointGroupRequest& request, const CreateBasicEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBasicEndpointGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::CreateBasicEndpointGroupOutcomeCallable GaClient::createBasicEndpointGroupCallable(const CreateBasicEndpointGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBasicEndpointGroupOutcome()>>(
			[this, request]()
			{
			return this->createBasicEndpointGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::CreateBasicEndpointsOutcome GaClient::createBasicEndpoints(const CreateBasicEndpointsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBasicEndpointsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBasicEndpointsOutcome(CreateBasicEndpointsResult(outcome.result()));
	else
		return CreateBasicEndpointsOutcome(outcome.error());
}

void GaClient::createBasicEndpointsAsync(const CreateBasicEndpointsRequest& request, const CreateBasicEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBasicEndpoints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::CreateBasicEndpointsOutcomeCallable GaClient::createBasicEndpointsCallable(const CreateBasicEndpointsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBasicEndpointsOutcome()>>(
			[this, request]()
			{
			return this->createBasicEndpoints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::CreateBasicIpSetOutcome GaClient::createBasicIpSet(const CreateBasicIpSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBasicIpSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBasicIpSetOutcome(CreateBasicIpSetResult(outcome.result()));
	else
		return CreateBasicIpSetOutcome(outcome.error());
}

void GaClient::createBasicIpSetAsync(const CreateBasicIpSetRequest& request, const CreateBasicIpSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBasicIpSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::CreateBasicIpSetOutcomeCallable GaClient::createBasicIpSetCallable(const CreateBasicIpSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBasicIpSetOutcome()>>(
			[this, request]()
			{
			return this->createBasicIpSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::CreateCustomRoutingEndpointGroupDestinationsOutcome GaClient::createCustomRoutingEndpointGroupDestinations(const CreateCustomRoutingEndpointGroupDestinationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCustomRoutingEndpointGroupDestinationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCustomRoutingEndpointGroupDestinationsOutcome(CreateCustomRoutingEndpointGroupDestinationsResult(outcome.result()));
	else
		return CreateCustomRoutingEndpointGroupDestinationsOutcome(outcome.error());
}

void GaClient::createCustomRoutingEndpointGroupDestinationsAsync(const CreateCustomRoutingEndpointGroupDestinationsRequest& request, const CreateCustomRoutingEndpointGroupDestinationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCustomRoutingEndpointGroupDestinations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::CreateCustomRoutingEndpointGroupDestinationsOutcomeCallable GaClient::createCustomRoutingEndpointGroupDestinationsCallable(const CreateCustomRoutingEndpointGroupDestinationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCustomRoutingEndpointGroupDestinationsOutcome()>>(
			[this, request]()
			{
			return this->createCustomRoutingEndpointGroupDestinations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::CreateCustomRoutingEndpointGroupsOutcome GaClient::createCustomRoutingEndpointGroups(const CreateCustomRoutingEndpointGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCustomRoutingEndpointGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCustomRoutingEndpointGroupsOutcome(CreateCustomRoutingEndpointGroupsResult(outcome.result()));
	else
		return CreateCustomRoutingEndpointGroupsOutcome(outcome.error());
}

void GaClient::createCustomRoutingEndpointGroupsAsync(const CreateCustomRoutingEndpointGroupsRequest& request, const CreateCustomRoutingEndpointGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCustomRoutingEndpointGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::CreateCustomRoutingEndpointGroupsOutcomeCallable GaClient::createCustomRoutingEndpointGroupsCallable(const CreateCustomRoutingEndpointGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCustomRoutingEndpointGroupsOutcome()>>(
			[this, request]()
			{
			return this->createCustomRoutingEndpointGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::CreateCustomRoutingEndpointTrafficPoliciesOutcome GaClient::createCustomRoutingEndpointTrafficPolicies(const CreateCustomRoutingEndpointTrafficPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCustomRoutingEndpointTrafficPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCustomRoutingEndpointTrafficPoliciesOutcome(CreateCustomRoutingEndpointTrafficPoliciesResult(outcome.result()));
	else
		return CreateCustomRoutingEndpointTrafficPoliciesOutcome(outcome.error());
}

void GaClient::createCustomRoutingEndpointTrafficPoliciesAsync(const CreateCustomRoutingEndpointTrafficPoliciesRequest& request, const CreateCustomRoutingEndpointTrafficPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCustomRoutingEndpointTrafficPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::CreateCustomRoutingEndpointTrafficPoliciesOutcomeCallable GaClient::createCustomRoutingEndpointTrafficPoliciesCallable(const CreateCustomRoutingEndpointTrafficPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCustomRoutingEndpointTrafficPoliciesOutcome()>>(
			[this, request]()
			{
			return this->createCustomRoutingEndpointTrafficPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::CreateCustomRoutingEndpointsOutcome GaClient::createCustomRoutingEndpoints(const CreateCustomRoutingEndpointsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCustomRoutingEndpointsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCustomRoutingEndpointsOutcome(CreateCustomRoutingEndpointsResult(outcome.result()));
	else
		return CreateCustomRoutingEndpointsOutcome(outcome.error());
}

void GaClient::createCustomRoutingEndpointsAsync(const CreateCustomRoutingEndpointsRequest& request, const CreateCustomRoutingEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCustomRoutingEndpoints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::CreateCustomRoutingEndpointsOutcomeCallable GaClient::createCustomRoutingEndpointsCallable(const CreateCustomRoutingEndpointsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCustomRoutingEndpointsOutcome()>>(
			[this, request]()
			{
			return this->createCustomRoutingEndpoints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::CreateDomainOutcome GaClient::createDomain(const CreateDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDomainOutcome(CreateDomainResult(outcome.result()));
	else
		return CreateDomainOutcome(outcome.error());
}

void GaClient::createDomainAsync(const CreateDomainRequest& request, const CreateDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::CreateDomainOutcomeCallable GaClient::createDomainCallable(const CreateDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDomainOutcome()>>(
			[this, request]()
			{
			return this->createDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::CreateEndpointGroupOutcome GaClient::createEndpointGroup(const CreateEndpointGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEndpointGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEndpointGroupOutcome(CreateEndpointGroupResult(outcome.result()));
	else
		return CreateEndpointGroupOutcome(outcome.error());
}

void GaClient::createEndpointGroupAsync(const CreateEndpointGroupRequest& request, const CreateEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEndpointGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::CreateEndpointGroupOutcomeCallable GaClient::createEndpointGroupCallable(const CreateEndpointGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEndpointGroupOutcome()>>(
			[this, request]()
			{
			return this->createEndpointGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::CreateEndpointGroupsOutcome GaClient::createEndpointGroups(const CreateEndpointGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEndpointGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEndpointGroupsOutcome(CreateEndpointGroupsResult(outcome.result()));
	else
		return CreateEndpointGroupsOutcome(outcome.error());
}

void GaClient::createEndpointGroupsAsync(const CreateEndpointGroupsRequest& request, const CreateEndpointGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEndpointGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::CreateEndpointGroupsOutcomeCallable GaClient::createEndpointGroupsCallable(const CreateEndpointGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEndpointGroupsOutcome()>>(
			[this, request]()
			{
			return this->createEndpointGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::CreateForwardingRulesOutcome GaClient::createForwardingRules(const CreateForwardingRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateForwardingRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateForwardingRulesOutcome(CreateForwardingRulesResult(outcome.result()));
	else
		return CreateForwardingRulesOutcome(outcome.error());
}

void GaClient::createForwardingRulesAsync(const CreateForwardingRulesRequest& request, const CreateForwardingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createForwardingRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::CreateForwardingRulesOutcomeCallable GaClient::createForwardingRulesCallable(const CreateForwardingRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateForwardingRulesOutcome()>>(
			[this, request]()
			{
			return this->createForwardingRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::CreateIpSetsOutcome GaClient::createIpSets(const CreateIpSetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateIpSetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateIpSetsOutcome(CreateIpSetsResult(outcome.result()));
	else
		return CreateIpSetsOutcome(outcome.error());
}

void GaClient::createIpSetsAsync(const CreateIpSetsRequest& request, const CreateIpSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createIpSets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::CreateIpSetsOutcomeCallable GaClient::createIpSetsCallable(const CreateIpSetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateIpSetsOutcome()>>(
			[this, request]()
			{
			return this->createIpSets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::CreateListenerOutcome GaClient::createListener(const CreateListenerRequest &request) const
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

void GaClient::createListenerAsync(const CreateListenerRequest& request, const CreateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::CreateListenerOutcomeCallable GaClient::createListenerCallable(const CreateListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateListenerOutcome()>>(
			[this, request]()
			{
			return this->createListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::CreateSpareIpsOutcome GaClient::createSpareIps(const CreateSpareIpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSpareIpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSpareIpsOutcome(CreateSpareIpsResult(outcome.result()));
	else
		return CreateSpareIpsOutcome(outcome.error());
}

void GaClient::createSpareIpsAsync(const CreateSpareIpsRequest& request, const CreateSpareIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSpareIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::CreateSpareIpsOutcomeCallable GaClient::createSpareIpsCallable(const CreateSpareIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSpareIpsOutcome()>>(
			[this, request]()
			{
			return this->createSpareIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DeleteAcceleratorOutcome GaClient::deleteAccelerator(const DeleteAcceleratorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAcceleratorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAcceleratorOutcome(DeleteAcceleratorResult(outcome.result()));
	else
		return DeleteAcceleratorOutcome(outcome.error());
}

void GaClient::deleteAcceleratorAsync(const DeleteAcceleratorRequest& request, const DeleteAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAccelerator(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DeleteAcceleratorOutcomeCallable GaClient::deleteAcceleratorCallable(const DeleteAcceleratorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAcceleratorOutcome()>>(
			[this, request]()
			{
			return this->deleteAccelerator(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DeleteAclOutcome GaClient::deleteAcl(const DeleteAclRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAclOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAclOutcome(DeleteAclResult(outcome.result()));
	else
		return DeleteAclOutcome(outcome.error());
}

void GaClient::deleteAclAsync(const DeleteAclRequest& request, const DeleteAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DeleteAclOutcomeCallable GaClient::deleteAclCallable(const DeleteAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAclOutcome()>>(
			[this, request]()
			{
			return this->deleteAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DeleteApplicationMonitorOutcome GaClient::deleteApplicationMonitor(const DeleteApplicationMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteApplicationMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteApplicationMonitorOutcome(DeleteApplicationMonitorResult(outcome.result()));
	else
		return DeleteApplicationMonitorOutcome(outcome.error());
}

void GaClient::deleteApplicationMonitorAsync(const DeleteApplicationMonitorRequest& request, const DeleteApplicationMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApplicationMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DeleteApplicationMonitorOutcomeCallable GaClient::deleteApplicationMonitorCallable(const DeleteApplicationMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApplicationMonitorOutcome()>>(
			[this, request]()
			{
			return this->deleteApplicationMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DeleteBandwidthPackageOutcome GaClient::deleteBandwidthPackage(const DeleteBandwidthPackageRequest &request) const
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

void GaClient::deleteBandwidthPackageAsync(const DeleteBandwidthPackageRequest& request, const DeleteBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBandwidthPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DeleteBandwidthPackageOutcomeCallable GaClient::deleteBandwidthPackageCallable(const DeleteBandwidthPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBandwidthPackageOutcome()>>(
			[this, request]()
			{
			return this->deleteBandwidthPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DeleteBasicAccelerateIpOutcome GaClient::deleteBasicAccelerateIp(const DeleteBasicAccelerateIpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBasicAccelerateIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBasicAccelerateIpOutcome(DeleteBasicAccelerateIpResult(outcome.result()));
	else
		return DeleteBasicAccelerateIpOutcome(outcome.error());
}

void GaClient::deleteBasicAccelerateIpAsync(const DeleteBasicAccelerateIpRequest& request, const DeleteBasicAccelerateIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBasicAccelerateIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DeleteBasicAccelerateIpOutcomeCallable GaClient::deleteBasicAccelerateIpCallable(const DeleteBasicAccelerateIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBasicAccelerateIpOutcome()>>(
			[this, request]()
			{
			return this->deleteBasicAccelerateIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DeleteBasicAccelerateIpEndpointRelationOutcome GaClient::deleteBasicAccelerateIpEndpointRelation(const DeleteBasicAccelerateIpEndpointRelationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBasicAccelerateIpEndpointRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBasicAccelerateIpEndpointRelationOutcome(DeleteBasicAccelerateIpEndpointRelationResult(outcome.result()));
	else
		return DeleteBasicAccelerateIpEndpointRelationOutcome(outcome.error());
}

void GaClient::deleteBasicAccelerateIpEndpointRelationAsync(const DeleteBasicAccelerateIpEndpointRelationRequest& request, const DeleteBasicAccelerateIpEndpointRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBasicAccelerateIpEndpointRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DeleteBasicAccelerateIpEndpointRelationOutcomeCallable GaClient::deleteBasicAccelerateIpEndpointRelationCallable(const DeleteBasicAccelerateIpEndpointRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBasicAccelerateIpEndpointRelationOutcome()>>(
			[this, request]()
			{
			return this->deleteBasicAccelerateIpEndpointRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DeleteBasicAcceleratorOutcome GaClient::deleteBasicAccelerator(const DeleteBasicAcceleratorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBasicAcceleratorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBasicAcceleratorOutcome(DeleteBasicAcceleratorResult(outcome.result()));
	else
		return DeleteBasicAcceleratorOutcome(outcome.error());
}

void GaClient::deleteBasicAcceleratorAsync(const DeleteBasicAcceleratorRequest& request, const DeleteBasicAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBasicAccelerator(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DeleteBasicAcceleratorOutcomeCallable GaClient::deleteBasicAcceleratorCallable(const DeleteBasicAcceleratorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBasicAcceleratorOutcome()>>(
			[this, request]()
			{
			return this->deleteBasicAccelerator(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DeleteBasicEndpointOutcome GaClient::deleteBasicEndpoint(const DeleteBasicEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBasicEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBasicEndpointOutcome(DeleteBasicEndpointResult(outcome.result()));
	else
		return DeleteBasicEndpointOutcome(outcome.error());
}

void GaClient::deleteBasicEndpointAsync(const DeleteBasicEndpointRequest& request, const DeleteBasicEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBasicEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DeleteBasicEndpointOutcomeCallable GaClient::deleteBasicEndpointCallable(const DeleteBasicEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBasicEndpointOutcome()>>(
			[this, request]()
			{
			return this->deleteBasicEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DeleteBasicEndpointGroupOutcome GaClient::deleteBasicEndpointGroup(const DeleteBasicEndpointGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBasicEndpointGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBasicEndpointGroupOutcome(DeleteBasicEndpointGroupResult(outcome.result()));
	else
		return DeleteBasicEndpointGroupOutcome(outcome.error());
}

void GaClient::deleteBasicEndpointGroupAsync(const DeleteBasicEndpointGroupRequest& request, const DeleteBasicEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBasicEndpointGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DeleteBasicEndpointGroupOutcomeCallable GaClient::deleteBasicEndpointGroupCallable(const DeleteBasicEndpointGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBasicEndpointGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteBasicEndpointGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DeleteBasicIpSetOutcome GaClient::deleteBasicIpSet(const DeleteBasicIpSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBasicIpSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBasicIpSetOutcome(DeleteBasicIpSetResult(outcome.result()));
	else
		return DeleteBasicIpSetOutcome(outcome.error());
}

void GaClient::deleteBasicIpSetAsync(const DeleteBasicIpSetRequest& request, const DeleteBasicIpSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBasicIpSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DeleteBasicIpSetOutcomeCallable GaClient::deleteBasicIpSetCallable(const DeleteBasicIpSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBasicIpSetOutcome()>>(
			[this, request]()
			{
			return this->deleteBasicIpSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DeleteCustomRoutingEndpointGroupDestinationsOutcome GaClient::deleteCustomRoutingEndpointGroupDestinations(const DeleteCustomRoutingEndpointGroupDestinationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCustomRoutingEndpointGroupDestinationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCustomRoutingEndpointGroupDestinationsOutcome(DeleteCustomRoutingEndpointGroupDestinationsResult(outcome.result()));
	else
		return DeleteCustomRoutingEndpointGroupDestinationsOutcome(outcome.error());
}

void GaClient::deleteCustomRoutingEndpointGroupDestinationsAsync(const DeleteCustomRoutingEndpointGroupDestinationsRequest& request, const DeleteCustomRoutingEndpointGroupDestinationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCustomRoutingEndpointGroupDestinations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DeleteCustomRoutingEndpointGroupDestinationsOutcomeCallable GaClient::deleteCustomRoutingEndpointGroupDestinationsCallable(const DeleteCustomRoutingEndpointGroupDestinationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCustomRoutingEndpointGroupDestinationsOutcome()>>(
			[this, request]()
			{
			return this->deleteCustomRoutingEndpointGroupDestinations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DeleteCustomRoutingEndpointGroupsOutcome GaClient::deleteCustomRoutingEndpointGroups(const DeleteCustomRoutingEndpointGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCustomRoutingEndpointGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCustomRoutingEndpointGroupsOutcome(DeleteCustomRoutingEndpointGroupsResult(outcome.result()));
	else
		return DeleteCustomRoutingEndpointGroupsOutcome(outcome.error());
}

void GaClient::deleteCustomRoutingEndpointGroupsAsync(const DeleteCustomRoutingEndpointGroupsRequest& request, const DeleteCustomRoutingEndpointGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCustomRoutingEndpointGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DeleteCustomRoutingEndpointGroupsOutcomeCallable GaClient::deleteCustomRoutingEndpointGroupsCallable(const DeleteCustomRoutingEndpointGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCustomRoutingEndpointGroupsOutcome()>>(
			[this, request]()
			{
			return this->deleteCustomRoutingEndpointGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DeleteCustomRoutingEndpointTrafficPoliciesOutcome GaClient::deleteCustomRoutingEndpointTrafficPolicies(const DeleteCustomRoutingEndpointTrafficPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCustomRoutingEndpointTrafficPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCustomRoutingEndpointTrafficPoliciesOutcome(DeleteCustomRoutingEndpointTrafficPoliciesResult(outcome.result()));
	else
		return DeleteCustomRoutingEndpointTrafficPoliciesOutcome(outcome.error());
}

void GaClient::deleteCustomRoutingEndpointTrafficPoliciesAsync(const DeleteCustomRoutingEndpointTrafficPoliciesRequest& request, const DeleteCustomRoutingEndpointTrafficPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCustomRoutingEndpointTrafficPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DeleteCustomRoutingEndpointTrafficPoliciesOutcomeCallable GaClient::deleteCustomRoutingEndpointTrafficPoliciesCallable(const DeleteCustomRoutingEndpointTrafficPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCustomRoutingEndpointTrafficPoliciesOutcome()>>(
			[this, request]()
			{
			return this->deleteCustomRoutingEndpointTrafficPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DeleteCustomRoutingEndpointsOutcome GaClient::deleteCustomRoutingEndpoints(const DeleteCustomRoutingEndpointsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCustomRoutingEndpointsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCustomRoutingEndpointsOutcome(DeleteCustomRoutingEndpointsResult(outcome.result()));
	else
		return DeleteCustomRoutingEndpointsOutcome(outcome.error());
}

void GaClient::deleteCustomRoutingEndpointsAsync(const DeleteCustomRoutingEndpointsRequest& request, const DeleteCustomRoutingEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCustomRoutingEndpoints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DeleteCustomRoutingEndpointsOutcomeCallable GaClient::deleteCustomRoutingEndpointsCallable(const DeleteCustomRoutingEndpointsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCustomRoutingEndpointsOutcome()>>(
			[this, request]()
			{
			return this->deleteCustomRoutingEndpoints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DeleteDomainAcceleratorRelationOutcome GaClient::deleteDomainAcceleratorRelation(const DeleteDomainAcceleratorRelationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDomainAcceleratorRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDomainAcceleratorRelationOutcome(DeleteDomainAcceleratorRelationResult(outcome.result()));
	else
		return DeleteDomainAcceleratorRelationOutcome(outcome.error());
}

void GaClient::deleteDomainAcceleratorRelationAsync(const DeleteDomainAcceleratorRelationRequest& request, const DeleteDomainAcceleratorRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDomainAcceleratorRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DeleteDomainAcceleratorRelationOutcomeCallable GaClient::deleteDomainAcceleratorRelationCallable(const DeleteDomainAcceleratorRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDomainAcceleratorRelationOutcome()>>(
			[this, request]()
			{
			return this->deleteDomainAcceleratorRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DeleteEndpointGroupOutcome GaClient::deleteEndpointGroup(const DeleteEndpointGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEndpointGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEndpointGroupOutcome(DeleteEndpointGroupResult(outcome.result()));
	else
		return DeleteEndpointGroupOutcome(outcome.error());
}

void GaClient::deleteEndpointGroupAsync(const DeleteEndpointGroupRequest& request, const DeleteEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEndpointGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DeleteEndpointGroupOutcomeCallable GaClient::deleteEndpointGroupCallable(const DeleteEndpointGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEndpointGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteEndpointGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DeleteEndpointGroupsOutcome GaClient::deleteEndpointGroups(const DeleteEndpointGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEndpointGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEndpointGroupsOutcome(DeleteEndpointGroupsResult(outcome.result()));
	else
		return DeleteEndpointGroupsOutcome(outcome.error());
}

void GaClient::deleteEndpointGroupsAsync(const DeleteEndpointGroupsRequest& request, const DeleteEndpointGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEndpointGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DeleteEndpointGroupsOutcomeCallable GaClient::deleteEndpointGroupsCallable(const DeleteEndpointGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEndpointGroupsOutcome()>>(
			[this, request]()
			{
			return this->deleteEndpointGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DeleteForwardingRulesOutcome GaClient::deleteForwardingRules(const DeleteForwardingRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteForwardingRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteForwardingRulesOutcome(DeleteForwardingRulesResult(outcome.result()));
	else
		return DeleteForwardingRulesOutcome(outcome.error());
}

void GaClient::deleteForwardingRulesAsync(const DeleteForwardingRulesRequest& request, const DeleteForwardingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteForwardingRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DeleteForwardingRulesOutcomeCallable GaClient::deleteForwardingRulesCallable(const DeleteForwardingRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteForwardingRulesOutcome()>>(
			[this, request]()
			{
			return this->deleteForwardingRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DeleteIpSetOutcome GaClient::deleteIpSet(const DeleteIpSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteIpSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteIpSetOutcome(DeleteIpSetResult(outcome.result()));
	else
		return DeleteIpSetOutcome(outcome.error());
}

void GaClient::deleteIpSetAsync(const DeleteIpSetRequest& request, const DeleteIpSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteIpSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DeleteIpSetOutcomeCallable GaClient::deleteIpSetCallable(const DeleteIpSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteIpSetOutcome()>>(
			[this, request]()
			{
			return this->deleteIpSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DeleteIpSetsOutcome GaClient::deleteIpSets(const DeleteIpSetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteIpSetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteIpSetsOutcome(DeleteIpSetsResult(outcome.result()));
	else
		return DeleteIpSetsOutcome(outcome.error());
}

void GaClient::deleteIpSetsAsync(const DeleteIpSetsRequest& request, const DeleteIpSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteIpSets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DeleteIpSetsOutcomeCallable GaClient::deleteIpSetsCallable(const DeleteIpSetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteIpSetsOutcome()>>(
			[this, request]()
			{
			return this->deleteIpSets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DeleteListenerOutcome GaClient::deleteListener(const DeleteListenerRequest &request) const
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

void GaClient::deleteListenerAsync(const DeleteListenerRequest& request, const DeleteListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DeleteListenerOutcomeCallable GaClient::deleteListenerCallable(const DeleteListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteListenerOutcome()>>(
			[this, request]()
			{
			return this->deleteListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DeleteSpareIpsOutcome GaClient::deleteSpareIps(const DeleteSpareIpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSpareIpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSpareIpsOutcome(DeleteSpareIpsResult(outcome.result()));
	else
		return DeleteSpareIpsOutcome(outcome.error());
}

void GaClient::deleteSpareIpsAsync(const DeleteSpareIpsRequest& request, const DeleteSpareIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSpareIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DeleteSpareIpsOutcomeCallable GaClient::deleteSpareIpsCallable(const DeleteSpareIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSpareIpsOutcome()>>(
			[this, request]()
			{
			return this->deleteSpareIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DescribeAcceleratorOutcome GaClient::describeAccelerator(const DescribeAcceleratorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAcceleratorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAcceleratorOutcome(DescribeAcceleratorResult(outcome.result()));
	else
		return DescribeAcceleratorOutcome(outcome.error());
}

void GaClient::describeAcceleratorAsync(const DescribeAcceleratorRequest& request, const DescribeAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccelerator(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DescribeAcceleratorOutcomeCallable GaClient::describeAcceleratorCallable(const DescribeAcceleratorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAcceleratorOutcome()>>(
			[this, request]()
			{
			return this->describeAccelerator(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DescribeAcceleratorAutoRenewAttributeOutcome GaClient::describeAcceleratorAutoRenewAttribute(const DescribeAcceleratorAutoRenewAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAcceleratorAutoRenewAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAcceleratorAutoRenewAttributeOutcome(DescribeAcceleratorAutoRenewAttributeResult(outcome.result()));
	else
		return DescribeAcceleratorAutoRenewAttributeOutcome(outcome.error());
}

void GaClient::describeAcceleratorAutoRenewAttributeAsync(const DescribeAcceleratorAutoRenewAttributeRequest& request, const DescribeAcceleratorAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAcceleratorAutoRenewAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DescribeAcceleratorAutoRenewAttributeOutcomeCallable GaClient::describeAcceleratorAutoRenewAttributeCallable(const DescribeAcceleratorAutoRenewAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAcceleratorAutoRenewAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeAcceleratorAutoRenewAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DescribeApplicationMonitorOutcome GaClient::describeApplicationMonitor(const DescribeApplicationMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApplicationMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApplicationMonitorOutcome(DescribeApplicationMonitorResult(outcome.result()));
	else
		return DescribeApplicationMonitorOutcome(outcome.error());
}

void GaClient::describeApplicationMonitorAsync(const DescribeApplicationMonitorRequest& request, const DescribeApplicationMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApplicationMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DescribeApplicationMonitorOutcomeCallable GaClient::describeApplicationMonitorCallable(const DescribeApplicationMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApplicationMonitorOutcome()>>(
			[this, request]()
			{
			return this->describeApplicationMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DescribeBandwidthPackageOutcome GaClient::describeBandwidthPackage(const DescribeBandwidthPackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBandwidthPackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBandwidthPackageOutcome(DescribeBandwidthPackageResult(outcome.result()));
	else
		return DescribeBandwidthPackageOutcome(outcome.error());
}

void GaClient::describeBandwidthPackageAsync(const DescribeBandwidthPackageRequest& request, const DescribeBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBandwidthPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DescribeBandwidthPackageOutcomeCallable GaClient::describeBandwidthPackageCallable(const DescribeBandwidthPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBandwidthPackageOutcome()>>(
			[this, request]()
			{
			return this->describeBandwidthPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DescribeBandwidthPackageAutoRenewAttributeOutcome GaClient::describeBandwidthPackageAutoRenewAttribute(const DescribeBandwidthPackageAutoRenewAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBandwidthPackageAutoRenewAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBandwidthPackageAutoRenewAttributeOutcome(DescribeBandwidthPackageAutoRenewAttributeResult(outcome.result()));
	else
		return DescribeBandwidthPackageAutoRenewAttributeOutcome(outcome.error());
}

void GaClient::describeBandwidthPackageAutoRenewAttributeAsync(const DescribeBandwidthPackageAutoRenewAttributeRequest& request, const DescribeBandwidthPackageAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBandwidthPackageAutoRenewAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DescribeBandwidthPackageAutoRenewAttributeOutcomeCallable GaClient::describeBandwidthPackageAutoRenewAttributeCallable(const DescribeBandwidthPackageAutoRenewAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBandwidthPackageAutoRenewAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeBandwidthPackageAutoRenewAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DescribeCommodityOutcome GaClient::describeCommodity(const DescribeCommodityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCommodityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCommodityOutcome(DescribeCommodityResult(outcome.result()));
	else
		return DescribeCommodityOutcome(outcome.error());
}

void GaClient::describeCommodityAsync(const DescribeCommodityRequest& request, const DescribeCommodityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCommodity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DescribeCommodityOutcomeCallable GaClient::describeCommodityCallable(const DescribeCommodityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCommodityOutcome()>>(
			[this, request]()
			{
			return this->describeCommodity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DescribeCommodityPriceOutcome GaClient::describeCommodityPrice(const DescribeCommodityPriceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCommodityPriceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCommodityPriceOutcome(DescribeCommodityPriceResult(outcome.result()));
	else
		return DescribeCommodityPriceOutcome(outcome.error());
}

void GaClient::describeCommodityPriceAsync(const DescribeCommodityPriceRequest& request, const DescribeCommodityPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCommodityPrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DescribeCommodityPriceOutcomeCallable GaClient::describeCommodityPriceCallable(const DescribeCommodityPriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCommodityPriceOutcome()>>(
			[this, request]()
			{
			return this->describeCommodityPrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DescribeCustomRoutingEndPointTrafficPolicyOutcome GaClient::describeCustomRoutingEndPointTrafficPolicy(const DescribeCustomRoutingEndPointTrafficPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCustomRoutingEndPointTrafficPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCustomRoutingEndPointTrafficPolicyOutcome(DescribeCustomRoutingEndPointTrafficPolicyResult(outcome.result()));
	else
		return DescribeCustomRoutingEndPointTrafficPolicyOutcome(outcome.error());
}

void GaClient::describeCustomRoutingEndPointTrafficPolicyAsync(const DescribeCustomRoutingEndPointTrafficPolicyRequest& request, const DescribeCustomRoutingEndPointTrafficPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustomRoutingEndPointTrafficPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DescribeCustomRoutingEndPointTrafficPolicyOutcomeCallable GaClient::describeCustomRoutingEndPointTrafficPolicyCallable(const DescribeCustomRoutingEndPointTrafficPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustomRoutingEndPointTrafficPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeCustomRoutingEndPointTrafficPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DescribeCustomRoutingEndpointOutcome GaClient::describeCustomRoutingEndpoint(const DescribeCustomRoutingEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCustomRoutingEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCustomRoutingEndpointOutcome(DescribeCustomRoutingEndpointResult(outcome.result()));
	else
		return DescribeCustomRoutingEndpointOutcome(outcome.error());
}

void GaClient::describeCustomRoutingEndpointAsync(const DescribeCustomRoutingEndpointRequest& request, const DescribeCustomRoutingEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustomRoutingEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DescribeCustomRoutingEndpointOutcomeCallable GaClient::describeCustomRoutingEndpointCallable(const DescribeCustomRoutingEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustomRoutingEndpointOutcome()>>(
			[this, request]()
			{
			return this->describeCustomRoutingEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DescribeCustomRoutingEndpointGroupOutcome GaClient::describeCustomRoutingEndpointGroup(const DescribeCustomRoutingEndpointGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCustomRoutingEndpointGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCustomRoutingEndpointGroupOutcome(DescribeCustomRoutingEndpointGroupResult(outcome.result()));
	else
		return DescribeCustomRoutingEndpointGroupOutcome(outcome.error());
}

void GaClient::describeCustomRoutingEndpointGroupAsync(const DescribeCustomRoutingEndpointGroupRequest& request, const DescribeCustomRoutingEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustomRoutingEndpointGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DescribeCustomRoutingEndpointGroupOutcomeCallable GaClient::describeCustomRoutingEndpointGroupCallable(const DescribeCustomRoutingEndpointGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustomRoutingEndpointGroupOutcome()>>(
			[this, request]()
			{
			return this->describeCustomRoutingEndpointGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DescribeCustomRoutingEndpointGroupDestinationsOutcome GaClient::describeCustomRoutingEndpointGroupDestinations(const DescribeCustomRoutingEndpointGroupDestinationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCustomRoutingEndpointGroupDestinationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCustomRoutingEndpointGroupDestinationsOutcome(DescribeCustomRoutingEndpointGroupDestinationsResult(outcome.result()));
	else
		return DescribeCustomRoutingEndpointGroupDestinationsOutcome(outcome.error());
}

void GaClient::describeCustomRoutingEndpointGroupDestinationsAsync(const DescribeCustomRoutingEndpointGroupDestinationsRequest& request, const DescribeCustomRoutingEndpointGroupDestinationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustomRoutingEndpointGroupDestinations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DescribeCustomRoutingEndpointGroupDestinationsOutcomeCallable GaClient::describeCustomRoutingEndpointGroupDestinationsCallable(const DescribeCustomRoutingEndpointGroupDestinationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustomRoutingEndpointGroupDestinationsOutcome()>>(
			[this, request]()
			{
			return this->describeCustomRoutingEndpointGroupDestinations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DescribeEndpointGroupOutcome GaClient::describeEndpointGroup(const DescribeEndpointGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEndpointGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEndpointGroupOutcome(DescribeEndpointGroupResult(outcome.result()));
	else
		return DescribeEndpointGroupOutcome(outcome.error());
}

void GaClient::describeEndpointGroupAsync(const DescribeEndpointGroupRequest& request, const DescribeEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEndpointGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DescribeEndpointGroupOutcomeCallable GaClient::describeEndpointGroupCallable(const DescribeEndpointGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEndpointGroupOutcome()>>(
			[this, request]()
			{
			return this->describeEndpointGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DescribeIpSetOutcome GaClient::describeIpSet(const DescribeIpSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIpSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIpSetOutcome(DescribeIpSetResult(outcome.result()));
	else
		return DescribeIpSetOutcome(outcome.error());
}

void GaClient::describeIpSetAsync(const DescribeIpSetRequest& request, const DescribeIpSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIpSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DescribeIpSetOutcomeCallable GaClient::describeIpSetCallable(const DescribeIpSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIpSetOutcome()>>(
			[this, request]()
			{
			return this->describeIpSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DescribeListenerOutcome GaClient::describeListener(const DescribeListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeListenerOutcome(DescribeListenerResult(outcome.result()));
	else
		return DescribeListenerOutcome(outcome.error());
}

void GaClient::describeListenerAsync(const DescribeListenerRequest& request, const DescribeListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DescribeListenerOutcomeCallable GaClient::describeListenerCallable(const DescribeListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeListenerOutcome()>>(
			[this, request]()
			{
			return this->describeListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DescribeRegionsOutcome GaClient::describeRegions(const DescribeRegionsRequest &request) const
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

void GaClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DescribeRegionsOutcomeCallable GaClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DetachDdosFromAcceleratorOutcome GaClient::detachDdosFromAccelerator(const DetachDdosFromAcceleratorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachDdosFromAcceleratorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachDdosFromAcceleratorOutcome(DetachDdosFromAcceleratorResult(outcome.result()));
	else
		return DetachDdosFromAcceleratorOutcome(outcome.error());
}

void GaClient::detachDdosFromAcceleratorAsync(const DetachDdosFromAcceleratorRequest& request, const DetachDdosFromAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachDdosFromAccelerator(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DetachDdosFromAcceleratorOutcomeCallable GaClient::detachDdosFromAcceleratorCallable(const DetachDdosFromAcceleratorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachDdosFromAcceleratorOutcome()>>(
			[this, request]()
			{
			return this->detachDdosFromAccelerator(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DetachLogStoreFromEndpointGroupOutcome GaClient::detachLogStoreFromEndpointGroup(const DetachLogStoreFromEndpointGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachLogStoreFromEndpointGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachLogStoreFromEndpointGroupOutcome(DetachLogStoreFromEndpointGroupResult(outcome.result()));
	else
		return DetachLogStoreFromEndpointGroupOutcome(outcome.error());
}

void GaClient::detachLogStoreFromEndpointGroupAsync(const DetachLogStoreFromEndpointGroupRequest& request, const DetachLogStoreFromEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachLogStoreFromEndpointGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DetachLogStoreFromEndpointGroupOutcomeCallable GaClient::detachLogStoreFromEndpointGroupCallable(const DetachLogStoreFromEndpointGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachLogStoreFromEndpointGroupOutcome()>>(
			[this, request]()
			{
			return this->detachLogStoreFromEndpointGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DetectApplicationMonitorOutcome GaClient::detectApplicationMonitor(const DetectApplicationMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectApplicationMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectApplicationMonitorOutcome(DetectApplicationMonitorResult(outcome.result()));
	else
		return DetectApplicationMonitorOutcome(outcome.error());
}

void GaClient::detectApplicationMonitorAsync(const DetectApplicationMonitorRequest& request, const DetectApplicationMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectApplicationMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DetectApplicationMonitorOutcomeCallable GaClient::detectApplicationMonitorCallable(const DetectApplicationMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectApplicationMonitorOutcome()>>(
			[this, request]()
			{
			return this->detectApplicationMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DisableApplicationMonitorOutcome GaClient::disableApplicationMonitor(const DisableApplicationMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableApplicationMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableApplicationMonitorOutcome(DisableApplicationMonitorResult(outcome.result()));
	else
		return DisableApplicationMonitorOutcome(outcome.error());
}

void GaClient::disableApplicationMonitorAsync(const DisableApplicationMonitorRequest& request, const DisableApplicationMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableApplicationMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DisableApplicationMonitorOutcomeCallable GaClient::disableApplicationMonitorCallable(const DisableApplicationMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableApplicationMonitorOutcome()>>(
			[this, request]()
			{
			return this->disableApplicationMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DissociateAclsFromListenerOutcome GaClient::dissociateAclsFromListener(const DissociateAclsFromListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DissociateAclsFromListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DissociateAclsFromListenerOutcome(DissociateAclsFromListenerResult(outcome.result()));
	else
		return DissociateAclsFromListenerOutcome(outcome.error());
}

void GaClient::dissociateAclsFromListenerAsync(const DissociateAclsFromListenerRequest& request, const DissociateAclsFromListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dissociateAclsFromListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DissociateAclsFromListenerOutcomeCallable GaClient::dissociateAclsFromListenerCallable(const DissociateAclsFromListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DissociateAclsFromListenerOutcome()>>(
			[this, request]()
			{
			return this->dissociateAclsFromListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::DissociateAdditionalCertificatesFromListenerOutcome GaClient::dissociateAdditionalCertificatesFromListener(const DissociateAdditionalCertificatesFromListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DissociateAdditionalCertificatesFromListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DissociateAdditionalCertificatesFromListenerOutcome(DissociateAdditionalCertificatesFromListenerResult(outcome.result()));
	else
		return DissociateAdditionalCertificatesFromListenerOutcome(outcome.error());
}

void GaClient::dissociateAdditionalCertificatesFromListenerAsync(const DissociateAdditionalCertificatesFromListenerRequest& request, const DissociateAdditionalCertificatesFromListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dissociateAdditionalCertificatesFromListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::DissociateAdditionalCertificatesFromListenerOutcomeCallable GaClient::dissociateAdditionalCertificatesFromListenerCallable(const DissociateAdditionalCertificatesFromListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DissociateAdditionalCertificatesFromListenerOutcome()>>(
			[this, request]()
			{
			return this->dissociateAdditionalCertificatesFromListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::EnableApplicationMonitorOutcome GaClient::enableApplicationMonitor(const EnableApplicationMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableApplicationMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableApplicationMonitorOutcome(EnableApplicationMonitorResult(outcome.result()));
	else
		return EnableApplicationMonitorOutcome(outcome.error());
}

void GaClient::enableApplicationMonitorAsync(const EnableApplicationMonitorRequest& request, const EnableApplicationMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableApplicationMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::EnableApplicationMonitorOutcomeCallable GaClient::enableApplicationMonitorCallable(const EnableApplicationMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableApplicationMonitorOutcome()>>(
			[this, request]()
			{
			return this->enableApplicationMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::GetAclOutcome GaClient::getAcl(const GetAclRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAclOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAclOutcome(GetAclResult(outcome.result()));
	else
		return GetAclOutcome(outcome.error());
}

void GaClient::getAclAsync(const GetAclRequest& request, const GetAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::GetAclOutcomeCallable GaClient::getAclCallable(const GetAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAclOutcome()>>(
			[this, request]()
			{
			return this->getAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::GetBasicAccelerateIpOutcome GaClient::getBasicAccelerateIp(const GetBasicAccelerateIpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBasicAccelerateIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBasicAccelerateIpOutcome(GetBasicAccelerateIpResult(outcome.result()));
	else
		return GetBasicAccelerateIpOutcome(outcome.error());
}

void GaClient::getBasicAccelerateIpAsync(const GetBasicAccelerateIpRequest& request, const GetBasicAccelerateIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBasicAccelerateIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::GetBasicAccelerateIpOutcomeCallable GaClient::getBasicAccelerateIpCallable(const GetBasicAccelerateIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBasicAccelerateIpOutcome()>>(
			[this, request]()
			{
			return this->getBasicAccelerateIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::GetBasicAccelerateIpEndpointRelationOutcome GaClient::getBasicAccelerateIpEndpointRelation(const GetBasicAccelerateIpEndpointRelationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBasicAccelerateIpEndpointRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBasicAccelerateIpEndpointRelationOutcome(GetBasicAccelerateIpEndpointRelationResult(outcome.result()));
	else
		return GetBasicAccelerateIpEndpointRelationOutcome(outcome.error());
}

void GaClient::getBasicAccelerateIpEndpointRelationAsync(const GetBasicAccelerateIpEndpointRelationRequest& request, const GetBasicAccelerateIpEndpointRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBasicAccelerateIpEndpointRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::GetBasicAccelerateIpEndpointRelationOutcomeCallable GaClient::getBasicAccelerateIpEndpointRelationCallable(const GetBasicAccelerateIpEndpointRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBasicAccelerateIpEndpointRelationOutcome()>>(
			[this, request]()
			{
			return this->getBasicAccelerateIpEndpointRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::GetBasicAccelerateIpIdleCountOutcome GaClient::getBasicAccelerateIpIdleCount(const GetBasicAccelerateIpIdleCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBasicAccelerateIpIdleCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBasicAccelerateIpIdleCountOutcome(GetBasicAccelerateIpIdleCountResult(outcome.result()));
	else
		return GetBasicAccelerateIpIdleCountOutcome(outcome.error());
}

void GaClient::getBasicAccelerateIpIdleCountAsync(const GetBasicAccelerateIpIdleCountRequest& request, const GetBasicAccelerateIpIdleCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBasicAccelerateIpIdleCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::GetBasicAccelerateIpIdleCountOutcomeCallable GaClient::getBasicAccelerateIpIdleCountCallable(const GetBasicAccelerateIpIdleCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBasicAccelerateIpIdleCountOutcome()>>(
			[this, request]()
			{
			return this->getBasicAccelerateIpIdleCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::GetBasicAcceleratorOutcome GaClient::getBasicAccelerator(const GetBasicAcceleratorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBasicAcceleratorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBasicAcceleratorOutcome(GetBasicAcceleratorResult(outcome.result()));
	else
		return GetBasicAcceleratorOutcome(outcome.error());
}

void GaClient::getBasicAcceleratorAsync(const GetBasicAcceleratorRequest& request, const GetBasicAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBasicAccelerator(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::GetBasicAcceleratorOutcomeCallable GaClient::getBasicAcceleratorCallable(const GetBasicAcceleratorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBasicAcceleratorOutcome()>>(
			[this, request]()
			{
			return this->getBasicAccelerator(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::GetBasicEndpointOutcome GaClient::getBasicEndpoint(const GetBasicEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBasicEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBasicEndpointOutcome(GetBasicEndpointResult(outcome.result()));
	else
		return GetBasicEndpointOutcome(outcome.error());
}

void GaClient::getBasicEndpointAsync(const GetBasicEndpointRequest& request, const GetBasicEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBasicEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::GetBasicEndpointOutcomeCallable GaClient::getBasicEndpointCallable(const GetBasicEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBasicEndpointOutcome()>>(
			[this, request]()
			{
			return this->getBasicEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::GetBasicEndpointGroupOutcome GaClient::getBasicEndpointGroup(const GetBasicEndpointGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBasicEndpointGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBasicEndpointGroupOutcome(GetBasicEndpointGroupResult(outcome.result()));
	else
		return GetBasicEndpointGroupOutcome(outcome.error());
}

void GaClient::getBasicEndpointGroupAsync(const GetBasicEndpointGroupRequest& request, const GetBasicEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBasicEndpointGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::GetBasicEndpointGroupOutcomeCallable GaClient::getBasicEndpointGroupCallable(const GetBasicEndpointGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBasicEndpointGroupOutcome()>>(
			[this, request]()
			{
			return this->getBasicEndpointGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::GetBasicIpSetOutcome GaClient::getBasicIpSet(const GetBasicIpSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBasicIpSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBasicIpSetOutcome(GetBasicIpSetResult(outcome.result()));
	else
		return GetBasicIpSetOutcome(outcome.error());
}

void GaClient::getBasicIpSetAsync(const GetBasicIpSetRequest& request, const GetBasicIpSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBasicIpSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::GetBasicIpSetOutcomeCallable GaClient::getBasicIpSetCallable(const GetBasicIpSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBasicIpSetOutcome()>>(
			[this, request]()
			{
			return this->getBasicIpSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::GetHealthStatusOutcome GaClient::getHealthStatus(const GetHealthStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHealthStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHealthStatusOutcome(GetHealthStatusResult(outcome.result()));
	else
		return GetHealthStatusOutcome(outcome.error());
}

void GaClient::getHealthStatusAsync(const GetHealthStatusRequest& request, const GetHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHealthStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::GetHealthStatusOutcomeCallable GaClient::getHealthStatusCallable(const GetHealthStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHealthStatusOutcome()>>(
			[this, request]()
			{
			return this->getHealthStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::GetInvalidDomainCountOutcome GaClient::getInvalidDomainCount(const GetInvalidDomainCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInvalidDomainCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInvalidDomainCountOutcome(GetInvalidDomainCountResult(outcome.result()));
	else
		return GetInvalidDomainCountOutcome(outcome.error());
}

void GaClient::getInvalidDomainCountAsync(const GetInvalidDomainCountRequest& request, const GetInvalidDomainCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInvalidDomainCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::GetInvalidDomainCountOutcomeCallable GaClient::getInvalidDomainCountCallable(const GetInvalidDomainCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInvalidDomainCountOutcome()>>(
			[this, request]()
			{
			return this->getInvalidDomainCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::GetIpsetsBandwidthLimitOutcome GaClient::getIpsetsBandwidthLimit(const GetIpsetsBandwidthLimitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetIpsetsBandwidthLimitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetIpsetsBandwidthLimitOutcome(GetIpsetsBandwidthLimitResult(outcome.result()));
	else
		return GetIpsetsBandwidthLimitOutcome(outcome.error());
}

void GaClient::getIpsetsBandwidthLimitAsync(const GetIpsetsBandwidthLimitRequest& request, const GetIpsetsBandwidthLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getIpsetsBandwidthLimit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::GetIpsetsBandwidthLimitOutcomeCallable GaClient::getIpsetsBandwidthLimitCallable(const GetIpsetsBandwidthLimitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetIpsetsBandwidthLimitOutcome()>>(
			[this, request]()
			{
			return this->getIpsetsBandwidthLimit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::GetSpareIpOutcome GaClient::getSpareIp(const GetSpareIpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSpareIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSpareIpOutcome(GetSpareIpResult(outcome.result()));
	else
		return GetSpareIpOutcome(outcome.error());
}

void GaClient::getSpareIpAsync(const GetSpareIpRequest& request, const GetSpareIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSpareIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::GetSpareIpOutcomeCallable GaClient::getSpareIpCallable(const GetSpareIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSpareIpOutcome()>>(
			[this, request]()
			{
			return this->getSpareIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListAccelerateAreasOutcome GaClient::listAccelerateAreas(const ListAccelerateAreasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAccelerateAreasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAccelerateAreasOutcome(ListAccelerateAreasResult(outcome.result()));
	else
		return ListAccelerateAreasOutcome(outcome.error());
}

void GaClient::listAccelerateAreasAsync(const ListAccelerateAreasRequest& request, const ListAccelerateAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAccelerateAreas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListAccelerateAreasOutcomeCallable GaClient::listAccelerateAreasCallable(const ListAccelerateAreasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAccelerateAreasOutcome()>>(
			[this, request]()
			{
			return this->listAccelerateAreas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListAcceleratorsOutcome GaClient::listAccelerators(const ListAcceleratorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAcceleratorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAcceleratorsOutcome(ListAcceleratorsResult(outcome.result()));
	else
		return ListAcceleratorsOutcome(outcome.error());
}

void GaClient::listAcceleratorsAsync(const ListAcceleratorsRequest& request, const ListAcceleratorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAccelerators(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListAcceleratorsOutcomeCallable GaClient::listAcceleratorsCallable(const ListAcceleratorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAcceleratorsOutcome()>>(
			[this, request]()
			{
			return this->listAccelerators(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListAclsOutcome GaClient::listAcls(const ListAclsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAclsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAclsOutcome(ListAclsResult(outcome.result()));
	else
		return ListAclsOutcome(outcome.error());
}

void GaClient::listAclsAsync(const ListAclsRequest& request, const ListAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAcls(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListAclsOutcomeCallable GaClient::listAclsCallable(const ListAclsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAclsOutcome()>>(
			[this, request]()
			{
			return this->listAcls(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListApplicationMonitorOutcome GaClient::listApplicationMonitor(const ListApplicationMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationMonitorOutcome(ListApplicationMonitorResult(outcome.result()));
	else
		return ListApplicationMonitorOutcome(outcome.error());
}

void GaClient::listApplicationMonitorAsync(const ListApplicationMonitorRequest& request, const ListApplicationMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplicationMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListApplicationMonitorOutcomeCallable GaClient::listApplicationMonitorCallable(const ListApplicationMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationMonitorOutcome()>>(
			[this, request]()
			{
			return this->listApplicationMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListApplicationMonitorDetectResultOutcome GaClient::listApplicationMonitorDetectResult(const ListApplicationMonitorDetectResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationMonitorDetectResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationMonitorDetectResultOutcome(ListApplicationMonitorDetectResultResult(outcome.result()));
	else
		return ListApplicationMonitorDetectResultOutcome(outcome.error());
}

void GaClient::listApplicationMonitorDetectResultAsync(const ListApplicationMonitorDetectResultRequest& request, const ListApplicationMonitorDetectResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplicationMonitorDetectResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListApplicationMonitorDetectResultOutcomeCallable GaClient::listApplicationMonitorDetectResultCallable(const ListApplicationMonitorDetectResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationMonitorDetectResultOutcome()>>(
			[this, request]()
			{
			return this->listApplicationMonitorDetectResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListAvailableAccelerateAreasOutcome GaClient::listAvailableAccelerateAreas(const ListAvailableAccelerateAreasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAvailableAccelerateAreasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAvailableAccelerateAreasOutcome(ListAvailableAccelerateAreasResult(outcome.result()));
	else
		return ListAvailableAccelerateAreasOutcome(outcome.error());
}

void GaClient::listAvailableAccelerateAreasAsync(const ListAvailableAccelerateAreasRequest& request, const ListAvailableAccelerateAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAvailableAccelerateAreas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListAvailableAccelerateAreasOutcomeCallable GaClient::listAvailableAccelerateAreasCallable(const ListAvailableAccelerateAreasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAvailableAccelerateAreasOutcome()>>(
			[this, request]()
			{
			return this->listAvailableAccelerateAreas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListAvailableBusiRegionsOutcome GaClient::listAvailableBusiRegions(const ListAvailableBusiRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAvailableBusiRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAvailableBusiRegionsOutcome(ListAvailableBusiRegionsResult(outcome.result()));
	else
		return ListAvailableBusiRegionsOutcome(outcome.error());
}

void GaClient::listAvailableBusiRegionsAsync(const ListAvailableBusiRegionsRequest& request, const ListAvailableBusiRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAvailableBusiRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListAvailableBusiRegionsOutcomeCallable GaClient::listAvailableBusiRegionsCallable(const ListAvailableBusiRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAvailableBusiRegionsOutcome()>>(
			[this, request]()
			{
			return this->listAvailableBusiRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListBandwidthPackagesOutcome GaClient::listBandwidthPackages(const ListBandwidthPackagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBandwidthPackagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBandwidthPackagesOutcome(ListBandwidthPackagesResult(outcome.result()));
	else
		return ListBandwidthPackagesOutcome(outcome.error());
}

void GaClient::listBandwidthPackagesAsync(const ListBandwidthPackagesRequest& request, const ListBandwidthPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBandwidthPackages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListBandwidthPackagesOutcomeCallable GaClient::listBandwidthPackagesCallable(const ListBandwidthPackagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBandwidthPackagesOutcome()>>(
			[this, request]()
			{
			return this->listBandwidthPackages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListBandwidthackagesOutcome GaClient::listBandwidthackages(const ListBandwidthackagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBandwidthackagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBandwidthackagesOutcome(ListBandwidthackagesResult(outcome.result()));
	else
		return ListBandwidthackagesOutcome(outcome.error());
}

void GaClient::listBandwidthackagesAsync(const ListBandwidthackagesRequest& request, const ListBandwidthackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBandwidthackages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListBandwidthackagesOutcomeCallable GaClient::listBandwidthackagesCallable(const ListBandwidthackagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBandwidthackagesOutcome()>>(
			[this, request]()
			{
			return this->listBandwidthackages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListBasicAccelerateIpEndpointRelationsOutcome GaClient::listBasicAccelerateIpEndpointRelations(const ListBasicAccelerateIpEndpointRelationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBasicAccelerateIpEndpointRelationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBasicAccelerateIpEndpointRelationsOutcome(ListBasicAccelerateIpEndpointRelationsResult(outcome.result()));
	else
		return ListBasicAccelerateIpEndpointRelationsOutcome(outcome.error());
}

void GaClient::listBasicAccelerateIpEndpointRelationsAsync(const ListBasicAccelerateIpEndpointRelationsRequest& request, const ListBasicAccelerateIpEndpointRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBasicAccelerateIpEndpointRelations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListBasicAccelerateIpEndpointRelationsOutcomeCallable GaClient::listBasicAccelerateIpEndpointRelationsCallable(const ListBasicAccelerateIpEndpointRelationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBasicAccelerateIpEndpointRelationsOutcome()>>(
			[this, request]()
			{
			return this->listBasicAccelerateIpEndpointRelations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListBasicAccelerateIpsOutcome GaClient::listBasicAccelerateIps(const ListBasicAccelerateIpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBasicAccelerateIpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBasicAccelerateIpsOutcome(ListBasicAccelerateIpsResult(outcome.result()));
	else
		return ListBasicAccelerateIpsOutcome(outcome.error());
}

void GaClient::listBasicAccelerateIpsAsync(const ListBasicAccelerateIpsRequest& request, const ListBasicAccelerateIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBasicAccelerateIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListBasicAccelerateIpsOutcomeCallable GaClient::listBasicAccelerateIpsCallable(const ListBasicAccelerateIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBasicAccelerateIpsOutcome()>>(
			[this, request]()
			{
			return this->listBasicAccelerateIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListBasicAcceleratorsOutcome GaClient::listBasicAccelerators(const ListBasicAcceleratorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBasicAcceleratorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBasicAcceleratorsOutcome(ListBasicAcceleratorsResult(outcome.result()));
	else
		return ListBasicAcceleratorsOutcome(outcome.error());
}

void GaClient::listBasicAcceleratorsAsync(const ListBasicAcceleratorsRequest& request, const ListBasicAcceleratorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBasicAccelerators(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListBasicAcceleratorsOutcomeCallable GaClient::listBasicAcceleratorsCallable(const ListBasicAcceleratorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBasicAcceleratorsOutcome()>>(
			[this, request]()
			{
			return this->listBasicAccelerators(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListBasicEndpointsOutcome GaClient::listBasicEndpoints(const ListBasicEndpointsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBasicEndpointsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBasicEndpointsOutcome(ListBasicEndpointsResult(outcome.result()));
	else
		return ListBasicEndpointsOutcome(outcome.error());
}

void GaClient::listBasicEndpointsAsync(const ListBasicEndpointsRequest& request, const ListBasicEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBasicEndpoints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListBasicEndpointsOutcomeCallable GaClient::listBasicEndpointsCallable(const ListBasicEndpointsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBasicEndpointsOutcome()>>(
			[this, request]()
			{
			return this->listBasicEndpoints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListBusiRegionsOutcome GaClient::listBusiRegions(const ListBusiRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBusiRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBusiRegionsOutcome(ListBusiRegionsResult(outcome.result()));
	else
		return ListBusiRegionsOutcome(outcome.error());
}

void GaClient::listBusiRegionsAsync(const ListBusiRegionsRequest& request, const ListBusiRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBusiRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListBusiRegionsOutcomeCallable GaClient::listBusiRegionsCallable(const ListBusiRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBusiRegionsOutcome()>>(
			[this, request]()
			{
			return this->listBusiRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListCommonAreasOutcome GaClient::listCommonAreas(const ListCommonAreasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCommonAreasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCommonAreasOutcome(ListCommonAreasResult(outcome.result()));
	else
		return ListCommonAreasOutcome(outcome.error());
}

void GaClient::listCommonAreasAsync(const ListCommonAreasRequest& request, const ListCommonAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCommonAreas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListCommonAreasOutcomeCallable GaClient::listCommonAreasCallable(const ListCommonAreasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCommonAreasOutcome()>>(
			[this, request]()
			{
			return this->listCommonAreas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListCustomRoutingEndpointGroupDestinationsOutcome GaClient::listCustomRoutingEndpointGroupDestinations(const ListCustomRoutingEndpointGroupDestinationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCustomRoutingEndpointGroupDestinationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCustomRoutingEndpointGroupDestinationsOutcome(ListCustomRoutingEndpointGroupDestinationsResult(outcome.result()));
	else
		return ListCustomRoutingEndpointGroupDestinationsOutcome(outcome.error());
}

void GaClient::listCustomRoutingEndpointGroupDestinationsAsync(const ListCustomRoutingEndpointGroupDestinationsRequest& request, const ListCustomRoutingEndpointGroupDestinationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCustomRoutingEndpointGroupDestinations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListCustomRoutingEndpointGroupDestinationsOutcomeCallable GaClient::listCustomRoutingEndpointGroupDestinationsCallable(const ListCustomRoutingEndpointGroupDestinationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCustomRoutingEndpointGroupDestinationsOutcome()>>(
			[this, request]()
			{
			return this->listCustomRoutingEndpointGroupDestinations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListCustomRoutingEndpointGroupsOutcome GaClient::listCustomRoutingEndpointGroups(const ListCustomRoutingEndpointGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCustomRoutingEndpointGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCustomRoutingEndpointGroupsOutcome(ListCustomRoutingEndpointGroupsResult(outcome.result()));
	else
		return ListCustomRoutingEndpointGroupsOutcome(outcome.error());
}

void GaClient::listCustomRoutingEndpointGroupsAsync(const ListCustomRoutingEndpointGroupsRequest& request, const ListCustomRoutingEndpointGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCustomRoutingEndpointGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListCustomRoutingEndpointGroupsOutcomeCallable GaClient::listCustomRoutingEndpointGroupsCallable(const ListCustomRoutingEndpointGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCustomRoutingEndpointGroupsOutcome()>>(
			[this, request]()
			{
			return this->listCustomRoutingEndpointGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListCustomRoutingEndpointTrafficPoliciesOutcome GaClient::listCustomRoutingEndpointTrafficPolicies(const ListCustomRoutingEndpointTrafficPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCustomRoutingEndpointTrafficPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCustomRoutingEndpointTrafficPoliciesOutcome(ListCustomRoutingEndpointTrafficPoliciesResult(outcome.result()));
	else
		return ListCustomRoutingEndpointTrafficPoliciesOutcome(outcome.error());
}

void GaClient::listCustomRoutingEndpointTrafficPoliciesAsync(const ListCustomRoutingEndpointTrafficPoliciesRequest& request, const ListCustomRoutingEndpointTrafficPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCustomRoutingEndpointTrafficPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListCustomRoutingEndpointTrafficPoliciesOutcomeCallable GaClient::listCustomRoutingEndpointTrafficPoliciesCallable(const ListCustomRoutingEndpointTrafficPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCustomRoutingEndpointTrafficPoliciesOutcome()>>(
			[this, request]()
			{
			return this->listCustomRoutingEndpointTrafficPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListCustomRoutingEndpointsOutcome GaClient::listCustomRoutingEndpoints(const ListCustomRoutingEndpointsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCustomRoutingEndpointsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCustomRoutingEndpointsOutcome(ListCustomRoutingEndpointsResult(outcome.result()));
	else
		return ListCustomRoutingEndpointsOutcome(outcome.error());
}

void GaClient::listCustomRoutingEndpointsAsync(const ListCustomRoutingEndpointsRequest& request, const ListCustomRoutingEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCustomRoutingEndpoints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListCustomRoutingEndpointsOutcomeCallable GaClient::listCustomRoutingEndpointsCallable(const ListCustomRoutingEndpointsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCustomRoutingEndpointsOutcome()>>(
			[this, request]()
			{
			return this->listCustomRoutingEndpoints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListCustomRoutingPortMappingsOutcome GaClient::listCustomRoutingPortMappings(const ListCustomRoutingPortMappingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCustomRoutingPortMappingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCustomRoutingPortMappingsOutcome(ListCustomRoutingPortMappingsResult(outcome.result()));
	else
		return ListCustomRoutingPortMappingsOutcome(outcome.error());
}

void GaClient::listCustomRoutingPortMappingsAsync(const ListCustomRoutingPortMappingsRequest& request, const ListCustomRoutingPortMappingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCustomRoutingPortMappings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListCustomRoutingPortMappingsOutcomeCallable GaClient::listCustomRoutingPortMappingsCallable(const ListCustomRoutingPortMappingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCustomRoutingPortMappingsOutcome()>>(
			[this, request]()
			{
			return this->listCustomRoutingPortMappings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListCustomRoutingPortMappingsByDestinationOutcome GaClient::listCustomRoutingPortMappingsByDestination(const ListCustomRoutingPortMappingsByDestinationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCustomRoutingPortMappingsByDestinationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCustomRoutingPortMappingsByDestinationOutcome(ListCustomRoutingPortMappingsByDestinationResult(outcome.result()));
	else
		return ListCustomRoutingPortMappingsByDestinationOutcome(outcome.error());
}

void GaClient::listCustomRoutingPortMappingsByDestinationAsync(const ListCustomRoutingPortMappingsByDestinationRequest& request, const ListCustomRoutingPortMappingsByDestinationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCustomRoutingPortMappingsByDestination(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListCustomRoutingPortMappingsByDestinationOutcomeCallable GaClient::listCustomRoutingPortMappingsByDestinationCallable(const ListCustomRoutingPortMappingsByDestinationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCustomRoutingPortMappingsByDestinationOutcome()>>(
			[this, request]()
			{
			return this->listCustomRoutingPortMappingsByDestination(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListDomainsOutcome GaClient::listDomains(const ListDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDomainsOutcome(ListDomainsResult(outcome.result()));
	else
		return ListDomainsOutcome(outcome.error());
}

void GaClient::listDomainsAsync(const ListDomainsRequest& request, const ListDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListDomainsOutcomeCallable GaClient::listDomainsCallable(const ListDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDomainsOutcome()>>(
			[this, request]()
			{
			return this->listDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListEndpointGroupsOutcome GaClient::listEndpointGroups(const ListEndpointGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEndpointGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEndpointGroupsOutcome(ListEndpointGroupsResult(outcome.result()));
	else
		return ListEndpointGroupsOutcome(outcome.error());
}

void GaClient::listEndpointGroupsAsync(const ListEndpointGroupsRequest& request, const ListEndpointGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEndpointGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListEndpointGroupsOutcomeCallable GaClient::listEndpointGroupsCallable(const ListEndpointGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEndpointGroupsOutcome()>>(
			[this, request]()
			{
			return this->listEndpointGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListForwardingRulesOutcome GaClient::listForwardingRules(const ListForwardingRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListForwardingRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListForwardingRulesOutcome(ListForwardingRulesResult(outcome.result()));
	else
		return ListForwardingRulesOutcome(outcome.error());
}

void GaClient::listForwardingRulesAsync(const ListForwardingRulesRequest& request, const ListForwardingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listForwardingRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListForwardingRulesOutcomeCallable GaClient::listForwardingRulesCallable(const ListForwardingRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListForwardingRulesOutcome()>>(
			[this, request]()
			{
			return this->listForwardingRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListIpSetsOutcome GaClient::listIpSets(const ListIpSetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListIpSetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListIpSetsOutcome(ListIpSetsResult(outcome.result()));
	else
		return ListIpSetsOutcome(outcome.error());
}

void GaClient::listIpSetsAsync(const ListIpSetsRequest& request, const ListIpSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listIpSets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListIpSetsOutcomeCallable GaClient::listIpSetsCallable(const ListIpSetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListIpSetsOutcome()>>(
			[this, request]()
			{
			return this->listIpSets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListIspTypesOutcome GaClient::listIspTypes(const ListIspTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListIspTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListIspTypesOutcome(ListIspTypesResult(outcome.result()));
	else
		return ListIspTypesOutcome(outcome.error());
}

void GaClient::listIspTypesAsync(const ListIspTypesRequest& request, const ListIspTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listIspTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListIspTypesOutcomeCallable GaClient::listIspTypesCallable(const ListIspTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListIspTypesOutcome()>>(
			[this, request]()
			{
			return this->listIspTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListListenerCertificatesOutcome GaClient::listListenerCertificates(const ListListenerCertificatesRequest &request) const
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

void GaClient::listListenerCertificatesAsync(const ListListenerCertificatesRequest& request, const ListListenerCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listListenerCertificates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListListenerCertificatesOutcomeCallable GaClient::listListenerCertificatesCallable(const ListListenerCertificatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListListenerCertificatesOutcome()>>(
			[this, request]()
			{
			return this->listListenerCertificates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListListenersOutcome GaClient::listListeners(const ListListenersRequest &request) const
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

void GaClient::listListenersAsync(const ListListenersRequest& request, const ListListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listListeners(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListListenersOutcomeCallable GaClient::listListenersCallable(const ListListenersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListListenersOutcome()>>(
			[this, request]()
			{
			return this->listListeners(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListSpareIpsOutcome GaClient::listSpareIps(const ListSpareIpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSpareIpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSpareIpsOutcome(ListSpareIpsResult(outcome.result()));
	else
		return ListSpareIpsOutcome(outcome.error());
}

void GaClient::listSpareIpsAsync(const ListSpareIpsRequest& request, const ListSpareIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSpareIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListSpareIpsOutcomeCallable GaClient::listSpareIpsCallable(const ListSpareIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSpareIpsOutcome()>>(
			[this, request]()
			{
			return this->listSpareIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListSystemSecurityPoliciesOutcome GaClient::listSystemSecurityPolicies(const ListSystemSecurityPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSystemSecurityPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSystemSecurityPoliciesOutcome(ListSystemSecurityPoliciesResult(outcome.result()));
	else
		return ListSystemSecurityPoliciesOutcome(outcome.error());
}

void GaClient::listSystemSecurityPoliciesAsync(const ListSystemSecurityPoliciesRequest& request, const ListSystemSecurityPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSystemSecurityPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListSystemSecurityPoliciesOutcomeCallable GaClient::listSystemSecurityPoliciesCallable(const ListSystemSecurityPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSystemSecurityPoliciesOutcome()>>(
			[this, request]()
			{
			return this->listSystemSecurityPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ListTagResourcesOutcome GaClient::listTagResources(const ListTagResourcesRequest &request) const
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

void GaClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ListTagResourcesOutcomeCallable GaClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::QueryCrossBorderApprovalStatusOutcome GaClient::queryCrossBorderApprovalStatus(const QueryCrossBorderApprovalStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCrossBorderApprovalStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCrossBorderApprovalStatusOutcome(QueryCrossBorderApprovalStatusResult(outcome.result()));
	else
		return QueryCrossBorderApprovalStatusOutcome(outcome.error());
}

void GaClient::queryCrossBorderApprovalStatusAsync(const QueryCrossBorderApprovalStatusRequest& request, const QueryCrossBorderApprovalStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCrossBorderApprovalStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::QueryCrossBorderApprovalStatusOutcomeCallable GaClient::queryCrossBorderApprovalStatusCallable(const QueryCrossBorderApprovalStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCrossBorderApprovalStatusOutcome()>>(
			[this, request]()
			{
			return this->queryCrossBorderApprovalStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::RemoveEntriesFromAclOutcome GaClient::removeEntriesFromAcl(const RemoveEntriesFromAclRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveEntriesFromAclOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveEntriesFromAclOutcome(RemoveEntriesFromAclResult(outcome.result()));
	else
		return RemoveEntriesFromAclOutcome(outcome.error());
}

void GaClient::removeEntriesFromAclAsync(const RemoveEntriesFromAclRequest& request, const RemoveEntriesFromAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeEntriesFromAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::RemoveEntriesFromAclOutcomeCallable GaClient::removeEntriesFromAclCallable(const RemoveEntriesFromAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveEntriesFromAclOutcome()>>(
			[this, request]()
			{
			return this->removeEntriesFromAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::ReplaceBandwidthPackageOutcome GaClient::replaceBandwidthPackage(const ReplaceBandwidthPackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReplaceBandwidthPackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReplaceBandwidthPackageOutcome(ReplaceBandwidthPackageResult(outcome.result()));
	else
		return ReplaceBandwidthPackageOutcome(outcome.error());
}

void GaClient::replaceBandwidthPackageAsync(const ReplaceBandwidthPackageRequest& request, const ReplaceBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, replaceBandwidthPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::ReplaceBandwidthPackageOutcomeCallable GaClient::replaceBandwidthPackageCallable(const ReplaceBandwidthPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReplaceBandwidthPackageOutcome()>>(
			[this, request]()
			{
			return this->replaceBandwidthPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::TagResourcesOutcome GaClient::tagResources(const TagResourcesRequest &request) const
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

void GaClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::TagResourcesOutcomeCallable GaClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::UntagResourcesOutcome GaClient::untagResources(const UntagResourcesRequest &request) const
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

void GaClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::UntagResourcesOutcomeCallable GaClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::UpdateAcceleratorOutcome GaClient::updateAccelerator(const UpdateAcceleratorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAcceleratorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAcceleratorOutcome(UpdateAcceleratorResult(outcome.result()));
	else
		return UpdateAcceleratorOutcome(outcome.error());
}

void GaClient::updateAcceleratorAsync(const UpdateAcceleratorRequest& request, const UpdateAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAccelerator(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::UpdateAcceleratorOutcomeCallable GaClient::updateAcceleratorCallable(const UpdateAcceleratorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAcceleratorOutcome()>>(
			[this, request]()
			{
			return this->updateAccelerator(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::UpdateAcceleratorAutoRenewAttributeOutcome GaClient::updateAcceleratorAutoRenewAttribute(const UpdateAcceleratorAutoRenewAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAcceleratorAutoRenewAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAcceleratorAutoRenewAttributeOutcome(UpdateAcceleratorAutoRenewAttributeResult(outcome.result()));
	else
		return UpdateAcceleratorAutoRenewAttributeOutcome(outcome.error());
}

void GaClient::updateAcceleratorAutoRenewAttributeAsync(const UpdateAcceleratorAutoRenewAttributeRequest& request, const UpdateAcceleratorAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAcceleratorAutoRenewAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::UpdateAcceleratorAutoRenewAttributeOutcomeCallable GaClient::updateAcceleratorAutoRenewAttributeCallable(const UpdateAcceleratorAutoRenewAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAcceleratorAutoRenewAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateAcceleratorAutoRenewAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::UpdateAcceleratorConfirmOutcome GaClient::updateAcceleratorConfirm(const UpdateAcceleratorConfirmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAcceleratorConfirmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAcceleratorConfirmOutcome(UpdateAcceleratorConfirmResult(outcome.result()));
	else
		return UpdateAcceleratorConfirmOutcome(outcome.error());
}

void GaClient::updateAcceleratorConfirmAsync(const UpdateAcceleratorConfirmRequest& request, const UpdateAcceleratorConfirmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAcceleratorConfirm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::UpdateAcceleratorConfirmOutcomeCallable GaClient::updateAcceleratorConfirmCallable(const UpdateAcceleratorConfirmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAcceleratorConfirmOutcome()>>(
			[this, request]()
			{
			return this->updateAcceleratorConfirm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::UpdateAcceleratorCrossBorderModeOutcome GaClient::updateAcceleratorCrossBorderMode(const UpdateAcceleratorCrossBorderModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAcceleratorCrossBorderModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAcceleratorCrossBorderModeOutcome(UpdateAcceleratorCrossBorderModeResult(outcome.result()));
	else
		return UpdateAcceleratorCrossBorderModeOutcome(outcome.error());
}

void GaClient::updateAcceleratorCrossBorderModeAsync(const UpdateAcceleratorCrossBorderModeRequest& request, const UpdateAcceleratorCrossBorderModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAcceleratorCrossBorderMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::UpdateAcceleratorCrossBorderModeOutcomeCallable GaClient::updateAcceleratorCrossBorderModeCallable(const UpdateAcceleratorCrossBorderModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAcceleratorCrossBorderModeOutcome()>>(
			[this, request]()
			{
			return this->updateAcceleratorCrossBorderMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::UpdateAclAttributeOutcome GaClient::updateAclAttribute(const UpdateAclAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAclAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAclAttributeOutcome(UpdateAclAttributeResult(outcome.result()));
	else
		return UpdateAclAttributeOutcome(outcome.error());
}

void GaClient::updateAclAttributeAsync(const UpdateAclAttributeRequest& request, const UpdateAclAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAclAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::UpdateAclAttributeOutcomeCallable GaClient::updateAclAttributeCallable(const UpdateAclAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAclAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateAclAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::UpdateAdditionalCertificateWithListenerOutcome GaClient::updateAdditionalCertificateWithListener(const UpdateAdditionalCertificateWithListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAdditionalCertificateWithListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAdditionalCertificateWithListenerOutcome(UpdateAdditionalCertificateWithListenerResult(outcome.result()));
	else
		return UpdateAdditionalCertificateWithListenerOutcome(outcome.error());
}

void GaClient::updateAdditionalCertificateWithListenerAsync(const UpdateAdditionalCertificateWithListenerRequest& request, const UpdateAdditionalCertificateWithListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAdditionalCertificateWithListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::UpdateAdditionalCertificateWithListenerOutcomeCallable GaClient::updateAdditionalCertificateWithListenerCallable(const UpdateAdditionalCertificateWithListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAdditionalCertificateWithListenerOutcome()>>(
			[this, request]()
			{
			return this->updateAdditionalCertificateWithListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::UpdateApplicationMonitorOutcome GaClient::updateApplicationMonitor(const UpdateApplicationMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateApplicationMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateApplicationMonitorOutcome(UpdateApplicationMonitorResult(outcome.result()));
	else
		return UpdateApplicationMonitorOutcome(outcome.error());
}

void GaClient::updateApplicationMonitorAsync(const UpdateApplicationMonitorRequest& request, const UpdateApplicationMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateApplicationMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::UpdateApplicationMonitorOutcomeCallable GaClient::updateApplicationMonitorCallable(const UpdateApplicationMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateApplicationMonitorOutcome()>>(
			[this, request]()
			{
			return this->updateApplicationMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::UpdateBandwidthPackagaAutoRenewAttributeOutcome GaClient::updateBandwidthPackagaAutoRenewAttribute(const UpdateBandwidthPackagaAutoRenewAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateBandwidthPackagaAutoRenewAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateBandwidthPackagaAutoRenewAttributeOutcome(UpdateBandwidthPackagaAutoRenewAttributeResult(outcome.result()));
	else
		return UpdateBandwidthPackagaAutoRenewAttributeOutcome(outcome.error());
}

void GaClient::updateBandwidthPackagaAutoRenewAttributeAsync(const UpdateBandwidthPackagaAutoRenewAttributeRequest& request, const UpdateBandwidthPackagaAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateBandwidthPackagaAutoRenewAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::UpdateBandwidthPackagaAutoRenewAttributeOutcomeCallable GaClient::updateBandwidthPackagaAutoRenewAttributeCallable(const UpdateBandwidthPackagaAutoRenewAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateBandwidthPackagaAutoRenewAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateBandwidthPackagaAutoRenewAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::UpdateBandwidthPackageOutcome GaClient::updateBandwidthPackage(const UpdateBandwidthPackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateBandwidthPackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateBandwidthPackageOutcome(UpdateBandwidthPackageResult(outcome.result()));
	else
		return UpdateBandwidthPackageOutcome(outcome.error());
}

void GaClient::updateBandwidthPackageAsync(const UpdateBandwidthPackageRequest& request, const UpdateBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateBandwidthPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::UpdateBandwidthPackageOutcomeCallable GaClient::updateBandwidthPackageCallable(const UpdateBandwidthPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateBandwidthPackageOutcome()>>(
			[this, request]()
			{
			return this->updateBandwidthPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::UpdateBasicAcceleratorOutcome GaClient::updateBasicAccelerator(const UpdateBasicAcceleratorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateBasicAcceleratorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateBasicAcceleratorOutcome(UpdateBasicAcceleratorResult(outcome.result()));
	else
		return UpdateBasicAcceleratorOutcome(outcome.error());
}

void GaClient::updateBasicAcceleratorAsync(const UpdateBasicAcceleratorRequest& request, const UpdateBasicAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateBasicAccelerator(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::UpdateBasicAcceleratorOutcomeCallable GaClient::updateBasicAcceleratorCallable(const UpdateBasicAcceleratorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateBasicAcceleratorOutcome()>>(
			[this, request]()
			{
			return this->updateBasicAccelerator(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::UpdateBasicEndpointOutcome GaClient::updateBasicEndpoint(const UpdateBasicEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateBasicEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateBasicEndpointOutcome(UpdateBasicEndpointResult(outcome.result()));
	else
		return UpdateBasicEndpointOutcome(outcome.error());
}

void GaClient::updateBasicEndpointAsync(const UpdateBasicEndpointRequest& request, const UpdateBasicEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateBasicEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::UpdateBasicEndpointOutcomeCallable GaClient::updateBasicEndpointCallable(const UpdateBasicEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateBasicEndpointOutcome()>>(
			[this, request]()
			{
			return this->updateBasicEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::UpdateBasicEndpointGroupOutcome GaClient::updateBasicEndpointGroup(const UpdateBasicEndpointGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateBasicEndpointGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateBasicEndpointGroupOutcome(UpdateBasicEndpointGroupResult(outcome.result()));
	else
		return UpdateBasicEndpointGroupOutcome(outcome.error());
}

void GaClient::updateBasicEndpointGroupAsync(const UpdateBasicEndpointGroupRequest& request, const UpdateBasicEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateBasicEndpointGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::UpdateBasicEndpointGroupOutcomeCallable GaClient::updateBasicEndpointGroupCallable(const UpdateBasicEndpointGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateBasicEndpointGroupOutcome()>>(
			[this, request]()
			{
			return this->updateBasicEndpointGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::UpdateBasicIpSetOutcome GaClient::updateBasicIpSet(const UpdateBasicIpSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateBasicIpSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateBasicIpSetOutcome(UpdateBasicIpSetResult(outcome.result()));
	else
		return UpdateBasicIpSetOutcome(outcome.error());
}

void GaClient::updateBasicIpSetAsync(const UpdateBasicIpSetRequest& request, const UpdateBasicIpSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateBasicIpSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::UpdateBasicIpSetOutcomeCallable GaClient::updateBasicIpSetCallable(const UpdateBasicIpSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateBasicIpSetOutcome()>>(
			[this, request]()
			{
			return this->updateBasicIpSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::UpdateCustomRoutingEndpointGroupAttributeOutcome GaClient::updateCustomRoutingEndpointGroupAttribute(const UpdateCustomRoutingEndpointGroupAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCustomRoutingEndpointGroupAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCustomRoutingEndpointGroupAttributeOutcome(UpdateCustomRoutingEndpointGroupAttributeResult(outcome.result()));
	else
		return UpdateCustomRoutingEndpointGroupAttributeOutcome(outcome.error());
}

void GaClient::updateCustomRoutingEndpointGroupAttributeAsync(const UpdateCustomRoutingEndpointGroupAttributeRequest& request, const UpdateCustomRoutingEndpointGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCustomRoutingEndpointGroupAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::UpdateCustomRoutingEndpointGroupAttributeOutcomeCallable GaClient::updateCustomRoutingEndpointGroupAttributeCallable(const UpdateCustomRoutingEndpointGroupAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCustomRoutingEndpointGroupAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateCustomRoutingEndpointGroupAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::UpdateCustomRoutingEndpointGroupDestinationsOutcome GaClient::updateCustomRoutingEndpointGroupDestinations(const UpdateCustomRoutingEndpointGroupDestinationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCustomRoutingEndpointGroupDestinationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCustomRoutingEndpointGroupDestinationsOutcome(UpdateCustomRoutingEndpointGroupDestinationsResult(outcome.result()));
	else
		return UpdateCustomRoutingEndpointGroupDestinationsOutcome(outcome.error());
}

void GaClient::updateCustomRoutingEndpointGroupDestinationsAsync(const UpdateCustomRoutingEndpointGroupDestinationsRequest& request, const UpdateCustomRoutingEndpointGroupDestinationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCustomRoutingEndpointGroupDestinations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::UpdateCustomRoutingEndpointGroupDestinationsOutcomeCallable GaClient::updateCustomRoutingEndpointGroupDestinationsCallable(const UpdateCustomRoutingEndpointGroupDestinationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCustomRoutingEndpointGroupDestinationsOutcome()>>(
			[this, request]()
			{
			return this->updateCustomRoutingEndpointGroupDestinations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::UpdateCustomRoutingEndpointTrafficPoliciesOutcome GaClient::updateCustomRoutingEndpointTrafficPolicies(const UpdateCustomRoutingEndpointTrafficPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCustomRoutingEndpointTrafficPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCustomRoutingEndpointTrafficPoliciesOutcome(UpdateCustomRoutingEndpointTrafficPoliciesResult(outcome.result()));
	else
		return UpdateCustomRoutingEndpointTrafficPoliciesOutcome(outcome.error());
}

void GaClient::updateCustomRoutingEndpointTrafficPoliciesAsync(const UpdateCustomRoutingEndpointTrafficPoliciesRequest& request, const UpdateCustomRoutingEndpointTrafficPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCustomRoutingEndpointTrafficPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::UpdateCustomRoutingEndpointTrafficPoliciesOutcomeCallable GaClient::updateCustomRoutingEndpointTrafficPoliciesCallable(const UpdateCustomRoutingEndpointTrafficPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCustomRoutingEndpointTrafficPoliciesOutcome()>>(
			[this, request]()
			{
			return this->updateCustomRoutingEndpointTrafficPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::UpdateCustomRoutingEndpointsOutcome GaClient::updateCustomRoutingEndpoints(const UpdateCustomRoutingEndpointsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCustomRoutingEndpointsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCustomRoutingEndpointsOutcome(UpdateCustomRoutingEndpointsResult(outcome.result()));
	else
		return UpdateCustomRoutingEndpointsOutcome(outcome.error());
}

void GaClient::updateCustomRoutingEndpointsAsync(const UpdateCustomRoutingEndpointsRequest& request, const UpdateCustomRoutingEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCustomRoutingEndpoints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::UpdateCustomRoutingEndpointsOutcomeCallable GaClient::updateCustomRoutingEndpointsCallable(const UpdateCustomRoutingEndpointsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCustomRoutingEndpointsOutcome()>>(
			[this, request]()
			{
			return this->updateCustomRoutingEndpoints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::UpdateDomainOutcome GaClient::updateDomain(const UpdateDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDomainOutcome(UpdateDomainResult(outcome.result()));
	else
		return UpdateDomainOutcome(outcome.error());
}

void GaClient::updateDomainAsync(const UpdateDomainRequest& request, const UpdateDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::UpdateDomainOutcomeCallable GaClient::updateDomainCallable(const UpdateDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDomainOutcome()>>(
			[this, request]()
			{
			return this->updateDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::UpdateDomainStateOutcome GaClient::updateDomainState(const UpdateDomainStateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDomainStateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDomainStateOutcome(UpdateDomainStateResult(outcome.result()));
	else
		return UpdateDomainStateOutcome(outcome.error());
}

void GaClient::updateDomainStateAsync(const UpdateDomainStateRequest& request, const UpdateDomainStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDomainState(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::UpdateDomainStateOutcomeCallable GaClient::updateDomainStateCallable(const UpdateDomainStateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDomainStateOutcome()>>(
			[this, request]()
			{
			return this->updateDomainState(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::UpdateEndpointGroupOutcome GaClient::updateEndpointGroup(const UpdateEndpointGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEndpointGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEndpointGroupOutcome(UpdateEndpointGroupResult(outcome.result()));
	else
		return UpdateEndpointGroupOutcome(outcome.error());
}

void GaClient::updateEndpointGroupAsync(const UpdateEndpointGroupRequest& request, const UpdateEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEndpointGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::UpdateEndpointGroupOutcomeCallable GaClient::updateEndpointGroupCallable(const UpdateEndpointGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEndpointGroupOutcome()>>(
			[this, request]()
			{
			return this->updateEndpointGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::UpdateEndpointGroupAttributeOutcome GaClient::updateEndpointGroupAttribute(const UpdateEndpointGroupAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEndpointGroupAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEndpointGroupAttributeOutcome(UpdateEndpointGroupAttributeResult(outcome.result()));
	else
		return UpdateEndpointGroupAttributeOutcome(outcome.error());
}

void GaClient::updateEndpointGroupAttributeAsync(const UpdateEndpointGroupAttributeRequest& request, const UpdateEndpointGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEndpointGroupAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::UpdateEndpointGroupAttributeOutcomeCallable GaClient::updateEndpointGroupAttributeCallable(const UpdateEndpointGroupAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEndpointGroupAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateEndpointGroupAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::UpdateEndpointGroupsOutcome GaClient::updateEndpointGroups(const UpdateEndpointGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEndpointGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEndpointGroupsOutcome(UpdateEndpointGroupsResult(outcome.result()));
	else
		return UpdateEndpointGroupsOutcome(outcome.error());
}

void GaClient::updateEndpointGroupsAsync(const UpdateEndpointGroupsRequest& request, const UpdateEndpointGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEndpointGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::UpdateEndpointGroupsOutcomeCallable GaClient::updateEndpointGroupsCallable(const UpdateEndpointGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEndpointGroupsOutcome()>>(
			[this, request]()
			{
			return this->updateEndpointGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::UpdateForwardingRulesOutcome GaClient::updateForwardingRules(const UpdateForwardingRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateForwardingRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateForwardingRulesOutcome(UpdateForwardingRulesResult(outcome.result()));
	else
		return UpdateForwardingRulesOutcome(outcome.error());
}

void GaClient::updateForwardingRulesAsync(const UpdateForwardingRulesRequest& request, const UpdateForwardingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateForwardingRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::UpdateForwardingRulesOutcomeCallable GaClient::updateForwardingRulesCallable(const UpdateForwardingRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateForwardingRulesOutcome()>>(
			[this, request]()
			{
			return this->updateForwardingRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::UpdateIpSetOutcome GaClient::updateIpSet(const UpdateIpSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateIpSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateIpSetOutcome(UpdateIpSetResult(outcome.result()));
	else
		return UpdateIpSetOutcome(outcome.error());
}

void GaClient::updateIpSetAsync(const UpdateIpSetRequest& request, const UpdateIpSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateIpSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::UpdateIpSetOutcomeCallable GaClient::updateIpSetCallable(const UpdateIpSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateIpSetOutcome()>>(
			[this, request]()
			{
			return this->updateIpSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::UpdateIpSetsOutcome GaClient::updateIpSets(const UpdateIpSetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateIpSetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateIpSetsOutcome(UpdateIpSetsResult(outcome.result()));
	else
		return UpdateIpSetsOutcome(outcome.error());
}

void GaClient::updateIpSetsAsync(const UpdateIpSetsRequest& request, const UpdateIpSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateIpSets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::UpdateIpSetsOutcomeCallable GaClient::updateIpSetsCallable(const UpdateIpSetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateIpSetsOutcome()>>(
			[this, request]()
			{
			return this->updateIpSets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GaClient::UpdateListenerOutcome GaClient::updateListener(const UpdateListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateListenerOutcome(UpdateListenerResult(outcome.result()));
	else
		return UpdateListenerOutcome(outcome.error());
}

void GaClient::updateListenerAsync(const UpdateListenerRequest& request, const UpdateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GaClient::UpdateListenerOutcomeCallable GaClient::updateListenerCallable(const UpdateListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateListenerOutcome()>>(
			[this, request]()
			{
			return this->updateListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

