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

#include <alibabacloud/mopen/MoPenClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::MoPen;
using namespace AlibabaCloud::MoPen::Model;

namespace
{
	const std::string SERVICE_NAME = "MoPen";
}

MoPenClient::MoPenClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "mopen");
}

MoPenClient::MoPenClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "mopen");
}

MoPenClient::MoPenClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "mopen");
}

MoPenClient::~MoPenClient()
{}

MoPenClient::MoPenAddGroupMemberOutcome MoPenClient::moPenAddGroupMember(const MoPenAddGroupMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MoPenAddGroupMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MoPenAddGroupMemberOutcome(MoPenAddGroupMemberResult(outcome.result()));
	else
		return MoPenAddGroupMemberOutcome(outcome.error());
}

void MoPenClient::moPenAddGroupMemberAsync(const MoPenAddGroupMemberRequest& request, const MoPenAddGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moPenAddGroupMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MoPenClient::MoPenAddGroupMemberOutcomeCallable MoPenClient::moPenAddGroupMemberCallable(const MoPenAddGroupMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoPenAddGroupMemberOutcome()>>(
			[this, request]()
			{
			return this->moPenAddGroupMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MoPenClient::MoPenBindIsvOutcome MoPenClient::moPenBindIsv(const MoPenBindIsvRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MoPenBindIsvOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MoPenBindIsvOutcome(MoPenBindIsvResult(outcome.result()));
	else
		return MoPenBindIsvOutcome(outcome.error());
}

void MoPenClient::moPenBindIsvAsync(const MoPenBindIsvRequest& request, const MoPenBindIsvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moPenBindIsv(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MoPenClient::MoPenBindIsvOutcomeCallable MoPenClient::moPenBindIsvCallable(const MoPenBindIsvRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoPenBindIsvOutcome()>>(
			[this, request]()
			{
			return this->moPenBindIsv(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MoPenClient::MoPenCreateDeviceOutcome MoPenClient::moPenCreateDevice(const MoPenCreateDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MoPenCreateDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MoPenCreateDeviceOutcome(MoPenCreateDeviceResult(outcome.result()));
	else
		return MoPenCreateDeviceOutcome(outcome.error());
}

void MoPenClient::moPenCreateDeviceAsync(const MoPenCreateDeviceRequest& request, const MoPenCreateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moPenCreateDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MoPenClient::MoPenCreateDeviceOutcomeCallable MoPenClient::moPenCreateDeviceCallable(const MoPenCreateDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoPenCreateDeviceOutcome()>>(
			[this, request]()
			{
			return this->moPenCreateDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MoPenClient::MoPenDeleteGroupOutcome MoPenClient::moPenDeleteGroup(const MoPenDeleteGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MoPenDeleteGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MoPenDeleteGroupOutcome(MoPenDeleteGroupResult(outcome.result()));
	else
		return MoPenDeleteGroupOutcome(outcome.error());
}

void MoPenClient::moPenDeleteGroupAsync(const MoPenDeleteGroupRequest& request, const MoPenDeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moPenDeleteGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MoPenClient::MoPenDeleteGroupOutcomeCallable MoPenClient::moPenDeleteGroupCallable(const MoPenDeleteGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoPenDeleteGroupOutcome()>>(
			[this, request]()
			{
			return this->moPenDeleteGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MoPenClient::MoPenDeleteGroupMemberOutcome MoPenClient::moPenDeleteGroupMember(const MoPenDeleteGroupMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MoPenDeleteGroupMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MoPenDeleteGroupMemberOutcome(MoPenDeleteGroupMemberResult(outcome.result()));
	else
		return MoPenDeleteGroupMemberOutcome(outcome.error());
}

void MoPenClient::moPenDeleteGroupMemberAsync(const MoPenDeleteGroupMemberRequest& request, const MoPenDeleteGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moPenDeleteGroupMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MoPenClient::MoPenDeleteGroupMemberOutcomeCallable MoPenClient::moPenDeleteGroupMemberCallable(const MoPenDeleteGroupMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoPenDeleteGroupMemberOutcome()>>(
			[this, request]()
			{
			return this->moPenDeleteGroupMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MoPenClient::MoPenDoRecognizeOutcome MoPenClient::moPenDoRecognize(const MoPenDoRecognizeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MoPenDoRecognizeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MoPenDoRecognizeOutcome(MoPenDoRecognizeResult(outcome.result()));
	else
		return MoPenDoRecognizeOutcome(outcome.error());
}

void MoPenClient::moPenDoRecognizeAsync(const MoPenDoRecognizeRequest& request, const MoPenDoRecognizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moPenDoRecognize(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MoPenClient::MoPenDoRecognizeOutcomeCallable MoPenClient::moPenDoRecognizeCallable(const MoPenDoRecognizeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoPenDoRecognizeOutcome()>>(
			[this, request]()
			{
			return this->moPenDoRecognize(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MoPenClient::MoPenFindGroupOutcome MoPenClient::moPenFindGroup(const MoPenFindGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MoPenFindGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MoPenFindGroupOutcome(MoPenFindGroupResult(outcome.result()));
	else
		return MoPenFindGroupOutcome(outcome.error());
}

void MoPenClient::moPenFindGroupAsync(const MoPenFindGroupRequest& request, const MoPenFindGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moPenFindGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MoPenClient::MoPenFindGroupOutcomeCallable MoPenClient::moPenFindGroupCallable(const MoPenFindGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoPenFindGroupOutcome()>>(
			[this, request]()
			{
			return this->moPenFindGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MoPenClient::MoPenQueryCanvasOutcome MoPenClient::moPenQueryCanvas(const MoPenQueryCanvasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MoPenQueryCanvasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MoPenQueryCanvasOutcome(MoPenQueryCanvasResult(outcome.result()));
	else
		return MoPenQueryCanvasOutcome(outcome.error());
}

void MoPenClient::moPenQueryCanvasAsync(const MoPenQueryCanvasRequest& request, const MoPenQueryCanvasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moPenQueryCanvas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MoPenClient::MoPenQueryCanvasOutcomeCallable MoPenClient::moPenQueryCanvasCallable(const MoPenQueryCanvasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoPenQueryCanvasOutcome()>>(
			[this, request]()
			{
			return this->moPenQueryCanvas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MoPenClient::MoPenSendMqttMessageOutcome MoPenClient::moPenSendMqttMessage(const MoPenSendMqttMessageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MoPenSendMqttMessageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MoPenSendMqttMessageOutcome(MoPenSendMqttMessageResult(outcome.result()));
	else
		return MoPenSendMqttMessageOutcome(outcome.error());
}

void MoPenClient::moPenSendMqttMessageAsync(const MoPenSendMqttMessageRequest& request, const MoPenSendMqttMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moPenSendMqttMessage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MoPenClient::MoPenSendMqttMessageOutcomeCallable MoPenClient::moPenSendMqttMessageCallable(const MoPenSendMqttMessageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoPenSendMqttMessageOutcome()>>(
			[this, request]()
			{
			return this->moPenSendMqttMessage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MoPenClient::MopenCreateGroupOutcome MoPenClient::mopenCreateGroup(const MopenCreateGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MopenCreateGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MopenCreateGroupOutcome(MopenCreateGroupResult(outcome.result()));
	else
		return MopenCreateGroupOutcome(outcome.error());
}

void MoPenClient::mopenCreateGroupAsync(const MopenCreateGroupRequest& request, const MopenCreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, mopenCreateGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MoPenClient::MopenCreateGroupOutcomeCallable MoPenClient::mopenCreateGroupCallable(const MopenCreateGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MopenCreateGroupOutcome()>>(
			[this, request]()
			{
			return this->mopenCreateGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

