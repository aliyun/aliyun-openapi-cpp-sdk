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

#include <alibabacloud/smartag/SmartagClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

namespace
{
	const std::string SERVICE_NAME = "Smartag";
}

SmartagClient::SmartagClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "smartag");
}

SmartagClient::SmartagClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "smartag");
}

SmartagClient::SmartagClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "smartag");
}

SmartagClient::~SmartagClient()
{}

SmartagClient::ActivateSmartAccessGatewayOutcome SmartagClient::activateSmartAccessGateway(const ActivateSmartAccessGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ActivateSmartAccessGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ActivateSmartAccessGatewayOutcome(ActivateSmartAccessGatewayResult(outcome.result()));
	else
		return ActivateSmartAccessGatewayOutcome(outcome.error());
}

void SmartagClient::activateSmartAccessGatewayAsync(const ActivateSmartAccessGatewayRequest& request, const ActivateSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, activateSmartAccessGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ActivateSmartAccessGatewayOutcomeCallable SmartagClient::activateSmartAccessGatewayCallable(const ActivateSmartAccessGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ActivateSmartAccessGatewayOutcome()>>(
			[this, request]()
			{
			return this->activateSmartAccessGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ActiveFlowLogOutcome SmartagClient::activeFlowLog(const ActiveFlowLogRequest &request) const
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

void SmartagClient::activeFlowLogAsync(const ActiveFlowLogRequest& request, const ActiveFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, activeFlowLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ActiveFlowLogOutcomeCallable SmartagClient::activeFlowLogCallable(const ActiveFlowLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ActiveFlowLogOutcome()>>(
			[this, request]()
			{
			return this->activeFlowLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::AddACLRuleOutcome SmartagClient::addACLRule(const AddACLRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddACLRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddACLRuleOutcome(AddACLRuleResult(outcome.result()));
	else
		return AddACLRuleOutcome(outcome.error());
}

void SmartagClient::addACLRuleAsync(const AddACLRuleRequest& request, const AddACLRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addACLRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::AddACLRuleOutcomeCallable SmartagClient::addACLRuleCallable(const AddACLRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddACLRuleOutcome()>>(
			[this, request]()
			{
			return this->addACLRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::AddDnatEntryOutcome SmartagClient::addDnatEntry(const AddDnatEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddDnatEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddDnatEntryOutcome(AddDnatEntryResult(outcome.result()));
	else
		return AddDnatEntryOutcome(outcome.error());
}

void SmartagClient::addDnatEntryAsync(const AddDnatEntryRequest& request, const AddDnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDnatEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::AddDnatEntryOutcomeCallable SmartagClient::addDnatEntryCallable(const AddDnatEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDnatEntryOutcome()>>(
			[this, request]()
			{
			return this->addDnatEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::AddSnatEntryOutcome SmartagClient::addSnatEntry(const AddSnatEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddSnatEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddSnatEntryOutcome(AddSnatEntryResult(outcome.result()));
	else
		return AddSnatEntryOutcome(outcome.error());
}

void SmartagClient::addSnatEntryAsync(const AddSnatEntryRequest& request, const AddSnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addSnatEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::AddSnatEntryOutcomeCallable SmartagClient::addSnatEntryCallable(const AddSnatEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddSnatEntryOutcome()>>(
			[this, request]()
			{
			return this->addSnatEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::AssociateACLOutcome SmartagClient::associateACL(const AssociateACLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateACLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateACLOutcome(AssociateACLResult(outcome.result()));
	else
		return AssociateACLOutcome(outcome.error());
}

void SmartagClient::associateACLAsync(const AssociateACLRequest& request, const AssociateACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateACL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::AssociateACLOutcomeCallable SmartagClient::associateACLCallable(const AssociateACLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateACLOutcome()>>(
			[this, request]()
			{
			return this->associateACL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::AssociateFlowLogOutcome SmartagClient::associateFlowLog(const AssociateFlowLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateFlowLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateFlowLogOutcome(AssociateFlowLogResult(outcome.result()));
	else
		return AssociateFlowLogOutcome(outcome.error());
}

void SmartagClient::associateFlowLogAsync(const AssociateFlowLogRequest& request, const AssociateFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateFlowLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::AssociateFlowLogOutcomeCallable SmartagClient::associateFlowLogCallable(const AssociateFlowLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateFlowLogOutcome()>>(
			[this, request]()
			{
			return this->associateFlowLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::AssociateQosOutcome SmartagClient::associateQos(const AssociateQosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateQosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateQosOutcome(AssociateQosResult(outcome.result()));
	else
		return AssociateQosOutcome(outcome.error());
}

void SmartagClient::associateQosAsync(const AssociateQosRequest& request, const AssociateQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateQos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::AssociateQosOutcomeCallable SmartagClient::associateQosCallable(const AssociateQosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateQosOutcome()>>(
			[this, request]()
			{
			return this->associateQos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::BindSerialNumberOutcome SmartagClient::bindSerialNumber(const BindSerialNumberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindSerialNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindSerialNumberOutcome(BindSerialNumberResult(outcome.result()));
	else
		return BindSerialNumberOutcome(outcome.error());
}

void SmartagClient::bindSerialNumberAsync(const BindSerialNumberRequest& request, const BindSerialNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindSerialNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::BindSerialNumberOutcomeCallable SmartagClient::bindSerialNumberCallable(const BindSerialNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindSerialNumberOutcome()>>(
			[this, request]()
			{
			return this->bindSerialNumber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::BindSmartAccessGatewayOutcome SmartagClient::bindSmartAccessGateway(const BindSmartAccessGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindSmartAccessGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindSmartAccessGatewayOutcome(BindSmartAccessGatewayResult(outcome.result()));
	else
		return BindSmartAccessGatewayOutcome(outcome.error());
}

void SmartagClient::bindSmartAccessGatewayAsync(const BindSmartAccessGatewayRequest& request, const BindSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindSmartAccessGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::BindSmartAccessGatewayOutcomeCallable SmartagClient::bindSmartAccessGatewayCallable(const BindSmartAccessGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindSmartAccessGatewayOutcome()>>(
			[this, request]()
			{
			return this->bindSmartAccessGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::BindVbrOutcome SmartagClient::bindVbr(const BindVbrRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindVbrOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindVbrOutcome(BindVbrResult(outcome.result()));
	else
		return BindVbrOutcome(outcome.error());
}

void SmartagClient::bindVbrAsync(const BindVbrRequest& request, const BindVbrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindVbr(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::BindVbrOutcomeCallable SmartagClient::bindVbrCallable(const BindVbrRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindVbrOutcome()>>(
			[this, request]()
			{
			return this->bindVbr(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ClearSagCipherOutcome SmartagClient::clearSagCipher(const ClearSagCipherRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ClearSagCipherOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ClearSagCipherOutcome(ClearSagCipherResult(outcome.result()));
	else
		return ClearSagCipherOutcome(outcome.error());
}

void SmartagClient::clearSagCipherAsync(const ClearSagCipherRequest& request, const ClearSagCipherAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, clearSagCipher(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ClearSagCipherOutcomeCallable SmartagClient::clearSagCipherCallable(const ClearSagCipherRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ClearSagCipherOutcome()>>(
			[this, request]()
			{
			return this->clearSagCipher(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ClearSagRouteableAddressOutcome SmartagClient::clearSagRouteableAddress(const ClearSagRouteableAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ClearSagRouteableAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ClearSagRouteableAddressOutcome(ClearSagRouteableAddressResult(outcome.result()));
	else
		return ClearSagRouteableAddressOutcome(outcome.error());
}

void SmartagClient::clearSagRouteableAddressAsync(const ClearSagRouteableAddressRequest& request, const ClearSagRouteableAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, clearSagRouteableAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ClearSagRouteableAddressOutcomeCallable SmartagClient::clearSagRouteableAddressCallable(const ClearSagRouteableAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ClearSagRouteableAddressOutcome()>>(
			[this, request]()
			{
			return this->clearSagRouteableAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::CreateACLOutcome SmartagClient::createACL(const CreateACLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateACLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateACLOutcome(CreateACLResult(outcome.result()));
	else
		return CreateACLOutcome(outcome.error());
}

void SmartagClient::createACLAsync(const CreateACLRequest& request, const CreateACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createACL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::CreateACLOutcomeCallable SmartagClient::createACLCallable(const CreateACLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateACLOutcome()>>(
			[this, request]()
			{
			return this->createACL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::CreateCloudConnectNetworkOutcome SmartagClient::createCloudConnectNetwork(const CreateCloudConnectNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCloudConnectNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCloudConnectNetworkOutcome(CreateCloudConnectNetworkResult(outcome.result()));
	else
		return CreateCloudConnectNetworkOutcome(outcome.error());
}

void SmartagClient::createCloudConnectNetworkAsync(const CreateCloudConnectNetworkRequest& request, const CreateCloudConnectNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCloudConnectNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::CreateCloudConnectNetworkOutcomeCallable SmartagClient::createCloudConnectNetworkCallable(const CreateCloudConnectNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCloudConnectNetworkOutcome()>>(
			[this, request]()
			{
			return this->createCloudConnectNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::CreateEnterpriseCodeOutcome SmartagClient::createEnterpriseCode(const CreateEnterpriseCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEnterpriseCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEnterpriseCodeOutcome(CreateEnterpriseCodeResult(outcome.result()));
	else
		return CreateEnterpriseCodeOutcome(outcome.error());
}

void SmartagClient::createEnterpriseCodeAsync(const CreateEnterpriseCodeRequest& request, const CreateEnterpriseCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEnterpriseCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::CreateEnterpriseCodeOutcomeCallable SmartagClient::createEnterpriseCodeCallable(const CreateEnterpriseCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEnterpriseCodeOutcome()>>(
			[this, request]()
			{
			return this->createEnterpriseCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::CreateFlowLogOutcome SmartagClient::createFlowLog(const CreateFlowLogRequest &request) const
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

void SmartagClient::createFlowLogAsync(const CreateFlowLogRequest& request, const CreateFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFlowLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::CreateFlowLogOutcomeCallable SmartagClient::createFlowLogCallable(const CreateFlowLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFlowLogOutcome()>>(
			[this, request]()
			{
			return this->createFlowLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::CreateHealthCheckOutcome SmartagClient::createHealthCheck(const CreateHealthCheckRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateHealthCheckOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateHealthCheckOutcome(CreateHealthCheckResult(outcome.result()));
	else
		return CreateHealthCheckOutcome(outcome.error());
}

void SmartagClient::createHealthCheckAsync(const CreateHealthCheckRequest& request, const CreateHealthCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createHealthCheck(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::CreateHealthCheckOutcomeCallable SmartagClient::createHealthCheckCallable(const CreateHealthCheckRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateHealthCheckOutcome()>>(
			[this, request]()
			{
			return this->createHealthCheck(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::CreateQosOutcome SmartagClient::createQos(const CreateQosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateQosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateQosOutcome(CreateQosResult(outcome.result()));
	else
		return CreateQosOutcome(outcome.error());
}

void SmartagClient::createQosAsync(const CreateQosRequest& request, const CreateQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createQos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::CreateQosOutcomeCallable SmartagClient::createQosCallable(const CreateQosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateQosOutcome()>>(
			[this, request]()
			{
			return this->createQos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::CreateQosCarOutcome SmartagClient::createQosCar(const CreateQosCarRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateQosCarOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateQosCarOutcome(CreateQosCarResult(outcome.result()));
	else
		return CreateQosCarOutcome(outcome.error());
}

void SmartagClient::createQosCarAsync(const CreateQosCarRequest& request, const CreateQosCarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createQosCar(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::CreateQosCarOutcomeCallable SmartagClient::createQosCarCallable(const CreateQosCarRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateQosCarOutcome()>>(
			[this, request]()
			{
			return this->createQosCar(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::CreateQosPolicyOutcome SmartagClient::createQosPolicy(const CreateQosPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateQosPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateQosPolicyOutcome(CreateQosPolicyResult(outcome.result()));
	else
		return CreateQosPolicyOutcome(outcome.error());
}

void SmartagClient::createQosPolicyAsync(const CreateQosPolicyRequest& request, const CreateQosPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createQosPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::CreateQosPolicyOutcomeCallable SmartagClient::createQosPolicyCallable(const CreateQosPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateQosPolicyOutcome()>>(
			[this, request]()
			{
			return this->createQosPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::CreateSagExpressConnectInterfaceOutcome SmartagClient::createSagExpressConnectInterface(const CreateSagExpressConnectInterfaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSagExpressConnectInterfaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSagExpressConnectInterfaceOutcome(CreateSagExpressConnectInterfaceResult(outcome.result()));
	else
		return CreateSagExpressConnectInterfaceOutcome(outcome.error());
}

void SmartagClient::createSagExpressConnectInterfaceAsync(const CreateSagExpressConnectInterfaceRequest& request, const CreateSagExpressConnectInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSagExpressConnectInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::CreateSagExpressConnectInterfaceOutcomeCallable SmartagClient::createSagExpressConnectInterfaceCallable(const CreateSagExpressConnectInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSagExpressConnectInterfaceOutcome()>>(
			[this, request]()
			{
			return this->createSagExpressConnectInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::CreateSagStaticRouteOutcome SmartagClient::createSagStaticRoute(const CreateSagStaticRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSagStaticRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSagStaticRouteOutcome(CreateSagStaticRouteResult(outcome.result()));
	else
		return CreateSagStaticRouteOutcome(outcome.error());
}

void SmartagClient::createSagStaticRouteAsync(const CreateSagStaticRouteRequest& request, const CreateSagStaticRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSagStaticRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::CreateSagStaticRouteOutcomeCallable SmartagClient::createSagStaticRouteCallable(const CreateSagStaticRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSagStaticRouteOutcome()>>(
			[this, request]()
			{
			return this->createSagStaticRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::CreateSmartAccessGatewayOutcome SmartagClient::createSmartAccessGateway(const CreateSmartAccessGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSmartAccessGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSmartAccessGatewayOutcome(CreateSmartAccessGatewayResult(outcome.result()));
	else
		return CreateSmartAccessGatewayOutcome(outcome.error());
}

void SmartagClient::createSmartAccessGatewayAsync(const CreateSmartAccessGatewayRequest& request, const CreateSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSmartAccessGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::CreateSmartAccessGatewayOutcomeCallable SmartagClient::createSmartAccessGatewayCallable(const CreateSmartAccessGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSmartAccessGatewayOutcome()>>(
			[this, request]()
			{
			return this->createSmartAccessGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::CreateSmartAccessGatewayClientUserOutcome SmartagClient::createSmartAccessGatewayClientUser(const CreateSmartAccessGatewayClientUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSmartAccessGatewayClientUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSmartAccessGatewayClientUserOutcome(CreateSmartAccessGatewayClientUserResult(outcome.result()));
	else
		return CreateSmartAccessGatewayClientUserOutcome(outcome.error());
}

void SmartagClient::createSmartAccessGatewayClientUserAsync(const CreateSmartAccessGatewayClientUserRequest& request, const CreateSmartAccessGatewayClientUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSmartAccessGatewayClientUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::CreateSmartAccessGatewayClientUserOutcomeCallable SmartagClient::createSmartAccessGatewayClientUserCallable(const CreateSmartAccessGatewayClientUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSmartAccessGatewayClientUserOutcome()>>(
			[this, request]()
			{
			return this->createSmartAccessGatewayClientUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::CreateSmartAccessGatewaySoftwareOutcome SmartagClient::createSmartAccessGatewaySoftware(const CreateSmartAccessGatewaySoftwareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSmartAccessGatewaySoftwareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSmartAccessGatewaySoftwareOutcome(CreateSmartAccessGatewaySoftwareResult(outcome.result()));
	else
		return CreateSmartAccessGatewaySoftwareOutcome(outcome.error());
}

void SmartagClient::createSmartAccessGatewaySoftwareAsync(const CreateSmartAccessGatewaySoftwareRequest& request, const CreateSmartAccessGatewaySoftwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSmartAccessGatewaySoftware(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::CreateSmartAccessGatewaySoftwareOutcomeCallable SmartagClient::createSmartAccessGatewaySoftwareCallable(const CreateSmartAccessGatewaySoftwareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSmartAccessGatewaySoftwareOutcome()>>(
			[this, request]()
			{
			return this->createSmartAccessGatewaySoftware(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DeactiveFlowLogOutcome SmartagClient::deactiveFlowLog(const DeactiveFlowLogRequest &request) const
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

void SmartagClient::deactiveFlowLogAsync(const DeactiveFlowLogRequest& request, const DeactiveFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deactiveFlowLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DeactiveFlowLogOutcomeCallable SmartagClient::deactiveFlowLogCallable(const DeactiveFlowLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeactiveFlowLogOutcome()>>(
			[this, request]()
			{
			return this->deactiveFlowLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DeleteACLOutcome SmartagClient::deleteACL(const DeleteACLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteACLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteACLOutcome(DeleteACLResult(outcome.result()));
	else
		return DeleteACLOutcome(outcome.error());
}

void SmartagClient::deleteACLAsync(const DeleteACLRequest& request, const DeleteACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteACL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DeleteACLOutcomeCallable SmartagClient::deleteACLCallable(const DeleteACLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteACLOutcome()>>(
			[this, request]()
			{
			return this->deleteACL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DeleteACLRuleOutcome SmartagClient::deleteACLRule(const DeleteACLRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteACLRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteACLRuleOutcome(DeleteACLRuleResult(outcome.result()));
	else
		return DeleteACLRuleOutcome(outcome.error());
}

void SmartagClient::deleteACLRuleAsync(const DeleteACLRuleRequest& request, const DeleteACLRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteACLRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DeleteACLRuleOutcomeCallable SmartagClient::deleteACLRuleCallable(const DeleteACLRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteACLRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteACLRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DeleteCloudConnectNetworkOutcome SmartagClient::deleteCloudConnectNetwork(const DeleteCloudConnectNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCloudConnectNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCloudConnectNetworkOutcome(DeleteCloudConnectNetworkResult(outcome.result()));
	else
		return DeleteCloudConnectNetworkOutcome(outcome.error());
}

void SmartagClient::deleteCloudConnectNetworkAsync(const DeleteCloudConnectNetworkRequest& request, const DeleteCloudConnectNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCloudConnectNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DeleteCloudConnectNetworkOutcomeCallable SmartagClient::deleteCloudConnectNetworkCallable(const DeleteCloudConnectNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCloudConnectNetworkOutcome()>>(
			[this, request]()
			{
			return this->deleteCloudConnectNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DeleteDnatEntryOutcome SmartagClient::deleteDnatEntry(const DeleteDnatEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDnatEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDnatEntryOutcome(DeleteDnatEntryResult(outcome.result()));
	else
		return DeleteDnatEntryOutcome(outcome.error());
}

void SmartagClient::deleteDnatEntryAsync(const DeleteDnatEntryRequest& request, const DeleteDnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDnatEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DeleteDnatEntryOutcomeCallable SmartagClient::deleteDnatEntryCallable(const DeleteDnatEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDnatEntryOutcome()>>(
			[this, request]()
			{
			return this->deleteDnatEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DeleteEnterpriseCodeOutcome SmartagClient::deleteEnterpriseCode(const DeleteEnterpriseCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEnterpriseCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEnterpriseCodeOutcome(DeleteEnterpriseCodeResult(outcome.result()));
	else
		return DeleteEnterpriseCodeOutcome(outcome.error());
}

void SmartagClient::deleteEnterpriseCodeAsync(const DeleteEnterpriseCodeRequest& request, const DeleteEnterpriseCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEnterpriseCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DeleteEnterpriseCodeOutcomeCallable SmartagClient::deleteEnterpriseCodeCallable(const DeleteEnterpriseCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEnterpriseCodeOutcome()>>(
			[this, request]()
			{
			return this->deleteEnterpriseCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DeleteFlowLogOutcome SmartagClient::deleteFlowLog(const DeleteFlowLogRequest &request) const
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

void SmartagClient::deleteFlowLogAsync(const DeleteFlowLogRequest& request, const DeleteFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFlowLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DeleteFlowLogOutcomeCallable SmartagClient::deleteFlowLogCallable(const DeleteFlowLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFlowLogOutcome()>>(
			[this, request]()
			{
			return this->deleteFlowLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DeleteHealthCheckOutcome SmartagClient::deleteHealthCheck(const DeleteHealthCheckRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteHealthCheckOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteHealthCheckOutcome(DeleteHealthCheckResult(outcome.result()));
	else
		return DeleteHealthCheckOutcome(outcome.error());
}

void SmartagClient::deleteHealthCheckAsync(const DeleteHealthCheckRequest& request, const DeleteHealthCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteHealthCheck(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DeleteHealthCheckOutcomeCallable SmartagClient::deleteHealthCheckCallable(const DeleteHealthCheckRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteHealthCheckOutcome()>>(
			[this, request]()
			{
			return this->deleteHealthCheck(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DeleteQosOutcome SmartagClient::deleteQos(const DeleteQosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteQosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteQosOutcome(DeleteQosResult(outcome.result()));
	else
		return DeleteQosOutcome(outcome.error());
}

void SmartagClient::deleteQosAsync(const DeleteQosRequest& request, const DeleteQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteQos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DeleteQosOutcomeCallable SmartagClient::deleteQosCallable(const DeleteQosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteQosOutcome()>>(
			[this, request]()
			{
			return this->deleteQos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DeleteQosCarOutcome SmartagClient::deleteQosCar(const DeleteQosCarRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteQosCarOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteQosCarOutcome(DeleteQosCarResult(outcome.result()));
	else
		return DeleteQosCarOutcome(outcome.error());
}

void SmartagClient::deleteQosCarAsync(const DeleteQosCarRequest& request, const DeleteQosCarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteQosCar(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DeleteQosCarOutcomeCallable SmartagClient::deleteQosCarCallable(const DeleteQosCarRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteQosCarOutcome()>>(
			[this, request]()
			{
			return this->deleteQosCar(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DeleteQosPolicyOutcome SmartagClient::deleteQosPolicy(const DeleteQosPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteQosPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteQosPolicyOutcome(DeleteQosPolicyResult(outcome.result()));
	else
		return DeleteQosPolicyOutcome(outcome.error());
}

void SmartagClient::deleteQosPolicyAsync(const DeleteQosPolicyRequest& request, const DeleteQosPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteQosPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DeleteQosPolicyOutcomeCallable SmartagClient::deleteQosPolicyCallable(const DeleteQosPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteQosPolicyOutcome()>>(
			[this, request]()
			{
			return this->deleteQosPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DeleteRouteDistributionStrategyOutcome SmartagClient::deleteRouteDistributionStrategy(const DeleteRouteDistributionStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRouteDistributionStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRouteDistributionStrategyOutcome(DeleteRouteDistributionStrategyResult(outcome.result()));
	else
		return DeleteRouteDistributionStrategyOutcome(outcome.error());
}

void SmartagClient::deleteRouteDistributionStrategyAsync(const DeleteRouteDistributionStrategyRequest& request, const DeleteRouteDistributionStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRouteDistributionStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DeleteRouteDistributionStrategyOutcomeCallable SmartagClient::deleteRouteDistributionStrategyCallable(const DeleteRouteDistributionStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRouteDistributionStrategyOutcome()>>(
			[this, request]()
			{
			return this->deleteRouteDistributionStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DeleteSagExpressConnectInterfaceOutcome SmartagClient::deleteSagExpressConnectInterface(const DeleteSagExpressConnectInterfaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSagExpressConnectInterfaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSagExpressConnectInterfaceOutcome(DeleteSagExpressConnectInterfaceResult(outcome.result()));
	else
		return DeleteSagExpressConnectInterfaceOutcome(outcome.error());
}

void SmartagClient::deleteSagExpressConnectInterfaceAsync(const DeleteSagExpressConnectInterfaceRequest& request, const DeleteSagExpressConnectInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSagExpressConnectInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DeleteSagExpressConnectInterfaceOutcomeCallable SmartagClient::deleteSagExpressConnectInterfaceCallable(const DeleteSagExpressConnectInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSagExpressConnectInterfaceOutcome()>>(
			[this, request]()
			{
			return this->deleteSagExpressConnectInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DeleteSagStaticRouteOutcome SmartagClient::deleteSagStaticRoute(const DeleteSagStaticRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSagStaticRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSagStaticRouteOutcome(DeleteSagStaticRouteResult(outcome.result()));
	else
		return DeleteSagStaticRouteOutcome(outcome.error());
}

void SmartagClient::deleteSagStaticRouteAsync(const DeleteSagStaticRouteRequest& request, const DeleteSagStaticRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSagStaticRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DeleteSagStaticRouteOutcomeCallable SmartagClient::deleteSagStaticRouteCallable(const DeleteSagStaticRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSagStaticRouteOutcome()>>(
			[this, request]()
			{
			return this->deleteSagStaticRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DeleteSmartAccessGatewayOutcome SmartagClient::deleteSmartAccessGateway(const DeleteSmartAccessGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSmartAccessGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSmartAccessGatewayOutcome(DeleteSmartAccessGatewayResult(outcome.result()));
	else
		return DeleteSmartAccessGatewayOutcome(outcome.error());
}

void SmartagClient::deleteSmartAccessGatewayAsync(const DeleteSmartAccessGatewayRequest& request, const DeleteSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSmartAccessGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DeleteSmartAccessGatewayOutcomeCallable SmartagClient::deleteSmartAccessGatewayCallable(const DeleteSmartAccessGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSmartAccessGatewayOutcome()>>(
			[this, request]()
			{
			return this->deleteSmartAccessGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DeleteSmartAccessGatewayClientUserOutcome SmartagClient::deleteSmartAccessGatewayClientUser(const DeleteSmartAccessGatewayClientUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSmartAccessGatewayClientUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSmartAccessGatewayClientUserOutcome(DeleteSmartAccessGatewayClientUserResult(outcome.result()));
	else
		return DeleteSmartAccessGatewayClientUserOutcome(outcome.error());
}

void SmartagClient::deleteSmartAccessGatewayClientUserAsync(const DeleteSmartAccessGatewayClientUserRequest& request, const DeleteSmartAccessGatewayClientUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSmartAccessGatewayClientUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DeleteSmartAccessGatewayClientUserOutcomeCallable SmartagClient::deleteSmartAccessGatewayClientUserCallable(const DeleteSmartAccessGatewayClientUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSmartAccessGatewayClientUserOutcome()>>(
			[this, request]()
			{
			return this->deleteSmartAccessGatewayClientUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DeleteSnatEntryOutcome SmartagClient::deleteSnatEntry(const DeleteSnatEntryRequest &request) const
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

void SmartagClient::deleteSnatEntryAsync(const DeleteSnatEntryRequest& request, const DeleteSnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSnatEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DeleteSnatEntryOutcomeCallable SmartagClient::deleteSnatEntryCallable(const DeleteSnatEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSnatEntryOutcome()>>(
			[this, request]()
			{
			return this->deleteSnatEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeACLAttributeOutcome SmartagClient::describeACLAttribute(const DescribeACLAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeACLAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeACLAttributeOutcome(DescribeACLAttributeResult(outcome.result()));
	else
		return DescribeACLAttributeOutcome(outcome.error());
}

void SmartagClient::describeACLAttributeAsync(const DescribeACLAttributeRequest& request, const DescribeACLAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeACLAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeACLAttributeOutcomeCallable SmartagClient::describeACLAttributeCallable(const DescribeACLAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeACLAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeACLAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeACLsOutcome SmartagClient::describeACLs(const DescribeACLsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeACLsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeACLsOutcome(DescribeACLsResult(outcome.result()));
	else
		return DescribeACLsOutcome(outcome.error());
}

void SmartagClient::describeACLsAsync(const DescribeACLsRequest& request, const DescribeACLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeACLs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeACLsOutcomeCallable SmartagClient::describeACLsCallable(const DescribeACLsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeACLsOutcome()>>(
			[this, request]()
			{
			return this->describeACLs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeBindableSmartAccessGatewaysOutcome SmartagClient::describeBindableSmartAccessGateways(const DescribeBindableSmartAccessGatewaysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBindableSmartAccessGatewaysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBindableSmartAccessGatewaysOutcome(DescribeBindableSmartAccessGatewaysResult(outcome.result()));
	else
		return DescribeBindableSmartAccessGatewaysOutcome(outcome.error());
}

void SmartagClient::describeBindableSmartAccessGatewaysAsync(const DescribeBindableSmartAccessGatewaysRequest& request, const DescribeBindableSmartAccessGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBindableSmartAccessGateways(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeBindableSmartAccessGatewaysOutcomeCallable SmartagClient::describeBindableSmartAccessGatewaysCallable(const DescribeBindableSmartAccessGatewaysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBindableSmartAccessGatewaysOutcome()>>(
			[this, request]()
			{
			return this->describeBindableSmartAccessGateways(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeClientUserDNSOutcome SmartagClient::describeClientUserDNS(const DescribeClientUserDNSRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClientUserDNSOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClientUserDNSOutcome(DescribeClientUserDNSResult(outcome.result()));
	else
		return DescribeClientUserDNSOutcome(outcome.error());
}

void SmartagClient::describeClientUserDNSAsync(const DescribeClientUserDNSRequest& request, const DescribeClientUserDNSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClientUserDNS(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeClientUserDNSOutcomeCallable SmartagClient::describeClientUserDNSCallable(const DescribeClientUserDNSRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClientUserDNSOutcome()>>(
			[this, request]()
			{
			return this->describeClientUserDNS(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeCloudConnectNetworksOutcome SmartagClient::describeCloudConnectNetworks(const DescribeCloudConnectNetworksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCloudConnectNetworksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCloudConnectNetworksOutcome(DescribeCloudConnectNetworksResult(outcome.result()));
	else
		return DescribeCloudConnectNetworksOutcome(outcome.error());
}

void SmartagClient::describeCloudConnectNetworksAsync(const DescribeCloudConnectNetworksRequest& request, const DescribeCloudConnectNetworksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCloudConnectNetworks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeCloudConnectNetworksOutcomeCallable SmartagClient::describeCloudConnectNetworksCallable(const DescribeCloudConnectNetworksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCloudConnectNetworksOutcome()>>(
			[this, request]()
			{
			return this->describeCloudConnectNetworks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeDeviceAutoUpgradePolicyOutcome SmartagClient::describeDeviceAutoUpgradePolicy(const DescribeDeviceAutoUpgradePolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDeviceAutoUpgradePolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDeviceAutoUpgradePolicyOutcome(DescribeDeviceAutoUpgradePolicyResult(outcome.result()));
	else
		return DescribeDeviceAutoUpgradePolicyOutcome(outcome.error());
}

void SmartagClient::describeDeviceAutoUpgradePolicyAsync(const DescribeDeviceAutoUpgradePolicyRequest& request, const DescribeDeviceAutoUpgradePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDeviceAutoUpgradePolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeDeviceAutoUpgradePolicyOutcomeCallable SmartagClient::describeDeviceAutoUpgradePolicyCallable(const DescribeDeviceAutoUpgradePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDeviceAutoUpgradePolicyOutcome()>>(
			[this, request]()
			{
			return this->describeDeviceAutoUpgradePolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeDnatEntriesOutcome SmartagClient::describeDnatEntries(const DescribeDnatEntriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDnatEntriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDnatEntriesOutcome(DescribeDnatEntriesResult(outcome.result()));
	else
		return DescribeDnatEntriesOutcome(outcome.error());
}

void SmartagClient::describeDnatEntriesAsync(const DescribeDnatEntriesRequest& request, const DescribeDnatEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDnatEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeDnatEntriesOutcomeCallable SmartagClient::describeDnatEntriesCallable(const DescribeDnatEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDnatEntriesOutcome()>>(
			[this, request]()
			{
			return this->describeDnatEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeFlowLogSagsOutcome SmartagClient::describeFlowLogSags(const DescribeFlowLogSagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowLogSagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowLogSagsOutcome(DescribeFlowLogSagsResult(outcome.result()));
	else
		return DescribeFlowLogSagsOutcome(outcome.error());
}

void SmartagClient::describeFlowLogSagsAsync(const DescribeFlowLogSagsRequest& request, const DescribeFlowLogSagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowLogSags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeFlowLogSagsOutcomeCallable SmartagClient::describeFlowLogSagsCallable(const DescribeFlowLogSagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowLogSagsOutcome()>>(
			[this, request]()
			{
			return this->describeFlowLogSags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeFlowLogsOutcome SmartagClient::describeFlowLogs(const DescribeFlowLogsRequest &request) const
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

void SmartagClient::describeFlowLogsAsync(const DescribeFlowLogsRequest& request, const DescribeFlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeFlowLogsOutcomeCallable SmartagClient::describeFlowLogsCallable(const DescribeFlowLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowLogsOutcome()>>(
			[this, request]()
			{
			return this->describeFlowLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeGrantRulesOutcome SmartagClient::describeGrantRules(const DescribeGrantRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGrantRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGrantRulesOutcome(DescribeGrantRulesResult(outcome.result()));
	else
		return DescribeGrantRulesOutcome(outcome.error());
}

void SmartagClient::describeGrantRulesAsync(const DescribeGrantRulesRequest& request, const DescribeGrantRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGrantRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeGrantRulesOutcomeCallable SmartagClient::describeGrantRulesCallable(const DescribeGrantRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGrantRulesOutcome()>>(
			[this, request]()
			{
			return this->describeGrantRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeGrantSagRulesOutcome SmartagClient::describeGrantSagRules(const DescribeGrantSagRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGrantSagRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGrantSagRulesOutcome(DescribeGrantSagRulesResult(outcome.result()));
	else
		return DescribeGrantSagRulesOutcome(outcome.error());
}

void SmartagClient::describeGrantSagRulesAsync(const DescribeGrantSagRulesRequest& request, const DescribeGrantSagRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGrantSagRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeGrantSagRulesOutcomeCallable SmartagClient::describeGrantSagRulesCallable(const DescribeGrantSagRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGrantSagRulesOutcome()>>(
			[this, request]()
			{
			return this->describeGrantSagRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeGrantSagVbrRulesOutcome SmartagClient::describeGrantSagVbrRules(const DescribeGrantSagVbrRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGrantSagVbrRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGrantSagVbrRulesOutcome(DescribeGrantSagVbrRulesResult(outcome.result()));
	else
		return DescribeGrantSagVbrRulesOutcome(outcome.error());
}

void SmartagClient::describeGrantSagVbrRulesAsync(const DescribeGrantSagVbrRulesRequest& request, const DescribeGrantSagVbrRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGrantSagVbrRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeGrantSagVbrRulesOutcomeCallable SmartagClient::describeGrantSagVbrRulesCallable(const DescribeGrantSagVbrRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGrantSagVbrRulesOutcome()>>(
			[this, request]()
			{
			return this->describeGrantSagVbrRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeHealthCheckAttributeOutcome SmartagClient::describeHealthCheckAttribute(const DescribeHealthCheckAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHealthCheckAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHealthCheckAttributeOutcome(DescribeHealthCheckAttributeResult(outcome.result()));
	else
		return DescribeHealthCheckAttributeOutcome(outcome.error());
}

void SmartagClient::describeHealthCheckAttributeAsync(const DescribeHealthCheckAttributeRequest& request, const DescribeHealthCheckAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHealthCheckAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeHealthCheckAttributeOutcomeCallable SmartagClient::describeHealthCheckAttributeCallable(const DescribeHealthCheckAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHealthCheckAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeHealthCheckAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeHealthChecksOutcome SmartagClient::describeHealthChecks(const DescribeHealthChecksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHealthChecksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHealthChecksOutcome(DescribeHealthChecksResult(outcome.result()));
	else
		return DescribeHealthChecksOutcome(outcome.error());
}

void SmartagClient::describeHealthChecksAsync(const DescribeHealthChecksRequest& request, const DescribeHealthChecksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHealthChecks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeHealthChecksOutcomeCallable SmartagClient::describeHealthChecksCallable(const DescribeHealthChecksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHealthChecksOutcome()>>(
			[this, request]()
			{
			return this->describeHealthChecks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeQosCarsOutcome SmartagClient::describeQosCars(const DescribeQosCarsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeQosCarsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeQosCarsOutcome(DescribeQosCarsResult(outcome.result()));
	else
		return DescribeQosCarsOutcome(outcome.error());
}

void SmartagClient::describeQosCarsAsync(const DescribeQosCarsRequest& request, const DescribeQosCarsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeQosCars(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeQosCarsOutcomeCallable SmartagClient::describeQosCarsCallable(const DescribeQosCarsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeQosCarsOutcome()>>(
			[this, request]()
			{
			return this->describeQosCars(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeQosPoliciesOutcome SmartagClient::describeQosPolicies(const DescribeQosPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeQosPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeQosPoliciesOutcome(DescribeQosPoliciesResult(outcome.result()));
	else
		return DescribeQosPoliciesOutcome(outcome.error());
}

void SmartagClient::describeQosPoliciesAsync(const DescribeQosPoliciesRequest& request, const DescribeQosPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeQosPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeQosPoliciesOutcomeCallable SmartagClient::describeQosPoliciesCallable(const DescribeQosPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeQosPoliciesOutcome()>>(
			[this, request]()
			{
			return this->describeQosPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeQosesOutcome SmartagClient::describeQoses(const DescribeQosesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeQosesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeQosesOutcome(DescribeQosesResult(outcome.result()));
	else
		return DescribeQosesOutcome(outcome.error());
}

void SmartagClient::describeQosesAsync(const DescribeQosesRequest& request, const DescribeQosesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeQoses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeQosesOutcomeCallable SmartagClient::describeQosesCallable(const DescribeQosesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeQosesOutcome()>>(
			[this, request]()
			{
			return this->describeQoses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeRegionsOutcome SmartagClient::describeRegions(const DescribeRegionsRequest &request) const
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

void SmartagClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeRegionsOutcomeCallable SmartagClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeRouteDistributionStrategiesOutcome SmartagClient::describeRouteDistributionStrategies(const DescribeRouteDistributionStrategiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRouteDistributionStrategiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRouteDistributionStrategiesOutcome(DescribeRouteDistributionStrategiesResult(outcome.result()));
	else
		return DescribeRouteDistributionStrategiesOutcome(outcome.error());
}

void SmartagClient::describeRouteDistributionStrategiesAsync(const DescribeRouteDistributionStrategiesRequest& request, const DescribeRouteDistributionStrategiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRouteDistributionStrategies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeRouteDistributionStrategiesOutcomeCallable SmartagClient::describeRouteDistributionStrategiesCallable(const DescribeRouteDistributionStrategiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRouteDistributionStrategiesOutcome()>>(
			[this, request]()
			{
			return this->describeRouteDistributionStrategies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSAGDeviceInfoOutcome SmartagClient::describeSAGDeviceInfo(const DescribeSAGDeviceInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSAGDeviceInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSAGDeviceInfoOutcome(DescribeSAGDeviceInfoResult(outcome.result()));
	else
		return DescribeSAGDeviceInfoOutcome(outcome.error());
}

void SmartagClient::describeSAGDeviceInfoAsync(const DescribeSAGDeviceInfoRequest& request, const DescribeSAGDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSAGDeviceInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSAGDeviceInfoOutcomeCallable SmartagClient::describeSAGDeviceInfoCallable(const DescribeSAGDeviceInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSAGDeviceInfoOutcome()>>(
			[this, request]()
			{
			return this->describeSAGDeviceInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSagCurrentDnsOutcome SmartagClient::describeSagCurrentDns(const DescribeSagCurrentDnsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSagCurrentDnsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSagCurrentDnsOutcome(DescribeSagCurrentDnsResult(outcome.result()));
	else
		return DescribeSagCurrentDnsOutcome(outcome.error());
}

void SmartagClient::describeSagCurrentDnsAsync(const DescribeSagCurrentDnsRequest& request, const DescribeSagCurrentDnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSagCurrentDns(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSagCurrentDnsOutcomeCallable SmartagClient::describeSagCurrentDnsCallable(const DescribeSagCurrentDnsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSagCurrentDnsOutcome()>>(
			[this, request]()
			{
			return this->describeSagCurrentDns(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSagDropTopNOutcome SmartagClient::describeSagDropTopN(const DescribeSagDropTopNRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSagDropTopNOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSagDropTopNOutcome(DescribeSagDropTopNResult(outcome.result()));
	else
		return DescribeSagDropTopNOutcome(outcome.error());
}

void SmartagClient::describeSagDropTopNAsync(const DescribeSagDropTopNRequest& request, const DescribeSagDropTopNAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSagDropTopN(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSagDropTopNOutcomeCallable SmartagClient::describeSagDropTopNCallable(const DescribeSagDropTopNRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSagDropTopNOutcome()>>(
			[this, request]()
			{
			return this->describeSagDropTopN(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSagExpressConnectInterfaceListOutcome SmartagClient::describeSagExpressConnectInterfaceList(const DescribeSagExpressConnectInterfaceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSagExpressConnectInterfaceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSagExpressConnectInterfaceListOutcome(DescribeSagExpressConnectInterfaceListResult(outcome.result()));
	else
		return DescribeSagExpressConnectInterfaceListOutcome(outcome.error());
}

void SmartagClient::describeSagExpressConnectInterfaceListAsync(const DescribeSagExpressConnectInterfaceListRequest& request, const DescribeSagExpressConnectInterfaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSagExpressConnectInterfaceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSagExpressConnectInterfaceListOutcomeCallable SmartagClient::describeSagExpressConnectInterfaceListCallable(const DescribeSagExpressConnectInterfaceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSagExpressConnectInterfaceListOutcome()>>(
			[this, request]()
			{
			return this->describeSagExpressConnectInterfaceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSagGlobalRouteProtocolOutcome SmartagClient::describeSagGlobalRouteProtocol(const DescribeSagGlobalRouteProtocolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSagGlobalRouteProtocolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSagGlobalRouteProtocolOutcome(DescribeSagGlobalRouteProtocolResult(outcome.result()));
	else
		return DescribeSagGlobalRouteProtocolOutcome(outcome.error());
}

void SmartagClient::describeSagGlobalRouteProtocolAsync(const DescribeSagGlobalRouteProtocolRequest& request, const DescribeSagGlobalRouteProtocolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSagGlobalRouteProtocol(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSagGlobalRouteProtocolOutcomeCallable SmartagClient::describeSagGlobalRouteProtocolCallable(const DescribeSagGlobalRouteProtocolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSagGlobalRouteProtocolOutcome()>>(
			[this, request]()
			{
			return this->describeSagGlobalRouteProtocol(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSagHaOutcome SmartagClient::describeSagHa(const DescribeSagHaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSagHaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSagHaOutcome(DescribeSagHaResult(outcome.result()));
	else
		return DescribeSagHaOutcome(outcome.error());
}

void SmartagClient::describeSagHaAsync(const DescribeSagHaRequest& request, const DescribeSagHaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSagHa(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSagHaOutcomeCallable SmartagClient::describeSagHaCallable(const DescribeSagHaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSagHaOutcome()>>(
			[this, request]()
			{
			return this->describeSagHa(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSagLanListOutcome SmartagClient::describeSagLanList(const DescribeSagLanListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSagLanListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSagLanListOutcome(DescribeSagLanListResult(outcome.result()));
	else
		return DescribeSagLanListOutcome(outcome.error());
}

void SmartagClient::describeSagLanListAsync(const DescribeSagLanListRequest& request, const DescribeSagLanListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSagLanList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSagLanListOutcomeCallable SmartagClient::describeSagLanListCallable(const DescribeSagLanListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSagLanListOutcome()>>(
			[this, request]()
			{
			return this->describeSagLanList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSagManagementPortOutcome SmartagClient::describeSagManagementPort(const DescribeSagManagementPortRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSagManagementPortOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSagManagementPortOutcome(DescribeSagManagementPortResult(outcome.result()));
	else
		return DescribeSagManagementPortOutcome(outcome.error());
}

void SmartagClient::describeSagManagementPortAsync(const DescribeSagManagementPortRequest& request, const DescribeSagManagementPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSagManagementPort(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSagManagementPortOutcomeCallable SmartagClient::describeSagManagementPortCallable(const DescribeSagManagementPortRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSagManagementPortOutcome()>>(
			[this, request]()
			{
			return this->describeSagManagementPort(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSagOnlineClientStatisticsOutcome SmartagClient::describeSagOnlineClientStatistics(const DescribeSagOnlineClientStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSagOnlineClientStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSagOnlineClientStatisticsOutcome(DescribeSagOnlineClientStatisticsResult(outcome.result()));
	else
		return DescribeSagOnlineClientStatisticsOutcome(outcome.error());
}

void SmartagClient::describeSagOnlineClientStatisticsAsync(const DescribeSagOnlineClientStatisticsRequest& request, const DescribeSagOnlineClientStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSagOnlineClientStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSagOnlineClientStatisticsOutcomeCallable SmartagClient::describeSagOnlineClientStatisticsCallable(const DescribeSagOnlineClientStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSagOnlineClientStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeSagOnlineClientStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSagPortListOutcome SmartagClient::describeSagPortList(const DescribeSagPortListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSagPortListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSagPortListOutcome(DescribeSagPortListResult(outcome.result()));
	else
		return DescribeSagPortListOutcome(outcome.error());
}

void SmartagClient::describeSagPortListAsync(const DescribeSagPortListRequest& request, const DescribeSagPortListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSagPortList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSagPortListOutcomeCallable SmartagClient::describeSagPortListCallable(const DescribeSagPortListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSagPortListOutcome()>>(
			[this, request]()
			{
			return this->describeSagPortList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSagPortRouteProtocolListOutcome SmartagClient::describeSagPortRouteProtocolList(const DescribeSagPortRouteProtocolListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSagPortRouteProtocolListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSagPortRouteProtocolListOutcome(DescribeSagPortRouteProtocolListResult(outcome.result()));
	else
		return DescribeSagPortRouteProtocolListOutcome(outcome.error());
}

void SmartagClient::describeSagPortRouteProtocolListAsync(const DescribeSagPortRouteProtocolListRequest& request, const DescribeSagPortRouteProtocolListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSagPortRouteProtocolList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSagPortRouteProtocolListOutcomeCallable SmartagClient::describeSagPortRouteProtocolListCallable(const DescribeSagPortRouteProtocolListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSagPortRouteProtocolListOutcome()>>(
			[this, request]()
			{
			return this->describeSagPortRouteProtocolList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSagRemoteAccessOutcome SmartagClient::describeSagRemoteAccess(const DescribeSagRemoteAccessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSagRemoteAccessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSagRemoteAccessOutcome(DescribeSagRemoteAccessResult(outcome.result()));
	else
		return DescribeSagRemoteAccessOutcome(outcome.error());
}

void SmartagClient::describeSagRemoteAccessAsync(const DescribeSagRemoteAccessRequest& request, const DescribeSagRemoteAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSagRemoteAccess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSagRemoteAccessOutcomeCallable SmartagClient::describeSagRemoteAccessCallable(const DescribeSagRemoteAccessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSagRemoteAccessOutcome()>>(
			[this, request]()
			{
			return this->describeSagRemoteAccess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSagRouteListOutcome SmartagClient::describeSagRouteList(const DescribeSagRouteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSagRouteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSagRouteListOutcome(DescribeSagRouteListResult(outcome.result()));
	else
		return DescribeSagRouteListOutcome(outcome.error());
}

void SmartagClient::describeSagRouteListAsync(const DescribeSagRouteListRequest& request, const DescribeSagRouteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSagRouteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSagRouteListOutcomeCallable SmartagClient::describeSagRouteListCallable(const DescribeSagRouteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSagRouteListOutcome()>>(
			[this, request]()
			{
			return this->describeSagRouteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSagRouteProtocolBgpOutcome SmartagClient::describeSagRouteProtocolBgp(const DescribeSagRouteProtocolBgpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSagRouteProtocolBgpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSagRouteProtocolBgpOutcome(DescribeSagRouteProtocolBgpResult(outcome.result()));
	else
		return DescribeSagRouteProtocolBgpOutcome(outcome.error());
}

void SmartagClient::describeSagRouteProtocolBgpAsync(const DescribeSagRouteProtocolBgpRequest& request, const DescribeSagRouteProtocolBgpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSagRouteProtocolBgp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSagRouteProtocolBgpOutcomeCallable SmartagClient::describeSagRouteProtocolBgpCallable(const DescribeSagRouteProtocolBgpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSagRouteProtocolBgpOutcome()>>(
			[this, request]()
			{
			return this->describeSagRouteProtocolBgp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSagRouteProtocolOspfOutcome SmartagClient::describeSagRouteProtocolOspf(const DescribeSagRouteProtocolOspfRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSagRouteProtocolOspfOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSagRouteProtocolOspfOutcome(DescribeSagRouteProtocolOspfResult(outcome.result()));
	else
		return DescribeSagRouteProtocolOspfOutcome(outcome.error());
}

void SmartagClient::describeSagRouteProtocolOspfAsync(const DescribeSagRouteProtocolOspfRequest& request, const DescribeSagRouteProtocolOspfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSagRouteProtocolOspf(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSagRouteProtocolOspfOutcomeCallable SmartagClient::describeSagRouteProtocolOspfCallable(const DescribeSagRouteProtocolOspfRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSagRouteProtocolOspfOutcome()>>(
			[this, request]()
			{
			return this->describeSagRouteProtocolOspf(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSagStaticRouteListOutcome SmartagClient::describeSagStaticRouteList(const DescribeSagStaticRouteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSagStaticRouteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSagStaticRouteListOutcome(DescribeSagStaticRouteListResult(outcome.result()));
	else
		return DescribeSagStaticRouteListOutcome(outcome.error());
}

void SmartagClient::describeSagStaticRouteListAsync(const DescribeSagStaticRouteListRequest& request, const DescribeSagStaticRouteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSagStaticRouteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSagStaticRouteListOutcomeCallable SmartagClient::describeSagStaticRouteListCallable(const DescribeSagStaticRouteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSagStaticRouteListOutcome()>>(
			[this, request]()
			{
			return this->describeSagStaticRouteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSagTrafficTopNOutcome SmartagClient::describeSagTrafficTopN(const DescribeSagTrafficTopNRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSagTrafficTopNOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSagTrafficTopNOutcome(DescribeSagTrafficTopNResult(outcome.result()));
	else
		return DescribeSagTrafficTopNOutcome(outcome.error());
}

void SmartagClient::describeSagTrafficTopNAsync(const DescribeSagTrafficTopNRequest& request, const DescribeSagTrafficTopNAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSagTrafficTopN(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSagTrafficTopNOutcomeCallable SmartagClient::describeSagTrafficTopNCallable(const DescribeSagTrafficTopNRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSagTrafficTopNOutcome()>>(
			[this, request]()
			{
			return this->describeSagTrafficTopN(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSagUserDnsOutcome SmartagClient::describeSagUserDns(const DescribeSagUserDnsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSagUserDnsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSagUserDnsOutcome(DescribeSagUserDnsResult(outcome.result()));
	else
		return DescribeSagUserDnsOutcome(outcome.error());
}

void SmartagClient::describeSagUserDnsAsync(const DescribeSagUserDnsRequest& request, const DescribeSagUserDnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSagUserDns(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSagUserDnsOutcomeCallable SmartagClient::describeSagUserDnsCallable(const DescribeSagUserDnsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSagUserDnsOutcome()>>(
			[this, request]()
			{
			return this->describeSagUserDns(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSagVbrRelationsOutcome SmartagClient::describeSagVbrRelations(const DescribeSagVbrRelationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSagVbrRelationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSagVbrRelationsOutcome(DescribeSagVbrRelationsResult(outcome.result()));
	else
		return DescribeSagVbrRelationsOutcome(outcome.error());
}

void SmartagClient::describeSagVbrRelationsAsync(const DescribeSagVbrRelationsRequest& request, const DescribeSagVbrRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSagVbrRelations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSagVbrRelationsOutcomeCallable SmartagClient::describeSagVbrRelationsCallable(const DescribeSagVbrRelationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSagVbrRelationsOutcome()>>(
			[this, request]()
			{
			return this->describeSagVbrRelations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSagWan4GOutcome SmartagClient::describeSagWan4G(const DescribeSagWan4GRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSagWan4GOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSagWan4GOutcome(DescribeSagWan4GResult(outcome.result()));
	else
		return DescribeSagWan4GOutcome(outcome.error());
}

void SmartagClient::describeSagWan4GAsync(const DescribeSagWan4GRequest& request, const DescribeSagWan4GAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSagWan4G(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSagWan4GOutcomeCallable SmartagClient::describeSagWan4GCallable(const DescribeSagWan4GRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSagWan4GOutcome()>>(
			[this, request]()
			{
			return this->describeSagWan4G(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSagWanListOutcome SmartagClient::describeSagWanList(const DescribeSagWanListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSagWanListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSagWanListOutcome(DescribeSagWanListResult(outcome.result()));
	else
		return DescribeSagWanListOutcome(outcome.error());
}

void SmartagClient::describeSagWanListAsync(const DescribeSagWanListRequest& request, const DescribeSagWanListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSagWanList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSagWanListOutcomeCallable SmartagClient::describeSagWanListCallable(const DescribeSagWanListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSagWanListOutcome()>>(
			[this, request]()
			{
			return this->describeSagWanList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSagWanSnatOutcome SmartagClient::describeSagWanSnat(const DescribeSagWanSnatRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSagWanSnatOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSagWanSnatOutcome(DescribeSagWanSnatResult(outcome.result()));
	else
		return DescribeSagWanSnatOutcome(outcome.error());
}

void SmartagClient::describeSagWanSnatAsync(const DescribeSagWanSnatRequest& request, const DescribeSagWanSnatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSagWanSnat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSagWanSnatOutcomeCallable SmartagClient::describeSagWanSnatCallable(const DescribeSagWanSnatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSagWanSnatOutcome()>>(
			[this, request]()
			{
			return this->describeSagWanSnat(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSagWifiOutcome SmartagClient::describeSagWifi(const DescribeSagWifiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSagWifiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSagWifiOutcome(DescribeSagWifiResult(outcome.result()));
	else
		return DescribeSagWifiOutcome(outcome.error());
}

void SmartagClient::describeSagWifiAsync(const DescribeSagWifiRequest& request, const DescribeSagWifiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSagWifi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSagWifiOutcomeCallable SmartagClient::describeSagWifiCallable(const DescribeSagWifiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSagWifiOutcome()>>(
			[this, request]()
			{
			return this->describeSagWifi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSmartAccessGatewayAttributeOutcome SmartagClient::describeSmartAccessGatewayAttribute(const DescribeSmartAccessGatewayAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSmartAccessGatewayAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSmartAccessGatewayAttributeOutcome(DescribeSmartAccessGatewayAttributeResult(outcome.result()));
	else
		return DescribeSmartAccessGatewayAttributeOutcome(outcome.error());
}

void SmartagClient::describeSmartAccessGatewayAttributeAsync(const DescribeSmartAccessGatewayAttributeRequest& request, const DescribeSmartAccessGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSmartAccessGatewayAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSmartAccessGatewayAttributeOutcomeCallable SmartagClient::describeSmartAccessGatewayAttributeCallable(const DescribeSmartAccessGatewayAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSmartAccessGatewayAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeSmartAccessGatewayAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSmartAccessGatewayClientUsersOutcome SmartagClient::describeSmartAccessGatewayClientUsers(const DescribeSmartAccessGatewayClientUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSmartAccessGatewayClientUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSmartAccessGatewayClientUsersOutcome(DescribeSmartAccessGatewayClientUsersResult(outcome.result()));
	else
		return DescribeSmartAccessGatewayClientUsersOutcome(outcome.error());
}

void SmartagClient::describeSmartAccessGatewayClientUsersAsync(const DescribeSmartAccessGatewayClientUsersRequest& request, const DescribeSmartAccessGatewayClientUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSmartAccessGatewayClientUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSmartAccessGatewayClientUsersOutcomeCallable SmartagClient::describeSmartAccessGatewayClientUsersCallable(const DescribeSmartAccessGatewayClientUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSmartAccessGatewayClientUsersOutcome()>>(
			[this, request]()
			{
			return this->describeSmartAccessGatewayClientUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSmartAccessGatewayHaOutcome SmartagClient::describeSmartAccessGatewayHa(const DescribeSmartAccessGatewayHaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSmartAccessGatewayHaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSmartAccessGatewayHaOutcome(DescribeSmartAccessGatewayHaResult(outcome.result()));
	else
		return DescribeSmartAccessGatewayHaOutcome(outcome.error());
}

void SmartagClient::describeSmartAccessGatewayHaAsync(const DescribeSmartAccessGatewayHaRequest& request, const DescribeSmartAccessGatewayHaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSmartAccessGatewayHa(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSmartAccessGatewayHaOutcomeCallable SmartagClient::describeSmartAccessGatewayHaCallable(const DescribeSmartAccessGatewayHaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSmartAccessGatewayHaOutcome()>>(
			[this, request]()
			{
			return this->describeSmartAccessGatewayHa(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSmartAccessGatewayVersionsOutcome SmartagClient::describeSmartAccessGatewayVersions(const DescribeSmartAccessGatewayVersionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSmartAccessGatewayVersionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSmartAccessGatewayVersionsOutcome(DescribeSmartAccessGatewayVersionsResult(outcome.result()));
	else
		return DescribeSmartAccessGatewayVersionsOutcome(outcome.error());
}

void SmartagClient::describeSmartAccessGatewayVersionsAsync(const DescribeSmartAccessGatewayVersionsRequest& request, const DescribeSmartAccessGatewayVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSmartAccessGatewayVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSmartAccessGatewayVersionsOutcomeCallable SmartagClient::describeSmartAccessGatewayVersionsCallable(const DescribeSmartAccessGatewayVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSmartAccessGatewayVersionsOutcome()>>(
			[this, request]()
			{
			return this->describeSmartAccessGatewayVersions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSmartAccessGatewaysOutcome SmartagClient::describeSmartAccessGateways(const DescribeSmartAccessGatewaysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSmartAccessGatewaysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSmartAccessGatewaysOutcome(DescribeSmartAccessGatewaysResult(outcome.result()));
	else
		return DescribeSmartAccessGatewaysOutcome(outcome.error());
}

void SmartagClient::describeSmartAccessGatewaysAsync(const DescribeSmartAccessGatewaysRequest& request, const DescribeSmartAccessGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSmartAccessGateways(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSmartAccessGatewaysOutcomeCallable SmartagClient::describeSmartAccessGatewaysCallable(const DescribeSmartAccessGatewaysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSmartAccessGatewaysOutcome()>>(
			[this, request]()
			{
			return this->describeSmartAccessGateways(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeSnatEntriesOutcome SmartagClient::describeSnatEntries(const DescribeSnatEntriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSnatEntriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSnatEntriesOutcome(DescribeSnatEntriesResult(outcome.result()));
	else
		return DescribeSnatEntriesOutcome(outcome.error());
}

void SmartagClient::describeSnatEntriesAsync(const DescribeSnatEntriesRequest& request, const DescribeSnatEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSnatEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeSnatEntriesOutcomeCallable SmartagClient::describeSnatEntriesCallable(const DescribeSnatEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSnatEntriesOutcome()>>(
			[this, request]()
			{
			return this->describeSnatEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeUnbindFlowLogSagsOutcome SmartagClient::describeUnbindFlowLogSags(const DescribeUnbindFlowLogSagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUnbindFlowLogSagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUnbindFlowLogSagsOutcome(DescribeUnbindFlowLogSagsResult(outcome.result()));
	else
		return DescribeUnbindFlowLogSagsOutcome(outcome.error());
}

void SmartagClient::describeUnbindFlowLogSagsAsync(const DescribeUnbindFlowLogSagsRequest& request, const DescribeUnbindFlowLogSagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUnbindFlowLogSags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeUnbindFlowLogSagsOutcomeCallable SmartagClient::describeUnbindFlowLogSagsCallable(const DescribeUnbindFlowLogSagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUnbindFlowLogSagsOutcome()>>(
			[this, request]()
			{
			return this->describeUnbindFlowLogSags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeUserFlowStatisticsOutcome SmartagClient::describeUserFlowStatistics(const DescribeUserFlowStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserFlowStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserFlowStatisticsOutcome(DescribeUserFlowStatisticsResult(outcome.result()));
	else
		return DescribeUserFlowStatisticsOutcome(outcome.error());
}

void SmartagClient::describeUserFlowStatisticsAsync(const DescribeUserFlowStatisticsRequest& request, const DescribeUserFlowStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserFlowStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeUserFlowStatisticsOutcomeCallable SmartagClient::describeUserFlowStatisticsCallable(const DescribeUserFlowStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserFlowStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeUserFlowStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeUserOnlineClientStatisticsOutcome SmartagClient::describeUserOnlineClientStatistics(const DescribeUserOnlineClientStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserOnlineClientStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserOnlineClientStatisticsOutcome(DescribeUserOnlineClientStatisticsResult(outcome.result()));
	else
		return DescribeUserOnlineClientStatisticsOutcome(outcome.error());
}

void SmartagClient::describeUserOnlineClientStatisticsAsync(const DescribeUserOnlineClientStatisticsRequest& request, const DescribeUserOnlineClientStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserOnlineClientStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeUserOnlineClientStatisticsOutcomeCallable SmartagClient::describeUserOnlineClientStatisticsCallable(const DescribeUserOnlineClientStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserOnlineClientStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeUserOnlineClientStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DescribeUserOnlineClientsOutcome SmartagClient::describeUserOnlineClients(const DescribeUserOnlineClientsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserOnlineClientsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserOnlineClientsOutcome(DescribeUserOnlineClientsResult(outcome.result()));
	else
		return DescribeUserOnlineClientsOutcome(outcome.error());
}

void SmartagClient::describeUserOnlineClientsAsync(const DescribeUserOnlineClientsRequest& request, const DescribeUserOnlineClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserOnlineClients(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DescribeUserOnlineClientsOutcomeCallable SmartagClient::describeUserOnlineClientsCallable(const DescribeUserOnlineClientsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserOnlineClientsOutcome()>>(
			[this, request]()
			{
			return this->describeUserOnlineClients(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DiagnoseSmartAccessGatewayOutcome SmartagClient::diagnoseSmartAccessGateway(const DiagnoseSmartAccessGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DiagnoseSmartAccessGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DiagnoseSmartAccessGatewayOutcome(DiagnoseSmartAccessGatewayResult(outcome.result()));
	else
		return DiagnoseSmartAccessGatewayOutcome(outcome.error());
}

void SmartagClient::diagnoseSmartAccessGatewayAsync(const DiagnoseSmartAccessGatewayRequest& request, const DiagnoseSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, diagnoseSmartAccessGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DiagnoseSmartAccessGatewayOutcomeCallable SmartagClient::diagnoseSmartAccessGatewayCallable(const DiagnoseSmartAccessGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DiagnoseSmartAccessGatewayOutcome()>>(
			[this, request]()
			{
			return this->diagnoseSmartAccessGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DisableSmartAGDpiMonitorOutcome SmartagClient::disableSmartAGDpiMonitor(const DisableSmartAGDpiMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableSmartAGDpiMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableSmartAGDpiMonitorOutcome(DisableSmartAGDpiMonitorResult(outcome.result()));
	else
		return DisableSmartAGDpiMonitorOutcome(outcome.error());
}

void SmartagClient::disableSmartAGDpiMonitorAsync(const DisableSmartAGDpiMonitorRequest& request, const DisableSmartAGDpiMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableSmartAGDpiMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DisableSmartAGDpiMonitorOutcomeCallable SmartagClient::disableSmartAGDpiMonitorCallable(const DisableSmartAGDpiMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableSmartAGDpiMonitorOutcome()>>(
			[this, request]()
			{
			return this->disableSmartAGDpiMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DisableSmartAccessGatewayUserOutcome SmartagClient::disableSmartAccessGatewayUser(const DisableSmartAccessGatewayUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableSmartAccessGatewayUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableSmartAccessGatewayUserOutcome(DisableSmartAccessGatewayUserResult(outcome.result()));
	else
		return DisableSmartAccessGatewayUserOutcome(outcome.error());
}

void SmartagClient::disableSmartAccessGatewayUserAsync(const DisableSmartAccessGatewayUserRequest& request, const DisableSmartAccessGatewayUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableSmartAccessGatewayUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DisableSmartAccessGatewayUserOutcomeCallable SmartagClient::disableSmartAccessGatewayUserCallable(const DisableSmartAccessGatewayUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableSmartAccessGatewayUserOutcome()>>(
			[this, request]()
			{
			return this->disableSmartAccessGatewayUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DisassociateACLOutcome SmartagClient::disassociateACL(const DisassociateACLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisassociateACLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisassociateACLOutcome(DisassociateACLResult(outcome.result()));
	else
		return DisassociateACLOutcome(outcome.error());
}

void SmartagClient::disassociateACLAsync(const DisassociateACLRequest& request, const DisassociateACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disassociateACL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DisassociateACLOutcomeCallable SmartagClient::disassociateACLCallable(const DisassociateACLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisassociateACLOutcome()>>(
			[this, request]()
			{
			return this->disassociateACL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DisassociateFlowLogOutcome SmartagClient::disassociateFlowLog(const DisassociateFlowLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisassociateFlowLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisassociateFlowLogOutcome(DisassociateFlowLogResult(outcome.result()));
	else
		return DisassociateFlowLogOutcome(outcome.error());
}

void SmartagClient::disassociateFlowLogAsync(const DisassociateFlowLogRequest& request, const DisassociateFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disassociateFlowLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DisassociateFlowLogOutcomeCallable SmartagClient::disassociateFlowLogCallable(const DisassociateFlowLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisassociateFlowLogOutcome()>>(
			[this, request]()
			{
			return this->disassociateFlowLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DisassociateQosOutcome SmartagClient::disassociateQos(const DisassociateQosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisassociateQosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisassociateQosOutcome(DisassociateQosResult(outcome.result()));
	else
		return DisassociateQosOutcome(outcome.error());
}

void SmartagClient::disassociateQosAsync(const DisassociateQosRequest& request, const DisassociateQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disassociateQos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DisassociateQosOutcomeCallable SmartagClient::disassociateQosCallable(const DisassociateQosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisassociateQosOutcome()>>(
			[this, request]()
			{
			return this->disassociateQos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DiscribeSmartAccessGatewayDiagnosisReportOutcome SmartagClient::discribeSmartAccessGatewayDiagnosisReport(const DiscribeSmartAccessGatewayDiagnosisReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DiscribeSmartAccessGatewayDiagnosisReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DiscribeSmartAccessGatewayDiagnosisReportOutcome(DiscribeSmartAccessGatewayDiagnosisReportResult(outcome.result()));
	else
		return DiscribeSmartAccessGatewayDiagnosisReportOutcome(outcome.error());
}

void SmartagClient::discribeSmartAccessGatewayDiagnosisReportAsync(const DiscribeSmartAccessGatewayDiagnosisReportRequest& request, const DiscribeSmartAccessGatewayDiagnosisReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, discribeSmartAccessGatewayDiagnosisReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DiscribeSmartAccessGatewayDiagnosisReportOutcomeCallable SmartagClient::discribeSmartAccessGatewayDiagnosisReportCallable(const DiscribeSmartAccessGatewayDiagnosisReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DiscribeSmartAccessGatewayDiagnosisReportOutcome()>>(
			[this, request]()
			{
			return this->discribeSmartAccessGatewayDiagnosisReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DowngradeSmartAccessGatewayOutcome SmartagClient::downgradeSmartAccessGateway(const DowngradeSmartAccessGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DowngradeSmartAccessGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DowngradeSmartAccessGatewayOutcome(DowngradeSmartAccessGatewayResult(outcome.result()));
	else
		return DowngradeSmartAccessGatewayOutcome(outcome.error());
}

void SmartagClient::downgradeSmartAccessGatewayAsync(const DowngradeSmartAccessGatewayRequest& request, const DowngradeSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downgradeSmartAccessGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DowngradeSmartAccessGatewayOutcomeCallable SmartagClient::downgradeSmartAccessGatewayCallable(const DowngradeSmartAccessGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DowngradeSmartAccessGatewayOutcome()>>(
			[this, request]()
			{
			return this->downgradeSmartAccessGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::DowngradeSmartAccessGatewaySoftwareOutcome SmartagClient::downgradeSmartAccessGatewaySoftware(const DowngradeSmartAccessGatewaySoftwareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DowngradeSmartAccessGatewaySoftwareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DowngradeSmartAccessGatewaySoftwareOutcome(DowngradeSmartAccessGatewaySoftwareResult(outcome.result()));
	else
		return DowngradeSmartAccessGatewaySoftwareOutcome(outcome.error());
}

void SmartagClient::downgradeSmartAccessGatewaySoftwareAsync(const DowngradeSmartAccessGatewaySoftwareRequest& request, const DowngradeSmartAccessGatewaySoftwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downgradeSmartAccessGatewaySoftware(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::DowngradeSmartAccessGatewaySoftwareOutcomeCallable SmartagClient::downgradeSmartAccessGatewaySoftwareCallable(const DowngradeSmartAccessGatewaySoftwareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DowngradeSmartAccessGatewaySoftwareOutcome()>>(
			[this, request]()
			{
			return this->downgradeSmartAccessGatewaySoftware(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::EnableSmartAGDpiMonitorOutcome SmartagClient::enableSmartAGDpiMonitor(const EnableSmartAGDpiMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableSmartAGDpiMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableSmartAGDpiMonitorOutcome(EnableSmartAGDpiMonitorResult(outcome.result()));
	else
		return EnableSmartAGDpiMonitorOutcome(outcome.error());
}

void SmartagClient::enableSmartAGDpiMonitorAsync(const EnableSmartAGDpiMonitorRequest& request, const EnableSmartAGDpiMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableSmartAGDpiMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::EnableSmartAGDpiMonitorOutcomeCallable SmartagClient::enableSmartAGDpiMonitorCallable(const EnableSmartAGDpiMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableSmartAGDpiMonitorOutcome()>>(
			[this, request]()
			{
			return this->enableSmartAGDpiMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::EnableSmartAccessGatewayUserOutcome SmartagClient::enableSmartAccessGatewayUser(const EnableSmartAccessGatewayUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableSmartAccessGatewayUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableSmartAccessGatewayUserOutcome(EnableSmartAccessGatewayUserResult(outcome.result()));
	else
		return EnableSmartAccessGatewayUserOutcome(outcome.error());
}

void SmartagClient::enableSmartAccessGatewayUserAsync(const EnableSmartAccessGatewayUserRequest& request, const EnableSmartAccessGatewayUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableSmartAccessGatewayUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::EnableSmartAccessGatewayUserOutcomeCallable SmartagClient::enableSmartAccessGatewayUserCallable(const EnableSmartAccessGatewayUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableSmartAccessGatewayUserOutcome()>>(
			[this, request]()
			{
			return this->enableSmartAccessGatewayUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::GetAclAttributeOutcome SmartagClient::getAclAttribute(const GetAclAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAclAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAclAttributeOutcome(GetAclAttributeResult(outcome.result()));
	else
		return GetAclAttributeOutcome(outcome.error());
}

void SmartagClient::getAclAttributeAsync(const GetAclAttributeRequest& request, const GetAclAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAclAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::GetAclAttributeOutcomeCallable SmartagClient::getAclAttributeCallable(const GetAclAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAclAttributeOutcome()>>(
			[this, request]()
			{
			return this->getAclAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::GetCloudConnectNetworkUseLimitOutcome SmartagClient::getCloudConnectNetworkUseLimit(const GetCloudConnectNetworkUseLimitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCloudConnectNetworkUseLimitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCloudConnectNetworkUseLimitOutcome(GetCloudConnectNetworkUseLimitResult(outcome.result()));
	else
		return GetCloudConnectNetworkUseLimitOutcome(outcome.error());
}

void SmartagClient::getCloudConnectNetworkUseLimitAsync(const GetCloudConnectNetworkUseLimitRequest& request, const GetCloudConnectNetworkUseLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCloudConnectNetworkUseLimit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::GetCloudConnectNetworkUseLimitOutcomeCallable SmartagClient::getCloudConnectNetworkUseLimitCallable(const GetCloudConnectNetworkUseLimitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCloudConnectNetworkUseLimitOutcome()>>(
			[this, request]()
			{
			return this->getCloudConnectNetworkUseLimit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::GetQosAttributeOutcome SmartagClient::getQosAttribute(const GetQosAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetQosAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetQosAttributeOutcome(GetQosAttributeResult(outcome.result()));
	else
		return GetQosAttributeOutcome(outcome.error());
}

void SmartagClient::getQosAttributeAsync(const GetQosAttributeRequest& request, const GetQosAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getQosAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::GetQosAttributeOutcomeCallable SmartagClient::getQosAttributeCallable(const GetQosAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetQosAttributeOutcome()>>(
			[this, request]()
			{
			return this->getQosAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::GetSmartAGDpiAttributeOutcome SmartagClient::getSmartAGDpiAttribute(const GetSmartAGDpiAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSmartAGDpiAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSmartAGDpiAttributeOutcome(GetSmartAGDpiAttributeResult(outcome.result()));
	else
		return GetSmartAGDpiAttributeOutcome(outcome.error());
}

void SmartagClient::getSmartAGDpiAttributeAsync(const GetSmartAGDpiAttributeRequest& request, const GetSmartAGDpiAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSmartAGDpiAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::GetSmartAGDpiAttributeOutcomeCallable SmartagClient::getSmartAGDpiAttributeCallable(const GetSmartAGDpiAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSmartAGDpiAttributeOutcome()>>(
			[this, request]()
			{
			return this->getSmartAGDpiAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::GetSmartAccessGatewayUseLimitOutcome SmartagClient::getSmartAccessGatewayUseLimit(const GetSmartAccessGatewayUseLimitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSmartAccessGatewayUseLimitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSmartAccessGatewayUseLimitOutcome(GetSmartAccessGatewayUseLimitResult(outcome.result()));
	else
		return GetSmartAccessGatewayUseLimitOutcome(outcome.error());
}

void SmartagClient::getSmartAccessGatewayUseLimitAsync(const GetSmartAccessGatewayUseLimitRequest& request, const GetSmartAccessGatewayUseLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSmartAccessGatewayUseLimit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::GetSmartAccessGatewayUseLimitOutcomeCallable SmartagClient::getSmartAccessGatewayUseLimitCallable(const GetSmartAccessGatewayUseLimitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSmartAccessGatewayUseLimitOutcome()>>(
			[this, request]()
			{
			return this->getSmartAccessGatewayUseLimit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::GrantInstanceToCbnOutcome SmartagClient::grantInstanceToCbn(const GrantInstanceToCbnRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantInstanceToCbnOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantInstanceToCbnOutcome(GrantInstanceToCbnResult(outcome.result()));
	else
		return GrantInstanceToCbnOutcome(outcome.error());
}

void SmartagClient::grantInstanceToCbnAsync(const GrantInstanceToCbnRequest& request, const GrantInstanceToCbnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantInstanceToCbn(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::GrantInstanceToCbnOutcomeCallable SmartagClient::grantInstanceToCbnCallable(const GrantInstanceToCbnRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantInstanceToCbnOutcome()>>(
			[this, request]()
			{
			return this->grantInstanceToCbn(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::GrantSagInstanceToCcnOutcome SmartagClient::grantSagInstanceToCcn(const GrantSagInstanceToCcnRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantSagInstanceToCcnOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantSagInstanceToCcnOutcome(GrantSagInstanceToCcnResult(outcome.result()));
	else
		return GrantSagInstanceToCcnOutcome(outcome.error());
}

void SmartagClient::grantSagInstanceToCcnAsync(const GrantSagInstanceToCcnRequest& request, const GrantSagInstanceToCcnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantSagInstanceToCcn(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::GrantSagInstanceToCcnOutcomeCallable SmartagClient::grantSagInstanceToCcnCallable(const GrantSagInstanceToCcnRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantSagInstanceToCcnOutcome()>>(
			[this, request]()
			{
			return this->grantSagInstanceToCcn(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::GrantSagInstanceToVbrOutcome SmartagClient::grantSagInstanceToVbr(const GrantSagInstanceToVbrRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantSagInstanceToVbrOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantSagInstanceToVbrOutcome(GrantSagInstanceToVbrResult(outcome.result()));
	else
		return GrantSagInstanceToVbrOutcome(outcome.error());
}

void SmartagClient::grantSagInstanceToVbrAsync(const GrantSagInstanceToVbrRequest& request, const GrantSagInstanceToVbrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantSagInstanceToVbr(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::GrantSagInstanceToVbrOutcomeCallable SmartagClient::grantSagInstanceToVbrCallable(const GrantSagInstanceToVbrRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantSagInstanceToVbrOutcome()>>(
			[this, request]()
			{
			return this->grantSagInstanceToVbr(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::KickOutClientsOutcome SmartagClient::kickOutClients(const KickOutClientsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return KickOutClientsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return KickOutClientsOutcome(KickOutClientsResult(outcome.result()));
	else
		return KickOutClientsOutcome(outcome.error());
}

void SmartagClient::kickOutClientsAsync(const KickOutClientsRequest& request, const KickOutClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, kickOutClients(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::KickOutClientsOutcomeCallable SmartagClient::kickOutClientsCallable(const KickOutClientsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<KickOutClientsOutcome()>>(
			[this, request]()
			{
			return this->kickOutClients(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ListAccessPointNetworkQualitiesOutcome SmartagClient::listAccessPointNetworkQualities(const ListAccessPointNetworkQualitiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAccessPointNetworkQualitiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAccessPointNetworkQualitiesOutcome(ListAccessPointNetworkQualitiesResult(outcome.result()));
	else
		return ListAccessPointNetworkQualitiesOutcome(outcome.error());
}

void SmartagClient::listAccessPointNetworkQualitiesAsync(const ListAccessPointNetworkQualitiesRequest& request, const ListAccessPointNetworkQualitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAccessPointNetworkQualities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ListAccessPointNetworkQualitiesOutcomeCallable SmartagClient::listAccessPointNetworkQualitiesCallable(const ListAccessPointNetworkQualitiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAccessPointNetworkQualitiesOutcome()>>(
			[this, request]()
			{
			return this->listAccessPointNetworkQualities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ListAccessPointsOutcome SmartagClient::listAccessPoints(const ListAccessPointsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAccessPointsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAccessPointsOutcome(ListAccessPointsResult(outcome.result()));
	else
		return ListAccessPointsOutcome(outcome.error());
}

void SmartagClient::listAccessPointsAsync(const ListAccessPointsRequest& request, const ListAccessPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAccessPoints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ListAccessPointsOutcomeCallable SmartagClient::listAccessPointsCallable(const ListAccessPointsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAccessPointsOutcome()>>(
			[this, request]()
			{
			return this->listAccessPoints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ListDpiConfigErrorOutcome SmartagClient::listDpiConfigError(const ListDpiConfigErrorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDpiConfigErrorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDpiConfigErrorOutcome(ListDpiConfigErrorResult(outcome.result()));
	else
		return ListDpiConfigErrorOutcome(outcome.error());
}

void SmartagClient::listDpiConfigErrorAsync(const ListDpiConfigErrorRequest& request, const ListDpiConfigErrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDpiConfigError(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ListDpiConfigErrorOutcomeCallable SmartagClient::listDpiConfigErrorCallable(const ListDpiConfigErrorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDpiConfigErrorOutcome()>>(
			[this, request]()
			{
			return this->listDpiConfigError(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ListDpiGroupsOutcome SmartagClient::listDpiGroups(const ListDpiGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDpiGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDpiGroupsOutcome(ListDpiGroupsResult(outcome.result()));
	else
		return ListDpiGroupsOutcome(outcome.error());
}

void SmartagClient::listDpiGroupsAsync(const ListDpiGroupsRequest& request, const ListDpiGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDpiGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ListDpiGroupsOutcomeCallable SmartagClient::listDpiGroupsCallable(const ListDpiGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDpiGroupsOutcome()>>(
			[this, request]()
			{
			return this->listDpiGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ListDpiSignaturesOutcome SmartagClient::listDpiSignatures(const ListDpiSignaturesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDpiSignaturesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDpiSignaturesOutcome(ListDpiSignaturesResult(outcome.result()));
	else
		return ListDpiSignaturesOutcome(outcome.error());
}

void SmartagClient::listDpiSignaturesAsync(const ListDpiSignaturesRequest& request, const ListDpiSignaturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDpiSignatures(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ListDpiSignaturesOutcomeCallable SmartagClient::listDpiSignaturesCallable(const ListDpiSignaturesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDpiSignaturesOutcome()>>(
			[this, request]()
			{
			return this->listDpiSignatures(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ListEnterpriseCodeOutcome SmartagClient::listEnterpriseCode(const ListEnterpriseCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEnterpriseCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEnterpriseCodeOutcome(ListEnterpriseCodeResult(outcome.result()));
	else
		return ListEnterpriseCodeOutcome(outcome.error());
}

void SmartagClient::listEnterpriseCodeAsync(const ListEnterpriseCodeRequest& request, const ListEnterpriseCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEnterpriseCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ListEnterpriseCodeOutcomeCallable SmartagClient::listEnterpriseCodeCallable(const ListEnterpriseCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEnterpriseCodeOutcome()>>(
			[this, request]()
			{
			return this->listEnterpriseCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ListSmartAGApiUnsupportedFeatureOutcome SmartagClient::listSmartAGApiUnsupportedFeature(const ListSmartAGApiUnsupportedFeatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSmartAGApiUnsupportedFeatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSmartAGApiUnsupportedFeatureOutcome(ListSmartAGApiUnsupportedFeatureResult(outcome.result()));
	else
		return ListSmartAGApiUnsupportedFeatureOutcome(outcome.error());
}

void SmartagClient::listSmartAGApiUnsupportedFeatureAsync(const ListSmartAGApiUnsupportedFeatureRequest& request, const ListSmartAGApiUnsupportedFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSmartAGApiUnsupportedFeature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ListSmartAGApiUnsupportedFeatureOutcomeCallable SmartagClient::listSmartAGApiUnsupportedFeatureCallable(const ListSmartAGApiUnsupportedFeatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSmartAGApiUnsupportedFeatureOutcome()>>(
			[this, request]()
			{
			return this->listSmartAGApiUnsupportedFeature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ListSmartAGByAccessPointOutcome SmartagClient::listSmartAGByAccessPoint(const ListSmartAGByAccessPointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSmartAGByAccessPointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSmartAGByAccessPointOutcome(ListSmartAGByAccessPointResult(outcome.result()));
	else
		return ListSmartAGByAccessPointOutcome(outcome.error());
}

void SmartagClient::listSmartAGByAccessPointAsync(const ListSmartAGByAccessPointRequest& request, const ListSmartAGByAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSmartAGByAccessPoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ListSmartAGByAccessPointOutcomeCallable SmartagClient::listSmartAGByAccessPointCallable(const ListSmartAGByAccessPointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSmartAGByAccessPointOutcome()>>(
			[this, request]()
			{
			return this->listSmartAGByAccessPoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifyACLOutcome SmartagClient::modifyACL(const ModifyACLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyACLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyACLOutcome(ModifyACLResult(outcome.result()));
	else
		return ModifyACLOutcome(outcome.error());
}

void SmartagClient::modifyACLAsync(const ModifyACLRequest& request, const ModifyACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyACL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifyACLOutcomeCallable SmartagClient::modifyACLCallable(const ModifyACLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyACLOutcome()>>(
			[this, request]()
			{
			return this->modifyACL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifyACLRuleOutcome SmartagClient::modifyACLRule(const ModifyACLRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyACLRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyACLRuleOutcome(ModifyACLRuleResult(outcome.result()));
	else
		return ModifyACLRuleOutcome(outcome.error());
}

void SmartagClient::modifyACLRuleAsync(const ModifyACLRuleRequest& request, const ModifyACLRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyACLRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifyACLRuleOutcomeCallable SmartagClient::modifyACLRuleCallable(const ModifyACLRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyACLRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyACLRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifyClientUserDNSOutcome SmartagClient::modifyClientUserDNS(const ModifyClientUserDNSRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClientUserDNSOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClientUserDNSOutcome(ModifyClientUserDNSResult(outcome.result()));
	else
		return ModifyClientUserDNSOutcome(outcome.error());
}

void SmartagClient::modifyClientUserDNSAsync(const ModifyClientUserDNSRequest& request, const ModifyClientUserDNSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClientUserDNS(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifyClientUserDNSOutcomeCallable SmartagClient::modifyClientUserDNSCallable(const ModifyClientUserDNSRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClientUserDNSOutcome()>>(
			[this, request]()
			{
			return this->modifyClientUserDNS(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifyCloudConnectNetworkOutcome SmartagClient::modifyCloudConnectNetwork(const ModifyCloudConnectNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCloudConnectNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCloudConnectNetworkOutcome(ModifyCloudConnectNetworkResult(outcome.result()));
	else
		return ModifyCloudConnectNetworkOutcome(outcome.error());
}

void SmartagClient::modifyCloudConnectNetworkAsync(const ModifyCloudConnectNetworkRequest& request, const ModifyCloudConnectNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCloudConnectNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifyCloudConnectNetworkOutcomeCallable SmartagClient::modifyCloudConnectNetworkCallable(const ModifyCloudConnectNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCloudConnectNetworkOutcome()>>(
			[this, request]()
			{
			return this->modifyCloudConnectNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifyDeviceAutoUpgradePolicyOutcome SmartagClient::modifyDeviceAutoUpgradePolicy(const ModifyDeviceAutoUpgradePolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDeviceAutoUpgradePolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDeviceAutoUpgradePolicyOutcome(ModifyDeviceAutoUpgradePolicyResult(outcome.result()));
	else
		return ModifyDeviceAutoUpgradePolicyOutcome(outcome.error());
}

void SmartagClient::modifyDeviceAutoUpgradePolicyAsync(const ModifyDeviceAutoUpgradePolicyRequest& request, const ModifyDeviceAutoUpgradePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDeviceAutoUpgradePolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifyDeviceAutoUpgradePolicyOutcomeCallable SmartagClient::modifyDeviceAutoUpgradePolicyCallable(const ModifyDeviceAutoUpgradePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDeviceAutoUpgradePolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyDeviceAutoUpgradePolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifyFlowLogAttributeOutcome SmartagClient::modifyFlowLogAttribute(const ModifyFlowLogAttributeRequest &request) const
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

void SmartagClient::modifyFlowLogAttributeAsync(const ModifyFlowLogAttributeRequest& request, const ModifyFlowLogAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyFlowLogAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifyFlowLogAttributeOutcomeCallable SmartagClient::modifyFlowLogAttributeCallable(const ModifyFlowLogAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyFlowLogAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyFlowLogAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifyHealthCheckOutcome SmartagClient::modifyHealthCheck(const ModifyHealthCheckRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyHealthCheckOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyHealthCheckOutcome(ModifyHealthCheckResult(outcome.result()));
	else
		return ModifyHealthCheckOutcome(outcome.error());
}

void SmartagClient::modifyHealthCheckAsync(const ModifyHealthCheckRequest& request, const ModifyHealthCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyHealthCheck(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifyHealthCheckOutcomeCallable SmartagClient::modifyHealthCheckCallable(const ModifyHealthCheckRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyHealthCheckOutcome()>>(
			[this, request]()
			{
			return this->modifyHealthCheck(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifyQosOutcome SmartagClient::modifyQos(const ModifyQosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyQosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyQosOutcome(ModifyQosResult(outcome.result()));
	else
		return ModifyQosOutcome(outcome.error());
}

void SmartagClient::modifyQosAsync(const ModifyQosRequest& request, const ModifyQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyQos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifyQosOutcomeCallable SmartagClient::modifyQosCallable(const ModifyQosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyQosOutcome()>>(
			[this, request]()
			{
			return this->modifyQos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifyQosCarOutcome SmartagClient::modifyQosCar(const ModifyQosCarRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyQosCarOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyQosCarOutcome(ModifyQosCarResult(outcome.result()));
	else
		return ModifyQosCarOutcome(outcome.error());
}

void SmartagClient::modifyQosCarAsync(const ModifyQosCarRequest& request, const ModifyQosCarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyQosCar(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifyQosCarOutcomeCallable SmartagClient::modifyQosCarCallable(const ModifyQosCarRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyQosCarOutcome()>>(
			[this, request]()
			{
			return this->modifyQosCar(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifyQosPolicyOutcome SmartagClient::modifyQosPolicy(const ModifyQosPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyQosPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyQosPolicyOutcome(ModifyQosPolicyResult(outcome.result()));
	else
		return ModifyQosPolicyOutcome(outcome.error());
}

void SmartagClient::modifyQosPolicyAsync(const ModifyQosPolicyRequest& request, const ModifyQosPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyQosPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifyQosPolicyOutcomeCallable SmartagClient::modifyQosPolicyCallable(const ModifyQosPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyQosPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyQosPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifyRouteDistributionStrategyOutcome SmartagClient::modifyRouteDistributionStrategy(const ModifyRouteDistributionStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRouteDistributionStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRouteDistributionStrategyOutcome(ModifyRouteDistributionStrategyResult(outcome.result()));
	else
		return ModifyRouteDistributionStrategyOutcome(outcome.error());
}

void SmartagClient::modifyRouteDistributionStrategyAsync(const ModifyRouteDistributionStrategyRequest& request, const ModifyRouteDistributionStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRouteDistributionStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifyRouteDistributionStrategyOutcomeCallable SmartagClient::modifyRouteDistributionStrategyCallable(const ModifyRouteDistributionStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRouteDistributionStrategyOutcome()>>(
			[this, request]()
			{
			return this->modifyRouteDistributionStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifySAGAdminPasswordOutcome SmartagClient::modifySAGAdminPassword(const ModifySAGAdminPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySAGAdminPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySAGAdminPasswordOutcome(ModifySAGAdminPasswordResult(outcome.result()));
	else
		return ModifySAGAdminPasswordOutcome(outcome.error());
}

void SmartagClient::modifySAGAdminPasswordAsync(const ModifySAGAdminPasswordRequest& request, const ModifySAGAdminPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySAGAdminPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifySAGAdminPasswordOutcomeCallable SmartagClient::modifySAGAdminPasswordCallable(const ModifySAGAdminPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySAGAdminPasswordOutcome()>>(
			[this, request]()
			{
			return this->modifySAGAdminPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifySagExpressConnectInterfaceOutcome SmartagClient::modifySagExpressConnectInterface(const ModifySagExpressConnectInterfaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySagExpressConnectInterfaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySagExpressConnectInterfaceOutcome(ModifySagExpressConnectInterfaceResult(outcome.result()));
	else
		return ModifySagExpressConnectInterfaceOutcome(outcome.error());
}

void SmartagClient::modifySagExpressConnectInterfaceAsync(const ModifySagExpressConnectInterfaceRequest& request, const ModifySagExpressConnectInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySagExpressConnectInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifySagExpressConnectInterfaceOutcomeCallable SmartagClient::modifySagExpressConnectInterfaceCallable(const ModifySagExpressConnectInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySagExpressConnectInterfaceOutcome()>>(
			[this, request]()
			{
			return this->modifySagExpressConnectInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifySagGlobalRouteProtocolOutcome SmartagClient::modifySagGlobalRouteProtocol(const ModifySagGlobalRouteProtocolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySagGlobalRouteProtocolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySagGlobalRouteProtocolOutcome(ModifySagGlobalRouteProtocolResult(outcome.result()));
	else
		return ModifySagGlobalRouteProtocolOutcome(outcome.error());
}

void SmartagClient::modifySagGlobalRouteProtocolAsync(const ModifySagGlobalRouteProtocolRequest& request, const ModifySagGlobalRouteProtocolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySagGlobalRouteProtocol(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifySagGlobalRouteProtocolOutcomeCallable SmartagClient::modifySagGlobalRouteProtocolCallable(const ModifySagGlobalRouteProtocolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySagGlobalRouteProtocolOutcome()>>(
			[this, request]()
			{
			return this->modifySagGlobalRouteProtocol(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifySagHaOutcome SmartagClient::modifySagHa(const ModifySagHaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySagHaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySagHaOutcome(ModifySagHaResult(outcome.result()));
	else
		return ModifySagHaOutcome(outcome.error());
}

void SmartagClient::modifySagHaAsync(const ModifySagHaRequest& request, const ModifySagHaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySagHa(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifySagHaOutcomeCallable SmartagClient::modifySagHaCallable(const ModifySagHaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySagHaOutcome()>>(
			[this, request]()
			{
			return this->modifySagHa(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifySagLanOutcome SmartagClient::modifySagLan(const ModifySagLanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySagLanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySagLanOutcome(ModifySagLanResult(outcome.result()));
	else
		return ModifySagLanOutcome(outcome.error());
}

void SmartagClient::modifySagLanAsync(const ModifySagLanRequest& request, const ModifySagLanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySagLan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifySagLanOutcomeCallable SmartagClient::modifySagLanCallable(const ModifySagLanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySagLanOutcome()>>(
			[this, request]()
			{
			return this->modifySagLan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifySagManagementPortOutcome SmartagClient::modifySagManagementPort(const ModifySagManagementPortRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySagManagementPortOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySagManagementPortOutcome(ModifySagManagementPortResult(outcome.result()));
	else
		return ModifySagManagementPortOutcome(outcome.error());
}

void SmartagClient::modifySagManagementPortAsync(const ModifySagManagementPortRequest& request, const ModifySagManagementPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySagManagementPort(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifySagManagementPortOutcomeCallable SmartagClient::modifySagManagementPortCallable(const ModifySagManagementPortRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySagManagementPortOutcome()>>(
			[this, request]()
			{
			return this->modifySagManagementPort(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifySagPortRoleOutcome SmartagClient::modifySagPortRole(const ModifySagPortRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySagPortRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySagPortRoleOutcome(ModifySagPortRoleResult(outcome.result()));
	else
		return ModifySagPortRoleOutcome(outcome.error());
}

void SmartagClient::modifySagPortRoleAsync(const ModifySagPortRoleRequest& request, const ModifySagPortRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySagPortRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifySagPortRoleOutcomeCallable SmartagClient::modifySagPortRoleCallable(const ModifySagPortRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySagPortRoleOutcome()>>(
			[this, request]()
			{
			return this->modifySagPortRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifySagPortRouteProtocolOutcome SmartagClient::modifySagPortRouteProtocol(const ModifySagPortRouteProtocolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySagPortRouteProtocolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySagPortRouteProtocolOutcome(ModifySagPortRouteProtocolResult(outcome.result()));
	else
		return ModifySagPortRouteProtocolOutcome(outcome.error());
}

void SmartagClient::modifySagPortRouteProtocolAsync(const ModifySagPortRouteProtocolRequest& request, const ModifySagPortRouteProtocolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySagPortRouteProtocol(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifySagPortRouteProtocolOutcomeCallable SmartagClient::modifySagPortRouteProtocolCallable(const ModifySagPortRouteProtocolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySagPortRouteProtocolOutcome()>>(
			[this, request]()
			{
			return this->modifySagPortRouteProtocol(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifySagRemoteAccessOutcome SmartagClient::modifySagRemoteAccess(const ModifySagRemoteAccessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySagRemoteAccessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySagRemoteAccessOutcome(ModifySagRemoteAccessResult(outcome.result()));
	else
		return ModifySagRemoteAccessOutcome(outcome.error());
}

void SmartagClient::modifySagRemoteAccessAsync(const ModifySagRemoteAccessRequest& request, const ModifySagRemoteAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySagRemoteAccess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifySagRemoteAccessOutcomeCallable SmartagClient::modifySagRemoteAccessCallable(const ModifySagRemoteAccessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySagRemoteAccessOutcome()>>(
			[this, request]()
			{
			return this->modifySagRemoteAccess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifySagRouteProtocolBgpOutcome SmartagClient::modifySagRouteProtocolBgp(const ModifySagRouteProtocolBgpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySagRouteProtocolBgpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySagRouteProtocolBgpOutcome(ModifySagRouteProtocolBgpResult(outcome.result()));
	else
		return ModifySagRouteProtocolBgpOutcome(outcome.error());
}

void SmartagClient::modifySagRouteProtocolBgpAsync(const ModifySagRouteProtocolBgpRequest& request, const ModifySagRouteProtocolBgpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySagRouteProtocolBgp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifySagRouteProtocolBgpOutcomeCallable SmartagClient::modifySagRouteProtocolBgpCallable(const ModifySagRouteProtocolBgpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySagRouteProtocolBgpOutcome()>>(
			[this, request]()
			{
			return this->modifySagRouteProtocolBgp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifySagRouteProtocolOspfOutcome SmartagClient::modifySagRouteProtocolOspf(const ModifySagRouteProtocolOspfRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySagRouteProtocolOspfOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySagRouteProtocolOspfOutcome(ModifySagRouteProtocolOspfResult(outcome.result()));
	else
		return ModifySagRouteProtocolOspfOutcome(outcome.error());
}

void SmartagClient::modifySagRouteProtocolOspfAsync(const ModifySagRouteProtocolOspfRequest& request, const ModifySagRouteProtocolOspfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySagRouteProtocolOspf(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifySagRouteProtocolOspfOutcomeCallable SmartagClient::modifySagRouteProtocolOspfCallable(const ModifySagRouteProtocolOspfRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySagRouteProtocolOspfOutcome()>>(
			[this, request]()
			{
			return this->modifySagRouteProtocolOspf(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifySagStaticRouteOutcome SmartagClient::modifySagStaticRoute(const ModifySagStaticRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySagStaticRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySagStaticRouteOutcome(ModifySagStaticRouteResult(outcome.result()));
	else
		return ModifySagStaticRouteOutcome(outcome.error());
}

void SmartagClient::modifySagStaticRouteAsync(const ModifySagStaticRouteRequest& request, const ModifySagStaticRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySagStaticRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifySagStaticRouteOutcomeCallable SmartagClient::modifySagStaticRouteCallable(const ModifySagStaticRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySagStaticRouteOutcome()>>(
			[this, request]()
			{
			return this->modifySagStaticRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifySagUserDnsOutcome SmartagClient::modifySagUserDns(const ModifySagUserDnsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySagUserDnsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySagUserDnsOutcome(ModifySagUserDnsResult(outcome.result()));
	else
		return ModifySagUserDnsOutcome(outcome.error());
}

void SmartagClient::modifySagUserDnsAsync(const ModifySagUserDnsRequest& request, const ModifySagUserDnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySagUserDns(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifySagUserDnsOutcomeCallable SmartagClient::modifySagUserDnsCallable(const ModifySagUserDnsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySagUserDnsOutcome()>>(
			[this, request]()
			{
			return this->modifySagUserDns(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifySagWanOutcome SmartagClient::modifySagWan(const ModifySagWanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySagWanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySagWanOutcome(ModifySagWanResult(outcome.result()));
	else
		return ModifySagWanOutcome(outcome.error());
}

void SmartagClient::modifySagWanAsync(const ModifySagWanRequest& request, const ModifySagWanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySagWan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifySagWanOutcomeCallable SmartagClient::modifySagWanCallable(const ModifySagWanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySagWanOutcome()>>(
			[this, request]()
			{
			return this->modifySagWan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifySagWanSnatOutcome SmartagClient::modifySagWanSnat(const ModifySagWanSnatRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySagWanSnatOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySagWanSnatOutcome(ModifySagWanSnatResult(outcome.result()));
	else
		return ModifySagWanSnatOutcome(outcome.error());
}

void SmartagClient::modifySagWanSnatAsync(const ModifySagWanSnatRequest& request, const ModifySagWanSnatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySagWanSnat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifySagWanSnatOutcomeCallable SmartagClient::modifySagWanSnatCallable(const ModifySagWanSnatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySagWanSnatOutcome()>>(
			[this, request]()
			{
			return this->modifySagWanSnat(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifySagWifiOutcome SmartagClient::modifySagWifi(const ModifySagWifiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySagWifiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySagWifiOutcome(ModifySagWifiResult(outcome.result()));
	else
		return ModifySagWifiOutcome(outcome.error());
}

void SmartagClient::modifySagWifiAsync(const ModifySagWifiRequest& request, const ModifySagWifiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySagWifi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifySagWifiOutcomeCallable SmartagClient::modifySagWifiCallable(const ModifySagWifiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySagWifiOutcome()>>(
			[this, request]()
			{
			return this->modifySagWifi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifySmartAccessGatewayOutcome SmartagClient::modifySmartAccessGateway(const ModifySmartAccessGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySmartAccessGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySmartAccessGatewayOutcome(ModifySmartAccessGatewayResult(outcome.result()));
	else
		return ModifySmartAccessGatewayOutcome(outcome.error());
}

void SmartagClient::modifySmartAccessGatewayAsync(const ModifySmartAccessGatewayRequest& request, const ModifySmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySmartAccessGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifySmartAccessGatewayOutcomeCallable SmartagClient::modifySmartAccessGatewayCallable(const ModifySmartAccessGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySmartAccessGatewayOutcome()>>(
			[this, request]()
			{
			return this->modifySmartAccessGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifySmartAccessGatewayClientUserOutcome SmartagClient::modifySmartAccessGatewayClientUser(const ModifySmartAccessGatewayClientUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySmartAccessGatewayClientUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySmartAccessGatewayClientUserOutcome(ModifySmartAccessGatewayClientUserResult(outcome.result()));
	else
		return ModifySmartAccessGatewayClientUserOutcome(outcome.error());
}

void SmartagClient::modifySmartAccessGatewayClientUserAsync(const ModifySmartAccessGatewayClientUserRequest& request, const ModifySmartAccessGatewayClientUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySmartAccessGatewayClientUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifySmartAccessGatewayClientUserOutcomeCallable SmartagClient::modifySmartAccessGatewayClientUserCallable(const ModifySmartAccessGatewayClientUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySmartAccessGatewayClientUserOutcome()>>(
			[this, request]()
			{
			return this->modifySmartAccessGatewayClientUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ModifySmartAccessGatewayUpBandwidthOutcome SmartagClient::modifySmartAccessGatewayUpBandwidth(const ModifySmartAccessGatewayUpBandwidthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySmartAccessGatewayUpBandwidthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySmartAccessGatewayUpBandwidthOutcome(ModifySmartAccessGatewayUpBandwidthResult(outcome.result()));
	else
		return ModifySmartAccessGatewayUpBandwidthOutcome(outcome.error());
}

void SmartagClient::modifySmartAccessGatewayUpBandwidthAsync(const ModifySmartAccessGatewayUpBandwidthRequest& request, const ModifySmartAccessGatewayUpBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySmartAccessGatewayUpBandwidth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ModifySmartAccessGatewayUpBandwidthOutcomeCallable SmartagClient::modifySmartAccessGatewayUpBandwidthCallable(const ModifySmartAccessGatewayUpBandwidthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySmartAccessGatewayUpBandwidthOutcome()>>(
			[this, request]()
			{
			return this->modifySmartAccessGatewayUpBandwidth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::MoveResourceGroupOutcome SmartagClient::moveResourceGroup(const MoveResourceGroupRequest &request) const
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

void SmartagClient::moveResourceGroupAsync(const MoveResourceGroupRequest& request, const MoveResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moveResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::MoveResourceGroupOutcomeCallable SmartagClient::moveResourceGroupCallable(const MoveResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoveResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->moveResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ProbeAccessPointNetworkQualityOutcome SmartagClient::probeAccessPointNetworkQuality(const ProbeAccessPointNetworkQualityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ProbeAccessPointNetworkQualityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ProbeAccessPointNetworkQualityOutcome(ProbeAccessPointNetworkQualityResult(outcome.result()));
	else
		return ProbeAccessPointNetworkQualityOutcome(outcome.error());
}

void SmartagClient::probeAccessPointNetworkQualityAsync(const ProbeAccessPointNetworkQualityRequest& request, const ProbeAccessPointNetworkQualityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, probeAccessPointNetworkQuality(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ProbeAccessPointNetworkQualityOutcomeCallable SmartagClient::probeAccessPointNetworkQualityCallable(const ProbeAccessPointNetworkQualityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ProbeAccessPointNetworkQualityOutcome()>>(
			[this, request]()
			{
			return this->probeAccessPointNetworkQuality(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::RebootSmartAccessGatewayOutcome SmartagClient::rebootSmartAccessGateway(const RebootSmartAccessGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RebootSmartAccessGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RebootSmartAccessGatewayOutcome(RebootSmartAccessGatewayResult(outcome.result()));
	else
		return RebootSmartAccessGatewayOutcome(outcome.error());
}

void SmartagClient::rebootSmartAccessGatewayAsync(const RebootSmartAccessGatewayRequest& request, const RebootSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rebootSmartAccessGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::RebootSmartAccessGatewayOutcomeCallable SmartagClient::rebootSmartAccessGatewayCallable(const RebootSmartAccessGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RebootSmartAccessGatewayOutcome()>>(
			[this, request]()
			{
			return this->rebootSmartAccessGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::ResetSmartAccessGatewayClientUserPasswordOutcome SmartagClient::resetSmartAccessGatewayClientUserPassword(const ResetSmartAccessGatewayClientUserPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetSmartAccessGatewayClientUserPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetSmartAccessGatewayClientUserPasswordOutcome(ResetSmartAccessGatewayClientUserPasswordResult(outcome.result()));
	else
		return ResetSmartAccessGatewayClientUserPasswordOutcome(outcome.error());
}

void SmartagClient::resetSmartAccessGatewayClientUserPasswordAsync(const ResetSmartAccessGatewayClientUserPasswordRequest& request, const ResetSmartAccessGatewayClientUserPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetSmartAccessGatewayClientUserPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::ResetSmartAccessGatewayClientUserPasswordOutcomeCallable SmartagClient::resetSmartAccessGatewayClientUserPasswordCallable(const ResetSmartAccessGatewayClientUserPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetSmartAccessGatewayClientUserPasswordOutcome()>>(
			[this, request]()
			{
			return this->resetSmartAccessGatewayClientUserPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::RevokeInstanceFromCbnOutcome SmartagClient::revokeInstanceFromCbn(const RevokeInstanceFromCbnRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeInstanceFromCbnOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeInstanceFromCbnOutcome(RevokeInstanceFromCbnResult(outcome.result()));
	else
		return RevokeInstanceFromCbnOutcome(outcome.error());
}

void SmartagClient::revokeInstanceFromCbnAsync(const RevokeInstanceFromCbnRequest& request, const RevokeInstanceFromCbnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeInstanceFromCbn(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::RevokeInstanceFromCbnOutcomeCallable SmartagClient::revokeInstanceFromCbnCallable(const RevokeInstanceFromCbnRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeInstanceFromCbnOutcome()>>(
			[this, request]()
			{
			return this->revokeInstanceFromCbn(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::RevokeInstanceFromVbrOutcome SmartagClient::revokeInstanceFromVbr(const RevokeInstanceFromVbrRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeInstanceFromVbrOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeInstanceFromVbrOutcome(RevokeInstanceFromVbrResult(outcome.result()));
	else
		return RevokeInstanceFromVbrOutcome(outcome.error());
}

void SmartagClient::revokeInstanceFromVbrAsync(const RevokeInstanceFromVbrRequest& request, const RevokeInstanceFromVbrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeInstanceFromVbr(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::RevokeInstanceFromVbrOutcomeCallable SmartagClient::revokeInstanceFromVbrCallable(const RevokeInstanceFromVbrRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeInstanceFromVbrOutcome()>>(
			[this, request]()
			{
			return this->revokeInstanceFromVbr(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::RevokeSagInstanceFromCcnOutcome SmartagClient::revokeSagInstanceFromCcn(const RevokeSagInstanceFromCcnRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeSagInstanceFromCcnOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeSagInstanceFromCcnOutcome(RevokeSagInstanceFromCcnResult(outcome.result()));
	else
		return RevokeSagInstanceFromCcnOutcome(outcome.error());
}

void SmartagClient::revokeSagInstanceFromCcnAsync(const RevokeSagInstanceFromCcnRequest& request, const RevokeSagInstanceFromCcnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeSagInstanceFromCcn(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::RevokeSagInstanceFromCcnOutcomeCallable SmartagClient::revokeSagInstanceFromCcnCallable(const RevokeSagInstanceFromCcnRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeSagInstanceFromCcnOutcome()>>(
			[this, request]()
			{
			return this->revokeSagInstanceFromCcn(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::RoamClientUserOutcome SmartagClient::roamClientUser(const RoamClientUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RoamClientUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RoamClientUserOutcome(RoamClientUserResult(outcome.result()));
	else
		return RoamClientUserOutcome(outcome.error());
}

void SmartagClient::roamClientUserAsync(const RoamClientUserRequest& request, const RoamClientUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, roamClientUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::RoamClientUserOutcomeCallable SmartagClient::roamClientUserCallable(const RoamClientUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RoamClientUserOutcome()>>(
			[this, request]()
			{
			return this->roamClientUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::SynchronizeSmartAGWebConfigOutcome SmartagClient::synchronizeSmartAGWebConfig(const SynchronizeSmartAGWebConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SynchronizeSmartAGWebConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SynchronizeSmartAGWebConfigOutcome(SynchronizeSmartAGWebConfigResult(outcome.result()));
	else
		return SynchronizeSmartAGWebConfigOutcome(outcome.error());
}

void SmartagClient::synchronizeSmartAGWebConfigAsync(const SynchronizeSmartAGWebConfigRequest& request, const SynchronizeSmartAGWebConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, synchronizeSmartAGWebConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::SynchronizeSmartAGWebConfigOutcomeCallable SmartagClient::synchronizeSmartAGWebConfigCallable(const SynchronizeSmartAGWebConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SynchronizeSmartAGWebConfigOutcome()>>(
			[this, request]()
			{
			return this->synchronizeSmartAGWebConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::UnbindSerialNumberOutcome SmartagClient::unbindSerialNumber(const UnbindSerialNumberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindSerialNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindSerialNumberOutcome(UnbindSerialNumberResult(outcome.result()));
	else
		return UnbindSerialNumberOutcome(outcome.error());
}

void SmartagClient::unbindSerialNumberAsync(const UnbindSerialNumberRequest& request, const UnbindSerialNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindSerialNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::UnbindSerialNumberOutcomeCallable SmartagClient::unbindSerialNumberCallable(const UnbindSerialNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindSerialNumberOutcome()>>(
			[this, request]()
			{
			return this->unbindSerialNumber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::UnbindSmartAccessGatewayOutcome SmartagClient::unbindSmartAccessGateway(const UnbindSmartAccessGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindSmartAccessGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindSmartAccessGatewayOutcome(UnbindSmartAccessGatewayResult(outcome.result()));
	else
		return UnbindSmartAccessGatewayOutcome(outcome.error());
}

void SmartagClient::unbindSmartAccessGatewayAsync(const UnbindSmartAccessGatewayRequest& request, const UnbindSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindSmartAccessGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::UnbindSmartAccessGatewayOutcomeCallable SmartagClient::unbindSmartAccessGatewayCallable(const UnbindSmartAccessGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindSmartAccessGatewayOutcome()>>(
			[this, request]()
			{
			return this->unbindSmartAccessGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::UnbindVbrOutcome SmartagClient::unbindVbr(const UnbindVbrRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindVbrOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindVbrOutcome(UnbindVbrResult(outcome.result()));
	else
		return UnbindVbrOutcome(outcome.error());
}

void SmartagClient::unbindVbrAsync(const UnbindVbrRequest& request, const UnbindVbrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindVbr(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::UnbindVbrOutcomeCallable SmartagClient::unbindVbrCallable(const UnbindVbrRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindVbrOutcome()>>(
			[this, request]()
			{
			return this->unbindVbr(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::UnlockSmartAccessGatewayOutcome SmartagClient::unlockSmartAccessGateway(const UnlockSmartAccessGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnlockSmartAccessGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnlockSmartAccessGatewayOutcome(UnlockSmartAccessGatewayResult(outcome.result()));
	else
		return UnlockSmartAccessGatewayOutcome(outcome.error());
}

void SmartagClient::unlockSmartAccessGatewayAsync(const UnlockSmartAccessGatewayRequest& request, const UnlockSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unlockSmartAccessGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::UnlockSmartAccessGatewayOutcomeCallable SmartagClient::unlockSmartAccessGatewayCallable(const UnlockSmartAccessGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnlockSmartAccessGatewayOutcome()>>(
			[this, request]()
			{
			return this->unlockSmartAccessGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::UpdateEnterpriseCodeOutcome SmartagClient::updateEnterpriseCode(const UpdateEnterpriseCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEnterpriseCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEnterpriseCodeOutcome(UpdateEnterpriseCodeResult(outcome.result()));
	else
		return UpdateEnterpriseCodeOutcome(outcome.error());
}

void SmartagClient::updateEnterpriseCodeAsync(const UpdateEnterpriseCodeRequest& request, const UpdateEnterpriseCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEnterpriseCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::UpdateEnterpriseCodeOutcomeCallable SmartagClient::updateEnterpriseCodeCallable(const UpdateEnterpriseCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEnterpriseCodeOutcome()>>(
			[this, request]()
			{
			return this->updateEnterpriseCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::UpdateSmartAGAccessPointOutcome SmartagClient::updateSmartAGAccessPoint(const UpdateSmartAGAccessPointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSmartAGAccessPointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSmartAGAccessPointOutcome(UpdateSmartAGAccessPointResult(outcome.result()));
	else
		return UpdateSmartAGAccessPointOutcome(outcome.error());
}

void SmartagClient::updateSmartAGAccessPointAsync(const UpdateSmartAGAccessPointRequest& request, const UpdateSmartAGAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSmartAGAccessPoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::UpdateSmartAGAccessPointOutcomeCallable SmartagClient::updateSmartAGAccessPointCallable(const UpdateSmartAGAccessPointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSmartAGAccessPointOutcome()>>(
			[this, request]()
			{
			return this->updateSmartAGAccessPoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::UpdateSmartAGDpiAttributeOutcome SmartagClient::updateSmartAGDpiAttribute(const UpdateSmartAGDpiAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSmartAGDpiAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSmartAGDpiAttributeOutcome(UpdateSmartAGDpiAttributeResult(outcome.result()));
	else
		return UpdateSmartAGDpiAttributeOutcome(outcome.error());
}

void SmartagClient::updateSmartAGDpiAttributeAsync(const UpdateSmartAGDpiAttributeRequest& request, const UpdateSmartAGDpiAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSmartAGDpiAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::UpdateSmartAGDpiAttributeOutcomeCallable SmartagClient::updateSmartAGDpiAttributeCallable(const UpdateSmartAGDpiAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSmartAGDpiAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateSmartAGDpiAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::UpdateSmartAGEnterpriseCodeOutcome SmartagClient::updateSmartAGEnterpriseCode(const UpdateSmartAGEnterpriseCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSmartAGEnterpriseCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSmartAGEnterpriseCodeOutcome(UpdateSmartAGEnterpriseCodeResult(outcome.result()));
	else
		return UpdateSmartAGEnterpriseCodeOutcome(outcome.error());
}

void SmartagClient::updateSmartAGEnterpriseCodeAsync(const UpdateSmartAGEnterpriseCodeRequest& request, const UpdateSmartAGEnterpriseCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSmartAGEnterpriseCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::UpdateSmartAGEnterpriseCodeOutcomeCallable SmartagClient::updateSmartAGEnterpriseCodeCallable(const UpdateSmartAGEnterpriseCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSmartAGEnterpriseCodeOutcome()>>(
			[this, request]()
			{
			return this->updateSmartAGEnterpriseCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::UpdateSmartAccessGatewayVersionOutcome SmartagClient::updateSmartAccessGatewayVersion(const UpdateSmartAccessGatewayVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSmartAccessGatewayVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSmartAccessGatewayVersionOutcome(UpdateSmartAccessGatewayVersionResult(outcome.result()));
	else
		return UpdateSmartAccessGatewayVersionOutcome(outcome.error());
}

void SmartagClient::updateSmartAccessGatewayVersionAsync(const UpdateSmartAccessGatewayVersionRequest& request, const UpdateSmartAccessGatewayVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSmartAccessGatewayVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::UpdateSmartAccessGatewayVersionOutcomeCallable SmartagClient::updateSmartAccessGatewayVersionCallable(const UpdateSmartAccessGatewayVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSmartAccessGatewayVersionOutcome()>>(
			[this, request]()
			{
			return this->updateSmartAccessGatewayVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::UpgradeSmartAccessGatewayOutcome SmartagClient::upgradeSmartAccessGateway(const UpgradeSmartAccessGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeSmartAccessGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeSmartAccessGatewayOutcome(UpgradeSmartAccessGatewayResult(outcome.result()));
	else
		return UpgradeSmartAccessGatewayOutcome(outcome.error());
}

void SmartagClient::upgradeSmartAccessGatewayAsync(const UpgradeSmartAccessGatewayRequest& request, const UpgradeSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeSmartAccessGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::UpgradeSmartAccessGatewayOutcomeCallable SmartagClient::upgradeSmartAccessGatewayCallable(const UpgradeSmartAccessGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeSmartAccessGatewayOutcome()>>(
			[this, request]()
			{
			return this->upgradeSmartAccessGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartagClient::UpgradeSmartAccessGatewaySoftwareOutcome SmartagClient::upgradeSmartAccessGatewaySoftware(const UpgradeSmartAccessGatewaySoftwareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeSmartAccessGatewaySoftwareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeSmartAccessGatewaySoftwareOutcome(UpgradeSmartAccessGatewaySoftwareResult(outcome.result()));
	else
		return UpgradeSmartAccessGatewaySoftwareOutcome(outcome.error());
}

void SmartagClient::upgradeSmartAccessGatewaySoftwareAsync(const UpgradeSmartAccessGatewaySoftwareRequest& request, const UpgradeSmartAccessGatewaySoftwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeSmartAccessGatewaySoftware(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartagClient::UpgradeSmartAccessGatewaySoftwareOutcomeCallable SmartagClient::upgradeSmartAccessGatewaySoftwareCallable(const UpgradeSmartAccessGatewaySoftwareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeSmartAccessGatewaySoftwareOutcome()>>(
			[this, request]()
			{
			return this->upgradeSmartAccessGatewaySoftware(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

