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

#include <alibabacloud/osssddp/OssSddpClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::OssSddp;
using namespace AlibabaCloud::OssSddp::Model;

namespace
{
	const std::string SERVICE_NAME = "OssSddp";
}

OssSddpClient::OssSddpClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

OssSddpClient::OssSddpClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

OssSddpClient::OssSddpClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

OssSddpClient::~OssSddpClient()
{}

OssSddpClient::GetSddpVersionOutcome OssSddpClient::getSddpVersion(const GetSddpVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSddpVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSddpVersionOutcome(GetSddpVersionResult(outcome.result()));
	else
		return GetSddpVersionOutcome(outcome.error());
}

void OssSddpClient::getSddpVersionAsync(const GetSddpVersionRequest& request, const GetSddpVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSddpVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OssSddpClient::GetSddpVersionOutcomeCallable OssSddpClient::getSddpVersionCallable(const GetSddpVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSddpVersionOutcome()>>(
			[this, request]()
			{
			return this->getSddpVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OssSddpClient::UpgradeSddpVersionOutcome OssSddpClient::upgradeSddpVersion(const UpgradeSddpVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeSddpVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeSddpVersionOutcome(UpgradeSddpVersionResult(outcome.result()));
	else
		return UpgradeSddpVersionOutcome(outcome.error());
}

void OssSddpClient::upgradeSddpVersionAsync(const UpgradeSddpVersionRequest& request, const UpgradeSddpVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeSddpVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OssSddpClient::UpgradeSddpVersionOutcomeCallable OssSddpClient::upgradeSddpVersionCallable(const UpgradeSddpVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeSddpVersionOutcome()>>(
			[this, request]()
			{
			return this->upgradeSddpVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

