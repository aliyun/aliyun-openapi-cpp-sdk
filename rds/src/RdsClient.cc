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

#include <alibabacloud/rds/RdsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

namespace
{
	const std::string SERVICE_NAME = "Rds";
}

RdsClient::RdsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "rds");
}

RdsClient::RdsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "rds");
}

RdsClient::RdsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "rds");
}

RdsClient::~RdsClient()
{}

RdsClient::AcceptRCInquiredSystemEventOutcome RdsClient::acceptRCInquiredSystemEvent(const AcceptRCInquiredSystemEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AcceptRCInquiredSystemEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AcceptRCInquiredSystemEventOutcome(AcceptRCInquiredSystemEventResult(outcome.result()));
	else
		return AcceptRCInquiredSystemEventOutcome(outcome.error());
}

void RdsClient::acceptRCInquiredSystemEventAsync(const AcceptRCInquiredSystemEventRequest& request, const AcceptRCInquiredSystemEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, acceptRCInquiredSystemEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::AcceptRCInquiredSystemEventOutcomeCallable RdsClient::acceptRCInquiredSystemEventCallable(const AcceptRCInquiredSystemEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AcceptRCInquiredSystemEventOutcome()>>(
			[this, request]()
			{
			return this->acceptRCInquiredSystemEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ActivateMigrationTargetInstanceOutcome RdsClient::activateMigrationTargetInstance(const ActivateMigrationTargetInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ActivateMigrationTargetInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ActivateMigrationTargetInstanceOutcome(ActivateMigrationTargetInstanceResult(outcome.result()));
	else
		return ActivateMigrationTargetInstanceOutcome(outcome.error());
}

void RdsClient::activateMigrationTargetInstanceAsync(const ActivateMigrationTargetInstanceRequest& request, const ActivateMigrationTargetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, activateMigrationTargetInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ActivateMigrationTargetInstanceOutcomeCallable RdsClient::activateMigrationTargetInstanceCallable(const ActivateMigrationTargetInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ActivateMigrationTargetInstanceOutcome()>>(
			[this, request]()
			{
			return this->activateMigrationTargetInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::AddTagsToResourceOutcome RdsClient::addTagsToResource(const AddTagsToResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddTagsToResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddTagsToResourceOutcome(AddTagsToResourceResult(outcome.result()));
	else
		return AddTagsToResourceOutcome(outcome.error());
}

void RdsClient::addTagsToResourceAsync(const AddTagsToResourceRequest& request, const AddTagsToResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addTagsToResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::AddTagsToResourceOutcomeCallable RdsClient::addTagsToResourceCallable(const AddTagsToResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddTagsToResourceOutcome()>>(
			[this, request]()
			{
			return this->addTagsToResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::AllocateInstancePublicConnectionOutcome RdsClient::allocateInstancePublicConnection(const AllocateInstancePublicConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AllocateInstancePublicConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AllocateInstancePublicConnectionOutcome(AllocateInstancePublicConnectionResult(outcome.result()));
	else
		return AllocateInstancePublicConnectionOutcome(outcome.error());
}

void RdsClient::allocateInstancePublicConnectionAsync(const AllocateInstancePublicConnectionRequest& request, const AllocateInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocateInstancePublicConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::AllocateInstancePublicConnectionOutcomeCallable RdsClient::allocateInstancePublicConnectionCallable(const AllocateInstancePublicConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocateInstancePublicConnectionOutcome()>>(
			[this, request]()
			{
			return this->allocateInstancePublicConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::AllocateReadWriteSplittingConnectionOutcome RdsClient::allocateReadWriteSplittingConnection(const AllocateReadWriteSplittingConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AllocateReadWriteSplittingConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AllocateReadWriteSplittingConnectionOutcome(AllocateReadWriteSplittingConnectionResult(outcome.result()));
	else
		return AllocateReadWriteSplittingConnectionOutcome(outcome.error());
}

void RdsClient::allocateReadWriteSplittingConnectionAsync(const AllocateReadWriteSplittingConnectionRequest& request, const AllocateReadWriteSplittingConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocateReadWriteSplittingConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::AllocateReadWriteSplittingConnectionOutcomeCallable RdsClient::allocateReadWriteSplittingConnectionCallable(const AllocateReadWriteSplittingConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocateReadWriteSplittingConnectionOutcome()>>(
			[this, request]()
			{
			return this->allocateReadWriteSplittingConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::AssociateEipAddressWithRCInstanceOutcome RdsClient::associateEipAddressWithRCInstance(const AssociateEipAddressWithRCInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateEipAddressWithRCInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateEipAddressWithRCInstanceOutcome(AssociateEipAddressWithRCInstanceResult(outcome.result()));
	else
		return AssociateEipAddressWithRCInstanceOutcome(outcome.error());
}

void RdsClient::associateEipAddressWithRCInstanceAsync(const AssociateEipAddressWithRCInstanceRequest& request, const AssociateEipAddressWithRCInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateEipAddressWithRCInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::AssociateEipAddressWithRCInstanceOutcomeCallable RdsClient::associateEipAddressWithRCInstanceCallable(const AssociateEipAddressWithRCInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateEipAddressWithRCInstanceOutcome()>>(
			[this, request]()
			{
			return this->associateEipAddressWithRCInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::AttachRCDiskOutcome RdsClient::attachRCDisk(const AttachRCDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachRCDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachRCDiskOutcome(AttachRCDiskResult(outcome.result()));
	else
		return AttachRCDiskOutcome(outcome.error());
}

void RdsClient::attachRCDiskAsync(const AttachRCDiskRequest& request, const AttachRCDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachRCDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::AttachRCDiskOutcomeCallable RdsClient::attachRCDiskCallable(const AttachRCDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachRCDiskOutcome()>>(
			[this, request]()
			{
			return this->attachRCDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::AttachRCInstancesOutcome RdsClient::attachRCInstances(const AttachRCInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachRCInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachRCInstancesOutcome(AttachRCInstancesResult(outcome.result()));
	else
		return AttachRCInstancesOutcome(outcome.error());
}

void RdsClient::attachRCInstancesAsync(const AttachRCInstancesRequest& request, const AttachRCInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachRCInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::AttachRCInstancesOutcomeCallable RdsClient::attachRCInstancesCallable(const AttachRCInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachRCInstancesOutcome()>>(
			[this, request]()
			{
			return this->attachRCInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::AttachWhitelistTemplateToInstanceOutcome RdsClient::attachWhitelistTemplateToInstance(const AttachWhitelistTemplateToInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachWhitelistTemplateToInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachWhitelistTemplateToInstanceOutcome(AttachWhitelistTemplateToInstanceResult(outcome.result()));
	else
		return AttachWhitelistTemplateToInstanceOutcome(outcome.error());
}

void RdsClient::attachWhitelistTemplateToInstanceAsync(const AttachWhitelistTemplateToInstanceRequest& request, const AttachWhitelistTemplateToInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachWhitelistTemplateToInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::AttachWhitelistTemplateToInstanceOutcomeCallable RdsClient::attachWhitelistTemplateToInstanceCallable(const AttachWhitelistTemplateToInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachWhitelistTemplateToInstanceOutcome()>>(
			[this, request]()
			{
			return this->attachWhitelistTemplateToInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::AuthorizeRCSecurityGroupPermissionOutcome RdsClient::authorizeRCSecurityGroupPermission(const AuthorizeRCSecurityGroupPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AuthorizeRCSecurityGroupPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AuthorizeRCSecurityGroupPermissionOutcome(AuthorizeRCSecurityGroupPermissionResult(outcome.result()));
	else
		return AuthorizeRCSecurityGroupPermissionOutcome(outcome.error());
}

void RdsClient::authorizeRCSecurityGroupPermissionAsync(const AuthorizeRCSecurityGroupPermissionRequest& request, const AuthorizeRCSecurityGroupPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, authorizeRCSecurityGroupPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::AuthorizeRCSecurityGroupPermissionOutcomeCallable RdsClient::authorizeRCSecurityGroupPermissionCallable(const AuthorizeRCSecurityGroupPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AuthorizeRCSecurityGroupPermissionOutcome()>>(
			[this, request]()
			{
			return this->authorizeRCSecurityGroupPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CalculateDBInstanceWeightOutcome RdsClient::calculateDBInstanceWeight(const CalculateDBInstanceWeightRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CalculateDBInstanceWeightOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CalculateDBInstanceWeightOutcome(CalculateDBInstanceWeightResult(outcome.result()));
	else
		return CalculateDBInstanceWeightOutcome(outcome.error());
}

void RdsClient::calculateDBInstanceWeightAsync(const CalculateDBInstanceWeightRequest& request, const CalculateDBInstanceWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, calculateDBInstanceWeight(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CalculateDBInstanceWeightOutcomeCallable RdsClient::calculateDBInstanceWeightCallable(const CalculateDBInstanceWeightRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CalculateDBInstanceWeightOutcome()>>(
			[this, request]()
			{
			return this->calculateDBInstanceWeight(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CancelActiveOperationTasksOutcome RdsClient::cancelActiveOperationTasks(const CancelActiveOperationTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelActiveOperationTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelActiveOperationTasksOutcome(CancelActiveOperationTasksResult(outcome.result()));
	else
		return CancelActiveOperationTasksOutcome(outcome.error());
}

void RdsClient::cancelActiveOperationTasksAsync(const CancelActiveOperationTasksRequest& request, const CancelActiveOperationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelActiveOperationTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CancelActiveOperationTasksOutcomeCallable RdsClient::cancelActiveOperationTasksCallable(const CancelActiveOperationTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelActiveOperationTasksOutcome()>>(
			[this, request]()
			{
			return this->cancelActiveOperationTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CheckAccountNameAvailableOutcome RdsClient::checkAccountNameAvailable(const CheckAccountNameAvailableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckAccountNameAvailableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckAccountNameAvailableOutcome(CheckAccountNameAvailableResult(outcome.result()));
	else
		return CheckAccountNameAvailableOutcome(outcome.error());
}

void RdsClient::checkAccountNameAvailableAsync(const CheckAccountNameAvailableRequest& request, const CheckAccountNameAvailableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkAccountNameAvailable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CheckAccountNameAvailableOutcomeCallable RdsClient::checkAccountNameAvailableCallable(const CheckAccountNameAvailableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckAccountNameAvailableOutcome()>>(
			[this, request]()
			{
			return this->checkAccountNameAvailable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CheckCloudResourceAuthorizedOutcome RdsClient::checkCloudResourceAuthorized(const CheckCloudResourceAuthorizedRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckCloudResourceAuthorizedOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckCloudResourceAuthorizedOutcome(CheckCloudResourceAuthorizedResult(outcome.result()));
	else
		return CheckCloudResourceAuthorizedOutcome(outcome.error());
}

void RdsClient::checkCloudResourceAuthorizedAsync(const CheckCloudResourceAuthorizedRequest& request, const CheckCloudResourceAuthorizedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkCloudResourceAuthorized(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CheckCloudResourceAuthorizedOutcomeCallable RdsClient::checkCloudResourceAuthorizedCallable(const CheckCloudResourceAuthorizedRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckCloudResourceAuthorizedOutcome()>>(
			[this, request]()
			{
			return this->checkCloudResourceAuthorized(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CheckCreateDdrDBInstanceOutcome RdsClient::checkCreateDdrDBInstance(const CheckCreateDdrDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckCreateDdrDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckCreateDdrDBInstanceOutcome(CheckCreateDdrDBInstanceResult(outcome.result()));
	else
		return CheckCreateDdrDBInstanceOutcome(outcome.error());
}

void RdsClient::checkCreateDdrDBInstanceAsync(const CheckCreateDdrDBInstanceRequest& request, const CheckCreateDdrDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkCreateDdrDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CheckCreateDdrDBInstanceOutcomeCallable RdsClient::checkCreateDdrDBInstanceCallable(const CheckCreateDdrDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckCreateDdrDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->checkCreateDdrDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CheckDBNameAvailableOutcome RdsClient::checkDBNameAvailable(const CheckDBNameAvailableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckDBNameAvailableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckDBNameAvailableOutcome(CheckDBNameAvailableResult(outcome.result()));
	else
		return CheckDBNameAvailableOutcome(outcome.error());
}

void RdsClient::checkDBNameAvailableAsync(const CheckDBNameAvailableRequest& request, const CheckDBNameAvailableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkDBNameAvailable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CheckDBNameAvailableOutcomeCallable RdsClient::checkDBNameAvailableCallable(const CheckDBNameAvailableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckDBNameAvailableOutcome()>>(
			[this, request]()
			{
			return this->checkDBNameAvailable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CheckInstanceExistOutcome RdsClient::checkInstanceExist(const CheckInstanceExistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckInstanceExistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckInstanceExistOutcome(CheckInstanceExistResult(outcome.result()));
	else
		return CheckInstanceExistOutcome(outcome.error());
}

void RdsClient::checkInstanceExistAsync(const CheckInstanceExistRequest& request, const CheckInstanceExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkInstanceExist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CheckInstanceExistOutcomeCallable RdsClient::checkInstanceExistCallable(const CheckInstanceExistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckInstanceExistOutcome()>>(
			[this, request]()
			{
			return this->checkInstanceExist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CheckServiceLinkedRoleOutcome RdsClient::checkServiceLinkedRole(const CheckServiceLinkedRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckServiceLinkedRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckServiceLinkedRoleOutcome(CheckServiceLinkedRoleResult(outcome.result()));
	else
		return CheckServiceLinkedRoleOutcome(outcome.error());
}

void RdsClient::checkServiceLinkedRoleAsync(const CheckServiceLinkedRoleRequest& request, const CheckServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkServiceLinkedRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CheckServiceLinkedRoleOutcomeCallable RdsClient::checkServiceLinkedRoleCallable(const CheckServiceLinkedRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckServiceLinkedRoleOutcome()>>(
			[this, request]()
			{
			return this->checkServiceLinkedRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CloneDBInstanceOutcome RdsClient::cloneDBInstance(const CloneDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloneDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloneDBInstanceOutcome(CloneDBInstanceResult(outcome.result()));
	else
		return CloneDBInstanceOutcome(outcome.error());
}

void RdsClient::cloneDBInstanceAsync(const CloneDBInstanceRequest& request, const CloneDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cloneDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CloneDBInstanceOutcomeCallable RdsClient::cloneDBInstanceCallable(const CloneDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloneDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->cloneDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CloneParameterGroupOutcome RdsClient::cloneParameterGroup(const CloneParameterGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloneParameterGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloneParameterGroupOutcome(CloneParameterGroupResult(outcome.result()));
	else
		return CloneParameterGroupOutcome(outcome.error());
}

void RdsClient::cloneParameterGroupAsync(const CloneParameterGroupRequest& request, const CloneParameterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cloneParameterGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CloneParameterGroupOutcomeCallable RdsClient::cloneParameterGroupCallable(const CloneParameterGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloneParameterGroupOutcome()>>(
			[this, request]()
			{
			return this->cloneParameterGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ConfirmNotifyOutcome RdsClient::confirmNotify(const ConfirmNotifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfirmNotifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfirmNotifyOutcome(ConfirmNotifyResult(outcome.result()));
	else
		return ConfirmNotifyOutcome(outcome.error());
}

void RdsClient::confirmNotifyAsync(const ConfirmNotifyRequest& request, const ConfirmNotifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, confirmNotify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ConfirmNotifyOutcomeCallable RdsClient::confirmNotifyCallable(const ConfirmNotifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfirmNotifyOutcome()>>(
			[this, request]()
			{
			return this->confirmNotify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CopyDatabaseOutcome RdsClient::copyDatabase(const CopyDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CopyDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CopyDatabaseOutcome(CopyDatabaseResult(outcome.result()));
	else
		return CopyDatabaseOutcome(outcome.error());
}

void RdsClient::copyDatabaseAsync(const CopyDatabaseRequest& request, const CopyDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, copyDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CopyDatabaseOutcomeCallable RdsClient::copyDatabaseCallable(const CopyDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CopyDatabaseOutcome()>>(
			[this, request]()
			{
			return this->copyDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CopyDatabaseBetweenInstancesOutcome RdsClient::copyDatabaseBetweenInstances(const CopyDatabaseBetweenInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CopyDatabaseBetweenInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CopyDatabaseBetweenInstancesOutcome(CopyDatabaseBetweenInstancesResult(outcome.result()));
	else
		return CopyDatabaseBetweenInstancesOutcome(outcome.error());
}

void RdsClient::copyDatabaseBetweenInstancesAsync(const CopyDatabaseBetweenInstancesRequest& request, const CopyDatabaseBetweenInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, copyDatabaseBetweenInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CopyDatabaseBetweenInstancesOutcomeCallable RdsClient::copyDatabaseBetweenInstancesCallable(const CopyDatabaseBetweenInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CopyDatabaseBetweenInstancesOutcome()>>(
			[this, request]()
			{
			return this->copyDatabaseBetweenInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateAccountOutcome RdsClient::createAccount(const CreateAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAccountOutcome(CreateAccountResult(outcome.result()));
	else
		return CreateAccountOutcome(outcome.error());
}

void RdsClient::createAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateAccountOutcomeCallable RdsClient::createAccountCallable(const CreateAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAccountOutcome()>>(
			[this, request]()
			{
			return this->createAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateBackupOutcome RdsClient::createBackup(const CreateBackupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBackupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBackupOutcome(CreateBackupResult(outcome.result()));
	else
		return CreateBackupOutcome(outcome.error());
}

void RdsClient::createBackupAsync(const CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBackup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateBackupOutcomeCallable RdsClient::createBackupCallable(const CreateBackupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBackupOutcome()>>(
			[this, request]()
			{
			return this->createBackup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateCloudMigrationPrecheckTaskOutcome RdsClient::createCloudMigrationPrecheckTask(const CreateCloudMigrationPrecheckTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCloudMigrationPrecheckTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCloudMigrationPrecheckTaskOutcome(CreateCloudMigrationPrecheckTaskResult(outcome.result()));
	else
		return CreateCloudMigrationPrecheckTaskOutcome(outcome.error());
}

void RdsClient::createCloudMigrationPrecheckTaskAsync(const CreateCloudMigrationPrecheckTaskRequest& request, const CreateCloudMigrationPrecheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCloudMigrationPrecheckTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateCloudMigrationPrecheckTaskOutcomeCallable RdsClient::createCloudMigrationPrecheckTaskCallable(const CreateCloudMigrationPrecheckTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCloudMigrationPrecheckTaskOutcome()>>(
			[this, request]()
			{
			return this->createCloudMigrationPrecheckTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateCloudMigrationTaskOutcome RdsClient::createCloudMigrationTask(const CreateCloudMigrationTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCloudMigrationTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCloudMigrationTaskOutcome(CreateCloudMigrationTaskResult(outcome.result()));
	else
		return CreateCloudMigrationTaskOutcome(outcome.error());
}

void RdsClient::createCloudMigrationTaskAsync(const CreateCloudMigrationTaskRequest& request, const CreateCloudMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCloudMigrationTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateCloudMigrationTaskOutcomeCallable RdsClient::createCloudMigrationTaskCallable(const CreateCloudMigrationTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCloudMigrationTaskOutcome()>>(
			[this, request]()
			{
			return this->createCloudMigrationTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateDBInstanceOutcome RdsClient::createDBInstance(const CreateDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDBInstanceOutcome(CreateDBInstanceResult(outcome.result()));
	else
		return CreateDBInstanceOutcome(outcome.error());
}

void RdsClient::createDBInstanceAsync(const CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateDBInstanceOutcomeCallable RdsClient::createDBInstanceCallable(const CreateDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->createDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateDBInstanceEndpointOutcome RdsClient::createDBInstanceEndpoint(const CreateDBInstanceEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDBInstanceEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDBInstanceEndpointOutcome(CreateDBInstanceEndpointResult(outcome.result()));
	else
		return CreateDBInstanceEndpointOutcome(outcome.error());
}

void RdsClient::createDBInstanceEndpointAsync(const CreateDBInstanceEndpointRequest& request, const CreateDBInstanceEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBInstanceEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateDBInstanceEndpointOutcomeCallable RdsClient::createDBInstanceEndpointCallable(const CreateDBInstanceEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBInstanceEndpointOutcome()>>(
			[this, request]()
			{
			return this->createDBInstanceEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateDBInstanceEndpointAddressOutcome RdsClient::createDBInstanceEndpointAddress(const CreateDBInstanceEndpointAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDBInstanceEndpointAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDBInstanceEndpointAddressOutcome(CreateDBInstanceEndpointAddressResult(outcome.result()));
	else
		return CreateDBInstanceEndpointAddressOutcome(outcome.error());
}

void RdsClient::createDBInstanceEndpointAddressAsync(const CreateDBInstanceEndpointAddressRequest& request, const CreateDBInstanceEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBInstanceEndpointAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateDBInstanceEndpointAddressOutcomeCallable RdsClient::createDBInstanceEndpointAddressCallable(const CreateDBInstanceEndpointAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBInstanceEndpointAddressOutcome()>>(
			[this, request]()
			{
			return this->createDBInstanceEndpointAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateDBInstanceForRebuildOutcome RdsClient::createDBInstanceForRebuild(const CreateDBInstanceForRebuildRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDBInstanceForRebuildOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDBInstanceForRebuildOutcome(CreateDBInstanceForRebuildResult(outcome.result()));
	else
		return CreateDBInstanceForRebuildOutcome(outcome.error());
}

void RdsClient::createDBInstanceForRebuildAsync(const CreateDBInstanceForRebuildRequest& request, const CreateDBInstanceForRebuildAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBInstanceForRebuild(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateDBInstanceForRebuildOutcomeCallable RdsClient::createDBInstanceForRebuildCallable(const CreateDBInstanceForRebuildRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBInstanceForRebuildOutcome()>>(
			[this, request]()
			{
			return this->createDBInstanceForRebuild(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateDBInstanceSecurityGroupRuleOutcome RdsClient::createDBInstanceSecurityGroupRule(const CreateDBInstanceSecurityGroupRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDBInstanceSecurityGroupRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDBInstanceSecurityGroupRuleOutcome(CreateDBInstanceSecurityGroupRuleResult(outcome.result()));
	else
		return CreateDBInstanceSecurityGroupRuleOutcome(outcome.error());
}

void RdsClient::createDBInstanceSecurityGroupRuleAsync(const CreateDBInstanceSecurityGroupRuleRequest& request, const CreateDBInstanceSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBInstanceSecurityGroupRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateDBInstanceSecurityGroupRuleOutcomeCallable RdsClient::createDBInstanceSecurityGroupRuleCallable(const CreateDBInstanceSecurityGroupRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBInstanceSecurityGroupRuleOutcome()>>(
			[this, request]()
			{
			return this->createDBInstanceSecurityGroupRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateDBNodesOutcome RdsClient::createDBNodes(const CreateDBNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDBNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDBNodesOutcome(CreateDBNodesResult(outcome.result()));
	else
		return CreateDBNodesOutcome(outcome.error());
}

void RdsClient::createDBNodesAsync(const CreateDBNodesRequest& request, const CreateDBNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateDBNodesOutcomeCallable RdsClient::createDBNodesCallable(const CreateDBNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBNodesOutcome()>>(
			[this, request]()
			{
			return this->createDBNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateDBProxyEndpointAddressOutcome RdsClient::createDBProxyEndpointAddress(const CreateDBProxyEndpointAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDBProxyEndpointAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDBProxyEndpointAddressOutcome(CreateDBProxyEndpointAddressResult(outcome.result()));
	else
		return CreateDBProxyEndpointAddressOutcome(outcome.error());
}

void RdsClient::createDBProxyEndpointAddressAsync(const CreateDBProxyEndpointAddressRequest& request, const CreateDBProxyEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBProxyEndpointAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateDBProxyEndpointAddressOutcomeCallable RdsClient::createDBProxyEndpointAddressCallable(const CreateDBProxyEndpointAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBProxyEndpointAddressOutcome()>>(
			[this, request]()
			{
			return this->createDBProxyEndpointAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateDatabaseOutcome RdsClient::createDatabase(const CreateDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDatabaseOutcome(CreateDatabaseResult(outcome.result()));
	else
		return CreateDatabaseOutcome(outcome.error());
}

void RdsClient::createDatabaseAsync(const CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateDatabaseOutcomeCallable RdsClient::createDatabaseCallable(const CreateDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDatabaseOutcome()>>(
			[this, request]()
			{
			return this->createDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateDdrInstanceOutcome RdsClient::createDdrInstance(const CreateDdrInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDdrInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDdrInstanceOutcome(CreateDdrInstanceResult(outcome.result()));
	else
		return CreateDdrInstanceOutcome(outcome.error());
}

void RdsClient::createDdrInstanceAsync(const CreateDdrInstanceRequest& request, const CreateDdrInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDdrInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateDdrInstanceOutcomeCallable RdsClient::createDdrInstanceCallable(const CreateDdrInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDdrInstanceOutcome()>>(
			[this, request]()
			{
			return this->createDdrInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateDiagnosticReportOutcome RdsClient::createDiagnosticReport(const CreateDiagnosticReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDiagnosticReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDiagnosticReportOutcome(CreateDiagnosticReportResult(outcome.result()));
	else
		return CreateDiagnosticReportOutcome(outcome.error());
}

void RdsClient::createDiagnosticReportAsync(const CreateDiagnosticReportRequest& request, const CreateDiagnosticReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDiagnosticReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateDiagnosticReportOutcomeCallable RdsClient::createDiagnosticReportCallable(const CreateDiagnosticReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDiagnosticReportOutcome()>>(
			[this, request]()
			{
			return this->createDiagnosticReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateGADInstanceOutcome RdsClient::createGADInstance(const CreateGADInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGADInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGADInstanceOutcome(CreateGADInstanceResult(outcome.result()));
	else
		return CreateGADInstanceOutcome(outcome.error());
}

void RdsClient::createGADInstanceAsync(const CreateGADInstanceRequest& request, const CreateGADInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGADInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateGADInstanceOutcomeCallable RdsClient::createGADInstanceCallable(const CreateGADInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGADInstanceOutcome()>>(
			[this, request]()
			{
			return this->createGADInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateGadInstanceMemberOutcome RdsClient::createGadInstanceMember(const CreateGadInstanceMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGadInstanceMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGadInstanceMemberOutcome(CreateGadInstanceMemberResult(outcome.result()));
	else
		return CreateGadInstanceMemberOutcome(outcome.error());
}

void RdsClient::createGadInstanceMemberAsync(const CreateGadInstanceMemberRequest& request, const CreateGadInstanceMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGadInstanceMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateGadInstanceMemberOutcomeCallable RdsClient::createGadInstanceMemberCallable(const CreateGadInstanceMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGadInstanceMemberOutcome()>>(
			[this, request]()
			{
			return this->createGadInstanceMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateMaskingRulesOutcome RdsClient::createMaskingRules(const CreateMaskingRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMaskingRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMaskingRulesOutcome(CreateMaskingRulesResult(outcome.result()));
	else
		return CreateMaskingRulesOutcome(outcome.error());
}

void RdsClient::createMaskingRulesAsync(const CreateMaskingRulesRequest& request, const CreateMaskingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMaskingRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateMaskingRulesOutcomeCallable RdsClient::createMaskingRulesCallable(const CreateMaskingRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMaskingRulesOutcome()>>(
			[this, request]()
			{
			return this->createMaskingRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateMigrateTaskOutcome RdsClient::createMigrateTask(const CreateMigrateTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMigrateTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMigrateTaskOutcome(CreateMigrateTaskResult(outcome.result()));
	else
		return CreateMigrateTaskOutcome(outcome.error());
}

void RdsClient::createMigrateTaskAsync(const CreateMigrateTaskRequest& request, const CreateMigrateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMigrateTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateMigrateTaskOutcomeCallable RdsClient::createMigrateTaskCallable(const CreateMigrateTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMigrateTaskOutcome()>>(
			[this, request]()
			{
			return this->createMigrateTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateOnlineDatabaseTaskOutcome RdsClient::createOnlineDatabaseTask(const CreateOnlineDatabaseTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOnlineDatabaseTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOnlineDatabaseTaskOutcome(CreateOnlineDatabaseTaskResult(outcome.result()));
	else
		return CreateOnlineDatabaseTaskOutcome(outcome.error());
}

void RdsClient::createOnlineDatabaseTaskAsync(const CreateOnlineDatabaseTaskRequest& request, const CreateOnlineDatabaseTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOnlineDatabaseTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateOnlineDatabaseTaskOutcomeCallable RdsClient::createOnlineDatabaseTaskCallable(const CreateOnlineDatabaseTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOnlineDatabaseTaskOutcome()>>(
			[this, request]()
			{
			return this->createOnlineDatabaseTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateOrderForDeleteDBNodesOutcome RdsClient::createOrderForDeleteDBNodes(const CreateOrderForDeleteDBNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrderForDeleteDBNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrderForDeleteDBNodesOutcome(CreateOrderForDeleteDBNodesResult(outcome.result()));
	else
		return CreateOrderForDeleteDBNodesOutcome(outcome.error());
}

void RdsClient::createOrderForDeleteDBNodesAsync(const CreateOrderForDeleteDBNodesRequest& request, const CreateOrderForDeleteDBNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrderForDeleteDBNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateOrderForDeleteDBNodesOutcomeCallable RdsClient::createOrderForDeleteDBNodesCallable(const CreateOrderForDeleteDBNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrderForDeleteDBNodesOutcome()>>(
			[this, request]()
			{
			return this->createOrderForDeleteDBNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateParameterGroupOutcome RdsClient::createParameterGroup(const CreateParameterGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateParameterGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateParameterGroupOutcome(CreateParameterGroupResult(outcome.result()));
	else
		return CreateParameterGroupOutcome(outcome.error());
}

void RdsClient::createParameterGroupAsync(const CreateParameterGroupRequest& request, const CreateParameterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createParameterGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateParameterGroupOutcomeCallable RdsClient::createParameterGroupCallable(const CreateParameterGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateParameterGroupOutcome()>>(
			[this, request]()
			{
			return this->createParameterGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreatePostgresExtensionsOutcome RdsClient::createPostgresExtensions(const CreatePostgresExtensionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePostgresExtensionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePostgresExtensionsOutcome(CreatePostgresExtensionsResult(outcome.result()));
	else
		return CreatePostgresExtensionsOutcome(outcome.error());
}

void RdsClient::createPostgresExtensionsAsync(const CreatePostgresExtensionsRequest& request, const CreatePostgresExtensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPostgresExtensions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreatePostgresExtensionsOutcomeCallable RdsClient::createPostgresExtensionsCallable(const CreatePostgresExtensionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePostgresExtensionsOutcome()>>(
			[this, request]()
			{
			return this->createPostgresExtensions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateRCDeploymentSetOutcome RdsClient::createRCDeploymentSet(const CreateRCDeploymentSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRCDeploymentSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRCDeploymentSetOutcome(CreateRCDeploymentSetResult(outcome.result()));
	else
		return CreateRCDeploymentSetOutcome(outcome.error());
}

void RdsClient::createRCDeploymentSetAsync(const CreateRCDeploymentSetRequest& request, const CreateRCDeploymentSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRCDeploymentSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateRCDeploymentSetOutcomeCallable RdsClient::createRCDeploymentSetCallable(const CreateRCDeploymentSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRCDeploymentSetOutcome()>>(
			[this, request]()
			{
			return this->createRCDeploymentSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateRCDiskOutcome RdsClient::createRCDisk(const CreateRCDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRCDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRCDiskOutcome(CreateRCDiskResult(outcome.result()));
	else
		return CreateRCDiskOutcome(outcome.error());
}

void RdsClient::createRCDiskAsync(const CreateRCDiskRequest& request, const CreateRCDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRCDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateRCDiskOutcomeCallable RdsClient::createRCDiskCallable(const CreateRCDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRCDiskOutcome()>>(
			[this, request]()
			{
			return this->createRCDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateRCNodePoolOutcome RdsClient::createRCNodePool(const CreateRCNodePoolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRCNodePoolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRCNodePoolOutcome(CreateRCNodePoolResult(outcome.result()));
	else
		return CreateRCNodePoolOutcome(outcome.error());
}

void RdsClient::createRCNodePoolAsync(const CreateRCNodePoolRequest& request, const CreateRCNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRCNodePool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateRCNodePoolOutcomeCallable RdsClient::createRCNodePoolCallable(const CreateRCNodePoolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRCNodePoolOutcome()>>(
			[this, request]()
			{
			return this->createRCNodePool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateRCSnapshotOutcome RdsClient::createRCSnapshot(const CreateRCSnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRCSnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRCSnapshotOutcome(CreateRCSnapshotResult(outcome.result()));
	else
		return CreateRCSnapshotOutcome(outcome.error());
}

void RdsClient::createRCSnapshotAsync(const CreateRCSnapshotRequest& request, const CreateRCSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRCSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateRCSnapshotOutcomeCallable RdsClient::createRCSnapshotCallable(const CreateRCSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRCSnapshotOutcome()>>(
			[this, request]()
			{
			return this->createRCSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateReadOnlyDBInstanceOutcome RdsClient::createReadOnlyDBInstance(const CreateReadOnlyDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateReadOnlyDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateReadOnlyDBInstanceOutcome(CreateReadOnlyDBInstanceResult(outcome.result()));
	else
		return CreateReadOnlyDBInstanceOutcome(outcome.error());
}

void RdsClient::createReadOnlyDBInstanceAsync(const CreateReadOnlyDBInstanceRequest& request, const CreateReadOnlyDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createReadOnlyDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateReadOnlyDBInstanceOutcomeCallable RdsClient::createReadOnlyDBInstanceCallable(const CreateReadOnlyDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateReadOnlyDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->createReadOnlyDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateReplicationLinkOutcome RdsClient::createReplicationLink(const CreateReplicationLinkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateReplicationLinkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateReplicationLinkOutcome(CreateReplicationLinkResult(outcome.result()));
	else
		return CreateReplicationLinkOutcome(outcome.error());
}

void RdsClient::createReplicationLinkAsync(const CreateReplicationLinkRequest& request, const CreateReplicationLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createReplicationLink(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateReplicationLinkOutcomeCallable RdsClient::createReplicationLinkCallable(const CreateReplicationLinkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateReplicationLinkOutcome()>>(
			[this, request]()
			{
			return this->createReplicationLink(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateSecretOutcome RdsClient::createSecret(const CreateSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSecretOutcome(CreateSecretResult(outcome.result()));
	else
		return CreateSecretOutcome(outcome.error());
}

void RdsClient::createSecretAsync(const CreateSecretRequest& request, const CreateSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateSecretOutcomeCallable RdsClient::createSecretCallable(const CreateSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSecretOutcome()>>(
			[this, request]()
			{
			return this->createSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateServiceLinkedRoleOutcome RdsClient::createServiceLinkedRole(const CreateServiceLinkedRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServiceLinkedRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServiceLinkedRoleOutcome(CreateServiceLinkedRoleResult(outcome.result()));
	else
		return CreateServiceLinkedRoleOutcome(outcome.error());
}

void RdsClient::createServiceLinkedRoleAsync(const CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServiceLinkedRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateServiceLinkedRoleOutcomeCallable RdsClient::createServiceLinkedRoleCallable(const CreateServiceLinkedRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServiceLinkedRoleOutcome()>>(
			[this, request]()
			{
			return this->createServiceLinkedRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateTempDBInstanceOutcome RdsClient::createTempDBInstance(const CreateTempDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTempDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTempDBInstanceOutcome(CreateTempDBInstanceResult(outcome.result()));
	else
		return CreateTempDBInstanceOutcome(outcome.error());
}

void RdsClient::createTempDBInstanceAsync(const CreateTempDBInstanceRequest& request, const CreateTempDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTempDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateTempDBInstanceOutcomeCallable RdsClient::createTempDBInstanceCallable(const CreateTempDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTempDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->createTempDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateYouhuiForOrderOutcome RdsClient::createYouhuiForOrder(const CreateYouhuiForOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateYouhuiForOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateYouhuiForOrderOutcome(CreateYouhuiForOrderResult(outcome.result()));
	else
		return CreateYouhuiForOrderOutcome(outcome.error());
}

void RdsClient::createYouhuiForOrderAsync(const CreateYouhuiForOrderRequest& request, const CreateYouhuiForOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createYouhuiForOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateYouhuiForOrderOutcomeCallable RdsClient::createYouhuiForOrderCallable(const CreateYouhuiForOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateYouhuiForOrderOutcome()>>(
			[this, request]()
			{
			return this->createYouhuiForOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteADSettingOutcome RdsClient::deleteADSetting(const DeleteADSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteADSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteADSettingOutcome(DeleteADSettingResult(outcome.result()));
	else
		return DeleteADSettingOutcome(outcome.error());
}

void RdsClient::deleteADSettingAsync(const DeleteADSettingRequest& request, const DeleteADSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteADSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteADSettingOutcomeCallable RdsClient::deleteADSettingCallable(const DeleteADSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteADSettingOutcome()>>(
			[this, request]()
			{
			return this->deleteADSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteAccountOutcome RdsClient::deleteAccount(const DeleteAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAccountOutcome(DeleteAccountResult(outcome.result()));
	else
		return DeleteAccountOutcome(outcome.error());
}

void RdsClient::deleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteAccountOutcomeCallable RdsClient::deleteAccountCallable(const DeleteAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAccountOutcome()>>(
			[this, request]()
			{
			return this->deleteAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteBackupOutcome RdsClient::deleteBackup(const DeleteBackupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBackupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBackupOutcome(DeleteBackupResult(outcome.result()));
	else
		return DeleteBackupOutcome(outcome.error());
}

void RdsClient::deleteBackupAsync(const DeleteBackupRequest& request, const DeleteBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBackup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteBackupOutcomeCallable RdsClient::deleteBackupCallable(const DeleteBackupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBackupOutcome()>>(
			[this, request]()
			{
			return this->deleteBackup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteBackupFileOutcome RdsClient::deleteBackupFile(const DeleteBackupFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBackupFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBackupFileOutcome(DeleteBackupFileResult(outcome.result()));
	else
		return DeleteBackupFileOutcome(outcome.error());
}

void RdsClient::deleteBackupFileAsync(const DeleteBackupFileRequest& request, const DeleteBackupFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBackupFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteBackupFileOutcomeCallable RdsClient::deleteBackupFileCallable(const DeleteBackupFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBackupFileOutcome()>>(
			[this, request]()
			{
			return this->deleteBackupFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteDBInstanceOutcome RdsClient::deleteDBInstance(const DeleteDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDBInstanceOutcome(DeleteDBInstanceResult(outcome.result()));
	else
		return DeleteDBInstanceOutcome(outcome.error());
}

void RdsClient::deleteDBInstanceAsync(const DeleteDBInstanceRequest& request, const DeleteDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteDBInstanceOutcomeCallable RdsClient::deleteDBInstanceCallable(const DeleteDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteDBInstanceEndpointOutcome RdsClient::deleteDBInstanceEndpoint(const DeleteDBInstanceEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDBInstanceEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDBInstanceEndpointOutcome(DeleteDBInstanceEndpointResult(outcome.result()));
	else
		return DeleteDBInstanceEndpointOutcome(outcome.error());
}

void RdsClient::deleteDBInstanceEndpointAsync(const DeleteDBInstanceEndpointRequest& request, const DeleteDBInstanceEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDBInstanceEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteDBInstanceEndpointOutcomeCallable RdsClient::deleteDBInstanceEndpointCallable(const DeleteDBInstanceEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBInstanceEndpointOutcome()>>(
			[this, request]()
			{
			return this->deleteDBInstanceEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteDBInstanceEndpointAddressOutcome RdsClient::deleteDBInstanceEndpointAddress(const DeleteDBInstanceEndpointAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDBInstanceEndpointAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDBInstanceEndpointAddressOutcome(DeleteDBInstanceEndpointAddressResult(outcome.result()));
	else
		return DeleteDBInstanceEndpointAddressOutcome(outcome.error());
}

void RdsClient::deleteDBInstanceEndpointAddressAsync(const DeleteDBInstanceEndpointAddressRequest& request, const DeleteDBInstanceEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDBInstanceEndpointAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteDBInstanceEndpointAddressOutcomeCallable RdsClient::deleteDBInstanceEndpointAddressCallable(const DeleteDBInstanceEndpointAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBInstanceEndpointAddressOutcome()>>(
			[this, request]()
			{
			return this->deleteDBInstanceEndpointAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteDBInstanceSecurityGroupRuleOutcome RdsClient::deleteDBInstanceSecurityGroupRule(const DeleteDBInstanceSecurityGroupRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDBInstanceSecurityGroupRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDBInstanceSecurityGroupRuleOutcome(DeleteDBInstanceSecurityGroupRuleResult(outcome.result()));
	else
		return DeleteDBInstanceSecurityGroupRuleOutcome(outcome.error());
}

void RdsClient::deleteDBInstanceSecurityGroupRuleAsync(const DeleteDBInstanceSecurityGroupRuleRequest& request, const DeleteDBInstanceSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDBInstanceSecurityGroupRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteDBInstanceSecurityGroupRuleOutcomeCallable RdsClient::deleteDBInstanceSecurityGroupRuleCallable(const DeleteDBInstanceSecurityGroupRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBInstanceSecurityGroupRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteDBInstanceSecurityGroupRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteDBNodesOutcome RdsClient::deleteDBNodes(const DeleteDBNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDBNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDBNodesOutcome(DeleteDBNodesResult(outcome.result()));
	else
		return DeleteDBNodesOutcome(outcome.error());
}

void RdsClient::deleteDBNodesAsync(const DeleteDBNodesRequest& request, const DeleteDBNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDBNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteDBNodesOutcomeCallable RdsClient::deleteDBNodesCallable(const DeleteDBNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBNodesOutcome()>>(
			[this, request]()
			{
			return this->deleteDBNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteDBProxyEndpointAddressOutcome RdsClient::deleteDBProxyEndpointAddress(const DeleteDBProxyEndpointAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDBProxyEndpointAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDBProxyEndpointAddressOutcome(DeleteDBProxyEndpointAddressResult(outcome.result()));
	else
		return DeleteDBProxyEndpointAddressOutcome(outcome.error());
}

void RdsClient::deleteDBProxyEndpointAddressAsync(const DeleteDBProxyEndpointAddressRequest& request, const DeleteDBProxyEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDBProxyEndpointAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteDBProxyEndpointAddressOutcomeCallable RdsClient::deleteDBProxyEndpointAddressCallable(const DeleteDBProxyEndpointAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBProxyEndpointAddressOutcome()>>(
			[this, request]()
			{
			return this->deleteDBProxyEndpointAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteDatabaseOutcome RdsClient::deleteDatabase(const DeleteDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDatabaseOutcome(DeleteDatabaseResult(outcome.result()));
	else
		return DeleteDatabaseOutcome(outcome.error());
}

void RdsClient::deleteDatabaseAsync(const DeleteDatabaseRequest& request, const DeleteDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteDatabaseOutcomeCallable RdsClient::deleteDatabaseCallable(const DeleteDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDatabaseOutcome()>>(
			[this, request]()
			{
			return this->deleteDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteGadInstanceOutcome RdsClient::deleteGadInstance(const DeleteGadInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGadInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGadInstanceOutcome(DeleteGadInstanceResult(outcome.result()));
	else
		return DeleteGadInstanceOutcome(outcome.error());
}

void RdsClient::deleteGadInstanceAsync(const DeleteGadInstanceRequest& request, const DeleteGadInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGadInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteGadInstanceOutcomeCallable RdsClient::deleteGadInstanceCallable(const DeleteGadInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGadInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteGadInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteMaskingRulesOutcome RdsClient::deleteMaskingRules(const DeleteMaskingRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMaskingRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMaskingRulesOutcome(DeleteMaskingRulesResult(outcome.result()));
	else
		return DeleteMaskingRulesOutcome(outcome.error());
}

void RdsClient::deleteMaskingRulesAsync(const DeleteMaskingRulesRequest& request, const DeleteMaskingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMaskingRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteMaskingRulesOutcomeCallable RdsClient::deleteMaskingRulesCallable(const DeleteMaskingRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMaskingRulesOutcome()>>(
			[this, request]()
			{
			return this->deleteMaskingRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteParameterGroupOutcome RdsClient::deleteParameterGroup(const DeleteParameterGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteParameterGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteParameterGroupOutcome(DeleteParameterGroupResult(outcome.result()));
	else
		return DeleteParameterGroupOutcome(outcome.error());
}

void RdsClient::deleteParameterGroupAsync(const DeleteParameterGroupRequest& request, const DeleteParameterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteParameterGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteParameterGroupOutcomeCallable RdsClient::deleteParameterGroupCallable(const DeleteParameterGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteParameterGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteParameterGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeletePostgresExtensionsOutcome RdsClient::deletePostgresExtensions(const DeletePostgresExtensionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePostgresExtensionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePostgresExtensionsOutcome(DeletePostgresExtensionsResult(outcome.result()));
	else
		return DeletePostgresExtensionsOutcome(outcome.error());
}

void RdsClient::deletePostgresExtensionsAsync(const DeletePostgresExtensionsRequest& request, const DeletePostgresExtensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePostgresExtensions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeletePostgresExtensionsOutcomeCallable RdsClient::deletePostgresExtensionsCallable(const DeletePostgresExtensionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePostgresExtensionsOutcome()>>(
			[this, request]()
			{
			return this->deletePostgresExtensions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteRCClusterNodesOutcome RdsClient::deleteRCClusterNodes(const DeleteRCClusterNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRCClusterNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRCClusterNodesOutcome(DeleteRCClusterNodesResult(outcome.result()));
	else
		return DeleteRCClusterNodesOutcome(outcome.error());
}

void RdsClient::deleteRCClusterNodesAsync(const DeleteRCClusterNodesRequest& request, const DeleteRCClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRCClusterNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteRCClusterNodesOutcomeCallable RdsClient::deleteRCClusterNodesCallable(const DeleteRCClusterNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRCClusterNodesOutcome()>>(
			[this, request]()
			{
			return this->deleteRCClusterNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteRCDeploymentSetOutcome RdsClient::deleteRCDeploymentSet(const DeleteRCDeploymentSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRCDeploymentSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRCDeploymentSetOutcome(DeleteRCDeploymentSetResult(outcome.result()));
	else
		return DeleteRCDeploymentSetOutcome(outcome.error());
}

void RdsClient::deleteRCDeploymentSetAsync(const DeleteRCDeploymentSetRequest& request, const DeleteRCDeploymentSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRCDeploymentSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteRCDeploymentSetOutcomeCallable RdsClient::deleteRCDeploymentSetCallable(const DeleteRCDeploymentSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRCDeploymentSetOutcome()>>(
			[this, request]()
			{
			return this->deleteRCDeploymentSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteRCDiskOutcome RdsClient::deleteRCDisk(const DeleteRCDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRCDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRCDiskOutcome(DeleteRCDiskResult(outcome.result()));
	else
		return DeleteRCDiskOutcome(outcome.error());
}

void RdsClient::deleteRCDiskAsync(const DeleteRCDiskRequest& request, const DeleteRCDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRCDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteRCDiskOutcomeCallable RdsClient::deleteRCDiskCallable(const DeleteRCDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRCDiskOutcome()>>(
			[this, request]()
			{
			return this->deleteRCDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteRCInstanceOutcome RdsClient::deleteRCInstance(const DeleteRCInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRCInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRCInstanceOutcome(DeleteRCInstanceResult(outcome.result()));
	else
		return DeleteRCInstanceOutcome(outcome.error());
}

void RdsClient::deleteRCInstanceAsync(const DeleteRCInstanceRequest& request, const DeleteRCInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRCInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteRCInstanceOutcomeCallable RdsClient::deleteRCInstanceCallable(const DeleteRCInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRCInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteRCInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteRCInstancesOutcome RdsClient::deleteRCInstances(const DeleteRCInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRCInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRCInstancesOutcome(DeleteRCInstancesResult(outcome.result()));
	else
		return DeleteRCInstancesOutcome(outcome.error());
}

void RdsClient::deleteRCInstancesAsync(const DeleteRCInstancesRequest& request, const DeleteRCInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRCInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteRCInstancesOutcomeCallable RdsClient::deleteRCInstancesCallable(const DeleteRCInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRCInstancesOutcome()>>(
			[this, request]()
			{
			return this->deleteRCInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteRCNodePoolOutcome RdsClient::deleteRCNodePool(const DeleteRCNodePoolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRCNodePoolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRCNodePoolOutcome(DeleteRCNodePoolResult(outcome.result()));
	else
		return DeleteRCNodePoolOutcome(outcome.error());
}

void RdsClient::deleteRCNodePoolAsync(const DeleteRCNodePoolRequest& request, const DeleteRCNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRCNodePool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteRCNodePoolOutcomeCallable RdsClient::deleteRCNodePoolCallable(const DeleteRCNodePoolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRCNodePoolOutcome()>>(
			[this, request]()
			{
			return this->deleteRCNodePool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteRCSnapshotOutcome RdsClient::deleteRCSnapshot(const DeleteRCSnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRCSnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRCSnapshotOutcome(DeleteRCSnapshotResult(outcome.result()));
	else
		return DeleteRCSnapshotOutcome(outcome.error());
}

void RdsClient::deleteRCSnapshotAsync(const DeleteRCSnapshotRequest& request, const DeleteRCSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRCSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteRCSnapshotOutcomeCallable RdsClient::deleteRCSnapshotCallable(const DeleteRCSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRCSnapshotOutcome()>>(
			[this, request]()
			{
			return this->deleteRCSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteReplicationLinkOutcome RdsClient::deleteReplicationLink(const DeleteReplicationLinkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteReplicationLinkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteReplicationLinkOutcome(DeleteReplicationLinkResult(outcome.result()));
	else
		return DeleteReplicationLinkOutcome(outcome.error());
}

void RdsClient::deleteReplicationLinkAsync(const DeleteReplicationLinkRequest& request, const DeleteReplicationLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteReplicationLink(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteReplicationLinkOutcomeCallable RdsClient::deleteReplicationLinkCallable(const DeleteReplicationLinkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteReplicationLinkOutcome()>>(
			[this, request]()
			{
			return this->deleteReplicationLink(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteSecretOutcome RdsClient::deleteSecret(const DeleteSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSecretOutcome(DeleteSecretResult(outcome.result()));
	else
		return DeleteSecretOutcome(outcome.error());
}

void RdsClient::deleteSecretAsync(const DeleteSecretRequest& request, const DeleteSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteSecretOutcomeCallable RdsClient::deleteSecretCallable(const DeleteSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSecretOutcome()>>(
			[this, request]()
			{
			return this->deleteSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteSlotOutcome RdsClient::deleteSlot(const DeleteSlotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSlotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSlotOutcome(DeleteSlotResult(outcome.result()));
	else
		return DeleteSlotOutcome(outcome.error());
}

void RdsClient::deleteSlotAsync(const DeleteSlotRequest& request, const DeleteSlotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSlot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteSlotOutcomeCallable RdsClient::deleteSlotCallable(const DeleteSlotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSlotOutcome()>>(
			[this, request]()
			{
			return this->deleteSlot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteUserBackupFileOutcome RdsClient::deleteUserBackupFile(const DeleteUserBackupFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserBackupFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserBackupFileOutcome(DeleteUserBackupFileResult(outcome.result()));
	else
		return DeleteUserBackupFileOutcome(outcome.error());
}

void RdsClient::deleteUserBackupFileAsync(const DeleteUserBackupFileRequest& request, const DeleteUserBackupFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUserBackupFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteUserBackupFileOutcomeCallable RdsClient::deleteUserBackupFileCallable(const DeleteUserBackupFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserBackupFileOutcome()>>(
			[this, request]()
			{
			return this->deleteUserBackupFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescibeImportsFromDatabaseOutcome RdsClient::descibeImportsFromDatabase(const DescibeImportsFromDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescibeImportsFromDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescibeImportsFromDatabaseOutcome(DescibeImportsFromDatabaseResult(outcome.result()));
	else
		return DescibeImportsFromDatabaseOutcome(outcome.error());
}

void RdsClient::descibeImportsFromDatabaseAsync(const DescibeImportsFromDatabaseRequest& request, const DescibeImportsFromDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, descibeImportsFromDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescibeImportsFromDatabaseOutcomeCallable RdsClient::descibeImportsFromDatabaseCallable(const DescibeImportsFromDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescibeImportsFromDatabaseOutcome()>>(
			[this, request]()
			{
			return this->descibeImportsFromDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeADInfoOutcome RdsClient::describeADInfo(const DescribeADInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeADInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeADInfoOutcome(DescribeADInfoResult(outcome.result()));
	else
		return DescribeADInfoOutcome(outcome.error());
}

void RdsClient::describeADInfoAsync(const DescribeADInfoRequest& request, const DescribeADInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeADInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeADInfoOutcomeCallable RdsClient::describeADInfoCallable(const DescribeADInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeADInfoOutcome()>>(
			[this, request]()
			{
			return this->describeADInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeAccountMaskingPrivilegeOutcome RdsClient::describeAccountMaskingPrivilege(const DescribeAccountMaskingPrivilegeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccountMaskingPrivilegeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccountMaskingPrivilegeOutcome(DescribeAccountMaskingPrivilegeResult(outcome.result()));
	else
		return DescribeAccountMaskingPrivilegeOutcome(outcome.error());
}

void RdsClient::describeAccountMaskingPrivilegeAsync(const DescribeAccountMaskingPrivilegeRequest& request, const DescribeAccountMaskingPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccountMaskingPrivilege(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeAccountMaskingPrivilegeOutcomeCallable RdsClient::describeAccountMaskingPrivilegeCallable(const DescribeAccountMaskingPrivilegeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountMaskingPrivilegeOutcome()>>(
			[this, request]()
			{
			return this->describeAccountMaskingPrivilege(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeAccountsOutcome RdsClient::describeAccounts(const DescribeAccountsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccountsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccountsOutcome(DescribeAccountsResult(outcome.result()));
	else
		return DescribeAccountsOutcome(outcome.error());
}

void RdsClient::describeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeAccountsOutcomeCallable RdsClient::describeAccountsCallable(const DescribeAccountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountsOutcome()>>(
			[this, request]()
			{
			return this->describeAccounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeActionEventPolicyOutcome RdsClient::describeActionEventPolicy(const DescribeActionEventPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeActionEventPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeActionEventPolicyOutcome(DescribeActionEventPolicyResult(outcome.result()));
	else
		return DescribeActionEventPolicyOutcome(outcome.error());
}

void RdsClient::describeActionEventPolicyAsync(const DescribeActionEventPolicyRequest& request, const DescribeActionEventPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeActionEventPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeActionEventPolicyOutcomeCallable RdsClient::describeActionEventPolicyCallable(const DescribeActionEventPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeActionEventPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeActionEventPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeActiveOperationTasksOutcome RdsClient::describeActiveOperationTasks(const DescribeActiveOperationTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeActiveOperationTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeActiveOperationTasksOutcome(DescribeActiveOperationTasksResult(outcome.result()));
	else
		return DescribeActiveOperationTasksOutcome(outcome.error());
}

void RdsClient::describeActiveOperationTasksAsync(const DescribeActiveOperationTasksRequest& request, const DescribeActiveOperationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeActiveOperationTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeActiveOperationTasksOutcomeCallable RdsClient::describeActiveOperationTasksCallable(const DescribeActiveOperationTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeActiveOperationTasksOutcome()>>(
			[this, request]()
			{
			return this->describeActiveOperationTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeAllWhitelistTemplateOutcome RdsClient::describeAllWhitelistTemplate(const DescribeAllWhitelistTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAllWhitelistTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAllWhitelistTemplateOutcome(DescribeAllWhitelistTemplateResult(outcome.result()));
	else
		return DescribeAllWhitelistTemplateOutcome(outcome.error());
}

void RdsClient::describeAllWhitelistTemplateAsync(const DescribeAllWhitelistTemplateRequest& request, const DescribeAllWhitelistTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAllWhitelistTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeAllWhitelistTemplateOutcomeCallable RdsClient::describeAllWhitelistTemplateCallable(const DescribeAllWhitelistTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAllWhitelistTemplateOutcome()>>(
			[this, request]()
			{
			return this->describeAllWhitelistTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeAnalyticdbByPrimaryDBInstanceOutcome RdsClient::describeAnalyticdbByPrimaryDBInstance(const DescribeAnalyticdbByPrimaryDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAnalyticdbByPrimaryDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAnalyticdbByPrimaryDBInstanceOutcome(DescribeAnalyticdbByPrimaryDBInstanceResult(outcome.result()));
	else
		return DescribeAnalyticdbByPrimaryDBInstanceOutcome(outcome.error());
}

void RdsClient::describeAnalyticdbByPrimaryDBInstanceAsync(const DescribeAnalyticdbByPrimaryDBInstanceRequest& request, const DescribeAnalyticdbByPrimaryDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAnalyticdbByPrimaryDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeAnalyticdbByPrimaryDBInstanceOutcomeCallable RdsClient::describeAnalyticdbByPrimaryDBInstanceCallable(const DescribeAnalyticdbByPrimaryDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAnalyticdbByPrimaryDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeAnalyticdbByPrimaryDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeAvailableClassesOutcome RdsClient::describeAvailableClasses(const DescribeAvailableClassesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAvailableClassesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAvailableClassesOutcome(DescribeAvailableClassesResult(outcome.result()));
	else
		return DescribeAvailableClassesOutcome(outcome.error());
}

void RdsClient::describeAvailableClassesAsync(const DescribeAvailableClassesRequest& request, const DescribeAvailableClassesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableClasses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeAvailableClassesOutcomeCallable RdsClient::describeAvailableClassesCallable(const DescribeAvailableClassesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableClassesOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableClasses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeAvailableCrossRegionOutcome RdsClient::describeAvailableCrossRegion(const DescribeAvailableCrossRegionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAvailableCrossRegionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAvailableCrossRegionOutcome(DescribeAvailableCrossRegionResult(outcome.result()));
	else
		return DescribeAvailableCrossRegionOutcome(outcome.error());
}

void RdsClient::describeAvailableCrossRegionAsync(const DescribeAvailableCrossRegionRequest& request, const DescribeAvailableCrossRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableCrossRegion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeAvailableCrossRegionOutcomeCallable RdsClient::describeAvailableCrossRegionCallable(const DescribeAvailableCrossRegionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableCrossRegionOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableCrossRegion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeAvailableMetricsOutcome RdsClient::describeAvailableMetrics(const DescribeAvailableMetricsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAvailableMetricsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAvailableMetricsOutcome(DescribeAvailableMetricsResult(outcome.result()));
	else
		return DescribeAvailableMetricsOutcome(outcome.error());
}

void RdsClient::describeAvailableMetricsAsync(const DescribeAvailableMetricsRequest& request, const DescribeAvailableMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableMetrics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeAvailableMetricsOutcomeCallable RdsClient::describeAvailableMetricsCallable(const DescribeAvailableMetricsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableMetricsOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableMetrics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeAvailableRecoveryTimeOutcome RdsClient::describeAvailableRecoveryTime(const DescribeAvailableRecoveryTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAvailableRecoveryTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAvailableRecoveryTimeOutcome(DescribeAvailableRecoveryTimeResult(outcome.result()));
	else
		return DescribeAvailableRecoveryTimeOutcome(outcome.error());
}

void RdsClient::describeAvailableRecoveryTimeAsync(const DescribeAvailableRecoveryTimeRequest& request, const DescribeAvailableRecoveryTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableRecoveryTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeAvailableRecoveryTimeOutcomeCallable RdsClient::describeAvailableRecoveryTimeCallable(const DescribeAvailableRecoveryTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableRecoveryTimeOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableRecoveryTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeAvailableZonesOutcome RdsClient::describeAvailableZones(const DescribeAvailableZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAvailableZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAvailableZonesOutcome(DescribeAvailableZonesResult(outcome.result()));
	else
		return DescribeAvailableZonesOutcome(outcome.error());
}

void RdsClient::describeAvailableZonesAsync(const DescribeAvailableZonesRequest& request, const DescribeAvailableZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeAvailableZonesOutcomeCallable RdsClient::describeAvailableZonesCallable(const DescribeAvailableZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableZonesOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeBackupDatabaseOutcome RdsClient::describeBackupDatabase(const DescribeBackupDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupDatabaseOutcome(DescribeBackupDatabaseResult(outcome.result()));
	else
		return DescribeBackupDatabaseOutcome(outcome.error());
}

void RdsClient::describeBackupDatabaseAsync(const DescribeBackupDatabaseRequest& request, const DescribeBackupDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeBackupDatabaseOutcomeCallable RdsClient::describeBackupDatabaseCallable(const DescribeBackupDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupDatabaseOutcome()>>(
			[this, request]()
			{
			return this->describeBackupDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeBackupPolicyOutcome RdsClient::describeBackupPolicy(const DescribeBackupPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupPolicyOutcome(DescribeBackupPolicyResult(outcome.result()));
	else
		return DescribeBackupPolicyOutcome(outcome.error());
}

void RdsClient::describeBackupPolicyAsync(const DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeBackupPolicyOutcomeCallable RdsClient::describeBackupPolicyCallable(const DescribeBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeBackupTasksOutcome RdsClient::describeBackupTasks(const DescribeBackupTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupTasksOutcome(DescribeBackupTasksResult(outcome.result()));
	else
		return DescribeBackupTasksOutcome(outcome.error());
}

void RdsClient::describeBackupTasksAsync(const DescribeBackupTasksRequest& request, const DescribeBackupTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeBackupTasksOutcomeCallable RdsClient::describeBackupTasksCallable(const DescribeBackupTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupTasksOutcome()>>(
			[this, request]()
			{
			return this->describeBackupTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeBackupsOutcome RdsClient::describeBackups(const DescribeBackupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupsOutcome(DescribeBackupsResult(outcome.result()));
	else
		return DescribeBackupsOutcome(outcome.error());
}

void RdsClient::describeBackupsAsync(const DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeBackupsOutcomeCallable RdsClient::describeBackupsCallable(const DescribeBackupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupsOutcome()>>(
			[this, request]()
			{
			return this->describeBackups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeBinlogFilesOutcome RdsClient::describeBinlogFiles(const DescribeBinlogFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBinlogFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBinlogFilesOutcome(DescribeBinlogFilesResult(outcome.result()));
	else
		return DescribeBinlogFilesOutcome(outcome.error());
}

void RdsClient::describeBinlogFilesAsync(const DescribeBinlogFilesRequest& request, const DescribeBinlogFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBinlogFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeBinlogFilesOutcomeCallable RdsClient::describeBinlogFilesCallable(const DescribeBinlogFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBinlogFilesOutcome()>>(
			[this, request]()
			{
			return this->describeBinlogFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeCharacterSetNameOutcome RdsClient::describeCharacterSetName(const DescribeCharacterSetNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCharacterSetNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCharacterSetNameOutcome(DescribeCharacterSetNameResult(outcome.result()));
	else
		return DescribeCharacterSetNameOutcome(outcome.error());
}

void RdsClient::describeCharacterSetNameAsync(const DescribeCharacterSetNameRequest& request, const DescribeCharacterSetNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCharacterSetName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeCharacterSetNameOutcomeCallable RdsClient::describeCharacterSetNameCallable(const DescribeCharacterSetNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCharacterSetNameOutcome()>>(
			[this, request]()
			{
			return this->describeCharacterSetName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeClassDetailsOutcome RdsClient::describeClassDetails(const DescribeClassDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClassDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClassDetailsOutcome(DescribeClassDetailsResult(outcome.result()));
	else
		return DescribeClassDetailsOutcome(outcome.error());
}

void RdsClient::describeClassDetailsAsync(const DescribeClassDetailsRequest& request, const DescribeClassDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClassDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeClassDetailsOutcomeCallable RdsClient::describeClassDetailsCallable(const DescribeClassDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClassDetailsOutcome()>>(
			[this, request]()
			{
			return this->describeClassDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeCloudMigrationPrecheckResultOutcome RdsClient::describeCloudMigrationPrecheckResult(const DescribeCloudMigrationPrecheckResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCloudMigrationPrecheckResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCloudMigrationPrecheckResultOutcome(DescribeCloudMigrationPrecheckResultResult(outcome.result()));
	else
		return DescribeCloudMigrationPrecheckResultOutcome(outcome.error());
}

void RdsClient::describeCloudMigrationPrecheckResultAsync(const DescribeCloudMigrationPrecheckResultRequest& request, const DescribeCloudMigrationPrecheckResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCloudMigrationPrecheckResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeCloudMigrationPrecheckResultOutcomeCallable RdsClient::describeCloudMigrationPrecheckResultCallable(const DescribeCloudMigrationPrecheckResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCloudMigrationPrecheckResultOutcome()>>(
			[this, request]()
			{
			return this->describeCloudMigrationPrecheckResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeCloudMigrationResultOutcome RdsClient::describeCloudMigrationResult(const DescribeCloudMigrationResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCloudMigrationResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCloudMigrationResultOutcome(DescribeCloudMigrationResultResult(outcome.result()));
	else
		return DescribeCloudMigrationResultOutcome(outcome.error());
}

void RdsClient::describeCloudMigrationResultAsync(const DescribeCloudMigrationResultRequest& request, const DescribeCloudMigrationResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCloudMigrationResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeCloudMigrationResultOutcomeCallable RdsClient::describeCloudMigrationResultCallable(const DescribeCloudMigrationResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCloudMigrationResultOutcome()>>(
			[this, request]()
			{
			return this->describeCloudMigrationResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeCollationTimeZonesOutcome RdsClient::describeCollationTimeZones(const DescribeCollationTimeZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCollationTimeZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCollationTimeZonesOutcome(DescribeCollationTimeZonesResult(outcome.result()));
	else
		return DescribeCollationTimeZonesOutcome(outcome.error());
}

void RdsClient::describeCollationTimeZonesAsync(const DescribeCollationTimeZonesRequest& request, const DescribeCollationTimeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCollationTimeZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeCollationTimeZonesOutcomeCallable RdsClient::describeCollationTimeZonesCallable(const DescribeCollationTimeZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCollationTimeZonesOutcome()>>(
			[this, request]()
			{
			return this->describeCollationTimeZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeComputeBurstConfigOutcome RdsClient::describeComputeBurstConfig(const DescribeComputeBurstConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeComputeBurstConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeComputeBurstConfigOutcome(DescribeComputeBurstConfigResult(outcome.result()));
	else
		return DescribeComputeBurstConfigOutcome(outcome.error());
}

void RdsClient::describeComputeBurstConfigAsync(const DescribeComputeBurstConfigRequest& request, const DescribeComputeBurstConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeComputeBurstConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeComputeBurstConfigOutcomeCallable RdsClient::describeComputeBurstConfigCallable(const DescribeComputeBurstConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeComputeBurstConfigOutcome()>>(
			[this, request]()
			{
			return this->describeComputeBurstConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeCrossBackupMetaListOutcome RdsClient::describeCrossBackupMetaList(const DescribeCrossBackupMetaListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCrossBackupMetaListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCrossBackupMetaListOutcome(DescribeCrossBackupMetaListResult(outcome.result()));
	else
		return DescribeCrossBackupMetaListOutcome(outcome.error());
}

void RdsClient::describeCrossBackupMetaListAsync(const DescribeCrossBackupMetaListRequest& request, const DescribeCrossBackupMetaListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCrossBackupMetaList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeCrossBackupMetaListOutcomeCallable RdsClient::describeCrossBackupMetaListCallable(const DescribeCrossBackupMetaListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCrossBackupMetaListOutcome()>>(
			[this, request]()
			{
			return this->describeCrossBackupMetaList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeCrossRegionBackupDBInstanceOutcome RdsClient::describeCrossRegionBackupDBInstance(const DescribeCrossRegionBackupDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCrossRegionBackupDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCrossRegionBackupDBInstanceOutcome(DescribeCrossRegionBackupDBInstanceResult(outcome.result()));
	else
		return DescribeCrossRegionBackupDBInstanceOutcome(outcome.error());
}

void RdsClient::describeCrossRegionBackupDBInstanceAsync(const DescribeCrossRegionBackupDBInstanceRequest& request, const DescribeCrossRegionBackupDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCrossRegionBackupDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeCrossRegionBackupDBInstanceOutcomeCallable RdsClient::describeCrossRegionBackupDBInstanceCallable(const DescribeCrossRegionBackupDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCrossRegionBackupDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeCrossRegionBackupDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeCrossRegionBackupsOutcome RdsClient::describeCrossRegionBackups(const DescribeCrossRegionBackupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCrossRegionBackupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCrossRegionBackupsOutcome(DescribeCrossRegionBackupsResult(outcome.result()));
	else
		return DescribeCrossRegionBackupsOutcome(outcome.error());
}

void RdsClient::describeCrossRegionBackupsAsync(const DescribeCrossRegionBackupsRequest& request, const DescribeCrossRegionBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCrossRegionBackups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeCrossRegionBackupsOutcomeCallable RdsClient::describeCrossRegionBackupsCallable(const DescribeCrossRegionBackupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCrossRegionBackupsOutcome()>>(
			[this, request]()
			{
			return this->describeCrossRegionBackups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeCrossRegionLogBackupFilesOutcome RdsClient::describeCrossRegionLogBackupFiles(const DescribeCrossRegionLogBackupFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCrossRegionLogBackupFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCrossRegionLogBackupFilesOutcome(DescribeCrossRegionLogBackupFilesResult(outcome.result()));
	else
		return DescribeCrossRegionLogBackupFilesOutcome(outcome.error());
}

void RdsClient::describeCrossRegionLogBackupFilesAsync(const DescribeCrossRegionLogBackupFilesRequest& request, const DescribeCrossRegionLogBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCrossRegionLogBackupFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeCrossRegionLogBackupFilesOutcomeCallable RdsClient::describeCrossRegionLogBackupFilesCallable(const DescribeCrossRegionLogBackupFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCrossRegionLogBackupFilesOutcome()>>(
			[this, request]()
			{
			return this->describeCrossRegionLogBackupFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeCurrentModifyOrderOutcome RdsClient::describeCurrentModifyOrder(const DescribeCurrentModifyOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCurrentModifyOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCurrentModifyOrderOutcome(DescribeCurrentModifyOrderResult(outcome.result()));
	else
		return DescribeCurrentModifyOrderOutcome(outcome.error());
}

void RdsClient::describeCurrentModifyOrderAsync(const DescribeCurrentModifyOrderRequest& request, const DescribeCurrentModifyOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCurrentModifyOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeCurrentModifyOrderOutcomeCallable RdsClient::describeCurrentModifyOrderCallable(const DescribeCurrentModifyOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCurrentModifyOrderOutcome()>>(
			[this, request]()
			{
			return this->describeCurrentModifyOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeCustinsResourceInfoOutcome RdsClient::describeCustinsResourceInfo(const DescribeCustinsResourceInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCustinsResourceInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCustinsResourceInfoOutcome(DescribeCustinsResourceInfoResult(outcome.result()));
	else
		return DescribeCustinsResourceInfoOutcome(outcome.error());
}

void RdsClient::describeCustinsResourceInfoAsync(const DescribeCustinsResourceInfoRequest& request, const DescribeCustinsResourceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustinsResourceInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeCustinsResourceInfoOutcomeCallable RdsClient::describeCustinsResourceInfoCallable(const DescribeCustinsResourceInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustinsResourceInfoOutcome()>>(
			[this, request]()
			{
			return this->describeCustinsResourceInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceAttributeOutcome RdsClient::describeDBInstanceAttribute(const DescribeDBInstanceAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceAttributeOutcome(DescribeDBInstanceAttributeResult(outcome.result()));
	else
		return DescribeDBInstanceAttributeOutcome(outcome.error());
}

void RdsClient::describeDBInstanceAttributeAsync(const DescribeDBInstanceAttributeRequest& request, const DescribeDBInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceAttributeOutcomeCallable RdsClient::describeDBInstanceAttributeCallable(const DescribeDBInstanceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceByTagsOutcome RdsClient::describeDBInstanceByTags(const DescribeDBInstanceByTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceByTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceByTagsOutcome(DescribeDBInstanceByTagsResult(outcome.result()));
	else
		return DescribeDBInstanceByTagsOutcome(outcome.error());
}

void RdsClient::describeDBInstanceByTagsAsync(const DescribeDBInstanceByTagsRequest& request, const DescribeDBInstanceByTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceByTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceByTagsOutcomeCallable RdsClient::describeDBInstanceByTagsCallable(const DescribeDBInstanceByTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceByTagsOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceByTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceConnectivityOutcome RdsClient::describeDBInstanceConnectivity(const DescribeDBInstanceConnectivityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceConnectivityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceConnectivityOutcome(DescribeDBInstanceConnectivityResult(outcome.result()));
	else
		return DescribeDBInstanceConnectivityOutcome(outcome.error());
}

void RdsClient::describeDBInstanceConnectivityAsync(const DescribeDBInstanceConnectivityRequest& request, const DescribeDBInstanceConnectivityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceConnectivity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceConnectivityOutcomeCallable RdsClient::describeDBInstanceConnectivityCallable(const DescribeDBInstanceConnectivityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceConnectivityOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceConnectivity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceDetailOutcome RdsClient::describeDBInstanceDetail(const DescribeDBInstanceDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceDetailOutcome(DescribeDBInstanceDetailResult(outcome.result()));
	else
		return DescribeDBInstanceDetailOutcome(outcome.error());
}

void RdsClient::describeDBInstanceDetailAsync(const DescribeDBInstanceDetailRequest& request, const DescribeDBInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceDetailOutcomeCallable RdsClient::describeDBInstanceDetailCallable(const DescribeDBInstanceDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceDetailOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceEncryptionKeyOutcome RdsClient::describeDBInstanceEncryptionKey(const DescribeDBInstanceEncryptionKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceEncryptionKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceEncryptionKeyOutcome(DescribeDBInstanceEncryptionKeyResult(outcome.result()));
	else
		return DescribeDBInstanceEncryptionKeyOutcome(outcome.error());
}

void RdsClient::describeDBInstanceEncryptionKeyAsync(const DescribeDBInstanceEncryptionKeyRequest& request, const DescribeDBInstanceEncryptionKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceEncryptionKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceEncryptionKeyOutcomeCallable RdsClient::describeDBInstanceEncryptionKeyCallable(const DescribeDBInstanceEncryptionKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceEncryptionKeyOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceEncryptionKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceEndpointsOutcome RdsClient::describeDBInstanceEndpoints(const DescribeDBInstanceEndpointsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceEndpointsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceEndpointsOutcome(DescribeDBInstanceEndpointsResult(outcome.result()));
	else
		return DescribeDBInstanceEndpointsOutcome(outcome.error());
}

void RdsClient::describeDBInstanceEndpointsAsync(const DescribeDBInstanceEndpointsRequest& request, const DescribeDBInstanceEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceEndpoints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceEndpointsOutcomeCallable RdsClient::describeDBInstanceEndpointsCallable(const DescribeDBInstanceEndpointsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceEndpointsOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceEndpoints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceHAConfigOutcome RdsClient::describeDBInstanceHAConfig(const DescribeDBInstanceHAConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceHAConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceHAConfigOutcome(DescribeDBInstanceHAConfigResult(outcome.result()));
	else
		return DescribeDBInstanceHAConfigOutcome(outcome.error());
}

void RdsClient::describeDBInstanceHAConfigAsync(const DescribeDBInstanceHAConfigRequest& request, const DescribeDBInstanceHAConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceHAConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceHAConfigOutcomeCallable RdsClient::describeDBInstanceHAConfigCallable(const DescribeDBInstanceHAConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceHAConfigOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceHAConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceIPArrayListOutcome RdsClient::describeDBInstanceIPArrayList(const DescribeDBInstanceIPArrayListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceIPArrayListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceIPArrayListOutcome(DescribeDBInstanceIPArrayListResult(outcome.result()));
	else
		return DescribeDBInstanceIPArrayListOutcome(outcome.error());
}

void RdsClient::describeDBInstanceIPArrayListAsync(const DescribeDBInstanceIPArrayListRequest& request, const DescribeDBInstanceIPArrayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceIPArrayList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceIPArrayListOutcomeCallable RdsClient::describeDBInstanceIPArrayListCallable(const DescribeDBInstanceIPArrayListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceIPArrayListOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceIPArrayList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceIpHostnameOutcome RdsClient::describeDBInstanceIpHostname(const DescribeDBInstanceIpHostnameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceIpHostnameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceIpHostnameOutcome(DescribeDBInstanceIpHostnameResult(outcome.result()));
	else
		return DescribeDBInstanceIpHostnameOutcome(outcome.error());
}

void RdsClient::describeDBInstanceIpHostnameAsync(const DescribeDBInstanceIpHostnameRequest& request, const DescribeDBInstanceIpHostnameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceIpHostname(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceIpHostnameOutcomeCallable RdsClient::describeDBInstanceIpHostnameCallable(const DescribeDBInstanceIpHostnameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceIpHostnameOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceIpHostname(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceMetricsOutcome RdsClient::describeDBInstanceMetrics(const DescribeDBInstanceMetricsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceMetricsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceMetricsOutcome(DescribeDBInstanceMetricsResult(outcome.result()));
	else
		return DescribeDBInstanceMetricsOutcome(outcome.error());
}

void RdsClient::describeDBInstanceMetricsAsync(const DescribeDBInstanceMetricsRequest& request, const DescribeDBInstanceMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceMetrics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceMetricsOutcomeCallable RdsClient::describeDBInstanceMetricsCallable(const DescribeDBInstanceMetricsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceMetricsOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceMetrics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceMonitorOutcome RdsClient::describeDBInstanceMonitor(const DescribeDBInstanceMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceMonitorOutcome(DescribeDBInstanceMonitorResult(outcome.result()));
	else
		return DescribeDBInstanceMonitorOutcome(outcome.error());
}

void RdsClient::describeDBInstanceMonitorAsync(const DescribeDBInstanceMonitorRequest& request, const DescribeDBInstanceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceMonitorOutcomeCallable RdsClient::describeDBInstanceMonitorCallable(const DescribeDBInstanceMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceMonitorOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceNetInfoOutcome RdsClient::describeDBInstanceNetInfo(const DescribeDBInstanceNetInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceNetInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceNetInfoOutcome(DescribeDBInstanceNetInfoResult(outcome.result()));
	else
		return DescribeDBInstanceNetInfoOutcome(outcome.error());
}

void RdsClient::describeDBInstanceNetInfoAsync(const DescribeDBInstanceNetInfoRequest& request, const DescribeDBInstanceNetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceNetInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceNetInfoOutcomeCallable RdsClient::describeDBInstanceNetInfoCallable(const DescribeDBInstanceNetInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceNetInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceNetInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceNetInfoForChannelOutcome RdsClient::describeDBInstanceNetInfoForChannel(const DescribeDBInstanceNetInfoForChannelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceNetInfoForChannelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceNetInfoForChannelOutcome(DescribeDBInstanceNetInfoForChannelResult(outcome.result()));
	else
		return DescribeDBInstanceNetInfoForChannelOutcome(outcome.error());
}

void RdsClient::describeDBInstanceNetInfoForChannelAsync(const DescribeDBInstanceNetInfoForChannelRequest& request, const DescribeDBInstanceNetInfoForChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceNetInfoForChannel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceNetInfoForChannelOutcomeCallable RdsClient::describeDBInstanceNetInfoForChannelCallable(const DescribeDBInstanceNetInfoForChannelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceNetInfoForChannelOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceNetInfoForChannel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstancePerformanceOutcome RdsClient::describeDBInstancePerformance(const DescribeDBInstancePerformanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstancePerformanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstancePerformanceOutcome(DescribeDBInstancePerformanceResult(outcome.result()));
	else
		return DescribeDBInstancePerformanceOutcome(outcome.error());
}

void RdsClient::describeDBInstancePerformanceAsync(const DescribeDBInstancePerformanceRequest& request, const DescribeDBInstancePerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstancePerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstancePerformanceOutcomeCallable RdsClient::describeDBInstancePerformanceCallable(const DescribeDBInstancePerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstancePerformanceOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstancePerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstancePromoteActivityOutcome RdsClient::describeDBInstancePromoteActivity(const DescribeDBInstancePromoteActivityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstancePromoteActivityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstancePromoteActivityOutcome(DescribeDBInstancePromoteActivityResult(outcome.result()));
	else
		return DescribeDBInstancePromoteActivityOutcome(outcome.error());
}

void RdsClient::describeDBInstancePromoteActivityAsync(const DescribeDBInstancePromoteActivityRequest& request, const DescribeDBInstancePromoteActivityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstancePromoteActivity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstancePromoteActivityOutcomeCallable RdsClient::describeDBInstancePromoteActivityCallable(const DescribeDBInstancePromoteActivityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstancePromoteActivityOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstancePromoteActivity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceProxyConfigurationOutcome RdsClient::describeDBInstanceProxyConfiguration(const DescribeDBInstanceProxyConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceProxyConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceProxyConfigurationOutcome(DescribeDBInstanceProxyConfigurationResult(outcome.result()));
	else
		return DescribeDBInstanceProxyConfigurationOutcome(outcome.error());
}

void RdsClient::describeDBInstanceProxyConfigurationAsync(const DescribeDBInstanceProxyConfigurationRequest& request, const DescribeDBInstanceProxyConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceProxyConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceProxyConfigurationOutcomeCallable RdsClient::describeDBInstanceProxyConfigurationCallable(const DescribeDBInstanceProxyConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceProxyConfigurationOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceProxyConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceReplicationOutcome RdsClient::describeDBInstanceReplication(const DescribeDBInstanceReplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceReplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceReplicationOutcome(DescribeDBInstanceReplicationResult(outcome.result()));
	else
		return DescribeDBInstanceReplicationOutcome(outcome.error());
}

void RdsClient::describeDBInstanceReplicationAsync(const DescribeDBInstanceReplicationRequest& request, const DescribeDBInstanceReplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceReplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceReplicationOutcomeCallable RdsClient::describeDBInstanceReplicationCallable(const DescribeDBInstanceReplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceReplicationOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceReplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceSSLOutcome RdsClient::describeDBInstanceSSL(const DescribeDBInstanceSSLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceSSLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceSSLOutcome(DescribeDBInstanceSSLResult(outcome.result()));
	else
		return DescribeDBInstanceSSLOutcome(outcome.error());
}

void RdsClient::describeDBInstanceSSLAsync(const DescribeDBInstanceSSLRequest& request, const DescribeDBInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceSSL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceSSLOutcomeCallable RdsClient::describeDBInstanceSSLCallable(const DescribeDBInstanceSSLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceSSLOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceSSL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceSecurityGroupRuleOutcome RdsClient::describeDBInstanceSecurityGroupRule(const DescribeDBInstanceSecurityGroupRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceSecurityGroupRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceSecurityGroupRuleOutcome(DescribeDBInstanceSecurityGroupRuleResult(outcome.result()));
	else
		return DescribeDBInstanceSecurityGroupRuleOutcome(outcome.error());
}

void RdsClient::describeDBInstanceSecurityGroupRuleAsync(const DescribeDBInstanceSecurityGroupRuleRequest& request, const DescribeDBInstanceSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceSecurityGroupRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceSecurityGroupRuleOutcomeCallable RdsClient::describeDBInstanceSecurityGroupRuleCallable(const DescribeDBInstanceSecurityGroupRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceSecurityGroupRuleOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceSecurityGroupRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceTDEOutcome RdsClient::describeDBInstanceTDE(const DescribeDBInstanceTDERequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceTDEOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceTDEOutcome(DescribeDBInstanceTDEResult(outcome.result()));
	else
		return DescribeDBInstanceTDEOutcome(outcome.error());
}

void RdsClient::describeDBInstanceTDEAsync(const DescribeDBInstanceTDERequest& request, const DescribeDBInstanceTDEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceTDE(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceTDEOutcomeCallable RdsClient::describeDBInstanceTDECallable(const DescribeDBInstanceTDERequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceTDEOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceTDE(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstancesOutcome RdsClient::describeDBInstances(const DescribeDBInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstancesOutcome(DescribeDBInstancesResult(outcome.result()));
	else
		return DescribeDBInstancesOutcome(outcome.error());
}

void RdsClient::describeDBInstancesAsync(const DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstancesOutcomeCallable RdsClient::describeDBInstancesCallable(const DescribeDBInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstancesAsCsvOutcome RdsClient::describeDBInstancesAsCsv(const DescribeDBInstancesAsCsvRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstancesAsCsvOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstancesAsCsvOutcome(DescribeDBInstancesAsCsvResult(outcome.result()));
	else
		return DescribeDBInstancesAsCsvOutcome(outcome.error());
}

void RdsClient::describeDBInstancesAsCsvAsync(const DescribeDBInstancesAsCsvRequest& request, const DescribeDBInstancesAsCsvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstancesAsCsv(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstancesAsCsvOutcomeCallable RdsClient::describeDBInstancesAsCsvCallable(const DescribeDBInstancesAsCsvRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstancesAsCsvOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstancesAsCsv(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstancesByExpireTimeOutcome RdsClient::describeDBInstancesByExpireTime(const DescribeDBInstancesByExpireTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstancesByExpireTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstancesByExpireTimeOutcome(DescribeDBInstancesByExpireTimeResult(outcome.result()));
	else
		return DescribeDBInstancesByExpireTimeOutcome(outcome.error());
}

void RdsClient::describeDBInstancesByExpireTimeAsync(const DescribeDBInstancesByExpireTimeRequest& request, const DescribeDBInstancesByExpireTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstancesByExpireTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstancesByExpireTimeOutcomeCallable RdsClient::describeDBInstancesByExpireTimeCallable(const DescribeDBInstancesByExpireTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstancesByExpireTimeOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstancesByExpireTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstancesByPerformanceOutcome RdsClient::describeDBInstancesByPerformance(const DescribeDBInstancesByPerformanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstancesByPerformanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstancesByPerformanceOutcome(DescribeDBInstancesByPerformanceResult(outcome.result()));
	else
		return DescribeDBInstancesByPerformanceOutcome(outcome.error());
}

void RdsClient::describeDBInstancesByPerformanceAsync(const DescribeDBInstancesByPerformanceRequest& request, const DescribeDBInstancesByPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstancesByPerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstancesByPerformanceOutcomeCallable RdsClient::describeDBInstancesByPerformanceCallable(const DescribeDBInstancesByPerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstancesByPerformanceOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstancesByPerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstancesForCloneOutcome RdsClient::describeDBInstancesForClone(const DescribeDBInstancesForCloneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstancesForCloneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstancesForCloneOutcome(DescribeDBInstancesForCloneResult(outcome.result()));
	else
		return DescribeDBInstancesForCloneOutcome(outcome.error());
}

void RdsClient::describeDBInstancesForCloneAsync(const DescribeDBInstancesForCloneRequest& request, const DescribeDBInstancesForCloneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstancesForClone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstancesForCloneOutcomeCallable RdsClient::describeDBInstancesForCloneCallable(const DescribeDBInstancesForCloneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstancesForCloneOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstancesForClone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBMiniEngineVersionsOutcome RdsClient::describeDBMiniEngineVersions(const DescribeDBMiniEngineVersionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBMiniEngineVersionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBMiniEngineVersionsOutcome(DescribeDBMiniEngineVersionsResult(outcome.result()));
	else
		return DescribeDBMiniEngineVersionsOutcome(outcome.error());
}

void RdsClient::describeDBMiniEngineVersionsAsync(const DescribeDBMiniEngineVersionsRequest& request, const DescribeDBMiniEngineVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBMiniEngineVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBMiniEngineVersionsOutcomeCallable RdsClient::describeDBMiniEngineVersionsCallable(const DescribeDBMiniEngineVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBMiniEngineVersionsOutcome()>>(
			[this, request]()
			{
			return this->describeDBMiniEngineVersions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBProxyOutcome RdsClient::describeDBProxy(const DescribeDBProxyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBProxyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBProxyOutcome(DescribeDBProxyResult(outcome.result()));
	else
		return DescribeDBProxyOutcome(outcome.error());
}

void RdsClient::describeDBProxyAsync(const DescribeDBProxyRequest& request, const DescribeDBProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBProxy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBProxyOutcomeCallable RdsClient::describeDBProxyCallable(const DescribeDBProxyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBProxyOutcome()>>(
			[this, request]()
			{
			return this->describeDBProxy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBProxyEndpointOutcome RdsClient::describeDBProxyEndpoint(const DescribeDBProxyEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBProxyEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBProxyEndpointOutcome(DescribeDBProxyEndpointResult(outcome.result()));
	else
		return DescribeDBProxyEndpointOutcome(outcome.error());
}

void RdsClient::describeDBProxyEndpointAsync(const DescribeDBProxyEndpointRequest& request, const DescribeDBProxyEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBProxyEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBProxyEndpointOutcomeCallable RdsClient::describeDBProxyEndpointCallable(const DescribeDBProxyEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBProxyEndpointOutcome()>>(
			[this, request]()
			{
			return this->describeDBProxyEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBProxyPerformanceOutcome RdsClient::describeDBProxyPerformance(const DescribeDBProxyPerformanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBProxyPerformanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBProxyPerformanceOutcome(DescribeDBProxyPerformanceResult(outcome.result()));
	else
		return DescribeDBProxyPerformanceOutcome(outcome.error());
}

void RdsClient::describeDBProxyPerformanceAsync(const DescribeDBProxyPerformanceRequest& request, const DescribeDBProxyPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBProxyPerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBProxyPerformanceOutcomeCallable RdsClient::describeDBProxyPerformanceCallable(const DescribeDBProxyPerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBProxyPerformanceOutcome()>>(
			[this, request]()
			{
			return this->describeDBProxyPerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDTCSecurityIpHostsForSQLServerOutcome RdsClient::describeDTCSecurityIpHostsForSQLServer(const DescribeDTCSecurityIpHostsForSQLServerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDTCSecurityIpHostsForSQLServerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDTCSecurityIpHostsForSQLServerOutcome(DescribeDTCSecurityIpHostsForSQLServerResult(outcome.result()));
	else
		return DescribeDTCSecurityIpHostsForSQLServerOutcome(outcome.error());
}

void RdsClient::describeDTCSecurityIpHostsForSQLServerAsync(const DescribeDTCSecurityIpHostsForSQLServerRequest& request, const DescribeDTCSecurityIpHostsForSQLServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDTCSecurityIpHostsForSQLServer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDTCSecurityIpHostsForSQLServerOutcomeCallable RdsClient::describeDTCSecurityIpHostsForSQLServerCallable(const DescribeDTCSecurityIpHostsForSQLServerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDTCSecurityIpHostsForSQLServerOutcome()>>(
			[this, request]()
			{
			return this->describeDTCSecurityIpHostsForSQLServer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDatabasesOutcome RdsClient::describeDatabases(const DescribeDatabasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDatabasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDatabasesOutcome(DescribeDatabasesResult(outcome.result()));
	else
		return DescribeDatabasesOutcome(outcome.error());
}

void RdsClient::describeDatabasesAsync(const DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDatabases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDatabasesOutcomeCallable RdsClient::describeDatabasesCallable(const DescribeDatabasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDatabasesOutcome()>>(
			[this, request]()
			{
			return this->describeDatabases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDedicatedHostGroupsOutcome RdsClient::describeDedicatedHostGroups(const DescribeDedicatedHostGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDedicatedHostGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDedicatedHostGroupsOutcome(DescribeDedicatedHostGroupsResult(outcome.result()));
	else
		return DescribeDedicatedHostGroupsOutcome(outcome.error());
}

void RdsClient::describeDedicatedHostGroupsAsync(const DescribeDedicatedHostGroupsRequest& request, const DescribeDedicatedHostGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDedicatedHostGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDedicatedHostGroupsOutcomeCallable RdsClient::describeDedicatedHostGroupsCallable(const DescribeDedicatedHostGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDedicatedHostGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeDedicatedHostGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDedicatedHostsOutcome RdsClient::describeDedicatedHosts(const DescribeDedicatedHostsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDedicatedHostsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDedicatedHostsOutcome(DescribeDedicatedHostsResult(outcome.result()));
	else
		return DescribeDedicatedHostsOutcome(outcome.error());
}

void RdsClient::describeDedicatedHostsAsync(const DescribeDedicatedHostsRequest& request, const DescribeDedicatedHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDedicatedHosts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDedicatedHostsOutcomeCallable RdsClient::describeDedicatedHostsCallable(const DescribeDedicatedHostsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDedicatedHostsOutcome()>>(
			[this, request]()
			{
			return this->describeDedicatedHosts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDetachedBackupsOutcome RdsClient::describeDetachedBackups(const DescribeDetachedBackupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDetachedBackupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDetachedBackupsOutcome(DescribeDetachedBackupsResult(outcome.result()));
	else
		return DescribeDetachedBackupsOutcome(outcome.error());
}

void RdsClient::describeDetachedBackupsAsync(const DescribeDetachedBackupsRequest& request, const DescribeDetachedBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDetachedBackups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDetachedBackupsOutcomeCallable RdsClient::describeDetachedBackupsCallable(const DescribeDetachedBackupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDetachedBackupsOutcome()>>(
			[this, request]()
			{
			return this->describeDetachedBackups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDiagnosticReportListOutcome RdsClient::describeDiagnosticReportList(const DescribeDiagnosticReportListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDiagnosticReportListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDiagnosticReportListOutcome(DescribeDiagnosticReportListResult(outcome.result()));
	else
		return DescribeDiagnosticReportListOutcome(outcome.error());
}

void RdsClient::describeDiagnosticReportListAsync(const DescribeDiagnosticReportListRequest& request, const DescribeDiagnosticReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDiagnosticReportList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDiagnosticReportListOutcomeCallable RdsClient::describeDiagnosticReportListCallable(const DescribeDiagnosticReportListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDiagnosticReportListOutcome()>>(
			[this, request]()
			{
			return this->describeDiagnosticReportList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeErrorLogsOutcome RdsClient::describeErrorLogs(const DescribeErrorLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeErrorLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeErrorLogsOutcome(DescribeErrorLogsResult(outcome.result()));
	else
		return DescribeErrorLogsOutcome(outcome.error());
}

void RdsClient::describeErrorLogsAsync(const DescribeErrorLogsRequest& request, const DescribeErrorLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeErrorLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeErrorLogsOutcomeCallable RdsClient::describeErrorLogsCallable(const DescribeErrorLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeErrorLogsOutcome()>>(
			[this, request]()
			{
			return this->describeErrorLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeEventsOutcome RdsClient::describeEvents(const DescribeEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEventsOutcome(DescribeEventsResult(outcome.result()));
	else
		return DescribeEventsOutcome(outcome.error());
}

void RdsClient::describeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeEventsOutcomeCallable RdsClient::describeEventsCallable(const DescribeEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEventsOutcome()>>(
			[this, request]()
			{
			return this->describeEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeGadInstancesOutcome RdsClient::describeGadInstances(const DescribeGadInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGadInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGadInstancesOutcome(DescribeGadInstancesResult(outcome.result()));
	else
		return DescribeGadInstancesOutcome(outcome.error());
}

void RdsClient::describeGadInstancesAsync(const DescribeGadInstancesRequest& request, const DescribeGadInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGadInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeGadInstancesOutcomeCallable RdsClient::describeGadInstancesCallable(const DescribeGadInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGadInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeGadInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeHADiagnoseConfigOutcome RdsClient::describeHADiagnoseConfig(const DescribeHADiagnoseConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHADiagnoseConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHADiagnoseConfigOutcome(DescribeHADiagnoseConfigResult(outcome.result()));
	else
		return DescribeHADiagnoseConfigOutcome(outcome.error());
}

void RdsClient::describeHADiagnoseConfigAsync(const DescribeHADiagnoseConfigRequest& request, const DescribeHADiagnoseConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHADiagnoseConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeHADiagnoseConfigOutcomeCallable RdsClient::describeHADiagnoseConfigCallable(const DescribeHADiagnoseConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHADiagnoseConfigOutcome()>>(
			[this, request]()
			{
			return this->describeHADiagnoseConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeHASwitchConfigOutcome RdsClient::describeHASwitchConfig(const DescribeHASwitchConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHASwitchConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHASwitchConfigOutcome(DescribeHASwitchConfigResult(outcome.result()));
	else
		return DescribeHASwitchConfigOutcome(outcome.error());
}

void RdsClient::describeHASwitchConfigAsync(const DescribeHASwitchConfigRequest& request, const DescribeHASwitchConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHASwitchConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeHASwitchConfigOutcomeCallable RdsClient::describeHASwitchConfigCallable(const DescribeHASwitchConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHASwitchConfigOutcome()>>(
			[this, request]()
			{
			return this->describeHASwitchConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeHistoryEventsOutcome RdsClient::describeHistoryEvents(const DescribeHistoryEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHistoryEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHistoryEventsOutcome(DescribeHistoryEventsResult(outcome.result()));
	else
		return DescribeHistoryEventsOutcome(outcome.error());
}

void RdsClient::describeHistoryEventsAsync(const DescribeHistoryEventsRequest& request, const DescribeHistoryEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHistoryEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeHistoryEventsOutcomeCallable RdsClient::describeHistoryEventsCallable(const DescribeHistoryEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHistoryEventsOutcome()>>(
			[this, request]()
			{
			return this->describeHistoryEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeHistoryEventsStatOutcome RdsClient::describeHistoryEventsStat(const DescribeHistoryEventsStatRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHistoryEventsStatOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHistoryEventsStatOutcome(DescribeHistoryEventsStatResult(outcome.result()));
	else
		return DescribeHistoryEventsStatOutcome(outcome.error());
}

void RdsClient::describeHistoryEventsStatAsync(const DescribeHistoryEventsStatRequest& request, const DescribeHistoryEventsStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHistoryEventsStat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeHistoryEventsStatOutcomeCallable RdsClient::describeHistoryEventsStatCallable(const DescribeHistoryEventsStatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHistoryEventsStatOutcome()>>(
			[this, request]()
			{
			return this->describeHistoryEventsStat(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeHistoryTasksOutcome RdsClient::describeHistoryTasks(const DescribeHistoryTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHistoryTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHistoryTasksOutcome(DescribeHistoryTasksResult(outcome.result()));
	else
		return DescribeHistoryTasksOutcome(outcome.error());
}

void RdsClient::describeHistoryTasksAsync(const DescribeHistoryTasksRequest& request, const DescribeHistoryTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHistoryTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeHistoryTasksOutcomeCallable RdsClient::describeHistoryTasksCallable(const DescribeHistoryTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHistoryTasksOutcome()>>(
			[this, request]()
			{
			return this->describeHistoryTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeHistoryTasksStatOutcome RdsClient::describeHistoryTasksStat(const DescribeHistoryTasksStatRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHistoryTasksStatOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHistoryTasksStatOutcome(DescribeHistoryTasksStatResult(outcome.result()));
	else
		return DescribeHistoryTasksStatOutcome(outcome.error());
}

void RdsClient::describeHistoryTasksStatAsync(const DescribeHistoryTasksStatRequest& request, const DescribeHistoryTasksStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHistoryTasksStat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeHistoryTasksStatOutcomeCallable RdsClient::describeHistoryTasksStatCallable(const DescribeHistoryTasksStatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHistoryTasksStatOutcome()>>(
			[this, request]()
			{
			return this->describeHistoryTasksStat(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeHostGroupElasticStrategyParametersOutcome RdsClient::describeHostGroupElasticStrategyParameters(const DescribeHostGroupElasticStrategyParametersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHostGroupElasticStrategyParametersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHostGroupElasticStrategyParametersOutcome(DescribeHostGroupElasticStrategyParametersResult(outcome.result()));
	else
		return DescribeHostGroupElasticStrategyParametersOutcome(outcome.error());
}

void RdsClient::describeHostGroupElasticStrategyParametersAsync(const DescribeHostGroupElasticStrategyParametersRequest& request, const DescribeHostGroupElasticStrategyParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHostGroupElasticStrategyParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeHostGroupElasticStrategyParametersOutcomeCallable RdsClient::describeHostGroupElasticStrategyParametersCallable(const DescribeHostGroupElasticStrategyParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHostGroupElasticStrategyParametersOutcome()>>(
			[this, request]()
			{
			return this->describeHostGroupElasticStrategyParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeHostWebShellOutcome RdsClient::describeHostWebShell(const DescribeHostWebShellRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHostWebShellOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHostWebShellOutcome(DescribeHostWebShellResult(outcome.result()));
	else
		return DescribeHostWebShellOutcome(outcome.error());
}

void RdsClient::describeHostWebShellAsync(const DescribeHostWebShellRequest& request, const DescribeHostWebShellAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHostWebShell(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeHostWebShellOutcomeCallable RdsClient::describeHostWebShellCallable(const DescribeHostWebShellRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHostWebShellOutcome()>>(
			[this, request]()
			{
			return this->describeHostWebShell(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeInstanceAutoRenewalAttributeOutcome RdsClient::describeInstanceAutoRenewalAttribute(const DescribeInstanceAutoRenewalAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceAutoRenewalAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceAutoRenewalAttributeOutcome(DescribeInstanceAutoRenewalAttributeResult(outcome.result()));
	else
		return DescribeInstanceAutoRenewalAttributeOutcome(outcome.error());
}

void RdsClient::describeInstanceAutoRenewalAttributeAsync(const DescribeInstanceAutoRenewalAttributeRequest& request, const DescribeInstanceAutoRenewalAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceAutoRenewalAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeInstanceAutoRenewalAttributeOutcomeCallable RdsClient::describeInstanceAutoRenewalAttributeCallable(const DescribeInstanceAutoRenewalAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceAutoRenewalAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceAutoRenewalAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeInstanceCrossBackupPolicyOutcome RdsClient::describeInstanceCrossBackupPolicy(const DescribeInstanceCrossBackupPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceCrossBackupPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceCrossBackupPolicyOutcome(DescribeInstanceCrossBackupPolicyResult(outcome.result()));
	else
		return DescribeInstanceCrossBackupPolicyOutcome(outcome.error());
}

void RdsClient::describeInstanceCrossBackupPolicyAsync(const DescribeInstanceCrossBackupPolicyRequest& request, const DescribeInstanceCrossBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceCrossBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeInstanceCrossBackupPolicyOutcomeCallable RdsClient::describeInstanceCrossBackupPolicyCallable(const DescribeInstanceCrossBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceCrossBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceCrossBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeInstanceKeywordsOutcome RdsClient::describeInstanceKeywords(const DescribeInstanceKeywordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceKeywordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceKeywordsOutcome(DescribeInstanceKeywordsResult(outcome.result()));
	else
		return DescribeInstanceKeywordsOutcome(outcome.error());
}

void RdsClient::describeInstanceKeywordsAsync(const DescribeInstanceKeywordsRequest& request, const DescribeInstanceKeywordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceKeywords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeInstanceKeywordsOutcomeCallable RdsClient::describeInstanceKeywordsCallable(const DescribeInstanceKeywordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceKeywordsOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceKeywords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeInstanceLinkedWhitelistTemplateOutcome RdsClient::describeInstanceLinkedWhitelistTemplate(const DescribeInstanceLinkedWhitelistTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceLinkedWhitelistTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceLinkedWhitelistTemplateOutcome(DescribeInstanceLinkedWhitelistTemplateResult(outcome.result()));
	else
		return DescribeInstanceLinkedWhitelistTemplateOutcome(outcome.error());
}

void RdsClient::describeInstanceLinkedWhitelistTemplateAsync(const DescribeInstanceLinkedWhitelistTemplateRequest& request, const DescribeInstanceLinkedWhitelistTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceLinkedWhitelistTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeInstanceLinkedWhitelistTemplateOutcomeCallable RdsClient::describeInstanceLinkedWhitelistTemplateCallable(const DescribeInstanceLinkedWhitelistTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceLinkedWhitelistTemplateOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceLinkedWhitelistTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeKmsAssociateResourcesOutcome RdsClient::describeKmsAssociateResources(const DescribeKmsAssociateResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeKmsAssociateResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeKmsAssociateResourcesOutcome(DescribeKmsAssociateResourcesResult(outcome.result()));
	else
		return DescribeKmsAssociateResourcesOutcome(outcome.error());
}

void RdsClient::describeKmsAssociateResourcesAsync(const DescribeKmsAssociateResourcesRequest& request, const DescribeKmsAssociateResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeKmsAssociateResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeKmsAssociateResourcesOutcomeCallable RdsClient::describeKmsAssociateResourcesCallable(const DescribeKmsAssociateResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeKmsAssociateResourcesOutcome()>>(
			[this, request]()
			{
			return this->describeKmsAssociateResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeLocalAvailableRecoveryTimeOutcome RdsClient::describeLocalAvailableRecoveryTime(const DescribeLocalAvailableRecoveryTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLocalAvailableRecoveryTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLocalAvailableRecoveryTimeOutcome(DescribeLocalAvailableRecoveryTimeResult(outcome.result()));
	else
		return DescribeLocalAvailableRecoveryTimeOutcome(outcome.error());
}

void RdsClient::describeLocalAvailableRecoveryTimeAsync(const DescribeLocalAvailableRecoveryTimeRequest& request, const DescribeLocalAvailableRecoveryTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLocalAvailableRecoveryTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeLocalAvailableRecoveryTimeOutcomeCallable RdsClient::describeLocalAvailableRecoveryTimeCallable(const DescribeLocalAvailableRecoveryTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLocalAvailableRecoveryTimeOutcome()>>(
			[this, request]()
			{
			return this->describeLocalAvailableRecoveryTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeLogBackupFilesOutcome RdsClient::describeLogBackupFiles(const DescribeLogBackupFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLogBackupFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLogBackupFilesOutcome(DescribeLogBackupFilesResult(outcome.result()));
	else
		return DescribeLogBackupFilesOutcome(outcome.error());
}

void RdsClient::describeLogBackupFilesAsync(const DescribeLogBackupFilesRequest& request, const DescribeLogBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLogBackupFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeLogBackupFilesOutcomeCallable RdsClient::describeLogBackupFilesCallable(const DescribeLogBackupFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLogBackupFilesOutcome()>>(
			[this, request]()
			{
			return this->describeLogBackupFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeMarketingActivityOutcome RdsClient::describeMarketingActivity(const DescribeMarketingActivityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMarketingActivityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMarketingActivityOutcome(DescribeMarketingActivityResult(outcome.result()));
	else
		return DescribeMarketingActivityOutcome(outcome.error());
}

void RdsClient::describeMarketingActivityAsync(const DescribeMarketingActivityRequest& request, const DescribeMarketingActivityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMarketingActivity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeMarketingActivityOutcomeCallable RdsClient::describeMarketingActivityCallable(const DescribeMarketingActivityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMarketingActivityOutcome()>>(
			[this, request]()
			{
			return this->describeMarketingActivity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeMaskingRulesOutcome RdsClient::describeMaskingRules(const DescribeMaskingRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMaskingRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMaskingRulesOutcome(DescribeMaskingRulesResult(outcome.result()));
	else
		return DescribeMaskingRulesOutcome(outcome.error());
}

void RdsClient::describeMaskingRulesAsync(const DescribeMaskingRulesRequest& request, const DescribeMaskingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMaskingRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeMaskingRulesOutcomeCallable RdsClient::describeMaskingRulesCallable(const DescribeMaskingRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMaskingRulesOutcome()>>(
			[this, request]()
			{
			return this->describeMaskingRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeMetaListOutcome RdsClient::describeMetaList(const DescribeMetaListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMetaListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMetaListOutcome(DescribeMetaListResult(outcome.result()));
	else
		return DescribeMetaListOutcome(outcome.error());
}

void RdsClient::describeMetaListAsync(const DescribeMetaListRequest& request, const DescribeMetaListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMetaList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeMetaListOutcomeCallable RdsClient::describeMetaListCallable(const DescribeMetaListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMetaListOutcome()>>(
			[this, request]()
			{
			return this->describeMetaList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeMigrateTaskByIdOutcome RdsClient::describeMigrateTaskById(const DescribeMigrateTaskByIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMigrateTaskByIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMigrateTaskByIdOutcome(DescribeMigrateTaskByIdResult(outcome.result()));
	else
		return DescribeMigrateTaskByIdOutcome(outcome.error());
}

void RdsClient::describeMigrateTaskByIdAsync(const DescribeMigrateTaskByIdRequest& request, const DescribeMigrateTaskByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMigrateTaskById(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeMigrateTaskByIdOutcomeCallable RdsClient::describeMigrateTaskByIdCallable(const DescribeMigrateTaskByIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMigrateTaskByIdOutcome()>>(
			[this, request]()
			{
			return this->describeMigrateTaskById(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeMigrateTasksOutcome RdsClient::describeMigrateTasks(const DescribeMigrateTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMigrateTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMigrateTasksOutcome(DescribeMigrateTasksResult(outcome.result()));
	else
		return DescribeMigrateTasksOutcome(outcome.error());
}

void RdsClient::describeMigrateTasksAsync(const DescribeMigrateTasksRequest& request, const DescribeMigrateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMigrateTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeMigrateTasksOutcomeCallable RdsClient::describeMigrateTasksCallable(const DescribeMigrateTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMigrateTasksOutcome()>>(
			[this, request]()
			{
			return this->describeMigrateTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeModifyPGHbaConfigLogOutcome RdsClient::describeModifyPGHbaConfigLog(const DescribeModifyPGHbaConfigLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeModifyPGHbaConfigLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeModifyPGHbaConfigLogOutcome(DescribeModifyPGHbaConfigLogResult(outcome.result()));
	else
		return DescribeModifyPGHbaConfigLogOutcome(outcome.error());
}

void RdsClient::describeModifyPGHbaConfigLogAsync(const DescribeModifyPGHbaConfigLogRequest& request, const DescribeModifyPGHbaConfigLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeModifyPGHbaConfigLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeModifyPGHbaConfigLogOutcomeCallable RdsClient::describeModifyPGHbaConfigLogCallable(const DescribeModifyPGHbaConfigLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeModifyPGHbaConfigLogOutcome()>>(
			[this, request]()
			{
			return this->describeModifyPGHbaConfigLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeModifyParameterLogOutcome RdsClient::describeModifyParameterLog(const DescribeModifyParameterLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeModifyParameterLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeModifyParameterLogOutcome(DescribeModifyParameterLogResult(outcome.result()));
	else
		return DescribeModifyParameterLogOutcome(outcome.error());
}

void RdsClient::describeModifyParameterLogAsync(const DescribeModifyParameterLogRequest& request, const DescribeModifyParameterLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeModifyParameterLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeModifyParameterLogOutcomeCallable RdsClient::describeModifyParameterLogCallable(const DescribeModifyParameterLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeModifyParameterLogOutcome()>>(
			[this, request]()
			{
			return this->describeModifyParameterLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeOssDownloadsOutcome RdsClient::describeOssDownloads(const DescribeOssDownloadsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOssDownloadsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOssDownloadsOutcome(DescribeOssDownloadsResult(outcome.result()));
	else
		return DescribeOssDownloadsOutcome(outcome.error());
}

void RdsClient::describeOssDownloadsAsync(const DescribeOssDownloadsRequest& request, const DescribeOssDownloadsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOssDownloads(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeOssDownloadsOutcomeCallable RdsClient::describeOssDownloadsCallable(const DescribeOssDownloadsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOssDownloadsOutcome()>>(
			[this, request]()
			{
			return this->describeOssDownloads(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribePGHbaConfigOutcome RdsClient::describePGHbaConfig(const DescribePGHbaConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePGHbaConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePGHbaConfigOutcome(DescribePGHbaConfigResult(outcome.result()));
	else
		return DescribePGHbaConfigOutcome(outcome.error());
}

void RdsClient::describePGHbaConfigAsync(const DescribePGHbaConfigRequest& request, const DescribePGHbaConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePGHbaConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribePGHbaConfigOutcomeCallable RdsClient::describePGHbaConfigCallable(const DescribePGHbaConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePGHbaConfigOutcome()>>(
			[this, request]()
			{
			return this->describePGHbaConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeParameterGroupOutcome RdsClient::describeParameterGroup(const DescribeParameterGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeParameterGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeParameterGroupOutcome(DescribeParameterGroupResult(outcome.result()));
	else
		return DescribeParameterGroupOutcome(outcome.error());
}

void RdsClient::describeParameterGroupAsync(const DescribeParameterGroupRequest& request, const DescribeParameterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParameterGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeParameterGroupOutcomeCallable RdsClient::describeParameterGroupCallable(const DescribeParameterGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParameterGroupOutcome()>>(
			[this, request]()
			{
			return this->describeParameterGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeParameterGroupsOutcome RdsClient::describeParameterGroups(const DescribeParameterGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeParameterGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeParameterGroupsOutcome(DescribeParameterGroupsResult(outcome.result()));
	else
		return DescribeParameterGroupsOutcome(outcome.error());
}

void RdsClient::describeParameterGroupsAsync(const DescribeParameterGroupsRequest& request, const DescribeParameterGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParameterGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeParameterGroupsOutcomeCallable RdsClient::describeParameterGroupsCallable(const DescribeParameterGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParameterGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeParameterGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeParameterTemplatesOutcome RdsClient::describeParameterTemplates(const DescribeParameterTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeParameterTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeParameterTemplatesOutcome(DescribeParameterTemplatesResult(outcome.result()));
	else
		return DescribeParameterTemplatesOutcome(outcome.error());
}

void RdsClient::describeParameterTemplatesAsync(const DescribeParameterTemplatesRequest& request, const DescribeParameterTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParameterTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeParameterTemplatesOutcomeCallable RdsClient::describeParameterTemplatesCallable(const DescribeParameterTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParameterTemplatesOutcome()>>(
			[this, request]()
			{
			return this->describeParameterTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeParametersOutcome RdsClient::describeParameters(const DescribeParametersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeParametersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeParametersOutcome(DescribeParametersResult(outcome.result()));
	else
		return DescribeParametersOutcome(outcome.error());
}

void RdsClient::describeParametersAsync(const DescribeParametersRequest& request, const DescribeParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeParametersOutcomeCallable RdsClient::describeParametersCallable(const DescribeParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParametersOutcome()>>(
			[this, request]()
			{
			return this->describeParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribePostgresExtensionsOutcome RdsClient::describePostgresExtensions(const DescribePostgresExtensionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePostgresExtensionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePostgresExtensionsOutcome(DescribePostgresExtensionsResult(outcome.result()));
	else
		return DescribePostgresExtensionsOutcome(outcome.error());
}

void RdsClient::describePostgresExtensionsAsync(const DescribePostgresExtensionsRequest& request, const DescribePostgresExtensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePostgresExtensions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribePostgresExtensionsOutcomeCallable RdsClient::describePostgresExtensionsCallable(const DescribePostgresExtensionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePostgresExtensionsOutcome()>>(
			[this, request]()
			{
			return this->describePostgresExtensions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribePriceOutcome RdsClient::describePrice(const DescribePriceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePriceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePriceOutcome(DescribePriceResult(outcome.result()));
	else
		return DescribePriceOutcome(outcome.error());
}

void RdsClient::describePriceAsync(const DescribePriceRequest& request, const DescribePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribePriceOutcomeCallable RdsClient::describePriceCallable(const DescribePriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePriceOutcome()>>(
			[this, request]()
			{
			return this->describePrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeQuickSaleConfigOutcome RdsClient::describeQuickSaleConfig(const DescribeQuickSaleConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeQuickSaleConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeQuickSaleConfigOutcome(DescribeQuickSaleConfigResult(outcome.result()));
	else
		return DescribeQuickSaleConfigOutcome(outcome.error());
}

void RdsClient::describeQuickSaleConfigAsync(const DescribeQuickSaleConfigRequest& request, const DescribeQuickSaleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeQuickSaleConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeQuickSaleConfigOutcomeCallable RdsClient::describeQuickSaleConfigCallable(const DescribeQuickSaleConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeQuickSaleConfigOutcome()>>(
			[this, request]()
			{
			return this->describeQuickSaleConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRCCloudAssistantStatusOutcome RdsClient::describeRCCloudAssistantStatus(const DescribeRCCloudAssistantStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRCCloudAssistantStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRCCloudAssistantStatusOutcome(DescribeRCCloudAssistantStatusResult(outcome.result()));
	else
		return DescribeRCCloudAssistantStatusOutcome(outcome.error());
}

void RdsClient::describeRCCloudAssistantStatusAsync(const DescribeRCCloudAssistantStatusRequest& request, const DescribeRCCloudAssistantStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRCCloudAssistantStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRCCloudAssistantStatusOutcomeCallable RdsClient::describeRCCloudAssistantStatusCallable(const DescribeRCCloudAssistantStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRCCloudAssistantStatusOutcome()>>(
			[this, request]()
			{
			return this->describeRCCloudAssistantStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRCClusterConfigOutcome RdsClient::describeRCClusterConfig(const DescribeRCClusterConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRCClusterConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRCClusterConfigOutcome(DescribeRCClusterConfigResult(outcome.result()));
	else
		return DescribeRCClusterConfigOutcome(outcome.error());
}

void RdsClient::describeRCClusterConfigAsync(const DescribeRCClusterConfigRequest& request, const DescribeRCClusterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRCClusterConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRCClusterConfigOutcomeCallable RdsClient::describeRCClusterConfigCallable(const DescribeRCClusterConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRCClusterConfigOutcome()>>(
			[this, request]()
			{
			return this->describeRCClusterConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRCClusterNodesOutcome RdsClient::describeRCClusterNodes(const DescribeRCClusterNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRCClusterNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRCClusterNodesOutcome(DescribeRCClusterNodesResult(outcome.result()));
	else
		return DescribeRCClusterNodesOutcome(outcome.error());
}

void RdsClient::describeRCClusterNodesAsync(const DescribeRCClusterNodesRequest& request, const DescribeRCClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRCClusterNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRCClusterNodesOutcomeCallable RdsClient::describeRCClusterNodesCallable(const DescribeRCClusterNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRCClusterNodesOutcome()>>(
			[this, request]()
			{
			return this->describeRCClusterNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRCClustersOutcome RdsClient::describeRCClusters(const DescribeRCClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRCClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRCClustersOutcome(DescribeRCClustersResult(outcome.result()));
	else
		return DescribeRCClustersOutcome(outcome.error());
}

void RdsClient::describeRCClustersAsync(const DescribeRCClustersRequest& request, const DescribeRCClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRCClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRCClustersOutcomeCallable RdsClient::describeRCClustersCallable(const DescribeRCClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRCClustersOutcome()>>(
			[this, request]()
			{
			return this->describeRCClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRCDeploymentSetsOutcome RdsClient::describeRCDeploymentSets(const DescribeRCDeploymentSetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRCDeploymentSetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRCDeploymentSetsOutcome(DescribeRCDeploymentSetsResult(outcome.result()));
	else
		return DescribeRCDeploymentSetsOutcome(outcome.error());
}

void RdsClient::describeRCDeploymentSetsAsync(const DescribeRCDeploymentSetsRequest& request, const DescribeRCDeploymentSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRCDeploymentSets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRCDeploymentSetsOutcomeCallable RdsClient::describeRCDeploymentSetsCallable(const DescribeRCDeploymentSetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRCDeploymentSetsOutcome()>>(
			[this, request]()
			{
			return this->describeRCDeploymentSets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRCDisksOutcome RdsClient::describeRCDisks(const DescribeRCDisksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRCDisksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRCDisksOutcome(DescribeRCDisksResult(outcome.result()));
	else
		return DescribeRCDisksOutcome(outcome.error());
}

void RdsClient::describeRCDisksAsync(const DescribeRCDisksRequest& request, const DescribeRCDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRCDisks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRCDisksOutcomeCallable RdsClient::describeRCDisksCallable(const DescribeRCDisksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRCDisksOutcome()>>(
			[this, request]()
			{
			return this->describeRCDisks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRCImageListOutcome RdsClient::describeRCImageList(const DescribeRCImageListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRCImageListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRCImageListOutcome(DescribeRCImageListResult(outcome.result()));
	else
		return DescribeRCImageListOutcome(outcome.error());
}

void RdsClient::describeRCImageListAsync(const DescribeRCImageListRequest& request, const DescribeRCImageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRCImageList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRCImageListOutcomeCallable RdsClient::describeRCImageListCallable(const DescribeRCImageListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRCImageListOutcome()>>(
			[this, request]()
			{
			return this->describeRCImageList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRCInstanceAttributeOutcome RdsClient::describeRCInstanceAttribute(const DescribeRCInstanceAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRCInstanceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRCInstanceAttributeOutcome(DescribeRCInstanceAttributeResult(outcome.result()));
	else
		return DescribeRCInstanceAttributeOutcome(outcome.error());
}

void RdsClient::describeRCInstanceAttributeAsync(const DescribeRCInstanceAttributeRequest& request, const DescribeRCInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRCInstanceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRCInstanceAttributeOutcomeCallable RdsClient::describeRCInstanceAttributeCallable(const DescribeRCInstanceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRCInstanceAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeRCInstanceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRCInstanceDdosCountOutcome RdsClient::describeRCInstanceDdosCount(const DescribeRCInstanceDdosCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRCInstanceDdosCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRCInstanceDdosCountOutcome(DescribeRCInstanceDdosCountResult(outcome.result()));
	else
		return DescribeRCInstanceDdosCountOutcome(outcome.error());
}

void RdsClient::describeRCInstanceDdosCountAsync(const DescribeRCInstanceDdosCountRequest& request, const DescribeRCInstanceDdosCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRCInstanceDdosCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRCInstanceDdosCountOutcomeCallable RdsClient::describeRCInstanceDdosCountCallable(const DescribeRCInstanceDdosCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRCInstanceDdosCountOutcome()>>(
			[this, request]()
			{
			return this->describeRCInstanceDdosCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRCInstanceHistoryEventsOutcome RdsClient::describeRCInstanceHistoryEvents(const DescribeRCInstanceHistoryEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRCInstanceHistoryEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRCInstanceHistoryEventsOutcome(DescribeRCInstanceHistoryEventsResult(outcome.result()));
	else
		return DescribeRCInstanceHistoryEventsOutcome(outcome.error());
}

void RdsClient::describeRCInstanceHistoryEventsAsync(const DescribeRCInstanceHistoryEventsRequest& request, const DescribeRCInstanceHistoryEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRCInstanceHistoryEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRCInstanceHistoryEventsOutcomeCallable RdsClient::describeRCInstanceHistoryEventsCallable(const DescribeRCInstanceHistoryEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRCInstanceHistoryEventsOutcome()>>(
			[this, request]()
			{
			return this->describeRCInstanceHistoryEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRCInstanceIpAddressOutcome RdsClient::describeRCInstanceIpAddress(const DescribeRCInstanceIpAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRCInstanceIpAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRCInstanceIpAddressOutcome(DescribeRCInstanceIpAddressResult(outcome.result()));
	else
		return DescribeRCInstanceIpAddressOutcome(outcome.error());
}

void RdsClient::describeRCInstanceIpAddressAsync(const DescribeRCInstanceIpAddressRequest& request, const DescribeRCInstanceIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRCInstanceIpAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRCInstanceIpAddressOutcomeCallable RdsClient::describeRCInstanceIpAddressCallable(const DescribeRCInstanceIpAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRCInstanceIpAddressOutcome()>>(
			[this, request]()
			{
			return this->describeRCInstanceIpAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRCInstanceTypeFamiliesOutcome RdsClient::describeRCInstanceTypeFamilies(const DescribeRCInstanceTypeFamiliesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRCInstanceTypeFamiliesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRCInstanceTypeFamiliesOutcome(DescribeRCInstanceTypeFamiliesResult(outcome.result()));
	else
		return DescribeRCInstanceTypeFamiliesOutcome(outcome.error());
}

void RdsClient::describeRCInstanceTypeFamiliesAsync(const DescribeRCInstanceTypeFamiliesRequest& request, const DescribeRCInstanceTypeFamiliesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRCInstanceTypeFamilies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRCInstanceTypeFamiliesOutcomeCallable RdsClient::describeRCInstanceTypeFamiliesCallable(const DescribeRCInstanceTypeFamiliesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRCInstanceTypeFamiliesOutcome()>>(
			[this, request]()
			{
			return this->describeRCInstanceTypeFamilies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRCInstanceTypesOutcome RdsClient::describeRCInstanceTypes(const DescribeRCInstanceTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRCInstanceTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRCInstanceTypesOutcome(DescribeRCInstanceTypesResult(outcome.result()));
	else
		return DescribeRCInstanceTypesOutcome(outcome.error());
}

void RdsClient::describeRCInstanceTypesAsync(const DescribeRCInstanceTypesRequest& request, const DescribeRCInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRCInstanceTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRCInstanceTypesOutcomeCallable RdsClient::describeRCInstanceTypesCallable(const DescribeRCInstanceTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRCInstanceTypesOutcome()>>(
			[this, request]()
			{
			return this->describeRCInstanceTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRCInstanceVncUrlOutcome RdsClient::describeRCInstanceVncUrl(const DescribeRCInstanceVncUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRCInstanceVncUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRCInstanceVncUrlOutcome(DescribeRCInstanceVncUrlResult(outcome.result()));
	else
		return DescribeRCInstanceVncUrlOutcome(outcome.error());
}

void RdsClient::describeRCInstanceVncUrlAsync(const DescribeRCInstanceVncUrlRequest& request, const DescribeRCInstanceVncUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRCInstanceVncUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRCInstanceVncUrlOutcomeCallable RdsClient::describeRCInstanceVncUrlCallable(const DescribeRCInstanceVncUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRCInstanceVncUrlOutcome()>>(
			[this, request]()
			{
			return this->describeRCInstanceVncUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRCInstancesOutcome RdsClient::describeRCInstances(const DescribeRCInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRCInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRCInstancesOutcome(DescribeRCInstancesResult(outcome.result()));
	else
		return DescribeRCInstancesOutcome(outcome.error());
}

void RdsClient::describeRCInstancesAsync(const DescribeRCInstancesRequest& request, const DescribeRCInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRCInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRCInstancesOutcomeCallable RdsClient::describeRCInstancesCallable(const DescribeRCInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRCInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeRCInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRCInvocationResultsOutcome RdsClient::describeRCInvocationResults(const DescribeRCInvocationResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRCInvocationResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRCInvocationResultsOutcome(DescribeRCInvocationResultsResult(outcome.result()));
	else
		return DescribeRCInvocationResultsOutcome(outcome.error());
}

void RdsClient::describeRCInvocationResultsAsync(const DescribeRCInvocationResultsRequest& request, const DescribeRCInvocationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRCInvocationResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRCInvocationResultsOutcomeCallable RdsClient::describeRCInvocationResultsCallable(const DescribeRCInvocationResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRCInvocationResultsOutcome()>>(
			[this, request]()
			{
			return this->describeRCInvocationResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRCMetricListOutcome RdsClient::describeRCMetricList(const DescribeRCMetricListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRCMetricListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRCMetricListOutcome(DescribeRCMetricListResult(outcome.result()));
	else
		return DescribeRCMetricListOutcome(outcome.error());
}

void RdsClient::describeRCMetricListAsync(const DescribeRCMetricListRequest& request, const DescribeRCMetricListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRCMetricList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRCMetricListOutcomeCallable RdsClient::describeRCMetricListCallable(const DescribeRCMetricListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRCMetricListOutcome()>>(
			[this, request]()
			{
			return this->describeRCMetricList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRCNodePoolOutcome RdsClient::describeRCNodePool(const DescribeRCNodePoolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRCNodePoolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRCNodePoolOutcome(DescribeRCNodePoolResult(outcome.result()));
	else
		return DescribeRCNodePoolOutcome(outcome.error());
}

void RdsClient::describeRCNodePoolAsync(const DescribeRCNodePoolRequest& request, const DescribeRCNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRCNodePool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRCNodePoolOutcomeCallable RdsClient::describeRCNodePoolCallable(const DescribeRCNodePoolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRCNodePoolOutcome()>>(
			[this, request]()
			{
			return this->describeRCNodePool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRCSecurityGroupListOutcome RdsClient::describeRCSecurityGroupList(const DescribeRCSecurityGroupListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRCSecurityGroupListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRCSecurityGroupListOutcome(DescribeRCSecurityGroupListResult(outcome.result()));
	else
		return DescribeRCSecurityGroupListOutcome(outcome.error());
}

void RdsClient::describeRCSecurityGroupListAsync(const DescribeRCSecurityGroupListRequest& request, const DescribeRCSecurityGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRCSecurityGroupList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRCSecurityGroupListOutcomeCallable RdsClient::describeRCSecurityGroupListCallable(const DescribeRCSecurityGroupListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRCSecurityGroupListOutcome()>>(
			[this, request]()
			{
			return this->describeRCSecurityGroupList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRCSecurityGroupPermissionOutcome RdsClient::describeRCSecurityGroupPermission(const DescribeRCSecurityGroupPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRCSecurityGroupPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRCSecurityGroupPermissionOutcome(DescribeRCSecurityGroupPermissionResult(outcome.result()));
	else
		return DescribeRCSecurityGroupPermissionOutcome(outcome.error());
}

void RdsClient::describeRCSecurityGroupPermissionAsync(const DescribeRCSecurityGroupPermissionRequest& request, const DescribeRCSecurityGroupPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRCSecurityGroupPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRCSecurityGroupPermissionOutcomeCallable RdsClient::describeRCSecurityGroupPermissionCallable(const DescribeRCSecurityGroupPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRCSecurityGroupPermissionOutcome()>>(
			[this, request]()
			{
			return this->describeRCSecurityGroupPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRCSnapshotsOutcome RdsClient::describeRCSnapshots(const DescribeRCSnapshotsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRCSnapshotsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRCSnapshotsOutcome(DescribeRCSnapshotsResult(outcome.result()));
	else
		return DescribeRCSnapshotsOutcome(outcome.error());
}

void RdsClient::describeRCSnapshotsAsync(const DescribeRCSnapshotsRequest& request, const DescribeRCSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRCSnapshots(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRCSnapshotsOutcomeCallable RdsClient::describeRCSnapshotsCallable(const DescribeRCSnapshotsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRCSnapshotsOutcome()>>(
			[this, request]()
			{
			return this->describeRCSnapshots(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRCVClusterOutcome RdsClient::describeRCVCluster(const DescribeRCVClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRCVClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRCVClusterOutcome(DescribeRCVClusterResult(outcome.result()));
	else
		return DescribeRCVClusterOutcome(outcome.error());
}

void RdsClient::describeRCVClusterAsync(const DescribeRCVClusterRequest& request, const DescribeRCVClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRCVCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRCVClusterOutcomeCallable RdsClient::describeRCVClusterCallable(const DescribeRCVClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRCVClusterOutcome()>>(
			[this, request]()
			{
			return this->describeRCVCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRdsResourceSettingsOutcome RdsClient::describeRdsResourceSettings(const DescribeRdsResourceSettingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRdsResourceSettingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRdsResourceSettingsOutcome(DescribeRdsResourceSettingsResult(outcome.result()));
	else
		return DescribeRdsResourceSettingsOutcome(outcome.error());
}

void RdsClient::describeRdsResourceSettingsAsync(const DescribeRdsResourceSettingsRequest& request, const DescribeRdsResourceSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRdsResourceSettings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRdsResourceSettingsOutcomeCallable RdsClient::describeRdsResourceSettingsCallable(const DescribeRdsResourceSettingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRdsResourceSettingsOutcome()>>(
			[this, request]()
			{
			return this->describeRdsResourceSettings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeReadDBInstanceDelayOutcome RdsClient::describeReadDBInstanceDelay(const DescribeReadDBInstanceDelayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeReadDBInstanceDelayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeReadDBInstanceDelayOutcome(DescribeReadDBInstanceDelayResult(outcome.result()));
	else
		return DescribeReadDBInstanceDelayOutcome(outcome.error());
}

void RdsClient::describeReadDBInstanceDelayAsync(const DescribeReadDBInstanceDelayRequest& request, const DescribeReadDBInstanceDelayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeReadDBInstanceDelay(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeReadDBInstanceDelayOutcomeCallable RdsClient::describeReadDBInstanceDelayCallable(const DescribeReadDBInstanceDelayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeReadDBInstanceDelayOutcome()>>(
			[this, request]()
			{
			return this->describeReadDBInstanceDelay(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRegionInfosOutcome RdsClient::describeRegionInfos(const DescribeRegionInfosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRegionInfosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRegionInfosOutcome(DescribeRegionInfosResult(outcome.result()));
	else
		return DescribeRegionInfosOutcome(outcome.error());
}

void RdsClient::describeRegionInfosAsync(const DescribeRegionInfosRequest& request, const DescribeRegionInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegionInfos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRegionInfosOutcomeCallable RdsClient::describeRegionInfosCallable(const DescribeRegionInfosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionInfosOutcome()>>(
			[this, request]()
			{
			return this->describeRegionInfos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRegionsOutcome RdsClient::describeRegions(const DescribeRegionsRequest &request) const
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

void RdsClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRegionsOutcomeCallable RdsClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRenewalPriceOutcome RdsClient::describeRenewalPrice(const DescribeRenewalPriceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRenewalPriceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRenewalPriceOutcome(DescribeRenewalPriceResult(outcome.result()));
	else
		return DescribeRenewalPriceOutcome(outcome.error());
}

void RdsClient::describeRenewalPriceAsync(const DescribeRenewalPriceRequest& request, const DescribeRenewalPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRenewalPrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRenewalPriceOutcomeCallable RdsClient::describeRenewalPriceCallable(const DescribeRenewalPriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRenewalPriceOutcome()>>(
			[this, request]()
			{
			return this->describeRenewalPrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeReplicationLinkLogsOutcome RdsClient::describeReplicationLinkLogs(const DescribeReplicationLinkLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeReplicationLinkLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeReplicationLinkLogsOutcome(DescribeReplicationLinkLogsResult(outcome.result()));
	else
		return DescribeReplicationLinkLogsOutcome(outcome.error());
}

void RdsClient::describeReplicationLinkLogsAsync(const DescribeReplicationLinkLogsRequest& request, const DescribeReplicationLinkLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeReplicationLinkLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeReplicationLinkLogsOutcomeCallable RdsClient::describeReplicationLinkLogsCallable(const DescribeReplicationLinkLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeReplicationLinkLogsOutcome()>>(
			[this, request]()
			{
			return this->describeReplicationLinkLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeResourceDetailsOutcome RdsClient::describeResourceDetails(const DescribeResourceDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeResourceDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeResourceDetailsOutcome(DescribeResourceDetailsResult(outcome.result()));
	else
		return DescribeResourceDetailsOutcome(outcome.error());
}

void RdsClient::describeResourceDetailsAsync(const DescribeResourceDetailsRequest& request, const DescribeResourceDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeResourceDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeResourceDetailsOutcomeCallable RdsClient::describeResourceDetailsCallable(const DescribeResourceDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeResourceDetailsOutcome()>>(
			[this, request]()
			{
			return this->describeResourceDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeResourceUsageOutcome RdsClient::describeResourceUsage(const DescribeResourceUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeResourceUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeResourceUsageOutcome(DescribeResourceUsageResult(outcome.result()));
	else
		return DescribeResourceUsageOutcome(outcome.error());
}

void RdsClient::describeResourceUsageAsync(const DescribeResourceUsageRequest& request, const DescribeResourceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeResourceUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeResourceUsageOutcomeCallable RdsClient::describeResourceUsageCallable(const DescribeResourceUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeResourceUsageOutcome()>>(
			[this, request]()
			{
			return this->describeResourceUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeSQLCollectorPolicyOutcome RdsClient::describeSQLCollectorPolicy(const DescribeSQLCollectorPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSQLCollectorPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSQLCollectorPolicyOutcome(DescribeSQLCollectorPolicyResult(outcome.result()));
	else
		return DescribeSQLCollectorPolicyOutcome(outcome.error());
}

void RdsClient::describeSQLCollectorPolicyAsync(const DescribeSQLCollectorPolicyRequest& request, const DescribeSQLCollectorPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSQLCollectorPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeSQLCollectorPolicyOutcomeCallable RdsClient::describeSQLCollectorPolicyCallable(const DescribeSQLCollectorPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSQLCollectorPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeSQLCollectorPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeSQLCollectorRetentionOutcome RdsClient::describeSQLCollectorRetention(const DescribeSQLCollectorRetentionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSQLCollectorRetentionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSQLCollectorRetentionOutcome(DescribeSQLCollectorRetentionResult(outcome.result()));
	else
		return DescribeSQLCollectorRetentionOutcome(outcome.error());
}

void RdsClient::describeSQLCollectorRetentionAsync(const DescribeSQLCollectorRetentionRequest& request, const DescribeSQLCollectorRetentionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSQLCollectorRetention(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeSQLCollectorRetentionOutcomeCallable RdsClient::describeSQLCollectorRetentionCallable(const DescribeSQLCollectorRetentionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSQLCollectorRetentionOutcome()>>(
			[this, request]()
			{
			return this->describeSQLCollectorRetention(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeSQLLogFilesOutcome RdsClient::describeSQLLogFiles(const DescribeSQLLogFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSQLLogFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSQLLogFilesOutcome(DescribeSQLLogFilesResult(outcome.result()));
	else
		return DescribeSQLLogFilesOutcome(outcome.error());
}

void RdsClient::describeSQLLogFilesAsync(const DescribeSQLLogFilesRequest& request, const DescribeSQLLogFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSQLLogFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeSQLLogFilesOutcomeCallable RdsClient::describeSQLLogFilesCallable(const DescribeSQLLogFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSQLLogFilesOutcome()>>(
			[this, request]()
			{
			return this->describeSQLLogFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeSQLLogRecordsOutcome RdsClient::describeSQLLogRecords(const DescribeSQLLogRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSQLLogRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSQLLogRecordsOutcome(DescribeSQLLogRecordsResult(outcome.result()));
	else
		return DescribeSQLLogRecordsOutcome(outcome.error());
}

void RdsClient::describeSQLLogRecordsAsync(const DescribeSQLLogRecordsRequest& request, const DescribeSQLLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSQLLogRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeSQLLogRecordsOutcomeCallable RdsClient::describeSQLLogRecordsCallable(const DescribeSQLLogRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSQLLogRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeSQLLogRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeSQLLogReportListOutcome RdsClient::describeSQLLogReportList(const DescribeSQLLogReportListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSQLLogReportListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSQLLogReportListOutcome(DescribeSQLLogReportListResult(outcome.result()));
	else
		return DescribeSQLLogReportListOutcome(outcome.error());
}

void RdsClient::describeSQLLogReportListAsync(const DescribeSQLLogReportListRequest& request, const DescribeSQLLogReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSQLLogReportList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeSQLLogReportListOutcomeCallable RdsClient::describeSQLLogReportListCallable(const DescribeSQLLogReportListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSQLLogReportListOutcome()>>(
			[this, request]()
			{
			return this->describeSQLLogReportList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeSecretsOutcome RdsClient::describeSecrets(const DescribeSecretsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecretsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecretsOutcome(DescribeSecretsResult(outcome.result()));
	else
		return DescribeSecretsOutcome(outcome.error());
}

void RdsClient::describeSecretsAsync(const DescribeSecretsRequest& request, const DescribeSecretsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecrets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeSecretsOutcomeCallable RdsClient::describeSecretsCallable(const DescribeSecretsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecretsOutcome()>>(
			[this, request]()
			{
			return this->describeSecrets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeSecurityGroupConfigurationOutcome RdsClient::describeSecurityGroupConfiguration(const DescribeSecurityGroupConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecurityGroupConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecurityGroupConfigurationOutcome(DescribeSecurityGroupConfigurationResult(outcome.result()));
	else
		return DescribeSecurityGroupConfigurationOutcome(outcome.error());
}

void RdsClient::describeSecurityGroupConfigurationAsync(const DescribeSecurityGroupConfigurationRequest& request, const DescribeSecurityGroupConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityGroupConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeSecurityGroupConfigurationOutcomeCallable RdsClient::describeSecurityGroupConfigurationCallable(const DescribeSecurityGroupConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityGroupConfigurationOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityGroupConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeSlotsOutcome RdsClient::describeSlots(const DescribeSlotsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSlotsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSlotsOutcome(DescribeSlotsResult(outcome.result()));
	else
		return DescribeSlotsOutcome(outcome.error());
}

void RdsClient::describeSlotsAsync(const DescribeSlotsRequest& request, const DescribeSlotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSlots(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeSlotsOutcomeCallable RdsClient::describeSlotsCallable(const DescribeSlotsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSlotsOutcome()>>(
			[this, request]()
			{
			return this->describeSlots(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeSlowLogRecordsOutcome RdsClient::describeSlowLogRecords(const DescribeSlowLogRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSlowLogRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSlowLogRecordsOutcome(DescribeSlowLogRecordsResult(outcome.result()));
	else
		return DescribeSlowLogRecordsOutcome(outcome.error());
}

void RdsClient::describeSlowLogRecordsAsync(const DescribeSlowLogRecordsRequest& request, const DescribeSlowLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSlowLogRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeSlowLogRecordsOutcomeCallable RdsClient::describeSlowLogRecordsCallable(const DescribeSlowLogRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSlowLogRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeSlowLogRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeSlowLogsOutcome RdsClient::describeSlowLogs(const DescribeSlowLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSlowLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSlowLogsOutcome(DescribeSlowLogsResult(outcome.result()));
	else
		return DescribeSlowLogsOutcome(outcome.error());
}

void RdsClient::describeSlowLogsAsync(const DescribeSlowLogsRequest& request, const DescribeSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSlowLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeSlowLogsOutcomeCallable RdsClient::describeSlowLogsCallable(const DescribeSlowLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSlowLogsOutcome()>>(
			[this, request]()
			{
			return this->describeSlowLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeSupportOnlineResizeDiskOutcome RdsClient::describeSupportOnlineResizeDisk(const DescribeSupportOnlineResizeDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSupportOnlineResizeDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSupportOnlineResizeDiskOutcome(DescribeSupportOnlineResizeDiskResult(outcome.result()));
	else
		return DescribeSupportOnlineResizeDiskOutcome(outcome.error());
}

void RdsClient::describeSupportOnlineResizeDiskAsync(const DescribeSupportOnlineResizeDiskRequest& request, const DescribeSupportOnlineResizeDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSupportOnlineResizeDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeSupportOnlineResizeDiskOutcomeCallable RdsClient::describeSupportOnlineResizeDiskCallable(const DescribeSupportOnlineResizeDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSupportOnlineResizeDiskOutcome()>>(
			[this, request]()
			{
			return this->describeSupportOnlineResizeDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeTagsOutcome RdsClient::describeTags(const DescribeTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTagsOutcome(DescribeTagsResult(outcome.result()));
	else
		return DescribeTagsOutcome(outcome.error());
}

void RdsClient::describeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeTagsOutcomeCallable RdsClient::describeTagsCallable(const DescribeTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTagsOutcome()>>(
			[this, request]()
			{
			return this->describeTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeTasksOutcome RdsClient::describeTasks(const DescribeTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTasksOutcome(DescribeTasksResult(outcome.result()));
	else
		return DescribeTasksOutcome(outcome.error());
}

void RdsClient::describeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeTasksOutcomeCallable RdsClient::describeTasksCallable(const DescribeTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTasksOutcome()>>(
			[this, request]()
			{
			return this->describeTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeUpgradeMajorVersionPrecheckTaskOutcome RdsClient::describeUpgradeMajorVersionPrecheckTask(const DescribeUpgradeMajorVersionPrecheckTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUpgradeMajorVersionPrecheckTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUpgradeMajorVersionPrecheckTaskOutcome(DescribeUpgradeMajorVersionPrecheckTaskResult(outcome.result()));
	else
		return DescribeUpgradeMajorVersionPrecheckTaskOutcome(outcome.error());
}

void RdsClient::describeUpgradeMajorVersionPrecheckTaskAsync(const DescribeUpgradeMajorVersionPrecheckTaskRequest& request, const DescribeUpgradeMajorVersionPrecheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUpgradeMajorVersionPrecheckTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeUpgradeMajorVersionPrecheckTaskOutcomeCallable RdsClient::describeUpgradeMajorVersionPrecheckTaskCallable(const DescribeUpgradeMajorVersionPrecheckTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUpgradeMajorVersionPrecheckTaskOutcome()>>(
			[this, request]()
			{
			return this->describeUpgradeMajorVersionPrecheckTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeUpgradeMajorVersionTasksOutcome RdsClient::describeUpgradeMajorVersionTasks(const DescribeUpgradeMajorVersionTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUpgradeMajorVersionTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUpgradeMajorVersionTasksOutcome(DescribeUpgradeMajorVersionTasksResult(outcome.result()));
	else
		return DescribeUpgradeMajorVersionTasksOutcome(outcome.error());
}

void RdsClient::describeUpgradeMajorVersionTasksAsync(const DescribeUpgradeMajorVersionTasksRequest& request, const DescribeUpgradeMajorVersionTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUpgradeMajorVersionTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeUpgradeMajorVersionTasksOutcomeCallable RdsClient::describeUpgradeMajorVersionTasksCallable(const DescribeUpgradeMajorVersionTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUpgradeMajorVersionTasksOutcome()>>(
			[this, request]()
			{
			return this->describeUpgradeMajorVersionTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeVSwitchListOutcome RdsClient::describeVSwitchList(const DescribeVSwitchListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVSwitchListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVSwitchListOutcome(DescribeVSwitchListResult(outcome.result()));
	else
		return DescribeVSwitchListOutcome(outcome.error());
}

void RdsClient::describeVSwitchListAsync(const DescribeVSwitchListRequest& request, const DescribeVSwitchListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVSwitchList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeVSwitchListOutcomeCallable RdsClient::describeVSwitchListCallable(const DescribeVSwitchListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVSwitchListOutcome()>>(
			[this, request]()
			{
			return this->describeVSwitchList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeVSwitchesOutcome RdsClient::describeVSwitches(const DescribeVSwitchesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVSwitchesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVSwitchesOutcome(DescribeVSwitchesResult(outcome.result()));
	else
		return DescribeVSwitchesOutcome(outcome.error());
}

void RdsClient::describeVSwitchesAsync(const DescribeVSwitchesRequest& request, const DescribeVSwitchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVSwitches(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeVSwitchesOutcomeCallable RdsClient::describeVSwitchesCallable(const DescribeVSwitchesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVSwitchesOutcome()>>(
			[this, request]()
			{
			return this->describeVSwitches(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeWhitelistTemplateOutcome RdsClient::describeWhitelistTemplate(const DescribeWhitelistTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWhitelistTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWhitelistTemplateOutcome(DescribeWhitelistTemplateResult(outcome.result()));
	else
		return DescribeWhitelistTemplateOutcome(outcome.error());
}

void RdsClient::describeWhitelistTemplateAsync(const DescribeWhitelistTemplateRequest& request, const DescribeWhitelistTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWhitelistTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeWhitelistTemplateOutcomeCallable RdsClient::describeWhitelistTemplateCallable(const DescribeWhitelistTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWhitelistTemplateOutcome()>>(
			[this, request]()
			{
			return this->describeWhitelistTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeWhitelistTemplateLinkedInstanceOutcome RdsClient::describeWhitelistTemplateLinkedInstance(const DescribeWhitelistTemplateLinkedInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWhitelistTemplateLinkedInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWhitelistTemplateLinkedInstanceOutcome(DescribeWhitelistTemplateLinkedInstanceResult(outcome.result()));
	else
		return DescribeWhitelistTemplateLinkedInstanceOutcome(outcome.error());
}

void RdsClient::describeWhitelistTemplateLinkedInstanceAsync(const DescribeWhitelistTemplateLinkedInstanceRequest& request, const DescribeWhitelistTemplateLinkedInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWhitelistTemplateLinkedInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeWhitelistTemplateLinkedInstanceOutcomeCallable RdsClient::describeWhitelistTemplateLinkedInstanceCallable(const DescribeWhitelistTemplateLinkedInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWhitelistTemplateLinkedInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeWhitelistTemplateLinkedInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DestroyDBInstanceOutcome RdsClient::destroyDBInstance(const DestroyDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DestroyDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DestroyDBInstanceOutcome(DestroyDBInstanceResult(outcome.result()));
	else
		return DestroyDBInstanceOutcome(outcome.error());
}

void RdsClient::destroyDBInstanceAsync(const DestroyDBInstanceRequest& request, const DestroyDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, destroyDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DestroyDBInstanceOutcomeCallable RdsClient::destroyDBInstanceCallable(const DestroyDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DestroyDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->destroyDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DetachGadInstanceMemberOutcome RdsClient::detachGadInstanceMember(const DetachGadInstanceMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachGadInstanceMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachGadInstanceMemberOutcome(DetachGadInstanceMemberResult(outcome.result()));
	else
		return DetachGadInstanceMemberOutcome(outcome.error());
}

void RdsClient::detachGadInstanceMemberAsync(const DetachGadInstanceMemberRequest& request, const DetachGadInstanceMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachGadInstanceMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DetachGadInstanceMemberOutcomeCallable RdsClient::detachGadInstanceMemberCallable(const DetachGadInstanceMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachGadInstanceMemberOutcome()>>(
			[this, request]()
			{
			return this->detachGadInstanceMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DetachRCDiskOutcome RdsClient::detachRCDisk(const DetachRCDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachRCDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachRCDiskOutcome(DetachRCDiskResult(outcome.result()));
	else
		return DetachRCDiskOutcome(outcome.error());
}

void RdsClient::detachRCDiskAsync(const DetachRCDiskRequest& request, const DetachRCDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachRCDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DetachRCDiskOutcomeCallable RdsClient::detachRCDiskCallable(const DetachRCDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachRCDiskOutcome()>>(
			[this, request]()
			{
			return this->detachRCDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DetachWhitelistTemplateToInstanceOutcome RdsClient::detachWhitelistTemplateToInstance(const DetachWhitelistTemplateToInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachWhitelistTemplateToInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachWhitelistTemplateToInstanceOutcome(DetachWhitelistTemplateToInstanceResult(outcome.result()));
	else
		return DetachWhitelistTemplateToInstanceOutcome(outcome.error());
}

void RdsClient::detachWhitelistTemplateToInstanceAsync(const DetachWhitelistTemplateToInstanceRequest& request, const DetachWhitelistTemplateToInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachWhitelistTemplateToInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DetachWhitelistTemplateToInstanceOutcomeCallable RdsClient::detachWhitelistTemplateToInstanceCallable(const DetachWhitelistTemplateToInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachWhitelistTemplateToInstanceOutcome()>>(
			[this, request]()
			{
			return this->detachWhitelistTemplateToInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::EvaluateLocalExtendDiskOutcome RdsClient::evaluateLocalExtendDisk(const EvaluateLocalExtendDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EvaluateLocalExtendDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EvaluateLocalExtendDiskOutcome(EvaluateLocalExtendDiskResult(outcome.result()));
	else
		return EvaluateLocalExtendDiskOutcome(outcome.error());
}

void RdsClient::evaluateLocalExtendDiskAsync(const EvaluateLocalExtendDiskRequest& request, const EvaluateLocalExtendDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, evaluateLocalExtendDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::EvaluateLocalExtendDiskOutcomeCallable RdsClient::evaluateLocalExtendDiskCallable(const EvaluateLocalExtendDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EvaluateLocalExtendDiskOutcome()>>(
			[this, request]()
			{
			return this->evaluateLocalExtendDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::GetDBInstanceTopologyOutcome RdsClient::getDBInstanceTopology(const GetDBInstanceTopologyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDBInstanceTopologyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDBInstanceTopologyOutcome(GetDBInstanceTopologyResult(outcome.result()));
	else
		return GetDBInstanceTopologyOutcome(outcome.error());
}

void RdsClient::getDBInstanceTopologyAsync(const GetDBInstanceTopologyRequest& request, const GetDBInstanceTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDBInstanceTopology(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::GetDBInstanceTopologyOutcomeCallable RdsClient::getDBInstanceTopologyCallable(const GetDBInstanceTopologyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDBInstanceTopologyOutcome()>>(
			[this, request]()
			{
			return this->getDBInstanceTopology(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::GetDbProxyInstanceSslOutcome RdsClient::getDbProxyInstanceSsl(const GetDbProxyInstanceSslRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDbProxyInstanceSslOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDbProxyInstanceSslOutcome(GetDbProxyInstanceSslResult(outcome.result()));
	else
		return GetDbProxyInstanceSslOutcome(outcome.error());
}

void RdsClient::getDbProxyInstanceSslAsync(const GetDbProxyInstanceSslRequest& request, const GetDbProxyInstanceSslAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDbProxyInstanceSsl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::GetDbProxyInstanceSslOutcomeCallable RdsClient::getDbProxyInstanceSslCallable(const GetDbProxyInstanceSslRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDbProxyInstanceSslOutcome()>>(
			[this, request]()
			{
			return this->getDbProxyInstanceSsl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::GrantAccountPrivilegeOutcome RdsClient::grantAccountPrivilege(const GrantAccountPrivilegeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantAccountPrivilegeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantAccountPrivilegeOutcome(GrantAccountPrivilegeResult(outcome.result()));
	else
		return GrantAccountPrivilegeOutcome(outcome.error());
}

void RdsClient::grantAccountPrivilegeAsync(const GrantAccountPrivilegeRequest& request, const GrantAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantAccountPrivilege(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::GrantAccountPrivilegeOutcomeCallable RdsClient::grantAccountPrivilegeCallable(const GrantAccountPrivilegeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantAccountPrivilegeOutcome()>>(
			[this, request]()
			{
			return this->grantAccountPrivilege(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::GrantOperatorPermissionOutcome RdsClient::grantOperatorPermission(const GrantOperatorPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantOperatorPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantOperatorPermissionOutcome(GrantOperatorPermissionResult(outcome.result()));
	else
		return GrantOperatorPermissionOutcome(outcome.error());
}

void RdsClient::grantOperatorPermissionAsync(const GrantOperatorPermissionRequest& request, const GrantOperatorPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantOperatorPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::GrantOperatorPermissionOutcomeCallable RdsClient::grantOperatorPermissionCallable(const GrantOperatorPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantOperatorPermissionOutcome()>>(
			[this, request]()
			{
			return this->grantOperatorPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ImportUserBackupFileOutcome RdsClient::importUserBackupFile(const ImportUserBackupFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportUserBackupFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportUserBackupFileOutcome(ImportUserBackupFileResult(outcome.result()));
	else
		return ImportUserBackupFileOutcome(outcome.error());
}

void RdsClient::importUserBackupFileAsync(const ImportUserBackupFileRequest& request, const ImportUserBackupFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importUserBackupFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ImportUserBackupFileOutcomeCallable RdsClient::importUserBackupFileCallable(const ImportUserBackupFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportUserBackupFileOutcome()>>(
			[this, request]()
			{
			return this->importUserBackupFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::InstallRCCloudAssistantOutcome RdsClient::installRCCloudAssistant(const InstallRCCloudAssistantRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InstallRCCloudAssistantOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InstallRCCloudAssistantOutcome(InstallRCCloudAssistantResult(outcome.result()));
	else
		return InstallRCCloudAssistantOutcome(outcome.error());
}

void RdsClient::installRCCloudAssistantAsync(const InstallRCCloudAssistantRequest& request, const InstallRCCloudAssistantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, installRCCloudAssistant(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::InstallRCCloudAssistantOutcomeCallable RdsClient::installRCCloudAssistantCallable(const InstallRCCloudAssistantRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InstallRCCloudAssistantOutcome()>>(
			[this, request]()
			{
			return this->installRCCloudAssistant(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ListClassesOutcome RdsClient::listClasses(const ListClassesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClassesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClassesOutcome(ListClassesResult(outcome.result()));
	else
		return ListClassesOutcome(outcome.error());
}

void RdsClient::listClassesAsync(const ListClassesRequest& request, const ListClassesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClasses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ListClassesOutcomeCallable RdsClient::listClassesCallable(const ListClassesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClassesOutcome()>>(
			[this, request]()
			{
			return this->listClasses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ListTagResourcesOutcome RdsClient::listTagResources(const ListTagResourcesRequest &request) const
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

void RdsClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ListTagResourcesOutcomeCallable RdsClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ListUserBackupFilesOutcome RdsClient::listUserBackupFiles(const ListUserBackupFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserBackupFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserBackupFilesOutcome(ListUserBackupFilesResult(outcome.result()));
	else
		return ListUserBackupFilesOutcome(outcome.error());
}

void RdsClient::listUserBackupFilesAsync(const ListUserBackupFilesRequest& request, const ListUserBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserBackupFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ListUserBackupFilesOutcomeCallable RdsClient::listUserBackupFilesCallable(const ListUserBackupFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserBackupFilesOutcome()>>(
			[this, request]()
			{
			return this->listUserBackupFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::LockAccountOutcome RdsClient::lockAccount(const LockAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LockAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LockAccountOutcome(LockAccountResult(outcome.result()));
	else
		return LockAccountOutcome(outcome.error());
}

void RdsClient::lockAccountAsync(const LockAccountRequest& request, const LockAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, lockAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::LockAccountOutcomeCallable RdsClient::lockAccountCallable(const LockAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LockAccountOutcome()>>(
			[this, request]()
			{
			return this->lockAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::MigrateConnectionToOtherZoneOutcome RdsClient::migrateConnectionToOtherZone(const MigrateConnectionToOtherZoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MigrateConnectionToOtherZoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MigrateConnectionToOtherZoneOutcome(MigrateConnectionToOtherZoneResult(outcome.result()));
	else
		return MigrateConnectionToOtherZoneOutcome(outcome.error());
}

void RdsClient::migrateConnectionToOtherZoneAsync(const MigrateConnectionToOtherZoneRequest& request, const MigrateConnectionToOtherZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, migrateConnectionToOtherZone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::MigrateConnectionToOtherZoneOutcomeCallable RdsClient::migrateConnectionToOtherZoneCallable(const MigrateConnectionToOtherZoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MigrateConnectionToOtherZoneOutcome()>>(
			[this, request]()
			{
			return this->migrateConnectionToOtherZone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::MigrateDBInstanceOutcome RdsClient::migrateDBInstance(const MigrateDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MigrateDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MigrateDBInstanceOutcome(MigrateDBInstanceResult(outcome.result()));
	else
		return MigrateDBInstanceOutcome(outcome.error());
}

void RdsClient::migrateDBInstanceAsync(const MigrateDBInstanceRequest& request, const MigrateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, migrateDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::MigrateDBInstanceOutcomeCallable RdsClient::migrateDBInstanceCallable(const MigrateDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MigrateDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->migrateDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::MigrateDBNodesOutcome RdsClient::migrateDBNodes(const MigrateDBNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MigrateDBNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MigrateDBNodesOutcome(MigrateDBNodesResult(outcome.result()));
	else
		return MigrateDBNodesOutcome(outcome.error());
}

void RdsClient::migrateDBNodesAsync(const MigrateDBNodesRequest& request, const MigrateDBNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, migrateDBNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::MigrateDBNodesOutcomeCallable RdsClient::migrateDBNodesCallable(const MigrateDBNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MigrateDBNodesOutcome()>>(
			[this, request]()
			{
			return this->migrateDBNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::MigrateSecurityIPModeOutcome RdsClient::migrateSecurityIPMode(const MigrateSecurityIPModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MigrateSecurityIPModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MigrateSecurityIPModeOutcome(MigrateSecurityIPModeResult(outcome.result()));
	else
		return MigrateSecurityIPModeOutcome(outcome.error());
}

void RdsClient::migrateSecurityIPModeAsync(const MigrateSecurityIPModeRequest& request, const MigrateSecurityIPModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, migrateSecurityIPMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::MigrateSecurityIPModeOutcomeCallable RdsClient::migrateSecurityIPModeCallable(const MigrateSecurityIPModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MigrateSecurityIPModeOutcome()>>(
			[this, request]()
			{
			return this->migrateSecurityIPMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::MigrateToOtherZoneOutcome RdsClient::migrateToOtherZone(const MigrateToOtherZoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MigrateToOtherZoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MigrateToOtherZoneOutcome(MigrateToOtherZoneResult(outcome.result()));
	else
		return MigrateToOtherZoneOutcome(outcome.error());
}

void RdsClient::migrateToOtherZoneAsync(const MigrateToOtherZoneRequest& request, const MigrateToOtherZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, migrateToOtherZone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::MigrateToOtherZoneOutcomeCallable RdsClient::migrateToOtherZoneCallable(const MigrateToOtherZoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MigrateToOtherZoneOutcome()>>(
			[this, request]()
			{
			return this->migrateToOtherZone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyADInfoOutcome RdsClient::modifyADInfo(const ModifyADInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyADInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyADInfoOutcome(ModifyADInfoResult(outcome.result()));
	else
		return ModifyADInfoOutcome(outcome.error());
}

void RdsClient::modifyADInfoAsync(const ModifyADInfoRequest& request, const ModifyADInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyADInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyADInfoOutcomeCallable RdsClient::modifyADInfoCallable(const ModifyADInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyADInfoOutcome()>>(
			[this, request]()
			{
			return this->modifyADInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyAccountCheckPolicyOutcome RdsClient::modifyAccountCheckPolicy(const ModifyAccountCheckPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAccountCheckPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAccountCheckPolicyOutcome(ModifyAccountCheckPolicyResult(outcome.result()));
	else
		return ModifyAccountCheckPolicyOutcome(outcome.error());
}

void RdsClient::modifyAccountCheckPolicyAsync(const ModifyAccountCheckPolicyRequest& request, const ModifyAccountCheckPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccountCheckPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyAccountCheckPolicyOutcomeCallable RdsClient::modifyAccountCheckPolicyCallable(const ModifyAccountCheckPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccountCheckPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyAccountCheckPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyAccountDescriptionOutcome RdsClient::modifyAccountDescription(const ModifyAccountDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAccountDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAccountDescriptionOutcome(ModifyAccountDescriptionResult(outcome.result()));
	else
		return ModifyAccountDescriptionOutcome(outcome.error());
}

void RdsClient::modifyAccountDescriptionAsync(const ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccountDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyAccountDescriptionOutcomeCallable RdsClient::modifyAccountDescriptionCallable(const ModifyAccountDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccountDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyAccountDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyAccountMaskingPrivilegeOutcome RdsClient::modifyAccountMaskingPrivilege(const ModifyAccountMaskingPrivilegeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAccountMaskingPrivilegeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAccountMaskingPrivilegeOutcome(ModifyAccountMaskingPrivilegeResult(outcome.result()));
	else
		return ModifyAccountMaskingPrivilegeOutcome(outcome.error());
}

void RdsClient::modifyAccountMaskingPrivilegeAsync(const ModifyAccountMaskingPrivilegeRequest& request, const ModifyAccountMaskingPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccountMaskingPrivilege(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyAccountMaskingPrivilegeOutcomeCallable RdsClient::modifyAccountMaskingPrivilegeCallable(const ModifyAccountMaskingPrivilegeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccountMaskingPrivilegeOutcome()>>(
			[this, request]()
			{
			return this->modifyAccountMaskingPrivilege(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyAccountSecurityPolicyOutcome RdsClient::modifyAccountSecurityPolicy(const ModifyAccountSecurityPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAccountSecurityPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAccountSecurityPolicyOutcome(ModifyAccountSecurityPolicyResult(outcome.result()));
	else
		return ModifyAccountSecurityPolicyOutcome(outcome.error());
}

void RdsClient::modifyAccountSecurityPolicyAsync(const ModifyAccountSecurityPolicyRequest& request, const ModifyAccountSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccountSecurityPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyAccountSecurityPolicyOutcomeCallable RdsClient::modifyAccountSecurityPolicyCallable(const ModifyAccountSecurityPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccountSecurityPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyAccountSecurityPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyActionEventPolicyOutcome RdsClient::modifyActionEventPolicy(const ModifyActionEventPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyActionEventPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyActionEventPolicyOutcome(ModifyActionEventPolicyResult(outcome.result()));
	else
		return ModifyActionEventPolicyOutcome(outcome.error());
}

void RdsClient::modifyActionEventPolicyAsync(const ModifyActionEventPolicyRequest& request, const ModifyActionEventPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyActionEventPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyActionEventPolicyOutcomeCallable RdsClient::modifyActionEventPolicyCallable(const ModifyActionEventPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyActionEventPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyActionEventPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyActiveOperationTasksOutcome RdsClient::modifyActiveOperationTasks(const ModifyActiveOperationTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyActiveOperationTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyActiveOperationTasksOutcome(ModifyActiveOperationTasksResult(outcome.result()));
	else
		return ModifyActiveOperationTasksOutcome(outcome.error());
}

void RdsClient::modifyActiveOperationTasksAsync(const ModifyActiveOperationTasksRequest& request, const ModifyActiveOperationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyActiveOperationTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyActiveOperationTasksOutcomeCallable RdsClient::modifyActiveOperationTasksCallable(const ModifyActiveOperationTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyActiveOperationTasksOutcome()>>(
			[this, request]()
			{
			return this->modifyActiveOperationTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyBackupPolicyOutcome RdsClient::modifyBackupPolicy(const ModifyBackupPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBackupPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBackupPolicyOutcome(ModifyBackupPolicyResult(outcome.result()));
	else
		return ModifyBackupPolicyOutcome(outcome.error());
}

void RdsClient::modifyBackupPolicyAsync(const ModifyBackupPolicyRequest& request, const ModifyBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyBackupPolicyOutcomeCallable RdsClient::modifyBackupPolicyCallable(const ModifyBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyBackupSetExpireTimeOutcome RdsClient::modifyBackupSetExpireTime(const ModifyBackupSetExpireTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBackupSetExpireTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBackupSetExpireTimeOutcome(ModifyBackupSetExpireTimeResult(outcome.result()));
	else
		return ModifyBackupSetExpireTimeOutcome(outcome.error());
}

void RdsClient::modifyBackupSetExpireTimeAsync(const ModifyBackupSetExpireTimeRequest& request, const ModifyBackupSetExpireTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBackupSetExpireTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyBackupSetExpireTimeOutcomeCallable RdsClient::modifyBackupSetExpireTimeCallable(const ModifyBackupSetExpireTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBackupSetExpireTimeOutcome()>>(
			[this, request]()
			{
			return this->modifyBackupSetExpireTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyCollationTimeZoneOutcome RdsClient::modifyCollationTimeZone(const ModifyCollationTimeZoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCollationTimeZoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCollationTimeZoneOutcome(ModifyCollationTimeZoneResult(outcome.result()));
	else
		return ModifyCollationTimeZoneOutcome(outcome.error());
}

void RdsClient::modifyCollationTimeZoneAsync(const ModifyCollationTimeZoneRequest& request, const ModifyCollationTimeZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCollationTimeZone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyCollationTimeZoneOutcomeCallable RdsClient::modifyCollationTimeZoneCallable(const ModifyCollationTimeZoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCollationTimeZoneOutcome()>>(
			[this, request]()
			{
			return this->modifyCollationTimeZone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyComputeBurstConfigOutcome RdsClient::modifyComputeBurstConfig(const ModifyComputeBurstConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyComputeBurstConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyComputeBurstConfigOutcome(ModifyComputeBurstConfigResult(outcome.result()));
	else
		return ModifyComputeBurstConfigOutcome(outcome.error());
}

void RdsClient::modifyComputeBurstConfigAsync(const ModifyComputeBurstConfigRequest& request, const ModifyComputeBurstConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyComputeBurstConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyComputeBurstConfigOutcomeCallable RdsClient::modifyComputeBurstConfigCallable(const ModifyComputeBurstConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyComputeBurstConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyComputeBurstConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyCustinsResourceOutcome RdsClient::modifyCustinsResource(const ModifyCustinsResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCustinsResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCustinsResourceOutcome(ModifyCustinsResourceResult(outcome.result()));
	else
		return ModifyCustinsResourceOutcome(outcome.error());
}

void RdsClient::modifyCustinsResourceAsync(const ModifyCustinsResourceRequest& request, const ModifyCustinsResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCustinsResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyCustinsResourceOutcomeCallable RdsClient::modifyCustinsResourceCallable(const ModifyCustinsResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCustinsResourceOutcome()>>(
			[this, request]()
			{
			return this->modifyCustinsResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBDescriptionOutcome RdsClient::modifyDBDescription(const ModifyDBDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBDescriptionOutcome(ModifyDBDescriptionResult(outcome.result()));
	else
		return ModifyDBDescriptionOutcome(outcome.error());
}

void RdsClient::modifyDBDescriptionAsync(const ModifyDBDescriptionRequest& request, const ModifyDBDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBDescriptionOutcomeCallable RdsClient::modifyDBDescriptionCallable(const ModifyDBDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyDBDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceAutoUpgradeMinorVersionOutcome RdsClient::modifyDBInstanceAutoUpgradeMinorVersion(const ModifyDBInstanceAutoUpgradeMinorVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceAutoUpgradeMinorVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceAutoUpgradeMinorVersionOutcome(ModifyDBInstanceAutoUpgradeMinorVersionResult(outcome.result()));
	else
		return ModifyDBInstanceAutoUpgradeMinorVersionOutcome(outcome.error());
}

void RdsClient::modifyDBInstanceAutoUpgradeMinorVersionAsync(const ModifyDBInstanceAutoUpgradeMinorVersionRequest& request, const ModifyDBInstanceAutoUpgradeMinorVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceAutoUpgradeMinorVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceAutoUpgradeMinorVersionOutcomeCallable RdsClient::modifyDBInstanceAutoUpgradeMinorVersionCallable(const ModifyDBInstanceAutoUpgradeMinorVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceAutoUpgradeMinorVersionOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceAutoUpgradeMinorVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceConfigOutcome RdsClient::modifyDBInstanceConfig(const ModifyDBInstanceConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceConfigOutcome(ModifyDBInstanceConfigResult(outcome.result()));
	else
		return ModifyDBInstanceConfigOutcome(outcome.error());
}

void RdsClient::modifyDBInstanceConfigAsync(const ModifyDBInstanceConfigRequest& request, const ModifyDBInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceConfigOutcomeCallable RdsClient::modifyDBInstanceConfigCallable(const ModifyDBInstanceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceConnectionStringOutcome RdsClient::modifyDBInstanceConnectionString(const ModifyDBInstanceConnectionStringRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceConnectionStringOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceConnectionStringOutcome(ModifyDBInstanceConnectionStringResult(outcome.result()));
	else
		return ModifyDBInstanceConnectionStringOutcome(outcome.error());
}

void RdsClient::modifyDBInstanceConnectionStringAsync(const ModifyDBInstanceConnectionStringRequest& request, const ModifyDBInstanceConnectionStringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceConnectionString(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceConnectionStringOutcomeCallable RdsClient::modifyDBInstanceConnectionStringCallable(const ModifyDBInstanceConnectionStringRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceConnectionStringOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceConnectionString(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceDelayedReplicationTimeOutcome RdsClient::modifyDBInstanceDelayedReplicationTime(const ModifyDBInstanceDelayedReplicationTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceDelayedReplicationTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceDelayedReplicationTimeOutcome(ModifyDBInstanceDelayedReplicationTimeResult(outcome.result()));
	else
		return ModifyDBInstanceDelayedReplicationTimeOutcome(outcome.error());
}

void RdsClient::modifyDBInstanceDelayedReplicationTimeAsync(const ModifyDBInstanceDelayedReplicationTimeRequest& request, const ModifyDBInstanceDelayedReplicationTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceDelayedReplicationTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceDelayedReplicationTimeOutcomeCallable RdsClient::modifyDBInstanceDelayedReplicationTimeCallable(const ModifyDBInstanceDelayedReplicationTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceDelayedReplicationTimeOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceDelayedReplicationTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceDeletionProtectionOutcome RdsClient::modifyDBInstanceDeletionProtection(const ModifyDBInstanceDeletionProtectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceDeletionProtectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceDeletionProtectionOutcome(ModifyDBInstanceDeletionProtectionResult(outcome.result()));
	else
		return ModifyDBInstanceDeletionProtectionOutcome(outcome.error());
}

void RdsClient::modifyDBInstanceDeletionProtectionAsync(const ModifyDBInstanceDeletionProtectionRequest& request, const ModifyDBInstanceDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceDeletionProtection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceDeletionProtectionOutcomeCallable RdsClient::modifyDBInstanceDeletionProtectionCallable(const ModifyDBInstanceDeletionProtectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceDeletionProtectionOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceDeletionProtection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceDescriptionOutcome RdsClient::modifyDBInstanceDescription(const ModifyDBInstanceDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceDescriptionOutcome(ModifyDBInstanceDescriptionResult(outcome.result()));
	else
		return ModifyDBInstanceDescriptionOutcome(outcome.error());
}

void RdsClient::modifyDBInstanceDescriptionAsync(const ModifyDBInstanceDescriptionRequest& request, const ModifyDBInstanceDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceDescriptionOutcomeCallable RdsClient::modifyDBInstanceDescriptionCallable(const ModifyDBInstanceDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceEndpointOutcome RdsClient::modifyDBInstanceEndpoint(const ModifyDBInstanceEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceEndpointOutcome(ModifyDBInstanceEndpointResult(outcome.result()));
	else
		return ModifyDBInstanceEndpointOutcome(outcome.error());
}

void RdsClient::modifyDBInstanceEndpointAsync(const ModifyDBInstanceEndpointRequest& request, const ModifyDBInstanceEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceEndpointOutcomeCallable RdsClient::modifyDBInstanceEndpointCallable(const ModifyDBInstanceEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceEndpointOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceEndpointAddressOutcome RdsClient::modifyDBInstanceEndpointAddress(const ModifyDBInstanceEndpointAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceEndpointAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceEndpointAddressOutcome(ModifyDBInstanceEndpointAddressResult(outcome.result()));
	else
		return ModifyDBInstanceEndpointAddressOutcome(outcome.error());
}

void RdsClient::modifyDBInstanceEndpointAddressAsync(const ModifyDBInstanceEndpointAddressRequest& request, const ModifyDBInstanceEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceEndpointAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceEndpointAddressOutcomeCallable RdsClient::modifyDBInstanceEndpointAddressCallable(const ModifyDBInstanceEndpointAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceEndpointAddressOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceEndpointAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceHAConfigOutcome RdsClient::modifyDBInstanceHAConfig(const ModifyDBInstanceHAConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceHAConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceHAConfigOutcome(ModifyDBInstanceHAConfigResult(outcome.result()));
	else
		return ModifyDBInstanceHAConfigOutcome(outcome.error());
}

void RdsClient::modifyDBInstanceHAConfigAsync(const ModifyDBInstanceHAConfigRequest& request, const ModifyDBInstanceHAConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceHAConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceHAConfigOutcomeCallable RdsClient::modifyDBInstanceHAConfigCallable(const ModifyDBInstanceHAConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceHAConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceHAConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceMaintainTimeOutcome RdsClient::modifyDBInstanceMaintainTime(const ModifyDBInstanceMaintainTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceMaintainTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceMaintainTimeOutcome(ModifyDBInstanceMaintainTimeResult(outcome.result()));
	else
		return ModifyDBInstanceMaintainTimeOutcome(outcome.error());
}

void RdsClient::modifyDBInstanceMaintainTimeAsync(const ModifyDBInstanceMaintainTimeRequest& request, const ModifyDBInstanceMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceMaintainTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceMaintainTimeOutcomeCallable RdsClient::modifyDBInstanceMaintainTimeCallable(const ModifyDBInstanceMaintainTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceMaintainTimeOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceMaintainTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceMetricsOutcome RdsClient::modifyDBInstanceMetrics(const ModifyDBInstanceMetricsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceMetricsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceMetricsOutcome(ModifyDBInstanceMetricsResult(outcome.result()));
	else
		return ModifyDBInstanceMetricsOutcome(outcome.error());
}

void RdsClient::modifyDBInstanceMetricsAsync(const ModifyDBInstanceMetricsRequest& request, const ModifyDBInstanceMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceMetrics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceMetricsOutcomeCallable RdsClient::modifyDBInstanceMetricsCallable(const ModifyDBInstanceMetricsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceMetricsOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceMetrics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceMonitorOutcome RdsClient::modifyDBInstanceMonitor(const ModifyDBInstanceMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceMonitorOutcome(ModifyDBInstanceMonitorResult(outcome.result()));
	else
		return ModifyDBInstanceMonitorOutcome(outcome.error());
}

void RdsClient::modifyDBInstanceMonitorAsync(const ModifyDBInstanceMonitorRequest& request, const ModifyDBInstanceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceMonitorOutcomeCallable RdsClient::modifyDBInstanceMonitorCallable(const ModifyDBInstanceMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceMonitorOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceNetworkExpireTimeOutcome RdsClient::modifyDBInstanceNetworkExpireTime(const ModifyDBInstanceNetworkExpireTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceNetworkExpireTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceNetworkExpireTimeOutcome(ModifyDBInstanceNetworkExpireTimeResult(outcome.result()));
	else
		return ModifyDBInstanceNetworkExpireTimeOutcome(outcome.error());
}

void RdsClient::modifyDBInstanceNetworkExpireTimeAsync(const ModifyDBInstanceNetworkExpireTimeRequest& request, const ModifyDBInstanceNetworkExpireTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceNetworkExpireTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceNetworkExpireTimeOutcomeCallable RdsClient::modifyDBInstanceNetworkExpireTimeCallable(const ModifyDBInstanceNetworkExpireTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceNetworkExpireTimeOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceNetworkExpireTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceNetworkTypeOutcome RdsClient::modifyDBInstanceNetworkType(const ModifyDBInstanceNetworkTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceNetworkTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceNetworkTypeOutcome(ModifyDBInstanceNetworkTypeResult(outcome.result()));
	else
		return ModifyDBInstanceNetworkTypeOutcome(outcome.error());
}

void RdsClient::modifyDBInstanceNetworkTypeAsync(const ModifyDBInstanceNetworkTypeRequest& request, const ModifyDBInstanceNetworkTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceNetworkType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceNetworkTypeOutcomeCallable RdsClient::modifyDBInstanceNetworkTypeCallable(const ModifyDBInstanceNetworkTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceNetworkTypeOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceNetworkType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstancePayTypeOutcome RdsClient::modifyDBInstancePayType(const ModifyDBInstancePayTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstancePayTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstancePayTypeOutcome(ModifyDBInstancePayTypeResult(outcome.result()));
	else
		return ModifyDBInstancePayTypeOutcome(outcome.error());
}

void RdsClient::modifyDBInstancePayTypeAsync(const ModifyDBInstancePayTypeRequest& request, const ModifyDBInstancePayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstancePayType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstancePayTypeOutcomeCallable RdsClient::modifyDBInstancePayTypeCallable(const ModifyDBInstancePayTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstancePayTypeOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstancePayType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceReplicationSwitchOutcome RdsClient::modifyDBInstanceReplicationSwitch(const ModifyDBInstanceReplicationSwitchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceReplicationSwitchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceReplicationSwitchOutcome(ModifyDBInstanceReplicationSwitchResult(outcome.result()));
	else
		return ModifyDBInstanceReplicationSwitchOutcome(outcome.error());
}

void RdsClient::modifyDBInstanceReplicationSwitchAsync(const ModifyDBInstanceReplicationSwitchRequest& request, const ModifyDBInstanceReplicationSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceReplicationSwitch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceReplicationSwitchOutcomeCallable RdsClient::modifyDBInstanceReplicationSwitchCallable(const ModifyDBInstanceReplicationSwitchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceReplicationSwitchOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceReplicationSwitch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceSSLOutcome RdsClient::modifyDBInstanceSSL(const ModifyDBInstanceSSLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceSSLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceSSLOutcome(ModifyDBInstanceSSLResult(outcome.result()));
	else
		return ModifyDBInstanceSSLOutcome(outcome.error());
}

void RdsClient::modifyDBInstanceSSLAsync(const ModifyDBInstanceSSLRequest& request, const ModifyDBInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceSSL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceSSLOutcomeCallable RdsClient::modifyDBInstanceSSLCallable(const ModifyDBInstanceSSLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceSSLOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceSSL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceSecurityGroupRuleOutcome RdsClient::modifyDBInstanceSecurityGroupRule(const ModifyDBInstanceSecurityGroupRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceSecurityGroupRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceSecurityGroupRuleOutcome(ModifyDBInstanceSecurityGroupRuleResult(outcome.result()));
	else
		return ModifyDBInstanceSecurityGroupRuleOutcome(outcome.error());
}

void RdsClient::modifyDBInstanceSecurityGroupRuleAsync(const ModifyDBInstanceSecurityGroupRuleRequest& request, const ModifyDBInstanceSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceSecurityGroupRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceSecurityGroupRuleOutcomeCallable RdsClient::modifyDBInstanceSecurityGroupRuleCallable(const ModifyDBInstanceSecurityGroupRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceSecurityGroupRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceSecurityGroupRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceSpecOutcome RdsClient::modifyDBInstanceSpec(const ModifyDBInstanceSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceSpecOutcome(ModifyDBInstanceSpecResult(outcome.result()));
	else
		return ModifyDBInstanceSpecOutcome(outcome.error());
}

void RdsClient::modifyDBInstanceSpecAsync(const ModifyDBInstanceSpecRequest& request, const ModifyDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceSpecOutcomeCallable RdsClient::modifyDBInstanceSpecCallable(const ModifyDBInstanceSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceTDEOutcome RdsClient::modifyDBInstanceTDE(const ModifyDBInstanceTDERequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceTDEOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceTDEOutcome(ModifyDBInstanceTDEResult(outcome.result()));
	else
		return ModifyDBInstanceTDEOutcome(outcome.error());
}

void RdsClient::modifyDBInstanceTDEAsync(const ModifyDBInstanceTDERequest& request, const ModifyDBInstanceTDEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceTDE(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceTDEOutcomeCallable RdsClient::modifyDBInstanceTDECallable(const ModifyDBInstanceTDERequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceTDEOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceTDE(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBNodeOutcome RdsClient::modifyDBNode(const ModifyDBNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBNodeOutcome(ModifyDBNodeResult(outcome.result()));
	else
		return ModifyDBNodeOutcome(outcome.error());
}

void RdsClient::modifyDBNodeAsync(const ModifyDBNodeRequest& request, const ModifyDBNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBNodeOutcomeCallable RdsClient::modifyDBNodeCallable(const ModifyDBNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBNodeOutcome()>>(
			[this, request]()
			{
			return this->modifyDBNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBProxyOutcome RdsClient::modifyDBProxy(const ModifyDBProxyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBProxyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBProxyOutcome(ModifyDBProxyResult(outcome.result()));
	else
		return ModifyDBProxyOutcome(outcome.error());
}

void RdsClient::modifyDBProxyAsync(const ModifyDBProxyRequest& request, const ModifyDBProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBProxy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBProxyOutcomeCallable RdsClient::modifyDBProxyCallable(const ModifyDBProxyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBProxyOutcome()>>(
			[this, request]()
			{
			return this->modifyDBProxy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBProxyEndpointOutcome RdsClient::modifyDBProxyEndpoint(const ModifyDBProxyEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBProxyEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBProxyEndpointOutcome(ModifyDBProxyEndpointResult(outcome.result()));
	else
		return ModifyDBProxyEndpointOutcome(outcome.error());
}

void RdsClient::modifyDBProxyEndpointAsync(const ModifyDBProxyEndpointRequest& request, const ModifyDBProxyEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBProxyEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBProxyEndpointOutcomeCallable RdsClient::modifyDBProxyEndpointCallable(const ModifyDBProxyEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBProxyEndpointOutcome()>>(
			[this, request]()
			{
			return this->modifyDBProxyEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBProxyEndpointAddressOutcome RdsClient::modifyDBProxyEndpointAddress(const ModifyDBProxyEndpointAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBProxyEndpointAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBProxyEndpointAddressOutcome(ModifyDBProxyEndpointAddressResult(outcome.result()));
	else
		return ModifyDBProxyEndpointAddressOutcome(outcome.error());
}

void RdsClient::modifyDBProxyEndpointAddressAsync(const ModifyDBProxyEndpointAddressRequest& request, const ModifyDBProxyEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBProxyEndpointAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBProxyEndpointAddressOutcomeCallable RdsClient::modifyDBProxyEndpointAddressCallable(const ModifyDBProxyEndpointAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBProxyEndpointAddressOutcome()>>(
			[this, request]()
			{
			return this->modifyDBProxyEndpointAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBProxyInstanceOutcome RdsClient::modifyDBProxyInstance(const ModifyDBProxyInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBProxyInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBProxyInstanceOutcome(ModifyDBProxyInstanceResult(outcome.result()));
	else
		return ModifyDBProxyInstanceOutcome(outcome.error());
}

void RdsClient::modifyDBProxyInstanceAsync(const ModifyDBProxyInstanceRequest& request, const ModifyDBProxyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBProxyInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBProxyInstanceOutcomeCallable RdsClient::modifyDBProxyInstanceCallable(const ModifyDBProxyInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBProxyInstanceOutcome()>>(
			[this, request]()
			{
			return this->modifyDBProxyInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDTCSecurityIpHostsForSQLServerOutcome RdsClient::modifyDTCSecurityIpHostsForSQLServer(const ModifyDTCSecurityIpHostsForSQLServerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDTCSecurityIpHostsForSQLServerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDTCSecurityIpHostsForSQLServerOutcome(ModifyDTCSecurityIpHostsForSQLServerResult(outcome.result()));
	else
		return ModifyDTCSecurityIpHostsForSQLServerOutcome(outcome.error());
}

void RdsClient::modifyDTCSecurityIpHostsForSQLServerAsync(const ModifyDTCSecurityIpHostsForSQLServerRequest& request, const ModifyDTCSecurityIpHostsForSQLServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDTCSecurityIpHostsForSQLServer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDTCSecurityIpHostsForSQLServerOutcomeCallable RdsClient::modifyDTCSecurityIpHostsForSQLServerCallable(const ModifyDTCSecurityIpHostsForSQLServerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDTCSecurityIpHostsForSQLServerOutcome()>>(
			[this, request]()
			{
			return this->modifyDTCSecurityIpHostsForSQLServer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDasInstanceConfigOutcome RdsClient::modifyDasInstanceConfig(const ModifyDasInstanceConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDasInstanceConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDasInstanceConfigOutcome(ModifyDasInstanceConfigResult(outcome.result()));
	else
		return ModifyDasInstanceConfigOutcome(outcome.error());
}

void RdsClient::modifyDasInstanceConfigAsync(const ModifyDasInstanceConfigRequest& request, const ModifyDasInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDasInstanceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDasInstanceConfigOutcomeCallable RdsClient::modifyDasInstanceConfigCallable(const ModifyDasInstanceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDasInstanceConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyDasInstanceConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDatabaseConfigOutcome RdsClient::modifyDatabaseConfig(const ModifyDatabaseConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDatabaseConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDatabaseConfigOutcome(ModifyDatabaseConfigResult(outcome.result()));
	else
		return ModifyDatabaseConfigOutcome(outcome.error());
}

void RdsClient::modifyDatabaseConfigAsync(const ModifyDatabaseConfigRequest& request, const ModifyDatabaseConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDatabaseConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDatabaseConfigOutcomeCallable RdsClient::modifyDatabaseConfigCallable(const ModifyDatabaseConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDatabaseConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyDatabaseConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDbProxyInstanceSslOutcome RdsClient::modifyDbProxyInstanceSsl(const ModifyDbProxyInstanceSslRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDbProxyInstanceSslOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDbProxyInstanceSslOutcome(ModifyDbProxyInstanceSslResult(outcome.result()));
	else
		return ModifyDbProxyInstanceSslOutcome(outcome.error());
}

void RdsClient::modifyDbProxyInstanceSslAsync(const ModifyDbProxyInstanceSslRequest& request, const ModifyDbProxyInstanceSslAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDbProxyInstanceSsl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDbProxyInstanceSslOutcomeCallable RdsClient::modifyDbProxyInstanceSslCallable(const ModifyDbProxyInstanceSslRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDbProxyInstanceSslOutcome()>>(
			[this, request]()
			{
			return this->modifyDbProxyInstanceSsl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyEventInfoOutcome RdsClient::modifyEventInfo(const ModifyEventInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyEventInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyEventInfoOutcome(ModifyEventInfoResult(outcome.result()));
	else
		return ModifyEventInfoOutcome(outcome.error());
}

void RdsClient::modifyEventInfoAsync(const ModifyEventInfoRequest& request, const ModifyEventInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyEventInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyEventInfoOutcomeCallable RdsClient::modifyEventInfoCallable(const ModifyEventInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyEventInfoOutcome()>>(
			[this, request]()
			{
			return this->modifyEventInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyHADiagnoseConfigOutcome RdsClient::modifyHADiagnoseConfig(const ModifyHADiagnoseConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyHADiagnoseConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyHADiagnoseConfigOutcome(ModifyHADiagnoseConfigResult(outcome.result()));
	else
		return ModifyHADiagnoseConfigOutcome(outcome.error());
}

void RdsClient::modifyHADiagnoseConfigAsync(const ModifyHADiagnoseConfigRequest& request, const ModifyHADiagnoseConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyHADiagnoseConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyHADiagnoseConfigOutcomeCallable RdsClient::modifyHADiagnoseConfigCallable(const ModifyHADiagnoseConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyHADiagnoseConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyHADiagnoseConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyHASwitchConfigOutcome RdsClient::modifyHASwitchConfig(const ModifyHASwitchConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyHASwitchConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyHASwitchConfigOutcome(ModifyHASwitchConfigResult(outcome.result()));
	else
		return ModifyHASwitchConfigOutcome(outcome.error());
}

void RdsClient::modifyHASwitchConfigAsync(const ModifyHASwitchConfigRequest& request, const ModifyHASwitchConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyHASwitchConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyHASwitchConfigOutcomeCallable RdsClient::modifyHASwitchConfigCallable(const ModifyHASwitchConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyHASwitchConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyHASwitchConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyInstanceAutoRenewalAttributeOutcome RdsClient::modifyInstanceAutoRenewalAttribute(const ModifyInstanceAutoRenewalAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceAutoRenewalAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceAutoRenewalAttributeOutcome(ModifyInstanceAutoRenewalAttributeResult(outcome.result()));
	else
		return ModifyInstanceAutoRenewalAttributeOutcome(outcome.error());
}

void RdsClient::modifyInstanceAutoRenewalAttributeAsync(const ModifyInstanceAutoRenewalAttributeRequest& request, const ModifyInstanceAutoRenewalAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceAutoRenewalAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyInstanceAutoRenewalAttributeOutcomeCallable RdsClient::modifyInstanceAutoRenewalAttributeCallable(const ModifyInstanceAutoRenewalAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceAutoRenewalAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceAutoRenewalAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyInstanceCrossBackupPolicyOutcome RdsClient::modifyInstanceCrossBackupPolicy(const ModifyInstanceCrossBackupPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceCrossBackupPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceCrossBackupPolicyOutcome(ModifyInstanceCrossBackupPolicyResult(outcome.result()));
	else
		return ModifyInstanceCrossBackupPolicyOutcome(outcome.error());
}

void RdsClient::modifyInstanceCrossBackupPolicyAsync(const ModifyInstanceCrossBackupPolicyRequest& request, const ModifyInstanceCrossBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceCrossBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyInstanceCrossBackupPolicyOutcomeCallable RdsClient::modifyInstanceCrossBackupPolicyCallable(const ModifyInstanceCrossBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceCrossBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceCrossBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyMaskingRulesOutcome RdsClient::modifyMaskingRules(const ModifyMaskingRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyMaskingRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyMaskingRulesOutcome(ModifyMaskingRulesResult(outcome.result()));
	else
		return ModifyMaskingRulesOutcome(outcome.error());
}

void RdsClient::modifyMaskingRulesAsync(const ModifyMaskingRulesRequest& request, const ModifyMaskingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyMaskingRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyMaskingRulesOutcomeCallable RdsClient::modifyMaskingRulesCallable(const ModifyMaskingRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyMaskingRulesOutcome()>>(
			[this, request]()
			{
			return this->modifyMaskingRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyPGHbaConfigOutcome RdsClient::modifyPGHbaConfig(const ModifyPGHbaConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPGHbaConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPGHbaConfigOutcome(ModifyPGHbaConfigResult(outcome.result()));
	else
		return ModifyPGHbaConfigOutcome(outcome.error());
}

void RdsClient::modifyPGHbaConfigAsync(const ModifyPGHbaConfigRequest& request, const ModifyPGHbaConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPGHbaConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyPGHbaConfigOutcomeCallable RdsClient::modifyPGHbaConfigCallable(const ModifyPGHbaConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPGHbaConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyPGHbaConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyParameterOutcome RdsClient::modifyParameter(const ModifyParameterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyParameterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyParameterOutcome(ModifyParameterResult(outcome.result()));
	else
		return ModifyParameterOutcome(outcome.error());
}

void RdsClient::modifyParameterAsync(const ModifyParameterRequest& request, const ModifyParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyParameter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyParameterOutcomeCallable RdsClient::modifyParameterCallable(const ModifyParameterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyParameterOutcome()>>(
			[this, request]()
			{
			return this->modifyParameter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyParameterGroupOutcome RdsClient::modifyParameterGroup(const ModifyParameterGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyParameterGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyParameterGroupOutcome(ModifyParameterGroupResult(outcome.result()));
	else
		return ModifyParameterGroupOutcome(outcome.error());
}

void RdsClient::modifyParameterGroupAsync(const ModifyParameterGroupRequest& request, const ModifyParameterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyParameterGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyParameterGroupOutcomeCallable RdsClient::modifyParameterGroupCallable(const ModifyParameterGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyParameterGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyParameterGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyRCDiskSpecOutcome RdsClient::modifyRCDiskSpec(const ModifyRCDiskSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRCDiskSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRCDiskSpecOutcome(ModifyRCDiskSpecResult(outcome.result()));
	else
		return ModifyRCDiskSpecOutcome(outcome.error());
}

void RdsClient::modifyRCDiskSpecAsync(const ModifyRCDiskSpecRequest& request, const ModifyRCDiskSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRCDiskSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyRCDiskSpecOutcomeCallable RdsClient::modifyRCDiskSpecCallable(const ModifyRCDiskSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRCDiskSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyRCDiskSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyRCInstanceOutcome RdsClient::modifyRCInstance(const ModifyRCInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRCInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRCInstanceOutcome(ModifyRCInstanceResult(outcome.result()));
	else
		return ModifyRCInstanceOutcome(outcome.error());
}

void RdsClient::modifyRCInstanceAsync(const ModifyRCInstanceRequest& request, const ModifyRCInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRCInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyRCInstanceOutcomeCallable RdsClient::modifyRCInstanceCallable(const ModifyRCInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRCInstanceOutcome()>>(
			[this, request]()
			{
			return this->modifyRCInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyRCInstanceAttributeOutcome RdsClient::modifyRCInstanceAttribute(const ModifyRCInstanceAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRCInstanceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRCInstanceAttributeOutcome(ModifyRCInstanceAttributeResult(outcome.result()));
	else
		return ModifyRCInstanceAttributeOutcome(outcome.error());
}

void RdsClient::modifyRCInstanceAttributeAsync(const ModifyRCInstanceAttributeRequest& request, const ModifyRCInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRCInstanceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyRCInstanceAttributeOutcomeCallable RdsClient::modifyRCInstanceAttributeCallable(const ModifyRCInstanceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRCInstanceAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyRCInstanceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyRCInstanceChargeTypeOutcome RdsClient::modifyRCInstanceChargeType(const ModifyRCInstanceChargeTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRCInstanceChargeTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRCInstanceChargeTypeOutcome(ModifyRCInstanceChargeTypeResult(outcome.result()));
	else
		return ModifyRCInstanceChargeTypeOutcome(outcome.error());
}

void RdsClient::modifyRCInstanceChargeTypeAsync(const ModifyRCInstanceChargeTypeRequest& request, const ModifyRCInstanceChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRCInstanceChargeType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyRCInstanceChargeTypeOutcomeCallable RdsClient::modifyRCInstanceChargeTypeCallable(const ModifyRCInstanceChargeTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRCInstanceChargeTypeOutcome()>>(
			[this, request]()
			{
			return this->modifyRCInstanceChargeType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyRCInstanceDescriptionOutcome RdsClient::modifyRCInstanceDescription(const ModifyRCInstanceDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRCInstanceDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRCInstanceDescriptionOutcome(ModifyRCInstanceDescriptionResult(outcome.result()));
	else
		return ModifyRCInstanceDescriptionOutcome(outcome.error());
}

void RdsClient::modifyRCInstanceDescriptionAsync(const ModifyRCInstanceDescriptionRequest& request, const ModifyRCInstanceDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRCInstanceDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyRCInstanceDescriptionOutcomeCallable RdsClient::modifyRCInstanceDescriptionCallable(const ModifyRCInstanceDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRCInstanceDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyRCInstanceDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyRCInstanceKeyPairOutcome RdsClient::modifyRCInstanceKeyPair(const ModifyRCInstanceKeyPairRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRCInstanceKeyPairOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRCInstanceKeyPairOutcome(ModifyRCInstanceKeyPairResult(outcome.result()));
	else
		return ModifyRCInstanceKeyPairOutcome(outcome.error());
}

void RdsClient::modifyRCInstanceKeyPairAsync(const ModifyRCInstanceKeyPairRequest& request, const ModifyRCInstanceKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRCInstanceKeyPair(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyRCInstanceKeyPairOutcomeCallable RdsClient::modifyRCInstanceKeyPairCallable(const ModifyRCInstanceKeyPairRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRCInstanceKeyPairOutcome()>>(
			[this, request]()
			{
			return this->modifyRCInstanceKeyPair(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyRCInstanceNetworkSpecOutcome RdsClient::modifyRCInstanceNetworkSpec(const ModifyRCInstanceNetworkSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRCInstanceNetworkSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRCInstanceNetworkSpecOutcome(ModifyRCInstanceNetworkSpecResult(outcome.result()));
	else
		return ModifyRCInstanceNetworkSpecOutcome(outcome.error());
}

void RdsClient::modifyRCInstanceNetworkSpecAsync(const ModifyRCInstanceNetworkSpecRequest& request, const ModifyRCInstanceNetworkSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRCInstanceNetworkSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyRCInstanceNetworkSpecOutcomeCallable RdsClient::modifyRCInstanceNetworkSpecCallable(const ModifyRCInstanceNetworkSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRCInstanceNetworkSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyRCInstanceNetworkSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyRCSecurityGroupPermissionOutcome RdsClient::modifyRCSecurityGroupPermission(const ModifyRCSecurityGroupPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRCSecurityGroupPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRCSecurityGroupPermissionOutcome(ModifyRCSecurityGroupPermissionResult(outcome.result()));
	else
		return ModifyRCSecurityGroupPermissionOutcome(outcome.error());
}

void RdsClient::modifyRCSecurityGroupPermissionAsync(const ModifyRCSecurityGroupPermissionRequest& request, const ModifyRCSecurityGroupPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRCSecurityGroupPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyRCSecurityGroupPermissionOutcomeCallable RdsClient::modifyRCSecurityGroupPermissionCallable(const ModifyRCSecurityGroupPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRCSecurityGroupPermissionOutcome()>>(
			[this, request]()
			{
			return this->modifyRCSecurityGroupPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyReadWriteSplittingConnectionOutcome RdsClient::modifyReadWriteSplittingConnection(const ModifyReadWriteSplittingConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyReadWriteSplittingConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyReadWriteSplittingConnectionOutcome(ModifyReadWriteSplittingConnectionResult(outcome.result()));
	else
		return ModifyReadWriteSplittingConnectionOutcome(outcome.error());
}

void RdsClient::modifyReadWriteSplittingConnectionAsync(const ModifyReadWriteSplittingConnectionRequest& request, const ModifyReadWriteSplittingConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyReadWriteSplittingConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyReadWriteSplittingConnectionOutcomeCallable RdsClient::modifyReadWriteSplittingConnectionCallable(const ModifyReadWriteSplittingConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyReadWriteSplittingConnectionOutcome()>>(
			[this, request]()
			{
			return this->modifyReadWriteSplittingConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyReadonlyInstanceDelayReplicationTimeOutcome RdsClient::modifyReadonlyInstanceDelayReplicationTime(const ModifyReadonlyInstanceDelayReplicationTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyReadonlyInstanceDelayReplicationTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyReadonlyInstanceDelayReplicationTimeOutcome(ModifyReadonlyInstanceDelayReplicationTimeResult(outcome.result()));
	else
		return ModifyReadonlyInstanceDelayReplicationTimeOutcome(outcome.error());
}

void RdsClient::modifyReadonlyInstanceDelayReplicationTimeAsync(const ModifyReadonlyInstanceDelayReplicationTimeRequest& request, const ModifyReadonlyInstanceDelayReplicationTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyReadonlyInstanceDelayReplicationTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyReadonlyInstanceDelayReplicationTimeOutcomeCallable RdsClient::modifyReadonlyInstanceDelayReplicationTimeCallable(const ModifyReadonlyInstanceDelayReplicationTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyReadonlyInstanceDelayReplicationTimeOutcome()>>(
			[this, request]()
			{
			return this->modifyReadonlyInstanceDelayReplicationTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyResourceGroupOutcome RdsClient::modifyResourceGroup(const ModifyResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyResourceGroupOutcome(ModifyResourceGroupResult(outcome.result()));
	else
		return ModifyResourceGroupOutcome(outcome.error());
}

void RdsClient::modifyResourceGroupAsync(const ModifyResourceGroupRequest& request, const ModifyResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyResourceGroupOutcomeCallable RdsClient::modifyResourceGroupCallable(const ModifyResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifySQLCollectorPolicyOutcome RdsClient::modifySQLCollectorPolicy(const ModifySQLCollectorPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySQLCollectorPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySQLCollectorPolicyOutcome(ModifySQLCollectorPolicyResult(outcome.result()));
	else
		return ModifySQLCollectorPolicyOutcome(outcome.error());
}

void RdsClient::modifySQLCollectorPolicyAsync(const ModifySQLCollectorPolicyRequest& request, const ModifySQLCollectorPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySQLCollectorPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifySQLCollectorPolicyOutcomeCallable RdsClient::modifySQLCollectorPolicyCallable(const ModifySQLCollectorPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySQLCollectorPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifySQLCollectorPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifySQLCollectorRetentionOutcome RdsClient::modifySQLCollectorRetention(const ModifySQLCollectorRetentionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySQLCollectorRetentionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySQLCollectorRetentionOutcome(ModifySQLCollectorRetentionResult(outcome.result()));
	else
		return ModifySQLCollectorRetentionOutcome(outcome.error());
}

void RdsClient::modifySQLCollectorRetentionAsync(const ModifySQLCollectorRetentionRequest& request, const ModifySQLCollectorRetentionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySQLCollectorRetention(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifySQLCollectorRetentionOutcomeCallable RdsClient::modifySQLCollectorRetentionCallable(const ModifySQLCollectorRetentionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySQLCollectorRetentionOutcome()>>(
			[this, request]()
			{
			return this->modifySQLCollectorRetention(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifySecurityGroupConfigurationOutcome RdsClient::modifySecurityGroupConfiguration(const ModifySecurityGroupConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySecurityGroupConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySecurityGroupConfigurationOutcome(ModifySecurityGroupConfigurationResult(outcome.result()));
	else
		return ModifySecurityGroupConfigurationOutcome(outcome.error());
}

void RdsClient::modifySecurityGroupConfigurationAsync(const ModifySecurityGroupConfigurationRequest& request, const ModifySecurityGroupConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySecurityGroupConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifySecurityGroupConfigurationOutcomeCallable RdsClient::modifySecurityGroupConfigurationCallable(const ModifySecurityGroupConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySecurityGroupConfigurationOutcome()>>(
			[this, request]()
			{
			return this->modifySecurityGroupConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifySecurityIpsOutcome RdsClient::modifySecurityIps(const ModifySecurityIpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySecurityIpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySecurityIpsOutcome(ModifySecurityIpsResult(outcome.result()));
	else
		return ModifySecurityIpsOutcome(outcome.error());
}

void RdsClient::modifySecurityIpsAsync(const ModifySecurityIpsRequest& request, const ModifySecurityIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySecurityIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifySecurityIpsOutcomeCallable RdsClient::modifySecurityIpsCallable(const ModifySecurityIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySecurityIpsOutcome()>>(
			[this, request]()
			{
			return this->modifySecurityIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyTaskInfoOutcome RdsClient::modifyTaskInfo(const ModifyTaskInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTaskInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTaskInfoOutcome(ModifyTaskInfoResult(outcome.result()));
	else
		return ModifyTaskInfoOutcome(outcome.error());
}

void RdsClient::modifyTaskInfoAsync(const ModifyTaskInfoRequest& request, const ModifyTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTaskInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyTaskInfoOutcomeCallable RdsClient::modifyTaskInfoCallable(const ModifyTaskInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTaskInfoOutcome()>>(
			[this, request]()
			{
			return this->modifyTaskInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyWhitelistTemplateOutcome RdsClient::modifyWhitelistTemplate(const ModifyWhitelistTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyWhitelistTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyWhitelistTemplateOutcome(ModifyWhitelistTemplateResult(outcome.result()));
	else
		return ModifyWhitelistTemplateOutcome(outcome.error());
}

void RdsClient::modifyWhitelistTemplateAsync(const ModifyWhitelistTemplateRequest& request, const ModifyWhitelistTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWhitelistTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyWhitelistTemplateOutcomeCallable RdsClient::modifyWhitelistTemplateCallable(const ModifyWhitelistTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWhitelistTemplateOutcome()>>(
			[this, request]()
			{
			return this->modifyWhitelistTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::PreCheckCreateOrderForDeleteDBNodesOutcome RdsClient::preCheckCreateOrderForDeleteDBNodes(const PreCheckCreateOrderForDeleteDBNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PreCheckCreateOrderForDeleteDBNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PreCheckCreateOrderForDeleteDBNodesOutcome(PreCheckCreateOrderForDeleteDBNodesResult(outcome.result()));
	else
		return PreCheckCreateOrderForDeleteDBNodesOutcome(outcome.error());
}

void RdsClient::preCheckCreateOrderForDeleteDBNodesAsync(const PreCheckCreateOrderForDeleteDBNodesRequest& request, const PreCheckCreateOrderForDeleteDBNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, preCheckCreateOrderForDeleteDBNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::PreCheckCreateOrderForDeleteDBNodesOutcomeCallable RdsClient::preCheckCreateOrderForDeleteDBNodesCallable(const PreCheckCreateOrderForDeleteDBNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PreCheckCreateOrderForDeleteDBNodesOutcome()>>(
			[this, request]()
			{
			return this->preCheckCreateOrderForDeleteDBNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::PurgeDBInstanceLogOutcome RdsClient::purgeDBInstanceLog(const PurgeDBInstanceLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PurgeDBInstanceLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PurgeDBInstanceLogOutcome(PurgeDBInstanceLogResult(outcome.result()));
	else
		return PurgeDBInstanceLogOutcome(outcome.error());
}

void RdsClient::purgeDBInstanceLogAsync(const PurgeDBInstanceLogRequest& request, const PurgeDBInstanceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, purgeDBInstanceLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::PurgeDBInstanceLogOutcomeCallable RdsClient::purgeDBInstanceLogCallable(const PurgeDBInstanceLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PurgeDBInstanceLogOutcome()>>(
			[this, request]()
			{
			return this->purgeDBInstanceLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::QueryNotifyOutcome RdsClient::queryNotify(const QueryNotifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryNotifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryNotifyOutcome(QueryNotifyResult(outcome.result()));
	else
		return QueryNotifyOutcome(outcome.error());
}

void RdsClient::queryNotifyAsync(const QueryNotifyRequest& request, const QueryNotifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryNotify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::QueryNotifyOutcomeCallable RdsClient::queryNotifyCallable(const QueryNotifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryNotifyOutcome()>>(
			[this, request]()
			{
			return this->queryNotify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::QueryRecommendByCodeOutcome RdsClient::queryRecommendByCode(const QueryRecommendByCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRecommendByCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRecommendByCodeOutcome(QueryRecommendByCodeResult(outcome.result()));
	else
		return QueryRecommendByCodeOutcome(outcome.error());
}

void RdsClient::queryRecommendByCodeAsync(const QueryRecommendByCodeRequest& request, const QueryRecommendByCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRecommendByCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::QueryRecommendByCodeOutcomeCallable RdsClient::queryRecommendByCodeCallable(const QueryRecommendByCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRecommendByCodeOutcome()>>(
			[this, request]()
			{
			return this->queryRecommendByCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RebootRCInstanceOutcome RdsClient::rebootRCInstance(const RebootRCInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RebootRCInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RebootRCInstanceOutcome(RebootRCInstanceResult(outcome.result()));
	else
		return RebootRCInstanceOutcome(outcome.error());
}

void RdsClient::rebootRCInstanceAsync(const RebootRCInstanceRequest& request, const RebootRCInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rebootRCInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RebootRCInstanceOutcomeCallable RdsClient::rebootRCInstanceCallable(const RebootRCInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RebootRCInstanceOutcome()>>(
			[this, request]()
			{
			return this->rebootRCInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RebootRCInstancesOutcome RdsClient::rebootRCInstances(const RebootRCInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RebootRCInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RebootRCInstancesOutcome(RebootRCInstancesResult(outcome.result()));
	else
		return RebootRCInstancesOutcome(outcome.error());
}

void RdsClient::rebootRCInstancesAsync(const RebootRCInstancesRequest& request, const RebootRCInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rebootRCInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RebootRCInstancesOutcomeCallable RdsClient::rebootRCInstancesCallable(const RebootRCInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RebootRCInstancesOutcome()>>(
			[this, request]()
			{
			return this->rebootRCInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RebuildDBInstanceOutcome RdsClient::rebuildDBInstance(const RebuildDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RebuildDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RebuildDBInstanceOutcome(RebuildDBInstanceResult(outcome.result()));
	else
		return RebuildDBInstanceOutcome(outcome.error());
}

void RdsClient::rebuildDBInstanceAsync(const RebuildDBInstanceRequest& request, const RebuildDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rebuildDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RebuildDBInstanceOutcomeCallable RdsClient::rebuildDBInstanceCallable(const RebuildDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RebuildDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->rebuildDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RebuildReplicationLinkOutcome RdsClient::rebuildReplicationLink(const RebuildReplicationLinkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RebuildReplicationLinkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RebuildReplicationLinkOutcome(RebuildReplicationLinkResult(outcome.result()));
	else
		return RebuildReplicationLinkOutcome(outcome.error());
}

void RdsClient::rebuildReplicationLinkAsync(const RebuildReplicationLinkRequest& request, const RebuildReplicationLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rebuildReplicationLink(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RebuildReplicationLinkOutcomeCallable RdsClient::rebuildReplicationLinkCallable(const RebuildReplicationLinkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RebuildReplicationLinkOutcome()>>(
			[this, request]()
			{
			return this->rebuildReplicationLink(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ReceiveDBInstanceOutcome RdsClient::receiveDBInstance(const ReceiveDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReceiveDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReceiveDBInstanceOutcome(ReceiveDBInstanceResult(outcome.result()));
	else
		return ReceiveDBInstanceOutcome(outcome.error());
}

void RdsClient::receiveDBInstanceAsync(const ReceiveDBInstanceRequest& request, const ReceiveDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, receiveDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ReceiveDBInstanceOutcomeCallable RdsClient::receiveDBInstanceCallable(const ReceiveDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReceiveDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->receiveDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RecoveryDBInstanceOutcome RdsClient::recoveryDBInstance(const RecoveryDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecoveryDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecoveryDBInstanceOutcome(RecoveryDBInstanceResult(outcome.result()));
	else
		return RecoveryDBInstanceOutcome(outcome.error());
}

void RdsClient::recoveryDBInstanceAsync(const RecoveryDBInstanceRequest& request, const RecoveryDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recoveryDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RecoveryDBInstanceOutcomeCallable RdsClient::recoveryDBInstanceCallable(const RecoveryDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecoveryDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->recoveryDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RedeployRCInstanceOutcome RdsClient::redeployRCInstance(const RedeployRCInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RedeployRCInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RedeployRCInstanceOutcome(RedeployRCInstanceResult(outcome.result()));
	else
		return RedeployRCInstanceOutcome(outcome.error());
}

void RdsClient::redeployRCInstanceAsync(const RedeployRCInstanceRequest& request, const RedeployRCInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, redeployRCInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RedeployRCInstanceOutcomeCallable RdsClient::redeployRCInstanceCallable(const RedeployRCInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RedeployRCInstanceOutcome()>>(
			[this, request]()
			{
			return this->redeployRCInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ReleaseInstanceConnectionOutcome RdsClient::releaseInstanceConnection(const ReleaseInstanceConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseInstanceConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseInstanceConnectionOutcome(ReleaseInstanceConnectionResult(outcome.result()));
	else
		return ReleaseInstanceConnectionOutcome(outcome.error());
}

void RdsClient::releaseInstanceConnectionAsync(const ReleaseInstanceConnectionRequest& request, const ReleaseInstanceConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseInstanceConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ReleaseInstanceConnectionOutcomeCallable RdsClient::releaseInstanceConnectionCallable(const ReleaseInstanceConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseInstanceConnectionOutcome()>>(
			[this, request]()
			{
			return this->releaseInstanceConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ReleaseInstancePublicConnectionOutcome RdsClient::releaseInstancePublicConnection(const ReleaseInstancePublicConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseInstancePublicConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseInstancePublicConnectionOutcome(ReleaseInstancePublicConnectionResult(outcome.result()));
	else
		return ReleaseInstancePublicConnectionOutcome(outcome.error());
}

void RdsClient::releaseInstancePublicConnectionAsync(const ReleaseInstancePublicConnectionRequest& request, const ReleaseInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseInstancePublicConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ReleaseInstancePublicConnectionOutcomeCallable RdsClient::releaseInstancePublicConnectionCallable(const ReleaseInstancePublicConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseInstancePublicConnectionOutcome()>>(
			[this, request]()
			{
			return this->releaseInstancePublicConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ReleaseReadWriteSplittingConnectionOutcome RdsClient::releaseReadWriteSplittingConnection(const ReleaseReadWriteSplittingConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseReadWriteSplittingConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseReadWriteSplittingConnectionOutcome(ReleaseReadWriteSplittingConnectionResult(outcome.result()));
	else
		return ReleaseReadWriteSplittingConnectionOutcome(outcome.error());
}

void RdsClient::releaseReadWriteSplittingConnectionAsync(const ReleaseReadWriteSplittingConnectionRequest& request, const ReleaseReadWriteSplittingConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseReadWriteSplittingConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ReleaseReadWriteSplittingConnectionOutcomeCallable RdsClient::releaseReadWriteSplittingConnectionCallable(const ReleaseReadWriteSplittingConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseReadWriteSplittingConnectionOutcome()>>(
			[this, request]()
			{
			return this->releaseReadWriteSplittingConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RemoveTagsFromResourceOutcome RdsClient::removeTagsFromResource(const RemoveTagsFromResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveTagsFromResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveTagsFromResourceOutcome(RemoveTagsFromResourceResult(outcome.result()));
	else
		return RemoveTagsFromResourceOutcome(outcome.error());
}

void RdsClient::removeTagsFromResourceAsync(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeTagsFromResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RemoveTagsFromResourceOutcomeCallable RdsClient::removeTagsFromResourceCallable(const RemoveTagsFromResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveTagsFromResourceOutcome()>>(
			[this, request]()
			{
			return this->removeTagsFromResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RenewInstanceOutcome RdsClient::renewInstance(const RenewInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenewInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewInstanceOutcome(RenewInstanceResult(outcome.result()));
	else
		return RenewInstanceOutcome(outcome.error());
}

void RdsClient::renewInstanceAsync(const RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RenewInstanceOutcomeCallable RdsClient::renewInstanceCallable(const RenewInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewInstanceOutcome()>>(
			[this, request]()
			{
			return this->renewInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RenewRCInstanceOutcome RdsClient::renewRCInstance(const RenewRCInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenewRCInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewRCInstanceOutcome(RenewRCInstanceResult(outcome.result()));
	else
		return RenewRCInstanceOutcome(outcome.error());
}

void RdsClient::renewRCInstanceAsync(const RenewRCInstanceRequest& request, const RenewRCInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewRCInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RenewRCInstanceOutcomeCallable RdsClient::renewRCInstanceCallable(const RenewRCInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewRCInstanceOutcome()>>(
			[this, request]()
			{
			return this->renewRCInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ReplaceRCInstanceSystemDiskOutcome RdsClient::replaceRCInstanceSystemDisk(const ReplaceRCInstanceSystemDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReplaceRCInstanceSystemDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReplaceRCInstanceSystemDiskOutcome(ReplaceRCInstanceSystemDiskResult(outcome.result()));
	else
		return ReplaceRCInstanceSystemDiskOutcome(outcome.error());
}

void RdsClient::replaceRCInstanceSystemDiskAsync(const ReplaceRCInstanceSystemDiskRequest& request, const ReplaceRCInstanceSystemDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, replaceRCInstanceSystemDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ReplaceRCInstanceSystemDiskOutcomeCallable RdsClient::replaceRCInstanceSystemDiskCallable(const ReplaceRCInstanceSystemDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReplaceRCInstanceSystemDiskOutcome()>>(
			[this, request]()
			{
			return this->replaceRCInstanceSystemDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ResetAccountOutcome RdsClient::resetAccount(const ResetAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetAccountOutcome(ResetAccountResult(outcome.result()));
	else
		return ResetAccountOutcome(outcome.error());
}

void RdsClient::resetAccountAsync(const ResetAccountRequest& request, const ResetAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ResetAccountOutcomeCallable RdsClient::resetAccountCallable(const ResetAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetAccountOutcome()>>(
			[this, request]()
			{
			return this->resetAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ResetAccountPasswordOutcome RdsClient::resetAccountPassword(const ResetAccountPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetAccountPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetAccountPasswordOutcome(ResetAccountPasswordResult(outcome.result()));
	else
		return ResetAccountPasswordOutcome(outcome.error());
}

void RdsClient::resetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetAccountPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ResetAccountPasswordOutcomeCallable RdsClient::resetAccountPasswordCallable(const ResetAccountPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetAccountPasswordOutcome()>>(
			[this, request]()
			{
			return this->resetAccountPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ResizeRCInstanceDiskOutcome RdsClient::resizeRCInstanceDisk(const ResizeRCInstanceDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResizeRCInstanceDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResizeRCInstanceDiskOutcome(ResizeRCInstanceDiskResult(outcome.result()));
	else
		return ResizeRCInstanceDiskOutcome(outcome.error());
}

void RdsClient::resizeRCInstanceDiskAsync(const ResizeRCInstanceDiskRequest& request, const ResizeRCInstanceDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resizeRCInstanceDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ResizeRCInstanceDiskOutcomeCallable RdsClient::resizeRCInstanceDiskCallable(const ResizeRCInstanceDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResizeRCInstanceDiskOutcome()>>(
			[this, request]()
			{
			return this->resizeRCInstanceDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RestartDBInstanceOutcome RdsClient::restartDBInstance(const RestartDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartDBInstanceOutcome(RestartDBInstanceResult(outcome.result()));
	else
		return RestartDBInstanceOutcome(outcome.error());
}

void RdsClient::restartDBInstanceAsync(const RestartDBInstanceRequest& request, const RestartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RestartDBInstanceOutcomeCallable RdsClient::restartDBInstanceCallable(const RestartDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->restartDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RestoreDdrTableOutcome RdsClient::restoreDdrTable(const RestoreDdrTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestoreDdrTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestoreDdrTableOutcome(RestoreDdrTableResult(outcome.result()));
	else
		return RestoreDdrTableOutcome(outcome.error());
}

void RdsClient::restoreDdrTableAsync(const RestoreDdrTableRequest& request, const RestoreDdrTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restoreDdrTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RestoreDdrTableOutcomeCallable RdsClient::restoreDdrTableCallable(const RestoreDdrTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestoreDdrTableOutcome()>>(
			[this, request]()
			{
			return this->restoreDdrTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RestoreTableOutcome RdsClient::restoreTable(const RestoreTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestoreTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestoreTableOutcome(RestoreTableResult(outcome.result()));
	else
		return RestoreTableOutcome(outcome.error());
}

void RdsClient::restoreTableAsync(const RestoreTableRequest& request, const RestoreTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restoreTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RestoreTableOutcomeCallable RdsClient::restoreTableCallable(const RestoreTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestoreTableOutcome()>>(
			[this, request]()
			{
			return this->restoreTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RevokeAccountPrivilegeOutcome RdsClient::revokeAccountPrivilege(const RevokeAccountPrivilegeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeAccountPrivilegeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeAccountPrivilegeOutcome(RevokeAccountPrivilegeResult(outcome.result()));
	else
		return RevokeAccountPrivilegeOutcome(outcome.error());
}

void RdsClient::revokeAccountPrivilegeAsync(const RevokeAccountPrivilegeRequest& request, const RevokeAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeAccountPrivilege(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RevokeAccountPrivilegeOutcomeCallable RdsClient::revokeAccountPrivilegeCallable(const RevokeAccountPrivilegeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeAccountPrivilegeOutcome()>>(
			[this, request]()
			{
			return this->revokeAccountPrivilege(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RevokeOperatorPermissionOutcome RdsClient::revokeOperatorPermission(const RevokeOperatorPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeOperatorPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeOperatorPermissionOutcome(RevokeOperatorPermissionResult(outcome.result()));
	else
		return RevokeOperatorPermissionOutcome(outcome.error());
}

void RdsClient::revokeOperatorPermissionAsync(const RevokeOperatorPermissionRequest& request, const RevokeOperatorPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeOperatorPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RevokeOperatorPermissionOutcomeCallable RdsClient::revokeOperatorPermissionCallable(const RevokeOperatorPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeOperatorPermissionOutcome()>>(
			[this, request]()
			{
			return this->revokeOperatorPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RevokeRCSecurityGroupPermissionOutcome RdsClient::revokeRCSecurityGroupPermission(const RevokeRCSecurityGroupPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeRCSecurityGroupPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeRCSecurityGroupPermissionOutcome(RevokeRCSecurityGroupPermissionResult(outcome.result()));
	else
		return RevokeRCSecurityGroupPermissionOutcome(outcome.error());
}

void RdsClient::revokeRCSecurityGroupPermissionAsync(const RevokeRCSecurityGroupPermissionRequest& request, const RevokeRCSecurityGroupPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeRCSecurityGroupPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RevokeRCSecurityGroupPermissionOutcomeCallable RdsClient::revokeRCSecurityGroupPermissionCallable(const RevokeRCSecurityGroupPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeRCSecurityGroupPermissionOutcome()>>(
			[this, request]()
			{
			return this->revokeRCSecurityGroupPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RunRCCommandOutcome RdsClient::runRCCommand(const RunRCCommandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunRCCommandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunRCCommandOutcome(RunRCCommandResult(outcome.result()));
	else
		return RunRCCommandOutcome(outcome.error());
}

void RdsClient::runRCCommandAsync(const RunRCCommandRequest& request, const RunRCCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runRCCommand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RunRCCommandOutcomeCallable RdsClient::runRCCommandCallable(const RunRCCommandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunRCCommandOutcome()>>(
			[this, request]()
			{
			return this->runRCCommand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RunRCInstancesOutcome RdsClient::runRCInstances(const RunRCInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunRCInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunRCInstancesOutcome(RunRCInstancesResult(outcome.result()));
	else
		return RunRCInstancesOutcome(outcome.error());
}

void RdsClient::runRCInstancesAsync(const RunRCInstancesRequest& request, const RunRCInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runRCInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RunRCInstancesOutcomeCallable RdsClient::runRCInstancesCallable(const RunRCInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunRCInstancesOutcome()>>(
			[this, request]()
			{
			return this->runRCInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::StartDBInstanceOutcome RdsClient::startDBInstance(const StartDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartDBInstanceOutcome(StartDBInstanceResult(outcome.result()));
	else
		return StartDBInstanceOutcome(outcome.error());
}

void RdsClient::startDBInstanceAsync(const StartDBInstanceRequest& request, const StartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::StartDBInstanceOutcomeCallable RdsClient::startDBInstanceCallable(const StartDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->startDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::StartRCInstanceOutcome RdsClient::startRCInstance(const StartRCInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartRCInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartRCInstanceOutcome(StartRCInstanceResult(outcome.result()));
	else
		return StartRCInstanceOutcome(outcome.error());
}

void RdsClient::startRCInstanceAsync(const StartRCInstanceRequest& request, const StartRCInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startRCInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::StartRCInstanceOutcomeCallable RdsClient::startRCInstanceCallable(const StartRCInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartRCInstanceOutcome()>>(
			[this, request]()
			{
			return this->startRCInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::StartRCInstancesOutcome RdsClient::startRCInstances(const StartRCInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartRCInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartRCInstancesOutcome(StartRCInstancesResult(outcome.result()));
	else
		return StartRCInstancesOutcome(outcome.error());
}

void RdsClient::startRCInstancesAsync(const StartRCInstancesRequest& request, const StartRCInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startRCInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::StartRCInstancesOutcomeCallable RdsClient::startRCInstancesCallable(const StartRCInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartRCInstancesOutcome()>>(
			[this, request]()
			{
			return this->startRCInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::StopDBInstanceOutcome RdsClient::stopDBInstance(const StopDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopDBInstanceOutcome(StopDBInstanceResult(outcome.result()));
	else
		return StopDBInstanceOutcome(outcome.error());
}

void RdsClient::stopDBInstanceAsync(const StopDBInstanceRequest& request, const StopDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::StopDBInstanceOutcomeCallable RdsClient::stopDBInstanceCallable(const StopDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->stopDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::StopRCInstanceOutcome RdsClient::stopRCInstance(const StopRCInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopRCInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopRCInstanceOutcome(StopRCInstanceResult(outcome.result()));
	else
		return StopRCInstanceOutcome(outcome.error());
}

void RdsClient::stopRCInstanceAsync(const StopRCInstanceRequest& request, const StopRCInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopRCInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::StopRCInstanceOutcomeCallable RdsClient::stopRCInstanceCallable(const StopRCInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopRCInstanceOutcome()>>(
			[this, request]()
			{
			return this->stopRCInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::StopRCInstancesOutcome RdsClient::stopRCInstances(const StopRCInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopRCInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopRCInstancesOutcome(StopRCInstancesResult(outcome.result()));
	else
		return StopRCInstancesOutcome(outcome.error());
}

void RdsClient::stopRCInstancesAsync(const StopRCInstancesRequest& request, const StopRCInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopRCInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::StopRCInstancesOutcomeCallable RdsClient::stopRCInstancesCallable(const StopRCInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopRCInstancesOutcome()>>(
			[this, request]()
			{
			return this->stopRCInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::SwitchDBInstanceHAOutcome RdsClient::switchDBInstanceHA(const SwitchDBInstanceHARequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchDBInstanceHAOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchDBInstanceHAOutcome(SwitchDBInstanceHAResult(outcome.result()));
	else
		return SwitchDBInstanceHAOutcome(outcome.error());
}

void RdsClient::switchDBInstanceHAAsync(const SwitchDBInstanceHARequest& request, const SwitchDBInstanceHAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchDBInstanceHA(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::SwitchDBInstanceHAOutcomeCallable RdsClient::switchDBInstanceHACallable(const SwitchDBInstanceHARequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchDBInstanceHAOutcome()>>(
			[this, request]()
			{
			return this->switchDBInstanceHA(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::SwitchDBInstanceNetTypeOutcome RdsClient::switchDBInstanceNetType(const SwitchDBInstanceNetTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchDBInstanceNetTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchDBInstanceNetTypeOutcome(SwitchDBInstanceNetTypeResult(outcome.result()));
	else
		return SwitchDBInstanceNetTypeOutcome(outcome.error());
}

void RdsClient::switchDBInstanceNetTypeAsync(const SwitchDBInstanceNetTypeRequest& request, const SwitchDBInstanceNetTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchDBInstanceNetType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::SwitchDBInstanceNetTypeOutcomeCallable RdsClient::switchDBInstanceNetTypeCallable(const SwitchDBInstanceNetTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchDBInstanceNetTypeOutcome()>>(
			[this, request]()
			{
			return this->switchDBInstanceNetType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::SwitchDBInstanceVpcOutcome RdsClient::switchDBInstanceVpc(const SwitchDBInstanceVpcRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchDBInstanceVpcOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchDBInstanceVpcOutcome(SwitchDBInstanceVpcResult(outcome.result()));
	else
		return SwitchDBInstanceVpcOutcome(outcome.error());
}

void RdsClient::switchDBInstanceVpcAsync(const SwitchDBInstanceVpcRequest& request, const SwitchDBInstanceVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchDBInstanceVpc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::SwitchDBInstanceVpcOutcomeCallable RdsClient::switchDBInstanceVpcCallable(const SwitchDBInstanceVpcRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchDBInstanceVpcOutcome()>>(
			[this, request]()
			{
			return this->switchDBInstanceVpc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::SwitchOverMajorVersionUpgradeOutcome RdsClient::switchOverMajorVersionUpgrade(const SwitchOverMajorVersionUpgradeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchOverMajorVersionUpgradeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchOverMajorVersionUpgradeOutcome(SwitchOverMajorVersionUpgradeResult(outcome.result()));
	else
		return SwitchOverMajorVersionUpgradeOutcome(outcome.error());
}

void RdsClient::switchOverMajorVersionUpgradeAsync(const SwitchOverMajorVersionUpgradeRequest& request, const SwitchOverMajorVersionUpgradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchOverMajorVersionUpgrade(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::SwitchOverMajorVersionUpgradeOutcomeCallable RdsClient::switchOverMajorVersionUpgradeCallable(const SwitchOverMajorVersionUpgradeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchOverMajorVersionUpgradeOutcome()>>(
			[this, request]()
			{
			return this->switchOverMajorVersionUpgrade(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::SwitchReplicationLinkOutcome RdsClient::switchReplicationLink(const SwitchReplicationLinkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchReplicationLinkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchReplicationLinkOutcome(SwitchReplicationLinkResult(outcome.result()));
	else
		return SwitchReplicationLinkOutcome(outcome.error());
}

void RdsClient::switchReplicationLinkAsync(const SwitchReplicationLinkRequest& request, const SwitchReplicationLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchReplicationLink(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::SwitchReplicationLinkOutcomeCallable RdsClient::switchReplicationLinkCallable(const SwitchReplicationLinkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchReplicationLinkOutcome()>>(
			[this, request]()
			{
			return this->switchReplicationLink(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::SyncRCKeyPairOutcome RdsClient::syncRCKeyPair(const SyncRCKeyPairRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SyncRCKeyPairOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SyncRCKeyPairOutcome(SyncRCKeyPairResult(outcome.result()));
	else
		return SyncRCKeyPairOutcome(outcome.error());
}

void RdsClient::syncRCKeyPairAsync(const SyncRCKeyPairRequest& request, const SyncRCKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, syncRCKeyPair(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::SyncRCKeyPairOutcomeCallable RdsClient::syncRCKeyPairCallable(const SyncRCKeyPairRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SyncRCKeyPairOutcome()>>(
			[this, request]()
			{
			return this->syncRCKeyPair(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::SyncRCSecurityGroupOutcome RdsClient::syncRCSecurityGroup(const SyncRCSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SyncRCSecurityGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SyncRCSecurityGroupOutcome(SyncRCSecurityGroupResult(outcome.result()));
	else
		return SyncRCSecurityGroupOutcome(outcome.error());
}

void RdsClient::syncRCSecurityGroupAsync(const SyncRCSecurityGroupRequest& request, const SyncRCSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, syncRCSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::SyncRCSecurityGroupOutcomeCallable RdsClient::syncRCSecurityGroupCallable(const SyncRCSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SyncRCSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->syncRCSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::TagResourcesOutcome RdsClient::tagResources(const TagResourcesRequest &request) const
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

void RdsClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::TagResourcesOutcomeCallable RdsClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::TerminateMigrateTaskOutcome RdsClient::terminateMigrateTask(const TerminateMigrateTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TerminateMigrateTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TerminateMigrateTaskOutcome(TerminateMigrateTaskResult(outcome.result()));
	else
		return TerminateMigrateTaskOutcome(outcome.error());
}

void RdsClient::terminateMigrateTaskAsync(const TerminateMigrateTaskRequest& request, const TerminateMigrateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, terminateMigrateTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::TerminateMigrateTaskOutcomeCallable RdsClient::terminateMigrateTaskCallable(const TerminateMigrateTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TerminateMigrateTaskOutcome()>>(
			[this, request]()
			{
			return this->terminateMigrateTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::TransformDBInstancePayTypeOutcome RdsClient::transformDBInstancePayType(const TransformDBInstancePayTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TransformDBInstancePayTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TransformDBInstancePayTypeOutcome(TransformDBInstancePayTypeResult(outcome.result()));
	else
		return TransformDBInstancePayTypeOutcome(outcome.error());
}

void RdsClient::transformDBInstancePayTypeAsync(const TransformDBInstancePayTypeRequest& request, const TransformDBInstancePayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transformDBInstancePayType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::TransformDBInstancePayTypeOutcomeCallable RdsClient::transformDBInstancePayTypeCallable(const TransformDBInstancePayTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransformDBInstancePayTypeOutcome()>>(
			[this, request]()
			{
			return this->transformDBInstancePayType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::UnassociateEipAddressWithRCInstanceOutcome RdsClient::unassociateEipAddressWithRCInstance(const UnassociateEipAddressWithRCInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnassociateEipAddressWithRCInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnassociateEipAddressWithRCInstanceOutcome(UnassociateEipAddressWithRCInstanceResult(outcome.result()));
	else
		return UnassociateEipAddressWithRCInstanceOutcome(outcome.error());
}

void RdsClient::unassociateEipAddressWithRCInstanceAsync(const UnassociateEipAddressWithRCInstanceRequest& request, const UnassociateEipAddressWithRCInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unassociateEipAddressWithRCInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::UnassociateEipAddressWithRCInstanceOutcomeCallable RdsClient::unassociateEipAddressWithRCInstanceCallable(const UnassociateEipAddressWithRCInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnassociateEipAddressWithRCInstanceOutcome()>>(
			[this, request]()
			{
			return this->unassociateEipAddressWithRCInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::UnlockAccountOutcome RdsClient::unlockAccount(const UnlockAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnlockAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnlockAccountOutcome(UnlockAccountResult(outcome.result()));
	else
		return UnlockAccountOutcome(outcome.error());
}

void RdsClient::unlockAccountAsync(const UnlockAccountRequest& request, const UnlockAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unlockAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::UnlockAccountOutcomeCallable RdsClient::unlockAccountCallable(const UnlockAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnlockAccountOutcome()>>(
			[this, request]()
			{
			return this->unlockAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::UntagResourcesOutcome RdsClient::untagResources(const UntagResourcesRequest &request) const
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

void RdsClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::UntagResourcesOutcomeCallable RdsClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::UpdatePostgresExtensionsOutcome RdsClient::updatePostgresExtensions(const UpdatePostgresExtensionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePostgresExtensionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePostgresExtensionsOutcome(UpdatePostgresExtensionsResult(outcome.result()));
	else
		return UpdatePostgresExtensionsOutcome(outcome.error());
}

void RdsClient::updatePostgresExtensionsAsync(const UpdatePostgresExtensionsRequest& request, const UpdatePostgresExtensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePostgresExtensions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::UpdatePostgresExtensionsOutcomeCallable RdsClient::updatePostgresExtensionsCallable(const UpdatePostgresExtensionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePostgresExtensionsOutcome()>>(
			[this, request]()
			{
			return this->updatePostgresExtensions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::UpdateUserBackupFileOutcome RdsClient::updateUserBackupFile(const UpdateUserBackupFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUserBackupFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUserBackupFileOutcome(UpdateUserBackupFileResult(outcome.result()));
	else
		return UpdateUserBackupFileOutcome(outcome.error());
}

void RdsClient::updateUserBackupFileAsync(const UpdateUserBackupFileRequest& request, const UpdateUserBackupFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUserBackupFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::UpdateUserBackupFileOutcomeCallable RdsClient::updateUserBackupFileCallable(const UpdateUserBackupFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserBackupFileOutcome()>>(
			[this, request]()
			{
			return this->updateUserBackupFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::UpgradeDBInstanceEngineVersionOutcome RdsClient::upgradeDBInstanceEngineVersion(const UpgradeDBInstanceEngineVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeDBInstanceEngineVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeDBInstanceEngineVersionOutcome(UpgradeDBInstanceEngineVersionResult(outcome.result()));
	else
		return UpgradeDBInstanceEngineVersionOutcome(outcome.error());
}

void RdsClient::upgradeDBInstanceEngineVersionAsync(const UpgradeDBInstanceEngineVersionRequest& request, const UpgradeDBInstanceEngineVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeDBInstanceEngineVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::UpgradeDBInstanceEngineVersionOutcomeCallable RdsClient::upgradeDBInstanceEngineVersionCallable(const UpgradeDBInstanceEngineVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeDBInstanceEngineVersionOutcome()>>(
			[this, request]()
			{
			return this->upgradeDBInstanceEngineVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::UpgradeDBInstanceKernelVersionOutcome RdsClient::upgradeDBInstanceKernelVersion(const UpgradeDBInstanceKernelVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeDBInstanceKernelVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeDBInstanceKernelVersionOutcome(UpgradeDBInstanceKernelVersionResult(outcome.result()));
	else
		return UpgradeDBInstanceKernelVersionOutcome(outcome.error());
}

void RdsClient::upgradeDBInstanceKernelVersionAsync(const UpgradeDBInstanceKernelVersionRequest& request, const UpgradeDBInstanceKernelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeDBInstanceKernelVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::UpgradeDBInstanceKernelVersionOutcomeCallable RdsClient::upgradeDBInstanceKernelVersionCallable(const UpgradeDBInstanceKernelVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeDBInstanceKernelVersionOutcome()>>(
			[this, request]()
			{
			return this->upgradeDBInstanceKernelVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::UpgradeDBInstanceMajorVersionOutcome RdsClient::upgradeDBInstanceMajorVersion(const UpgradeDBInstanceMajorVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeDBInstanceMajorVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeDBInstanceMajorVersionOutcome(UpgradeDBInstanceMajorVersionResult(outcome.result()));
	else
		return UpgradeDBInstanceMajorVersionOutcome(outcome.error());
}

void RdsClient::upgradeDBInstanceMajorVersionAsync(const UpgradeDBInstanceMajorVersionRequest& request, const UpgradeDBInstanceMajorVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeDBInstanceMajorVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::UpgradeDBInstanceMajorVersionOutcomeCallable RdsClient::upgradeDBInstanceMajorVersionCallable(const UpgradeDBInstanceMajorVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeDBInstanceMajorVersionOutcome()>>(
			[this, request]()
			{
			return this->upgradeDBInstanceMajorVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::UpgradeDBInstanceMajorVersionPrecheckOutcome RdsClient::upgradeDBInstanceMajorVersionPrecheck(const UpgradeDBInstanceMajorVersionPrecheckRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeDBInstanceMajorVersionPrecheckOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeDBInstanceMajorVersionPrecheckOutcome(UpgradeDBInstanceMajorVersionPrecheckResult(outcome.result()));
	else
		return UpgradeDBInstanceMajorVersionPrecheckOutcome(outcome.error());
}

void RdsClient::upgradeDBInstanceMajorVersionPrecheckAsync(const UpgradeDBInstanceMajorVersionPrecheckRequest& request, const UpgradeDBInstanceMajorVersionPrecheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeDBInstanceMajorVersionPrecheck(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::UpgradeDBInstanceMajorVersionPrecheckOutcomeCallable RdsClient::upgradeDBInstanceMajorVersionPrecheckCallable(const UpgradeDBInstanceMajorVersionPrecheckRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeDBInstanceMajorVersionPrecheckOutcome()>>(
			[this, request]()
			{
			return this->upgradeDBInstanceMajorVersionPrecheck(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::UpgradeDBProxyInstanceKernelVersionOutcome RdsClient::upgradeDBProxyInstanceKernelVersion(const UpgradeDBProxyInstanceKernelVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeDBProxyInstanceKernelVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeDBProxyInstanceKernelVersionOutcome(UpgradeDBProxyInstanceKernelVersionResult(outcome.result()));
	else
		return UpgradeDBProxyInstanceKernelVersionOutcome(outcome.error());
}

void RdsClient::upgradeDBProxyInstanceKernelVersionAsync(const UpgradeDBProxyInstanceKernelVersionRequest& request, const UpgradeDBProxyInstanceKernelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeDBProxyInstanceKernelVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::UpgradeDBProxyInstanceKernelVersionOutcomeCallable RdsClient::upgradeDBProxyInstanceKernelVersionCallable(const UpgradeDBProxyInstanceKernelVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeDBProxyInstanceKernelVersionOutcome()>>(
			[this, request]()
			{
			return this->upgradeDBProxyInstanceKernelVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

