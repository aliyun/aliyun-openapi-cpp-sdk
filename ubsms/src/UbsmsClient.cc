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

#include <alibabacloud/ubsms/UbsmsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Ubsms;
using namespace AlibabaCloud::Ubsms::Model;

namespace
{
	const std::string SERVICE_NAME = "Ubsms";
}

UbsmsClient::UbsmsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ubsms");
}

UbsmsClient::UbsmsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ubsms");
}

UbsmsClient::UbsmsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ubsms");
}

UbsmsClient::~UbsmsClient()
{}

UbsmsClient::DescribeBusinessStatusOutcome UbsmsClient::describeBusinessStatus(const DescribeBusinessStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBusinessStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBusinessStatusOutcome(DescribeBusinessStatusResult(outcome.result()));
	else
		return DescribeBusinessStatusOutcome(outcome.error());
}

void UbsmsClient::describeBusinessStatusAsync(const DescribeBusinessStatusRequest& request, const DescribeBusinessStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBusinessStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

UbsmsClient::DescribeBusinessStatusOutcomeCallable UbsmsClient::describeBusinessStatusCallable(const DescribeBusinessStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBusinessStatusOutcome()>>(
			[this, request]()
			{
			return this->describeBusinessStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

UbsmsClient::NotifyUserBusinessCommandOutcome UbsmsClient::notifyUserBusinessCommand(const NotifyUserBusinessCommandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return NotifyUserBusinessCommandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return NotifyUserBusinessCommandOutcome(NotifyUserBusinessCommandResult(outcome.result()));
	else
		return NotifyUserBusinessCommandOutcome(outcome.error());
}

void UbsmsClient::notifyUserBusinessCommandAsync(const NotifyUserBusinessCommandRequest& request, const NotifyUserBusinessCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, notifyUserBusinessCommand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

UbsmsClient::NotifyUserBusinessCommandOutcomeCallable UbsmsClient::notifyUserBusinessCommandCallable(const NotifyUserBusinessCommandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<NotifyUserBusinessCommandOutcome()>>(
			[this, request]()
			{
			return this->notifyUserBusinessCommand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

UbsmsClient::SetUserBusinessStatusOutcome UbsmsClient::setUserBusinessStatus(const SetUserBusinessStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetUserBusinessStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetUserBusinessStatusOutcome(SetUserBusinessStatusResult(outcome.result()));
	else
		return SetUserBusinessStatusOutcome(outcome.error());
}

void UbsmsClient::setUserBusinessStatusAsync(const SetUserBusinessStatusRequest& request, const SetUserBusinessStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setUserBusinessStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

UbsmsClient::SetUserBusinessStatusOutcomeCallable UbsmsClient::setUserBusinessStatusCallable(const SetUserBusinessStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetUserBusinessStatusOutcome()>>(
			[this, request]()
			{
			return this->setUserBusinessStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

