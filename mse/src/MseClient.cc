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

#include <alibabacloud/mse/MseClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

namespace
{
	const std::string SERVICE_NAME = "mse";
}

MseClient::MseClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

MseClient::MseClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

MseClient::MseClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

MseClient::~MseClient()
{}

MseClient::AddAuthResourceOutcome MseClient::addAuthResource(const AddAuthResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddAuthResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddAuthResourceOutcome(AddAuthResourceResult(outcome.result()));
	else
		return AddAuthResourceOutcome(outcome.error());
}

void MseClient::addAuthResourceAsync(const AddAuthResourceRequest& request, const AddAuthResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addAuthResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::AddAuthResourceOutcomeCallable MseClient::addAuthResourceCallable(const AddAuthResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddAuthResourceOutcome()>>(
			[this, request]()
			{
			return this->addAuthResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::AddBlackWhiteListOutcome MseClient::addBlackWhiteList(const AddBlackWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddBlackWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddBlackWhiteListOutcome(AddBlackWhiteListResult(outcome.result()));
	else
		return AddBlackWhiteListOutcome(outcome.error());
}

void MseClient::addBlackWhiteListAsync(const AddBlackWhiteListRequest& request, const AddBlackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addBlackWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::AddBlackWhiteListOutcomeCallable MseClient::addBlackWhiteListCallable(const AddBlackWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddBlackWhiteListOutcome()>>(
			[this, request]()
			{
			return this->addBlackWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::AddGatewayOutcome MseClient::addGateway(const AddGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddGatewayOutcome(AddGatewayResult(outcome.result()));
	else
		return AddGatewayOutcome(outcome.error());
}

void MseClient::addGatewayAsync(const AddGatewayRequest& request, const AddGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::AddGatewayOutcomeCallable MseClient::addGatewayCallable(const AddGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddGatewayOutcome()>>(
			[this, request]()
			{
			return this->addGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::AddGatewayDomainOutcome MseClient::addGatewayDomain(const AddGatewayDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddGatewayDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddGatewayDomainOutcome(AddGatewayDomainResult(outcome.result()));
	else
		return AddGatewayDomainOutcome(outcome.error());
}

void MseClient::addGatewayDomainAsync(const AddGatewayDomainRequest& request, const AddGatewayDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addGatewayDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::AddGatewayDomainOutcomeCallable MseClient::addGatewayDomainCallable(const AddGatewayDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddGatewayDomainOutcome()>>(
			[this, request]()
			{
			return this->addGatewayDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::AddGatewayServiceVersionOutcome MseClient::addGatewayServiceVersion(const AddGatewayServiceVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddGatewayServiceVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddGatewayServiceVersionOutcome(AddGatewayServiceVersionResult(outcome.result()));
	else
		return AddGatewayServiceVersionOutcome(outcome.error());
}

void MseClient::addGatewayServiceVersionAsync(const AddGatewayServiceVersionRequest& request, const AddGatewayServiceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addGatewayServiceVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::AddGatewayServiceVersionOutcomeCallable MseClient::addGatewayServiceVersionCallable(const AddGatewayServiceVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddGatewayServiceVersionOutcome()>>(
			[this, request]()
			{
			return this->addGatewayServiceVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::AddGatewaySlbOutcome MseClient::addGatewaySlb(const AddGatewaySlbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddGatewaySlbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddGatewaySlbOutcome(AddGatewaySlbResult(outcome.result()));
	else
		return AddGatewaySlbOutcome(outcome.error());
}

void MseClient::addGatewaySlbAsync(const AddGatewaySlbRequest& request, const AddGatewaySlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addGatewaySlb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::AddGatewaySlbOutcomeCallable MseClient::addGatewaySlbCallable(const AddGatewaySlbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddGatewaySlbOutcome()>>(
			[this, request]()
			{
			return this->addGatewaySlb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::AddMockRuleOutcome MseClient::addMockRule(const AddMockRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddMockRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddMockRuleOutcome(AddMockRuleResult(outcome.result()));
	else
		return AddMockRuleOutcome(outcome.error());
}

void MseClient::addMockRuleAsync(const AddMockRuleRequest& request, const AddMockRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addMockRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::AddMockRuleOutcomeCallable MseClient::addMockRuleCallable(const AddMockRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddMockRuleOutcome()>>(
			[this, request]()
			{
			return this->addMockRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::AddSSLCertOutcome MseClient::addSSLCert(const AddSSLCertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddSSLCertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddSSLCertOutcome(AddSSLCertResult(outcome.result()));
	else
		return AddSSLCertOutcome(outcome.error());
}

void MseClient::addSSLCertAsync(const AddSSLCertRequest& request, const AddSSLCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addSSLCert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::AddSSLCertOutcomeCallable MseClient::addSSLCertCallable(const AddSSLCertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddSSLCertOutcome()>>(
			[this, request]()
			{
			return this->addSSLCert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::AddServiceSourceOutcome MseClient::addServiceSource(const AddServiceSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddServiceSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddServiceSourceOutcome(AddServiceSourceResult(outcome.result()));
	else
		return AddServiceSourceOutcome(outcome.error());
}

void MseClient::addServiceSourceAsync(const AddServiceSourceRequest& request, const AddServiceSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addServiceSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::AddServiceSourceOutcomeCallable MseClient::addServiceSourceCallable(const AddServiceSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddServiceSourceOutcome()>>(
			[this, request]()
			{
			return this->addServiceSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::CloneNacosConfigOutcome MseClient::cloneNacosConfig(const CloneNacosConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloneNacosConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloneNacosConfigOutcome(CloneNacosConfigResult(outcome.result()));
	else
		return CloneNacosConfigOutcome(outcome.error());
}

void MseClient::cloneNacosConfigAsync(const CloneNacosConfigRequest& request, const CloneNacosConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cloneNacosConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::CloneNacosConfigOutcomeCallable MseClient::cloneNacosConfigCallable(const CloneNacosConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloneNacosConfigOutcome()>>(
			[this, request]()
			{
			return this->cloneNacosConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::CreateAlarmRuleOutcome MseClient::createAlarmRule(const CreateAlarmRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAlarmRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAlarmRuleOutcome(CreateAlarmRuleResult(outcome.result()));
	else
		return CreateAlarmRuleOutcome(outcome.error());
}

void MseClient::createAlarmRuleAsync(const CreateAlarmRuleRequest& request, const CreateAlarmRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAlarmRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::CreateAlarmRuleOutcomeCallable MseClient::createAlarmRuleCallable(const CreateAlarmRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAlarmRuleOutcome()>>(
			[this, request]()
			{
			return this->createAlarmRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::CreateApplicationOutcome MseClient::createApplication(const CreateApplicationRequest &request) const
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

void MseClient::createApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::CreateApplicationOutcomeCallable MseClient::createApplicationCallable(const CreateApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateApplicationOutcome()>>(
			[this, request]()
			{
			return this->createApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::CreateClusterOutcome MseClient::createCluster(const CreateClusterRequest &request) const
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

void MseClient::createClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::CreateClusterOutcomeCallable MseClient::createClusterCallable(const CreateClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClusterOutcome()>>(
			[this, request]()
			{
			return this->createCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::CreateEngineNamespaceOutcome MseClient::createEngineNamespace(const CreateEngineNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEngineNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEngineNamespaceOutcome(CreateEngineNamespaceResult(outcome.result()));
	else
		return CreateEngineNamespaceOutcome(outcome.error());
}

void MseClient::createEngineNamespaceAsync(const CreateEngineNamespaceRequest& request, const CreateEngineNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEngineNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::CreateEngineNamespaceOutcomeCallable MseClient::createEngineNamespaceCallable(const CreateEngineNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEngineNamespaceOutcome()>>(
			[this, request]()
			{
			return this->createEngineNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::CreateNacosConfigOutcome MseClient::createNacosConfig(const CreateNacosConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNacosConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNacosConfigOutcome(CreateNacosConfigResult(outcome.result()));
	else
		return CreateNacosConfigOutcome(outcome.error());
}

void MseClient::createNacosConfigAsync(const CreateNacosConfigRequest& request, const CreateNacosConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNacosConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::CreateNacosConfigOutcomeCallable MseClient::createNacosConfigCallable(const CreateNacosConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNacosConfigOutcome()>>(
			[this, request]()
			{
			return this->createNacosConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::CreateNacosInstanceOutcome MseClient::createNacosInstance(const CreateNacosInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNacosInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNacosInstanceOutcome(CreateNacosInstanceResult(outcome.result()));
	else
		return CreateNacosInstanceOutcome(outcome.error());
}

void MseClient::createNacosInstanceAsync(const CreateNacosInstanceRequest& request, const CreateNacosInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNacosInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::CreateNacosInstanceOutcomeCallable MseClient::createNacosInstanceCallable(const CreateNacosInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNacosInstanceOutcome()>>(
			[this, request]()
			{
			return this->createNacosInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::CreateNacosServiceOutcome MseClient::createNacosService(const CreateNacosServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNacosServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNacosServiceOutcome(CreateNacosServiceResult(outcome.result()));
	else
		return CreateNacosServiceOutcome(outcome.error());
}

void MseClient::createNacosServiceAsync(const CreateNacosServiceRequest& request, const CreateNacosServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNacosService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::CreateNacosServiceOutcomeCallable MseClient::createNacosServiceCallable(const CreateNacosServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNacosServiceOutcome()>>(
			[this, request]()
			{
			return this->createNacosService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::CreateZnodeOutcome MseClient::createZnode(const CreateZnodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateZnodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateZnodeOutcome(CreateZnodeResult(outcome.result()));
	else
		return CreateZnodeOutcome(outcome.error());
}

void MseClient::createZnodeAsync(const CreateZnodeRequest& request, const CreateZnodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createZnode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::CreateZnodeOutcomeCallable MseClient::createZnodeCallable(const CreateZnodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateZnodeOutcome()>>(
			[this, request]()
			{
			return this->createZnode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteAlarmRuleOutcome MseClient::deleteAlarmRule(const DeleteAlarmRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAlarmRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAlarmRuleOutcome(DeleteAlarmRuleResult(outcome.result()));
	else
		return DeleteAlarmRuleOutcome(outcome.error());
}

void MseClient::deleteAlarmRuleAsync(const DeleteAlarmRuleRequest& request, const DeleteAlarmRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAlarmRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteAlarmRuleOutcomeCallable MseClient::deleteAlarmRuleCallable(const DeleteAlarmRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAlarmRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteAlarmRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteAuthResourceOutcome MseClient::deleteAuthResource(const DeleteAuthResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAuthResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAuthResourceOutcome(DeleteAuthResourceResult(outcome.result()));
	else
		return DeleteAuthResourceOutcome(outcome.error());
}

void MseClient::deleteAuthResourceAsync(const DeleteAuthResourceRequest& request, const DeleteAuthResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAuthResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteAuthResourceOutcomeCallable MseClient::deleteAuthResourceCallable(const DeleteAuthResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAuthResourceOutcome()>>(
			[this, request]()
			{
			return this->deleteAuthResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteClusterOutcome MseClient::deleteCluster(const DeleteClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteClusterOutcome(DeleteClusterResult(outcome.result()));
	else
		return DeleteClusterOutcome(outcome.error());
}

void MseClient::deleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteClusterOutcomeCallable MseClient::deleteClusterCallable(const DeleteClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteClusterOutcome()>>(
			[this, request]()
			{
			return this->deleteCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteEngineNamespaceOutcome MseClient::deleteEngineNamespace(const DeleteEngineNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEngineNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEngineNamespaceOutcome(DeleteEngineNamespaceResult(outcome.result()));
	else
		return DeleteEngineNamespaceOutcome(outcome.error());
}

void MseClient::deleteEngineNamespaceAsync(const DeleteEngineNamespaceRequest& request, const DeleteEngineNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEngineNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteEngineNamespaceOutcomeCallable MseClient::deleteEngineNamespaceCallable(const DeleteEngineNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEngineNamespaceOutcome()>>(
			[this, request]()
			{
			return this->deleteEngineNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteGatewayOutcome MseClient::deleteGateway(const DeleteGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGatewayOutcome(DeleteGatewayResult(outcome.result()));
	else
		return DeleteGatewayOutcome(outcome.error());
}

void MseClient::deleteGatewayAsync(const DeleteGatewayRequest& request, const DeleteGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteGatewayOutcomeCallable MseClient::deleteGatewayCallable(const DeleteGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGatewayOutcome()>>(
			[this, request]()
			{
			return this->deleteGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteGatewayDomainOutcome MseClient::deleteGatewayDomain(const DeleteGatewayDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGatewayDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGatewayDomainOutcome(DeleteGatewayDomainResult(outcome.result()));
	else
		return DeleteGatewayDomainOutcome(outcome.error());
}

void MseClient::deleteGatewayDomainAsync(const DeleteGatewayDomainRequest& request, const DeleteGatewayDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGatewayDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteGatewayDomainOutcomeCallable MseClient::deleteGatewayDomainCallable(const DeleteGatewayDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGatewayDomainOutcome()>>(
			[this, request]()
			{
			return this->deleteGatewayDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteGatewayServiceVersionOutcome MseClient::deleteGatewayServiceVersion(const DeleteGatewayServiceVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGatewayServiceVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGatewayServiceVersionOutcome(DeleteGatewayServiceVersionResult(outcome.result()));
	else
		return DeleteGatewayServiceVersionOutcome(outcome.error());
}

void MseClient::deleteGatewayServiceVersionAsync(const DeleteGatewayServiceVersionRequest& request, const DeleteGatewayServiceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGatewayServiceVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteGatewayServiceVersionOutcomeCallable MseClient::deleteGatewayServiceVersionCallable(const DeleteGatewayServiceVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGatewayServiceVersionOutcome()>>(
			[this, request]()
			{
			return this->deleteGatewayServiceVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteGatewaySlbOutcome MseClient::deleteGatewaySlb(const DeleteGatewaySlbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGatewaySlbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGatewaySlbOutcome(DeleteGatewaySlbResult(outcome.result()));
	else
		return DeleteGatewaySlbOutcome(outcome.error());
}

void MseClient::deleteGatewaySlbAsync(const DeleteGatewaySlbRequest& request, const DeleteGatewaySlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGatewaySlb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteGatewaySlbOutcomeCallable MseClient::deleteGatewaySlbCallable(const DeleteGatewaySlbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGatewaySlbOutcome()>>(
			[this, request]()
			{
			return this->deleteGatewaySlb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteNacosConfigOutcome MseClient::deleteNacosConfig(const DeleteNacosConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNacosConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNacosConfigOutcome(DeleteNacosConfigResult(outcome.result()));
	else
		return DeleteNacosConfigOutcome(outcome.error());
}

void MseClient::deleteNacosConfigAsync(const DeleteNacosConfigRequest& request, const DeleteNacosConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNacosConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteNacosConfigOutcomeCallable MseClient::deleteNacosConfigCallable(const DeleteNacosConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNacosConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteNacosConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteNacosConfigsOutcome MseClient::deleteNacosConfigs(const DeleteNacosConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNacosConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNacosConfigsOutcome(DeleteNacosConfigsResult(outcome.result()));
	else
		return DeleteNacosConfigsOutcome(outcome.error());
}

void MseClient::deleteNacosConfigsAsync(const DeleteNacosConfigsRequest& request, const DeleteNacosConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNacosConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteNacosConfigsOutcomeCallable MseClient::deleteNacosConfigsCallable(const DeleteNacosConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNacosConfigsOutcome()>>(
			[this, request]()
			{
			return this->deleteNacosConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteNacosServiceOutcome MseClient::deleteNacosService(const DeleteNacosServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNacosServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNacosServiceOutcome(DeleteNacosServiceResult(outcome.result()));
	else
		return DeleteNacosServiceOutcome(outcome.error());
}

void MseClient::deleteNacosServiceAsync(const DeleteNacosServiceRequest& request, const DeleteNacosServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNacosService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteNacosServiceOutcomeCallable MseClient::deleteNacosServiceCallable(const DeleteNacosServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNacosServiceOutcome()>>(
			[this, request]()
			{
			return this->deleteNacosService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteServiceSourceOutcome MseClient::deleteServiceSource(const DeleteServiceSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteServiceSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteServiceSourceOutcome(DeleteServiceSourceResult(outcome.result()));
	else
		return DeleteServiceSourceOutcome(outcome.error());
}

void MseClient::deleteServiceSourceAsync(const DeleteServiceSourceRequest& request, const DeleteServiceSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteServiceSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteServiceSourceOutcomeCallable MseClient::deleteServiceSourceCallable(const DeleteServiceSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteServiceSourceOutcome()>>(
			[this, request]()
			{
			return this->deleteServiceSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::DeleteZnodeOutcome MseClient::deleteZnode(const DeleteZnodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteZnodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteZnodeOutcome(DeleteZnodeResult(outcome.result()));
	else
		return DeleteZnodeOutcome(outcome.error());
}

void MseClient::deleteZnodeAsync(const DeleteZnodeRequest& request, const DeleteZnodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteZnode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::DeleteZnodeOutcomeCallable MseClient::deleteZnodeCallable(const DeleteZnodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteZnodeOutcome()>>(
			[this, request]()
			{
			return this->deleteZnode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ExportNacosConfigOutcome MseClient::exportNacosConfig(const ExportNacosConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportNacosConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportNacosConfigOutcome(ExportNacosConfigResult(outcome.result()));
	else
		return ExportNacosConfigOutcome(outcome.error());
}

void MseClient::exportNacosConfigAsync(const ExportNacosConfigRequest& request, const ExportNacosConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportNacosConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ExportNacosConfigOutcomeCallable MseClient::exportNacosConfigCallable(const ExportNacosConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportNacosConfigOutcome()>>(
			[this, request]()
			{
			return this->exportNacosConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetBlackWhiteListOutcome MseClient::getBlackWhiteList(const GetBlackWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBlackWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBlackWhiteListOutcome(GetBlackWhiteListResult(outcome.result()));
	else
		return GetBlackWhiteListOutcome(outcome.error());
}

void MseClient::getBlackWhiteListAsync(const GetBlackWhiteListRequest& request, const GetBlackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBlackWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetBlackWhiteListOutcomeCallable MseClient::getBlackWhiteListCallable(const GetBlackWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBlackWhiteListOutcome()>>(
			[this, request]()
			{
			return this->getBlackWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetEngineNamepaceOutcome MseClient::getEngineNamepace(const GetEngineNamepaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEngineNamepaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEngineNamepaceOutcome(GetEngineNamepaceResult(outcome.result()));
	else
		return GetEngineNamepaceOutcome(outcome.error());
}

void MseClient::getEngineNamepaceAsync(const GetEngineNamepaceRequest& request, const GetEngineNamepaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEngineNamepace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetEngineNamepaceOutcomeCallable MseClient::getEngineNamepaceCallable(const GetEngineNamepaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEngineNamepaceOutcome()>>(
			[this, request]()
			{
			return this->getEngineNamepace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetGatewayOutcome MseClient::getGateway(const GetGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGatewayOutcome(GetGatewayResult(outcome.result()));
	else
		return GetGatewayOutcome(outcome.error());
}

void MseClient::getGatewayAsync(const GetGatewayRequest& request, const GetGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetGatewayOutcomeCallable MseClient::getGatewayCallable(const GetGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGatewayOutcome()>>(
			[this, request]()
			{
			return this->getGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetGatewayDomainDetailOutcome MseClient::getGatewayDomainDetail(const GetGatewayDomainDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGatewayDomainDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGatewayDomainDetailOutcome(GetGatewayDomainDetailResult(outcome.result()));
	else
		return GetGatewayDomainDetailOutcome(outcome.error());
}

void MseClient::getGatewayDomainDetailAsync(const GetGatewayDomainDetailRequest& request, const GetGatewayDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGatewayDomainDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetGatewayDomainDetailOutcomeCallable MseClient::getGatewayDomainDetailCallable(const GetGatewayDomainDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGatewayDomainDetailOutcome()>>(
			[this, request]()
			{
			return this->getGatewayDomainDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetGatewayOptionOutcome MseClient::getGatewayOption(const GetGatewayOptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGatewayOptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGatewayOptionOutcome(GetGatewayOptionResult(outcome.result()));
	else
		return GetGatewayOptionOutcome(outcome.error());
}

void MseClient::getGatewayOptionAsync(const GetGatewayOptionRequest& request, const GetGatewayOptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGatewayOption(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetGatewayOptionOutcomeCallable MseClient::getGatewayOptionCallable(const GetGatewayOptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGatewayOptionOutcome()>>(
			[this, request]()
			{
			return this->getGatewayOption(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetGatewayServiceDetailOutcome MseClient::getGatewayServiceDetail(const GetGatewayServiceDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGatewayServiceDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGatewayServiceDetailOutcome(GetGatewayServiceDetailResult(outcome.result()));
	else
		return GetGatewayServiceDetailOutcome(outcome.error());
}

void MseClient::getGatewayServiceDetailAsync(const GetGatewayServiceDetailRequest& request, const GetGatewayServiceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGatewayServiceDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetGatewayServiceDetailOutcomeCallable MseClient::getGatewayServiceDetailCallable(const GetGatewayServiceDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGatewayServiceDetailOutcome()>>(
			[this, request]()
			{
			return this->getGatewayServiceDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetGovernanceKubernetesClusterOutcome MseClient::getGovernanceKubernetesCluster(const GetGovernanceKubernetesClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGovernanceKubernetesClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGovernanceKubernetesClusterOutcome(GetGovernanceKubernetesClusterResult(outcome.result()));
	else
		return GetGovernanceKubernetesClusterOutcome(outcome.error());
}

void MseClient::getGovernanceKubernetesClusterAsync(const GetGovernanceKubernetesClusterRequest& request, const GetGovernanceKubernetesClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGovernanceKubernetesCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetGovernanceKubernetesClusterOutcomeCallable MseClient::getGovernanceKubernetesClusterCallable(const GetGovernanceKubernetesClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGovernanceKubernetesClusterOutcome()>>(
			[this, request]()
			{
			return this->getGovernanceKubernetesCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetGovernanceKubernetesClusterListOutcome MseClient::getGovernanceKubernetesClusterList(const GetGovernanceKubernetesClusterListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGovernanceKubernetesClusterListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGovernanceKubernetesClusterListOutcome(GetGovernanceKubernetesClusterListResult(outcome.result()));
	else
		return GetGovernanceKubernetesClusterListOutcome(outcome.error());
}

void MseClient::getGovernanceKubernetesClusterListAsync(const GetGovernanceKubernetesClusterListRequest& request, const GetGovernanceKubernetesClusterListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGovernanceKubernetesClusterList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetGovernanceKubernetesClusterListOutcomeCallable MseClient::getGovernanceKubernetesClusterListCallable(const GetGovernanceKubernetesClusterListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGovernanceKubernetesClusterListOutcome()>>(
			[this, request]()
			{
			return this->getGovernanceKubernetesClusterList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetImageOutcome MseClient::getImage(const GetImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetImageOutcome(GetImageResult(outcome.result()));
	else
		return GetImageOutcome(outcome.error());
}

void MseClient::getImageAsync(const GetImageRequest& request, const GetImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetImageOutcomeCallable MseClient::getImageCallable(const GetImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetImageOutcome()>>(
			[this, request]()
			{
			return this->getImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetImportFileUrlOutcome MseClient::getImportFileUrl(const GetImportFileUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetImportFileUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetImportFileUrlOutcome(GetImportFileUrlResult(outcome.result()));
	else
		return GetImportFileUrlOutcome(outcome.error());
}

void MseClient::getImportFileUrlAsync(const GetImportFileUrlRequest& request, const GetImportFileUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getImportFileUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetImportFileUrlOutcomeCallable MseClient::getImportFileUrlCallable(const GetImportFileUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetImportFileUrlOutcome()>>(
			[this, request]()
			{
			return this->getImportFileUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetKubernetesSourceOutcome MseClient::getKubernetesSource(const GetKubernetesSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetKubernetesSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetKubernetesSourceOutcome(GetKubernetesSourceResult(outcome.result()));
	else
		return GetKubernetesSourceOutcome(outcome.error());
}

void MseClient::getKubernetesSourceAsync(const GetKubernetesSourceRequest& request, const GetKubernetesSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getKubernetesSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetKubernetesSourceOutcomeCallable MseClient::getKubernetesSourceCallable(const GetKubernetesSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetKubernetesSourceOutcome()>>(
			[this, request]()
			{
			return this->getKubernetesSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetMseFeatureSwitchOutcome MseClient::getMseFeatureSwitch(const GetMseFeatureSwitchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMseFeatureSwitchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMseFeatureSwitchOutcome(GetMseFeatureSwitchResult(outcome.result()));
	else
		return GetMseFeatureSwitchOutcome(outcome.error());
}

void MseClient::getMseFeatureSwitchAsync(const GetMseFeatureSwitchRequest& request, const GetMseFeatureSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMseFeatureSwitch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetMseFeatureSwitchOutcomeCallable MseClient::getMseFeatureSwitchCallable(const GetMseFeatureSwitchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMseFeatureSwitchOutcome()>>(
			[this, request]()
			{
			return this->getMseFeatureSwitch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetMseSourceOutcome MseClient::getMseSource(const GetMseSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMseSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMseSourceOutcome(GetMseSourceResult(outcome.result()));
	else
		return GetMseSourceOutcome(outcome.error());
}

void MseClient::getMseSourceAsync(const GetMseSourceRequest& request, const GetMseSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMseSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetMseSourceOutcomeCallable MseClient::getMseSourceCallable(const GetMseSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMseSourceOutcome()>>(
			[this, request]()
			{
			return this->getMseSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetNacosConfigOutcome MseClient::getNacosConfig(const GetNacosConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNacosConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNacosConfigOutcome(GetNacosConfigResult(outcome.result()));
	else
		return GetNacosConfigOutcome(outcome.error());
}

void MseClient::getNacosConfigAsync(const GetNacosConfigRequest& request, const GetNacosConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNacosConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetNacosConfigOutcomeCallable MseClient::getNacosConfigCallable(const GetNacosConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNacosConfigOutcome()>>(
			[this, request]()
			{
			return this->getNacosConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetNacosHistoryConfigOutcome MseClient::getNacosHistoryConfig(const GetNacosHistoryConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNacosHistoryConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNacosHistoryConfigOutcome(GetNacosHistoryConfigResult(outcome.result()));
	else
		return GetNacosHistoryConfigOutcome(outcome.error());
}

void MseClient::getNacosHistoryConfigAsync(const GetNacosHistoryConfigRequest& request, const GetNacosHistoryConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNacosHistoryConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetNacosHistoryConfigOutcomeCallable MseClient::getNacosHistoryConfigCallable(const GetNacosHistoryConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNacosHistoryConfigOutcome()>>(
			[this, request]()
			{
			return this->getNacosHistoryConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::GetOverviewOutcome MseClient::getOverview(const GetOverviewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOverviewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOverviewOutcome(GetOverviewResult(outcome.result()));
	else
		return GetOverviewOutcome(outcome.error());
}

void MseClient::getOverviewAsync(const GetOverviewRequest& request, const GetOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOverview(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::GetOverviewOutcomeCallable MseClient::getOverviewCallable(const GetOverviewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOverviewOutcome()>>(
			[this, request]()
			{
			return this->getOverview(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ImportNacosConfigOutcome MseClient::importNacosConfig(const ImportNacosConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportNacosConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportNacosConfigOutcome(ImportNacosConfigResult(outcome.result()));
	else
		return ImportNacosConfigOutcome(outcome.error());
}

void MseClient::importNacosConfigAsync(const ImportNacosConfigRequest& request, const ImportNacosConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importNacosConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ImportNacosConfigOutcomeCallable MseClient::importNacosConfigCallable(const ImportNacosConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportNacosConfigOutcome()>>(
			[this, request]()
			{
			return this->importNacosConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ImportServicesOutcome MseClient::importServices(const ImportServicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportServicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportServicesOutcome(ImportServicesResult(outcome.result()));
	else
		return ImportServicesOutcome(outcome.error());
}

void MseClient::importServicesAsync(const ImportServicesRequest& request, const ImportServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importServices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ImportServicesOutcomeCallable MseClient::importServicesCallable(const ImportServicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportServicesOutcome()>>(
			[this, request]()
			{
			return this->importServices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListAlarmContactGroupsOutcome MseClient::listAlarmContactGroups(const ListAlarmContactGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAlarmContactGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAlarmContactGroupsOutcome(ListAlarmContactGroupsResult(outcome.result()));
	else
		return ListAlarmContactGroupsOutcome(outcome.error());
}

void MseClient::listAlarmContactGroupsAsync(const ListAlarmContactGroupsRequest& request, const ListAlarmContactGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAlarmContactGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListAlarmContactGroupsOutcomeCallable MseClient::listAlarmContactGroupsCallable(const ListAlarmContactGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAlarmContactGroupsOutcome()>>(
			[this, request]()
			{
			return this->listAlarmContactGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListAlarmHistoriesOutcome MseClient::listAlarmHistories(const ListAlarmHistoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAlarmHistoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAlarmHistoriesOutcome(ListAlarmHistoriesResult(outcome.result()));
	else
		return ListAlarmHistoriesOutcome(outcome.error());
}

void MseClient::listAlarmHistoriesAsync(const ListAlarmHistoriesRequest& request, const ListAlarmHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAlarmHistories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListAlarmHistoriesOutcomeCallable MseClient::listAlarmHistoriesCallable(const ListAlarmHistoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAlarmHistoriesOutcome()>>(
			[this, request]()
			{
			return this->listAlarmHistories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListAlarmItemsOutcome MseClient::listAlarmItems(const ListAlarmItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAlarmItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAlarmItemsOutcome(ListAlarmItemsResult(outcome.result()));
	else
		return ListAlarmItemsOutcome(outcome.error());
}

void MseClient::listAlarmItemsAsync(const ListAlarmItemsRequest& request, const ListAlarmItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAlarmItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListAlarmItemsOutcomeCallable MseClient::listAlarmItemsCallable(const ListAlarmItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAlarmItemsOutcome()>>(
			[this, request]()
			{
			return this->listAlarmItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListAlarmRulesOutcome MseClient::listAlarmRules(const ListAlarmRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAlarmRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAlarmRulesOutcome(ListAlarmRulesResult(outcome.result()));
	else
		return ListAlarmRulesOutcome(outcome.error());
}

void MseClient::listAlarmRulesAsync(const ListAlarmRulesRequest& request, const ListAlarmRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAlarmRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListAlarmRulesOutcomeCallable MseClient::listAlarmRulesCallable(const ListAlarmRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAlarmRulesOutcome()>>(
			[this, request]()
			{
			return this->listAlarmRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListAnsInstancesOutcome MseClient::listAnsInstances(const ListAnsInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAnsInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAnsInstancesOutcome(ListAnsInstancesResult(outcome.result()));
	else
		return ListAnsInstancesOutcome(outcome.error());
}

void MseClient::listAnsInstancesAsync(const ListAnsInstancesRequest& request, const ListAnsInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAnsInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListAnsInstancesOutcomeCallable MseClient::listAnsInstancesCallable(const ListAnsInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAnsInstancesOutcome()>>(
			[this, request]()
			{
			return this->listAnsInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListAnsServiceClustersOutcome MseClient::listAnsServiceClusters(const ListAnsServiceClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAnsServiceClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAnsServiceClustersOutcome(ListAnsServiceClustersResult(outcome.result()));
	else
		return ListAnsServiceClustersOutcome(outcome.error());
}

void MseClient::listAnsServiceClustersAsync(const ListAnsServiceClustersRequest& request, const ListAnsServiceClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAnsServiceClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListAnsServiceClustersOutcomeCallable MseClient::listAnsServiceClustersCallable(const ListAnsServiceClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAnsServiceClustersOutcome()>>(
			[this, request]()
			{
			return this->listAnsServiceClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListAnsServicesOutcome MseClient::listAnsServices(const ListAnsServicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAnsServicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAnsServicesOutcome(ListAnsServicesResult(outcome.result()));
	else
		return ListAnsServicesOutcome(outcome.error());
}

void MseClient::listAnsServicesAsync(const ListAnsServicesRequest& request, const ListAnsServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAnsServices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListAnsServicesOutcomeCallable MseClient::listAnsServicesCallable(const ListAnsServicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAnsServicesOutcome()>>(
			[this, request]()
			{
			return this->listAnsServices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListClusterConnectionTypesOutcome MseClient::listClusterConnectionTypes(const ListClusterConnectionTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterConnectionTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterConnectionTypesOutcome(ListClusterConnectionTypesResult(outcome.result()));
	else
		return ListClusterConnectionTypesOutcome(outcome.error());
}

void MseClient::listClusterConnectionTypesAsync(const ListClusterConnectionTypesRequest& request, const ListClusterConnectionTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterConnectionTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListClusterConnectionTypesOutcomeCallable MseClient::listClusterConnectionTypesCallable(const ListClusterConnectionTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterConnectionTypesOutcome()>>(
			[this, request]()
			{
			return this->listClusterConnectionTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListClusterTypesOutcome MseClient::listClusterTypes(const ListClusterTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterTypesOutcome(ListClusterTypesResult(outcome.result()));
	else
		return ListClusterTypesOutcome(outcome.error());
}

void MseClient::listClusterTypesAsync(const ListClusterTypesRequest& request, const ListClusterTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListClusterTypesOutcomeCallable MseClient::listClusterTypesCallable(const ListClusterTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterTypesOutcome()>>(
			[this, request]()
			{
			return this->listClusterTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListClusterVersionsOutcome MseClient::listClusterVersions(const ListClusterVersionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterVersionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterVersionsOutcome(ListClusterVersionsResult(outcome.result()));
	else
		return ListClusterVersionsOutcome(outcome.error());
}

void MseClient::listClusterVersionsAsync(const ListClusterVersionsRequest& request, const ListClusterVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListClusterVersionsOutcomeCallable MseClient::listClusterVersionsCallable(const ListClusterVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterVersionsOutcome()>>(
			[this, request]()
			{
			return this->listClusterVersions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListClustersOutcome MseClient::listClusters(const ListClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClustersOutcome(ListClustersResult(outcome.result()));
	else
		return ListClustersOutcome(outcome.error());
}

void MseClient::listClustersAsync(const ListClustersRequest& request, const ListClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListClustersOutcomeCallable MseClient::listClustersCallable(const ListClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClustersOutcome()>>(
			[this, request]()
			{
			return this->listClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListEngineNamespacesOutcome MseClient::listEngineNamespaces(const ListEngineNamespacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEngineNamespacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEngineNamespacesOutcome(ListEngineNamespacesResult(outcome.result()));
	else
		return ListEngineNamespacesOutcome(outcome.error());
}

void MseClient::listEngineNamespacesAsync(const ListEngineNamespacesRequest& request, const ListEngineNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEngineNamespaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListEngineNamespacesOutcomeCallable MseClient::listEngineNamespacesCallable(const ListEngineNamespacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEngineNamespacesOutcome()>>(
			[this, request]()
			{
			return this->listEngineNamespaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListEurekaInstancesOutcome MseClient::listEurekaInstances(const ListEurekaInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEurekaInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEurekaInstancesOutcome(ListEurekaInstancesResult(outcome.result()));
	else
		return ListEurekaInstancesOutcome(outcome.error());
}

void MseClient::listEurekaInstancesAsync(const ListEurekaInstancesRequest& request, const ListEurekaInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEurekaInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListEurekaInstancesOutcomeCallable MseClient::listEurekaInstancesCallable(const ListEurekaInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEurekaInstancesOutcome()>>(
			[this, request]()
			{
			return this->listEurekaInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListEurekaServicesOutcome MseClient::listEurekaServices(const ListEurekaServicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEurekaServicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEurekaServicesOutcome(ListEurekaServicesResult(outcome.result()));
	else
		return ListEurekaServicesOutcome(outcome.error());
}

void MseClient::listEurekaServicesAsync(const ListEurekaServicesRequest& request, const ListEurekaServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEurekaServices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListEurekaServicesOutcomeCallable MseClient::listEurekaServicesCallable(const ListEurekaServicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEurekaServicesOutcome()>>(
			[this, request]()
			{
			return this->listEurekaServices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListGatewayOutcome MseClient::listGateway(const ListGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGatewayOutcome(ListGatewayResult(outcome.result()));
	else
		return ListGatewayOutcome(outcome.error());
}

void MseClient::listGatewayAsync(const ListGatewayRequest& request, const ListGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListGatewayOutcomeCallable MseClient::listGatewayCallable(const ListGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGatewayOutcome()>>(
			[this, request]()
			{
			return this->listGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListGatewayDomainOutcome MseClient::listGatewayDomain(const ListGatewayDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGatewayDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGatewayDomainOutcome(ListGatewayDomainResult(outcome.result()));
	else
		return ListGatewayDomainOutcome(outcome.error());
}

void MseClient::listGatewayDomainAsync(const ListGatewayDomainRequest& request, const ListGatewayDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGatewayDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListGatewayDomainOutcomeCallable MseClient::listGatewayDomainCallable(const ListGatewayDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGatewayDomainOutcome()>>(
			[this, request]()
			{
			return this->listGatewayDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListGatewayServiceOutcome MseClient::listGatewayService(const ListGatewayServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGatewayServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGatewayServiceOutcome(ListGatewayServiceResult(outcome.result()));
	else
		return ListGatewayServiceOutcome(outcome.error());
}

void MseClient::listGatewayServiceAsync(const ListGatewayServiceRequest& request, const ListGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGatewayService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListGatewayServiceOutcomeCallable MseClient::listGatewayServiceCallable(const ListGatewayServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGatewayServiceOutcome()>>(
			[this, request]()
			{
			return this->listGatewayService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListGatewaySlbOutcome MseClient::listGatewaySlb(const ListGatewaySlbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGatewaySlbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGatewaySlbOutcome(ListGatewaySlbResult(outcome.result()));
	else
		return ListGatewaySlbOutcome(outcome.error());
}

void MseClient::listGatewaySlbAsync(const ListGatewaySlbRequest& request, const ListGatewaySlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGatewaySlb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListGatewaySlbOutcomeCallable MseClient::listGatewaySlbCallable(const ListGatewaySlbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGatewaySlbOutcome()>>(
			[this, request]()
			{
			return this->listGatewaySlb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListListenersByConfigOutcome MseClient::listListenersByConfig(const ListListenersByConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListListenersByConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListListenersByConfigOutcome(ListListenersByConfigResult(outcome.result()));
	else
		return ListListenersByConfigOutcome(outcome.error());
}

void MseClient::listListenersByConfigAsync(const ListListenersByConfigRequest& request, const ListListenersByConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listListenersByConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListListenersByConfigOutcomeCallable MseClient::listListenersByConfigCallable(const ListListenersByConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListListenersByConfigOutcome()>>(
			[this, request]()
			{
			return this->listListenersByConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListListenersByIpOutcome MseClient::listListenersByIp(const ListListenersByIpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListListenersByIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListListenersByIpOutcome(ListListenersByIpResult(outcome.result()));
	else
		return ListListenersByIpOutcome(outcome.error());
}

void MseClient::listListenersByIpAsync(const ListListenersByIpRequest& request, const ListListenersByIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listListenersByIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListListenersByIpOutcomeCallable MseClient::listListenersByIpCallable(const ListListenersByIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListListenersByIpOutcome()>>(
			[this, request]()
			{
			return this->listListenersByIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListNacosConfigsOutcome MseClient::listNacosConfigs(const ListNacosConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNacosConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNacosConfigsOutcome(ListNacosConfigsResult(outcome.result()));
	else
		return ListNacosConfigsOutcome(outcome.error());
}

void MseClient::listNacosConfigsAsync(const ListNacosConfigsRequest& request, const ListNacosConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNacosConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListNacosConfigsOutcomeCallable MseClient::listNacosConfigsCallable(const ListNacosConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNacosConfigsOutcome()>>(
			[this, request]()
			{
			return this->listNacosConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListNacosHistoryConfigsOutcome MseClient::listNacosHistoryConfigs(const ListNacosHistoryConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNacosHistoryConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNacosHistoryConfigsOutcome(ListNacosHistoryConfigsResult(outcome.result()));
	else
		return ListNacosHistoryConfigsOutcome(outcome.error());
}

void MseClient::listNacosHistoryConfigsAsync(const ListNacosHistoryConfigsRequest& request, const ListNacosHistoryConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNacosHistoryConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListNacosHistoryConfigsOutcomeCallable MseClient::listNacosHistoryConfigsCallable(const ListNacosHistoryConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNacosHistoryConfigsOutcome()>>(
			[this, request]()
			{
			return this->listNacosHistoryConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListSSLCertOutcome MseClient::listSSLCert(const ListSSLCertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSSLCertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSSLCertOutcome(ListSSLCertResult(outcome.result()));
	else
		return ListSSLCertOutcome(outcome.error());
}

void MseClient::listSSLCertAsync(const ListSSLCertRequest& request, const ListSSLCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSSLCert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListSSLCertOutcomeCallable MseClient::listSSLCertCallable(const ListSSLCertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSSLCertOutcome()>>(
			[this, request]()
			{
			return this->listSSLCert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListServiceSourceOutcome MseClient::listServiceSource(const ListServiceSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListServiceSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListServiceSourceOutcome(ListServiceSourceResult(outcome.result()));
	else
		return ListServiceSourceOutcome(outcome.error());
}

void MseClient::listServiceSourceAsync(const ListServiceSourceRequest& request, const ListServiceSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listServiceSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListServiceSourceOutcomeCallable MseClient::listServiceSourceCallable(const ListServiceSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListServiceSourceOutcome()>>(
			[this, request]()
			{
			return this->listServiceSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ListZnodeChildrenOutcome MseClient::listZnodeChildren(const ListZnodeChildrenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListZnodeChildrenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListZnodeChildrenOutcome(ListZnodeChildrenResult(outcome.result()));
	else
		return ListZnodeChildrenOutcome(outcome.error());
}

void MseClient::listZnodeChildrenAsync(const ListZnodeChildrenRequest& request, const ListZnodeChildrenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listZnodeChildren(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ListZnodeChildrenOutcomeCallable MseClient::listZnodeChildrenCallable(const ListZnodeChildrenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListZnodeChildrenOutcome()>>(
			[this, request]()
			{
			return this->listZnodeChildren(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ModifyGovernanceKubernetesClusterOutcome MseClient::modifyGovernanceKubernetesCluster(const ModifyGovernanceKubernetesClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyGovernanceKubernetesClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyGovernanceKubernetesClusterOutcome(ModifyGovernanceKubernetesClusterResult(outcome.result()));
	else
		return ModifyGovernanceKubernetesClusterOutcome(outcome.error());
}

void MseClient::modifyGovernanceKubernetesClusterAsync(const ModifyGovernanceKubernetesClusterRequest& request, const ModifyGovernanceKubernetesClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGovernanceKubernetesCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ModifyGovernanceKubernetesClusterOutcomeCallable MseClient::modifyGovernanceKubernetesClusterCallable(const ModifyGovernanceKubernetesClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGovernanceKubernetesClusterOutcome()>>(
			[this, request]()
			{
			return this->modifyGovernanceKubernetesCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::PullServicesOutcome MseClient::pullServices(const PullServicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PullServicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PullServicesOutcome(PullServicesResult(outcome.result()));
	else
		return PullServicesOutcome(outcome.error());
}

void MseClient::pullServicesAsync(const PullServicesRequest& request, const PullServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pullServices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::PullServicesOutcomeCallable MseClient::pullServicesCallable(const PullServicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PullServicesOutcome()>>(
			[this, request]()
			{
			return this->pullServices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::QueryBusinessLocationsOutcome MseClient::queryBusinessLocations(const QueryBusinessLocationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryBusinessLocationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryBusinessLocationsOutcome(QueryBusinessLocationsResult(outcome.result()));
	else
		return QueryBusinessLocationsOutcome(outcome.error());
}

void MseClient::queryBusinessLocationsAsync(const QueryBusinessLocationsRequest& request, const QueryBusinessLocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryBusinessLocations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::QueryBusinessLocationsOutcomeCallable MseClient::queryBusinessLocationsCallable(const QueryBusinessLocationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryBusinessLocationsOutcome()>>(
			[this, request]()
			{
			return this->queryBusinessLocations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::QueryClusterDetailOutcome MseClient::queryClusterDetail(const QueryClusterDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryClusterDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryClusterDetailOutcome(QueryClusterDetailResult(outcome.result()));
	else
		return QueryClusterDetailOutcome(outcome.error());
}

void MseClient::queryClusterDetailAsync(const QueryClusterDetailRequest& request, const QueryClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryClusterDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::QueryClusterDetailOutcomeCallable MseClient::queryClusterDetailCallable(const QueryClusterDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryClusterDetailOutcome()>>(
			[this, request]()
			{
			return this->queryClusterDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::QueryClusterDiskSpecificationOutcome MseClient::queryClusterDiskSpecification(const QueryClusterDiskSpecificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryClusterDiskSpecificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryClusterDiskSpecificationOutcome(QueryClusterDiskSpecificationResult(outcome.result()));
	else
		return QueryClusterDiskSpecificationOutcome(outcome.error());
}

void MseClient::queryClusterDiskSpecificationAsync(const QueryClusterDiskSpecificationRequest& request, const QueryClusterDiskSpecificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryClusterDiskSpecification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::QueryClusterDiskSpecificationOutcomeCallable MseClient::queryClusterDiskSpecificationCallable(const QueryClusterDiskSpecificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryClusterDiskSpecificationOutcome()>>(
			[this, request]()
			{
			return this->queryClusterDiskSpecification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::QueryClusterSpecificationOutcome MseClient::queryClusterSpecification(const QueryClusterSpecificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryClusterSpecificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryClusterSpecificationOutcome(QueryClusterSpecificationResult(outcome.result()));
	else
		return QueryClusterSpecificationOutcome(outcome.error());
}

void MseClient::queryClusterSpecificationAsync(const QueryClusterSpecificationRequest& request, const QueryClusterSpecificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryClusterSpecification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::QueryClusterSpecificationOutcomeCallable MseClient::queryClusterSpecificationCallable(const QueryClusterSpecificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryClusterSpecificationOutcome()>>(
			[this, request]()
			{
			return this->queryClusterSpecification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::QueryConfigOutcome MseClient::queryConfig(const QueryConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryConfigOutcome(QueryConfigResult(outcome.result()));
	else
		return QueryConfigOutcome(outcome.error());
}

void MseClient::queryConfigAsync(const QueryConfigRequest& request, const QueryConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::QueryConfigOutcomeCallable MseClient::queryConfigCallable(const QueryConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryConfigOutcome()>>(
			[this, request]()
			{
			return this->queryConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::QueryGatewayRegionOutcome MseClient::queryGatewayRegion(const QueryGatewayRegionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryGatewayRegionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryGatewayRegionOutcome(QueryGatewayRegionResult(outcome.result()));
	else
		return QueryGatewayRegionOutcome(outcome.error());
}

void MseClient::queryGatewayRegionAsync(const QueryGatewayRegionRequest& request, const QueryGatewayRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryGatewayRegion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::QueryGatewayRegionOutcomeCallable MseClient::queryGatewayRegionCallable(const QueryGatewayRegionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryGatewayRegionOutcome()>>(
			[this, request]()
			{
			return this->queryGatewayRegion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::QueryGatewayTypeOutcome MseClient::queryGatewayType(const QueryGatewayTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryGatewayTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryGatewayTypeOutcome(QueryGatewayTypeResult(outcome.result()));
	else
		return QueryGatewayTypeOutcome(outcome.error());
}

void MseClient::queryGatewayTypeAsync(const QueryGatewayTypeRequest& request, const QueryGatewayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryGatewayType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::QueryGatewayTypeOutcomeCallable MseClient::queryGatewayTypeCallable(const QueryGatewayTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryGatewayTypeOutcome()>>(
			[this, request]()
			{
			return this->queryGatewayType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::QueryGovernanceKubernetesClusterOutcome MseClient::queryGovernanceKubernetesCluster(const QueryGovernanceKubernetesClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryGovernanceKubernetesClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryGovernanceKubernetesClusterOutcome(QueryGovernanceKubernetesClusterResult(outcome.result()));
	else
		return QueryGovernanceKubernetesClusterOutcome(outcome.error());
}

void MseClient::queryGovernanceKubernetesClusterAsync(const QueryGovernanceKubernetesClusterRequest& request, const QueryGovernanceKubernetesClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryGovernanceKubernetesCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::QueryGovernanceKubernetesClusterOutcomeCallable MseClient::queryGovernanceKubernetesClusterCallable(const QueryGovernanceKubernetesClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryGovernanceKubernetesClusterOutcome()>>(
			[this, request]()
			{
			return this->queryGovernanceKubernetesCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::QueryMonitorOutcome MseClient::queryMonitor(const QueryMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMonitorOutcome(QueryMonitorResult(outcome.result()));
	else
		return QueryMonitorOutcome(outcome.error());
}

void MseClient::queryMonitorAsync(const QueryMonitorRequest& request, const QueryMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::QueryMonitorOutcomeCallable MseClient::queryMonitorCallable(const QueryMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMonitorOutcome()>>(
			[this, request]()
			{
			return this->queryMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::QuerySlbSpecOutcome MseClient::querySlbSpec(const QuerySlbSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySlbSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySlbSpecOutcome(QuerySlbSpecResult(outcome.result()));
	else
		return QuerySlbSpecOutcome(outcome.error());
}

void MseClient::querySlbSpecAsync(const QuerySlbSpecRequest& request, const QuerySlbSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySlbSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::QuerySlbSpecOutcomeCallable MseClient::querySlbSpecCallable(const QuerySlbSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySlbSpecOutcome()>>(
			[this, request]()
			{
			return this->querySlbSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::QueryZnodeDetailOutcome MseClient::queryZnodeDetail(const QueryZnodeDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryZnodeDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryZnodeDetailOutcome(QueryZnodeDetailResult(outcome.result()));
	else
		return QueryZnodeDetailOutcome(outcome.error());
}

void MseClient::queryZnodeDetailAsync(const QueryZnodeDetailRequest& request, const QueryZnodeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryZnodeDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::QueryZnodeDetailOutcomeCallable MseClient::queryZnodeDetailCallable(const QueryZnodeDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryZnodeDetailOutcome()>>(
			[this, request]()
			{
			return this->queryZnodeDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::RestartClusterOutcome MseClient::restartCluster(const RestartClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartClusterOutcome(RestartClusterResult(outcome.result()));
	else
		return RestartClusterOutcome(outcome.error());
}

void MseClient::restartClusterAsync(const RestartClusterRequest& request, const RestartClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::RestartClusterOutcomeCallable MseClient::restartClusterCallable(const RestartClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartClusterOutcome()>>(
			[this, request]()
			{
			return this->restartCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::RetryClusterOutcome MseClient::retryCluster(const RetryClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RetryClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RetryClusterOutcome(RetryClusterResult(outcome.result()));
	else
		return RetryClusterOutcome(outcome.error());
}

void MseClient::retryClusterAsync(const RetryClusterRequest& request, const RetryClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, retryCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::RetryClusterOutcomeCallable MseClient::retryClusterCallable(const RetryClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RetryClusterOutcome()>>(
			[this, request]()
			{
			return this->retryCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::ScalingClusterOutcome MseClient::scalingCluster(const ScalingClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ScalingClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ScalingClusterOutcome(ScalingClusterResult(outcome.result()));
	else
		return ScalingClusterOutcome(outcome.error());
}

void MseClient::scalingClusterAsync(const ScalingClusterRequest& request, const ScalingClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, scalingCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::ScalingClusterOutcomeCallable MseClient::scalingClusterCallable(const ScalingClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ScalingClusterOutcome()>>(
			[this, request]()
			{
			return this->scalingCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::SelectGatewaySlbOutcome MseClient::selectGatewaySlb(const SelectGatewaySlbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SelectGatewaySlbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SelectGatewaySlbOutcome(SelectGatewaySlbResult(outcome.result()));
	else
		return SelectGatewaySlbOutcome(outcome.error());
}

void MseClient::selectGatewaySlbAsync(const SelectGatewaySlbRequest& request, const SelectGatewaySlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, selectGatewaySlb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::SelectGatewaySlbOutcomeCallable MseClient::selectGatewaySlbCallable(const SelectGatewaySlbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SelectGatewaySlbOutcome()>>(
			[this, request]()
			{
			return this->selectGatewaySlb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateAclOutcome MseClient::updateAcl(const UpdateAclRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAclOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAclOutcome(UpdateAclResult(outcome.result()));
	else
		return UpdateAclOutcome(outcome.error());
}

void MseClient::updateAclAsync(const UpdateAclRequest& request, const UpdateAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateAclOutcomeCallable MseClient::updateAclCallable(const UpdateAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAclOutcome()>>(
			[this, request]()
			{
			return this->updateAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateBlackWhiteListOutcome MseClient::updateBlackWhiteList(const UpdateBlackWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateBlackWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateBlackWhiteListOutcome(UpdateBlackWhiteListResult(outcome.result()));
	else
		return UpdateBlackWhiteListOutcome(outcome.error());
}

void MseClient::updateBlackWhiteListAsync(const UpdateBlackWhiteListRequest& request, const UpdateBlackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateBlackWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateBlackWhiteListOutcomeCallable MseClient::updateBlackWhiteListCallable(const UpdateBlackWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateBlackWhiteListOutcome()>>(
			[this, request]()
			{
			return this->updateBlackWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateClusterOutcome MseClient::updateCluster(const UpdateClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateClusterOutcome(UpdateClusterResult(outcome.result()));
	else
		return UpdateClusterOutcome(outcome.error());
}

void MseClient::updateClusterAsync(const UpdateClusterRequest& request, const UpdateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateClusterOutcomeCallable MseClient::updateClusterCallable(const UpdateClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateClusterOutcome()>>(
			[this, request]()
			{
			return this->updateCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateConfigOutcome MseClient::updateConfig(const UpdateConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateConfigOutcome(UpdateConfigResult(outcome.result()));
	else
		return UpdateConfigOutcome(outcome.error());
}

void MseClient::updateConfigAsync(const UpdateConfigRequest& request, const UpdateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateConfigOutcomeCallable MseClient::updateConfigCallable(const UpdateConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateConfigOutcome()>>(
			[this, request]()
			{
			return this->updateConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateEngineNamespaceOutcome MseClient::updateEngineNamespace(const UpdateEngineNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEngineNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEngineNamespaceOutcome(UpdateEngineNamespaceResult(outcome.result()));
	else
		return UpdateEngineNamespaceOutcome(outcome.error());
}

void MseClient::updateEngineNamespaceAsync(const UpdateEngineNamespaceRequest& request, const UpdateEngineNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEngineNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateEngineNamespaceOutcomeCallable MseClient::updateEngineNamespaceCallable(const UpdateEngineNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEngineNamespaceOutcome()>>(
			[this, request]()
			{
			return this->updateEngineNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateGatewayDomainOutcome MseClient::updateGatewayDomain(const UpdateGatewayDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGatewayDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGatewayDomainOutcome(UpdateGatewayDomainResult(outcome.result()));
	else
		return UpdateGatewayDomainOutcome(outcome.error());
}

void MseClient::updateGatewayDomainAsync(const UpdateGatewayDomainRequest& request, const UpdateGatewayDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGatewayDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateGatewayDomainOutcomeCallable MseClient::updateGatewayDomainCallable(const UpdateGatewayDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGatewayDomainOutcome()>>(
			[this, request]()
			{
			return this->updateGatewayDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateGatewayNameOutcome MseClient::updateGatewayName(const UpdateGatewayNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGatewayNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGatewayNameOutcome(UpdateGatewayNameResult(outcome.result()));
	else
		return UpdateGatewayNameOutcome(outcome.error());
}

void MseClient::updateGatewayNameAsync(const UpdateGatewayNameRequest& request, const UpdateGatewayNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGatewayName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateGatewayNameOutcomeCallable MseClient::updateGatewayNameCallable(const UpdateGatewayNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGatewayNameOutcome()>>(
			[this, request]()
			{
			return this->updateGatewayName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateGatewayOptionOutcome MseClient::updateGatewayOption(const UpdateGatewayOptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGatewayOptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGatewayOptionOutcome(UpdateGatewayOptionResult(outcome.result()));
	else
		return UpdateGatewayOptionOutcome(outcome.error());
}

void MseClient::updateGatewayOptionAsync(const UpdateGatewayOptionRequest& request, const UpdateGatewayOptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGatewayOption(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateGatewayOptionOutcomeCallable MseClient::updateGatewayOptionCallable(const UpdateGatewayOptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGatewayOptionOutcome()>>(
			[this, request]()
			{
			return this->updateGatewayOption(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateGatewayRouteHTTPRewriteOutcome MseClient::updateGatewayRouteHTTPRewrite(const UpdateGatewayRouteHTTPRewriteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGatewayRouteHTTPRewriteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGatewayRouteHTTPRewriteOutcome(UpdateGatewayRouteHTTPRewriteResult(outcome.result()));
	else
		return UpdateGatewayRouteHTTPRewriteOutcome(outcome.error());
}

void MseClient::updateGatewayRouteHTTPRewriteAsync(const UpdateGatewayRouteHTTPRewriteRequest& request, const UpdateGatewayRouteHTTPRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGatewayRouteHTTPRewrite(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateGatewayRouteHTTPRewriteOutcomeCallable MseClient::updateGatewayRouteHTTPRewriteCallable(const UpdateGatewayRouteHTTPRewriteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGatewayRouteHTTPRewriteOutcome()>>(
			[this, request]()
			{
			return this->updateGatewayRouteHTTPRewrite(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateGatewayServiceVersionOutcome MseClient::updateGatewayServiceVersion(const UpdateGatewayServiceVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGatewayServiceVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGatewayServiceVersionOutcome(UpdateGatewayServiceVersionResult(outcome.result()));
	else
		return UpdateGatewayServiceVersionOutcome(outcome.error());
}

void MseClient::updateGatewayServiceVersionAsync(const UpdateGatewayServiceVersionRequest& request, const UpdateGatewayServiceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGatewayServiceVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateGatewayServiceVersionOutcomeCallable MseClient::updateGatewayServiceVersionCallable(const UpdateGatewayServiceVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGatewayServiceVersionOutcome()>>(
			[this, request]()
			{
			return this->updateGatewayServiceVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateImageOutcome MseClient::updateImage(const UpdateImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateImageOutcome(UpdateImageResult(outcome.result()));
	else
		return UpdateImageOutcome(outcome.error());
}

void MseClient::updateImageAsync(const UpdateImageRequest& request, const UpdateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateImageOutcomeCallable MseClient::updateImageCallable(const UpdateImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateImageOutcome()>>(
			[this, request]()
			{
			return this->updateImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateNacosClusterOutcome MseClient::updateNacosCluster(const UpdateNacosClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateNacosClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateNacosClusterOutcome(UpdateNacosClusterResult(outcome.result()));
	else
		return UpdateNacosClusterOutcome(outcome.error());
}

void MseClient::updateNacosClusterAsync(const UpdateNacosClusterRequest& request, const UpdateNacosClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateNacosCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateNacosClusterOutcomeCallable MseClient::updateNacosClusterCallable(const UpdateNacosClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateNacosClusterOutcome()>>(
			[this, request]()
			{
			return this->updateNacosCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateNacosConfigOutcome MseClient::updateNacosConfig(const UpdateNacosConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateNacosConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateNacosConfigOutcome(UpdateNacosConfigResult(outcome.result()));
	else
		return UpdateNacosConfigOutcome(outcome.error());
}

void MseClient::updateNacosConfigAsync(const UpdateNacosConfigRequest& request, const UpdateNacosConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateNacosConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateNacosConfigOutcomeCallable MseClient::updateNacosConfigCallable(const UpdateNacosConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateNacosConfigOutcome()>>(
			[this, request]()
			{
			return this->updateNacosConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateNacosInstanceOutcome MseClient::updateNacosInstance(const UpdateNacosInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateNacosInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateNacosInstanceOutcome(UpdateNacosInstanceResult(outcome.result()));
	else
		return UpdateNacosInstanceOutcome(outcome.error());
}

void MseClient::updateNacosInstanceAsync(const UpdateNacosInstanceRequest& request, const UpdateNacosInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateNacosInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateNacosInstanceOutcomeCallable MseClient::updateNacosInstanceCallable(const UpdateNacosInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateNacosInstanceOutcome()>>(
			[this, request]()
			{
			return this->updateNacosInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateNacosServiceOutcome MseClient::updateNacosService(const UpdateNacosServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateNacosServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateNacosServiceOutcome(UpdateNacosServiceResult(outcome.result()));
	else
		return UpdateNacosServiceOutcome(outcome.error());
}

void MseClient::updateNacosServiceAsync(const UpdateNacosServiceRequest& request, const UpdateNacosServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateNacosService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateNacosServiceOutcomeCallable MseClient::updateNacosServiceCallable(const UpdateNacosServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateNacosServiceOutcome()>>(
			[this, request]()
			{
			return this->updateNacosService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateSSLCertOutcome MseClient::updateSSLCert(const UpdateSSLCertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSSLCertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSSLCertOutcome(UpdateSSLCertResult(outcome.result()));
	else
		return UpdateSSLCertOutcome(outcome.error());
}

void MseClient::updateSSLCertAsync(const UpdateSSLCertRequest& request, const UpdateSSLCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSSLCert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateSSLCertOutcomeCallable MseClient::updateSSLCertCallable(const UpdateSSLCertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSSLCertOutcome()>>(
			[this, request]()
			{
			return this->updateSSLCert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpdateZnodeOutcome MseClient::updateZnode(const UpdateZnodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateZnodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateZnodeOutcome(UpdateZnodeResult(outcome.result()));
	else
		return UpdateZnodeOutcome(outcome.error());
}

void MseClient::updateZnodeAsync(const UpdateZnodeRequest& request, const UpdateZnodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateZnode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpdateZnodeOutcomeCallable MseClient::updateZnodeCallable(const UpdateZnodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateZnodeOutcome()>>(
			[this, request]()
			{
			return this->updateZnode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseClient::UpgradeClusterOutcome MseClient::upgradeCluster(const UpgradeClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeClusterOutcome(UpgradeClusterResult(outcome.result()));
	else
		return UpgradeClusterOutcome(outcome.error());
}

void MseClient::upgradeClusterAsync(const UpgradeClusterRequest& request, const UpgradeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseClient::UpgradeClusterOutcomeCallable MseClient::upgradeClusterCallable(const UpgradeClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeClusterOutcome()>>(
			[this, request]()
			{
			return this->upgradeCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

