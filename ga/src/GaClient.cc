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

