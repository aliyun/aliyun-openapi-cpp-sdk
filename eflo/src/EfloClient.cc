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

#include <alibabacloud/eflo/EfloClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

namespace
{
	const std::string SERVICE_NAME = "eflo";
}

EfloClient::EfloClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "eflo");
}

EfloClient::EfloClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "eflo");
}

EfloClient::EfloClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "eflo");
}

EfloClient::~EfloClient()
{}

EfloClient::AssignLeniPrivateIpAddressOutcome EfloClient::assignLeniPrivateIpAddress(const AssignLeniPrivateIpAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssignLeniPrivateIpAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssignLeniPrivateIpAddressOutcome(AssignLeniPrivateIpAddressResult(outcome.result()));
	else
		return AssignLeniPrivateIpAddressOutcome(outcome.error());
}

void EfloClient::assignLeniPrivateIpAddressAsync(const AssignLeniPrivateIpAddressRequest& request, const AssignLeniPrivateIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, assignLeniPrivateIpAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::AssignLeniPrivateIpAddressOutcomeCallable EfloClient::assignLeniPrivateIpAddressCallable(const AssignLeniPrivateIpAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssignLeniPrivateIpAddressOutcome()>>(
			[this, request]()
			{
			return this->assignLeniPrivateIpAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::AssignPrivateIpAddressOutcome EfloClient::assignPrivateIpAddress(const AssignPrivateIpAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssignPrivateIpAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssignPrivateIpAddressOutcome(AssignPrivateIpAddressResult(outcome.result()));
	else
		return AssignPrivateIpAddressOutcome(outcome.error());
}

void EfloClient::assignPrivateIpAddressAsync(const AssignPrivateIpAddressRequest& request, const AssignPrivateIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, assignPrivateIpAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::AssignPrivateIpAddressOutcomeCallable EfloClient::assignPrivateIpAddressCallable(const AssignPrivateIpAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssignPrivateIpAddressOutcome()>>(
			[this, request]()
			{
			return this->assignPrivateIpAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::AssociateVpdCidrBlockOutcome EfloClient::associateVpdCidrBlock(const AssociateVpdCidrBlockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateVpdCidrBlockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateVpdCidrBlockOutcome(AssociateVpdCidrBlockResult(outcome.result()));
	else
		return AssociateVpdCidrBlockOutcome(outcome.error());
}

void EfloClient::associateVpdCidrBlockAsync(const AssociateVpdCidrBlockRequest& request, const AssociateVpdCidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateVpdCidrBlock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::AssociateVpdCidrBlockOutcomeCallable EfloClient::associateVpdCidrBlockCallable(const AssociateVpdCidrBlockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateVpdCidrBlockOutcome()>>(
			[this, request]()
			{
			return this->associateVpdCidrBlock(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::CreateElasticNetworkInterfaceOutcome EfloClient::createElasticNetworkInterface(const CreateElasticNetworkInterfaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateElasticNetworkInterfaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateElasticNetworkInterfaceOutcome(CreateElasticNetworkInterfaceResult(outcome.result()));
	else
		return CreateElasticNetworkInterfaceOutcome(outcome.error());
}

void EfloClient::createElasticNetworkInterfaceAsync(const CreateElasticNetworkInterfaceRequest& request, const CreateElasticNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createElasticNetworkInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::CreateElasticNetworkInterfaceOutcomeCallable EfloClient::createElasticNetworkInterfaceCallable(const CreateElasticNetworkInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateElasticNetworkInterfaceOutcome()>>(
			[this, request]()
			{
			return this->createElasticNetworkInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::CreateErOutcome EfloClient::createEr(const CreateErRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateErOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateErOutcome(CreateErResult(outcome.result()));
	else
		return CreateErOutcome(outcome.error());
}

void EfloClient::createErAsync(const CreateErRequest& request, const CreateErAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEr(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::CreateErOutcomeCallable EfloClient::createErCallable(const CreateErRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateErOutcome()>>(
			[this, request]()
			{
			return this->createEr(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::CreateErAttachmentOutcome EfloClient::createErAttachment(const CreateErAttachmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateErAttachmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateErAttachmentOutcome(CreateErAttachmentResult(outcome.result()));
	else
		return CreateErAttachmentOutcome(outcome.error());
}

void EfloClient::createErAttachmentAsync(const CreateErAttachmentRequest& request, const CreateErAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createErAttachment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::CreateErAttachmentOutcomeCallable EfloClient::createErAttachmentCallable(const CreateErAttachmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateErAttachmentOutcome()>>(
			[this, request]()
			{
			return this->createErAttachment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::CreateErRouteMapOutcome EfloClient::createErRouteMap(const CreateErRouteMapRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateErRouteMapOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateErRouteMapOutcome(CreateErRouteMapResult(outcome.result()));
	else
		return CreateErRouteMapOutcome(outcome.error());
}

void EfloClient::createErRouteMapAsync(const CreateErRouteMapRequest& request, const CreateErRouteMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createErRouteMap(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::CreateErRouteMapOutcomeCallable EfloClient::createErRouteMapCallable(const CreateErRouteMapRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateErRouteMapOutcome()>>(
			[this, request]()
			{
			return this->createErRouteMap(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::CreateSubnetOutcome EfloClient::createSubnet(const CreateSubnetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSubnetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSubnetOutcome(CreateSubnetResult(outcome.result()));
	else
		return CreateSubnetOutcome(outcome.error());
}

void EfloClient::createSubnetAsync(const CreateSubnetRequest& request, const CreateSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSubnet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::CreateSubnetOutcomeCallable EfloClient::createSubnetCallable(const CreateSubnetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSubnetOutcome()>>(
			[this, request]()
			{
			return this->createSubnet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::CreateVccOutcome EfloClient::createVcc(const CreateVccRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVccOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVccOutcome(CreateVccResult(outcome.result()));
	else
		return CreateVccOutcome(outcome.error());
}

void EfloClient::createVccAsync(const CreateVccRequest& request, const CreateVccAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVcc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::CreateVccOutcomeCallable EfloClient::createVccCallable(const CreateVccRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVccOutcome()>>(
			[this, request]()
			{
			return this->createVcc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::CreateVccGrantRuleOutcome EfloClient::createVccGrantRule(const CreateVccGrantRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVccGrantRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVccGrantRuleOutcome(CreateVccGrantRuleResult(outcome.result()));
	else
		return CreateVccGrantRuleOutcome(outcome.error());
}

void EfloClient::createVccGrantRuleAsync(const CreateVccGrantRuleRequest& request, const CreateVccGrantRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVccGrantRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::CreateVccGrantRuleOutcomeCallable EfloClient::createVccGrantRuleCallable(const CreateVccGrantRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVccGrantRuleOutcome()>>(
			[this, request]()
			{
			return this->createVccGrantRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::CreateVccRouteEntryOutcome EfloClient::createVccRouteEntry(const CreateVccRouteEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVccRouteEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVccRouteEntryOutcome(CreateVccRouteEntryResult(outcome.result()));
	else
		return CreateVccRouteEntryOutcome(outcome.error());
}

void EfloClient::createVccRouteEntryAsync(const CreateVccRouteEntryRequest& request, const CreateVccRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVccRouteEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::CreateVccRouteEntryOutcomeCallable EfloClient::createVccRouteEntryCallable(const CreateVccRouteEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVccRouteEntryOutcome()>>(
			[this, request]()
			{
			return this->createVccRouteEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::CreateVpdOutcome EfloClient::createVpd(const CreateVpdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVpdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVpdOutcome(CreateVpdResult(outcome.result()));
	else
		return CreateVpdOutcome(outcome.error());
}

void EfloClient::createVpdAsync(const CreateVpdRequest& request, const CreateVpdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVpd(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::CreateVpdOutcomeCallable EfloClient::createVpdCallable(const CreateVpdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVpdOutcome()>>(
			[this, request]()
			{
			return this->createVpd(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::CreateVpdGrantRuleOutcome EfloClient::createVpdGrantRule(const CreateVpdGrantRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVpdGrantRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVpdGrantRuleOutcome(CreateVpdGrantRuleResult(outcome.result()));
	else
		return CreateVpdGrantRuleOutcome(outcome.error());
}

void EfloClient::createVpdGrantRuleAsync(const CreateVpdGrantRuleRequest& request, const CreateVpdGrantRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVpdGrantRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::CreateVpdGrantRuleOutcomeCallable EfloClient::createVpdGrantRuleCallable(const CreateVpdGrantRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVpdGrantRuleOutcome()>>(
			[this, request]()
			{
			return this->createVpdGrantRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::DeleteElasticNetworkInterfaceOutcome EfloClient::deleteElasticNetworkInterface(const DeleteElasticNetworkInterfaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteElasticNetworkInterfaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteElasticNetworkInterfaceOutcome(DeleteElasticNetworkInterfaceResult(outcome.result()));
	else
		return DeleteElasticNetworkInterfaceOutcome(outcome.error());
}

void EfloClient::deleteElasticNetworkInterfaceAsync(const DeleteElasticNetworkInterfaceRequest& request, const DeleteElasticNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteElasticNetworkInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::DeleteElasticNetworkInterfaceOutcomeCallable EfloClient::deleteElasticNetworkInterfaceCallable(const DeleteElasticNetworkInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteElasticNetworkInterfaceOutcome()>>(
			[this, request]()
			{
			return this->deleteElasticNetworkInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::DeleteErOutcome EfloClient::deleteEr(const DeleteErRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteErOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteErOutcome(DeleteErResult(outcome.result()));
	else
		return DeleteErOutcome(outcome.error());
}

void EfloClient::deleteErAsync(const DeleteErRequest& request, const DeleteErAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEr(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::DeleteErOutcomeCallable EfloClient::deleteErCallable(const DeleteErRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteErOutcome()>>(
			[this, request]()
			{
			return this->deleteEr(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::DeleteErAttachmentOutcome EfloClient::deleteErAttachment(const DeleteErAttachmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteErAttachmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteErAttachmentOutcome(DeleteErAttachmentResult(outcome.result()));
	else
		return DeleteErAttachmentOutcome(outcome.error());
}

void EfloClient::deleteErAttachmentAsync(const DeleteErAttachmentRequest& request, const DeleteErAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteErAttachment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::DeleteErAttachmentOutcomeCallable EfloClient::deleteErAttachmentCallable(const DeleteErAttachmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteErAttachmentOutcome()>>(
			[this, request]()
			{
			return this->deleteErAttachment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::DeleteErRouteMapOutcome EfloClient::deleteErRouteMap(const DeleteErRouteMapRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteErRouteMapOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteErRouteMapOutcome(DeleteErRouteMapResult(outcome.result()));
	else
		return DeleteErRouteMapOutcome(outcome.error());
}

void EfloClient::deleteErRouteMapAsync(const DeleteErRouteMapRequest& request, const DeleteErRouteMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteErRouteMap(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::DeleteErRouteMapOutcomeCallable EfloClient::deleteErRouteMapCallable(const DeleteErRouteMapRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteErRouteMapOutcome()>>(
			[this, request]()
			{
			return this->deleteErRouteMap(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::DeleteSubnetOutcome EfloClient::deleteSubnet(const DeleteSubnetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSubnetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSubnetOutcome(DeleteSubnetResult(outcome.result()));
	else
		return DeleteSubnetOutcome(outcome.error());
}

void EfloClient::deleteSubnetAsync(const DeleteSubnetRequest& request, const DeleteSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSubnet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::DeleteSubnetOutcomeCallable EfloClient::deleteSubnetCallable(const DeleteSubnetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSubnetOutcome()>>(
			[this, request]()
			{
			return this->deleteSubnet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::DeleteVccGrantRuleOutcome EfloClient::deleteVccGrantRule(const DeleteVccGrantRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVccGrantRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVccGrantRuleOutcome(DeleteVccGrantRuleResult(outcome.result()));
	else
		return DeleteVccGrantRuleOutcome(outcome.error());
}

void EfloClient::deleteVccGrantRuleAsync(const DeleteVccGrantRuleRequest& request, const DeleteVccGrantRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVccGrantRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::DeleteVccGrantRuleOutcomeCallable EfloClient::deleteVccGrantRuleCallable(const DeleteVccGrantRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVccGrantRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteVccGrantRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::DeleteVccRouteEntryOutcome EfloClient::deleteVccRouteEntry(const DeleteVccRouteEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVccRouteEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVccRouteEntryOutcome(DeleteVccRouteEntryResult(outcome.result()));
	else
		return DeleteVccRouteEntryOutcome(outcome.error());
}

void EfloClient::deleteVccRouteEntryAsync(const DeleteVccRouteEntryRequest& request, const DeleteVccRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVccRouteEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::DeleteVccRouteEntryOutcomeCallable EfloClient::deleteVccRouteEntryCallable(const DeleteVccRouteEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVccRouteEntryOutcome()>>(
			[this, request]()
			{
			return this->deleteVccRouteEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::DeleteVpdOutcome EfloClient::deleteVpd(const DeleteVpdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVpdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVpdOutcome(DeleteVpdResult(outcome.result()));
	else
		return DeleteVpdOutcome(outcome.error());
}

void EfloClient::deleteVpdAsync(const DeleteVpdRequest& request, const DeleteVpdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVpd(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::DeleteVpdOutcomeCallable EfloClient::deleteVpdCallable(const DeleteVpdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVpdOutcome()>>(
			[this, request]()
			{
			return this->deleteVpd(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::DeleteVpdGrantRuleOutcome EfloClient::deleteVpdGrantRule(const DeleteVpdGrantRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVpdGrantRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVpdGrantRuleOutcome(DeleteVpdGrantRuleResult(outcome.result()));
	else
		return DeleteVpdGrantRuleOutcome(outcome.error());
}

void EfloClient::deleteVpdGrantRuleAsync(const DeleteVpdGrantRuleRequest& request, const DeleteVpdGrantRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVpdGrantRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::DeleteVpdGrantRuleOutcomeCallable EfloClient::deleteVpdGrantRuleCallable(const DeleteVpdGrantRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVpdGrantRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteVpdGrantRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::DescribeSlrOutcome EfloClient::describeSlr(const DescribeSlrRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSlrOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSlrOutcome(DescribeSlrResult(outcome.result()));
	else
		return DescribeSlrOutcome(outcome.error());
}

void EfloClient::describeSlrAsync(const DescribeSlrRequest& request, const DescribeSlrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSlr(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::DescribeSlrOutcomeCallable EfloClient::describeSlrCallable(const DescribeSlrRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSlrOutcome()>>(
			[this, request]()
			{
			return this->describeSlr(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::GetElasticNetworkInterfaceOutcome EfloClient::getElasticNetworkInterface(const GetElasticNetworkInterfaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetElasticNetworkInterfaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetElasticNetworkInterfaceOutcome(GetElasticNetworkInterfaceResult(outcome.result()));
	else
		return GetElasticNetworkInterfaceOutcome(outcome.error());
}

void EfloClient::getElasticNetworkInterfaceAsync(const GetElasticNetworkInterfaceRequest& request, const GetElasticNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getElasticNetworkInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::GetElasticNetworkInterfaceOutcomeCallable EfloClient::getElasticNetworkInterfaceCallable(const GetElasticNetworkInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetElasticNetworkInterfaceOutcome()>>(
			[this, request]()
			{
			return this->getElasticNetworkInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::GetErOutcome EfloClient::getEr(const GetErRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetErOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetErOutcome(GetErResult(outcome.result()));
	else
		return GetErOutcome(outcome.error());
}

void EfloClient::getErAsync(const GetErRequest& request, const GetErAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEr(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::GetErOutcomeCallable EfloClient::getErCallable(const GetErRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetErOutcome()>>(
			[this, request]()
			{
			return this->getEr(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::GetErAttachmentOutcome EfloClient::getErAttachment(const GetErAttachmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetErAttachmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetErAttachmentOutcome(GetErAttachmentResult(outcome.result()));
	else
		return GetErAttachmentOutcome(outcome.error());
}

void EfloClient::getErAttachmentAsync(const GetErAttachmentRequest& request, const GetErAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getErAttachment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::GetErAttachmentOutcomeCallable EfloClient::getErAttachmentCallable(const GetErAttachmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetErAttachmentOutcome()>>(
			[this, request]()
			{
			return this->getErAttachment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::GetErRouteEntryOutcome EfloClient::getErRouteEntry(const GetErRouteEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetErRouteEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetErRouteEntryOutcome(GetErRouteEntryResult(outcome.result()));
	else
		return GetErRouteEntryOutcome(outcome.error());
}

void EfloClient::getErRouteEntryAsync(const GetErRouteEntryRequest& request, const GetErRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getErRouteEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::GetErRouteEntryOutcomeCallable EfloClient::getErRouteEntryCallable(const GetErRouteEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetErRouteEntryOutcome()>>(
			[this, request]()
			{
			return this->getErRouteEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::GetErRouteMapOutcome EfloClient::getErRouteMap(const GetErRouteMapRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetErRouteMapOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetErRouteMapOutcome(GetErRouteMapResult(outcome.result()));
	else
		return GetErRouteMapOutcome(outcome.error());
}

void EfloClient::getErRouteMapAsync(const GetErRouteMapRequest& request, const GetErRouteMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getErRouteMap(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::GetErRouteMapOutcomeCallable EfloClient::getErRouteMapCallable(const GetErRouteMapRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetErRouteMapOutcome()>>(
			[this, request]()
			{
			return this->getErRouteMap(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::GetFabricTopologyOutcome EfloClient::getFabricTopology(const GetFabricTopologyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFabricTopologyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFabricTopologyOutcome(GetFabricTopologyResult(outcome.result()));
	else
		return GetFabricTopologyOutcome(outcome.error());
}

void EfloClient::getFabricTopologyAsync(const GetFabricTopologyRequest& request, const GetFabricTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFabricTopology(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::GetFabricTopologyOutcomeCallable EfloClient::getFabricTopologyCallable(const GetFabricTopologyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFabricTopologyOutcome()>>(
			[this, request]()
			{
			return this->getFabricTopology(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::GetLeniPrivateIpAddressOutcome EfloClient::getLeniPrivateIpAddress(const GetLeniPrivateIpAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLeniPrivateIpAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLeniPrivateIpAddressOutcome(GetLeniPrivateIpAddressResult(outcome.result()));
	else
		return GetLeniPrivateIpAddressOutcome(outcome.error());
}

void EfloClient::getLeniPrivateIpAddressAsync(const GetLeniPrivateIpAddressRequest& request, const GetLeniPrivateIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLeniPrivateIpAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::GetLeniPrivateIpAddressOutcomeCallable EfloClient::getLeniPrivateIpAddressCallable(const GetLeniPrivateIpAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLeniPrivateIpAddressOutcome()>>(
			[this, request]()
			{
			return this->getLeniPrivateIpAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::GetLniPrivateIpAddressOutcome EfloClient::getLniPrivateIpAddress(const GetLniPrivateIpAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLniPrivateIpAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLniPrivateIpAddressOutcome(GetLniPrivateIpAddressResult(outcome.result()));
	else
		return GetLniPrivateIpAddressOutcome(outcome.error());
}

void EfloClient::getLniPrivateIpAddressAsync(const GetLniPrivateIpAddressRequest& request, const GetLniPrivateIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLniPrivateIpAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::GetLniPrivateIpAddressOutcomeCallable EfloClient::getLniPrivateIpAddressCallable(const GetLniPrivateIpAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLniPrivateIpAddressOutcome()>>(
			[this, request]()
			{
			return this->getLniPrivateIpAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::GetNetworkInterfaceOutcome EfloClient::getNetworkInterface(const GetNetworkInterfaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNetworkInterfaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNetworkInterfaceOutcome(GetNetworkInterfaceResult(outcome.result()));
	else
		return GetNetworkInterfaceOutcome(outcome.error());
}

void EfloClient::getNetworkInterfaceAsync(const GetNetworkInterfaceRequest& request, const GetNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNetworkInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::GetNetworkInterfaceOutcomeCallable EfloClient::getNetworkInterfaceCallable(const GetNetworkInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNetworkInterfaceOutcome()>>(
			[this, request]()
			{
			return this->getNetworkInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::GetNodeInfoForPodOutcome EfloClient::getNodeInfoForPod(const GetNodeInfoForPodRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNodeInfoForPodOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNodeInfoForPodOutcome(GetNodeInfoForPodResult(outcome.result()));
	else
		return GetNodeInfoForPodOutcome(outcome.error());
}

void EfloClient::getNodeInfoForPodAsync(const GetNodeInfoForPodRequest& request, const GetNodeInfoForPodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNodeInfoForPod(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::GetNodeInfoForPodOutcomeCallable EfloClient::getNodeInfoForPodCallable(const GetNodeInfoForPodRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNodeInfoForPodOutcome()>>(
			[this, request]()
			{
			return this->getNodeInfoForPod(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::GetSubnetOutcome EfloClient::getSubnet(const GetSubnetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSubnetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSubnetOutcome(GetSubnetResult(outcome.result()));
	else
		return GetSubnetOutcome(outcome.error());
}

void EfloClient::getSubnetAsync(const GetSubnetRequest& request, const GetSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSubnet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::GetSubnetOutcomeCallable EfloClient::getSubnetCallable(const GetSubnetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSubnetOutcome()>>(
			[this, request]()
			{
			return this->getSubnet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::GetVccOutcome EfloClient::getVcc(const GetVccRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVccOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVccOutcome(GetVccResult(outcome.result()));
	else
		return GetVccOutcome(outcome.error());
}

void EfloClient::getVccAsync(const GetVccRequest& request, const GetVccAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVcc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::GetVccOutcomeCallable EfloClient::getVccCallable(const GetVccRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVccOutcome()>>(
			[this, request]()
			{
			return this->getVcc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::GetVccGrantRuleOutcome EfloClient::getVccGrantRule(const GetVccGrantRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVccGrantRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVccGrantRuleOutcome(GetVccGrantRuleResult(outcome.result()));
	else
		return GetVccGrantRuleOutcome(outcome.error());
}

void EfloClient::getVccGrantRuleAsync(const GetVccGrantRuleRequest& request, const GetVccGrantRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVccGrantRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::GetVccGrantRuleOutcomeCallable EfloClient::getVccGrantRuleCallable(const GetVccGrantRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVccGrantRuleOutcome()>>(
			[this, request]()
			{
			return this->getVccGrantRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::GetVccRouteEntryOutcome EfloClient::getVccRouteEntry(const GetVccRouteEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVccRouteEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVccRouteEntryOutcome(GetVccRouteEntryResult(outcome.result()));
	else
		return GetVccRouteEntryOutcome(outcome.error());
}

void EfloClient::getVccRouteEntryAsync(const GetVccRouteEntryRequest& request, const GetVccRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVccRouteEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::GetVccRouteEntryOutcomeCallable EfloClient::getVccRouteEntryCallable(const GetVccRouteEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVccRouteEntryOutcome()>>(
			[this, request]()
			{
			return this->getVccRouteEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::GetVpdOutcome EfloClient::getVpd(const GetVpdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVpdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVpdOutcome(GetVpdResult(outcome.result()));
	else
		return GetVpdOutcome(outcome.error());
}

void EfloClient::getVpdAsync(const GetVpdRequest& request, const GetVpdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVpd(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::GetVpdOutcomeCallable EfloClient::getVpdCallable(const GetVpdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVpdOutcome()>>(
			[this, request]()
			{
			return this->getVpd(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::GetVpdGrantRuleOutcome EfloClient::getVpdGrantRule(const GetVpdGrantRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVpdGrantRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVpdGrantRuleOutcome(GetVpdGrantRuleResult(outcome.result()));
	else
		return GetVpdGrantRuleOutcome(outcome.error());
}

void EfloClient::getVpdGrantRuleAsync(const GetVpdGrantRuleRequest& request, const GetVpdGrantRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVpdGrantRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::GetVpdGrantRuleOutcomeCallable EfloClient::getVpdGrantRuleCallable(const GetVpdGrantRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVpdGrantRuleOutcome()>>(
			[this, request]()
			{
			return this->getVpdGrantRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::GetVpdRouteEntryOutcome EfloClient::getVpdRouteEntry(const GetVpdRouteEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVpdRouteEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVpdRouteEntryOutcome(GetVpdRouteEntryResult(outcome.result()));
	else
		return GetVpdRouteEntryOutcome(outcome.error());
}

void EfloClient::getVpdRouteEntryAsync(const GetVpdRouteEntryRequest& request, const GetVpdRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVpdRouteEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::GetVpdRouteEntryOutcomeCallable EfloClient::getVpdRouteEntryCallable(const GetVpdRouteEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVpdRouteEntryOutcome()>>(
			[this, request]()
			{
			return this->getVpdRouteEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::InitializeVccOutcome EfloClient::initializeVcc(const InitializeVccRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InitializeVccOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InitializeVccOutcome(InitializeVccResult(outcome.result()));
	else
		return InitializeVccOutcome(outcome.error());
}

void EfloClient::initializeVccAsync(const InitializeVccRequest& request, const InitializeVccAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, initializeVcc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::InitializeVccOutcomeCallable EfloClient::initializeVccCallable(const InitializeVccRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InitializeVccOutcome()>>(
			[this, request]()
			{
			return this->initializeVcc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::ListElasticNetworkInterfacesOutcome EfloClient::listElasticNetworkInterfaces(const ListElasticNetworkInterfacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListElasticNetworkInterfacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListElasticNetworkInterfacesOutcome(ListElasticNetworkInterfacesResult(outcome.result()));
	else
		return ListElasticNetworkInterfacesOutcome(outcome.error());
}

void EfloClient::listElasticNetworkInterfacesAsync(const ListElasticNetworkInterfacesRequest& request, const ListElasticNetworkInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listElasticNetworkInterfaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::ListElasticNetworkInterfacesOutcomeCallable EfloClient::listElasticNetworkInterfacesCallable(const ListElasticNetworkInterfacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListElasticNetworkInterfacesOutcome()>>(
			[this, request]()
			{
			return this->listElasticNetworkInterfaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::ListErAttachmentsOutcome EfloClient::listErAttachments(const ListErAttachmentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListErAttachmentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListErAttachmentsOutcome(ListErAttachmentsResult(outcome.result()));
	else
		return ListErAttachmentsOutcome(outcome.error());
}

void EfloClient::listErAttachmentsAsync(const ListErAttachmentsRequest& request, const ListErAttachmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listErAttachments(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::ListErAttachmentsOutcomeCallable EfloClient::listErAttachmentsCallable(const ListErAttachmentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListErAttachmentsOutcome()>>(
			[this, request]()
			{
			return this->listErAttachments(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::ListErRouteEntriesOutcome EfloClient::listErRouteEntries(const ListErRouteEntriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListErRouteEntriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListErRouteEntriesOutcome(ListErRouteEntriesResult(outcome.result()));
	else
		return ListErRouteEntriesOutcome(outcome.error());
}

void EfloClient::listErRouteEntriesAsync(const ListErRouteEntriesRequest& request, const ListErRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listErRouteEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::ListErRouteEntriesOutcomeCallable EfloClient::listErRouteEntriesCallable(const ListErRouteEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListErRouteEntriesOutcome()>>(
			[this, request]()
			{
			return this->listErRouteEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::ListErRouteMapsOutcome EfloClient::listErRouteMaps(const ListErRouteMapsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListErRouteMapsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListErRouteMapsOutcome(ListErRouteMapsResult(outcome.result()));
	else
		return ListErRouteMapsOutcome(outcome.error());
}

void EfloClient::listErRouteMapsAsync(const ListErRouteMapsRequest& request, const ListErRouteMapsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listErRouteMaps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::ListErRouteMapsOutcomeCallable EfloClient::listErRouteMapsCallable(const ListErRouteMapsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListErRouteMapsOutcome()>>(
			[this, request]()
			{
			return this->listErRouteMaps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::ListErsOutcome EfloClient::listErs(const ListErsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListErsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListErsOutcome(ListErsResult(outcome.result()));
	else
		return ListErsOutcome(outcome.error());
}

void EfloClient::listErsAsync(const ListErsRequest& request, const ListErsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listErs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::ListErsOutcomeCallable EfloClient::listErsCallable(const ListErsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListErsOutcome()>>(
			[this, request]()
			{
			return this->listErs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::ListInstancesByNcdOutcome EfloClient::listInstancesByNcd(const ListInstancesByNcdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstancesByNcdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstancesByNcdOutcome(ListInstancesByNcdResult(outcome.result()));
	else
		return ListInstancesByNcdOutcome(outcome.error());
}

void EfloClient::listInstancesByNcdAsync(const ListInstancesByNcdRequest& request, const ListInstancesByNcdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstancesByNcd(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::ListInstancesByNcdOutcomeCallable EfloClient::listInstancesByNcdCallable(const ListInstancesByNcdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstancesByNcdOutcome()>>(
			[this, request]()
			{
			return this->listInstancesByNcd(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::ListLeniPrivateIpAddressesOutcome EfloClient::listLeniPrivateIpAddresses(const ListLeniPrivateIpAddressesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLeniPrivateIpAddressesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLeniPrivateIpAddressesOutcome(ListLeniPrivateIpAddressesResult(outcome.result()));
	else
		return ListLeniPrivateIpAddressesOutcome(outcome.error());
}

void EfloClient::listLeniPrivateIpAddressesAsync(const ListLeniPrivateIpAddressesRequest& request, const ListLeniPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLeniPrivateIpAddresses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::ListLeniPrivateIpAddressesOutcomeCallable EfloClient::listLeniPrivateIpAddressesCallable(const ListLeniPrivateIpAddressesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLeniPrivateIpAddressesOutcome()>>(
			[this, request]()
			{
			return this->listLeniPrivateIpAddresses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::ListLniPrivateIpAddressOutcome EfloClient::listLniPrivateIpAddress(const ListLniPrivateIpAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLniPrivateIpAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLniPrivateIpAddressOutcome(ListLniPrivateIpAddressResult(outcome.result()));
	else
		return ListLniPrivateIpAddressOutcome(outcome.error());
}

void EfloClient::listLniPrivateIpAddressAsync(const ListLniPrivateIpAddressRequest& request, const ListLniPrivateIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLniPrivateIpAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::ListLniPrivateIpAddressOutcomeCallable EfloClient::listLniPrivateIpAddressCallable(const ListLniPrivateIpAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLniPrivateIpAddressOutcome()>>(
			[this, request]()
			{
			return this->listLniPrivateIpAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::ListNetworkInterfacesOutcome EfloClient::listNetworkInterfaces(const ListNetworkInterfacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNetworkInterfacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNetworkInterfacesOutcome(ListNetworkInterfacesResult(outcome.result()));
	else
		return ListNetworkInterfacesOutcome(outcome.error());
}

void EfloClient::listNetworkInterfacesAsync(const ListNetworkInterfacesRequest& request, const ListNetworkInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNetworkInterfaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::ListNetworkInterfacesOutcomeCallable EfloClient::listNetworkInterfacesCallable(const ListNetworkInterfacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNetworkInterfacesOutcome()>>(
			[this, request]()
			{
			return this->listNetworkInterfaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::ListNodeInfosForPodOutcome EfloClient::listNodeInfosForPod(const ListNodeInfosForPodRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNodeInfosForPodOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNodeInfosForPodOutcome(ListNodeInfosForPodResult(outcome.result()));
	else
		return ListNodeInfosForPodOutcome(outcome.error());
}

void EfloClient::listNodeInfosForPodAsync(const ListNodeInfosForPodRequest& request, const ListNodeInfosForPodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodeInfosForPod(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::ListNodeInfosForPodOutcomeCallable EfloClient::listNodeInfosForPodCallable(const ListNodeInfosForPodRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodeInfosForPodOutcome()>>(
			[this, request]()
			{
			return this->listNodeInfosForPod(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::ListSubnetsOutcome EfloClient::listSubnets(const ListSubnetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSubnetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSubnetsOutcome(ListSubnetsResult(outcome.result()));
	else
		return ListSubnetsOutcome(outcome.error());
}

void EfloClient::listSubnetsAsync(const ListSubnetsRequest& request, const ListSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSubnets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::ListSubnetsOutcomeCallable EfloClient::listSubnetsCallable(const ListSubnetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSubnetsOutcome()>>(
			[this, request]()
			{
			return this->listSubnets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::ListVccFlowInfosOutcome EfloClient::listVccFlowInfos(const ListVccFlowInfosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVccFlowInfosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVccFlowInfosOutcome(ListVccFlowInfosResult(outcome.result()));
	else
		return ListVccFlowInfosOutcome(outcome.error());
}

void EfloClient::listVccFlowInfosAsync(const ListVccFlowInfosRequest& request, const ListVccFlowInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVccFlowInfos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::ListVccFlowInfosOutcomeCallable EfloClient::listVccFlowInfosCallable(const ListVccFlowInfosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVccFlowInfosOutcome()>>(
			[this, request]()
			{
			return this->listVccFlowInfos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::ListVccGrantRulesOutcome EfloClient::listVccGrantRules(const ListVccGrantRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVccGrantRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVccGrantRulesOutcome(ListVccGrantRulesResult(outcome.result()));
	else
		return ListVccGrantRulesOutcome(outcome.error());
}

void EfloClient::listVccGrantRulesAsync(const ListVccGrantRulesRequest& request, const ListVccGrantRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVccGrantRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::ListVccGrantRulesOutcomeCallable EfloClient::listVccGrantRulesCallable(const ListVccGrantRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVccGrantRulesOutcome()>>(
			[this, request]()
			{
			return this->listVccGrantRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::ListVccRouteEntriesOutcome EfloClient::listVccRouteEntries(const ListVccRouteEntriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVccRouteEntriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVccRouteEntriesOutcome(ListVccRouteEntriesResult(outcome.result()));
	else
		return ListVccRouteEntriesOutcome(outcome.error());
}

void EfloClient::listVccRouteEntriesAsync(const ListVccRouteEntriesRequest& request, const ListVccRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVccRouteEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::ListVccRouteEntriesOutcomeCallable EfloClient::listVccRouteEntriesCallable(const ListVccRouteEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVccRouteEntriesOutcome()>>(
			[this, request]()
			{
			return this->listVccRouteEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::ListVccsOutcome EfloClient::listVccs(const ListVccsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVccsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVccsOutcome(ListVccsResult(outcome.result()));
	else
		return ListVccsOutcome(outcome.error());
}

void EfloClient::listVccsAsync(const ListVccsRequest& request, const ListVccsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVccs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::ListVccsOutcomeCallable EfloClient::listVccsCallable(const ListVccsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVccsOutcome()>>(
			[this, request]()
			{
			return this->listVccs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::ListVpdGrantRulesOutcome EfloClient::listVpdGrantRules(const ListVpdGrantRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVpdGrantRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVpdGrantRulesOutcome(ListVpdGrantRulesResult(outcome.result()));
	else
		return ListVpdGrantRulesOutcome(outcome.error());
}

void EfloClient::listVpdGrantRulesAsync(const ListVpdGrantRulesRequest& request, const ListVpdGrantRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVpdGrantRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::ListVpdGrantRulesOutcomeCallable EfloClient::listVpdGrantRulesCallable(const ListVpdGrantRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVpdGrantRulesOutcome()>>(
			[this, request]()
			{
			return this->listVpdGrantRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::ListVpdRouteEntriesOutcome EfloClient::listVpdRouteEntries(const ListVpdRouteEntriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVpdRouteEntriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVpdRouteEntriesOutcome(ListVpdRouteEntriesResult(outcome.result()));
	else
		return ListVpdRouteEntriesOutcome(outcome.error());
}

void EfloClient::listVpdRouteEntriesAsync(const ListVpdRouteEntriesRequest& request, const ListVpdRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVpdRouteEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::ListVpdRouteEntriesOutcomeCallable EfloClient::listVpdRouteEntriesCallable(const ListVpdRouteEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVpdRouteEntriesOutcome()>>(
			[this, request]()
			{
			return this->listVpdRouteEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::ListVpdsOutcome EfloClient::listVpds(const ListVpdsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVpdsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVpdsOutcome(ListVpdsResult(outcome.result()));
	else
		return ListVpdsOutcome(outcome.error());
}

void EfloClient::listVpdsAsync(const ListVpdsRequest& request, const ListVpdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVpds(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::ListVpdsOutcomeCallable EfloClient::listVpdsCallable(const ListVpdsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVpdsOutcome()>>(
			[this, request]()
			{
			return this->listVpds(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::QueryInstanceNcdOutcome EfloClient::queryInstanceNcd(const QueryInstanceNcdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryInstanceNcdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryInstanceNcdOutcome(QueryInstanceNcdResult(outcome.result()));
	else
		return QueryInstanceNcdOutcome(outcome.error());
}

void EfloClient::queryInstanceNcdAsync(const QueryInstanceNcdRequest& request, const QueryInstanceNcdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryInstanceNcd(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::QueryInstanceNcdOutcomeCallable EfloClient::queryInstanceNcdCallable(const QueryInstanceNcdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryInstanceNcdOutcome()>>(
			[this, request]()
			{
			return this->queryInstanceNcd(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::UnAssignPrivateIpAddressOutcome EfloClient::unAssignPrivateIpAddress(const UnAssignPrivateIpAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnAssignPrivateIpAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnAssignPrivateIpAddressOutcome(UnAssignPrivateIpAddressResult(outcome.result()));
	else
		return UnAssignPrivateIpAddressOutcome(outcome.error());
}

void EfloClient::unAssignPrivateIpAddressAsync(const UnAssignPrivateIpAddressRequest& request, const UnAssignPrivateIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unAssignPrivateIpAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::UnAssignPrivateIpAddressOutcomeCallable EfloClient::unAssignPrivateIpAddressCallable(const UnAssignPrivateIpAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnAssignPrivateIpAddressOutcome()>>(
			[this, request]()
			{
			return this->unAssignPrivateIpAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::UnAssociateVpdCidrBlockOutcome EfloClient::unAssociateVpdCidrBlock(const UnAssociateVpdCidrBlockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnAssociateVpdCidrBlockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnAssociateVpdCidrBlockOutcome(UnAssociateVpdCidrBlockResult(outcome.result()));
	else
		return UnAssociateVpdCidrBlockOutcome(outcome.error());
}

void EfloClient::unAssociateVpdCidrBlockAsync(const UnAssociateVpdCidrBlockRequest& request, const UnAssociateVpdCidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unAssociateVpdCidrBlock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::UnAssociateVpdCidrBlockOutcomeCallable EfloClient::unAssociateVpdCidrBlockCallable(const UnAssociateVpdCidrBlockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnAssociateVpdCidrBlockOutcome()>>(
			[this, request]()
			{
			return this->unAssociateVpdCidrBlock(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::UnassignLeniPrivateIpAddressOutcome EfloClient::unassignLeniPrivateIpAddress(const UnassignLeniPrivateIpAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnassignLeniPrivateIpAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnassignLeniPrivateIpAddressOutcome(UnassignLeniPrivateIpAddressResult(outcome.result()));
	else
		return UnassignLeniPrivateIpAddressOutcome(outcome.error());
}

void EfloClient::unassignLeniPrivateIpAddressAsync(const UnassignLeniPrivateIpAddressRequest& request, const UnassignLeniPrivateIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unassignLeniPrivateIpAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::UnassignLeniPrivateIpAddressOutcomeCallable EfloClient::unassignLeniPrivateIpAddressCallable(const UnassignLeniPrivateIpAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnassignLeniPrivateIpAddressOutcome()>>(
			[this, request]()
			{
			return this->unassignLeniPrivateIpAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::UpdateElasticNetworkInterfaceOutcome EfloClient::updateElasticNetworkInterface(const UpdateElasticNetworkInterfaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateElasticNetworkInterfaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateElasticNetworkInterfaceOutcome(UpdateElasticNetworkInterfaceResult(outcome.result()));
	else
		return UpdateElasticNetworkInterfaceOutcome(outcome.error());
}

void EfloClient::updateElasticNetworkInterfaceAsync(const UpdateElasticNetworkInterfaceRequest& request, const UpdateElasticNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateElasticNetworkInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::UpdateElasticNetworkInterfaceOutcomeCallable EfloClient::updateElasticNetworkInterfaceCallable(const UpdateElasticNetworkInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateElasticNetworkInterfaceOutcome()>>(
			[this, request]()
			{
			return this->updateElasticNetworkInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::UpdateErOutcome EfloClient::updateEr(const UpdateErRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateErOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateErOutcome(UpdateErResult(outcome.result()));
	else
		return UpdateErOutcome(outcome.error());
}

void EfloClient::updateErAsync(const UpdateErRequest& request, const UpdateErAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEr(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::UpdateErOutcomeCallable EfloClient::updateErCallable(const UpdateErRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateErOutcome()>>(
			[this, request]()
			{
			return this->updateEr(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::UpdateErAttachmentOutcome EfloClient::updateErAttachment(const UpdateErAttachmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateErAttachmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateErAttachmentOutcome(UpdateErAttachmentResult(outcome.result()));
	else
		return UpdateErAttachmentOutcome(outcome.error());
}

void EfloClient::updateErAttachmentAsync(const UpdateErAttachmentRequest& request, const UpdateErAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateErAttachment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::UpdateErAttachmentOutcomeCallable EfloClient::updateErAttachmentCallable(const UpdateErAttachmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateErAttachmentOutcome()>>(
			[this, request]()
			{
			return this->updateErAttachment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::UpdateErRouteMapOutcome EfloClient::updateErRouteMap(const UpdateErRouteMapRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateErRouteMapOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateErRouteMapOutcome(UpdateErRouteMapResult(outcome.result()));
	else
		return UpdateErRouteMapOutcome(outcome.error());
}

void EfloClient::updateErRouteMapAsync(const UpdateErRouteMapRequest& request, const UpdateErRouteMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateErRouteMap(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::UpdateErRouteMapOutcomeCallable EfloClient::updateErRouteMapCallable(const UpdateErRouteMapRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateErRouteMapOutcome()>>(
			[this, request]()
			{
			return this->updateErRouteMap(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::UpdateLeniPrivateIpAddressOutcome EfloClient::updateLeniPrivateIpAddress(const UpdateLeniPrivateIpAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLeniPrivateIpAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLeniPrivateIpAddressOutcome(UpdateLeniPrivateIpAddressResult(outcome.result()));
	else
		return UpdateLeniPrivateIpAddressOutcome(outcome.error());
}

void EfloClient::updateLeniPrivateIpAddressAsync(const UpdateLeniPrivateIpAddressRequest& request, const UpdateLeniPrivateIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLeniPrivateIpAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::UpdateLeniPrivateIpAddressOutcomeCallable EfloClient::updateLeniPrivateIpAddressCallable(const UpdateLeniPrivateIpAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLeniPrivateIpAddressOutcome()>>(
			[this, request]()
			{
			return this->updateLeniPrivateIpAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::UpdateSubnetOutcome EfloClient::updateSubnet(const UpdateSubnetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSubnetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSubnetOutcome(UpdateSubnetResult(outcome.result()));
	else
		return UpdateSubnetOutcome(outcome.error());
}

void EfloClient::updateSubnetAsync(const UpdateSubnetRequest& request, const UpdateSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSubnet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::UpdateSubnetOutcomeCallable EfloClient::updateSubnetCallable(const UpdateSubnetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSubnetOutcome()>>(
			[this, request]()
			{
			return this->updateSubnet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::UpdateVccOutcome EfloClient::updateVcc(const UpdateVccRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateVccOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateVccOutcome(UpdateVccResult(outcome.result()));
	else
		return UpdateVccOutcome(outcome.error());
}

void EfloClient::updateVccAsync(const UpdateVccRequest& request, const UpdateVccAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateVcc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::UpdateVccOutcomeCallable EfloClient::updateVccCallable(const UpdateVccRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateVccOutcome()>>(
			[this, request]()
			{
			return this->updateVcc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::UpdateVpdOutcome EfloClient::updateVpd(const UpdateVpdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateVpdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateVpdOutcome(UpdateVpdResult(outcome.result()));
	else
		return UpdateVpdOutcome(outcome.error());
}

void EfloClient::updateVpdAsync(const UpdateVpdRequest& request, const UpdateVpdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateVpd(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::UpdateVpdOutcomeCallable EfloClient::updateVpdCallable(const UpdateVpdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateVpdOutcome()>>(
			[this, request]()
			{
			return this->updateVpd(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

