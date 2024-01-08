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

#include <alibabacloud/resourcesharing/ResourceSharingClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::ResourceSharing;
using namespace AlibabaCloud::ResourceSharing::Model;

namespace
{
	const std::string SERVICE_NAME = "ResourceSharing";
}

ResourceSharingClient::ResourceSharingClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ressharing");
}

ResourceSharingClient::ResourceSharingClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ressharing");
}

ResourceSharingClient::ResourceSharingClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ressharing");
}

ResourceSharingClient::~ResourceSharingClient()
{}

ResourceSharingClient::AcceptResourceShareInvitationOutcome ResourceSharingClient::acceptResourceShareInvitation(const AcceptResourceShareInvitationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AcceptResourceShareInvitationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AcceptResourceShareInvitationOutcome(AcceptResourceShareInvitationResult(outcome.result()));
	else
		return AcceptResourceShareInvitationOutcome(outcome.error());
}

void ResourceSharingClient::acceptResourceShareInvitationAsync(const AcceptResourceShareInvitationRequest& request, const AcceptResourceShareInvitationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, acceptResourceShareInvitation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceSharingClient::AcceptResourceShareInvitationOutcomeCallable ResourceSharingClient::acceptResourceShareInvitationCallable(const AcceptResourceShareInvitationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AcceptResourceShareInvitationOutcome()>>(
			[this, request]()
			{
			return this->acceptResourceShareInvitation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceSharingClient::AssociateResourceShareOutcome ResourceSharingClient::associateResourceShare(const AssociateResourceShareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateResourceShareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateResourceShareOutcome(AssociateResourceShareResult(outcome.result()));
	else
		return AssociateResourceShareOutcome(outcome.error());
}

void ResourceSharingClient::associateResourceShareAsync(const AssociateResourceShareRequest& request, const AssociateResourceShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateResourceShare(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceSharingClient::AssociateResourceShareOutcomeCallable ResourceSharingClient::associateResourceShareCallable(const AssociateResourceShareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateResourceShareOutcome()>>(
			[this, request]()
			{
			return this->associateResourceShare(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceSharingClient::AssociateResourceSharePermissionOutcome ResourceSharingClient::associateResourceSharePermission(const AssociateResourceSharePermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateResourceSharePermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateResourceSharePermissionOutcome(AssociateResourceSharePermissionResult(outcome.result()));
	else
		return AssociateResourceSharePermissionOutcome(outcome.error());
}

void ResourceSharingClient::associateResourceSharePermissionAsync(const AssociateResourceSharePermissionRequest& request, const AssociateResourceSharePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateResourceSharePermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceSharingClient::AssociateResourceSharePermissionOutcomeCallable ResourceSharingClient::associateResourceSharePermissionCallable(const AssociateResourceSharePermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateResourceSharePermissionOutcome()>>(
			[this, request]()
			{
			return this->associateResourceSharePermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceSharingClient::ChangeResourceGroupOutcome ResourceSharingClient::changeResourceGroup(const ChangeResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeResourceGroupOutcome(ChangeResourceGroupResult(outcome.result()));
	else
		return ChangeResourceGroupOutcome(outcome.error());
}

void ResourceSharingClient::changeResourceGroupAsync(const ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceSharingClient::ChangeResourceGroupOutcomeCallable ResourceSharingClient::changeResourceGroupCallable(const ChangeResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->changeResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceSharingClient::CheckSharingWithResourceDirectoryStatusOutcome ResourceSharingClient::checkSharingWithResourceDirectoryStatus(const CheckSharingWithResourceDirectoryStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckSharingWithResourceDirectoryStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckSharingWithResourceDirectoryStatusOutcome(CheckSharingWithResourceDirectoryStatusResult(outcome.result()));
	else
		return CheckSharingWithResourceDirectoryStatusOutcome(outcome.error());
}

void ResourceSharingClient::checkSharingWithResourceDirectoryStatusAsync(const CheckSharingWithResourceDirectoryStatusRequest& request, const CheckSharingWithResourceDirectoryStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkSharingWithResourceDirectoryStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceSharingClient::CheckSharingWithResourceDirectoryStatusOutcomeCallable ResourceSharingClient::checkSharingWithResourceDirectoryStatusCallable(const CheckSharingWithResourceDirectoryStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckSharingWithResourceDirectoryStatusOutcome()>>(
			[this, request]()
			{
			return this->checkSharingWithResourceDirectoryStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceSharingClient::CreateResourceShareOutcome ResourceSharingClient::createResourceShare(const CreateResourceShareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateResourceShareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateResourceShareOutcome(CreateResourceShareResult(outcome.result()));
	else
		return CreateResourceShareOutcome(outcome.error());
}

void ResourceSharingClient::createResourceShareAsync(const CreateResourceShareRequest& request, const CreateResourceShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createResourceShare(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceSharingClient::CreateResourceShareOutcomeCallable ResourceSharingClient::createResourceShareCallable(const CreateResourceShareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateResourceShareOutcome()>>(
			[this, request]()
			{
			return this->createResourceShare(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceSharingClient::DeleteResourceShareOutcome ResourceSharingClient::deleteResourceShare(const DeleteResourceShareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteResourceShareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteResourceShareOutcome(DeleteResourceShareResult(outcome.result()));
	else
		return DeleteResourceShareOutcome(outcome.error());
}

void ResourceSharingClient::deleteResourceShareAsync(const DeleteResourceShareRequest& request, const DeleteResourceShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteResourceShare(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceSharingClient::DeleteResourceShareOutcomeCallable ResourceSharingClient::deleteResourceShareCallable(const DeleteResourceShareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteResourceShareOutcome()>>(
			[this, request]()
			{
			return this->deleteResourceShare(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceSharingClient::DescribeRegionsOutcome ResourceSharingClient::describeRegions(const DescribeRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRegionsOutcome(DescribeRegionsResult(outcome.result()));
	else
		return DescribeRegionsOutcome(outcome.error());
}

void ResourceSharingClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceSharingClient::DescribeRegionsOutcomeCallable ResourceSharingClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceSharingClient::DisassociateResourceShareOutcome ResourceSharingClient::disassociateResourceShare(const DisassociateResourceShareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisassociateResourceShareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisassociateResourceShareOutcome(DisassociateResourceShareResult(outcome.result()));
	else
		return DisassociateResourceShareOutcome(outcome.error());
}

void ResourceSharingClient::disassociateResourceShareAsync(const DisassociateResourceShareRequest& request, const DisassociateResourceShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disassociateResourceShare(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceSharingClient::DisassociateResourceShareOutcomeCallable ResourceSharingClient::disassociateResourceShareCallable(const DisassociateResourceShareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisassociateResourceShareOutcome()>>(
			[this, request]()
			{
			return this->disassociateResourceShare(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceSharingClient::DisassociateResourceSharePermissionOutcome ResourceSharingClient::disassociateResourceSharePermission(const DisassociateResourceSharePermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisassociateResourceSharePermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisassociateResourceSharePermissionOutcome(DisassociateResourceSharePermissionResult(outcome.result()));
	else
		return DisassociateResourceSharePermissionOutcome(outcome.error());
}

void ResourceSharingClient::disassociateResourceSharePermissionAsync(const DisassociateResourceSharePermissionRequest& request, const DisassociateResourceSharePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disassociateResourceSharePermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceSharingClient::DisassociateResourceSharePermissionOutcomeCallable ResourceSharingClient::disassociateResourceSharePermissionCallable(const DisassociateResourceSharePermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisassociateResourceSharePermissionOutcome()>>(
			[this, request]()
			{
			return this->disassociateResourceSharePermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceSharingClient::EnableSharingWithResourceDirectoryOutcome ResourceSharingClient::enableSharingWithResourceDirectory(const EnableSharingWithResourceDirectoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableSharingWithResourceDirectoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableSharingWithResourceDirectoryOutcome(EnableSharingWithResourceDirectoryResult(outcome.result()));
	else
		return EnableSharingWithResourceDirectoryOutcome(outcome.error());
}

void ResourceSharingClient::enableSharingWithResourceDirectoryAsync(const EnableSharingWithResourceDirectoryRequest& request, const EnableSharingWithResourceDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableSharingWithResourceDirectory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceSharingClient::EnableSharingWithResourceDirectoryOutcomeCallable ResourceSharingClient::enableSharingWithResourceDirectoryCallable(const EnableSharingWithResourceDirectoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableSharingWithResourceDirectoryOutcome()>>(
			[this, request]()
			{
			return this->enableSharingWithResourceDirectory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceSharingClient::GetPermissionOutcome ResourceSharingClient::getPermission(const GetPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPermissionOutcome(GetPermissionResult(outcome.result()));
	else
		return GetPermissionOutcome(outcome.error());
}

void ResourceSharingClient::getPermissionAsync(const GetPermissionRequest& request, const GetPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceSharingClient::GetPermissionOutcomeCallable ResourceSharingClient::getPermissionCallable(const GetPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPermissionOutcome()>>(
			[this, request]()
			{
			return this->getPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceSharingClient::ListPermissionVersionsOutcome ResourceSharingClient::listPermissionVersions(const ListPermissionVersionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPermissionVersionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPermissionVersionsOutcome(ListPermissionVersionsResult(outcome.result()));
	else
		return ListPermissionVersionsOutcome(outcome.error());
}

void ResourceSharingClient::listPermissionVersionsAsync(const ListPermissionVersionsRequest& request, const ListPermissionVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPermissionVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceSharingClient::ListPermissionVersionsOutcomeCallable ResourceSharingClient::listPermissionVersionsCallable(const ListPermissionVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPermissionVersionsOutcome()>>(
			[this, request]()
			{
			return this->listPermissionVersions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceSharingClient::ListPermissionsOutcome ResourceSharingClient::listPermissions(const ListPermissionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPermissionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPermissionsOutcome(ListPermissionsResult(outcome.result()));
	else
		return ListPermissionsOutcome(outcome.error());
}

void ResourceSharingClient::listPermissionsAsync(const ListPermissionsRequest& request, const ListPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPermissions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceSharingClient::ListPermissionsOutcomeCallable ResourceSharingClient::listPermissionsCallable(const ListPermissionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPermissionsOutcome()>>(
			[this, request]()
			{
			return this->listPermissions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceSharingClient::ListResourceShareAssociationsOutcome ResourceSharingClient::listResourceShareAssociations(const ListResourceShareAssociationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourceShareAssociationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourceShareAssociationsOutcome(ListResourceShareAssociationsResult(outcome.result()));
	else
		return ListResourceShareAssociationsOutcome(outcome.error());
}

void ResourceSharingClient::listResourceShareAssociationsAsync(const ListResourceShareAssociationsRequest& request, const ListResourceShareAssociationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourceShareAssociations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceSharingClient::ListResourceShareAssociationsOutcomeCallable ResourceSharingClient::listResourceShareAssociationsCallable(const ListResourceShareAssociationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourceShareAssociationsOutcome()>>(
			[this, request]()
			{
			return this->listResourceShareAssociations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceSharingClient::ListResourceShareInvitationsOutcome ResourceSharingClient::listResourceShareInvitations(const ListResourceShareInvitationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourceShareInvitationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourceShareInvitationsOutcome(ListResourceShareInvitationsResult(outcome.result()));
	else
		return ListResourceShareInvitationsOutcome(outcome.error());
}

void ResourceSharingClient::listResourceShareInvitationsAsync(const ListResourceShareInvitationsRequest& request, const ListResourceShareInvitationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourceShareInvitations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceSharingClient::ListResourceShareInvitationsOutcomeCallable ResourceSharingClient::listResourceShareInvitationsCallable(const ListResourceShareInvitationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourceShareInvitationsOutcome()>>(
			[this, request]()
			{
			return this->listResourceShareInvitations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceSharingClient::ListResourceSharePermissionsOutcome ResourceSharingClient::listResourceSharePermissions(const ListResourceSharePermissionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourceSharePermissionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourceSharePermissionsOutcome(ListResourceSharePermissionsResult(outcome.result()));
	else
		return ListResourceSharePermissionsOutcome(outcome.error());
}

void ResourceSharingClient::listResourceSharePermissionsAsync(const ListResourceSharePermissionsRequest& request, const ListResourceSharePermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourceSharePermissions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceSharingClient::ListResourceSharePermissionsOutcomeCallable ResourceSharingClient::listResourceSharePermissionsCallable(const ListResourceSharePermissionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourceSharePermissionsOutcome()>>(
			[this, request]()
			{
			return this->listResourceSharePermissions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceSharingClient::ListResourceSharesOutcome ResourceSharingClient::listResourceShares(const ListResourceSharesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourceSharesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourceSharesOutcome(ListResourceSharesResult(outcome.result()));
	else
		return ListResourceSharesOutcome(outcome.error());
}

void ResourceSharingClient::listResourceSharesAsync(const ListResourceSharesRequest& request, const ListResourceSharesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourceShares(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceSharingClient::ListResourceSharesOutcomeCallable ResourceSharingClient::listResourceSharesCallable(const ListResourceSharesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourceSharesOutcome()>>(
			[this, request]()
			{
			return this->listResourceShares(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceSharingClient::ListSharedResourcesOutcome ResourceSharingClient::listSharedResources(const ListSharedResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSharedResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSharedResourcesOutcome(ListSharedResourcesResult(outcome.result()));
	else
		return ListSharedResourcesOutcome(outcome.error());
}

void ResourceSharingClient::listSharedResourcesAsync(const ListSharedResourcesRequest& request, const ListSharedResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSharedResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceSharingClient::ListSharedResourcesOutcomeCallable ResourceSharingClient::listSharedResourcesCallable(const ListSharedResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSharedResourcesOutcome()>>(
			[this, request]()
			{
			return this->listSharedResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceSharingClient::ListSharedTargetsOutcome ResourceSharingClient::listSharedTargets(const ListSharedTargetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSharedTargetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSharedTargetsOutcome(ListSharedTargetsResult(outcome.result()));
	else
		return ListSharedTargetsOutcome(outcome.error());
}

void ResourceSharingClient::listSharedTargetsAsync(const ListSharedTargetsRequest& request, const ListSharedTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSharedTargets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceSharingClient::ListSharedTargetsOutcomeCallable ResourceSharingClient::listSharedTargetsCallable(const ListSharedTargetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSharedTargetsOutcome()>>(
			[this, request]()
			{
			return this->listSharedTargets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceSharingClient::RejectResourceShareInvitationOutcome ResourceSharingClient::rejectResourceShareInvitation(const RejectResourceShareInvitationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RejectResourceShareInvitationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RejectResourceShareInvitationOutcome(RejectResourceShareInvitationResult(outcome.result()));
	else
		return RejectResourceShareInvitationOutcome(outcome.error());
}

void ResourceSharingClient::rejectResourceShareInvitationAsync(const RejectResourceShareInvitationRequest& request, const RejectResourceShareInvitationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rejectResourceShareInvitation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceSharingClient::RejectResourceShareInvitationOutcomeCallable ResourceSharingClient::rejectResourceShareInvitationCallable(const RejectResourceShareInvitationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RejectResourceShareInvitationOutcome()>>(
			[this, request]()
			{
			return this->rejectResourceShareInvitation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceSharingClient::UpdateResourceShareOutcome ResourceSharingClient::updateResourceShare(const UpdateResourceShareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateResourceShareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateResourceShareOutcome(UpdateResourceShareResult(outcome.result()));
	else
		return UpdateResourceShareOutcome(outcome.error());
}

void ResourceSharingClient::updateResourceShareAsync(const UpdateResourceShareRequest& request, const UpdateResourceShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateResourceShare(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceSharingClient::UpdateResourceShareOutcomeCallable ResourceSharingClient::updateResourceShareCallable(const UpdateResourceShareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateResourceShareOutcome()>>(
			[this, request]()
			{
			return this->updateResourceShare(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

