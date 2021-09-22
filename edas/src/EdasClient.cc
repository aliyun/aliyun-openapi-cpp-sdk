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

#include <alibabacloud/edas/EdasClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

namespace
{
	const std::string SERVICE_NAME = "Edas";
}

EdasClient::EdasClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "Edas");
}

EdasClient::EdasClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "Edas");
}

EdasClient::EdasClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "Edas");
}

EdasClient::~EdasClient()
{}

EdasClient::AbortAndRollbackChangeOrderOutcome EdasClient::abortAndRollbackChangeOrder(const AbortAndRollbackChangeOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AbortAndRollbackChangeOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AbortAndRollbackChangeOrderOutcome(AbortAndRollbackChangeOrderResult(outcome.result()));
	else
		return AbortAndRollbackChangeOrderOutcome(outcome.error());
}

void EdasClient::abortAndRollbackChangeOrderAsync(const AbortAndRollbackChangeOrderRequest& request, const AbortAndRollbackChangeOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, abortAndRollbackChangeOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::AbortAndRollbackChangeOrderOutcomeCallable EdasClient::abortAndRollbackChangeOrderCallable(const AbortAndRollbackChangeOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AbortAndRollbackChangeOrderOutcome()>>(
			[this, request]()
			{
			return this->abortAndRollbackChangeOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::AbortChangeOrderOutcome EdasClient::abortChangeOrder(const AbortChangeOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AbortChangeOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AbortChangeOrderOutcome(AbortChangeOrderResult(outcome.result()));
	else
		return AbortChangeOrderOutcome(outcome.error());
}

void EdasClient::abortChangeOrderAsync(const AbortChangeOrderRequest& request, const AbortChangeOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, abortChangeOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::AbortChangeOrderOutcomeCallable EdasClient::abortChangeOrderCallable(const AbortChangeOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AbortChangeOrderOutcome()>>(
			[this, request]()
			{
			return this->abortChangeOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::AddLogPathOutcome EdasClient::addLogPath(const AddLogPathRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLogPathOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLogPathOutcome(AddLogPathResult(outcome.result()));
	else
		return AddLogPathOutcome(outcome.error());
}

void EdasClient::addLogPathAsync(const AddLogPathRequest& request, const AddLogPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLogPath(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::AddLogPathOutcomeCallable EdasClient::addLogPathCallable(const AddLogPathRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLogPathOutcome()>>(
			[this, request]()
			{
			return this->addLogPath(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::AddMockRuleOutcome EdasClient::addMockRule(const AddMockRuleRequest &request) const
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

void EdasClient::addMockRuleAsync(const AddMockRuleRequest& request, const AddMockRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addMockRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::AddMockRuleOutcomeCallable EdasClient::addMockRuleCallable(const AddMockRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddMockRuleOutcome()>>(
			[this, request]()
			{
			return this->addMockRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::AddServiceTimeConfigOutcome EdasClient::addServiceTimeConfig(const AddServiceTimeConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddServiceTimeConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddServiceTimeConfigOutcome(AddServiceTimeConfigResult(outcome.result()));
	else
		return AddServiceTimeConfigOutcome(outcome.error());
}

void EdasClient::addServiceTimeConfigAsync(const AddServiceTimeConfigRequest& request, const AddServiceTimeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addServiceTimeConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::AddServiceTimeConfigOutcomeCallable EdasClient::addServiceTimeConfigCallable(const AddServiceTimeConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddServiceTimeConfigOutcome()>>(
			[this, request]()
			{
			return this->addServiceTimeConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::AuthorizeApplicationOutcome EdasClient::authorizeApplication(const AuthorizeApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AuthorizeApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AuthorizeApplicationOutcome(AuthorizeApplicationResult(outcome.result()));
	else
		return AuthorizeApplicationOutcome(outcome.error());
}

void EdasClient::authorizeApplicationAsync(const AuthorizeApplicationRequest& request, const AuthorizeApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, authorizeApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::AuthorizeApplicationOutcomeCallable EdasClient::authorizeApplicationCallable(const AuthorizeApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AuthorizeApplicationOutcome()>>(
			[this, request]()
			{
			return this->authorizeApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::AuthorizeResourceGroupOutcome EdasClient::authorizeResourceGroup(const AuthorizeResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AuthorizeResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AuthorizeResourceGroupOutcome(AuthorizeResourceGroupResult(outcome.result()));
	else
		return AuthorizeResourceGroupOutcome(outcome.error());
}

void EdasClient::authorizeResourceGroupAsync(const AuthorizeResourceGroupRequest& request, const AuthorizeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, authorizeResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::AuthorizeResourceGroupOutcomeCallable EdasClient::authorizeResourceGroupCallable(const AuthorizeResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AuthorizeResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->authorizeResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::AuthorizeRoleOutcome EdasClient::authorizeRole(const AuthorizeRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AuthorizeRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AuthorizeRoleOutcome(AuthorizeRoleResult(outcome.result()));
	else
		return AuthorizeRoleOutcome(outcome.error());
}

void EdasClient::authorizeRoleAsync(const AuthorizeRoleRequest& request, const AuthorizeRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, authorizeRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::AuthorizeRoleOutcomeCallable EdasClient::authorizeRoleCallable(const AuthorizeRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AuthorizeRoleOutcome()>>(
			[this, request]()
			{
			return this->authorizeRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::BindEcsSlbOutcome EdasClient::bindEcsSlb(const BindEcsSlbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindEcsSlbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindEcsSlbOutcome(BindEcsSlbResult(outcome.result()));
	else
		return BindEcsSlbOutcome(outcome.error());
}

void EdasClient::bindEcsSlbAsync(const BindEcsSlbRequest& request, const BindEcsSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindEcsSlb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::BindEcsSlbOutcomeCallable EdasClient::bindEcsSlbCallable(const BindEcsSlbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindEcsSlbOutcome()>>(
			[this, request]()
			{
			return this->bindEcsSlb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::BindK8sSlbOutcome EdasClient::bindK8sSlb(const BindK8sSlbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindK8sSlbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindK8sSlbOutcome(BindK8sSlbResult(outcome.result()));
	else
		return BindK8sSlbOutcome(outcome.error());
}

void EdasClient::bindK8sSlbAsync(const BindK8sSlbRequest& request, const BindK8sSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindK8sSlb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::BindK8sSlbOutcomeCallable EdasClient::bindK8sSlbCallable(const BindK8sSlbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindK8sSlbOutcome()>>(
			[this, request]()
			{
			return this->bindK8sSlb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::BindSlbOutcome EdasClient::bindSlb(const BindSlbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindSlbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindSlbOutcome(BindSlbResult(outcome.result()));
	else
		return BindSlbOutcome(outcome.error());
}

void EdasClient::bindSlbAsync(const BindSlbRequest& request, const BindSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindSlb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::BindSlbOutcomeCallable EdasClient::bindSlbCallable(const BindSlbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindSlbOutcome()>>(
			[this, request]()
			{
			return this->bindSlb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ChangeDeployGroupOutcome EdasClient::changeDeployGroup(const ChangeDeployGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeDeployGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeDeployGroupOutcome(ChangeDeployGroupResult(outcome.result()));
	else
		return ChangeDeployGroupOutcome(outcome.error());
}

void EdasClient::changeDeployGroupAsync(const ChangeDeployGroupRequest& request, const ChangeDeployGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeDeployGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ChangeDeployGroupOutcomeCallable EdasClient::changeDeployGroupCallable(const ChangeDeployGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeDeployGroupOutcome()>>(
			[this, request]()
			{
			return this->changeDeployGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ContinuePipelineOutcome EdasClient::continuePipeline(const ContinuePipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ContinuePipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ContinuePipelineOutcome(ContinuePipelineResult(outcome.result()));
	else
		return ContinuePipelineOutcome(outcome.error());
}

void EdasClient::continuePipelineAsync(const ContinuePipelineRequest& request, const ContinuePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, continuePipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ContinuePipelineOutcomeCallable EdasClient::continuePipelineCallable(const ContinuePipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ContinuePipelineOutcome()>>(
			[this, request]()
			{
			return this->continuePipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ConvertK8sResourceOutcome EdasClient::convertK8sResource(const ConvertK8sResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConvertK8sResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConvertK8sResourceOutcome(ConvertK8sResourceResult(outcome.result()));
	else
		return ConvertK8sResourceOutcome(outcome.error());
}

void EdasClient::convertK8sResourceAsync(const ConvertK8sResourceRequest& request, const ConvertK8sResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, convertK8sResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ConvertK8sResourceOutcomeCallable EdasClient::convertK8sResourceCallable(const ConvertK8sResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConvertK8sResourceOutcome()>>(
			[this, request]()
			{
			return this->convertK8sResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::CreateApplicationScalingRuleOutcome EdasClient::createApplicationScalingRule(const CreateApplicationScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateApplicationScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateApplicationScalingRuleOutcome(CreateApplicationScalingRuleResult(outcome.result()));
	else
		return CreateApplicationScalingRuleOutcome(outcome.error());
}

void EdasClient::createApplicationScalingRuleAsync(const CreateApplicationScalingRuleRequest& request, const CreateApplicationScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApplicationScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::CreateApplicationScalingRuleOutcomeCallable EdasClient::createApplicationScalingRuleCallable(const CreateApplicationScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateApplicationScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->createApplicationScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::CreateApplicationTemplateOutcome EdasClient::createApplicationTemplate(const CreateApplicationTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateApplicationTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateApplicationTemplateOutcome(CreateApplicationTemplateResult(outcome.result()));
	else
		return CreateApplicationTemplateOutcome(outcome.error());
}

void EdasClient::createApplicationTemplateAsync(const CreateApplicationTemplateRequest& request, const CreateApplicationTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApplicationTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::CreateApplicationTemplateOutcomeCallable EdasClient::createApplicationTemplateCallable(const CreateApplicationTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateApplicationTemplateOutcome()>>(
			[this, request]()
			{
			return this->createApplicationTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::CreateEnvAppGroupOutcome EdasClient::createEnvAppGroup(const CreateEnvAppGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEnvAppGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEnvAppGroupOutcome(CreateEnvAppGroupResult(outcome.result()));
	else
		return CreateEnvAppGroupOutcome(outcome.error());
}

void EdasClient::createEnvAppGroupAsync(const CreateEnvAppGroupRequest& request, const CreateEnvAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEnvAppGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::CreateEnvAppGroupOutcomeCallable EdasClient::createEnvAppGroupCallable(const CreateEnvAppGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEnvAppGroupOutcome()>>(
			[this, request]()
			{
			return this->createEnvAppGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::CreateEnvHsfTrafficControlOutcome EdasClient::createEnvHsfTrafficControl(const CreateEnvHsfTrafficControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEnvHsfTrafficControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEnvHsfTrafficControlOutcome(CreateEnvHsfTrafficControlResult(outcome.result()));
	else
		return CreateEnvHsfTrafficControlOutcome(outcome.error());
}

void EdasClient::createEnvHsfTrafficControlAsync(const CreateEnvHsfTrafficControlRequest& request, const CreateEnvHsfTrafficControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEnvHsfTrafficControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::CreateEnvHsfTrafficControlOutcomeCallable EdasClient::createEnvHsfTrafficControlCallable(const CreateEnvHsfTrafficControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEnvHsfTrafficControlOutcome()>>(
			[this, request]()
			{
			return this->createEnvHsfTrafficControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::CreateEnvHttpTrafficControlOutcome EdasClient::createEnvHttpTrafficControl(const CreateEnvHttpTrafficControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEnvHttpTrafficControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEnvHttpTrafficControlOutcome(CreateEnvHttpTrafficControlResult(outcome.result()));
	else
		return CreateEnvHttpTrafficControlOutcome(outcome.error());
}

void EdasClient::createEnvHttpTrafficControlAsync(const CreateEnvHttpTrafficControlRequest& request, const CreateEnvHttpTrafficControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEnvHttpTrafficControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::CreateEnvHttpTrafficControlOutcomeCallable EdasClient::createEnvHttpTrafficControlCallable(const CreateEnvHttpTrafficControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEnvHttpTrafficControlOutcome()>>(
			[this, request]()
			{
			return this->createEnvHttpTrafficControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::CreateGrayEnvironmentOutcome EdasClient::createGrayEnvironment(const CreateGrayEnvironmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGrayEnvironmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGrayEnvironmentOutcome(CreateGrayEnvironmentResult(outcome.result()));
	else
		return CreateGrayEnvironmentOutcome(outcome.error());
}

void EdasClient::createGrayEnvironmentAsync(const CreateGrayEnvironmentRequest& request, const CreateGrayEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGrayEnvironment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::CreateGrayEnvironmentOutcomeCallable EdasClient::createGrayEnvironmentCallable(const CreateGrayEnvironmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGrayEnvironmentOutcome()>>(
			[this, request]()
			{
			return this->createGrayEnvironment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::CreateIDCImportCommandOutcome EdasClient::createIDCImportCommand(const CreateIDCImportCommandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateIDCImportCommandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateIDCImportCommandOutcome(CreateIDCImportCommandResult(outcome.result()));
	else
		return CreateIDCImportCommandOutcome(outcome.error());
}

void EdasClient::createIDCImportCommandAsync(const CreateIDCImportCommandRequest& request, const CreateIDCImportCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createIDCImportCommand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::CreateIDCImportCommandOutcomeCallable EdasClient::createIDCImportCommandCallable(const CreateIDCImportCommandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateIDCImportCommandOutcome()>>(
			[this, request]()
			{
			return this->createIDCImportCommand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::CreateK8sConfigMapOutcome EdasClient::createK8sConfigMap(const CreateK8sConfigMapRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateK8sConfigMapOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateK8sConfigMapOutcome(CreateK8sConfigMapResult(outcome.result()));
	else
		return CreateK8sConfigMapOutcome(outcome.error());
}

void EdasClient::createK8sConfigMapAsync(const CreateK8sConfigMapRequest& request, const CreateK8sConfigMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createK8sConfigMap(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::CreateK8sConfigMapOutcomeCallable EdasClient::createK8sConfigMapCallable(const CreateK8sConfigMapRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateK8sConfigMapOutcome()>>(
			[this, request]()
			{
			return this->createK8sConfigMap(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::CreateK8sIngressRuleOutcome EdasClient::createK8sIngressRule(const CreateK8sIngressRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateK8sIngressRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateK8sIngressRuleOutcome(CreateK8sIngressRuleResult(outcome.result()));
	else
		return CreateK8sIngressRuleOutcome(outcome.error());
}

void EdasClient::createK8sIngressRuleAsync(const CreateK8sIngressRuleRequest& request, const CreateK8sIngressRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createK8sIngressRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::CreateK8sIngressRuleOutcomeCallable EdasClient::createK8sIngressRuleCallable(const CreateK8sIngressRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateK8sIngressRuleOutcome()>>(
			[this, request]()
			{
			return this->createK8sIngressRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::CreateK8sSecretOutcome EdasClient::createK8sSecret(const CreateK8sSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateK8sSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateK8sSecretOutcome(CreateK8sSecretResult(outcome.result()));
	else
		return CreateK8sSecretOutcome(outcome.error());
}

void EdasClient::createK8sSecretAsync(const CreateK8sSecretRequest& request, const CreateK8sSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createK8sSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::CreateK8sSecretOutcomeCallable EdasClient::createK8sSecretCallable(const CreateK8sSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateK8sSecretOutcome()>>(
			[this, request]()
			{
			return this->createK8sSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::CreateK8sServiceOutcome EdasClient::createK8sService(const CreateK8sServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateK8sServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateK8sServiceOutcome(CreateK8sServiceResult(outcome.result()));
	else
		return CreateK8sServiceOutcome(outcome.error());
}

void EdasClient::createK8sServiceAsync(const CreateK8sServiceRequest& request, const CreateK8sServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createK8sService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::CreateK8sServiceOutcomeCallable EdasClient::createK8sServiceCallable(const CreateK8sServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateK8sServiceOutcome()>>(
			[this, request]()
			{
			return this->createK8sService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DelegateAdminRoleOutcome EdasClient::delegateAdminRole(const DelegateAdminRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DelegateAdminRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DelegateAdminRoleOutcome(DelegateAdminRoleResult(outcome.result()));
	else
		return DelegateAdminRoleOutcome(outcome.error());
}

void EdasClient::delegateAdminRoleAsync(const DelegateAdminRoleRequest& request, const DelegateAdminRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, delegateAdminRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DelegateAdminRoleOutcomeCallable EdasClient::delegateAdminRoleCallable(const DelegateAdminRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DelegateAdminRoleOutcome()>>(
			[this, request]()
			{
			return this->delegateAdminRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DeleteApplicationOutcome EdasClient::deleteApplication(const DeleteApplicationRequest &request) const
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

void EdasClient::deleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DeleteApplicationOutcomeCallable EdasClient::deleteApplicationCallable(const DeleteApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApplicationOutcome()>>(
			[this, request]()
			{
			return this->deleteApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DeleteApplicationScalingRuleOutcome EdasClient::deleteApplicationScalingRule(const DeleteApplicationScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteApplicationScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteApplicationScalingRuleOutcome(DeleteApplicationScalingRuleResult(outcome.result()));
	else
		return DeleteApplicationScalingRuleOutcome(outcome.error());
}

void EdasClient::deleteApplicationScalingRuleAsync(const DeleteApplicationScalingRuleRequest& request, const DeleteApplicationScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApplicationScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DeleteApplicationScalingRuleOutcomeCallable EdasClient::deleteApplicationScalingRuleCallable(const DeleteApplicationScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApplicationScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteApplicationScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DeleteClusterOutcome EdasClient::deleteCluster(const DeleteClusterRequest &request) const
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

void EdasClient::deleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DeleteClusterOutcomeCallable EdasClient::deleteClusterCallable(const DeleteClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteClusterOutcome()>>(
			[this, request]()
			{
			return this->deleteCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DeleteClusterMemberOutcome EdasClient::deleteClusterMember(const DeleteClusterMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteClusterMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteClusterMemberOutcome(DeleteClusterMemberResult(outcome.result()));
	else
		return DeleteClusterMemberOutcome(outcome.error());
}

void EdasClient::deleteClusterMemberAsync(const DeleteClusterMemberRequest& request, const DeleteClusterMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteClusterMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DeleteClusterMemberOutcomeCallable EdasClient::deleteClusterMemberCallable(const DeleteClusterMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteClusterMemberOutcome()>>(
			[this, request]()
			{
			return this->deleteClusterMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DeleteConfigCenterOutcome EdasClient::deleteConfigCenter(const DeleteConfigCenterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteConfigCenterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteConfigCenterOutcome(DeleteConfigCenterResult(outcome.result()));
	else
		return DeleteConfigCenterOutcome(outcome.error());
}

void EdasClient::deleteConfigCenterAsync(const DeleteConfigCenterRequest& request, const DeleteConfigCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteConfigCenter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DeleteConfigCenterOutcomeCallable EdasClient::deleteConfigCenterCallable(const DeleteConfigCenterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteConfigCenterOutcome()>>(
			[this, request]()
			{
			return this->deleteConfigCenter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DeleteDegradeControlOutcome EdasClient::deleteDegradeControl(const DeleteDegradeControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDegradeControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDegradeControlOutcome(DeleteDegradeControlResult(outcome.result()));
	else
		return DeleteDegradeControlOutcome(outcome.error());
}

void EdasClient::deleteDegradeControlAsync(const DeleteDegradeControlRequest& request, const DeleteDegradeControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDegradeControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DeleteDegradeControlOutcomeCallable EdasClient::deleteDegradeControlCallable(const DeleteDegradeControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDegradeControlOutcome()>>(
			[this, request]()
			{
			return this->deleteDegradeControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DeleteDeployGroupOutcome EdasClient::deleteDeployGroup(const DeleteDeployGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDeployGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDeployGroupOutcome(DeleteDeployGroupResult(outcome.result()));
	else
		return DeleteDeployGroupOutcome(outcome.error());
}

void EdasClient::deleteDeployGroupAsync(const DeleteDeployGroupRequest& request, const DeleteDeployGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDeployGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DeleteDeployGroupOutcomeCallable EdasClient::deleteDeployGroupCallable(const DeleteDeployGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDeployGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteDeployGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DeleteEcuOutcome EdasClient::deleteEcu(const DeleteEcuRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEcuOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEcuOutcome(DeleteEcuResult(outcome.result()));
	else
		return DeleteEcuOutcome(outcome.error());
}

void EdasClient::deleteEcuAsync(const DeleteEcuRequest& request, const DeleteEcuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEcu(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DeleteEcuOutcomeCallable EdasClient::deleteEcuCallable(const DeleteEcuRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEcuOutcome()>>(
			[this, request]()
			{
			return this->deleteEcu(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DeleteEnvAppGroupOutcome EdasClient::deleteEnvAppGroup(const DeleteEnvAppGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEnvAppGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEnvAppGroupOutcome(DeleteEnvAppGroupResult(outcome.result()));
	else
		return DeleteEnvAppGroupOutcome(outcome.error());
}

void EdasClient::deleteEnvAppGroupAsync(const DeleteEnvAppGroupRequest& request, const DeleteEnvAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEnvAppGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DeleteEnvAppGroupOutcomeCallable EdasClient::deleteEnvAppGroupCallable(const DeleteEnvAppGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEnvAppGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteEnvAppGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DeleteEnvHsfTrafficControlOutcome EdasClient::deleteEnvHsfTrafficControl(const DeleteEnvHsfTrafficControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEnvHsfTrafficControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEnvHsfTrafficControlOutcome(DeleteEnvHsfTrafficControlResult(outcome.result()));
	else
		return DeleteEnvHsfTrafficControlOutcome(outcome.error());
}

void EdasClient::deleteEnvHsfTrafficControlAsync(const DeleteEnvHsfTrafficControlRequest& request, const DeleteEnvHsfTrafficControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEnvHsfTrafficControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DeleteEnvHsfTrafficControlOutcomeCallable EdasClient::deleteEnvHsfTrafficControlCallable(const DeleteEnvHsfTrafficControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEnvHsfTrafficControlOutcome()>>(
			[this, request]()
			{
			return this->deleteEnvHsfTrafficControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DeleteEnvHttpTrafficControlOutcome EdasClient::deleteEnvHttpTrafficControl(const DeleteEnvHttpTrafficControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEnvHttpTrafficControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEnvHttpTrafficControlOutcome(DeleteEnvHttpTrafficControlResult(outcome.result()));
	else
		return DeleteEnvHttpTrafficControlOutcome(outcome.error());
}

void EdasClient::deleteEnvHttpTrafficControlAsync(const DeleteEnvHttpTrafficControlRequest& request, const DeleteEnvHttpTrafficControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEnvHttpTrafficControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DeleteEnvHttpTrafficControlOutcomeCallable EdasClient::deleteEnvHttpTrafficControlCallable(const DeleteEnvHttpTrafficControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEnvHttpTrafficControlOutcome()>>(
			[this, request]()
			{
			return this->deleteEnvHttpTrafficControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DeleteFlowControlOutcome EdasClient::deleteFlowControl(const DeleteFlowControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFlowControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFlowControlOutcome(DeleteFlowControlResult(outcome.result()));
	else
		return DeleteFlowControlOutcome(outcome.error());
}

void EdasClient::deleteFlowControlAsync(const DeleteFlowControlRequest& request, const DeleteFlowControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFlowControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DeleteFlowControlOutcomeCallable EdasClient::deleteFlowControlCallable(const DeleteFlowControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFlowControlOutcome()>>(
			[this, request]()
			{
			return this->deleteFlowControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DeleteGrayEnvironmentOutcome EdasClient::deleteGrayEnvironment(const DeleteGrayEnvironmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGrayEnvironmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGrayEnvironmentOutcome(DeleteGrayEnvironmentResult(outcome.result()));
	else
		return DeleteGrayEnvironmentOutcome(outcome.error());
}

void EdasClient::deleteGrayEnvironmentAsync(const DeleteGrayEnvironmentRequest& request, const DeleteGrayEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGrayEnvironment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DeleteGrayEnvironmentOutcomeCallable EdasClient::deleteGrayEnvironmentCallable(const DeleteGrayEnvironmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGrayEnvironmentOutcome()>>(
			[this, request]()
			{
			return this->deleteGrayEnvironment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DeleteK8sApplicationOutcome EdasClient::deleteK8sApplication(const DeleteK8sApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteK8sApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteK8sApplicationOutcome(DeleteK8sApplicationResult(outcome.result()));
	else
		return DeleteK8sApplicationOutcome(outcome.error());
}

void EdasClient::deleteK8sApplicationAsync(const DeleteK8sApplicationRequest& request, const DeleteK8sApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteK8sApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DeleteK8sApplicationOutcomeCallable EdasClient::deleteK8sApplicationCallable(const DeleteK8sApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteK8sApplicationOutcome()>>(
			[this, request]()
			{
			return this->deleteK8sApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DeleteK8sConfigMapOutcome EdasClient::deleteK8sConfigMap(const DeleteK8sConfigMapRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteK8sConfigMapOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteK8sConfigMapOutcome(DeleteK8sConfigMapResult(outcome.result()));
	else
		return DeleteK8sConfigMapOutcome(outcome.error());
}

void EdasClient::deleteK8sConfigMapAsync(const DeleteK8sConfigMapRequest& request, const DeleteK8sConfigMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteK8sConfigMap(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DeleteK8sConfigMapOutcomeCallable EdasClient::deleteK8sConfigMapCallable(const DeleteK8sConfigMapRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteK8sConfigMapOutcome()>>(
			[this, request]()
			{
			return this->deleteK8sConfigMap(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DeleteK8sIngressRuleOutcome EdasClient::deleteK8sIngressRule(const DeleteK8sIngressRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteK8sIngressRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteK8sIngressRuleOutcome(DeleteK8sIngressRuleResult(outcome.result()));
	else
		return DeleteK8sIngressRuleOutcome(outcome.error());
}

void EdasClient::deleteK8sIngressRuleAsync(const DeleteK8sIngressRuleRequest& request, const DeleteK8sIngressRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteK8sIngressRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DeleteK8sIngressRuleOutcomeCallable EdasClient::deleteK8sIngressRuleCallable(const DeleteK8sIngressRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteK8sIngressRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteK8sIngressRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DeleteK8sSecretOutcome EdasClient::deleteK8sSecret(const DeleteK8sSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteK8sSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteK8sSecretOutcome(DeleteK8sSecretResult(outcome.result()));
	else
		return DeleteK8sSecretOutcome(outcome.error());
}

void EdasClient::deleteK8sSecretAsync(const DeleteK8sSecretRequest& request, const DeleteK8sSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteK8sSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DeleteK8sSecretOutcomeCallable EdasClient::deleteK8sSecretCallable(const DeleteK8sSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteK8sSecretOutcome()>>(
			[this, request]()
			{
			return this->deleteK8sSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DeleteK8sServiceOutcome EdasClient::deleteK8sService(const DeleteK8sServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteK8sServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteK8sServiceOutcome(DeleteK8sServiceResult(outcome.result()));
	else
		return DeleteK8sServiceOutcome(outcome.error());
}

void EdasClient::deleteK8sServiceAsync(const DeleteK8sServiceRequest& request, const DeleteK8sServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteK8sService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DeleteK8sServiceOutcomeCallable EdasClient::deleteK8sServiceCallable(const DeleteK8sServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteK8sServiceOutcome()>>(
			[this, request]()
			{
			return this->deleteK8sService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DeleteLogPathOutcome EdasClient::deleteLogPath(const DeleteLogPathRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLogPathOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLogPathOutcome(DeleteLogPathResult(outcome.result()));
	else
		return DeleteLogPathOutcome(outcome.error());
}

void EdasClient::deleteLogPathAsync(const DeleteLogPathRequest& request, const DeleteLogPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLogPath(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DeleteLogPathOutcomeCallable EdasClient::deleteLogPathCallable(const DeleteLogPathRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLogPathOutcome()>>(
			[this, request]()
			{
			return this->deleteLogPath(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DeleteRoleOutcome EdasClient::deleteRole(const DeleteRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRoleOutcome(DeleteRoleResult(outcome.result()));
	else
		return DeleteRoleOutcome(outcome.error());
}

void EdasClient::deleteRoleAsync(const DeleteRoleRequest& request, const DeleteRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DeleteRoleOutcomeCallable EdasClient::deleteRoleCallable(const DeleteRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRoleOutcome()>>(
			[this, request]()
			{
			return this->deleteRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DeleteServiceGroupOutcome EdasClient::deleteServiceGroup(const DeleteServiceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteServiceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteServiceGroupOutcome(DeleteServiceGroupResult(outcome.result()));
	else
		return DeleteServiceGroupOutcome(outcome.error());
}

void EdasClient::deleteServiceGroupAsync(const DeleteServiceGroupRequest& request, const DeleteServiceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteServiceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DeleteServiceGroupOutcomeCallable EdasClient::deleteServiceGroupCallable(const DeleteServiceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteServiceGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteServiceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DeleteServiceTimeConfigOutcome EdasClient::deleteServiceTimeConfig(const DeleteServiceTimeConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteServiceTimeConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteServiceTimeConfigOutcome(DeleteServiceTimeConfigResult(outcome.result()));
	else
		return DeleteServiceTimeConfigOutcome(outcome.error());
}

void EdasClient::deleteServiceTimeConfigAsync(const DeleteServiceTimeConfigRequest& request, const DeleteServiceTimeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteServiceTimeConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DeleteServiceTimeConfigOutcomeCallable EdasClient::deleteServiceTimeConfigCallable(const DeleteServiceTimeConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteServiceTimeConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteServiceTimeConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DeleteSwimmingLaneOutcome EdasClient::deleteSwimmingLane(const DeleteSwimmingLaneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSwimmingLaneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSwimmingLaneOutcome(DeleteSwimmingLaneResult(outcome.result()));
	else
		return DeleteSwimmingLaneOutcome(outcome.error());
}

void EdasClient::deleteSwimmingLaneAsync(const DeleteSwimmingLaneRequest& request, const DeleteSwimmingLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSwimmingLane(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DeleteSwimmingLaneOutcomeCallable EdasClient::deleteSwimmingLaneCallable(const DeleteSwimmingLaneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSwimmingLaneOutcome()>>(
			[this, request]()
			{
			return this->deleteSwimmingLane(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DeleteSwimmingLaneGroupOutcome EdasClient::deleteSwimmingLaneGroup(const DeleteSwimmingLaneGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSwimmingLaneGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSwimmingLaneGroupOutcome(DeleteSwimmingLaneGroupResult(outcome.result()));
	else
		return DeleteSwimmingLaneGroupOutcome(outcome.error());
}

void EdasClient::deleteSwimmingLaneGroupAsync(const DeleteSwimmingLaneGroupRequest& request, const DeleteSwimmingLaneGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSwimmingLaneGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DeleteSwimmingLaneGroupOutcomeCallable EdasClient::deleteSwimmingLaneGroupCallable(const DeleteSwimmingLaneGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSwimmingLaneGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteSwimmingLaneGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DeleteUserDefineRegionOutcome EdasClient::deleteUserDefineRegion(const DeleteUserDefineRegionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserDefineRegionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserDefineRegionOutcome(DeleteUserDefineRegionResult(outcome.result()));
	else
		return DeleteUserDefineRegionOutcome(outcome.error());
}

void EdasClient::deleteUserDefineRegionAsync(const DeleteUserDefineRegionRequest& request, const DeleteUserDefineRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUserDefineRegion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DeleteUserDefineRegionOutcomeCallable EdasClient::deleteUserDefineRegionCallable(const DeleteUserDefineRegionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserDefineRegionOutcome()>>(
			[this, request]()
			{
			return this->deleteUserDefineRegion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DeployApplicationOutcome EdasClient::deployApplication(const DeployApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeployApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeployApplicationOutcome(DeployApplicationResult(outcome.result()));
	else
		return DeployApplicationOutcome(outcome.error());
}

void EdasClient::deployApplicationAsync(const DeployApplicationRequest& request, const DeployApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deployApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DeployApplicationOutcomeCallable EdasClient::deployApplicationCallable(const DeployApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeployApplicationOutcome()>>(
			[this, request]()
			{
			return this->deployApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DeployK8sApplicationOutcome EdasClient::deployK8sApplication(const DeployK8sApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeployK8sApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeployK8sApplicationOutcome(DeployK8sApplicationResult(outcome.result()));
	else
		return DeployK8sApplicationOutcome(outcome.error());
}

void EdasClient::deployK8sApplicationAsync(const DeployK8sApplicationRequest& request, const DeployK8sApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deployK8sApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DeployK8sApplicationOutcomeCallable EdasClient::deployK8sApplicationCallable(const DeployK8sApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeployK8sApplicationOutcome()>>(
			[this, request]()
			{
			return this->deployK8sApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DescribeAppInstanceListOutcome EdasClient::describeAppInstanceList(const DescribeAppInstanceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAppInstanceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAppInstanceListOutcome(DescribeAppInstanceListResult(outcome.result()));
	else
		return DescribeAppInstanceListOutcome(outcome.error());
}

void EdasClient::describeAppInstanceListAsync(const DescribeAppInstanceListRequest& request, const DescribeAppInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAppInstanceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DescribeAppInstanceListOutcomeCallable EdasClient::describeAppInstanceListCallable(const DescribeAppInstanceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAppInstanceListOutcome()>>(
			[this, request]()
			{
			return this->describeAppInstanceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DescribeApplicationScalingRuleOutcome EdasClient::describeApplicationScalingRule(const DescribeApplicationScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApplicationScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApplicationScalingRuleOutcome(DescribeApplicationScalingRuleResult(outcome.result()));
	else
		return DescribeApplicationScalingRuleOutcome(outcome.error());
}

void EdasClient::describeApplicationScalingRuleAsync(const DescribeApplicationScalingRuleRequest& request, const DescribeApplicationScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApplicationScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DescribeApplicationScalingRuleOutcomeCallable EdasClient::describeApplicationScalingRuleCallable(const DescribeApplicationScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApplicationScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->describeApplicationScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DescribeApplicationScalingRulesOutcome EdasClient::describeApplicationScalingRules(const DescribeApplicationScalingRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApplicationScalingRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApplicationScalingRulesOutcome(DescribeApplicationScalingRulesResult(outcome.result()));
	else
		return DescribeApplicationScalingRulesOutcome(outcome.error());
}

void EdasClient::describeApplicationScalingRulesAsync(const DescribeApplicationScalingRulesRequest& request, const DescribeApplicationScalingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApplicationScalingRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DescribeApplicationScalingRulesOutcomeCallable EdasClient::describeApplicationScalingRulesCallable(const DescribeApplicationScalingRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApplicationScalingRulesOutcome()>>(
			[this, request]()
			{
			return this->describeApplicationScalingRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DescribeLocalitySettingOutcome EdasClient::describeLocalitySetting(const DescribeLocalitySettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLocalitySettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLocalitySettingOutcome(DescribeLocalitySettingResult(outcome.result()));
	else
		return DescribeLocalitySettingOutcome(outcome.error());
}

void EdasClient::describeLocalitySettingAsync(const DescribeLocalitySettingRequest& request, const DescribeLocalitySettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLocalitySetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DescribeLocalitySettingOutcomeCallable EdasClient::describeLocalitySettingCallable(const DescribeLocalitySettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLocalitySettingOutcome()>>(
			[this, request]()
			{
			return this->describeLocalitySetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DisableApplicationScalingRuleOutcome EdasClient::disableApplicationScalingRule(const DisableApplicationScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableApplicationScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableApplicationScalingRuleOutcome(DisableApplicationScalingRuleResult(outcome.result()));
	else
		return DisableApplicationScalingRuleOutcome(outcome.error());
}

void EdasClient::disableApplicationScalingRuleAsync(const DisableApplicationScalingRuleRequest& request, const DisableApplicationScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableApplicationScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DisableApplicationScalingRuleOutcomeCallable EdasClient::disableApplicationScalingRuleCallable(const DisableApplicationScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableApplicationScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->disableApplicationScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DisableDegradeControlOutcome EdasClient::disableDegradeControl(const DisableDegradeControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableDegradeControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableDegradeControlOutcome(DisableDegradeControlResult(outcome.result()));
	else
		return DisableDegradeControlOutcome(outcome.error());
}

void EdasClient::disableDegradeControlAsync(const DisableDegradeControlRequest& request, const DisableDegradeControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableDegradeControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DisableDegradeControlOutcomeCallable EdasClient::disableDegradeControlCallable(const DisableDegradeControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableDegradeControlOutcome()>>(
			[this, request]()
			{
			return this->disableDegradeControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DisableFlowControlOutcome EdasClient::disableFlowControl(const DisableFlowControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableFlowControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableFlowControlOutcome(DisableFlowControlResult(outcome.result()));
	else
		return DisableFlowControlOutcome(outcome.error());
}

void EdasClient::disableFlowControlAsync(const DisableFlowControlRequest& request, const DisableFlowControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableFlowControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DisableFlowControlOutcomeCallable EdasClient::disableFlowControlCallable(const DisableFlowControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableFlowControlOutcome()>>(
			[this, request]()
			{
			return this->disableFlowControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::DisableMockRuleOutcome EdasClient::disableMockRule(const DisableMockRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableMockRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableMockRuleOutcome(DisableMockRuleResult(outcome.result()));
	else
		return DisableMockRuleOutcome(outcome.error());
}

void EdasClient::disableMockRuleAsync(const DisableMockRuleRequest& request, const DisableMockRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableMockRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::DisableMockRuleOutcomeCallable EdasClient::disableMockRuleCallable(const DisableMockRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableMockRuleOutcome()>>(
			[this, request]()
			{
			return this->disableMockRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::EnableApplicationScalingRuleOutcome EdasClient::enableApplicationScalingRule(const EnableApplicationScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableApplicationScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableApplicationScalingRuleOutcome(EnableApplicationScalingRuleResult(outcome.result()));
	else
		return EnableApplicationScalingRuleOutcome(outcome.error());
}

void EdasClient::enableApplicationScalingRuleAsync(const EnableApplicationScalingRuleRequest& request, const EnableApplicationScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableApplicationScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::EnableApplicationScalingRuleOutcomeCallable EdasClient::enableApplicationScalingRuleCallable(const EnableApplicationScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableApplicationScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->enableApplicationScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::EnableDegradeControlOutcome EdasClient::enableDegradeControl(const EnableDegradeControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableDegradeControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableDegradeControlOutcome(EnableDegradeControlResult(outcome.result()));
	else
		return EnableDegradeControlOutcome(outcome.error());
}

void EdasClient::enableDegradeControlAsync(const EnableDegradeControlRequest& request, const EnableDegradeControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableDegradeControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::EnableDegradeControlOutcomeCallable EdasClient::enableDegradeControlCallable(const EnableDegradeControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableDegradeControlOutcome()>>(
			[this, request]()
			{
			return this->enableDegradeControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::EnableFlowControlOutcome EdasClient::enableFlowControl(const EnableFlowControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableFlowControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableFlowControlOutcome(EnableFlowControlResult(outcome.result()));
	else
		return EnableFlowControlOutcome(outcome.error());
}

void EdasClient::enableFlowControlAsync(const EnableFlowControlRequest& request, const EnableFlowControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableFlowControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::EnableFlowControlOutcomeCallable EdasClient::enableFlowControlCallable(const EnableFlowControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableFlowControlOutcome()>>(
			[this, request]()
			{
			return this->enableFlowControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::EnableMockRuleOutcome EdasClient::enableMockRule(const EnableMockRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableMockRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableMockRuleOutcome(EnableMockRuleResult(outcome.result()));
	else
		return EnableMockRuleOutcome(outcome.error());
}

void EdasClient::enableMockRuleAsync(const EnableMockRuleRequest& request, const EnableMockRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableMockRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::EnableMockRuleOutcomeCallable EdasClient::enableMockRuleCallable(const EnableMockRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableMockRuleOutcome()>>(
			[this, request]()
			{
			return this->enableMockRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ExecuteStatusOutcome EdasClient::executeStatus(const ExecuteStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteStatusOutcome(ExecuteStatusResult(outcome.result()));
	else
		return ExecuteStatusOutcome(outcome.error());
}

void EdasClient::executeStatusAsync(const ExecuteStatusRequest& request, const ExecuteStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ExecuteStatusOutcomeCallable EdasClient::executeStatusCallable(const ExecuteStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteStatusOutcome()>>(
			[this, request]()
			{
			return this->executeStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetAccountMockRuleOutcome EdasClient::getAccountMockRule(const GetAccountMockRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAccountMockRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAccountMockRuleOutcome(GetAccountMockRuleResult(outcome.result()));
	else
		return GetAccountMockRuleOutcome(outcome.error());
}

void EdasClient::getAccountMockRuleAsync(const GetAccountMockRuleRequest& request, const GetAccountMockRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAccountMockRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetAccountMockRuleOutcomeCallable EdasClient::getAccountMockRuleCallable(const GetAccountMockRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAccountMockRuleOutcome()>>(
			[this, request]()
			{
			return this->getAccountMockRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetAppDeploymentOutcome EdasClient::getAppDeployment(const GetAppDeploymentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAppDeploymentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAppDeploymentOutcome(GetAppDeploymentResult(outcome.result()));
	else
		return GetAppDeploymentOutcome(outcome.error());
}

void EdasClient::getAppDeploymentAsync(const GetAppDeploymentRequest& request, const GetAppDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAppDeployment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetAppDeploymentOutcomeCallable EdasClient::getAppDeploymentCallable(const GetAppDeploymentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAppDeploymentOutcome()>>(
			[this, request]()
			{
			return this->getAppDeployment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetApplicationOutcome EdasClient::getApplication(const GetApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApplicationOutcome(GetApplicationResult(outcome.result()));
	else
		return GetApplicationOutcome(outcome.error());
}

void EdasClient::getApplicationAsync(const GetApplicationRequest& request, const GetApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetApplicationOutcomeCallable EdasClient::getApplicationCallable(const GetApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApplicationOutcome()>>(
			[this, request]()
			{
			return this->getApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetChangeOrderInfoOutcome EdasClient::getChangeOrderInfo(const GetChangeOrderInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetChangeOrderInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetChangeOrderInfoOutcome(GetChangeOrderInfoResult(outcome.result()));
	else
		return GetChangeOrderInfoOutcome(outcome.error());
}

void EdasClient::getChangeOrderInfoAsync(const GetChangeOrderInfoRequest& request, const GetChangeOrderInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getChangeOrderInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetChangeOrderInfoOutcomeCallable EdasClient::getChangeOrderInfoCallable(const GetChangeOrderInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetChangeOrderInfoOutcome()>>(
			[this, request]()
			{
			return this->getChangeOrderInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetClusterOutcome EdasClient::getCluster(const GetClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetClusterOutcome(GetClusterResult(outcome.result()));
	else
		return GetClusterOutcome(outcome.error());
}

void EdasClient::getClusterAsync(const GetClusterRequest& request, const GetClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetClusterOutcomeCallable EdasClient::getClusterCallable(const GetClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetClusterOutcome()>>(
			[this, request]()
			{
			return this->getCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetContainerConfigurationOutcome EdasClient::getContainerConfiguration(const GetContainerConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetContainerConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetContainerConfigurationOutcome(GetContainerConfigurationResult(outcome.result()));
	else
		return GetContainerConfigurationOutcome(outcome.error());
}

void EdasClient::getContainerConfigurationAsync(const GetContainerConfigurationRequest& request, const GetContainerConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getContainerConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetContainerConfigurationOutcomeCallable EdasClient::getContainerConfigurationCallable(const GetContainerConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetContainerConfigurationOutcome()>>(
			[this, request]()
			{
			return this->getContainerConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetEnvTrafficControlOutcome EdasClient::getEnvTrafficControl(const GetEnvTrafficControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEnvTrafficControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEnvTrafficControlOutcome(GetEnvTrafficControlResult(outcome.result()));
	else
		return GetEnvTrafficControlOutcome(outcome.error());
}

void EdasClient::getEnvTrafficControlAsync(const GetEnvTrafficControlRequest& request, const GetEnvTrafficControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEnvTrafficControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetEnvTrafficControlOutcomeCallable EdasClient::getEnvTrafficControlCallable(const GetEnvTrafficControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEnvTrafficControlOutcome()>>(
			[this, request]()
			{
			return this->getEnvTrafficControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetGrayAppGroupOutcome EdasClient::getGrayAppGroup(const GetGrayAppGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGrayAppGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGrayAppGroupOutcome(GetGrayAppGroupResult(outcome.result()));
	else
		return GetGrayAppGroupOutcome(outcome.error());
}

void EdasClient::getGrayAppGroupAsync(const GetGrayAppGroupRequest& request, const GetGrayAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGrayAppGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetGrayAppGroupOutcomeCallable EdasClient::getGrayAppGroupCallable(const GetGrayAppGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGrayAppGroupOutcome()>>(
			[this, request]()
			{
			return this->getGrayAppGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetGrayAppsOutcome EdasClient::getGrayApps(const GetGrayAppsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGrayAppsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGrayAppsOutcome(GetGrayAppsResult(outcome.result()));
	else
		return GetGrayAppsOutcome(outcome.error());
}

void EdasClient::getGrayAppsAsync(const GetGrayAppsRequest& request, const GetGrayAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGrayApps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetGrayAppsOutcomeCallable EdasClient::getGrayAppsCallable(const GetGrayAppsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGrayAppsOutcome()>>(
			[this, request]()
			{
			return this->getGrayApps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetGrayEnvironmentsOutcome EdasClient::getGrayEnvironments(const GetGrayEnvironmentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGrayEnvironmentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGrayEnvironmentsOutcome(GetGrayEnvironmentsResult(outcome.result()));
	else
		return GetGrayEnvironmentsOutcome(outcome.error());
}

void EdasClient::getGrayEnvironmentsAsync(const GetGrayEnvironmentsRequest& request, const GetGrayEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGrayEnvironments(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetGrayEnvironmentsOutcomeCallable EdasClient::getGrayEnvironmentsCallable(const GetGrayEnvironmentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGrayEnvironmentsOutcome()>>(
			[this, request]()
			{
			return this->getGrayEnvironments(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetJavaStartUpConfigOutcome EdasClient::getJavaStartUpConfig(const GetJavaStartUpConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJavaStartUpConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJavaStartUpConfigOutcome(GetJavaStartUpConfigResult(outcome.result()));
	else
		return GetJavaStartUpConfigOutcome(outcome.error());
}

void EdasClient::getJavaStartUpConfigAsync(const GetJavaStartUpConfigRequest& request, const GetJavaStartUpConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJavaStartUpConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetJavaStartUpConfigOutcomeCallable EdasClient::getJavaStartUpConfigCallable(const GetJavaStartUpConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJavaStartUpConfigOutcome()>>(
			[this, request]()
			{
			return this->getJavaStartUpConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetJvmConfigurationOutcome EdasClient::getJvmConfiguration(const GetJvmConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJvmConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJvmConfigurationOutcome(GetJvmConfigurationResult(outcome.result()));
	else
		return GetJvmConfigurationOutcome(outcome.error());
}

void EdasClient::getJvmConfigurationAsync(const GetJvmConfigurationRequest& request, const GetJvmConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJvmConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetJvmConfigurationOutcomeCallable EdasClient::getJvmConfigurationCallable(const GetJvmConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJvmConfigurationOutcome()>>(
			[this, request]()
			{
			return this->getJvmConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetK8sApplicationOutcome EdasClient::getK8sApplication(const GetK8sApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetK8sApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetK8sApplicationOutcome(GetK8sApplicationResult(outcome.result()));
	else
		return GetK8sApplicationOutcome(outcome.error());
}

void EdasClient::getK8sApplicationAsync(const GetK8sApplicationRequest& request, const GetK8sApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getK8sApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetK8sApplicationOutcomeCallable EdasClient::getK8sApplicationCallable(const GetK8sApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetK8sApplicationOutcome()>>(
			[this, request]()
			{
			return this->getK8sApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetK8sClusterOutcome EdasClient::getK8sCluster(const GetK8sClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetK8sClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetK8sClusterOutcome(GetK8sClusterResult(outcome.result()));
	else
		return GetK8sClusterOutcome(outcome.error());
}

void EdasClient::getK8sClusterAsync(const GetK8sClusterRequest& request, const GetK8sClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getK8sCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetK8sClusterOutcomeCallable EdasClient::getK8sClusterCallable(const GetK8sClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetK8sClusterOutcome()>>(
			[this, request]()
			{
			return this->getK8sCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetK8sServicesOutcome EdasClient::getK8sServices(const GetK8sServicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetK8sServicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetK8sServicesOutcome(GetK8sServicesResult(outcome.result()));
	else
		return GetK8sServicesOutcome(outcome.error());
}

void EdasClient::getK8sServicesAsync(const GetK8sServicesRequest& request, const GetK8sServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getK8sServices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetK8sServicesOutcomeCallable EdasClient::getK8sServicesCallable(const GetK8sServicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetK8sServicesOutcome()>>(
			[this, request]()
			{
			return this->getK8sServices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetK8sStorageInfoOutcome EdasClient::getK8sStorageInfo(const GetK8sStorageInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetK8sStorageInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetK8sStorageInfoOutcome(GetK8sStorageInfoResult(outcome.result()));
	else
		return GetK8sStorageInfoOutcome(outcome.error());
}

void EdasClient::getK8sStorageInfoAsync(const GetK8sStorageInfoRequest& request, const GetK8sStorageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getK8sStorageInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetK8sStorageInfoOutcomeCallable EdasClient::getK8sStorageInfoCallable(const GetK8sStorageInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetK8sStorageInfoOutcome()>>(
			[this, request]()
			{
			return this->getK8sStorageInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetMockRuleByConsumerAppIdOutcome EdasClient::getMockRuleByConsumerAppId(const GetMockRuleByConsumerAppIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMockRuleByConsumerAppIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMockRuleByConsumerAppIdOutcome(GetMockRuleByConsumerAppIdResult(outcome.result()));
	else
		return GetMockRuleByConsumerAppIdOutcome(outcome.error());
}

void EdasClient::getMockRuleByConsumerAppIdAsync(const GetMockRuleByConsumerAppIdRequest& request, const GetMockRuleByConsumerAppIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMockRuleByConsumerAppId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetMockRuleByConsumerAppIdOutcomeCallable EdasClient::getMockRuleByConsumerAppIdCallable(const GetMockRuleByConsumerAppIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMockRuleByConsumerAppIdOutcome()>>(
			[this, request]()
			{
			return this->getMockRuleByConsumerAppId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetMockRuleByIdOutcome EdasClient::getMockRuleById(const GetMockRuleByIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMockRuleByIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMockRuleByIdOutcome(GetMockRuleByIdResult(outcome.result()));
	else
		return GetMockRuleByIdOutcome(outcome.error());
}

void EdasClient::getMockRuleByIdAsync(const GetMockRuleByIdRequest& request, const GetMockRuleByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMockRuleById(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetMockRuleByIdOutcomeCallable EdasClient::getMockRuleByIdCallable(const GetMockRuleByIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMockRuleByIdOutcome()>>(
			[this, request]()
			{
			return this->getMockRuleById(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetMockRuleByProviderAppIdOutcome EdasClient::getMockRuleByProviderAppId(const GetMockRuleByProviderAppIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMockRuleByProviderAppIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMockRuleByProviderAppIdOutcome(GetMockRuleByProviderAppIdResult(outcome.result()));
	else
		return GetMockRuleByProviderAppIdOutcome(outcome.error());
}

void EdasClient::getMockRuleByProviderAppIdAsync(const GetMockRuleByProviderAppIdRequest& request, const GetMockRuleByProviderAppIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMockRuleByProviderAppId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetMockRuleByProviderAppIdOutcomeCallable EdasClient::getMockRuleByProviderAppIdCallable(const GetMockRuleByProviderAppIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMockRuleByProviderAppIdOutcome()>>(
			[this, request]()
			{
			return this->getMockRuleByProviderAppId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetPackageStorageCredentialOutcome EdasClient::getPackageStorageCredential(const GetPackageStorageCredentialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPackageStorageCredentialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPackageStorageCredentialOutcome(GetPackageStorageCredentialResult(outcome.result()));
	else
		return GetPackageStorageCredentialOutcome(outcome.error());
}

void EdasClient::getPackageStorageCredentialAsync(const GetPackageStorageCredentialRequest& request, const GetPackageStorageCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPackageStorageCredential(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetPackageStorageCredentialOutcomeCallable EdasClient::getPackageStorageCredentialCallable(const GetPackageStorageCredentialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPackageStorageCredentialOutcome()>>(
			[this, request]()
			{
			return this->getPackageStorageCredential(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetScalingRulesOutcome EdasClient::getScalingRules(const GetScalingRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetScalingRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetScalingRulesOutcome(GetScalingRulesResult(outcome.result()));
	else
		return GetScalingRulesOutcome(outcome.error());
}

void EdasClient::getScalingRulesAsync(const GetScalingRulesRequest& request, const GetScalingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getScalingRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetScalingRulesOutcomeCallable EdasClient::getScalingRulesCallable(const GetScalingRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetScalingRulesOutcome()>>(
			[this, request]()
			{
			return this->getScalingRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetSecureTokenOutcome EdasClient::getSecureToken(const GetSecureTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSecureTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSecureTokenOutcome(GetSecureTokenResult(outcome.result()));
	else
		return GetSecureTokenOutcome(outcome.error());
}

void EdasClient::getSecureTokenAsync(const GetSecureTokenRequest& request, const GetSecureTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSecureToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetSecureTokenOutcomeCallable EdasClient::getSecureTokenCallable(const GetSecureTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSecureTokenOutcome()>>(
			[this, request]()
			{
			return this->getSecureToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetServiceConsumersPageOutcome EdasClient::getServiceConsumersPage(const GetServiceConsumersPageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceConsumersPageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceConsumersPageOutcome(GetServiceConsumersPageResult(outcome.result()));
	else
		return GetServiceConsumersPageOutcome(outcome.error());
}

void EdasClient::getServiceConsumersPageAsync(const GetServiceConsumersPageRequest& request, const GetServiceConsumersPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceConsumersPage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetServiceConsumersPageOutcomeCallable EdasClient::getServiceConsumersPageCallable(const GetServiceConsumersPageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceConsumersPageOutcome()>>(
			[this, request]()
			{
			return this->getServiceConsumersPage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetServiceDetailOutcome EdasClient::getServiceDetail(const GetServiceDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceDetailOutcome(GetServiceDetailResult(outcome.result()));
	else
		return GetServiceDetailOutcome(outcome.error());
}

void EdasClient::getServiceDetailAsync(const GetServiceDetailRequest& request, const GetServiceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetServiceDetailOutcomeCallable EdasClient::getServiceDetailCallable(const GetServiceDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceDetailOutcome()>>(
			[this, request]()
			{
			return this->getServiceDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetServiceListOutcome EdasClient::getServiceList(const GetServiceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceListOutcome(GetServiceListResult(outcome.result()));
	else
		return GetServiceListOutcome(outcome.error());
}

void EdasClient::getServiceListAsync(const GetServiceListRequest& request, const GetServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetServiceListOutcomeCallable EdasClient::getServiceListCallable(const GetServiceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceListOutcome()>>(
			[this, request]()
			{
			return this->getServiceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetServiceListPageOutcome EdasClient::getServiceListPage(const GetServiceListPageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceListPageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceListPageOutcome(GetServiceListPageResult(outcome.result()));
	else
		return GetServiceListPageOutcome(outcome.error());
}

void EdasClient::getServiceListPageAsync(const GetServiceListPageRequest& request, const GetServiceListPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceListPage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetServiceListPageOutcomeCallable EdasClient::getServiceListPageCallable(const GetServiceListPageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceListPageOutcome()>>(
			[this, request]()
			{
			return this->getServiceListPage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetServiceMethodPageOutcome EdasClient::getServiceMethodPage(const GetServiceMethodPageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceMethodPageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceMethodPageOutcome(GetServiceMethodPageResult(outcome.result()));
	else
		return GetServiceMethodPageOutcome(outcome.error());
}

void EdasClient::getServiceMethodPageAsync(const GetServiceMethodPageRequest& request, const GetServiceMethodPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceMethodPage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetServiceMethodPageOutcomeCallable EdasClient::getServiceMethodPageCallable(const GetServiceMethodPageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceMethodPageOutcome()>>(
			[this, request]()
			{
			return this->getServiceMethodPage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetServiceProvidersPageOutcome EdasClient::getServiceProvidersPage(const GetServiceProvidersPageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceProvidersPageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceProvidersPageOutcome(GetServiceProvidersPageResult(outcome.result()));
	else
		return GetServiceProvidersPageOutcome(outcome.error());
}

void EdasClient::getServiceProvidersPageAsync(const GetServiceProvidersPageRequest& request, const GetServiceProvidersPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceProvidersPage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetServiceProvidersPageOutcomeCallable EdasClient::getServiceProvidersPageCallable(const GetServiceProvidersPageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceProvidersPageOutcome()>>(
			[this, request]()
			{
			return this->getServiceProvidersPage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetSpringCloudTestMethodOutcome EdasClient::getSpringCloudTestMethod(const GetSpringCloudTestMethodRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSpringCloudTestMethodOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSpringCloudTestMethodOutcome(GetSpringCloudTestMethodResult(outcome.result()));
	else
		return GetSpringCloudTestMethodOutcome(outcome.error());
}

void EdasClient::getSpringCloudTestMethodAsync(const GetSpringCloudTestMethodRequest& request, const GetSpringCloudTestMethodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSpringCloudTestMethod(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetSpringCloudTestMethodOutcomeCallable EdasClient::getSpringCloudTestMethodCallable(const GetSpringCloudTestMethodRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSpringCloudTestMethodOutcome()>>(
			[this, request]()
			{
			return this->getSpringCloudTestMethod(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetSslCertificateListOutcome EdasClient::getSslCertificateList(const GetSslCertificateListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSslCertificateListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSslCertificateListOutcome(GetSslCertificateListResult(outcome.result()));
	else
		return GetSslCertificateListOutcome(outcome.error());
}

void EdasClient::getSslCertificateListAsync(const GetSslCertificateListRequest& request, const GetSslCertificateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSslCertificateList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetSslCertificateListOutcomeCallable EdasClient::getSslCertificateListCallable(const GetSslCertificateListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSslCertificateListOutcome()>>(
			[this, request]()
			{
			return this->getSslCertificateList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetSubAccountInfoOutcome EdasClient::getSubAccountInfo(const GetSubAccountInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSubAccountInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSubAccountInfoOutcome(GetSubAccountInfoResult(outcome.result()));
	else
		return GetSubAccountInfoOutcome(outcome.error());
}

void EdasClient::getSubAccountInfoAsync(const GetSubAccountInfoRequest& request, const GetSubAccountInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSubAccountInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetSubAccountInfoOutcomeCallable EdasClient::getSubAccountInfoCallable(const GetSubAccountInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSubAccountInfoOutcome()>>(
			[this, request]()
			{
			return this->getSubAccountInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetSwimmingLaneOutcome EdasClient::getSwimmingLane(const GetSwimmingLaneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSwimmingLaneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSwimmingLaneOutcome(GetSwimmingLaneResult(outcome.result()));
	else
		return GetSwimmingLaneOutcome(outcome.error());
}

void EdasClient::getSwimmingLaneAsync(const GetSwimmingLaneRequest& request, const GetSwimmingLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSwimmingLane(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetSwimmingLaneOutcomeCallable EdasClient::getSwimmingLaneCallable(const GetSwimmingLaneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSwimmingLaneOutcome()>>(
			[this, request]()
			{
			return this->getSwimmingLane(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::GetWebContainerConfigOutcome EdasClient::getWebContainerConfig(const GetWebContainerConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWebContainerConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWebContainerConfigOutcome(GetWebContainerConfigResult(outcome.result()));
	else
		return GetWebContainerConfigOutcome(outcome.error());
}

void EdasClient::getWebContainerConfigAsync(const GetWebContainerConfigRequest& request, const GetWebContainerConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWebContainerConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::GetWebContainerConfigOutcomeCallable EdasClient::getWebContainerConfigCallable(const GetWebContainerConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWebContainerConfigOutcome()>>(
			[this, request]()
			{
			return this->getWebContainerConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ImportK8sClusterOutcome EdasClient::importK8sCluster(const ImportK8sClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportK8sClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportK8sClusterOutcome(ImportK8sClusterResult(outcome.result()));
	else
		return ImportK8sClusterOutcome(outcome.error());
}

void EdasClient::importK8sClusterAsync(const ImportK8sClusterRequest& request, const ImportK8sClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importK8sCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ImportK8sClusterOutcomeCallable EdasClient::importK8sClusterCallable(const ImportK8sClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportK8sClusterOutcome()>>(
			[this, request]()
			{
			return this->importK8sCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::InsertApplicationOutcome EdasClient::insertApplication(const InsertApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertApplicationOutcome(InsertApplicationResult(outcome.result()));
	else
		return InsertApplicationOutcome(outcome.error());
}

void EdasClient::insertApplicationAsync(const InsertApplicationRequest& request, const InsertApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::InsertApplicationOutcomeCallable EdasClient::insertApplicationCallable(const InsertApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertApplicationOutcome()>>(
			[this, request]()
			{
			return this->insertApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::InsertClusterOutcome EdasClient::insertCluster(const InsertClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertClusterOutcome(InsertClusterResult(outcome.result()));
	else
		return InsertClusterOutcome(outcome.error());
}

void EdasClient::insertClusterAsync(const InsertClusterRequest& request, const InsertClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::InsertClusterOutcomeCallable EdasClient::insertClusterCallable(const InsertClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertClusterOutcome()>>(
			[this, request]()
			{
			return this->insertCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::InsertClusterMemberOutcome EdasClient::insertClusterMember(const InsertClusterMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertClusterMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertClusterMemberOutcome(InsertClusterMemberResult(outcome.result()));
	else
		return InsertClusterMemberOutcome(outcome.error());
}

void EdasClient::insertClusterMemberAsync(const InsertClusterMemberRequest& request, const InsertClusterMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertClusterMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::InsertClusterMemberOutcomeCallable EdasClient::insertClusterMemberCallable(const InsertClusterMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertClusterMemberOutcome()>>(
			[this, request]()
			{
			return this->insertClusterMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::InsertConfigCenterOutcome EdasClient::insertConfigCenter(const InsertConfigCenterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertConfigCenterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertConfigCenterOutcome(InsertConfigCenterResult(outcome.result()));
	else
		return InsertConfigCenterOutcome(outcome.error());
}

void EdasClient::insertConfigCenterAsync(const InsertConfigCenterRequest& request, const InsertConfigCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertConfigCenter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::InsertConfigCenterOutcomeCallable EdasClient::insertConfigCenterCallable(const InsertConfigCenterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertConfigCenterOutcome()>>(
			[this, request]()
			{
			return this->insertConfigCenter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::InsertDegradeControlOutcome EdasClient::insertDegradeControl(const InsertDegradeControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertDegradeControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertDegradeControlOutcome(InsertDegradeControlResult(outcome.result()));
	else
		return InsertDegradeControlOutcome(outcome.error());
}

void EdasClient::insertDegradeControlAsync(const InsertDegradeControlRequest& request, const InsertDegradeControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertDegradeControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::InsertDegradeControlOutcomeCallable EdasClient::insertDegradeControlCallable(const InsertDegradeControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertDegradeControlOutcome()>>(
			[this, request]()
			{
			return this->insertDegradeControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::InsertDeployGroupOutcome EdasClient::insertDeployGroup(const InsertDeployGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertDeployGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertDeployGroupOutcome(InsertDeployGroupResult(outcome.result()));
	else
		return InsertDeployGroupOutcome(outcome.error());
}

void EdasClient::insertDeployGroupAsync(const InsertDeployGroupRequest& request, const InsertDeployGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertDeployGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::InsertDeployGroupOutcomeCallable EdasClient::insertDeployGroupCallable(const InsertDeployGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertDeployGroupOutcome()>>(
			[this, request]()
			{
			return this->insertDeployGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::InsertFlowControlOutcome EdasClient::insertFlowControl(const InsertFlowControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertFlowControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertFlowControlOutcome(InsertFlowControlResult(outcome.result()));
	else
		return InsertFlowControlOutcome(outcome.error());
}

void EdasClient::insertFlowControlAsync(const InsertFlowControlRequest& request, const InsertFlowControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertFlowControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::InsertFlowControlOutcomeCallable EdasClient::insertFlowControlCallable(const InsertFlowControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertFlowControlOutcome()>>(
			[this, request]()
			{
			return this->insertFlowControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::InsertK8sApplicationOutcome EdasClient::insertK8sApplication(const InsertK8sApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertK8sApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertK8sApplicationOutcome(InsertK8sApplicationResult(outcome.result()));
	else
		return InsertK8sApplicationOutcome(outcome.error());
}

void EdasClient::insertK8sApplicationAsync(const InsertK8sApplicationRequest& request, const InsertK8sApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertK8sApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::InsertK8sApplicationOutcomeCallable EdasClient::insertK8sApplicationCallable(const InsertK8sApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertK8sApplicationOutcome()>>(
			[this, request]()
			{
			return this->insertK8sApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::InsertOrUpdateRegionOutcome EdasClient::insertOrUpdateRegion(const InsertOrUpdateRegionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertOrUpdateRegionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertOrUpdateRegionOutcome(InsertOrUpdateRegionResult(outcome.result()));
	else
		return InsertOrUpdateRegionOutcome(outcome.error());
}

void EdasClient::insertOrUpdateRegionAsync(const InsertOrUpdateRegionRequest& request, const InsertOrUpdateRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertOrUpdateRegion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::InsertOrUpdateRegionOutcomeCallable EdasClient::insertOrUpdateRegionCallable(const InsertOrUpdateRegionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertOrUpdateRegionOutcome()>>(
			[this, request]()
			{
			return this->insertOrUpdateRegion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::InsertRoleOutcome EdasClient::insertRole(const InsertRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertRoleOutcome(InsertRoleResult(outcome.result()));
	else
		return InsertRoleOutcome(outcome.error());
}

void EdasClient::insertRoleAsync(const InsertRoleRequest& request, const InsertRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::InsertRoleOutcomeCallable EdasClient::insertRoleCallable(const InsertRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertRoleOutcome()>>(
			[this, request]()
			{
			return this->insertRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::InsertServiceGroupOutcome EdasClient::insertServiceGroup(const InsertServiceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertServiceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertServiceGroupOutcome(InsertServiceGroupResult(outcome.result()));
	else
		return InsertServiceGroupOutcome(outcome.error());
}

void EdasClient::insertServiceGroupAsync(const InsertServiceGroupRequest& request, const InsertServiceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertServiceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::InsertServiceGroupOutcomeCallable EdasClient::insertServiceGroupCallable(const InsertServiceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertServiceGroupOutcome()>>(
			[this, request]()
			{
			return this->insertServiceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::InsertSwimmingLaneOutcome EdasClient::insertSwimmingLane(const InsertSwimmingLaneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertSwimmingLaneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertSwimmingLaneOutcome(InsertSwimmingLaneResult(outcome.result()));
	else
		return InsertSwimmingLaneOutcome(outcome.error());
}

void EdasClient::insertSwimmingLaneAsync(const InsertSwimmingLaneRequest& request, const InsertSwimmingLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertSwimmingLane(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::InsertSwimmingLaneOutcomeCallable EdasClient::insertSwimmingLaneCallable(const InsertSwimmingLaneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertSwimmingLaneOutcome()>>(
			[this, request]()
			{
			return this->insertSwimmingLane(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::InsertSwimmingLaneGroupOutcome EdasClient::insertSwimmingLaneGroup(const InsertSwimmingLaneGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertSwimmingLaneGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertSwimmingLaneGroupOutcome(InsertSwimmingLaneGroupResult(outcome.result()));
	else
		return InsertSwimmingLaneGroupOutcome(outcome.error());
}

void EdasClient::insertSwimmingLaneGroupAsync(const InsertSwimmingLaneGroupRequest& request, const InsertSwimmingLaneGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertSwimmingLaneGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::InsertSwimmingLaneGroupOutcomeCallable EdasClient::insertSwimmingLaneGroupCallable(const InsertSwimmingLaneGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertSwimmingLaneGroupOutcome()>>(
			[this, request]()
			{
			return this->insertSwimmingLaneGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::InstallAgentOutcome EdasClient::installAgent(const InstallAgentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InstallAgentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InstallAgentOutcome(InstallAgentResult(outcome.result()));
	else
		return InstallAgentOutcome(outcome.error());
}

void EdasClient::installAgentAsync(const InstallAgentRequest& request, const InstallAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, installAgent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::InstallAgentOutcomeCallable EdasClient::installAgentCallable(const InstallAgentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InstallAgentOutcome()>>(
			[this, request]()
			{
			return this->installAgent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListAliyunRegionOutcome EdasClient::listAliyunRegion(const ListAliyunRegionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAliyunRegionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAliyunRegionOutcome(ListAliyunRegionResult(outcome.result()));
	else
		return ListAliyunRegionOutcome(outcome.error());
}

void EdasClient::listAliyunRegionAsync(const ListAliyunRegionRequest& request, const ListAliyunRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAliyunRegion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListAliyunRegionOutcomeCallable EdasClient::listAliyunRegionCallable(const ListAliyunRegionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAliyunRegionOutcome()>>(
			[this, request]()
			{
			return this->listAliyunRegion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListApplicationOutcome EdasClient::listApplication(const ListApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationOutcome(ListApplicationResult(outcome.result()));
	else
		return ListApplicationOutcome(outcome.error());
}

void EdasClient::listApplicationAsync(const ListApplicationRequest& request, const ListApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListApplicationOutcomeCallable EdasClient::listApplicationCallable(const ListApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationOutcome()>>(
			[this, request]()
			{
			return this->listApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListApplicationEcuOutcome EdasClient::listApplicationEcu(const ListApplicationEcuRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationEcuOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationEcuOutcome(ListApplicationEcuResult(outcome.result()));
	else
		return ListApplicationEcuOutcome(outcome.error());
}

void EdasClient::listApplicationEcuAsync(const ListApplicationEcuRequest& request, const ListApplicationEcuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplicationEcu(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListApplicationEcuOutcomeCallable EdasClient::listApplicationEcuCallable(const ListApplicationEcuRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationEcuOutcome()>>(
			[this, request]()
			{
			return this->listApplicationEcu(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListAuthorityOutcome EdasClient::listAuthority(const ListAuthorityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAuthorityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAuthorityOutcome(ListAuthorityResult(outcome.result()));
	else
		return ListAuthorityOutcome(outcome.error());
}

void EdasClient::listAuthorityAsync(const ListAuthorityRequest& request, const ListAuthorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAuthority(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListAuthorityOutcomeCallable EdasClient::listAuthorityCallable(const ListAuthorityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAuthorityOutcome()>>(
			[this, request]()
			{
			return this->listAuthority(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListBuildPackOutcome EdasClient::listBuildPack(const ListBuildPackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBuildPackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBuildPackOutcome(ListBuildPackResult(outcome.result()));
	else
		return ListBuildPackOutcome(outcome.error());
}

void EdasClient::listBuildPackAsync(const ListBuildPackRequest& request, const ListBuildPackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBuildPack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListBuildPackOutcomeCallable EdasClient::listBuildPackCallable(const ListBuildPackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBuildPackOutcome()>>(
			[this, request]()
			{
			return this->listBuildPack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListCSBGatewayOutcome EdasClient::listCSBGateway(const ListCSBGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCSBGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCSBGatewayOutcome(ListCSBGatewayResult(outcome.result()));
	else
		return ListCSBGatewayOutcome(outcome.error());
}

void EdasClient::listCSBGatewayAsync(const ListCSBGatewayRequest& request, const ListCSBGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCSBGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListCSBGatewayOutcomeCallable EdasClient::listCSBGatewayCallable(const ListCSBGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCSBGatewayOutcome()>>(
			[this, request]()
			{
			return this->listCSBGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListChildrenStacksOutcome EdasClient::listChildrenStacks(const ListChildrenStacksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListChildrenStacksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListChildrenStacksOutcome(ListChildrenStacksResult(outcome.result()));
	else
		return ListChildrenStacksOutcome(outcome.error());
}

void EdasClient::listChildrenStacksAsync(const ListChildrenStacksRequest& request, const ListChildrenStacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listChildrenStacks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListChildrenStacksOutcomeCallable EdasClient::listChildrenStacksCallable(const ListChildrenStacksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListChildrenStacksOutcome()>>(
			[this, request]()
			{
			return this->listChildrenStacks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListClusterOutcome EdasClient::listCluster(const ListClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterOutcome(ListClusterResult(outcome.result()));
	else
		return ListClusterOutcome(outcome.error());
}

void EdasClient::listClusterAsync(const ListClusterRequest& request, const ListClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListClusterOutcomeCallable EdasClient::listClusterCallable(const ListClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterOutcome()>>(
			[this, request]()
			{
			return this->listCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListClusterMembersOutcome EdasClient::listClusterMembers(const ListClusterMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterMembersOutcome(ListClusterMembersResult(outcome.result()));
	else
		return ListClusterMembersOutcome(outcome.error());
}

void EdasClient::listClusterMembersAsync(const ListClusterMembersRequest& request, const ListClusterMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListClusterMembersOutcomeCallable EdasClient::listClusterMembersCallable(const ListClusterMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterMembersOutcome()>>(
			[this, request]()
			{
			return this->listClusterMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListComponentsOutcome EdasClient::listComponents(const ListComponentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListComponentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListComponentsOutcome(ListComponentsResult(outcome.result()));
	else
		return ListComponentsOutcome(outcome.error());
}

void EdasClient::listComponentsAsync(const ListComponentsRequest& request, const ListComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listComponents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListComponentsOutcomeCallable EdasClient::listComponentsCallable(const ListComponentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListComponentsOutcome()>>(
			[this, request]()
			{
			return this->listComponents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListConfigCentersOutcome EdasClient::listConfigCenters(const ListConfigCentersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListConfigCentersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListConfigCentersOutcome(ListConfigCentersResult(outcome.result()));
	else
		return ListConfigCentersOutcome(outcome.error());
}

void EdasClient::listConfigCentersAsync(const ListConfigCentersRequest& request, const ListConfigCentersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listConfigCenters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListConfigCentersOutcomeCallable EdasClient::listConfigCentersCallable(const ListConfigCentersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListConfigCentersOutcome()>>(
			[this, request]()
			{
			return this->listConfigCenters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListConsumedServicesOutcome EdasClient::listConsumedServices(const ListConsumedServicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListConsumedServicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListConsumedServicesOutcome(ListConsumedServicesResult(outcome.result()));
	else
		return ListConsumedServicesOutcome(outcome.error());
}

void EdasClient::listConsumedServicesAsync(const ListConsumedServicesRequest& request, const ListConsumedServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listConsumedServices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListConsumedServicesOutcomeCallable EdasClient::listConsumedServicesCallable(const ListConsumedServicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListConsumedServicesOutcome()>>(
			[this, request]()
			{
			return this->listConsumedServices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListConvertableEcuOutcome EdasClient::listConvertableEcu(const ListConvertableEcuRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListConvertableEcuOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListConvertableEcuOutcome(ListConvertableEcuResult(outcome.result()));
	else
		return ListConvertableEcuOutcome(outcome.error());
}

void EdasClient::listConvertableEcuAsync(const ListConvertableEcuRequest& request, const ListConvertableEcuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listConvertableEcu(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListConvertableEcuOutcomeCallable EdasClient::listConvertableEcuCallable(const ListConvertableEcuRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListConvertableEcuOutcome()>>(
			[this, request]()
			{
			return this->listConvertableEcu(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListDegradeControlsOutcome EdasClient::listDegradeControls(const ListDegradeControlsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDegradeControlsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDegradeControlsOutcome(ListDegradeControlsResult(outcome.result()));
	else
		return ListDegradeControlsOutcome(outcome.error());
}

void EdasClient::listDegradeControlsAsync(const ListDegradeControlsRequest& request, const ListDegradeControlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDegradeControls(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListDegradeControlsOutcomeCallable EdasClient::listDegradeControlsCallable(const ListDegradeControlsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDegradeControlsOutcome()>>(
			[this, request]()
			{
			return this->listDegradeControls(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListDeployGroupOutcome EdasClient::listDeployGroup(const ListDeployGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDeployGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDeployGroupOutcome(ListDeployGroupResult(outcome.result()));
	else
		return ListDeployGroupOutcome(outcome.error());
}

void EdasClient::listDeployGroupAsync(const ListDeployGroupRequest& request, const ListDeployGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDeployGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListDeployGroupOutcomeCallable EdasClient::listDeployGroupCallable(const ListDeployGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDeployGroupOutcome()>>(
			[this, request]()
			{
			return this->listDeployGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListEcsNotInClusterOutcome EdasClient::listEcsNotInCluster(const ListEcsNotInClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEcsNotInClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEcsNotInClusterOutcome(ListEcsNotInClusterResult(outcome.result()));
	else
		return ListEcsNotInClusterOutcome(outcome.error());
}

void EdasClient::listEcsNotInClusterAsync(const ListEcsNotInClusterRequest& request, const ListEcsNotInClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEcsNotInCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListEcsNotInClusterOutcomeCallable EdasClient::listEcsNotInClusterCallable(const ListEcsNotInClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEcsNotInClusterOutcome()>>(
			[this, request]()
			{
			return this->listEcsNotInCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListEcuByRegionOutcome EdasClient::listEcuByRegion(const ListEcuByRegionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEcuByRegionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEcuByRegionOutcome(ListEcuByRegionResult(outcome.result()));
	else
		return ListEcuByRegionOutcome(outcome.error());
}

void EdasClient::listEcuByRegionAsync(const ListEcuByRegionRequest& request, const ListEcuByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEcuByRegion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListEcuByRegionOutcomeCallable EdasClient::listEcuByRegionCallable(const ListEcuByRegionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEcuByRegionOutcome()>>(
			[this, request]()
			{
			return this->listEcuByRegion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListFlowControlsOutcome EdasClient::listFlowControls(const ListFlowControlsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowControlsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowControlsOutcome(ListFlowControlsResult(outcome.result()));
	else
		return ListFlowControlsOutcome(outcome.error());
}

void EdasClient::listFlowControlsAsync(const ListFlowControlsRequest& request, const ListFlowControlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowControls(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListFlowControlsOutcomeCallable EdasClient::listFlowControlsCallable(const ListFlowControlsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowControlsOutcome()>>(
			[this, request]()
			{
			return this->listFlowControls(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListHistoryDeployVersionOutcome EdasClient::listHistoryDeployVersion(const ListHistoryDeployVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListHistoryDeployVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListHistoryDeployVersionOutcome(ListHistoryDeployVersionResult(outcome.result()));
	else
		return ListHistoryDeployVersionOutcome(outcome.error());
}

void EdasClient::listHistoryDeployVersionAsync(const ListHistoryDeployVersionRequest& request, const ListHistoryDeployVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listHistoryDeployVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListHistoryDeployVersionOutcomeCallable EdasClient::listHistoryDeployVersionCallable(const ListHistoryDeployVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListHistoryDeployVersionOutcome()>>(
			[this, request]()
			{
			return this->listHistoryDeployVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListK8sConfigMapsOutcome EdasClient::listK8sConfigMaps(const ListK8sConfigMapsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListK8sConfigMapsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListK8sConfigMapsOutcome(ListK8sConfigMapsResult(outcome.result()));
	else
		return ListK8sConfigMapsOutcome(outcome.error());
}

void EdasClient::listK8sConfigMapsAsync(const ListK8sConfigMapsRequest& request, const ListK8sConfigMapsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listK8sConfigMaps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListK8sConfigMapsOutcomeCallable EdasClient::listK8sConfigMapsCallable(const ListK8sConfigMapsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListK8sConfigMapsOutcome()>>(
			[this, request]()
			{
			return this->listK8sConfigMaps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListK8sIngressRulesOutcome EdasClient::listK8sIngressRules(const ListK8sIngressRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListK8sIngressRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListK8sIngressRulesOutcome(ListK8sIngressRulesResult(outcome.result()));
	else
		return ListK8sIngressRulesOutcome(outcome.error());
}

void EdasClient::listK8sIngressRulesAsync(const ListK8sIngressRulesRequest& request, const ListK8sIngressRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listK8sIngressRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListK8sIngressRulesOutcomeCallable EdasClient::listK8sIngressRulesCallable(const ListK8sIngressRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListK8sIngressRulesOutcome()>>(
			[this, request]()
			{
			return this->listK8sIngressRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListK8sPvcOutcome EdasClient::listK8sPvc(const ListK8sPvcRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListK8sPvcOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListK8sPvcOutcome(ListK8sPvcResult(outcome.result()));
	else
		return ListK8sPvcOutcome(outcome.error());
}

void EdasClient::listK8sPvcAsync(const ListK8sPvcRequest& request, const ListK8sPvcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listK8sPvc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListK8sPvcOutcomeCallable EdasClient::listK8sPvcCallable(const ListK8sPvcRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListK8sPvcOutcome()>>(
			[this, request]()
			{
			return this->listK8sPvc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListK8sSecretsOutcome EdasClient::listK8sSecrets(const ListK8sSecretsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListK8sSecretsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListK8sSecretsOutcome(ListK8sSecretsResult(outcome.result()));
	else
		return ListK8sSecretsOutcome(outcome.error());
}

void EdasClient::listK8sSecretsAsync(const ListK8sSecretsRequest& request, const ListK8sSecretsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listK8sSecrets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListK8sSecretsOutcomeCallable EdasClient::listK8sSecretsCallable(const ListK8sSecretsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListK8sSecretsOutcome()>>(
			[this, request]()
			{
			return this->listK8sSecrets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListMethodsOutcome EdasClient::listMethods(const ListMethodsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMethodsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMethodsOutcome(ListMethodsResult(outcome.result()));
	else
		return ListMethodsOutcome(outcome.error());
}

void EdasClient::listMethodsAsync(const ListMethodsRequest& request, const ListMethodsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMethods(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListMethodsOutcomeCallable EdasClient::listMethodsCallable(const ListMethodsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMethodsOutcome()>>(
			[this, request]()
			{
			return this->listMethods(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListOperationLogsOutcome EdasClient::listOperationLogs(const ListOperationLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOperationLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOperationLogsOutcome(ListOperationLogsResult(outcome.result()));
	else
		return ListOperationLogsOutcome(outcome.error());
}

void EdasClient::listOperationLogsAsync(const ListOperationLogsRequest& request, const ListOperationLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOperationLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListOperationLogsOutcomeCallable EdasClient::listOperationLogsCallable(const ListOperationLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOperationLogsOutcome()>>(
			[this, request]()
			{
			return this->listOperationLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListPublishedServicesOutcome EdasClient::listPublishedServices(const ListPublishedServicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPublishedServicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPublishedServicesOutcome(ListPublishedServicesResult(outcome.result()));
	else
		return ListPublishedServicesOutcome(outcome.error());
}

void EdasClient::listPublishedServicesAsync(const ListPublishedServicesRequest& request, const ListPublishedServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPublishedServices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListPublishedServicesOutcomeCallable EdasClient::listPublishedServicesCallable(const ListPublishedServicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPublishedServicesOutcome()>>(
			[this, request]()
			{
			return this->listPublishedServices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListRecentChangeOrderOutcome EdasClient::listRecentChangeOrder(const ListRecentChangeOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRecentChangeOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRecentChangeOrderOutcome(ListRecentChangeOrderResult(outcome.result()));
	else
		return ListRecentChangeOrderOutcome(outcome.error());
}

void EdasClient::listRecentChangeOrderAsync(const ListRecentChangeOrderRequest& request, const ListRecentChangeOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRecentChangeOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListRecentChangeOrderOutcomeCallable EdasClient::listRecentChangeOrderCallable(const ListRecentChangeOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRecentChangeOrderOutcome()>>(
			[this, request]()
			{
			return this->listRecentChangeOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListResourceGroupOutcome EdasClient::listResourceGroup(const ListResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourceGroupOutcome(ListResourceGroupResult(outcome.result()));
	else
		return ListResourceGroupOutcome(outcome.error());
}

void EdasClient::listResourceGroupAsync(const ListResourceGroupRequest& request, const ListResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListResourceGroupOutcomeCallable EdasClient::listResourceGroupCallable(const ListResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->listResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListRoleOutcome EdasClient::listRole(const ListRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRoleOutcome(ListRoleResult(outcome.result()));
	else
		return ListRoleOutcome(outcome.error());
}

void EdasClient::listRoleAsync(const ListRoleRequest& request, const ListRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListRoleOutcomeCallable EdasClient::listRoleCallable(const ListRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRoleOutcome()>>(
			[this, request]()
			{
			return this->listRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListRootStacksOutcome EdasClient::listRootStacks(const ListRootStacksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRootStacksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRootStacksOutcome(ListRootStacksResult(outcome.result()));
	else
		return ListRootStacksOutcome(outcome.error());
}

void EdasClient::listRootStacksAsync(const ListRootStacksRequest& request, const ListRootStacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRootStacks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListRootStacksOutcomeCallable EdasClient::listRootStacksCallable(const ListRootStacksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRootStacksOutcome()>>(
			[this, request]()
			{
			return this->listRootStacks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListScaleOutEcuOutcome EdasClient::listScaleOutEcu(const ListScaleOutEcuRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListScaleOutEcuOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListScaleOutEcuOutcome(ListScaleOutEcuResult(outcome.result()));
	else
		return ListScaleOutEcuOutcome(outcome.error());
}

void EdasClient::listScaleOutEcuAsync(const ListScaleOutEcuRequest& request, const ListScaleOutEcuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listScaleOutEcu(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListScaleOutEcuOutcomeCallable EdasClient::listScaleOutEcuCallable(const ListScaleOutEcuRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListScaleOutEcuOutcome()>>(
			[this, request]()
			{
			return this->listScaleOutEcu(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListServiceGroupsOutcome EdasClient::listServiceGroups(const ListServiceGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListServiceGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListServiceGroupsOutcome(ListServiceGroupsResult(outcome.result()));
	else
		return ListServiceGroupsOutcome(outcome.error());
}

void EdasClient::listServiceGroupsAsync(const ListServiceGroupsRequest& request, const ListServiceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listServiceGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListServiceGroupsOutcomeCallable EdasClient::listServiceGroupsCallable(const ListServiceGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListServiceGroupsOutcome()>>(
			[this, request]()
			{
			return this->listServiceGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListSlbOutcome EdasClient::listSlb(const ListSlbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSlbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSlbOutcome(ListSlbResult(outcome.result()));
	else
		return ListSlbOutcome(outcome.error());
}

void EdasClient::listSlbAsync(const ListSlbRequest& request, const ListSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSlb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListSlbOutcomeCallable EdasClient::listSlbCallable(const ListSlbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSlbOutcome()>>(
			[this, request]()
			{
			return this->listSlb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListStatusOutcome EdasClient::listStatus(const ListStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListStatusOutcome(ListStatusResult(outcome.result()));
	else
		return ListStatusOutcome(outcome.error());
}

void EdasClient::listStatusAsync(const ListStatusRequest& request, const ListStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListStatusOutcomeCallable EdasClient::listStatusCallable(const ListStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListStatusOutcome()>>(
			[this, request]()
			{
			return this->listStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListSubAccountOutcome EdasClient::listSubAccount(const ListSubAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSubAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSubAccountOutcome(ListSubAccountResult(outcome.result()));
	else
		return ListSubAccountOutcome(outcome.error());
}

void EdasClient::listSubAccountAsync(const ListSubAccountRequest& request, const ListSubAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSubAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListSubAccountOutcomeCallable EdasClient::listSubAccountCallable(const ListSubAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSubAccountOutcome()>>(
			[this, request]()
			{
			return this->listSubAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListSwimmingLaneOutcome EdasClient::listSwimmingLane(const ListSwimmingLaneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSwimmingLaneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSwimmingLaneOutcome(ListSwimmingLaneResult(outcome.result()));
	else
		return ListSwimmingLaneOutcome(outcome.error());
}

void EdasClient::listSwimmingLaneAsync(const ListSwimmingLaneRequest& request, const ListSwimmingLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSwimmingLane(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListSwimmingLaneOutcomeCallable EdasClient::listSwimmingLaneCallable(const ListSwimmingLaneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSwimmingLaneOutcome()>>(
			[this, request]()
			{
			return this->listSwimmingLane(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListSwimmingLaneGroupOutcome EdasClient::listSwimmingLaneGroup(const ListSwimmingLaneGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSwimmingLaneGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSwimmingLaneGroupOutcome(ListSwimmingLaneGroupResult(outcome.result()));
	else
		return ListSwimmingLaneGroupOutcome(outcome.error());
}

void EdasClient::listSwimmingLaneGroupAsync(const ListSwimmingLaneGroupRequest& request, const ListSwimmingLaneGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSwimmingLaneGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListSwimmingLaneGroupOutcomeCallable EdasClient::listSwimmingLaneGroupCallable(const ListSwimmingLaneGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSwimmingLaneGroupOutcome()>>(
			[this, request]()
			{
			return this->listSwimmingLaneGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListTagResourcesOutcome EdasClient::listTagResources(const ListTagResourcesRequest &request) const
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

void EdasClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListTagResourcesOutcomeCallable EdasClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListUserDefineRegionOutcome EdasClient::listUserDefineRegion(const ListUserDefineRegionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserDefineRegionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserDefineRegionOutcome(ListUserDefineRegionResult(outcome.result()));
	else
		return ListUserDefineRegionOutcome(outcome.error());
}

void EdasClient::listUserDefineRegionAsync(const ListUserDefineRegionRequest& request, const ListUserDefineRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserDefineRegion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListUserDefineRegionOutcomeCallable EdasClient::listUserDefineRegionCallable(const ListUserDefineRegionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserDefineRegionOutcome()>>(
			[this, request]()
			{
			return this->listUserDefineRegion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ListVpcOutcome EdasClient::listVpc(const ListVpcRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVpcOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVpcOutcome(ListVpcResult(outcome.result()));
	else
		return ListVpcOutcome(outcome.error());
}

void EdasClient::listVpcAsync(const ListVpcRequest& request, const ListVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVpc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ListVpcOutcomeCallable EdasClient::listVpcCallable(const ListVpcRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVpcOutcome()>>(
			[this, request]()
			{
			return this->listVpc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::MigrateEcuOutcome EdasClient::migrateEcu(const MigrateEcuRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MigrateEcuOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MigrateEcuOutcome(MigrateEcuResult(outcome.result()));
	else
		return MigrateEcuOutcome(outcome.error());
}

void EdasClient::migrateEcuAsync(const MigrateEcuRequest& request, const MigrateEcuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, migrateEcu(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::MigrateEcuOutcomeCallable EdasClient::migrateEcuCallable(const MigrateEcuRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MigrateEcuOutcome()>>(
			[this, request]()
			{
			return this->migrateEcu(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ModifyScalingRuleOutcome EdasClient::modifyScalingRule(const ModifyScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyScalingRuleOutcome(ModifyScalingRuleResult(outcome.result()));
	else
		return ModifyScalingRuleOutcome(outcome.error());
}

void EdasClient::modifyScalingRuleAsync(const ModifyScalingRuleRequest& request, const ModifyScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ModifyScalingRuleOutcomeCallable EdasClient::modifyScalingRuleCallable(const ModifyScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::QueryApplicationStatusOutcome EdasClient::queryApplicationStatus(const QueryApplicationStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryApplicationStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryApplicationStatusOutcome(QueryApplicationStatusResult(outcome.result()));
	else
		return QueryApplicationStatusOutcome(outcome.error());
}

void EdasClient::queryApplicationStatusAsync(const QueryApplicationStatusRequest& request, const QueryApplicationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryApplicationStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::QueryApplicationStatusOutcomeCallable EdasClient::queryApplicationStatusCallable(const QueryApplicationStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryApplicationStatusOutcome()>>(
			[this, request]()
			{
			return this->queryApplicationStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::QueryConfigCenterOutcome EdasClient::queryConfigCenter(const QueryConfigCenterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryConfigCenterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryConfigCenterOutcome(QueryConfigCenterResult(outcome.result()));
	else
		return QueryConfigCenterOutcome(outcome.error());
}

void EdasClient::queryConfigCenterAsync(const QueryConfigCenterRequest& request, const QueryConfigCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryConfigCenter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::QueryConfigCenterOutcomeCallable EdasClient::queryConfigCenterCallable(const QueryConfigCenterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryConfigCenterOutcome()>>(
			[this, request]()
			{
			return this->queryConfigCenter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::QueryEccInfoOutcome EdasClient::queryEccInfo(const QueryEccInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEccInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEccInfoOutcome(QueryEccInfoResult(outcome.result()));
	else
		return QueryEccInfoOutcome(outcome.error());
}

void EdasClient::queryEccInfoAsync(const QueryEccInfoRequest& request, const QueryEccInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEccInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::QueryEccInfoOutcomeCallable EdasClient::queryEccInfoCallable(const QueryEccInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEccInfoOutcome()>>(
			[this, request]()
			{
			return this->queryEccInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::QueryK8sClusterLogProjectInfoOutcome EdasClient::queryK8sClusterLogProjectInfo(const QueryK8sClusterLogProjectInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryK8sClusterLogProjectInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryK8sClusterLogProjectInfoOutcome(QueryK8sClusterLogProjectInfoResult(outcome.result()));
	else
		return QueryK8sClusterLogProjectInfoOutcome(outcome.error());
}

void EdasClient::queryK8sClusterLogProjectInfoAsync(const QueryK8sClusterLogProjectInfoRequest& request, const QueryK8sClusterLogProjectInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryK8sClusterLogProjectInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::QueryK8sClusterLogProjectInfoOutcomeCallable EdasClient::queryK8sClusterLogProjectInfoCallable(const QueryK8sClusterLogProjectInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryK8sClusterLogProjectInfoOutcome()>>(
			[this, request]()
			{
			return this->queryK8sClusterLogProjectInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::QueryMigrateEcuListOutcome EdasClient::queryMigrateEcuList(const QueryMigrateEcuListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMigrateEcuListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMigrateEcuListOutcome(QueryMigrateEcuListResult(outcome.result()));
	else
		return QueryMigrateEcuListOutcome(outcome.error());
}

void EdasClient::queryMigrateEcuListAsync(const QueryMigrateEcuListRequest& request, const QueryMigrateEcuListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMigrateEcuList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::QueryMigrateEcuListOutcomeCallable EdasClient::queryMigrateEcuListCallable(const QueryMigrateEcuListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMigrateEcuListOutcome()>>(
			[this, request]()
			{
			return this->queryMigrateEcuList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::QueryMigrateRegionListOutcome EdasClient::queryMigrateRegionList(const QueryMigrateRegionListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMigrateRegionListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMigrateRegionListOutcome(QueryMigrateRegionListResult(outcome.result()));
	else
		return QueryMigrateRegionListOutcome(outcome.error());
}

void EdasClient::queryMigrateRegionListAsync(const QueryMigrateRegionListRequest& request, const QueryMigrateRegionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMigrateRegionList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::QueryMigrateRegionListOutcomeCallable EdasClient::queryMigrateRegionListCallable(const QueryMigrateRegionListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMigrateRegionListOutcome()>>(
			[this, request]()
			{
			return this->queryMigrateRegionList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::QueryRegionConfigOutcome EdasClient::queryRegionConfig(const QueryRegionConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRegionConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRegionConfigOutcome(QueryRegionConfigResult(outcome.result()));
	else
		return QueryRegionConfigOutcome(outcome.error());
}

void EdasClient::queryRegionConfigAsync(const QueryRegionConfigRequest& request, const QueryRegionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRegionConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::QueryRegionConfigOutcomeCallable EdasClient::queryRegionConfigCallable(const QueryRegionConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRegionConfigOutcome()>>(
			[this, request]()
			{
			return this->queryRegionConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::QueryServiceTimeConfigOutcome EdasClient::queryServiceTimeConfig(const QueryServiceTimeConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryServiceTimeConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryServiceTimeConfigOutcome(QueryServiceTimeConfigResult(outcome.result()));
	else
		return QueryServiceTimeConfigOutcome(outcome.error());
}

void EdasClient::queryServiceTimeConfigAsync(const QueryServiceTimeConfigRequest& request, const QueryServiceTimeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryServiceTimeConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::QueryServiceTimeConfigOutcomeCallable EdasClient::queryServiceTimeConfigCallable(const QueryServiceTimeConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryServiceTimeConfigOutcome()>>(
			[this, request]()
			{
			return this->queryServiceTimeConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::QuerySlsLogStoreListOutcome EdasClient::querySlsLogStoreList(const QuerySlsLogStoreListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySlsLogStoreListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySlsLogStoreListOutcome(QuerySlsLogStoreListResult(outcome.result()));
	else
		return QuerySlsLogStoreListOutcome(outcome.error());
}

void EdasClient::querySlsLogStoreListAsync(const QuerySlsLogStoreListRequest& request, const QuerySlsLogStoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySlsLogStoreList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::QuerySlsLogStoreListOutcomeCallable EdasClient::querySlsLogStoreListCallable(const QuerySlsLogStoreListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySlsLogStoreListOutcome()>>(
			[this, request]()
			{
			return this->querySlsLogStoreList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::RemoveMockRuleOutcome EdasClient::removeMockRule(const RemoveMockRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveMockRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveMockRuleOutcome(RemoveMockRuleResult(outcome.result()));
	else
		return RemoveMockRuleOutcome(outcome.error());
}

void EdasClient::removeMockRuleAsync(const RemoveMockRuleRequest& request, const RemoveMockRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeMockRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::RemoveMockRuleOutcomeCallable EdasClient::removeMockRuleCallable(const RemoveMockRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveMockRuleOutcome()>>(
			[this, request]()
			{
			return this->removeMockRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ResetApplicationOutcome EdasClient::resetApplication(const ResetApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetApplicationOutcome(ResetApplicationResult(outcome.result()));
	else
		return ResetApplicationOutcome(outcome.error());
}

void EdasClient::resetApplicationAsync(const ResetApplicationRequest& request, const ResetApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ResetApplicationOutcomeCallable EdasClient::resetApplicationCallable(const ResetApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetApplicationOutcome()>>(
			[this, request]()
			{
			return this->resetApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::RestartApplicationOutcome EdasClient::restartApplication(const RestartApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartApplicationOutcome(RestartApplicationResult(outcome.result()));
	else
		return RestartApplicationOutcome(outcome.error());
}

void EdasClient::restartApplicationAsync(const RestartApplicationRequest& request, const RestartApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::RestartApplicationOutcomeCallable EdasClient::restartApplicationCallable(const RestartApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartApplicationOutcome()>>(
			[this, request]()
			{
			return this->restartApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::RestartK8sApplicationOutcome EdasClient::restartK8sApplication(const RestartK8sApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartK8sApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartK8sApplicationOutcome(RestartK8sApplicationResult(outcome.result()));
	else
		return RestartK8sApplicationOutcome(outcome.error());
}

void EdasClient::restartK8sApplicationAsync(const RestartK8sApplicationRequest& request, const RestartK8sApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartK8sApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::RestartK8sApplicationOutcomeCallable EdasClient::restartK8sApplicationCallable(const RestartK8sApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartK8sApplicationOutcome()>>(
			[this, request]()
			{
			return this->restartK8sApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::RetryChangeOrderTaskOutcome EdasClient::retryChangeOrderTask(const RetryChangeOrderTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RetryChangeOrderTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RetryChangeOrderTaskOutcome(RetryChangeOrderTaskResult(outcome.result()));
	else
		return RetryChangeOrderTaskOutcome(outcome.error());
}

void EdasClient::retryChangeOrderTaskAsync(const RetryChangeOrderTaskRequest& request, const RetryChangeOrderTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, retryChangeOrderTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::RetryChangeOrderTaskOutcomeCallable EdasClient::retryChangeOrderTaskCallable(const RetryChangeOrderTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RetryChangeOrderTaskOutcome()>>(
			[this, request]()
			{
			return this->retryChangeOrderTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::RollbackApplicationOutcome EdasClient::rollbackApplication(const RollbackApplicationRequest &request) const
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

void EdasClient::rollbackApplicationAsync(const RollbackApplicationRequest& request, const RollbackApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rollbackApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::RollbackApplicationOutcomeCallable EdasClient::rollbackApplicationCallable(const RollbackApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RollbackApplicationOutcome()>>(
			[this, request]()
			{
			return this->rollbackApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::RollbackChangeOrderOutcome EdasClient::rollbackChangeOrder(const RollbackChangeOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RollbackChangeOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RollbackChangeOrderOutcome(RollbackChangeOrderResult(outcome.result()));
	else
		return RollbackChangeOrderOutcome(outcome.error());
}

void EdasClient::rollbackChangeOrderAsync(const RollbackChangeOrderRequest& request, const RollbackChangeOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rollbackChangeOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::RollbackChangeOrderOutcomeCallable EdasClient::rollbackChangeOrderCallable(const RollbackChangeOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RollbackChangeOrderOutcome()>>(
			[this, request]()
			{
			return this->rollbackChangeOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ScaleInApplicationOutcome EdasClient::scaleInApplication(const ScaleInApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ScaleInApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ScaleInApplicationOutcome(ScaleInApplicationResult(outcome.result()));
	else
		return ScaleInApplicationOutcome(outcome.error());
}

void EdasClient::scaleInApplicationAsync(const ScaleInApplicationRequest& request, const ScaleInApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, scaleInApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ScaleInApplicationOutcomeCallable EdasClient::scaleInApplicationCallable(const ScaleInApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ScaleInApplicationOutcome()>>(
			[this, request]()
			{
			return this->scaleInApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ScaleK8sApplicationOutcome EdasClient::scaleK8sApplication(const ScaleK8sApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ScaleK8sApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ScaleK8sApplicationOutcome(ScaleK8sApplicationResult(outcome.result()));
	else
		return ScaleK8sApplicationOutcome(outcome.error());
}

void EdasClient::scaleK8sApplicationAsync(const ScaleK8sApplicationRequest& request, const ScaleK8sApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, scaleK8sApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ScaleK8sApplicationOutcomeCallable EdasClient::scaleK8sApplicationCallable(const ScaleK8sApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ScaleK8sApplicationOutcome()>>(
			[this, request]()
			{
			return this->scaleK8sApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ScaleOutApplicationOutcome EdasClient::scaleOutApplication(const ScaleOutApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ScaleOutApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ScaleOutApplicationOutcome(ScaleOutApplicationResult(outcome.result()));
	else
		return ScaleOutApplicationOutcome(outcome.error());
}

void EdasClient::scaleOutApplicationAsync(const ScaleOutApplicationRequest& request, const ScaleOutApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, scaleOutApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ScaleOutApplicationOutcomeCallable EdasClient::scaleOutApplicationCallable(const ScaleOutApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ScaleOutApplicationOutcome()>>(
			[this, request]()
			{
			return this->scaleOutApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ScaleoutApplicationWithNewInstancesOutcome EdasClient::scaleoutApplicationWithNewInstances(const ScaleoutApplicationWithNewInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ScaleoutApplicationWithNewInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ScaleoutApplicationWithNewInstancesOutcome(ScaleoutApplicationWithNewInstancesResult(outcome.result()));
	else
		return ScaleoutApplicationWithNewInstancesOutcome(outcome.error());
}

void EdasClient::scaleoutApplicationWithNewInstancesAsync(const ScaleoutApplicationWithNewInstancesRequest& request, const ScaleoutApplicationWithNewInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, scaleoutApplicationWithNewInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ScaleoutApplicationWithNewInstancesOutcomeCallable EdasClient::scaleoutApplicationWithNewInstancesCallable(const ScaleoutApplicationWithNewInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ScaleoutApplicationWithNewInstancesOutcome()>>(
			[this, request]()
			{
			return this->scaleoutApplicationWithNewInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::StartApplicationOutcome EdasClient::startApplication(const StartApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartApplicationOutcome(StartApplicationResult(outcome.result()));
	else
		return StartApplicationOutcome(outcome.error());
}

void EdasClient::startApplicationAsync(const StartApplicationRequest& request, const StartApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::StartApplicationOutcomeCallable EdasClient::startApplicationCallable(const StartApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartApplicationOutcome()>>(
			[this, request]()
			{
			return this->startApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::StartK8sApplicationOutcome EdasClient::startK8sApplication(const StartK8sApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartK8sApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartK8sApplicationOutcome(StartK8sApplicationResult(outcome.result()));
	else
		return StartK8sApplicationOutcome(outcome.error());
}

void EdasClient::startK8sApplicationAsync(const StartK8sApplicationRequest& request, const StartK8sApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startK8sApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::StartK8sApplicationOutcomeCallable EdasClient::startK8sApplicationCallable(const StartK8sApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartK8sApplicationOutcome()>>(
			[this, request]()
			{
			return this->startK8sApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::StopApplicationOutcome EdasClient::stopApplication(const StopApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopApplicationOutcome(StopApplicationResult(outcome.result()));
	else
		return StopApplicationOutcome(outcome.error());
}

void EdasClient::stopApplicationAsync(const StopApplicationRequest& request, const StopApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::StopApplicationOutcomeCallable EdasClient::stopApplicationCallable(const StopApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopApplicationOutcome()>>(
			[this, request]()
			{
			return this->stopApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::StopK8sApplicationOutcome EdasClient::stopK8sApplication(const StopK8sApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopK8sApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopK8sApplicationOutcome(StopK8sApplicationResult(outcome.result()));
	else
		return StopK8sApplicationOutcome(outcome.error());
}

void EdasClient::stopK8sApplicationAsync(const StopK8sApplicationRequest& request, const StopK8sApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopK8sApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::StopK8sApplicationOutcomeCallable EdasClient::stopK8sApplicationCallable(const StopK8sApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopK8sApplicationOutcome()>>(
			[this, request]()
			{
			return this->stopK8sApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::SwitchAdvancedMonitoringOutcome EdasClient::switchAdvancedMonitoring(const SwitchAdvancedMonitoringRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchAdvancedMonitoringOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchAdvancedMonitoringOutcome(SwitchAdvancedMonitoringResult(outcome.result()));
	else
		return SwitchAdvancedMonitoringOutcome(outcome.error());
}

void EdasClient::switchAdvancedMonitoringAsync(const SwitchAdvancedMonitoringRequest& request, const SwitchAdvancedMonitoringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchAdvancedMonitoring(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::SwitchAdvancedMonitoringOutcomeCallable EdasClient::switchAdvancedMonitoringCallable(const SwitchAdvancedMonitoringRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchAdvancedMonitoringOutcome()>>(
			[this, request]()
			{
			return this->switchAdvancedMonitoring(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::SynchronizeResourceOutcome EdasClient::synchronizeResource(const SynchronizeResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SynchronizeResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SynchronizeResourceOutcome(SynchronizeResourceResult(outcome.result()));
	else
		return SynchronizeResourceOutcome(outcome.error());
}

void EdasClient::synchronizeResourceAsync(const SynchronizeResourceRequest& request, const SynchronizeResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, synchronizeResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::SynchronizeResourceOutcomeCallable EdasClient::synchronizeResourceCallable(const SynchronizeResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SynchronizeResourceOutcome()>>(
			[this, request]()
			{
			return this->synchronizeResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::TagResourcesOutcome EdasClient::tagResources(const TagResourcesRequest &request) const
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

void EdasClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::TagResourcesOutcomeCallable EdasClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ToggleGrayIngressOutcome EdasClient::toggleGrayIngress(const ToggleGrayIngressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ToggleGrayIngressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ToggleGrayIngressOutcome(ToggleGrayIngressResult(outcome.result()));
	else
		return ToggleGrayIngressOutcome(outcome.error());
}

void EdasClient::toggleGrayIngressAsync(const ToggleGrayIngressRequest& request, const ToggleGrayIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, toggleGrayIngress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ToggleGrayIngressOutcomeCallable EdasClient::toggleGrayIngressCallable(const ToggleGrayIngressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ToggleGrayIngressOutcome()>>(
			[this, request]()
			{
			return this->toggleGrayIngress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::TransformClusterMemberOutcome EdasClient::transformClusterMember(const TransformClusterMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TransformClusterMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TransformClusterMemberOutcome(TransformClusterMemberResult(outcome.result()));
	else
		return TransformClusterMemberOutcome(outcome.error());
}

void EdasClient::transformClusterMemberAsync(const TransformClusterMemberRequest& request, const TransformClusterMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transformClusterMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::TransformClusterMemberOutcomeCallable EdasClient::transformClusterMemberCallable(const TransformClusterMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransformClusterMemberOutcome()>>(
			[this, request]()
			{
			return this->transformClusterMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UnbindK8sSlbOutcome EdasClient::unbindK8sSlb(const UnbindK8sSlbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindK8sSlbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindK8sSlbOutcome(UnbindK8sSlbResult(outcome.result()));
	else
		return UnbindK8sSlbOutcome(outcome.error());
}

void EdasClient::unbindK8sSlbAsync(const UnbindK8sSlbRequest& request, const UnbindK8sSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindK8sSlb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UnbindK8sSlbOutcomeCallable EdasClient::unbindK8sSlbCallable(const UnbindK8sSlbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindK8sSlbOutcome()>>(
			[this, request]()
			{
			return this->unbindK8sSlb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UnbindSlbOutcome EdasClient::unbindSlb(const UnbindSlbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindSlbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindSlbOutcome(UnbindSlbResult(outcome.result()));
	else
		return UnbindSlbOutcome(outcome.error());
}

void EdasClient::unbindSlbAsync(const UnbindSlbRequest& request, const UnbindSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindSlb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UnbindSlbOutcomeCallable EdasClient::unbindSlbCallable(const UnbindSlbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindSlbOutcome()>>(
			[this, request]()
			{
			return this->unbindSlb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UntagResourcesOutcome EdasClient::untagResources(const UntagResourcesRequest &request) const
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

void EdasClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UntagResourcesOutcomeCallable EdasClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UpdateAccountInfoOutcome EdasClient::updateAccountInfo(const UpdateAccountInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAccountInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAccountInfoOutcome(UpdateAccountInfoResult(outcome.result()));
	else
		return UpdateAccountInfoOutcome(outcome.error());
}

void EdasClient::updateAccountInfoAsync(const UpdateAccountInfoRequest& request, const UpdateAccountInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAccountInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UpdateAccountInfoOutcomeCallable EdasClient::updateAccountInfoCallable(const UpdateAccountInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAccountInfoOutcome()>>(
			[this, request]()
			{
			return this->updateAccountInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UpdateApplicationBaseInfoOutcome EdasClient::updateApplicationBaseInfo(const UpdateApplicationBaseInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateApplicationBaseInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateApplicationBaseInfoOutcome(UpdateApplicationBaseInfoResult(outcome.result()));
	else
		return UpdateApplicationBaseInfoOutcome(outcome.error());
}

void EdasClient::updateApplicationBaseInfoAsync(const UpdateApplicationBaseInfoRequest& request, const UpdateApplicationBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateApplicationBaseInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UpdateApplicationBaseInfoOutcomeCallable EdasClient::updateApplicationBaseInfoCallable(const UpdateApplicationBaseInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateApplicationBaseInfoOutcome()>>(
			[this, request]()
			{
			return this->updateApplicationBaseInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UpdateApplicationScalingRuleOutcome EdasClient::updateApplicationScalingRule(const UpdateApplicationScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateApplicationScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateApplicationScalingRuleOutcome(UpdateApplicationScalingRuleResult(outcome.result()));
	else
		return UpdateApplicationScalingRuleOutcome(outcome.error());
}

void EdasClient::updateApplicationScalingRuleAsync(const UpdateApplicationScalingRuleRequest& request, const UpdateApplicationScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateApplicationScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UpdateApplicationScalingRuleOutcomeCallable EdasClient::updateApplicationScalingRuleCallable(const UpdateApplicationScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateApplicationScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->updateApplicationScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UpdateContainerOutcome EdasClient::updateContainer(const UpdateContainerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateContainerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateContainerOutcome(UpdateContainerResult(outcome.result()));
	else
		return UpdateContainerOutcome(outcome.error());
}

void EdasClient::updateContainerAsync(const UpdateContainerRequest& request, const UpdateContainerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateContainer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UpdateContainerOutcomeCallable EdasClient::updateContainerCallable(const UpdateContainerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateContainerOutcome()>>(
			[this, request]()
			{
			return this->updateContainer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UpdateContainerConfigurationOutcome EdasClient::updateContainerConfiguration(const UpdateContainerConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateContainerConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateContainerConfigurationOutcome(UpdateContainerConfigurationResult(outcome.result()));
	else
		return UpdateContainerConfigurationOutcome(outcome.error());
}

void EdasClient::updateContainerConfigurationAsync(const UpdateContainerConfigurationRequest& request, const UpdateContainerConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateContainerConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UpdateContainerConfigurationOutcomeCallable EdasClient::updateContainerConfigurationCallable(const UpdateContainerConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateContainerConfigurationOutcome()>>(
			[this, request]()
			{
			return this->updateContainerConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UpdateDegradeControlOutcome EdasClient::updateDegradeControl(const UpdateDegradeControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDegradeControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDegradeControlOutcome(UpdateDegradeControlResult(outcome.result()));
	else
		return UpdateDegradeControlOutcome(outcome.error());
}

void EdasClient::updateDegradeControlAsync(const UpdateDegradeControlRequest& request, const UpdateDegradeControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDegradeControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UpdateDegradeControlOutcomeCallable EdasClient::updateDegradeControlCallable(const UpdateDegradeControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDegradeControlOutcome()>>(
			[this, request]()
			{
			return this->updateDegradeControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UpdateEnvAppGroupOutcome EdasClient::updateEnvAppGroup(const UpdateEnvAppGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEnvAppGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEnvAppGroupOutcome(UpdateEnvAppGroupResult(outcome.result()));
	else
		return UpdateEnvAppGroupOutcome(outcome.error());
}

void EdasClient::updateEnvAppGroupAsync(const UpdateEnvAppGroupRequest& request, const UpdateEnvAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEnvAppGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UpdateEnvAppGroupOutcomeCallable EdasClient::updateEnvAppGroupCallable(const UpdateEnvAppGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEnvAppGroupOutcome()>>(
			[this, request]()
			{
			return this->updateEnvAppGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UpdateEnvHttpTrafficControlOutcome EdasClient::updateEnvHttpTrafficControl(const UpdateEnvHttpTrafficControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEnvHttpTrafficControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEnvHttpTrafficControlOutcome(UpdateEnvHttpTrafficControlResult(outcome.result()));
	else
		return UpdateEnvHttpTrafficControlOutcome(outcome.error());
}

void EdasClient::updateEnvHttpTrafficControlAsync(const UpdateEnvHttpTrafficControlRequest& request, const UpdateEnvHttpTrafficControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEnvHttpTrafficControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UpdateEnvHttpTrafficControlOutcomeCallable EdasClient::updateEnvHttpTrafficControlCallable(const UpdateEnvHttpTrafficControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEnvHttpTrafficControlOutcome()>>(
			[this, request]()
			{
			return this->updateEnvHttpTrafficControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UpdateFlowControlOutcome EdasClient::updateFlowControl(const UpdateFlowControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateFlowControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateFlowControlOutcome(UpdateFlowControlResult(outcome.result()));
	else
		return UpdateFlowControlOutcome(outcome.error());
}

void EdasClient::updateFlowControlAsync(const UpdateFlowControlRequest& request, const UpdateFlowControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateFlowControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UpdateFlowControlOutcomeCallable EdasClient::updateFlowControlCallable(const UpdateFlowControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateFlowControlOutcome()>>(
			[this, request]()
			{
			return this->updateFlowControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UpdateHealthCheckUrlOutcome EdasClient::updateHealthCheckUrl(const UpdateHealthCheckUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateHealthCheckUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateHealthCheckUrlOutcome(UpdateHealthCheckUrlResult(outcome.result()));
	else
		return UpdateHealthCheckUrlOutcome(outcome.error());
}

void EdasClient::updateHealthCheckUrlAsync(const UpdateHealthCheckUrlRequest& request, const UpdateHealthCheckUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateHealthCheckUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UpdateHealthCheckUrlOutcomeCallable EdasClient::updateHealthCheckUrlCallable(const UpdateHealthCheckUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateHealthCheckUrlOutcome()>>(
			[this, request]()
			{
			return this->updateHealthCheckUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UpdateHookConfigurationOutcome EdasClient::updateHookConfiguration(const UpdateHookConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateHookConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateHookConfigurationOutcome(UpdateHookConfigurationResult(outcome.result()));
	else
		return UpdateHookConfigurationOutcome(outcome.error());
}

void EdasClient::updateHookConfigurationAsync(const UpdateHookConfigurationRequest& request, const UpdateHookConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateHookConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UpdateHookConfigurationOutcomeCallable EdasClient::updateHookConfigurationCallable(const UpdateHookConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateHookConfigurationOutcome()>>(
			[this, request]()
			{
			return this->updateHookConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UpdateJvmConfigurationOutcome EdasClient::updateJvmConfiguration(const UpdateJvmConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateJvmConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateJvmConfigurationOutcome(UpdateJvmConfigurationResult(outcome.result()));
	else
		return UpdateJvmConfigurationOutcome(outcome.error());
}

void EdasClient::updateJvmConfigurationAsync(const UpdateJvmConfigurationRequest& request, const UpdateJvmConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateJvmConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UpdateJvmConfigurationOutcomeCallable EdasClient::updateJvmConfigurationCallable(const UpdateJvmConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateJvmConfigurationOutcome()>>(
			[this, request]()
			{
			return this->updateJvmConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UpdateK8sApplicationBaseInfoOutcome EdasClient::updateK8sApplicationBaseInfo(const UpdateK8sApplicationBaseInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateK8sApplicationBaseInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateK8sApplicationBaseInfoOutcome(UpdateK8sApplicationBaseInfoResult(outcome.result()));
	else
		return UpdateK8sApplicationBaseInfoOutcome(outcome.error());
}

void EdasClient::updateK8sApplicationBaseInfoAsync(const UpdateK8sApplicationBaseInfoRequest& request, const UpdateK8sApplicationBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateK8sApplicationBaseInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UpdateK8sApplicationBaseInfoOutcomeCallable EdasClient::updateK8sApplicationBaseInfoCallable(const UpdateK8sApplicationBaseInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateK8sApplicationBaseInfoOutcome()>>(
			[this, request]()
			{
			return this->updateK8sApplicationBaseInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UpdateK8sApplicationConfigOutcome EdasClient::updateK8sApplicationConfig(const UpdateK8sApplicationConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateK8sApplicationConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateK8sApplicationConfigOutcome(UpdateK8sApplicationConfigResult(outcome.result()));
	else
		return UpdateK8sApplicationConfigOutcome(outcome.error());
}

void EdasClient::updateK8sApplicationConfigAsync(const UpdateK8sApplicationConfigRequest& request, const UpdateK8sApplicationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateK8sApplicationConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UpdateK8sApplicationConfigOutcomeCallable EdasClient::updateK8sApplicationConfigCallable(const UpdateK8sApplicationConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateK8sApplicationConfigOutcome()>>(
			[this, request]()
			{
			return this->updateK8sApplicationConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UpdateK8sConfigMapOutcome EdasClient::updateK8sConfigMap(const UpdateK8sConfigMapRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateK8sConfigMapOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateK8sConfigMapOutcome(UpdateK8sConfigMapResult(outcome.result()));
	else
		return UpdateK8sConfigMapOutcome(outcome.error());
}

void EdasClient::updateK8sConfigMapAsync(const UpdateK8sConfigMapRequest& request, const UpdateK8sConfigMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateK8sConfigMap(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UpdateK8sConfigMapOutcomeCallable EdasClient::updateK8sConfigMapCallable(const UpdateK8sConfigMapRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateK8sConfigMapOutcome()>>(
			[this, request]()
			{
			return this->updateK8sConfigMap(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UpdateK8sIngressRuleOutcome EdasClient::updateK8sIngressRule(const UpdateK8sIngressRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateK8sIngressRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateK8sIngressRuleOutcome(UpdateK8sIngressRuleResult(outcome.result()));
	else
		return UpdateK8sIngressRuleOutcome(outcome.error());
}

void EdasClient::updateK8sIngressRuleAsync(const UpdateK8sIngressRuleRequest& request, const UpdateK8sIngressRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateK8sIngressRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UpdateK8sIngressRuleOutcomeCallable EdasClient::updateK8sIngressRuleCallable(const UpdateK8sIngressRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateK8sIngressRuleOutcome()>>(
			[this, request]()
			{
			return this->updateK8sIngressRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UpdateK8sResourceOutcome EdasClient::updateK8sResource(const UpdateK8sResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateK8sResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateK8sResourceOutcome(UpdateK8sResourceResult(outcome.result()));
	else
		return UpdateK8sResourceOutcome(outcome.error());
}

void EdasClient::updateK8sResourceAsync(const UpdateK8sResourceRequest& request, const UpdateK8sResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateK8sResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UpdateK8sResourceOutcomeCallable EdasClient::updateK8sResourceCallable(const UpdateK8sResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateK8sResourceOutcome()>>(
			[this, request]()
			{
			return this->updateK8sResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UpdateK8sSecretOutcome EdasClient::updateK8sSecret(const UpdateK8sSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateK8sSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateK8sSecretOutcome(UpdateK8sSecretResult(outcome.result()));
	else
		return UpdateK8sSecretOutcome(outcome.error());
}

void EdasClient::updateK8sSecretAsync(const UpdateK8sSecretRequest& request, const UpdateK8sSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateK8sSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UpdateK8sSecretOutcomeCallable EdasClient::updateK8sSecretCallable(const UpdateK8sSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateK8sSecretOutcome()>>(
			[this, request]()
			{
			return this->updateK8sSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UpdateK8sServiceOutcome EdasClient::updateK8sService(const UpdateK8sServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateK8sServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateK8sServiceOutcome(UpdateK8sServiceResult(outcome.result()));
	else
		return UpdateK8sServiceOutcome(outcome.error());
}

void EdasClient::updateK8sServiceAsync(const UpdateK8sServiceRequest& request, const UpdateK8sServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateK8sService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UpdateK8sServiceOutcomeCallable EdasClient::updateK8sServiceCallable(const UpdateK8sServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateK8sServiceOutcome()>>(
			[this, request]()
			{
			return this->updateK8sService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UpdateK8sSlbOutcome EdasClient::updateK8sSlb(const UpdateK8sSlbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateK8sSlbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateK8sSlbOutcome(UpdateK8sSlbResult(outcome.result()));
	else
		return UpdateK8sSlbOutcome(outcome.error());
}

void EdasClient::updateK8sSlbAsync(const UpdateK8sSlbRequest& request, const UpdateK8sSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateK8sSlb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UpdateK8sSlbOutcomeCallable EdasClient::updateK8sSlbCallable(const UpdateK8sSlbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateK8sSlbOutcome()>>(
			[this, request]()
			{
			return this->updateK8sSlb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UpdateLocalitySettingOutcome EdasClient::updateLocalitySetting(const UpdateLocalitySettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLocalitySettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLocalitySettingOutcome(UpdateLocalitySettingResult(outcome.result()));
	else
		return UpdateLocalitySettingOutcome(outcome.error());
}

void EdasClient::updateLocalitySettingAsync(const UpdateLocalitySettingRequest& request, const UpdateLocalitySettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLocalitySetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UpdateLocalitySettingOutcomeCallable EdasClient::updateLocalitySettingCallable(const UpdateLocalitySettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLocalitySettingOutcome()>>(
			[this, request]()
			{
			return this->updateLocalitySetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UpdateMockRuleOutcome EdasClient::updateMockRule(const UpdateMockRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMockRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMockRuleOutcome(UpdateMockRuleResult(outcome.result()));
	else
		return UpdateMockRuleOutcome(outcome.error());
}

void EdasClient::updateMockRuleAsync(const UpdateMockRuleRequest& request, const UpdateMockRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMockRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UpdateMockRuleOutcomeCallable EdasClient::updateMockRuleCallable(const UpdateMockRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMockRuleOutcome()>>(
			[this, request]()
			{
			return this->updateMockRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UpdateRoleOutcome EdasClient::updateRole(const UpdateRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRoleOutcome(UpdateRoleResult(outcome.result()));
	else
		return UpdateRoleOutcome(outcome.error());
}

void EdasClient::updateRoleAsync(const UpdateRoleRequest& request, const UpdateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UpdateRoleOutcomeCallable EdasClient::updateRoleCallable(const UpdateRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRoleOutcome()>>(
			[this, request]()
			{
			return this->updateRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UpdateSlsLogStoreOutcome EdasClient::updateSlsLogStore(const UpdateSlsLogStoreRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSlsLogStoreOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSlsLogStoreOutcome(UpdateSlsLogStoreResult(outcome.result()));
	else
		return UpdateSlsLogStoreOutcome(outcome.error());
}

void EdasClient::updateSlsLogStoreAsync(const UpdateSlsLogStoreRequest& request, const UpdateSlsLogStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSlsLogStore(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UpdateSlsLogStoreOutcomeCallable EdasClient::updateSlsLogStoreCallable(const UpdateSlsLogStoreRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSlsLogStoreOutcome()>>(
			[this, request]()
			{
			return this->updateSlsLogStore(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UpdateSwimmingLaneOutcome EdasClient::updateSwimmingLane(const UpdateSwimmingLaneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSwimmingLaneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSwimmingLaneOutcome(UpdateSwimmingLaneResult(outcome.result()));
	else
		return UpdateSwimmingLaneOutcome(outcome.error());
}

void EdasClient::updateSwimmingLaneAsync(const UpdateSwimmingLaneRequest& request, const UpdateSwimmingLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSwimmingLane(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UpdateSwimmingLaneOutcomeCallable EdasClient::updateSwimmingLaneCallable(const UpdateSwimmingLaneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSwimmingLaneOutcome()>>(
			[this, request]()
			{
			return this->updateSwimmingLane(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UpdateSwimmingLaneGroupOutcome EdasClient::updateSwimmingLaneGroup(const UpdateSwimmingLaneGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSwimmingLaneGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSwimmingLaneGroupOutcome(UpdateSwimmingLaneGroupResult(outcome.result()));
	else
		return UpdateSwimmingLaneGroupOutcome(outcome.error());
}

void EdasClient::updateSwimmingLaneGroupAsync(const UpdateSwimmingLaneGroupRequest& request, const UpdateSwimmingLaneGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSwimmingLaneGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UpdateSwimmingLaneGroupOutcomeCallable EdasClient::updateSwimmingLaneGroupCallable(const UpdateSwimmingLaneGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSwimmingLaneGroupOutcome()>>(
			[this, request]()
			{
			return this->updateSwimmingLaneGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UpdateSwimmingLanePriorityOutcome EdasClient::updateSwimmingLanePriority(const UpdateSwimmingLanePriorityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSwimmingLanePriorityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSwimmingLanePriorityOutcome(UpdateSwimmingLanePriorityResult(outcome.result()));
	else
		return UpdateSwimmingLanePriorityOutcome(outcome.error());
}

void EdasClient::updateSwimmingLanePriorityAsync(const UpdateSwimmingLanePriorityRequest& request, const UpdateSwimmingLanePriorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSwimmingLanePriority(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UpdateSwimmingLanePriorityOutcomeCallable EdasClient::updateSwimmingLanePriorityCallable(const UpdateSwimmingLanePriorityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSwimmingLanePriorityOutcome()>>(
			[this, request]()
			{
			return this->updateSwimmingLanePriority(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::UppateEnvHsfTrafficControlOutcome EdasClient::uppateEnvHsfTrafficControl(const UppateEnvHsfTrafficControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UppateEnvHsfTrafficControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UppateEnvHsfTrafficControlOutcome(UppateEnvHsfTrafficControlResult(outcome.result()));
	else
		return UppateEnvHsfTrafficControlOutcome(outcome.error());
}

void EdasClient::uppateEnvHsfTrafficControlAsync(const UppateEnvHsfTrafficControlRequest& request, const UppateEnvHsfTrafficControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uppateEnvHsfTrafficControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::UppateEnvHsfTrafficControlOutcomeCallable EdasClient::uppateEnvHsfTrafficControlCallable(const UppateEnvHsfTrafficControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UppateEnvHsfTrafficControlOutcome()>>(
			[this, request]()
			{
			return this->uppateEnvHsfTrafficControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EdasClient::ValidateK8sResourceOutcome EdasClient::validateK8sResource(const ValidateK8sResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ValidateK8sResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ValidateK8sResourceOutcome(ValidateK8sResourceResult(outcome.result()));
	else
		return ValidateK8sResourceOutcome(outcome.error());
}

void EdasClient::validateK8sResourceAsync(const ValidateK8sResourceRequest& request, const ValidateK8sResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, validateK8sResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EdasClient::ValidateK8sResourceOutcomeCallable EdasClient::validateK8sResourceCallable(const ValidateK8sResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ValidateK8sResourceOutcome()>>(
			[this, request]()
			{
			return this->validateK8sResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

