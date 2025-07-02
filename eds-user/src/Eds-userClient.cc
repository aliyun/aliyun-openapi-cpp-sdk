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

#include <alibabacloud/eds-user/Eds_userClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Eds_user;
using namespace AlibabaCloud::Eds_user::Model;

namespace
{
	const std::string SERVICE_NAME = "eds-user";
}

Eds_userClient::Eds_userClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "eds-user");
}

Eds_userClient::Eds_userClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "eds-user");
}

Eds_userClient::Eds_userClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "eds-user");
}

Eds_userClient::~Eds_userClient()
{}

Eds_userClient::BatchSetDesktopManagerOutcome Eds_userClient::batchSetDesktopManager(const BatchSetDesktopManagerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchSetDesktopManagerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchSetDesktopManagerOutcome(BatchSetDesktopManagerResult(outcome.result()));
	else
		return BatchSetDesktopManagerOutcome(outcome.error());
}

void Eds_userClient::batchSetDesktopManagerAsync(const BatchSetDesktopManagerRequest& request, const BatchSetDesktopManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchSetDesktopManager(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::BatchSetDesktopManagerOutcomeCallable Eds_userClient::batchSetDesktopManagerCallable(const BatchSetDesktopManagerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchSetDesktopManagerOutcome()>>(
			[this, request]()
			{
			return this->batchSetDesktopManager(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::ChangeUserPasswordOutcome Eds_userClient::changeUserPassword(const ChangeUserPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeUserPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeUserPasswordOutcome(ChangeUserPasswordResult(outcome.result()));
	else
		return ChangeUserPasswordOutcome(outcome.error());
}

void Eds_userClient::changeUserPasswordAsync(const ChangeUserPasswordRequest& request, const ChangeUserPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeUserPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::ChangeUserPasswordOutcomeCallable Eds_userClient::changeUserPasswordCallable(const ChangeUserPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeUserPasswordOutcome()>>(
			[this, request]()
			{
			return this->changeUserPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::CheckUsedPropertyOutcome Eds_userClient::checkUsedProperty(const CheckUsedPropertyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckUsedPropertyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckUsedPropertyOutcome(CheckUsedPropertyResult(outcome.result()));
	else
		return CheckUsedPropertyOutcome(outcome.error());
}

void Eds_userClient::checkUsedPropertyAsync(const CheckUsedPropertyRequest& request, const CheckUsedPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkUsedProperty(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::CheckUsedPropertyOutcomeCallable Eds_userClient::checkUsedPropertyCallable(const CheckUsedPropertyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckUsedPropertyOutcome()>>(
			[this, request]()
			{
			return this->checkUsedProperty(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::CheckUsedPropertyValueOutcome Eds_userClient::checkUsedPropertyValue(const CheckUsedPropertyValueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckUsedPropertyValueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckUsedPropertyValueOutcome(CheckUsedPropertyValueResult(outcome.result()));
	else
		return CheckUsedPropertyValueOutcome(outcome.error());
}

void Eds_userClient::checkUsedPropertyValueAsync(const CheckUsedPropertyValueRequest& request, const CheckUsedPropertyValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkUsedPropertyValue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::CheckUsedPropertyValueOutcomeCallable Eds_userClient::checkUsedPropertyValueCallable(const CheckUsedPropertyValueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckUsedPropertyValueOutcome()>>(
			[this, request]()
			{
			return this->checkUsedPropertyValue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::CreateGroupOutcome Eds_userClient::createGroup(const CreateGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGroupOutcome(CreateGroupResult(outcome.result()));
	else
		return CreateGroupOutcome(outcome.error());
}

void Eds_userClient::createGroupAsync(const CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::CreateGroupOutcomeCallable Eds_userClient::createGroupCallable(const CreateGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGroupOutcome()>>(
			[this, request]()
			{
			return this->createGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::CreateOrgOutcome Eds_userClient::createOrg(const CreateOrgRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrgOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrgOutcome(CreateOrgResult(outcome.result()));
	else
		return CreateOrgOutcome(outcome.error());
}

void Eds_userClient::createOrgAsync(const CreateOrgRequest& request, const CreateOrgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrg(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::CreateOrgOutcomeCallable Eds_userClient::createOrgCallable(const CreateOrgRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrgOutcome()>>(
			[this, request]()
			{
			return this->createOrg(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::CreatePropertyOutcome Eds_userClient::createProperty(const CreatePropertyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePropertyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePropertyOutcome(CreatePropertyResult(outcome.result()));
	else
		return CreatePropertyOutcome(outcome.error());
}

void Eds_userClient::createPropertyAsync(const CreatePropertyRequest& request, const CreatePropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProperty(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::CreatePropertyOutcomeCallable Eds_userClient::createPropertyCallable(const CreatePropertyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePropertyOutcome()>>(
			[this, request]()
			{
			return this->createProperty(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::CreateResourceGroupOutcome Eds_userClient::createResourceGroup(const CreateResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateResourceGroupOutcome(CreateResourceGroupResult(outcome.result()));
	else
		return CreateResourceGroupOutcome(outcome.error());
}

void Eds_userClient::createResourceGroupAsync(const CreateResourceGroupRequest& request, const CreateResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::CreateResourceGroupOutcomeCallable Eds_userClient::createResourceGroupCallable(const CreateResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->createResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::CreateUsersOutcome Eds_userClient::createUsers(const CreateUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUsersOutcome(CreateUsersResult(outcome.result()));
	else
		return CreateUsersOutcome(outcome.error());
}

void Eds_userClient::createUsersAsync(const CreateUsersRequest& request, const CreateUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::CreateUsersOutcomeCallable Eds_userClient::createUsersCallable(const CreateUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUsersOutcome()>>(
			[this, request]()
			{
			return this->createUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::DeleteResourceGroupOutcome Eds_userClient::deleteResourceGroup(const DeleteResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteResourceGroupOutcome(DeleteResourceGroupResult(outcome.result()));
	else
		return DeleteResourceGroupOutcome(outcome.error());
}

void Eds_userClient::deleteResourceGroupAsync(const DeleteResourceGroupRequest& request, const DeleteResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::DeleteResourceGroupOutcomeCallable Eds_userClient::deleteResourceGroupCallable(const DeleteResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::DeleteUserPropertyValueOutcome Eds_userClient::deleteUserPropertyValue(const DeleteUserPropertyValueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserPropertyValueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserPropertyValueOutcome(DeleteUserPropertyValueResult(outcome.result()));
	else
		return DeleteUserPropertyValueOutcome(outcome.error());
}

void Eds_userClient::deleteUserPropertyValueAsync(const DeleteUserPropertyValueRequest& request, const DeleteUserPropertyValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUserPropertyValue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::DeleteUserPropertyValueOutcomeCallable Eds_userClient::deleteUserPropertyValueCallable(const DeleteUserPropertyValueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserPropertyValueOutcome()>>(
			[this, request]()
			{
			return this->deleteUserPropertyValue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::DescribeGroupUserOutcome Eds_userClient::describeGroupUser(const DescribeGroupUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGroupUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGroupUserOutcome(DescribeGroupUserResult(outcome.result()));
	else
		return DescribeGroupUserOutcome(outcome.error());
}

void Eds_userClient::describeGroupUserAsync(const DescribeGroupUserRequest& request, const DescribeGroupUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGroupUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::DescribeGroupUserOutcomeCallable Eds_userClient::describeGroupUserCallable(const DescribeGroupUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGroupUserOutcome()>>(
			[this, request]()
			{
			return this->describeGroupUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::DescribeGroupsOutcome Eds_userClient::describeGroups(const DescribeGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGroupsOutcome(DescribeGroupsResult(outcome.result()));
	else
		return DescribeGroupsOutcome(outcome.error());
}

void Eds_userClient::describeGroupsAsync(const DescribeGroupsRequest& request, const DescribeGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::DescribeGroupsOutcomeCallable Eds_userClient::describeGroupsCallable(const DescribeGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::DescribeMfaDevicesOutcome Eds_userClient::describeMfaDevices(const DescribeMfaDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMfaDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMfaDevicesOutcome(DescribeMfaDevicesResult(outcome.result()));
	else
		return DescribeMfaDevicesOutcome(outcome.error());
}

void Eds_userClient::describeMfaDevicesAsync(const DescribeMfaDevicesRequest& request, const DescribeMfaDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMfaDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::DescribeMfaDevicesOutcomeCallable Eds_userClient::describeMfaDevicesCallable(const DescribeMfaDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMfaDevicesOutcome()>>(
			[this, request]()
			{
			return this->describeMfaDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::DescribeOrgByLayerOutcome Eds_userClient::describeOrgByLayer(const DescribeOrgByLayerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOrgByLayerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOrgByLayerOutcome(DescribeOrgByLayerResult(outcome.result()));
	else
		return DescribeOrgByLayerOutcome(outcome.error());
}

void Eds_userClient::describeOrgByLayerAsync(const DescribeOrgByLayerRequest& request, const DescribeOrgByLayerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOrgByLayer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::DescribeOrgByLayerOutcomeCallable Eds_userClient::describeOrgByLayerCallable(const DescribeOrgByLayerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOrgByLayerOutcome()>>(
			[this, request]()
			{
			return this->describeOrgByLayer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::DescribeOrgsOutcome Eds_userClient::describeOrgs(const DescribeOrgsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOrgsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOrgsOutcome(DescribeOrgsResult(outcome.result()));
	else
		return DescribeOrgsOutcome(outcome.error());
}

void Eds_userClient::describeOrgsAsync(const DescribeOrgsRequest& request, const DescribeOrgsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOrgs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::DescribeOrgsOutcomeCallable Eds_userClient::describeOrgsCallable(const DescribeOrgsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOrgsOutcome()>>(
			[this, request]()
			{
			return this->describeOrgs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::DescribeResourceGroupsOutcome Eds_userClient::describeResourceGroups(const DescribeResourceGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeResourceGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeResourceGroupsOutcome(DescribeResourceGroupsResult(outcome.result()));
	else
		return DescribeResourceGroupsOutcome(outcome.error());
}

void Eds_userClient::describeResourceGroupsAsync(const DescribeResourceGroupsRequest& request, const DescribeResourceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeResourceGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::DescribeResourceGroupsOutcomeCallable Eds_userClient::describeResourceGroupsCallable(const DescribeResourceGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeResourceGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeResourceGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::DescribeUsersOutcome Eds_userClient::describeUsers(const DescribeUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUsersOutcome(DescribeUsersResult(outcome.result()));
	else
		return DescribeUsersOutcome(outcome.error());
}

void Eds_userClient::describeUsersAsync(const DescribeUsersRequest& request, const DescribeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::DescribeUsersOutcomeCallable Eds_userClient::describeUsersCallable(const DescribeUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUsersOutcome()>>(
			[this, request]()
			{
			return this->describeUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::FilterUsersOutcome Eds_userClient::filterUsers(const FilterUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FilterUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FilterUsersOutcome(FilterUsersResult(outcome.result()));
	else
		return FilterUsersOutcome(outcome.error());
}

void Eds_userClient::filterUsersAsync(const FilterUsersRequest& request, const FilterUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, filterUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::FilterUsersOutcomeCallable Eds_userClient::filterUsersCallable(const FilterUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FilterUsersOutcome()>>(
			[this, request]()
			{
			return this->filterUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::GetManagerInfoByAuthCodeOutcome Eds_userClient::getManagerInfoByAuthCode(const GetManagerInfoByAuthCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetManagerInfoByAuthCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetManagerInfoByAuthCodeOutcome(GetManagerInfoByAuthCodeResult(outcome.result()));
	else
		return GetManagerInfoByAuthCodeOutcome(outcome.error());
}

void Eds_userClient::getManagerInfoByAuthCodeAsync(const GetManagerInfoByAuthCodeRequest& request, const GetManagerInfoByAuthCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getManagerInfoByAuthCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::GetManagerInfoByAuthCodeOutcomeCallable Eds_userClient::getManagerInfoByAuthCodeCallable(const GetManagerInfoByAuthCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetManagerInfoByAuthCodeOutcome()>>(
			[this, request]()
			{
			return this->getManagerInfoByAuthCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::InitTenantAliasOutcome Eds_userClient::initTenantAlias(const InitTenantAliasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InitTenantAliasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InitTenantAliasOutcome(InitTenantAliasResult(outcome.result()));
	else
		return InitTenantAliasOutcome(outcome.error());
}

void Eds_userClient::initTenantAliasAsync(const InitTenantAliasRequest& request, const InitTenantAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, initTenantAlias(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::InitTenantAliasOutcomeCallable Eds_userClient::initTenantAliasCallable(const InitTenantAliasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InitTenantAliasOutcome()>>(
			[this, request]()
			{
			return this->initTenantAlias(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::ListPropertyOutcome Eds_userClient::listProperty(const ListPropertyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPropertyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPropertyOutcome(ListPropertyResult(outcome.result()));
	else
		return ListPropertyOutcome(outcome.error());
}

void Eds_userClient::listPropertyAsync(const ListPropertyRequest& request, const ListPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProperty(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::ListPropertyOutcomeCallable Eds_userClient::listPropertyCallable(const ListPropertyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPropertyOutcome()>>(
			[this, request]()
			{
			return this->listProperty(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::ListPropertyValueOutcome Eds_userClient::listPropertyValue(const ListPropertyValueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPropertyValueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPropertyValueOutcome(ListPropertyValueResult(outcome.result()));
	else
		return ListPropertyValueOutcome(outcome.error());
}

void Eds_userClient::listPropertyValueAsync(const ListPropertyValueRequest& request, const ListPropertyValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPropertyValue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::ListPropertyValueOutcomeCallable Eds_userClient::listPropertyValueCallable(const ListPropertyValueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPropertyValueOutcome()>>(
			[this, request]()
			{
			return this->listPropertyValue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::LockMfaDeviceOutcome Eds_userClient::lockMfaDevice(const LockMfaDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LockMfaDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LockMfaDeviceOutcome(LockMfaDeviceResult(outcome.result()));
	else
		return LockMfaDeviceOutcome(outcome.error());
}

void Eds_userClient::lockMfaDeviceAsync(const LockMfaDeviceRequest& request, const LockMfaDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, lockMfaDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::LockMfaDeviceOutcomeCallable Eds_userClient::lockMfaDeviceCallable(const LockMfaDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LockMfaDeviceOutcome()>>(
			[this, request]()
			{
			return this->lockMfaDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::LockUsersOutcome Eds_userClient::lockUsers(const LockUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LockUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LockUsersOutcome(LockUsersResult(outcome.result()));
	else
		return LockUsersOutcome(outcome.error());
}

void Eds_userClient::lockUsersAsync(const LockUsersRequest& request, const LockUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, lockUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::LockUsersOutcomeCallable Eds_userClient::lockUsersCallable(const LockUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LockUsersOutcome()>>(
			[this, request]()
			{
			return this->lockUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::ModifyGroupOutcome Eds_userClient::modifyGroup(const ModifyGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyGroupOutcome(ModifyGroupResult(outcome.result()));
	else
		return ModifyGroupOutcome(outcome.error());
}

void Eds_userClient::modifyGroupAsync(const ModifyGroupRequest& request, const ModifyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::ModifyGroupOutcomeCallable Eds_userClient::modifyGroupCallable(const ModifyGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::ModifyOrgOutcome Eds_userClient::modifyOrg(const ModifyOrgRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyOrgOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyOrgOutcome(ModifyOrgResult(outcome.result()));
	else
		return ModifyOrgOutcome(outcome.error());
}

void Eds_userClient::modifyOrgAsync(const ModifyOrgRequest& request, const ModifyOrgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyOrg(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::ModifyOrgOutcomeCallable Eds_userClient::modifyOrgCallable(const ModifyOrgRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyOrgOutcome()>>(
			[this, request]()
			{
			return this->modifyOrg(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::ModifyUserOutcome Eds_userClient::modifyUser(const ModifyUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyUserOutcome(ModifyUserResult(outcome.result()));
	else
		return ModifyUserOutcome(outcome.error());
}

void Eds_userClient::modifyUserAsync(const ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::ModifyUserOutcomeCallable Eds_userClient::modifyUserCallable(const ModifyUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyUserOutcome()>>(
			[this, request]()
			{
			return this->modifyUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::MoveOrgOutcome Eds_userClient::moveOrg(const MoveOrgRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MoveOrgOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MoveOrgOutcome(MoveOrgResult(outcome.result()));
	else
		return MoveOrgOutcome(outcome.error());
}

void Eds_userClient::moveOrgAsync(const MoveOrgRequest& request, const MoveOrgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moveOrg(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::MoveOrgOutcomeCallable Eds_userClient::moveOrgCallable(const MoveOrgRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoveOrgOutcome()>>(
			[this, request]()
			{
			return this->moveOrg(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::MoveUserOrgOutcome Eds_userClient::moveUserOrg(const MoveUserOrgRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MoveUserOrgOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MoveUserOrgOutcome(MoveUserOrgResult(outcome.result()));
	else
		return MoveUserOrgOutcome(outcome.error());
}

void Eds_userClient::moveUserOrgAsync(const MoveUserOrgRequest& request, const MoveUserOrgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moveUserOrg(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::MoveUserOrgOutcomeCallable Eds_userClient::moveUserOrgCallable(const MoveUserOrgRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoveUserOrgOutcome()>>(
			[this, request]()
			{
			return this->moveUserOrg(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::QuerySyncStatusByAliUidOutcome Eds_userClient::querySyncStatusByAliUid(const QuerySyncStatusByAliUidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySyncStatusByAliUidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySyncStatusByAliUidOutcome(QuerySyncStatusByAliUidResult(outcome.result()));
	else
		return QuerySyncStatusByAliUidOutcome(outcome.error());
}

void Eds_userClient::querySyncStatusByAliUidAsync(const QuerySyncStatusByAliUidRequest& request, const QuerySyncStatusByAliUidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySyncStatusByAliUid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::QuerySyncStatusByAliUidOutcomeCallable Eds_userClient::querySyncStatusByAliUidCallable(const QuerySyncStatusByAliUidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySyncStatusByAliUidOutcome()>>(
			[this, request]()
			{
			return this->querySyncStatusByAliUid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::RemoveGroupOutcome Eds_userClient::removeGroup(const RemoveGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveGroupOutcome(RemoveGroupResult(outcome.result()));
	else
		return RemoveGroupOutcome(outcome.error());
}

void Eds_userClient::removeGroupAsync(const RemoveGroupRequest& request, const RemoveGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::RemoveGroupOutcomeCallable Eds_userClient::removeGroupCallable(const RemoveGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveGroupOutcome()>>(
			[this, request]()
			{
			return this->removeGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::RemoveMfaDeviceOutcome Eds_userClient::removeMfaDevice(const RemoveMfaDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveMfaDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveMfaDeviceOutcome(RemoveMfaDeviceResult(outcome.result()));
	else
		return RemoveMfaDeviceOutcome(outcome.error());
}

void Eds_userClient::removeMfaDeviceAsync(const RemoveMfaDeviceRequest& request, const RemoveMfaDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeMfaDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::RemoveMfaDeviceOutcomeCallable Eds_userClient::removeMfaDeviceCallable(const RemoveMfaDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveMfaDeviceOutcome()>>(
			[this, request]()
			{
			return this->removeMfaDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::RemoveOrgOutcome Eds_userClient::removeOrg(const RemoveOrgRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveOrgOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveOrgOutcome(RemoveOrgResult(outcome.result()));
	else
		return RemoveOrgOutcome(outcome.error());
}

void Eds_userClient::removeOrgAsync(const RemoveOrgRequest& request, const RemoveOrgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeOrg(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::RemoveOrgOutcomeCallable Eds_userClient::removeOrgCallable(const RemoveOrgRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveOrgOutcome()>>(
			[this, request]()
			{
			return this->removeOrg(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::RemovePropertyOutcome Eds_userClient::removeProperty(const RemovePropertyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemovePropertyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemovePropertyOutcome(RemovePropertyResult(outcome.result()));
	else
		return RemovePropertyOutcome(outcome.error());
}

void Eds_userClient::removePropertyAsync(const RemovePropertyRequest& request, const RemovePropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeProperty(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::RemovePropertyOutcomeCallable Eds_userClient::removePropertyCallable(const RemovePropertyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemovePropertyOutcome()>>(
			[this, request]()
			{
			return this->removeProperty(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::RemoveUsersOutcome Eds_userClient::removeUsers(const RemoveUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveUsersOutcome(RemoveUsersResult(outcome.result()));
	else
		return RemoveUsersOutcome(outcome.error());
}

void Eds_userClient::removeUsersAsync(const RemoveUsersRequest& request, const RemoveUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::RemoveUsersOutcomeCallable Eds_userClient::removeUsersCallable(const RemoveUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveUsersOutcome()>>(
			[this, request]()
			{
			return this->removeUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::ResetUserPasswordOutcome Eds_userClient::resetUserPassword(const ResetUserPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetUserPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetUserPasswordOutcome(ResetUserPasswordResult(outcome.result()));
	else
		return ResetUserPasswordOutcome(outcome.error());
}

void Eds_userClient::resetUserPasswordAsync(const ResetUserPasswordRequest& request, const ResetUserPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetUserPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::ResetUserPasswordOutcomeCallable Eds_userClient::resetUserPasswordCallable(const ResetUserPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetUserPasswordOutcome()>>(
			[this, request]()
			{
			return this->resetUserPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::SetUserPropertyValueOutcome Eds_userClient::setUserPropertyValue(const SetUserPropertyValueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetUserPropertyValueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetUserPropertyValueOutcome(SetUserPropertyValueResult(outcome.result()));
	else
		return SetUserPropertyValueOutcome(outcome.error());
}

void Eds_userClient::setUserPropertyValueAsync(const SetUserPropertyValueRequest& request, const SetUserPropertyValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setUserPropertyValue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::SetUserPropertyValueOutcomeCallable Eds_userClient::setUserPropertyValueCallable(const SetUserPropertyValueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetUserPropertyValueOutcome()>>(
			[this, request]()
			{
			return this->setUserPropertyValue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::SyncAllEduInfoOutcome Eds_userClient::syncAllEduInfo(const SyncAllEduInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SyncAllEduInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SyncAllEduInfoOutcome(SyncAllEduInfoResult(outcome.result()));
	else
		return SyncAllEduInfoOutcome(outcome.error());
}

void Eds_userClient::syncAllEduInfoAsync(const SyncAllEduInfoRequest& request, const SyncAllEduInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, syncAllEduInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::SyncAllEduInfoOutcomeCallable Eds_userClient::syncAllEduInfoCallable(const SyncAllEduInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SyncAllEduInfoOutcome()>>(
			[this, request]()
			{
			return this->syncAllEduInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::UnlockMfaDeviceOutcome Eds_userClient::unlockMfaDevice(const UnlockMfaDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnlockMfaDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnlockMfaDeviceOutcome(UnlockMfaDeviceResult(outcome.result()));
	else
		return UnlockMfaDeviceOutcome(outcome.error());
}

void Eds_userClient::unlockMfaDeviceAsync(const UnlockMfaDeviceRequest& request, const UnlockMfaDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unlockMfaDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::UnlockMfaDeviceOutcomeCallable Eds_userClient::unlockMfaDeviceCallable(const UnlockMfaDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnlockMfaDeviceOutcome()>>(
			[this, request]()
			{
			return this->unlockMfaDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::UnlockUsersOutcome Eds_userClient::unlockUsers(const UnlockUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnlockUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnlockUsersOutcome(UnlockUsersResult(outcome.result()));
	else
		return UnlockUsersOutcome(outcome.error());
}

void Eds_userClient::unlockUsersAsync(const UnlockUsersRequest& request, const UnlockUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unlockUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::UnlockUsersOutcomeCallable Eds_userClient::unlockUsersCallable(const UnlockUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnlockUsersOutcome()>>(
			[this, request]()
			{
			return this->unlockUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::UpdatePropertyOutcome Eds_userClient::updateProperty(const UpdatePropertyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePropertyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePropertyOutcome(UpdatePropertyResult(outcome.result()));
	else
		return UpdatePropertyOutcome(outcome.error());
}

void Eds_userClient::updatePropertyAsync(const UpdatePropertyRequest& request, const UpdatePropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProperty(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::UpdatePropertyOutcomeCallable Eds_userClient::updatePropertyCallable(const UpdatePropertyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePropertyOutcome()>>(
			[this, request]()
			{
			return this->updateProperty(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::UserBatchJoinGroupOutcome Eds_userClient::userBatchJoinGroup(const UserBatchJoinGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UserBatchJoinGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UserBatchJoinGroupOutcome(UserBatchJoinGroupResult(outcome.result()));
	else
		return UserBatchJoinGroupOutcome(outcome.error());
}

void Eds_userClient::userBatchJoinGroupAsync(const UserBatchJoinGroupRequest& request, const UserBatchJoinGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, userBatchJoinGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::UserBatchJoinGroupOutcomeCallable Eds_userClient::userBatchJoinGroupCallable(const UserBatchJoinGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UserBatchJoinGroupOutcome()>>(
			[this, request]()
			{
			return this->userBatchJoinGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Eds_userClient::UserBatchQuitGroupOutcome Eds_userClient::userBatchQuitGroup(const UserBatchQuitGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UserBatchQuitGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UserBatchQuitGroupOutcome(UserBatchQuitGroupResult(outcome.result()));
	else
		return UserBatchQuitGroupOutcome(outcome.error());
}

void Eds_userClient::userBatchQuitGroupAsync(const UserBatchQuitGroupRequest& request, const UserBatchQuitGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, userBatchQuitGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Eds_userClient::UserBatchQuitGroupOutcomeCallable Eds_userClient::userBatchQuitGroupCallable(const UserBatchQuitGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UserBatchQuitGroupOutcome()>>(
			[this, request]()
			{
			return this->userBatchQuitGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

