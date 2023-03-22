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

#include <alibabacloud/appstream-center/Appstream_centerClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Appstream_center;
using namespace AlibabaCloud::Appstream_center::Model;

namespace
{
	const std::string SERVICE_NAME = "appstream-center";
}

Appstream_centerClient::Appstream_centerClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Appstream_centerClient::Appstream_centerClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Appstream_centerClient::Appstream_centerClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Appstream_centerClient::~Appstream_centerClient()
{}

Appstream_centerClient::ApproveOtaTaskOutcome Appstream_centerClient::approveOtaTask(const ApproveOtaTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApproveOtaTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApproveOtaTaskOutcome(ApproveOtaTaskResult(outcome.result()));
	else
		return ApproveOtaTaskOutcome(outcome.error());
}

void Appstream_centerClient::approveOtaTaskAsync(const ApproveOtaTaskRequest& request, const ApproveOtaTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, approveOtaTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Appstream_centerClient::ApproveOtaTaskOutcomeCallable Appstream_centerClient::approveOtaTaskCallable(const ApproveOtaTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApproveOtaTaskOutcome()>>(
			[this, request]()
			{
			return this->approveOtaTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Appstream_centerClient::AuthorizeInstanceGroupOutcome Appstream_centerClient::authorizeInstanceGroup(const AuthorizeInstanceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AuthorizeInstanceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AuthorizeInstanceGroupOutcome(AuthorizeInstanceGroupResult(outcome.result()));
	else
		return AuthorizeInstanceGroupOutcome(outcome.error());
}

void Appstream_centerClient::authorizeInstanceGroupAsync(const AuthorizeInstanceGroupRequest& request, const AuthorizeInstanceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, authorizeInstanceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Appstream_centerClient::AuthorizeInstanceGroupOutcomeCallable Appstream_centerClient::authorizeInstanceGroupCallable(const AuthorizeInstanceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AuthorizeInstanceGroupOutcome()>>(
			[this, request]()
			{
			return this->authorizeInstanceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Appstream_centerClient::CancelOtaTaskOutcome Appstream_centerClient::cancelOtaTask(const CancelOtaTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelOtaTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelOtaTaskOutcome(CancelOtaTaskResult(outcome.result()));
	else
		return CancelOtaTaskOutcome(outcome.error());
}

void Appstream_centerClient::cancelOtaTaskAsync(const CancelOtaTaskRequest& request, const CancelOtaTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelOtaTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Appstream_centerClient::CancelOtaTaskOutcomeCallable Appstream_centerClient::cancelOtaTaskCallable(const CancelOtaTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelOtaTaskOutcome()>>(
			[this, request]()
			{
			return this->cancelOtaTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Appstream_centerClient::CreateAppInstanceGroupOutcome Appstream_centerClient::createAppInstanceGroup(const CreateAppInstanceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAppInstanceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAppInstanceGroupOutcome(CreateAppInstanceGroupResult(outcome.result()));
	else
		return CreateAppInstanceGroupOutcome(outcome.error());
}

void Appstream_centerClient::createAppInstanceGroupAsync(const CreateAppInstanceGroupRequest& request, const CreateAppInstanceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAppInstanceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Appstream_centerClient::CreateAppInstanceGroupOutcomeCallable Appstream_centerClient::createAppInstanceGroupCallable(const CreateAppInstanceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAppInstanceGroupOutcome()>>(
			[this, request]()
			{
			return this->createAppInstanceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Appstream_centerClient::DeleteAppInstanceGroupOutcome Appstream_centerClient::deleteAppInstanceGroup(const DeleteAppInstanceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAppInstanceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAppInstanceGroupOutcome(DeleteAppInstanceGroupResult(outcome.result()));
	else
		return DeleteAppInstanceGroupOutcome(outcome.error());
}

void Appstream_centerClient::deleteAppInstanceGroupAsync(const DeleteAppInstanceGroupRequest& request, const DeleteAppInstanceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAppInstanceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Appstream_centerClient::DeleteAppInstanceGroupOutcomeCallable Appstream_centerClient::deleteAppInstanceGroupCallable(const DeleteAppInstanceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAppInstanceGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteAppInstanceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Appstream_centerClient::DeleteAppInstancesOutcome Appstream_centerClient::deleteAppInstances(const DeleteAppInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAppInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAppInstancesOutcome(DeleteAppInstancesResult(outcome.result()));
	else
		return DeleteAppInstancesOutcome(outcome.error());
}

void Appstream_centerClient::deleteAppInstancesAsync(const DeleteAppInstancesRequest& request, const DeleteAppInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAppInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Appstream_centerClient::DeleteAppInstancesOutcomeCallable Appstream_centerClient::deleteAppInstancesCallable(const DeleteAppInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAppInstancesOutcome()>>(
			[this, request]()
			{
			return this->deleteAppInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Appstream_centerClient::GetAppInstanceGroupOutcome Appstream_centerClient::getAppInstanceGroup(const GetAppInstanceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAppInstanceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAppInstanceGroupOutcome(GetAppInstanceGroupResult(outcome.result()));
	else
		return GetAppInstanceGroupOutcome(outcome.error());
}

void Appstream_centerClient::getAppInstanceGroupAsync(const GetAppInstanceGroupRequest& request, const GetAppInstanceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAppInstanceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Appstream_centerClient::GetAppInstanceGroupOutcomeCallable Appstream_centerClient::getAppInstanceGroupCallable(const GetAppInstanceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAppInstanceGroupOutcome()>>(
			[this, request]()
			{
			return this->getAppInstanceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Appstream_centerClient::GetConnectionTicketOutcome Appstream_centerClient::getConnectionTicket(const GetConnectionTicketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetConnectionTicketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetConnectionTicketOutcome(GetConnectionTicketResult(outcome.result()));
	else
		return GetConnectionTicketOutcome(outcome.error());
}

void Appstream_centerClient::getConnectionTicketAsync(const GetConnectionTicketRequest& request, const GetConnectionTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getConnectionTicket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Appstream_centerClient::GetConnectionTicketOutcomeCallable Appstream_centerClient::getConnectionTicketCallable(const GetConnectionTicketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetConnectionTicketOutcome()>>(
			[this, request]()
			{
			return this->getConnectionTicket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Appstream_centerClient::GetOtaTaskByTaskIdOutcome Appstream_centerClient::getOtaTaskByTaskId(const GetOtaTaskByTaskIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOtaTaskByTaskIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOtaTaskByTaskIdOutcome(GetOtaTaskByTaskIdResult(outcome.result()));
	else
		return GetOtaTaskByTaskIdOutcome(outcome.error());
}

void Appstream_centerClient::getOtaTaskByTaskIdAsync(const GetOtaTaskByTaskIdRequest& request, const GetOtaTaskByTaskIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOtaTaskByTaskId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Appstream_centerClient::GetOtaTaskByTaskIdOutcomeCallable Appstream_centerClient::getOtaTaskByTaskIdCallable(const GetOtaTaskByTaskIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOtaTaskByTaskIdOutcome()>>(
			[this, request]()
			{
			return this->getOtaTaskByTaskId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Appstream_centerClient::GetResourcePriceOutcome Appstream_centerClient::getResourcePrice(const GetResourcePriceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetResourcePriceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetResourcePriceOutcome(GetResourcePriceResult(outcome.result()));
	else
		return GetResourcePriceOutcome(outcome.error());
}

void Appstream_centerClient::getResourcePriceAsync(const GetResourcePriceRequest& request, const GetResourcePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getResourcePrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Appstream_centerClient::GetResourcePriceOutcomeCallable Appstream_centerClient::getResourcePriceCallable(const GetResourcePriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetResourcePriceOutcome()>>(
			[this, request]()
			{
			return this->getResourcePrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Appstream_centerClient::GetResourceRenewPriceOutcome Appstream_centerClient::getResourceRenewPrice(const GetResourceRenewPriceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetResourceRenewPriceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetResourceRenewPriceOutcome(GetResourceRenewPriceResult(outcome.result()));
	else
		return GetResourceRenewPriceOutcome(outcome.error());
}

void Appstream_centerClient::getResourceRenewPriceAsync(const GetResourceRenewPriceRequest& request, const GetResourceRenewPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getResourceRenewPrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Appstream_centerClient::GetResourceRenewPriceOutcomeCallable Appstream_centerClient::getResourceRenewPriceCallable(const GetResourceRenewPriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetResourceRenewPriceOutcome()>>(
			[this, request]()
			{
			return this->getResourceRenewPrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Appstream_centerClient::ListAppInstanceGroupOutcome Appstream_centerClient::listAppInstanceGroup(const ListAppInstanceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAppInstanceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAppInstanceGroupOutcome(ListAppInstanceGroupResult(outcome.result()));
	else
		return ListAppInstanceGroupOutcome(outcome.error());
}

void Appstream_centerClient::listAppInstanceGroupAsync(const ListAppInstanceGroupRequest& request, const ListAppInstanceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAppInstanceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Appstream_centerClient::ListAppInstanceGroupOutcomeCallable Appstream_centerClient::listAppInstanceGroupCallable(const ListAppInstanceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAppInstanceGroupOutcome()>>(
			[this, request]()
			{
			return this->listAppInstanceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Appstream_centerClient::ListAppInstancesOutcome Appstream_centerClient::listAppInstances(const ListAppInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAppInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAppInstancesOutcome(ListAppInstancesResult(outcome.result()));
	else
		return ListAppInstancesOutcome(outcome.error());
}

void Appstream_centerClient::listAppInstancesAsync(const ListAppInstancesRequest& request, const ListAppInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAppInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Appstream_centerClient::ListAppInstancesOutcomeCallable Appstream_centerClient::listAppInstancesCallable(const ListAppInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAppInstancesOutcome()>>(
			[this, request]()
			{
			return this->listAppInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Appstream_centerClient::ListNodeInstanceTypeOutcome Appstream_centerClient::listNodeInstanceType(const ListNodeInstanceTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNodeInstanceTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNodeInstanceTypeOutcome(ListNodeInstanceTypeResult(outcome.result()));
	else
		return ListNodeInstanceTypeOutcome(outcome.error());
}

void Appstream_centerClient::listNodeInstanceTypeAsync(const ListNodeInstanceTypeRequest& request, const ListNodeInstanceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodeInstanceType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Appstream_centerClient::ListNodeInstanceTypeOutcomeCallable Appstream_centerClient::listNodeInstanceTypeCallable(const ListNodeInstanceTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodeInstanceTypeOutcome()>>(
			[this, request]()
			{
			return this->listNodeInstanceType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Appstream_centerClient::ListOtaTaskOutcome Appstream_centerClient::listOtaTask(const ListOtaTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOtaTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOtaTaskOutcome(ListOtaTaskResult(outcome.result()));
	else
		return ListOtaTaskOutcome(outcome.error());
}

void Appstream_centerClient::listOtaTaskAsync(const ListOtaTaskRequest& request, const ListOtaTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOtaTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Appstream_centerClient::ListOtaTaskOutcomeCallable Appstream_centerClient::listOtaTaskCallable(const ListOtaTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOtaTaskOutcome()>>(
			[this, request]()
			{
			return this->listOtaTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Appstream_centerClient::ListRegionsOutcome Appstream_centerClient::listRegions(const ListRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRegionsOutcome(ListRegionsResult(outcome.result()));
	else
		return ListRegionsOutcome(outcome.error());
}

void Appstream_centerClient::listRegionsAsync(const ListRegionsRequest& request, const ListRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Appstream_centerClient::ListRegionsOutcomeCallable Appstream_centerClient::listRegionsCallable(const ListRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRegionsOutcome()>>(
			[this, request]()
			{
			return this->listRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Appstream_centerClient::ListTenantConfigOutcome Appstream_centerClient::listTenantConfig(const ListTenantConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTenantConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTenantConfigOutcome(ListTenantConfigResult(outcome.result()));
	else
		return ListTenantConfigOutcome(outcome.error());
}

void Appstream_centerClient::listTenantConfigAsync(const ListTenantConfigRequest& request, const ListTenantConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTenantConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Appstream_centerClient::ListTenantConfigOutcomeCallable Appstream_centerClient::listTenantConfigCallable(const ListTenantConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTenantConfigOutcome()>>(
			[this, request]()
			{
			return this->listTenantConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Appstream_centerClient::LogOffAllSessionsInAppInstanceGroupOutcome Appstream_centerClient::logOffAllSessionsInAppInstanceGroup(const LogOffAllSessionsInAppInstanceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LogOffAllSessionsInAppInstanceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LogOffAllSessionsInAppInstanceGroupOutcome(LogOffAllSessionsInAppInstanceGroupResult(outcome.result()));
	else
		return LogOffAllSessionsInAppInstanceGroupOutcome(outcome.error());
}

void Appstream_centerClient::logOffAllSessionsInAppInstanceGroupAsync(const LogOffAllSessionsInAppInstanceGroupRequest& request, const LogOffAllSessionsInAppInstanceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, logOffAllSessionsInAppInstanceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Appstream_centerClient::LogOffAllSessionsInAppInstanceGroupOutcomeCallable Appstream_centerClient::logOffAllSessionsInAppInstanceGroupCallable(const LogOffAllSessionsInAppInstanceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LogOffAllSessionsInAppInstanceGroupOutcome()>>(
			[this, request]()
			{
			return this->logOffAllSessionsInAppInstanceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Appstream_centerClient::ModifyAppInstanceGroupAttributeOutcome Appstream_centerClient::modifyAppInstanceGroupAttribute(const ModifyAppInstanceGroupAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAppInstanceGroupAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAppInstanceGroupAttributeOutcome(ModifyAppInstanceGroupAttributeResult(outcome.result()));
	else
		return ModifyAppInstanceGroupAttributeOutcome(outcome.error());
}

void Appstream_centerClient::modifyAppInstanceGroupAttributeAsync(const ModifyAppInstanceGroupAttributeRequest& request, const ModifyAppInstanceGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAppInstanceGroupAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Appstream_centerClient::ModifyAppInstanceGroupAttributeOutcomeCallable Appstream_centerClient::modifyAppInstanceGroupAttributeCallable(const ModifyAppInstanceGroupAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAppInstanceGroupAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyAppInstanceGroupAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Appstream_centerClient::ModifyNodePoolAttributeOutcome Appstream_centerClient::modifyNodePoolAttribute(const ModifyNodePoolAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyNodePoolAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyNodePoolAttributeOutcome(ModifyNodePoolAttributeResult(outcome.result()));
	else
		return ModifyNodePoolAttributeOutcome(outcome.error());
}

void Appstream_centerClient::modifyNodePoolAttributeAsync(const ModifyNodePoolAttributeRequest& request, const ModifyNodePoolAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyNodePoolAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Appstream_centerClient::ModifyNodePoolAttributeOutcomeCallable Appstream_centerClient::modifyNodePoolAttributeCallable(const ModifyNodePoolAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyNodePoolAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyNodePoolAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Appstream_centerClient::ModifyTenantConfigOutcome Appstream_centerClient::modifyTenantConfig(const ModifyTenantConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTenantConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTenantConfigOutcome(ModifyTenantConfigResult(outcome.result()));
	else
		return ModifyTenantConfigOutcome(outcome.error());
}

void Appstream_centerClient::modifyTenantConfigAsync(const ModifyTenantConfigRequest& request, const ModifyTenantConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTenantConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Appstream_centerClient::ModifyTenantConfigOutcomeCallable Appstream_centerClient::modifyTenantConfigCallable(const ModifyTenantConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTenantConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyTenantConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Appstream_centerClient::PageListAppInstanceGroupUserOutcome Appstream_centerClient::pageListAppInstanceGroupUser(const PageListAppInstanceGroupUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PageListAppInstanceGroupUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PageListAppInstanceGroupUserOutcome(PageListAppInstanceGroupUserResult(outcome.result()));
	else
		return PageListAppInstanceGroupUserOutcome(outcome.error());
}

void Appstream_centerClient::pageListAppInstanceGroupUserAsync(const PageListAppInstanceGroupUserRequest& request, const PageListAppInstanceGroupUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pageListAppInstanceGroupUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Appstream_centerClient::PageListAppInstanceGroupUserOutcomeCallable Appstream_centerClient::pageListAppInstanceGroupUserCallable(const PageListAppInstanceGroupUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PageListAppInstanceGroupUserOutcome()>>(
			[this, request]()
			{
			return this->pageListAppInstanceGroupUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Appstream_centerClient::RenewAppInstanceGroupOutcome Appstream_centerClient::renewAppInstanceGroup(const RenewAppInstanceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenewAppInstanceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewAppInstanceGroupOutcome(RenewAppInstanceGroupResult(outcome.result()));
	else
		return RenewAppInstanceGroupOutcome(outcome.error());
}

void Appstream_centerClient::renewAppInstanceGroupAsync(const RenewAppInstanceGroupRequest& request, const RenewAppInstanceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewAppInstanceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Appstream_centerClient::RenewAppInstanceGroupOutcomeCallable Appstream_centerClient::renewAppInstanceGroupCallable(const RenewAppInstanceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewAppInstanceGroupOutcome()>>(
			[this, request]()
			{
			return this->renewAppInstanceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Appstream_centerClient::UnbindOutcome Appstream_centerClient::unbind(const UnbindRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindOutcome(UnbindResult(outcome.result()));
	else
		return UnbindOutcome(outcome.error());
}

void Appstream_centerClient::unbindAsync(const UnbindRequest& request, const UnbindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbind(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Appstream_centerClient::UnbindOutcomeCallable Appstream_centerClient::unbindCallable(const UnbindRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindOutcome()>>(
			[this, request]()
			{
			return this->unbind(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Appstream_centerClient::UpdateAppInstanceGroupImageOutcome Appstream_centerClient::updateAppInstanceGroupImage(const UpdateAppInstanceGroupImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAppInstanceGroupImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAppInstanceGroupImageOutcome(UpdateAppInstanceGroupImageResult(outcome.result()));
	else
		return UpdateAppInstanceGroupImageOutcome(outcome.error());
}

void Appstream_centerClient::updateAppInstanceGroupImageAsync(const UpdateAppInstanceGroupImageRequest& request, const UpdateAppInstanceGroupImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAppInstanceGroupImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Appstream_centerClient::UpdateAppInstanceGroupImageOutcomeCallable Appstream_centerClient::updateAppInstanceGroupImageCallable(const UpdateAppInstanceGroupImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAppInstanceGroupImageOutcome()>>(
			[this, request]()
			{
			return this->updateAppInstanceGroupImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

