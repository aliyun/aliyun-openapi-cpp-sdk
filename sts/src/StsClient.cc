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

#include <alibabacloud/sts/StsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Sts;
using namespace AlibabaCloud::Sts::Model;

namespace
{
	const std::string SERVICE_NAME = "Sts";
}

StsClient::StsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "sts");
}

StsClient::StsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "sts");
}

StsClient::StsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "sts");
}

StsClient::~StsClient()
{}

StsClient::AssumeRoleOutcome StsClient::assumeRole(const AssumeRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssumeRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssumeRoleOutcome(AssumeRoleResult(outcome.result()));
	else
		return AssumeRoleOutcome(outcome.error());
}

void StsClient::assumeRoleAsync(const AssumeRoleRequest& request, const AssumeRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, assumeRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

StsClient::AssumeRoleOutcomeCallable StsClient::assumeRoleCallable(const AssumeRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssumeRoleOutcome()>>(
			[this, request]()
			{
			return this->assumeRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

StsClient::AssumeRoleWithOIDCOutcome StsClient::assumeRoleWithOIDC(const AssumeRoleWithOIDCRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssumeRoleWithOIDCOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssumeRoleWithOIDCOutcome(AssumeRoleWithOIDCResult(outcome.result()));
	else
		return AssumeRoleWithOIDCOutcome(outcome.error());
}

void StsClient::assumeRoleWithOIDCAsync(const AssumeRoleWithOIDCRequest& request, const AssumeRoleWithOIDCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, assumeRoleWithOIDC(request), context);
	};

	asyncExecute(new Runnable(fn));
}

StsClient::AssumeRoleWithOIDCOutcomeCallable StsClient::assumeRoleWithOIDCCallable(const AssumeRoleWithOIDCRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssumeRoleWithOIDCOutcome()>>(
			[this, request]()
			{
			return this->assumeRoleWithOIDC(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

StsClient::AssumeRoleWithSAMLOutcome StsClient::assumeRoleWithSAML(const AssumeRoleWithSAMLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssumeRoleWithSAMLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssumeRoleWithSAMLOutcome(AssumeRoleWithSAMLResult(outcome.result()));
	else
		return AssumeRoleWithSAMLOutcome(outcome.error());
}

void StsClient::assumeRoleWithSAMLAsync(const AssumeRoleWithSAMLRequest& request, const AssumeRoleWithSAMLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, assumeRoleWithSAML(request), context);
	};

	asyncExecute(new Runnable(fn));
}

StsClient::AssumeRoleWithSAMLOutcomeCallable StsClient::assumeRoleWithSAMLCallable(const AssumeRoleWithSAMLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssumeRoleWithSAMLOutcome()>>(
			[this, request]()
			{
			return this->assumeRoleWithSAML(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

StsClient::GetCallerIdentityOutcome StsClient::getCallerIdentity(const GetCallerIdentityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCallerIdentityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCallerIdentityOutcome(GetCallerIdentityResult(outcome.result()));
	else
		return GetCallerIdentityOutcome(outcome.error());
}

void StsClient::getCallerIdentityAsync(const GetCallerIdentityRequest& request, const GetCallerIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCallerIdentity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

StsClient::GetCallerIdentityOutcomeCallable StsClient::getCallerIdentityCallable(const GetCallerIdentityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCallerIdentityOutcome()>>(
			[this, request]()
			{
			return this->getCallerIdentity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

