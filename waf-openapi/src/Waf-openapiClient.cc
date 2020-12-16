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

#include <alibabacloud/waf-openapi/Waf_openapiClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Waf_openapi;
using namespace AlibabaCloud::Waf_openapi::Model;

namespace
{
	const std::string SERVICE_NAME = "waf-openapi";
}

Waf_openapiClient::Waf_openapiClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "waf");
}

Waf_openapiClient::Waf_openapiClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "waf");
}

Waf_openapiClient::Waf_openapiClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "waf");
}

Waf_openapiClient::~Waf_openapiClient()
{}

Waf_openapiClient::CreateCertificateOutcome Waf_openapiClient::createCertificate(const CreateCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCertificateOutcome(CreateCertificateResult(outcome.result()));
	else
		return CreateCertificateOutcome(outcome.error());
}

void Waf_openapiClient::createCertificateAsync(const CreateCertificateRequest& request, const CreateCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::CreateCertificateOutcomeCallable Waf_openapiClient::createCertificateCallable(const CreateCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCertificateOutcome()>>(
			[this, request]()
			{
			return this->createCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::CreateCertificateByCertificateIdOutcome Waf_openapiClient::createCertificateByCertificateId(const CreateCertificateByCertificateIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCertificateByCertificateIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCertificateByCertificateIdOutcome(CreateCertificateByCertificateIdResult(outcome.result()));
	else
		return CreateCertificateByCertificateIdOutcome(outcome.error());
}

void Waf_openapiClient::createCertificateByCertificateIdAsync(const CreateCertificateByCertificateIdRequest& request, const CreateCertificateByCertificateIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCertificateByCertificateId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::CreateCertificateByCertificateIdOutcomeCallable Waf_openapiClient::createCertificateByCertificateIdCallable(const CreateCertificateByCertificateIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCertificateByCertificateIdOutcome()>>(
			[this, request]()
			{
			return this->createCertificateByCertificateId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::CreateDomainOutcome Waf_openapiClient::createDomain(const CreateDomainRequest &request) const
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

void Waf_openapiClient::createDomainAsync(const CreateDomainRequest& request, const CreateDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::CreateDomainOutcomeCallable Waf_openapiClient::createDomainCallable(const CreateDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDomainOutcome()>>(
			[this, request]()
			{
			return this->createDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::CreateProtectionModuleRuleOutcome Waf_openapiClient::createProtectionModuleRule(const CreateProtectionModuleRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateProtectionModuleRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateProtectionModuleRuleOutcome(CreateProtectionModuleRuleResult(outcome.result()));
	else
		return CreateProtectionModuleRuleOutcome(outcome.error());
}

void Waf_openapiClient::createProtectionModuleRuleAsync(const CreateProtectionModuleRuleRequest& request, const CreateProtectionModuleRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProtectionModuleRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::CreateProtectionModuleRuleOutcomeCallable Waf_openapiClient::createProtectionModuleRuleCallable(const CreateProtectionModuleRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProtectionModuleRuleOutcome()>>(
			[this, request]()
			{
			return this->createProtectionModuleRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::DeleteDomainOutcome Waf_openapiClient::deleteDomain(const DeleteDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDomainOutcome(DeleteDomainResult(outcome.result()));
	else
		return DeleteDomainOutcome(outcome.error());
}

void Waf_openapiClient::deleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::DeleteDomainOutcomeCallable Waf_openapiClient::deleteDomainCallable(const DeleteDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDomainOutcome()>>(
			[this, request]()
			{
			return this->deleteDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::DeleteInstanceOutcome Waf_openapiClient::deleteInstance(const DeleteInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteInstanceOutcome(DeleteInstanceResult(outcome.result()));
	else
		return DeleteInstanceOutcome(outcome.error());
}

void Waf_openapiClient::deleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::DeleteInstanceOutcomeCallable Waf_openapiClient::deleteInstanceCallable(const DeleteInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::DeleteProtectionModuleRuleOutcome Waf_openapiClient::deleteProtectionModuleRule(const DeleteProtectionModuleRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteProtectionModuleRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteProtectionModuleRuleOutcome(DeleteProtectionModuleRuleResult(outcome.result()));
	else
		return DeleteProtectionModuleRuleOutcome(outcome.error());
}

void Waf_openapiClient::deleteProtectionModuleRuleAsync(const DeleteProtectionModuleRuleRequest& request, const DeleteProtectionModuleRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProtectionModuleRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::DeleteProtectionModuleRuleOutcomeCallable Waf_openapiClient::deleteProtectionModuleRuleCallable(const DeleteProtectionModuleRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProtectionModuleRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteProtectionModuleRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::DescribeCertMatchStatusOutcome Waf_openapiClient::describeCertMatchStatus(const DescribeCertMatchStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCertMatchStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCertMatchStatusOutcome(DescribeCertMatchStatusResult(outcome.result()));
	else
		return DescribeCertMatchStatusOutcome(outcome.error());
}

void Waf_openapiClient::describeCertMatchStatusAsync(const DescribeCertMatchStatusRequest& request, const DescribeCertMatchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCertMatchStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::DescribeCertMatchStatusOutcomeCallable Waf_openapiClient::describeCertMatchStatusCallable(const DescribeCertMatchStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCertMatchStatusOutcome()>>(
			[this, request]()
			{
			return this->describeCertMatchStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::DescribeCertificatesOutcome Waf_openapiClient::describeCertificates(const DescribeCertificatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCertificatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCertificatesOutcome(DescribeCertificatesResult(outcome.result()));
	else
		return DescribeCertificatesOutcome(outcome.error());
}

void Waf_openapiClient::describeCertificatesAsync(const DescribeCertificatesRequest& request, const DescribeCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCertificates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::DescribeCertificatesOutcomeCallable Waf_openapiClient::describeCertificatesCallable(const DescribeCertificatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCertificatesOutcome()>>(
			[this, request]()
			{
			return this->describeCertificates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::DescribeDomainOutcome Waf_openapiClient::describeDomain(const DescribeDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainOutcome(DescribeDomainResult(outcome.result()));
	else
		return DescribeDomainOutcome(outcome.error());
}

void Waf_openapiClient::describeDomainAsync(const DescribeDomainRequest& request, const DescribeDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::DescribeDomainOutcomeCallable Waf_openapiClient::describeDomainCallable(const DescribeDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainOutcome()>>(
			[this, request]()
			{
			return this->describeDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::DescribeDomainAdvanceConfigsOutcome Waf_openapiClient::describeDomainAdvanceConfigs(const DescribeDomainAdvanceConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainAdvanceConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainAdvanceConfigsOutcome(DescribeDomainAdvanceConfigsResult(outcome.result()));
	else
		return DescribeDomainAdvanceConfigsOutcome(outcome.error());
}

void Waf_openapiClient::describeDomainAdvanceConfigsAsync(const DescribeDomainAdvanceConfigsRequest& request, const DescribeDomainAdvanceConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainAdvanceConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::DescribeDomainAdvanceConfigsOutcomeCallable Waf_openapiClient::describeDomainAdvanceConfigsCallable(const DescribeDomainAdvanceConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainAdvanceConfigsOutcome()>>(
			[this, request]()
			{
			return this->describeDomainAdvanceConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::DescribeDomainBasicConfigsOutcome Waf_openapiClient::describeDomainBasicConfigs(const DescribeDomainBasicConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainBasicConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainBasicConfigsOutcome(DescribeDomainBasicConfigsResult(outcome.result()));
	else
		return DescribeDomainBasicConfigsOutcome(outcome.error());
}

void Waf_openapiClient::describeDomainBasicConfigsAsync(const DescribeDomainBasicConfigsRequest& request, const DescribeDomainBasicConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainBasicConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::DescribeDomainBasicConfigsOutcomeCallable Waf_openapiClient::describeDomainBasicConfigsCallable(const DescribeDomainBasicConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainBasicConfigsOutcome()>>(
			[this, request]()
			{
			return this->describeDomainBasicConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::DescribeDomainNamesOutcome Waf_openapiClient::describeDomainNames(const DescribeDomainNamesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainNamesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainNamesOutcome(DescribeDomainNamesResult(outcome.result()));
	else
		return DescribeDomainNamesOutcome(outcome.error());
}

void Waf_openapiClient::describeDomainNamesAsync(const DescribeDomainNamesRequest& request, const DescribeDomainNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainNames(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::DescribeDomainNamesOutcomeCallable Waf_openapiClient::describeDomainNamesCallable(const DescribeDomainNamesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainNamesOutcome()>>(
			[this, request]()
			{
			return this->describeDomainNames(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::DescribeDomainRuleGroupOutcome Waf_openapiClient::describeDomainRuleGroup(const DescribeDomainRuleGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainRuleGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainRuleGroupOutcome(DescribeDomainRuleGroupResult(outcome.result()));
	else
		return DescribeDomainRuleGroupOutcome(outcome.error());
}

void Waf_openapiClient::describeDomainRuleGroupAsync(const DescribeDomainRuleGroupRequest& request, const DescribeDomainRuleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainRuleGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::DescribeDomainRuleGroupOutcomeCallable Waf_openapiClient::describeDomainRuleGroupCallable(const DescribeDomainRuleGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainRuleGroupOutcome()>>(
			[this, request]()
			{
			return this->describeDomainRuleGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::DescribeInstanceInfoOutcome Waf_openapiClient::describeInstanceInfo(const DescribeInstanceInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceInfoOutcome(DescribeInstanceInfoResult(outcome.result()));
	else
		return DescribeInstanceInfoOutcome(outcome.error());
}

void Waf_openapiClient::describeInstanceInfoAsync(const DescribeInstanceInfoRequest& request, const DescribeInstanceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::DescribeInstanceInfoOutcomeCallable Waf_openapiClient::describeInstanceInfoCallable(const DescribeInstanceInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceInfoOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::DescribeInstanceInfosOutcome Waf_openapiClient::describeInstanceInfos(const DescribeInstanceInfosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceInfosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceInfosOutcome(DescribeInstanceInfosResult(outcome.result()));
	else
		return DescribeInstanceInfosOutcome(outcome.error());
}

void Waf_openapiClient::describeInstanceInfosAsync(const DescribeInstanceInfosRequest& request, const DescribeInstanceInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceInfos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::DescribeInstanceInfosOutcomeCallable Waf_openapiClient::describeInstanceInfosCallable(const DescribeInstanceInfosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceInfosOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceInfos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::DescribeInstanceSpecInfoOutcome Waf_openapiClient::describeInstanceSpecInfo(const DescribeInstanceSpecInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceSpecInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceSpecInfoOutcome(DescribeInstanceSpecInfoResult(outcome.result()));
	else
		return DescribeInstanceSpecInfoOutcome(outcome.error());
}

void Waf_openapiClient::describeInstanceSpecInfoAsync(const DescribeInstanceSpecInfoRequest& request, const DescribeInstanceSpecInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceSpecInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::DescribeInstanceSpecInfoOutcomeCallable Waf_openapiClient::describeInstanceSpecInfoCallable(const DescribeInstanceSpecInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceSpecInfoOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceSpecInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::DescribeProtectionModuleModeOutcome Waf_openapiClient::describeProtectionModuleMode(const DescribeProtectionModuleModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProtectionModuleModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProtectionModuleModeOutcome(DescribeProtectionModuleModeResult(outcome.result()));
	else
		return DescribeProtectionModuleModeOutcome(outcome.error());
}

void Waf_openapiClient::describeProtectionModuleModeAsync(const DescribeProtectionModuleModeRequest& request, const DescribeProtectionModuleModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProtectionModuleMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::DescribeProtectionModuleModeOutcomeCallable Waf_openapiClient::describeProtectionModuleModeCallable(const DescribeProtectionModuleModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProtectionModuleModeOutcome()>>(
			[this, request]()
			{
			return this->describeProtectionModuleMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::DescribeProtectionModuleRulesOutcome Waf_openapiClient::describeProtectionModuleRules(const DescribeProtectionModuleRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProtectionModuleRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProtectionModuleRulesOutcome(DescribeProtectionModuleRulesResult(outcome.result()));
	else
		return DescribeProtectionModuleRulesOutcome(outcome.error());
}

void Waf_openapiClient::describeProtectionModuleRulesAsync(const DescribeProtectionModuleRulesRequest& request, const DescribeProtectionModuleRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProtectionModuleRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::DescribeProtectionModuleRulesOutcomeCallable Waf_openapiClient::describeProtectionModuleRulesCallable(const DescribeProtectionModuleRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProtectionModuleRulesOutcome()>>(
			[this, request]()
			{
			return this->describeProtectionModuleRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::DescribeProtectionModuleStatusOutcome Waf_openapiClient::describeProtectionModuleStatus(const DescribeProtectionModuleStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProtectionModuleStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProtectionModuleStatusOutcome(DescribeProtectionModuleStatusResult(outcome.result()));
	else
		return DescribeProtectionModuleStatusOutcome(outcome.error());
}

void Waf_openapiClient::describeProtectionModuleStatusAsync(const DescribeProtectionModuleStatusRequest& request, const DescribeProtectionModuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProtectionModuleStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::DescribeProtectionModuleStatusOutcomeCallable Waf_openapiClient::describeProtectionModuleStatusCallable(const DescribeProtectionModuleStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProtectionModuleStatusOutcome()>>(
			[this, request]()
			{
			return this->describeProtectionModuleStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::DescribeWafSourceIpSegmentOutcome Waf_openapiClient::describeWafSourceIpSegment(const DescribeWafSourceIpSegmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWafSourceIpSegmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWafSourceIpSegmentOutcome(DescribeWafSourceIpSegmentResult(outcome.result()));
	else
		return DescribeWafSourceIpSegmentOutcome(outcome.error());
}

void Waf_openapiClient::describeWafSourceIpSegmentAsync(const DescribeWafSourceIpSegmentRequest& request, const DescribeWafSourceIpSegmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWafSourceIpSegment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::DescribeWafSourceIpSegmentOutcomeCallable Waf_openapiClient::describeWafSourceIpSegmentCallable(const DescribeWafSourceIpSegmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWafSourceIpSegmentOutcome()>>(
			[this, request]()
			{
			return this->describeWafSourceIpSegment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::ModifyDomainOutcome Waf_openapiClient::modifyDomain(const ModifyDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDomainOutcome(ModifyDomainResult(outcome.result()));
	else
		return ModifyDomainOutcome(outcome.error());
}

void Waf_openapiClient::modifyDomainAsync(const ModifyDomainRequest& request, const ModifyDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::ModifyDomainOutcomeCallable Waf_openapiClient::modifyDomainCallable(const ModifyDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDomainOutcome()>>(
			[this, request]()
			{
			return this->modifyDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::ModifyDomainClusterTypeOutcome Waf_openapiClient::modifyDomainClusterType(const ModifyDomainClusterTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDomainClusterTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDomainClusterTypeOutcome(ModifyDomainClusterTypeResult(outcome.result()));
	else
		return ModifyDomainClusterTypeOutcome(outcome.error());
}

void Waf_openapiClient::modifyDomainClusterTypeAsync(const ModifyDomainClusterTypeRequest& request, const ModifyDomainClusterTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDomainClusterType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::ModifyDomainClusterTypeOutcomeCallable Waf_openapiClient::modifyDomainClusterTypeCallable(const ModifyDomainClusterTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDomainClusterTypeOutcome()>>(
			[this, request]()
			{
			return this->modifyDomainClusterType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::ModifyDomainIpv6StatusOutcome Waf_openapiClient::modifyDomainIpv6Status(const ModifyDomainIpv6StatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDomainIpv6StatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDomainIpv6StatusOutcome(ModifyDomainIpv6StatusResult(outcome.result()));
	else
		return ModifyDomainIpv6StatusOutcome(outcome.error());
}

void Waf_openapiClient::modifyDomainIpv6StatusAsync(const ModifyDomainIpv6StatusRequest& request, const ModifyDomainIpv6StatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDomainIpv6Status(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::ModifyDomainIpv6StatusOutcomeCallable Waf_openapiClient::modifyDomainIpv6StatusCallable(const ModifyDomainIpv6StatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDomainIpv6StatusOutcome()>>(
			[this, request]()
			{
			return this->modifyDomainIpv6Status(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::ModifyLogRetrievalStatusOutcome Waf_openapiClient::modifyLogRetrievalStatus(const ModifyLogRetrievalStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLogRetrievalStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLogRetrievalStatusOutcome(ModifyLogRetrievalStatusResult(outcome.result()));
	else
		return ModifyLogRetrievalStatusOutcome(outcome.error());
}

void Waf_openapiClient::modifyLogRetrievalStatusAsync(const ModifyLogRetrievalStatusRequest& request, const ModifyLogRetrievalStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLogRetrievalStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::ModifyLogRetrievalStatusOutcomeCallable Waf_openapiClient::modifyLogRetrievalStatusCallable(const ModifyLogRetrievalStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLogRetrievalStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyLogRetrievalStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::ModifyLogServiceStatusOutcome Waf_openapiClient::modifyLogServiceStatus(const ModifyLogServiceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLogServiceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLogServiceStatusOutcome(ModifyLogServiceStatusResult(outcome.result()));
	else
		return ModifyLogServiceStatusOutcome(outcome.error());
}

void Waf_openapiClient::modifyLogServiceStatusAsync(const ModifyLogServiceStatusRequest& request, const ModifyLogServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLogServiceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::ModifyLogServiceStatusOutcomeCallable Waf_openapiClient::modifyLogServiceStatusCallable(const ModifyLogServiceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLogServiceStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyLogServiceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::ModifyProtectionModuleModeOutcome Waf_openapiClient::modifyProtectionModuleMode(const ModifyProtectionModuleModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyProtectionModuleModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyProtectionModuleModeOutcome(ModifyProtectionModuleModeResult(outcome.result()));
	else
		return ModifyProtectionModuleModeOutcome(outcome.error());
}

void Waf_openapiClient::modifyProtectionModuleModeAsync(const ModifyProtectionModuleModeRequest& request, const ModifyProtectionModuleModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyProtectionModuleMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::ModifyProtectionModuleModeOutcomeCallable Waf_openapiClient::modifyProtectionModuleModeCallable(const ModifyProtectionModuleModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyProtectionModuleModeOutcome()>>(
			[this, request]()
			{
			return this->modifyProtectionModuleMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::ModifyProtectionModuleRuleOutcome Waf_openapiClient::modifyProtectionModuleRule(const ModifyProtectionModuleRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyProtectionModuleRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyProtectionModuleRuleOutcome(ModifyProtectionModuleRuleResult(outcome.result()));
	else
		return ModifyProtectionModuleRuleOutcome(outcome.error());
}

void Waf_openapiClient::modifyProtectionModuleRuleAsync(const ModifyProtectionModuleRuleRequest& request, const ModifyProtectionModuleRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyProtectionModuleRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::ModifyProtectionModuleRuleOutcomeCallable Waf_openapiClient::modifyProtectionModuleRuleCallable(const ModifyProtectionModuleRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyProtectionModuleRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyProtectionModuleRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::ModifyProtectionModuleStatusOutcome Waf_openapiClient::modifyProtectionModuleStatus(const ModifyProtectionModuleStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyProtectionModuleStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyProtectionModuleStatusOutcome(ModifyProtectionModuleStatusResult(outcome.result()));
	else
		return ModifyProtectionModuleStatusOutcome(outcome.error());
}

void Waf_openapiClient::modifyProtectionModuleStatusAsync(const ModifyProtectionModuleStatusRequest& request, const ModifyProtectionModuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyProtectionModuleStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::ModifyProtectionModuleStatusOutcomeCallable Waf_openapiClient::modifyProtectionModuleStatusCallable(const ModifyProtectionModuleStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyProtectionModuleStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyProtectionModuleStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::ModifyProtectionRuleCacheStatusOutcome Waf_openapiClient::modifyProtectionRuleCacheStatus(const ModifyProtectionRuleCacheStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyProtectionRuleCacheStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyProtectionRuleCacheStatusOutcome(ModifyProtectionRuleCacheStatusResult(outcome.result()));
	else
		return ModifyProtectionRuleCacheStatusOutcome(outcome.error());
}

void Waf_openapiClient::modifyProtectionRuleCacheStatusAsync(const ModifyProtectionRuleCacheStatusRequest& request, const ModifyProtectionRuleCacheStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyProtectionRuleCacheStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::ModifyProtectionRuleCacheStatusOutcomeCallable Waf_openapiClient::modifyProtectionRuleCacheStatusCallable(const ModifyProtectionRuleCacheStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyProtectionRuleCacheStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyProtectionRuleCacheStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::ModifyProtectionRuleStatusOutcome Waf_openapiClient::modifyProtectionRuleStatus(const ModifyProtectionRuleStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyProtectionRuleStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyProtectionRuleStatusOutcome(ModifyProtectionRuleStatusResult(outcome.result()));
	else
		return ModifyProtectionRuleStatusOutcome(outcome.error());
}

void Waf_openapiClient::modifyProtectionRuleStatusAsync(const ModifyProtectionRuleStatusRequest& request, const ModifyProtectionRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyProtectionRuleStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::ModifyProtectionRuleStatusOutcomeCallable Waf_openapiClient::modifyProtectionRuleStatusCallable(const ModifyProtectionRuleStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyProtectionRuleStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyProtectionRuleStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Waf_openapiClient::SetDomainRuleGroupOutcome Waf_openapiClient::setDomainRuleGroup(const SetDomainRuleGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDomainRuleGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDomainRuleGroupOutcome(SetDomainRuleGroupResult(outcome.result()));
	else
		return SetDomainRuleGroupOutcome(outcome.error());
}

void Waf_openapiClient::setDomainRuleGroupAsync(const SetDomainRuleGroupRequest& request, const SetDomainRuleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDomainRuleGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Waf_openapiClient::SetDomainRuleGroupOutcomeCallable Waf_openapiClient::setDomainRuleGroupCallable(const SetDomainRuleGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDomainRuleGroupOutcome()>>(
			[this, request]()
			{
			return this->setDomainRuleGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

