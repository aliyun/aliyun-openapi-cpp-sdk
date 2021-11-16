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

#include <alibabacloud/ddoscoo/DdoscooClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

namespace
{
	const std::string SERVICE_NAME = "ddoscoo";
}

DdoscooClient::DdoscooClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DdoscooClient::DdoscooClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DdoscooClient::DdoscooClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DdoscooClient::~DdoscooClient()
{}

DdoscooClient::AddLayer7CCRuleOutcome DdoscooClient::addLayer7CCRule(const AddLayer7CCRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLayer7CCRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLayer7CCRuleOutcome(AddLayer7CCRuleResult(outcome.result()));
	else
		return AddLayer7CCRuleOutcome(outcome.error());
}

void DdoscooClient::addLayer7CCRuleAsync(const AddLayer7CCRuleRequest& request, const AddLayer7CCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLayer7CCRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::AddLayer7CCRuleOutcomeCallable DdoscooClient::addLayer7CCRuleCallable(const AddLayer7CCRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLayer7CCRuleOutcome()>>(
			[this, request]()
			{
			return this->addLayer7CCRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::CloseDomainSlsConfigOutcome DdoscooClient::closeDomainSlsConfig(const CloseDomainSlsConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloseDomainSlsConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloseDomainSlsConfigOutcome(CloseDomainSlsConfigResult(outcome.result()));
	else
		return CloseDomainSlsConfigOutcome(outcome.error());
}

void DdoscooClient::closeDomainSlsConfigAsync(const CloseDomainSlsConfigRequest& request, const CloseDomainSlsConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, closeDomainSlsConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::CloseDomainSlsConfigOutcomeCallable DdoscooClient::closeDomainSlsConfigCallable(const CloseDomainSlsConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloseDomainSlsConfigOutcome()>>(
			[this, request]()
			{
			return this->closeDomainSlsConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ConfigHealthCheckOutcome DdoscooClient::configHealthCheck(const ConfigHealthCheckRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigHealthCheckOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigHealthCheckOutcome(ConfigHealthCheckResult(outcome.result()));
	else
		return ConfigHealthCheckOutcome(outcome.error());
}

void DdoscooClient::configHealthCheckAsync(const ConfigHealthCheckRequest& request, const ConfigHealthCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configHealthCheck(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ConfigHealthCheckOutcomeCallable DdoscooClient::configHealthCheckCallable(const ConfigHealthCheckRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigHealthCheckOutcome()>>(
			[this, request]()
			{
			return this->configHealthCheck(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ConfigLayer4RuleOutcome DdoscooClient::configLayer4Rule(const ConfigLayer4RuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigLayer4RuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigLayer4RuleOutcome(ConfigLayer4RuleResult(outcome.result()));
	else
		return ConfigLayer4RuleOutcome(outcome.error());
}

void DdoscooClient::configLayer4RuleAsync(const ConfigLayer4RuleRequest& request, const ConfigLayer4RuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configLayer4Rule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ConfigLayer4RuleOutcomeCallable DdoscooClient::configLayer4RuleCallable(const ConfigLayer4RuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigLayer4RuleOutcome()>>(
			[this, request]()
			{
			return this->configLayer4Rule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ConfigLayer4RuleAttributeOutcome DdoscooClient::configLayer4RuleAttribute(const ConfigLayer4RuleAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigLayer4RuleAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigLayer4RuleAttributeOutcome(ConfigLayer4RuleAttributeResult(outcome.result()));
	else
		return ConfigLayer4RuleAttributeOutcome(outcome.error());
}

void DdoscooClient::configLayer4RuleAttributeAsync(const ConfigLayer4RuleAttributeRequest& request, const ConfigLayer4RuleAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configLayer4RuleAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ConfigLayer4RuleAttributeOutcomeCallable DdoscooClient::configLayer4RuleAttributeCallable(const ConfigLayer4RuleAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigLayer4RuleAttributeOutcome()>>(
			[this, request]()
			{
			return this->configLayer4RuleAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ConfigLayer7BlackWhiteListOutcome DdoscooClient::configLayer7BlackWhiteList(const ConfigLayer7BlackWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigLayer7BlackWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigLayer7BlackWhiteListOutcome(ConfigLayer7BlackWhiteListResult(outcome.result()));
	else
		return ConfigLayer7BlackWhiteListOutcome(outcome.error());
}

void DdoscooClient::configLayer7BlackWhiteListAsync(const ConfigLayer7BlackWhiteListRequest& request, const ConfigLayer7BlackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configLayer7BlackWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ConfigLayer7BlackWhiteListOutcomeCallable DdoscooClient::configLayer7BlackWhiteListCallable(const ConfigLayer7BlackWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigLayer7BlackWhiteListOutcome()>>(
			[this, request]()
			{
			return this->configLayer7BlackWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ConfigLayer7CCRuleOutcome DdoscooClient::configLayer7CCRule(const ConfigLayer7CCRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigLayer7CCRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigLayer7CCRuleOutcome(ConfigLayer7CCRuleResult(outcome.result()));
	else
		return ConfigLayer7CCRuleOutcome(outcome.error());
}

void DdoscooClient::configLayer7CCRuleAsync(const ConfigLayer7CCRuleRequest& request, const ConfigLayer7CCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configLayer7CCRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ConfigLayer7CCRuleOutcomeCallable DdoscooClient::configLayer7CCRuleCallable(const ConfigLayer7CCRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigLayer7CCRuleOutcome()>>(
			[this, request]()
			{
			return this->configLayer7CCRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ConfigLayer7CCTemplateOutcome DdoscooClient::configLayer7CCTemplate(const ConfigLayer7CCTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigLayer7CCTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigLayer7CCTemplateOutcome(ConfigLayer7CCTemplateResult(outcome.result()));
	else
		return ConfigLayer7CCTemplateOutcome(outcome.error());
}

void DdoscooClient::configLayer7CCTemplateAsync(const ConfigLayer7CCTemplateRequest& request, const ConfigLayer7CCTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configLayer7CCTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ConfigLayer7CCTemplateOutcomeCallable DdoscooClient::configLayer7CCTemplateCallable(const ConfigLayer7CCTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigLayer7CCTemplateOutcome()>>(
			[this, request]()
			{
			return this->configLayer7CCTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ConfigLayer7CertOutcome DdoscooClient::configLayer7Cert(const ConfigLayer7CertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigLayer7CertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigLayer7CertOutcome(ConfigLayer7CertResult(outcome.result()));
	else
		return ConfigLayer7CertOutcome(outcome.error());
}

void DdoscooClient::configLayer7CertAsync(const ConfigLayer7CertRequest& request, const ConfigLayer7CertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configLayer7Cert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ConfigLayer7CertOutcomeCallable DdoscooClient::configLayer7CertCallable(const ConfigLayer7CertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigLayer7CertOutcome()>>(
			[this, request]()
			{
			return this->configLayer7Cert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ConfigLayer7RuleOutcome DdoscooClient::configLayer7Rule(const ConfigLayer7RuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigLayer7RuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigLayer7RuleOutcome(ConfigLayer7RuleResult(outcome.result()));
	else
		return ConfigLayer7RuleOutcome(outcome.error());
}

void DdoscooClient::configLayer7RuleAsync(const ConfigLayer7RuleRequest& request, const ConfigLayer7RuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configLayer7Rule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ConfigLayer7RuleOutcomeCallable DdoscooClient::configLayer7RuleCallable(const ConfigLayer7RuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigLayer7RuleOutcome()>>(
			[this, request]()
			{
			return this->configLayer7Rule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::CreateAsyncTaskOutcome DdoscooClient::createAsyncTask(const CreateAsyncTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAsyncTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAsyncTaskOutcome(CreateAsyncTaskResult(outcome.result()));
	else
		return CreateAsyncTaskOutcome(outcome.error());
}

void DdoscooClient::createAsyncTaskAsync(const CreateAsyncTaskRequest& request, const CreateAsyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAsyncTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::CreateAsyncTaskOutcomeCallable DdoscooClient::createAsyncTaskCallable(const CreateAsyncTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAsyncTaskOutcome()>>(
			[this, request]()
			{
			return this->createAsyncTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::CreateLayer4RuleOutcome DdoscooClient::createLayer4Rule(const CreateLayer4RuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLayer4RuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLayer4RuleOutcome(CreateLayer4RuleResult(outcome.result()));
	else
		return CreateLayer4RuleOutcome(outcome.error());
}

void DdoscooClient::createLayer4RuleAsync(const CreateLayer4RuleRequest& request, const CreateLayer4RuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLayer4Rule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::CreateLayer4RuleOutcomeCallable DdoscooClient::createLayer4RuleCallable(const CreateLayer4RuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLayer4RuleOutcome()>>(
			[this, request]()
			{
			return this->createLayer4Rule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::CreateLayer7RuleOutcome DdoscooClient::createLayer7Rule(const CreateLayer7RuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLayer7RuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLayer7RuleOutcome(CreateLayer7RuleResult(outcome.result()));
	else
		return CreateLayer7RuleOutcome(outcome.error());
}

void DdoscooClient::createLayer7RuleAsync(const CreateLayer7RuleRequest& request, const CreateLayer7RuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLayer7Rule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::CreateLayer7RuleOutcomeCallable DdoscooClient::createLayer7RuleCallable(const CreateLayer7RuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLayer7RuleOutcome()>>(
			[this, request]()
			{
			return this->createLayer7Rule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DeleteAsyncTaskOutcome DdoscooClient::deleteAsyncTask(const DeleteAsyncTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAsyncTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAsyncTaskOutcome(DeleteAsyncTaskResult(outcome.result()));
	else
		return DeleteAsyncTaskOutcome(outcome.error());
}

void DdoscooClient::deleteAsyncTaskAsync(const DeleteAsyncTaskRequest& request, const DeleteAsyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAsyncTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DeleteAsyncTaskOutcomeCallable DdoscooClient::deleteAsyncTaskCallable(const DeleteAsyncTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAsyncTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteAsyncTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DeleteLayer4RuleOutcome DdoscooClient::deleteLayer4Rule(const DeleteLayer4RuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLayer4RuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLayer4RuleOutcome(DeleteLayer4RuleResult(outcome.result()));
	else
		return DeleteLayer4RuleOutcome(outcome.error());
}

void DdoscooClient::deleteLayer4RuleAsync(const DeleteLayer4RuleRequest& request, const DeleteLayer4RuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLayer4Rule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DeleteLayer4RuleOutcomeCallable DdoscooClient::deleteLayer4RuleCallable(const DeleteLayer4RuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLayer4RuleOutcome()>>(
			[this, request]()
			{
			return this->deleteLayer4Rule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DeleteLayer7CCRuleOutcome DdoscooClient::deleteLayer7CCRule(const DeleteLayer7CCRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLayer7CCRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLayer7CCRuleOutcome(DeleteLayer7CCRuleResult(outcome.result()));
	else
		return DeleteLayer7CCRuleOutcome(outcome.error());
}

void DdoscooClient::deleteLayer7CCRuleAsync(const DeleteLayer7CCRuleRequest& request, const DeleteLayer7CCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLayer7CCRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DeleteLayer7CCRuleOutcomeCallable DdoscooClient::deleteLayer7CCRuleCallable(const DeleteLayer7CCRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLayer7CCRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteLayer7CCRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DeleteLayer7RuleOutcome DdoscooClient::deleteLayer7Rule(const DeleteLayer7RuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLayer7RuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLayer7RuleOutcome(DeleteLayer7RuleResult(outcome.result()));
	else
		return DeleteLayer7RuleOutcome(outcome.error());
}

void DdoscooClient::deleteLayer7RuleAsync(const DeleteLayer7RuleRequest& request, const DeleteLayer7RuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLayer7Rule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DeleteLayer7RuleOutcomeCallable DdoscooClient::deleteLayer7RuleCallable(const DeleteLayer7RuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLayer7RuleOutcome()>>(
			[this, request]()
			{
			return this->deleteLayer7Rule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeBackSourceCidrOutcome DdoscooClient::describeBackSourceCidr(const DescribeBackSourceCidrRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackSourceCidrOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackSourceCidrOutcome(DescribeBackSourceCidrResult(outcome.result()));
	else
		return DescribeBackSourceCidrOutcome(outcome.error());
}

void DdoscooClient::describeBackSourceCidrAsync(const DescribeBackSourceCidrRequest& request, const DescribeBackSourceCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackSourceCidr(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeBackSourceCidrOutcomeCallable DdoscooClient::describeBackSourceCidrCallable(const DescribeBackSourceCidrRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackSourceCidrOutcome()>>(
			[this, request]()
			{
			return this->describeBackSourceCidr(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeBatchSlsDispatchStatusOutcome DdoscooClient::describeBatchSlsDispatchStatus(const DescribeBatchSlsDispatchStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBatchSlsDispatchStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBatchSlsDispatchStatusOutcome(DescribeBatchSlsDispatchStatusResult(outcome.result()));
	else
		return DescribeBatchSlsDispatchStatusOutcome(outcome.error());
}

void DdoscooClient::describeBatchSlsDispatchStatusAsync(const DescribeBatchSlsDispatchStatusRequest& request, const DescribeBatchSlsDispatchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBatchSlsDispatchStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeBatchSlsDispatchStatusOutcomeCallable DdoscooClient::describeBatchSlsDispatchStatusCallable(const DescribeBatchSlsDispatchStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBatchSlsDispatchStatusOutcome()>>(
			[this, request]()
			{
			return this->describeBatchSlsDispatchStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDDoSEventsOutcome DdoscooClient::describeDDoSEvents(const DescribeDDoSEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDDoSEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDDoSEventsOutcome(DescribeDDoSEventsResult(outcome.result()));
	else
		return DescribeDDoSEventsOutcome(outcome.error());
}

void DdoscooClient::describeDDoSEventsAsync(const DescribeDDoSEventsRequest& request, const DescribeDDoSEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDDoSEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDDoSEventsOutcomeCallable DdoscooClient::describeDDoSEventsCallable(const DescribeDDoSEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDDoSEventsOutcome()>>(
			[this, request]()
			{
			return this->describeDDoSEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDDoSTrafficOutcome DdoscooClient::describeDDoSTraffic(const DescribeDDoSTrafficRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDDoSTrafficOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDDoSTrafficOutcome(DescribeDDoSTrafficResult(outcome.result()));
	else
		return DescribeDDoSTrafficOutcome(outcome.error());
}

void DdoscooClient::describeDDoSTrafficAsync(const DescribeDDoSTrafficRequest& request, const DescribeDDoSTrafficAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDDoSTraffic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDDoSTrafficOutcomeCallable DdoscooClient::describeDDoSTrafficCallable(const DescribeDDoSTrafficRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDDoSTrafficOutcome()>>(
			[this, request]()
			{
			return this->describeDDoSTraffic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDefenseCountStatisticsOutcome DdoscooClient::describeDefenseCountStatistics(const DescribeDefenseCountStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDefenseCountStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDefenseCountStatisticsOutcome(DescribeDefenseCountStatisticsResult(outcome.result()));
	else
		return DescribeDefenseCountStatisticsOutcome(outcome.error());
}

void DdoscooClient::describeDefenseCountStatisticsAsync(const DescribeDefenseCountStatisticsRequest& request, const DescribeDefenseCountStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDefenseCountStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDefenseCountStatisticsOutcomeCallable DdoscooClient::describeDefenseCountStatisticsCallable(const DescribeDefenseCountStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDefenseCountStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeDefenseCountStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDomainAccessModeOutcome DdoscooClient::describeDomainAccessMode(const DescribeDomainAccessModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainAccessModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainAccessModeOutcome(DescribeDomainAccessModeResult(outcome.result()));
	else
		return DescribeDomainAccessModeOutcome(outcome.error());
}

void DdoscooClient::describeDomainAccessModeAsync(const DescribeDomainAccessModeRequest& request, const DescribeDomainAccessModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainAccessMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDomainAccessModeOutcomeCallable DdoscooClient::describeDomainAccessModeCallable(const DescribeDomainAccessModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainAccessModeOutcome()>>(
			[this, request]()
			{
			return this->describeDomainAccessMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDomainAttackEventsOutcome DdoscooClient::describeDomainAttackEvents(const DescribeDomainAttackEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainAttackEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainAttackEventsOutcome(DescribeDomainAttackEventsResult(outcome.result()));
	else
		return DescribeDomainAttackEventsOutcome(outcome.error());
}

void DdoscooClient::describeDomainAttackEventsAsync(const DescribeDomainAttackEventsRequest& request, const DescribeDomainAttackEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainAttackEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDomainAttackEventsOutcomeCallable DdoscooClient::describeDomainAttackEventsCallable(const DescribeDomainAttackEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainAttackEventsOutcome()>>(
			[this, request]()
			{
			return this->describeDomainAttackEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDomainQpsOutcome DdoscooClient::describeDomainQps(const DescribeDomainQpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainQpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainQpsOutcome(DescribeDomainQpsResult(outcome.result()));
	else
		return DescribeDomainQpsOutcome(outcome.error());
}

void DdoscooClient::describeDomainQpsAsync(const DescribeDomainQpsRequest& request, const DescribeDomainQpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainQps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDomainQpsOutcomeCallable DdoscooClient::describeDomainQpsCallable(const DescribeDomainQpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainQpsOutcome()>>(
			[this, request]()
			{
			return this->describeDomainQps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDomainQpsWithCacheOutcome DdoscooClient::describeDomainQpsWithCache(const DescribeDomainQpsWithCacheRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainQpsWithCacheOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainQpsWithCacheOutcome(DescribeDomainQpsWithCacheResult(outcome.result()));
	else
		return DescribeDomainQpsWithCacheOutcome(outcome.error());
}

void DdoscooClient::describeDomainQpsWithCacheAsync(const DescribeDomainQpsWithCacheRequest& request, const DescribeDomainQpsWithCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainQpsWithCache(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDomainQpsWithCacheOutcomeCallable DdoscooClient::describeDomainQpsWithCacheCallable(const DescribeDomainQpsWithCacheRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainQpsWithCacheOutcome()>>(
			[this, request]()
			{
			return this->describeDomainQpsWithCache(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDomainSlsStatusOutcome DdoscooClient::describeDomainSlsStatus(const DescribeDomainSlsStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainSlsStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainSlsStatusOutcome(DescribeDomainSlsStatusResult(outcome.result()));
	else
		return DescribeDomainSlsStatusOutcome(outcome.error());
}

void DdoscooClient::describeDomainSlsStatusAsync(const DescribeDomainSlsStatusRequest& request, const DescribeDomainSlsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainSlsStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDomainSlsStatusOutcomeCallable DdoscooClient::describeDomainSlsStatusCallable(const DescribeDomainSlsStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainSlsStatusOutcome()>>(
			[this, request]()
			{
			return this->describeDomainSlsStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeDomainsOutcome DdoscooClient::describeDomains(const DescribeDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainsOutcome(DescribeDomainsResult(outcome.result()));
	else
		return DescribeDomainsOutcome(outcome.error());
}

void DdoscooClient::describeDomainsAsync(const DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeDomainsOutcomeCallable DdoscooClient::describeDomainsCallable(const DescribeDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainsOutcome()>>(
			[this, request]()
			{
			return this->describeDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeElasticBandwidthSpecOutcome DdoscooClient::describeElasticBandwidthSpec(const DescribeElasticBandwidthSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeElasticBandwidthSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeElasticBandwidthSpecOutcome(DescribeElasticBandwidthSpecResult(outcome.result()));
	else
		return DescribeElasticBandwidthSpecOutcome(outcome.error());
}

void DdoscooClient::describeElasticBandwidthSpecAsync(const DescribeElasticBandwidthSpecRequest& request, const DescribeElasticBandwidthSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeElasticBandwidthSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeElasticBandwidthSpecOutcomeCallable DdoscooClient::describeElasticBandwidthSpecCallable(const DescribeElasticBandwidthSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeElasticBandwidthSpecOutcome()>>(
			[this, request]()
			{
			return this->describeElasticBandwidthSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeHealthCheckListOutcome DdoscooClient::describeHealthCheckList(const DescribeHealthCheckListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHealthCheckListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHealthCheckListOutcome(DescribeHealthCheckListResult(outcome.result()));
	else
		return DescribeHealthCheckListOutcome(outcome.error());
}

void DdoscooClient::describeHealthCheckListAsync(const DescribeHealthCheckListRequest& request, const DescribeHealthCheckListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHealthCheckList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeHealthCheckListOutcomeCallable DdoscooClient::describeHealthCheckListCallable(const DescribeHealthCheckListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHealthCheckListOutcome()>>(
			[this, request]()
			{
			return this->describeHealthCheckList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeHealthCheckStatusListOutcome DdoscooClient::describeHealthCheckStatusList(const DescribeHealthCheckStatusListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHealthCheckStatusListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHealthCheckStatusListOutcome(DescribeHealthCheckStatusListResult(outcome.result()));
	else
		return DescribeHealthCheckStatusListOutcome(outcome.error());
}

void DdoscooClient::describeHealthCheckStatusListAsync(const DescribeHealthCheckStatusListRequest& request, const DescribeHealthCheckStatusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHealthCheckStatusList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeHealthCheckStatusListOutcomeCallable DdoscooClient::describeHealthCheckStatusListCallable(const DescribeHealthCheckStatusListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHealthCheckStatusListOutcome()>>(
			[this, request]()
			{
			return this->describeHealthCheckStatusList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeInstanceDetailsOutcome DdoscooClient::describeInstanceDetails(const DescribeInstanceDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceDetailsOutcome(DescribeInstanceDetailsResult(outcome.result()));
	else
		return DescribeInstanceDetailsOutcome(outcome.error());
}

void DdoscooClient::describeInstanceDetailsAsync(const DescribeInstanceDetailsRequest& request, const DescribeInstanceDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeInstanceDetailsOutcomeCallable DdoscooClient::describeInstanceDetailsCallable(const DescribeInstanceDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceDetailsOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeInstanceSpecsOutcome DdoscooClient::describeInstanceSpecs(const DescribeInstanceSpecsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceSpecsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceSpecsOutcome(DescribeInstanceSpecsResult(outcome.result()));
	else
		return DescribeInstanceSpecsOutcome(outcome.error());
}

void DdoscooClient::describeInstanceSpecsAsync(const DescribeInstanceSpecsRequest& request, const DescribeInstanceSpecsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceSpecs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeInstanceSpecsOutcomeCallable DdoscooClient::describeInstanceSpecsCallable(const DescribeInstanceSpecsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceSpecsOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceSpecs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeInstanceStatisticsOutcome DdoscooClient::describeInstanceStatistics(const DescribeInstanceStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceStatisticsOutcome(DescribeInstanceStatisticsResult(outcome.result()));
	else
		return DescribeInstanceStatisticsOutcome(outcome.error());
}

void DdoscooClient::describeInstanceStatisticsAsync(const DescribeInstanceStatisticsRequest& request, const DescribeInstanceStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeInstanceStatisticsOutcomeCallable DdoscooClient::describeInstanceStatisticsCallable(const DescribeInstanceStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeInstancesOutcome DdoscooClient::describeInstances(const DescribeInstancesRequest &request) const
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

void DdoscooClient::describeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeInstancesOutcomeCallable DdoscooClient::describeInstancesCallable(const DescribeInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeIpTrafficOutcome DdoscooClient::describeIpTraffic(const DescribeIpTrafficRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIpTrafficOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIpTrafficOutcome(DescribeIpTrafficResult(outcome.result()));
	else
		return DescribeIpTrafficOutcome(outcome.error());
}

void DdoscooClient::describeIpTrafficAsync(const DescribeIpTrafficRequest& request, const DescribeIpTrafficAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIpTraffic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeIpTrafficOutcomeCallable DdoscooClient::describeIpTrafficCallable(const DescribeIpTrafficRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIpTrafficOutcome()>>(
			[this, request]()
			{
			return this->describeIpTraffic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeLayer4RuleAttributesOutcome DdoscooClient::describeLayer4RuleAttributes(const DescribeLayer4RuleAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLayer4RuleAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLayer4RuleAttributesOutcome(DescribeLayer4RuleAttributesResult(outcome.result()));
	else
		return DescribeLayer4RuleAttributesOutcome(outcome.error());
}

void DdoscooClient::describeLayer4RuleAttributesAsync(const DescribeLayer4RuleAttributesRequest& request, const DescribeLayer4RuleAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLayer4RuleAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeLayer4RuleAttributesOutcomeCallable DdoscooClient::describeLayer4RuleAttributesCallable(const DescribeLayer4RuleAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLayer4RuleAttributesOutcome()>>(
			[this, request]()
			{
			return this->describeLayer4RuleAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeLayer4RulesOutcome DdoscooClient::describeLayer4Rules(const DescribeLayer4RulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLayer4RulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLayer4RulesOutcome(DescribeLayer4RulesResult(outcome.result()));
	else
		return DescribeLayer4RulesOutcome(outcome.error());
}

void DdoscooClient::describeLayer4RulesAsync(const DescribeLayer4RulesRequest& request, const DescribeLayer4RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLayer4Rules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeLayer4RulesOutcomeCallable DdoscooClient::describeLayer4RulesCallable(const DescribeLayer4RulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLayer4RulesOutcome()>>(
			[this, request]()
			{
			return this->describeLayer4Rules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeLayer7CCRulesOutcome DdoscooClient::describeLayer7CCRules(const DescribeLayer7CCRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLayer7CCRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLayer7CCRulesOutcome(DescribeLayer7CCRulesResult(outcome.result()));
	else
		return DescribeLayer7CCRulesOutcome(outcome.error());
}

void DdoscooClient::describeLayer7CCRulesAsync(const DescribeLayer7CCRulesRequest& request, const DescribeLayer7CCRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLayer7CCRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeLayer7CCRulesOutcomeCallable DdoscooClient::describeLayer7CCRulesCallable(const DescribeLayer7CCRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLayer7CCRulesOutcome()>>(
			[this, request]()
			{
			return this->describeLayer7CCRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeLogStoreExistStatusOutcome DdoscooClient::describeLogStoreExistStatus(const DescribeLogStoreExistStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLogStoreExistStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLogStoreExistStatusOutcome(DescribeLogStoreExistStatusResult(outcome.result()));
	else
		return DescribeLogStoreExistStatusOutcome(outcome.error());
}

void DdoscooClient::describeLogStoreExistStatusAsync(const DescribeLogStoreExistStatusRequest& request, const DescribeLogStoreExistStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLogStoreExistStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeLogStoreExistStatusOutcomeCallable DdoscooClient::describeLogStoreExistStatusCallable(const DescribeLogStoreExistStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLogStoreExistStatusOutcome()>>(
			[this, request]()
			{
			return this->describeLogStoreExistStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeOpEntitiesOutcome DdoscooClient::describeOpEntities(const DescribeOpEntitiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOpEntitiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOpEntitiesOutcome(DescribeOpEntitiesResult(outcome.result()));
	else
		return DescribeOpEntitiesOutcome(outcome.error());
}

void DdoscooClient::describeOpEntitiesAsync(const DescribeOpEntitiesRequest& request, const DescribeOpEntitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOpEntities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeOpEntitiesOutcomeCallable DdoscooClient::describeOpEntitiesCallable(const DescribeOpEntitiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOpEntitiesOutcome()>>(
			[this, request]()
			{
			return this->describeOpEntities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeSimpleDomainsOutcome DdoscooClient::describeSimpleDomains(const DescribeSimpleDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSimpleDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSimpleDomainsOutcome(DescribeSimpleDomainsResult(outcome.result()));
	else
		return DescribeSimpleDomainsOutcome(outcome.error());
}

void DdoscooClient::describeSimpleDomainsAsync(const DescribeSimpleDomainsRequest& request, const DescribeSimpleDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSimpleDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeSimpleDomainsOutcomeCallable DdoscooClient::describeSimpleDomainsCallable(const DescribeSimpleDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSimpleDomainsOutcome()>>(
			[this, request]()
			{
			return this->describeSimpleDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeSlsAuthStatusOutcome DdoscooClient::describeSlsAuthStatus(const DescribeSlsAuthStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSlsAuthStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSlsAuthStatusOutcome(DescribeSlsAuthStatusResult(outcome.result()));
	else
		return DescribeSlsAuthStatusOutcome(outcome.error());
}

void DdoscooClient::describeSlsAuthStatusAsync(const DescribeSlsAuthStatusRequest& request, const DescribeSlsAuthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSlsAuthStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeSlsAuthStatusOutcomeCallable DdoscooClient::describeSlsAuthStatusCallable(const DescribeSlsAuthStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSlsAuthStatusOutcome()>>(
			[this, request]()
			{
			return this->describeSlsAuthStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeSlsEmptyCountOutcome DdoscooClient::describeSlsEmptyCount(const DescribeSlsEmptyCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSlsEmptyCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSlsEmptyCountOutcome(DescribeSlsEmptyCountResult(outcome.result()));
	else
		return DescribeSlsEmptyCountOutcome(outcome.error());
}

void DdoscooClient::describeSlsEmptyCountAsync(const DescribeSlsEmptyCountRequest& request, const DescribeSlsEmptyCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSlsEmptyCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeSlsEmptyCountOutcomeCallable DdoscooClient::describeSlsEmptyCountCallable(const DescribeSlsEmptyCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSlsEmptyCountOutcome()>>(
			[this, request]()
			{
			return this->describeSlsEmptyCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeSlsLogstoreInfoOutcome DdoscooClient::describeSlsLogstoreInfo(const DescribeSlsLogstoreInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSlsLogstoreInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSlsLogstoreInfoOutcome(DescribeSlsLogstoreInfoResult(outcome.result()));
	else
		return DescribeSlsLogstoreInfoOutcome(outcome.error());
}

void DdoscooClient::describeSlsLogstoreInfoAsync(const DescribeSlsLogstoreInfoRequest& request, const DescribeSlsLogstoreInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSlsLogstoreInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeSlsLogstoreInfoOutcomeCallable DdoscooClient::describeSlsLogstoreInfoCallable(const DescribeSlsLogstoreInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSlsLogstoreInfoOutcome()>>(
			[this, request]()
			{
			return this->describeSlsLogstoreInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribeSlsOpenStatusOutcome DdoscooClient::describeSlsOpenStatus(const DescribeSlsOpenStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSlsOpenStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSlsOpenStatusOutcome(DescribeSlsOpenStatusResult(outcome.result()));
	else
		return DescribeSlsOpenStatusOutcome(outcome.error());
}

void DdoscooClient::describeSlsOpenStatusAsync(const DescribeSlsOpenStatusRequest& request, const DescribeSlsOpenStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSlsOpenStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribeSlsOpenStatusOutcomeCallable DdoscooClient::describeSlsOpenStatusCallable(const DescribeSlsOpenStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSlsOpenStatusOutcome()>>(
			[this, request]()
			{
			return this->describeSlsOpenStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribleCertListOutcome DdoscooClient::describleCertList(const DescribleCertListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribleCertListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribleCertListOutcome(DescribleCertListResult(outcome.result()));
	else
		return DescribleCertListOutcome(outcome.error());
}

void DdoscooClient::describleCertListAsync(const DescribleCertListRequest& request, const DescribleCertListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describleCertList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribleCertListOutcomeCallable DdoscooClient::describleCertListCallable(const DescribleCertListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribleCertListOutcome()>>(
			[this, request]()
			{
			return this->describleCertList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DescribleLayer7InstanceRelationsOutcome DdoscooClient::describleLayer7InstanceRelations(const DescribleLayer7InstanceRelationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribleLayer7InstanceRelationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribleLayer7InstanceRelationsOutcome(DescribleLayer7InstanceRelationsResult(outcome.result()));
	else
		return DescribleLayer7InstanceRelationsOutcome(outcome.error());
}

void DdoscooClient::describleLayer7InstanceRelationsAsync(const DescribleLayer7InstanceRelationsRequest& request, const DescribleLayer7InstanceRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describleLayer7InstanceRelations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DescribleLayer7InstanceRelationsOutcomeCallable DdoscooClient::describleLayer7InstanceRelationsCallable(const DescribleLayer7InstanceRelationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribleLayer7InstanceRelationsOutcome()>>(
			[this, request]()
			{
			return this->describleLayer7InstanceRelations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DisableLayer7CCOutcome DdoscooClient::disableLayer7CC(const DisableLayer7CCRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableLayer7CCOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableLayer7CCOutcome(DisableLayer7CCResult(outcome.result()));
	else
		return DisableLayer7CCOutcome(outcome.error());
}

void DdoscooClient::disableLayer7CCAsync(const DisableLayer7CCRequest& request, const DisableLayer7CCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableLayer7CC(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DisableLayer7CCOutcomeCallable DdoscooClient::disableLayer7CCCallable(const DisableLayer7CCRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableLayer7CCOutcome()>>(
			[this, request]()
			{
			return this->disableLayer7CC(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::DisableLayer7CCRuleOutcome DdoscooClient::disableLayer7CCRule(const DisableLayer7CCRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableLayer7CCRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableLayer7CCRuleOutcome(DisableLayer7CCRuleResult(outcome.result()));
	else
		return DisableLayer7CCRuleOutcome(outcome.error());
}

void DdoscooClient::disableLayer7CCRuleAsync(const DisableLayer7CCRuleRequest& request, const DisableLayer7CCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableLayer7CCRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::DisableLayer7CCRuleOutcomeCallable DdoscooClient::disableLayer7CCRuleCallable(const DisableLayer7CCRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableLayer7CCRuleOutcome()>>(
			[this, request]()
			{
			return this->disableLayer7CCRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::EmptySlsLogstoreOutcome DdoscooClient::emptySlsLogstore(const EmptySlsLogstoreRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EmptySlsLogstoreOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EmptySlsLogstoreOutcome(EmptySlsLogstoreResult(outcome.result()));
	else
		return EmptySlsLogstoreOutcome(outcome.error());
}

void DdoscooClient::emptySlsLogstoreAsync(const EmptySlsLogstoreRequest& request, const EmptySlsLogstoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, emptySlsLogstore(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::EmptySlsLogstoreOutcomeCallable DdoscooClient::emptySlsLogstoreCallable(const EmptySlsLogstoreRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EmptySlsLogstoreOutcome()>>(
			[this, request]()
			{
			return this->emptySlsLogstore(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::EnableLayer7CCOutcome DdoscooClient::enableLayer7CC(const EnableLayer7CCRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableLayer7CCOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableLayer7CCOutcome(EnableLayer7CCResult(outcome.result()));
	else
		return EnableLayer7CCOutcome(outcome.error());
}

void DdoscooClient::enableLayer7CCAsync(const EnableLayer7CCRequest& request, const EnableLayer7CCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableLayer7CC(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::EnableLayer7CCOutcomeCallable DdoscooClient::enableLayer7CCCallable(const EnableLayer7CCRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableLayer7CCOutcome()>>(
			[this, request]()
			{
			return this->enableLayer7CC(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::EnableLayer7CCRuleOutcome DdoscooClient::enableLayer7CCRule(const EnableLayer7CCRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableLayer7CCRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableLayer7CCRuleOutcome(EnableLayer7CCRuleResult(outcome.result()));
	else
		return EnableLayer7CCRuleOutcome(outcome.error());
}

void DdoscooClient::enableLayer7CCRuleAsync(const EnableLayer7CCRuleRequest& request, const EnableLayer7CCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableLayer7CCRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::EnableLayer7CCRuleOutcomeCallable DdoscooClient::enableLayer7CCRuleCallable(const EnableLayer7CCRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableLayer7CCRuleOutcome()>>(
			[this, request]()
			{
			return this->enableLayer7CCRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ListAsyncTaskOutcome DdoscooClient::listAsyncTask(const ListAsyncTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAsyncTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAsyncTaskOutcome(ListAsyncTaskResult(outcome.result()));
	else
		return ListAsyncTaskOutcome(outcome.error());
}

void DdoscooClient::listAsyncTaskAsync(const ListAsyncTaskRequest& request, const ListAsyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAsyncTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ListAsyncTaskOutcomeCallable DdoscooClient::listAsyncTaskCallable(const ListAsyncTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAsyncTaskOutcome()>>(
			[this, request]()
			{
			return this->listAsyncTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ListLayer7CustomPortsOutcome DdoscooClient::listLayer7CustomPorts(const ListLayer7CustomPortsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLayer7CustomPortsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLayer7CustomPortsOutcome(ListLayer7CustomPortsResult(outcome.result()));
	else
		return ListLayer7CustomPortsOutcome(outcome.error());
}

void DdoscooClient::listLayer7CustomPortsAsync(const ListLayer7CustomPortsRequest& request, const ListLayer7CustomPortsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLayer7CustomPorts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ListLayer7CustomPortsOutcomeCallable DdoscooClient::listLayer7CustomPortsCallable(const ListLayer7CustomPortsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLayer7CustomPortsOutcome()>>(
			[this, request]()
			{
			return this->listLayer7CustomPorts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ListTagKeysOutcome DdoscooClient::listTagKeys(const ListTagKeysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagKeysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagKeysOutcome(ListTagKeysResult(outcome.result()));
	else
		return ListTagKeysOutcome(outcome.error());
}

void DdoscooClient::listTagKeysAsync(const ListTagKeysRequest& request, const ListTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ListTagKeysOutcomeCallable DdoscooClient::listTagKeysCallable(const ListTagKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagKeysOutcome()>>(
			[this, request]()
			{
			return this->listTagKeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ListTagResourcesOutcome DdoscooClient::listTagResources(const ListTagResourcesRequest &request) const
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

void DdoscooClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ListTagResourcesOutcomeCallable DdoscooClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ListValueAddedOutcome DdoscooClient::listValueAdded(const ListValueAddedRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListValueAddedOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListValueAddedOutcome(ListValueAddedResult(outcome.result()));
	else
		return ListValueAddedOutcome(outcome.error());
}

void DdoscooClient::listValueAddedAsync(const ListValueAddedRequest& request, const ListValueAddedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listValueAdded(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ListValueAddedOutcomeCallable DdoscooClient::listValueAddedCallable(const ListValueAddedRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListValueAddedOutcome()>>(
			[this, request]()
			{
			return this->listValueAdded(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyElasticBandWidthOutcome DdoscooClient::modifyElasticBandWidth(const ModifyElasticBandWidthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyElasticBandWidthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyElasticBandWidthOutcome(ModifyElasticBandWidthResult(outcome.result()));
	else
		return ModifyElasticBandWidthOutcome(outcome.error());
}

void DdoscooClient::modifyElasticBandWidthAsync(const ModifyElasticBandWidthRequest& request, const ModifyElasticBandWidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyElasticBandWidth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyElasticBandWidthOutcomeCallable DdoscooClient::modifyElasticBandWidthCallable(const ModifyElasticBandWidthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyElasticBandWidthOutcome()>>(
			[this, request]()
			{
			return this->modifyElasticBandWidth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyFullLogTtlOutcome DdoscooClient::modifyFullLogTtl(const ModifyFullLogTtlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyFullLogTtlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyFullLogTtlOutcome(ModifyFullLogTtlResult(outcome.result()));
	else
		return ModifyFullLogTtlOutcome(outcome.error());
}

void DdoscooClient::modifyFullLogTtlAsync(const ModifyFullLogTtlRequest& request, const ModifyFullLogTtlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyFullLogTtl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyFullLogTtlOutcomeCallable DdoscooClient::modifyFullLogTtlCallable(const ModifyFullLogTtlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyFullLogTtlOutcome()>>(
			[this, request]()
			{
			return this->modifyFullLogTtl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ModifyInstanceRemarkOutcome DdoscooClient::modifyInstanceRemark(const ModifyInstanceRemarkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceRemarkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceRemarkOutcome(ModifyInstanceRemarkResult(outcome.result()));
	else
		return ModifyInstanceRemarkOutcome(outcome.error());
}

void DdoscooClient::modifyInstanceRemarkAsync(const ModifyInstanceRemarkRequest& request, const ModifyInstanceRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceRemark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ModifyInstanceRemarkOutcomeCallable DdoscooClient::modifyInstanceRemarkCallable(const ModifyInstanceRemarkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceRemarkOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceRemark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::OpenDomainSlsConfigOutcome DdoscooClient::openDomainSlsConfig(const OpenDomainSlsConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenDomainSlsConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenDomainSlsConfigOutcome(OpenDomainSlsConfigResult(outcome.result()));
	else
		return OpenDomainSlsConfigOutcome(outcome.error());
}

void DdoscooClient::openDomainSlsConfigAsync(const OpenDomainSlsConfigRequest& request, const OpenDomainSlsConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openDomainSlsConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::OpenDomainSlsConfigOutcomeCallable DdoscooClient::openDomainSlsConfigCallable(const OpenDomainSlsConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenDomainSlsConfigOutcome()>>(
			[this, request]()
			{
			return this->openDomainSlsConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ReleaseInstanceOutcome DdoscooClient::releaseInstance(const ReleaseInstanceRequest &request) const
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

void DdoscooClient::releaseInstanceAsync(const ReleaseInstanceRequest& request, const ReleaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ReleaseInstanceOutcomeCallable DdoscooClient::releaseInstanceCallable(const ReleaseInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseInstanceOutcome()>>(
			[this, request]()
			{
			return this->releaseInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::ReleaseValueAddedOutcome DdoscooClient::releaseValueAdded(const ReleaseValueAddedRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseValueAddedOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseValueAddedOutcome(ReleaseValueAddedResult(outcome.result()));
	else
		return ReleaseValueAddedOutcome(outcome.error());
}

void DdoscooClient::releaseValueAddedAsync(const ReleaseValueAddedRequest& request, const ReleaseValueAddedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseValueAdded(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::ReleaseValueAddedOutcomeCallable DdoscooClient::releaseValueAddedCallable(const ReleaseValueAddedRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseValueAddedOutcome()>>(
			[this, request]()
			{
			return this->releaseValueAdded(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::TagResourcesOutcome DdoscooClient::tagResources(const TagResourcesRequest &request) const
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

void DdoscooClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::TagResourcesOutcomeCallable DdoscooClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdoscooClient::UntagResourcesOutcome DdoscooClient::untagResources(const UntagResourcesRequest &request) const
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

void DdoscooClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdoscooClient::UntagResourcesOutcomeCallable DdoscooClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

