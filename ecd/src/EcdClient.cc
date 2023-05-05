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

#include <alibabacloud/ecd/EcdClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

namespace
{
	const std::string SERVICE_NAME = "ecd";
}

EcdClient::EcdClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

EcdClient::EcdClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

EcdClient::EcdClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

EcdClient::~EcdClient()
{}

EcdClient::ActivateOfficeSiteOutcome EcdClient::activateOfficeSite(const ActivateOfficeSiteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ActivateOfficeSiteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ActivateOfficeSiteOutcome(ActivateOfficeSiteResult(outcome.result()));
	else
		return ActivateOfficeSiteOutcome(outcome.error());
}

void EcdClient::activateOfficeSiteAsync(const ActivateOfficeSiteRequest& request, const ActivateOfficeSiteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, activateOfficeSite(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ActivateOfficeSiteOutcomeCallable EcdClient::activateOfficeSiteCallable(const ActivateOfficeSiteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ActivateOfficeSiteOutcome()>>(
			[this, request]()
			{
			return this->activateOfficeSite(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::AddDevicesOutcome EcdClient::addDevices(const AddDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddDevicesOutcome(AddDevicesResult(outcome.result()));
	else
		return AddDevicesOutcome(outcome.error());
}

void EcdClient::addDevicesAsync(const AddDevicesRequest& request, const AddDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::AddDevicesOutcomeCallable EcdClient::addDevicesCallable(const AddDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDevicesOutcome()>>(
			[this, request]()
			{
			return this->addDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::AddFilePermissionOutcome EcdClient::addFilePermission(const AddFilePermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddFilePermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddFilePermissionOutcome(AddFilePermissionResult(outcome.result()));
	else
		return AddFilePermissionOutcome(outcome.error());
}

void EcdClient::addFilePermissionAsync(const AddFilePermissionRequest& request, const AddFilePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addFilePermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::AddFilePermissionOutcomeCallable EcdClient::addFilePermissionCallable(const AddFilePermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddFilePermissionOutcome()>>(
			[this, request]()
			{
			return this->addFilePermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::AddUserToDesktopGroupOutcome EcdClient::addUserToDesktopGroup(const AddUserToDesktopGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddUserToDesktopGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddUserToDesktopGroupOutcome(AddUserToDesktopGroupResult(outcome.result()));
	else
		return AddUserToDesktopGroupOutcome(outcome.error());
}

void EcdClient::addUserToDesktopGroupAsync(const AddUserToDesktopGroupRequest& request, const AddUserToDesktopGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addUserToDesktopGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::AddUserToDesktopGroupOutcomeCallable EcdClient::addUserToDesktopGroupCallable(const AddUserToDesktopGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddUserToDesktopGroupOutcome()>>(
			[this, request]()
			{
			return this->addUserToDesktopGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ApplyAutoSnapshotPolicyOutcome EcdClient::applyAutoSnapshotPolicy(const ApplyAutoSnapshotPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApplyAutoSnapshotPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApplyAutoSnapshotPolicyOutcome(ApplyAutoSnapshotPolicyResult(outcome.result()));
	else
		return ApplyAutoSnapshotPolicyOutcome(outcome.error());
}

void EcdClient::applyAutoSnapshotPolicyAsync(const ApplyAutoSnapshotPolicyRequest& request, const ApplyAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, applyAutoSnapshotPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ApplyAutoSnapshotPolicyOutcomeCallable EcdClient::applyAutoSnapshotPolicyCallable(const ApplyAutoSnapshotPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApplyAutoSnapshotPolicyOutcome()>>(
			[this, request]()
			{
			return this->applyAutoSnapshotPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ApplyCoordinatePrivilegeOutcome EcdClient::applyCoordinatePrivilege(const ApplyCoordinatePrivilegeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApplyCoordinatePrivilegeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApplyCoordinatePrivilegeOutcome(ApplyCoordinatePrivilegeResult(outcome.result()));
	else
		return ApplyCoordinatePrivilegeOutcome(outcome.error());
}

void EcdClient::applyCoordinatePrivilegeAsync(const ApplyCoordinatePrivilegeRequest& request, const ApplyCoordinatePrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, applyCoordinatePrivilege(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ApplyCoordinatePrivilegeOutcomeCallable EcdClient::applyCoordinatePrivilegeCallable(const ApplyCoordinatePrivilegeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApplyCoordinatePrivilegeOutcome()>>(
			[this, request]()
			{
			return this->applyCoordinatePrivilege(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ApplyCoordinationForMonitoringOutcome EcdClient::applyCoordinationForMonitoring(const ApplyCoordinationForMonitoringRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApplyCoordinationForMonitoringOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApplyCoordinationForMonitoringOutcome(ApplyCoordinationForMonitoringResult(outcome.result()));
	else
		return ApplyCoordinationForMonitoringOutcome(outcome.error());
}

void EcdClient::applyCoordinationForMonitoringAsync(const ApplyCoordinationForMonitoringRequest& request, const ApplyCoordinationForMonitoringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, applyCoordinationForMonitoring(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ApplyCoordinationForMonitoringOutcomeCallable EcdClient::applyCoordinationForMonitoringCallable(const ApplyCoordinationForMonitoringRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApplyCoordinationForMonitoringOutcome()>>(
			[this, request]()
			{
			return this->applyCoordinationForMonitoring(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ApproveFotaUpdateOutcome EcdClient::approveFotaUpdate(const ApproveFotaUpdateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApproveFotaUpdateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApproveFotaUpdateOutcome(ApproveFotaUpdateResult(outcome.result()));
	else
		return ApproveFotaUpdateOutcome(outcome.error());
}

void EcdClient::approveFotaUpdateAsync(const ApproveFotaUpdateRequest& request, const ApproveFotaUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, approveFotaUpdate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ApproveFotaUpdateOutcomeCallable EcdClient::approveFotaUpdateCallable(const ApproveFotaUpdateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApproveFotaUpdateOutcome()>>(
			[this, request]()
			{
			return this->approveFotaUpdate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::AssociateNetworkPackageOutcome EcdClient::associateNetworkPackage(const AssociateNetworkPackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateNetworkPackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateNetworkPackageOutcome(AssociateNetworkPackageResult(outcome.result()));
	else
		return AssociateNetworkPackageOutcome(outcome.error());
}

void EcdClient::associateNetworkPackageAsync(const AssociateNetworkPackageRequest& request, const AssociateNetworkPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateNetworkPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::AssociateNetworkPackageOutcomeCallable EcdClient::associateNetworkPackageCallable(const AssociateNetworkPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateNetworkPackageOutcome()>>(
			[this, request]()
			{
			return this->associateNetworkPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::AttachCenOutcome EcdClient::attachCen(const AttachCenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachCenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachCenOutcome(AttachCenResult(outcome.result()));
	else
		return AttachCenOutcome(outcome.error());
}

void EcdClient::attachCenAsync(const AttachCenRequest& request, const AttachCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachCen(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::AttachCenOutcomeCallable EcdClient::attachCenCallable(const AttachCenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachCenOutcome()>>(
			[this, request]()
			{
			return this->attachCen(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::AttachEndUserOutcome EcdClient::attachEndUser(const AttachEndUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachEndUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachEndUserOutcome(AttachEndUserResult(outcome.result()));
	else
		return AttachEndUserOutcome(outcome.error());
}

void EcdClient::attachEndUserAsync(const AttachEndUserRequest& request, const AttachEndUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachEndUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::AttachEndUserOutcomeCallable EcdClient::attachEndUserCallable(const AttachEndUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachEndUserOutcome()>>(
			[this, request]()
			{
			return this->attachEndUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::CancelAutoSnapshotPolicyOutcome EcdClient::cancelAutoSnapshotPolicy(const CancelAutoSnapshotPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelAutoSnapshotPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelAutoSnapshotPolicyOutcome(CancelAutoSnapshotPolicyResult(outcome.result()));
	else
		return CancelAutoSnapshotPolicyOutcome(outcome.error());
}

void EcdClient::cancelAutoSnapshotPolicyAsync(const CancelAutoSnapshotPolicyRequest& request, const CancelAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelAutoSnapshotPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::CancelAutoSnapshotPolicyOutcomeCallable EcdClient::cancelAutoSnapshotPolicyCallable(const CancelAutoSnapshotPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelAutoSnapshotPolicyOutcome()>>(
			[this, request]()
			{
			return this->cancelAutoSnapshotPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::CancelCdsFileShareLinkOutcome EcdClient::cancelCdsFileShareLink(const CancelCdsFileShareLinkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelCdsFileShareLinkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelCdsFileShareLinkOutcome(CancelCdsFileShareLinkResult(outcome.result()));
	else
		return CancelCdsFileShareLinkOutcome(outcome.error());
}

void EcdClient::cancelCdsFileShareLinkAsync(const CancelCdsFileShareLinkRequest& request, const CancelCdsFileShareLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelCdsFileShareLink(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::CancelCdsFileShareLinkOutcomeCallable EcdClient::cancelCdsFileShareLinkCallable(const CancelCdsFileShareLinkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelCdsFileShareLinkOutcome()>>(
			[this, request]()
			{
			return this->cancelCdsFileShareLink(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::CancelCoordinationForMonitoringOutcome EcdClient::cancelCoordinationForMonitoring(const CancelCoordinationForMonitoringRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelCoordinationForMonitoringOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelCoordinationForMonitoringOutcome(CancelCoordinationForMonitoringResult(outcome.result()));
	else
		return CancelCoordinationForMonitoringOutcome(outcome.error());
}

void EcdClient::cancelCoordinationForMonitoringAsync(const CancelCoordinationForMonitoringRequest& request, const CancelCoordinationForMonitoringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelCoordinationForMonitoring(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::CancelCoordinationForMonitoringOutcomeCallable EcdClient::cancelCoordinationForMonitoringCallable(const CancelCoordinationForMonitoringRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelCoordinationForMonitoringOutcome()>>(
			[this, request]()
			{
			return this->cancelCoordinationForMonitoring(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::CancelCopyImageOutcome EcdClient::cancelCopyImage(const CancelCopyImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelCopyImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelCopyImageOutcome(CancelCopyImageResult(outcome.result()));
	else
		return CancelCopyImageOutcome(outcome.error());
}

void EcdClient::cancelCopyImageAsync(const CancelCopyImageRequest& request, const CancelCopyImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelCopyImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::CancelCopyImageOutcomeCallable EcdClient::cancelCopyImageCallable(const CancelCopyImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelCopyImageOutcome()>>(
			[this, request]()
			{
			return this->cancelCopyImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ClonePolicyGroupOutcome EcdClient::clonePolicyGroup(const ClonePolicyGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ClonePolicyGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ClonePolicyGroupOutcome(ClonePolicyGroupResult(outcome.result()));
	else
		return ClonePolicyGroupOutcome(outcome.error());
}

void EcdClient::clonePolicyGroupAsync(const ClonePolicyGroupRequest& request, const ClonePolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, clonePolicyGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ClonePolicyGroupOutcomeCallable EcdClient::clonePolicyGroupCallable(const ClonePolicyGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ClonePolicyGroupOutcome()>>(
			[this, request]()
			{
			return this->clonePolicyGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::CompleteCdsFileOutcome EcdClient::completeCdsFile(const CompleteCdsFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CompleteCdsFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CompleteCdsFileOutcome(CompleteCdsFileResult(outcome.result()));
	else
		return CompleteCdsFileOutcome(outcome.error());
}

void EcdClient::completeCdsFileAsync(const CompleteCdsFileRequest& request, const CompleteCdsFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, completeCdsFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::CompleteCdsFileOutcomeCallable EcdClient::completeCdsFileCallable(const CompleteCdsFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CompleteCdsFileOutcome()>>(
			[this, request]()
			{
			return this->completeCdsFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ConfigADConnectorTrustOutcome EcdClient::configADConnectorTrust(const ConfigADConnectorTrustRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigADConnectorTrustOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigADConnectorTrustOutcome(ConfigADConnectorTrustResult(outcome.result()));
	else
		return ConfigADConnectorTrustOutcome(outcome.error());
}

void EcdClient::configADConnectorTrustAsync(const ConfigADConnectorTrustRequest& request, const ConfigADConnectorTrustAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configADConnectorTrust(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ConfigADConnectorTrustOutcomeCallable EcdClient::configADConnectorTrustCallable(const ConfigADConnectorTrustRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigADConnectorTrustOutcome()>>(
			[this, request]()
			{
			return this->configADConnectorTrust(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ConfigADConnectorUserOutcome EcdClient::configADConnectorUser(const ConfigADConnectorUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigADConnectorUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigADConnectorUserOutcome(ConfigADConnectorUserResult(outcome.result()));
	else
		return ConfigADConnectorUserOutcome(outcome.error());
}

void EcdClient::configADConnectorUserAsync(const ConfigADConnectorUserRequest& request, const ConfigADConnectorUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configADConnectorUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ConfigADConnectorUserOutcomeCallable EcdClient::configADConnectorUserCallable(const ConfigADConnectorUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigADConnectorUserOutcome()>>(
			[this, request]()
			{
			return this->configADConnectorUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::CopyCdsFileOutcome EcdClient::copyCdsFile(const CopyCdsFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CopyCdsFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CopyCdsFileOutcome(CopyCdsFileResult(outcome.result()));
	else
		return CopyCdsFileOutcome(outcome.error());
}

void EcdClient::copyCdsFileAsync(const CopyCdsFileRequest& request, const CopyCdsFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, copyCdsFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::CopyCdsFileOutcomeCallable EcdClient::copyCdsFileCallable(const CopyCdsFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CopyCdsFileOutcome()>>(
			[this, request]()
			{
			return this->copyCdsFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::CopyImageOutcome EcdClient::copyImage(const CopyImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CopyImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CopyImageOutcome(CopyImageResult(outcome.result()));
	else
		return CopyImageOutcome(outcome.error());
}

void EcdClient::copyImageAsync(const CopyImageRequest& request, const CopyImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, copyImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::CopyImageOutcomeCallable EcdClient::copyImageCallable(const CopyImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CopyImageOutcome()>>(
			[this, request]()
			{
			return this->copyImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::CreateADConnectorDirectoryOutcome EcdClient::createADConnectorDirectory(const CreateADConnectorDirectoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateADConnectorDirectoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateADConnectorDirectoryOutcome(CreateADConnectorDirectoryResult(outcome.result()));
	else
		return CreateADConnectorDirectoryOutcome(outcome.error());
}

void EcdClient::createADConnectorDirectoryAsync(const CreateADConnectorDirectoryRequest& request, const CreateADConnectorDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createADConnectorDirectory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::CreateADConnectorDirectoryOutcomeCallable EcdClient::createADConnectorDirectoryCallable(const CreateADConnectorDirectoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateADConnectorDirectoryOutcome()>>(
			[this, request]()
			{
			return this->createADConnectorDirectory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::CreateADConnectorOfficeSiteOutcome EcdClient::createADConnectorOfficeSite(const CreateADConnectorOfficeSiteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateADConnectorOfficeSiteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateADConnectorOfficeSiteOutcome(CreateADConnectorOfficeSiteResult(outcome.result()));
	else
		return CreateADConnectorOfficeSiteOutcome(outcome.error());
}

void EcdClient::createADConnectorOfficeSiteAsync(const CreateADConnectorOfficeSiteRequest& request, const CreateADConnectorOfficeSiteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createADConnectorOfficeSite(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::CreateADConnectorOfficeSiteOutcomeCallable EcdClient::createADConnectorOfficeSiteCallable(const CreateADConnectorOfficeSiteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateADConnectorOfficeSiteOutcome()>>(
			[this, request]()
			{
			return this->createADConnectorOfficeSite(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::CreateAndBindNasFileSystemOutcome EcdClient::createAndBindNasFileSystem(const CreateAndBindNasFileSystemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAndBindNasFileSystemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAndBindNasFileSystemOutcome(CreateAndBindNasFileSystemResult(outcome.result()));
	else
		return CreateAndBindNasFileSystemOutcome(outcome.error());
}

void EcdClient::createAndBindNasFileSystemAsync(const CreateAndBindNasFileSystemRequest& request, const CreateAndBindNasFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAndBindNasFileSystem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::CreateAndBindNasFileSystemOutcomeCallable EcdClient::createAndBindNasFileSystemCallable(const CreateAndBindNasFileSystemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAndBindNasFileSystemOutcome()>>(
			[this, request]()
			{
			return this->createAndBindNasFileSystem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::CreateAutoSnapshotPolicyOutcome EcdClient::createAutoSnapshotPolicy(const CreateAutoSnapshotPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAutoSnapshotPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAutoSnapshotPolicyOutcome(CreateAutoSnapshotPolicyResult(outcome.result()));
	else
		return CreateAutoSnapshotPolicyOutcome(outcome.error());
}

void EcdClient::createAutoSnapshotPolicyAsync(const CreateAutoSnapshotPolicyRequest& request, const CreateAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAutoSnapshotPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::CreateAutoSnapshotPolicyOutcomeCallable EcdClient::createAutoSnapshotPolicyCallable(const CreateAutoSnapshotPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAutoSnapshotPolicyOutcome()>>(
			[this, request]()
			{
			return this->createAutoSnapshotPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::CreateBundleOutcome EcdClient::createBundle(const CreateBundleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBundleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBundleOutcome(CreateBundleResult(outcome.result()));
	else
		return CreateBundleOutcome(outcome.error());
}

void EcdClient::createBundleAsync(const CreateBundleRequest& request, const CreateBundleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBundle(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::CreateBundleOutcomeCallable EcdClient::createBundleCallable(const CreateBundleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBundleOutcome()>>(
			[this, request]()
			{
			return this->createBundle(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::CreateCdsFileOutcome EcdClient::createCdsFile(const CreateCdsFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCdsFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCdsFileOutcome(CreateCdsFileResult(outcome.result()));
	else
		return CreateCdsFileOutcome(outcome.error());
}

void EcdClient::createCdsFileAsync(const CreateCdsFileRequest& request, const CreateCdsFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCdsFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::CreateCdsFileOutcomeCallable EcdClient::createCdsFileCallable(const CreateCdsFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCdsFileOutcome()>>(
			[this, request]()
			{
			return this->createCdsFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::CreateCdsFileShareLinkOutcome EcdClient::createCdsFileShareLink(const CreateCdsFileShareLinkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCdsFileShareLinkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCdsFileShareLinkOutcome(CreateCdsFileShareLinkResult(outcome.result()));
	else
		return CreateCdsFileShareLinkOutcome(outcome.error());
}

void EcdClient::createCdsFileShareLinkAsync(const CreateCdsFileShareLinkRequest& request, const CreateCdsFileShareLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCdsFileShareLink(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::CreateCdsFileShareLinkOutcomeCallable EcdClient::createCdsFileShareLinkCallable(const CreateCdsFileShareLinkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCdsFileShareLinkOutcome()>>(
			[this, request]()
			{
			return this->createCdsFileShareLink(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::CreateDesktopGroupOutcome EcdClient::createDesktopGroup(const CreateDesktopGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDesktopGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDesktopGroupOutcome(CreateDesktopGroupResult(outcome.result()));
	else
		return CreateDesktopGroupOutcome(outcome.error());
}

void EcdClient::createDesktopGroupAsync(const CreateDesktopGroupRequest& request, const CreateDesktopGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDesktopGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::CreateDesktopGroupOutcomeCallable EcdClient::createDesktopGroupCallable(const CreateDesktopGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDesktopGroupOutcome()>>(
			[this, request]()
			{
			return this->createDesktopGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::CreateDesktopsOutcome EcdClient::createDesktops(const CreateDesktopsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDesktopsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDesktopsOutcome(CreateDesktopsResult(outcome.result()));
	else
		return CreateDesktopsOutcome(outcome.error());
}

void EcdClient::createDesktopsAsync(const CreateDesktopsRequest& request, const CreateDesktopsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDesktops(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::CreateDesktopsOutcomeCallable EcdClient::createDesktopsCallable(const CreateDesktopsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDesktopsOutcome()>>(
			[this, request]()
			{
			return this->createDesktops(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::CreateDiskEncryptionServiceOutcome EcdClient::createDiskEncryptionService(const CreateDiskEncryptionServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDiskEncryptionServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDiskEncryptionServiceOutcome(CreateDiskEncryptionServiceResult(outcome.result()));
	else
		return CreateDiskEncryptionServiceOutcome(outcome.error());
}

void EcdClient::createDiskEncryptionServiceAsync(const CreateDiskEncryptionServiceRequest& request, const CreateDiskEncryptionServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDiskEncryptionService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::CreateDiskEncryptionServiceOutcomeCallable EcdClient::createDiskEncryptionServiceCallable(const CreateDiskEncryptionServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDiskEncryptionServiceOutcome()>>(
			[this, request]()
			{
			return this->createDiskEncryptionService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::CreateImageOutcome EcdClient::createImage(const CreateImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateImageOutcome(CreateImageResult(outcome.result()));
	else
		return CreateImageOutcome(outcome.error());
}

void EcdClient::createImageAsync(const CreateImageRequest& request, const CreateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::CreateImageOutcomeCallable EcdClient::createImageCallable(const CreateImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateImageOutcome()>>(
			[this, request]()
			{
			return this->createImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::CreateNASFileSystemOutcome EcdClient::createNASFileSystem(const CreateNASFileSystemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNASFileSystemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNASFileSystemOutcome(CreateNASFileSystemResult(outcome.result()));
	else
		return CreateNASFileSystemOutcome(outcome.error());
}

void EcdClient::createNASFileSystemAsync(const CreateNASFileSystemRequest& request, const CreateNASFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNASFileSystem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::CreateNASFileSystemOutcomeCallable EcdClient::createNASFileSystemCallable(const CreateNASFileSystemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNASFileSystemOutcome()>>(
			[this, request]()
			{
			return this->createNASFileSystem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::CreateNetworkPackageOutcome EcdClient::createNetworkPackage(const CreateNetworkPackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNetworkPackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNetworkPackageOutcome(CreateNetworkPackageResult(outcome.result()));
	else
		return CreateNetworkPackageOutcome(outcome.error());
}

void EcdClient::createNetworkPackageAsync(const CreateNetworkPackageRequest& request, const CreateNetworkPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNetworkPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::CreateNetworkPackageOutcomeCallable EcdClient::createNetworkPackageCallable(const CreateNetworkPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNetworkPackageOutcome()>>(
			[this, request]()
			{
			return this->createNetworkPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::CreatePolicyGroupOutcome EcdClient::createPolicyGroup(const CreatePolicyGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePolicyGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePolicyGroupOutcome(CreatePolicyGroupResult(outcome.result()));
	else
		return CreatePolicyGroupOutcome(outcome.error());
}

void EcdClient::createPolicyGroupAsync(const CreatePolicyGroupRequest& request, const CreatePolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPolicyGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::CreatePolicyGroupOutcomeCallable EcdClient::createPolicyGroupCallable(const CreatePolicyGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePolicyGroupOutcome()>>(
			[this, request]()
			{
			return this->createPolicyGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::CreateRAMDirectoryOutcome EcdClient::createRAMDirectory(const CreateRAMDirectoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRAMDirectoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRAMDirectoryOutcome(CreateRAMDirectoryResult(outcome.result()));
	else
		return CreateRAMDirectoryOutcome(outcome.error());
}

void EcdClient::createRAMDirectoryAsync(const CreateRAMDirectoryRequest& request, const CreateRAMDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRAMDirectory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::CreateRAMDirectoryOutcomeCallable EcdClient::createRAMDirectoryCallable(const CreateRAMDirectoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRAMDirectoryOutcome()>>(
			[this, request]()
			{
			return this->createRAMDirectory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::CreateSimpleOfficeSiteOutcome EcdClient::createSimpleOfficeSite(const CreateSimpleOfficeSiteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSimpleOfficeSiteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSimpleOfficeSiteOutcome(CreateSimpleOfficeSiteResult(outcome.result()));
	else
		return CreateSimpleOfficeSiteOutcome(outcome.error());
}

void EcdClient::createSimpleOfficeSiteAsync(const CreateSimpleOfficeSiteRequest& request, const CreateSimpleOfficeSiteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSimpleOfficeSite(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::CreateSimpleOfficeSiteOutcomeCallable EcdClient::createSimpleOfficeSiteCallable(const CreateSimpleOfficeSiteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSimpleOfficeSiteOutcome()>>(
			[this, request]()
			{
			return this->createSimpleOfficeSite(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::CreateSnapshotOutcome EcdClient::createSnapshot(const CreateSnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSnapshotOutcome(CreateSnapshotResult(outcome.result()));
	else
		return CreateSnapshotOutcome(outcome.error());
}

void EcdClient::createSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::CreateSnapshotOutcomeCallable EcdClient::createSnapshotCallable(const CreateSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSnapshotOutcome()>>(
			[this, request]()
			{
			return this->createSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DeleteAutoSnapshotPolicyOutcome EcdClient::deleteAutoSnapshotPolicy(const DeleteAutoSnapshotPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAutoSnapshotPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAutoSnapshotPolicyOutcome(DeleteAutoSnapshotPolicyResult(outcome.result()));
	else
		return DeleteAutoSnapshotPolicyOutcome(outcome.error());
}

void EcdClient::deleteAutoSnapshotPolicyAsync(const DeleteAutoSnapshotPolicyRequest& request, const DeleteAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAutoSnapshotPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DeleteAutoSnapshotPolicyOutcomeCallable EcdClient::deleteAutoSnapshotPolicyCallable(const DeleteAutoSnapshotPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAutoSnapshotPolicyOutcome()>>(
			[this, request]()
			{
			return this->deleteAutoSnapshotPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DeleteBundlesOutcome EcdClient::deleteBundles(const DeleteBundlesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBundlesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBundlesOutcome(DeleteBundlesResult(outcome.result()));
	else
		return DeleteBundlesOutcome(outcome.error());
}

void EcdClient::deleteBundlesAsync(const DeleteBundlesRequest& request, const DeleteBundlesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBundles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DeleteBundlesOutcomeCallable EcdClient::deleteBundlesCallable(const DeleteBundlesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBundlesOutcome()>>(
			[this, request]()
			{
			return this->deleteBundles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DeleteCdsFileOutcome EcdClient::deleteCdsFile(const DeleteCdsFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCdsFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCdsFileOutcome(DeleteCdsFileResult(outcome.result()));
	else
		return DeleteCdsFileOutcome(outcome.error());
}

void EcdClient::deleteCdsFileAsync(const DeleteCdsFileRequest& request, const DeleteCdsFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCdsFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DeleteCdsFileOutcomeCallable EcdClient::deleteCdsFileCallable(const DeleteCdsFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCdsFileOutcome()>>(
			[this, request]()
			{
			return this->deleteCdsFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DeleteCloudDriveGroupsOutcome EcdClient::deleteCloudDriveGroups(const DeleteCloudDriveGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCloudDriveGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCloudDriveGroupsOutcome(DeleteCloudDriveGroupsResult(outcome.result()));
	else
		return DeleteCloudDriveGroupsOutcome(outcome.error());
}

void EcdClient::deleteCloudDriveGroupsAsync(const DeleteCloudDriveGroupsRequest& request, const DeleteCloudDriveGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCloudDriveGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DeleteCloudDriveGroupsOutcomeCallable EcdClient::deleteCloudDriveGroupsCallable(const DeleteCloudDriveGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCloudDriveGroupsOutcome()>>(
			[this, request]()
			{
			return this->deleteCloudDriveGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DeleteCloudDriveUsersOutcome EcdClient::deleteCloudDriveUsers(const DeleteCloudDriveUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCloudDriveUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCloudDriveUsersOutcome(DeleteCloudDriveUsersResult(outcome.result()));
	else
		return DeleteCloudDriveUsersOutcome(outcome.error());
}

void EcdClient::deleteCloudDriveUsersAsync(const DeleteCloudDriveUsersRequest& request, const DeleteCloudDriveUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCloudDriveUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DeleteCloudDriveUsersOutcomeCallable EcdClient::deleteCloudDriveUsersCallable(const DeleteCloudDriveUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCloudDriveUsersOutcome()>>(
			[this, request]()
			{
			return this->deleteCloudDriveUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DeleteDesktopGroupOutcome EcdClient::deleteDesktopGroup(const DeleteDesktopGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDesktopGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDesktopGroupOutcome(DeleteDesktopGroupResult(outcome.result()));
	else
		return DeleteDesktopGroupOutcome(outcome.error());
}

void EcdClient::deleteDesktopGroupAsync(const DeleteDesktopGroupRequest& request, const DeleteDesktopGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDesktopGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DeleteDesktopGroupOutcomeCallable EcdClient::deleteDesktopGroupCallable(const DeleteDesktopGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDesktopGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteDesktopGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DeleteDesktopsOutcome EcdClient::deleteDesktops(const DeleteDesktopsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDesktopsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDesktopsOutcome(DeleteDesktopsResult(outcome.result()));
	else
		return DeleteDesktopsOutcome(outcome.error());
}

void EcdClient::deleteDesktopsAsync(const DeleteDesktopsRequest& request, const DeleteDesktopsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDesktops(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DeleteDesktopsOutcomeCallable EcdClient::deleteDesktopsCallable(const DeleteDesktopsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDesktopsOutcome()>>(
			[this, request]()
			{
			return this->deleteDesktops(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DeleteDevicesOutcome EcdClient::deleteDevices(const DeleteDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDevicesOutcome(DeleteDevicesResult(outcome.result()));
	else
		return DeleteDevicesOutcome(outcome.error());
}

void EcdClient::deleteDevicesAsync(const DeleteDevicesRequest& request, const DeleteDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DeleteDevicesOutcomeCallable EcdClient::deleteDevicesCallable(const DeleteDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDevicesOutcome()>>(
			[this, request]()
			{
			return this->deleteDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DeleteDirectoriesOutcome EcdClient::deleteDirectories(const DeleteDirectoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDirectoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDirectoriesOutcome(DeleteDirectoriesResult(outcome.result()));
	else
		return DeleteDirectoriesOutcome(outcome.error());
}

void EcdClient::deleteDirectoriesAsync(const DeleteDirectoriesRequest& request, const DeleteDirectoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDirectories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DeleteDirectoriesOutcomeCallable EcdClient::deleteDirectoriesCallable(const DeleteDirectoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDirectoriesOutcome()>>(
			[this, request]()
			{
			return this->deleteDirectories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DeleteImagesOutcome EcdClient::deleteImages(const DeleteImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteImagesOutcome(DeleteImagesResult(outcome.result()));
	else
		return DeleteImagesOutcome(outcome.error());
}

void EcdClient::deleteImagesAsync(const DeleteImagesRequest& request, const DeleteImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DeleteImagesOutcomeCallable EcdClient::deleteImagesCallable(const DeleteImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteImagesOutcome()>>(
			[this, request]()
			{
			return this->deleteImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DeleteNASFileSystemsOutcome EcdClient::deleteNASFileSystems(const DeleteNASFileSystemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNASFileSystemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNASFileSystemsOutcome(DeleteNASFileSystemsResult(outcome.result()));
	else
		return DeleteNASFileSystemsOutcome(outcome.error());
}

void EcdClient::deleteNASFileSystemsAsync(const DeleteNASFileSystemsRequest& request, const DeleteNASFileSystemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNASFileSystems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DeleteNASFileSystemsOutcomeCallable EcdClient::deleteNASFileSystemsCallable(const DeleteNASFileSystemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNASFileSystemsOutcome()>>(
			[this, request]()
			{
			return this->deleteNASFileSystems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DeleteNetworkPackagesOutcome EcdClient::deleteNetworkPackages(const DeleteNetworkPackagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNetworkPackagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNetworkPackagesOutcome(DeleteNetworkPackagesResult(outcome.result()));
	else
		return DeleteNetworkPackagesOutcome(outcome.error());
}

void EcdClient::deleteNetworkPackagesAsync(const DeleteNetworkPackagesRequest& request, const DeleteNetworkPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNetworkPackages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DeleteNetworkPackagesOutcomeCallable EcdClient::deleteNetworkPackagesCallable(const DeleteNetworkPackagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNetworkPackagesOutcome()>>(
			[this, request]()
			{
			return this->deleteNetworkPackages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DeleteOfficeSitesOutcome EcdClient::deleteOfficeSites(const DeleteOfficeSitesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteOfficeSitesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteOfficeSitesOutcome(DeleteOfficeSitesResult(outcome.result()));
	else
		return DeleteOfficeSitesOutcome(outcome.error());
}

void EcdClient::deleteOfficeSitesAsync(const DeleteOfficeSitesRequest& request, const DeleteOfficeSitesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteOfficeSites(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DeleteOfficeSitesOutcomeCallable EcdClient::deleteOfficeSitesCallable(const DeleteOfficeSitesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteOfficeSitesOutcome()>>(
			[this, request]()
			{
			return this->deleteOfficeSites(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DeletePolicyGroupsOutcome EcdClient::deletePolicyGroups(const DeletePolicyGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePolicyGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePolicyGroupsOutcome(DeletePolicyGroupsResult(outcome.result()));
	else
		return DeletePolicyGroupsOutcome(outcome.error());
}

void EcdClient::deletePolicyGroupsAsync(const DeletePolicyGroupsRequest& request, const DeletePolicyGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePolicyGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DeletePolicyGroupsOutcomeCallable EcdClient::deletePolicyGroupsCallable(const DeletePolicyGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePolicyGroupsOutcome()>>(
			[this, request]()
			{
			return this->deletePolicyGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DeleteSnapshotOutcome EcdClient::deleteSnapshot(const DeleteSnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSnapshotOutcome(DeleteSnapshotResult(outcome.result()));
	else
		return DeleteSnapshotOutcome(outcome.error());
}

void EcdClient::deleteSnapshotAsync(const DeleteSnapshotRequest& request, const DeleteSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DeleteSnapshotOutcomeCallable EcdClient::deleteSnapshotCallable(const DeleteSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSnapshotOutcome()>>(
			[this, request]()
			{
			return this->deleteSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DeleteVirtualMFADeviceOutcome EcdClient::deleteVirtualMFADevice(const DeleteVirtualMFADeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVirtualMFADeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVirtualMFADeviceOutcome(DeleteVirtualMFADeviceResult(outcome.result()));
	else
		return DeleteVirtualMFADeviceOutcome(outcome.error());
}

void EcdClient::deleteVirtualMFADeviceAsync(const DeleteVirtualMFADeviceRequest& request, const DeleteVirtualMFADeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVirtualMFADevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DeleteVirtualMFADeviceOutcomeCallable EcdClient::deleteVirtualMFADeviceCallable(const DeleteVirtualMFADeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVirtualMFADeviceOutcome()>>(
			[this, request]()
			{
			return this->deleteVirtualMFADevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeAlarmEventStackInfoOutcome EcdClient::describeAlarmEventStackInfo(const DescribeAlarmEventStackInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAlarmEventStackInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAlarmEventStackInfoOutcome(DescribeAlarmEventStackInfoResult(outcome.result()));
	else
		return DescribeAlarmEventStackInfoOutcome(outcome.error());
}

void EcdClient::describeAlarmEventStackInfoAsync(const DescribeAlarmEventStackInfoRequest& request, const DescribeAlarmEventStackInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAlarmEventStackInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeAlarmEventStackInfoOutcomeCallable EcdClient::describeAlarmEventStackInfoCallable(const DescribeAlarmEventStackInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAlarmEventStackInfoOutcome()>>(
			[this, request]()
			{
			return this->describeAlarmEventStackInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeAutoSnapshotPolicyOutcome EcdClient::describeAutoSnapshotPolicy(const DescribeAutoSnapshotPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAutoSnapshotPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAutoSnapshotPolicyOutcome(DescribeAutoSnapshotPolicyResult(outcome.result()));
	else
		return DescribeAutoSnapshotPolicyOutcome(outcome.error());
}

void EcdClient::describeAutoSnapshotPolicyAsync(const DescribeAutoSnapshotPolicyRequest& request, const DescribeAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAutoSnapshotPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeAutoSnapshotPolicyOutcomeCallable EcdClient::describeAutoSnapshotPolicyCallable(const DescribeAutoSnapshotPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAutoSnapshotPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeAutoSnapshotPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeBundlesOutcome EcdClient::describeBundles(const DescribeBundlesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBundlesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBundlesOutcome(DescribeBundlesResult(outcome.result()));
	else
		return DescribeBundlesOutcome(outcome.error());
}

void EcdClient::describeBundlesAsync(const DescribeBundlesRequest& request, const DescribeBundlesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBundles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeBundlesOutcomeCallable EcdClient::describeBundlesCallable(const DescribeBundlesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBundlesOutcome()>>(
			[this, request]()
			{
			return this->describeBundles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeCdsFileShareLinksOutcome EcdClient::describeCdsFileShareLinks(const DescribeCdsFileShareLinksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdsFileShareLinksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdsFileShareLinksOutcome(DescribeCdsFileShareLinksResult(outcome.result()));
	else
		return DescribeCdsFileShareLinksOutcome(outcome.error());
}

void EcdClient::describeCdsFileShareLinksAsync(const DescribeCdsFileShareLinksRequest& request, const DescribeCdsFileShareLinksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdsFileShareLinks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeCdsFileShareLinksOutcomeCallable EcdClient::describeCdsFileShareLinksCallable(const DescribeCdsFileShareLinksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdsFileShareLinksOutcome()>>(
			[this, request]()
			{
			return this->describeCdsFileShareLinks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeCensOutcome EcdClient::describeCens(const DescribeCensRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCensOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCensOutcome(DescribeCensResult(outcome.result()));
	else
		return DescribeCensOutcome(outcome.error());
}

void EcdClient::describeCensAsync(const DescribeCensRequest& request, const DescribeCensAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCens(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeCensOutcomeCallable EcdClient::describeCensCallable(const DescribeCensRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCensOutcome()>>(
			[this, request]()
			{
			return this->describeCens(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeClientEventsOutcome EcdClient::describeClientEvents(const DescribeClientEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClientEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClientEventsOutcome(DescribeClientEventsResult(outcome.result()));
	else
		return DescribeClientEventsOutcome(outcome.error());
}

void EcdClient::describeClientEventsAsync(const DescribeClientEventsRequest& request, const DescribeClientEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClientEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeClientEventsOutcomeCallable EcdClient::describeClientEventsCallable(const DescribeClientEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClientEventsOutcome()>>(
			[this, request]()
			{
			return this->describeClientEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeCloudDriveGroupsOutcome EcdClient::describeCloudDriveGroups(const DescribeCloudDriveGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCloudDriveGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCloudDriveGroupsOutcome(DescribeCloudDriveGroupsResult(outcome.result()));
	else
		return DescribeCloudDriveGroupsOutcome(outcome.error());
}

void EcdClient::describeCloudDriveGroupsAsync(const DescribeCloudDriveGroupsRequest& request, const DescribeCloudDriveGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCloudDriveGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeCloudDriveGroupsOutcomeCallable EcdClient::describeCloudDriveGroupsCallable(const DescribeCloudDriveGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCloudDriveGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeCloudDriveGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeCloudDrivePermissionsOutcome EcdClient::describeCloudDrivePermissions(const DescribeCloudDrivePermissionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCloudDrivePermissionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCloudDrivePermissionsOutcome(DescribeCloudDrivePermissionsResult(outcome.result()));
	else
		return DescribeCloudDrivePermissionsOutcome(outcome.error());
}

void EcdClient::describeCloudDrivePermissionsAsync(const DescribeCloudDrivePermissionsRequest& request, const DescribeCloudDrivePermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCloudDrivePermissions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeCloudDrivePermissionsOutcomeCallable EcdClient::describeCloudDrivePermissionsCallable(const DescribeCloudDrivePermissionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCloudDrivePermissionsOutcome()>>(
			[this, request]()
			{
			return this->describeCloudDrivePermissions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeCustomizedListHeadersOutcome EcdClient::describeCustomizedListHeaders(const DescribeCustomizedListHeadersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCustomizedListHeadersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCustomizedListHeadersOutcome(DescribeCustomizedListHeadersResult(outcome.result()));
	else
		return DescribeCustomizedListHeadersOutcome(outcome.error());
}

void EcdClient::describeCustomizedListHeadersAsync(const DescribeCustomizedListHeadersRequest& request, const DescribeCustomizedListHeadersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustomizedListHeaders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeCustomizedListHeadersOutcomeCallable EcdClient::describeCustomizedListHeadersCallable(const DescribeCustomizedListHeadersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustomizedListHeadersOutcome()>>(
			[this, request]()
			{
			return this->describeCustomizedListHeaders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeDesktopGroupsOutcome EcdClient::describeDesktopGroups(const DescribeDesktopGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDesktopGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDesktopGroupsOutcome(DescribeDesktopGroupsResult(outcome.result()));
	else
		return DescribeDesktopGroupsOutcome(outcome.error());
}

void EcdClient::describeDesktopGroupsAsync(const DescribeDesktopGroupsRequest& request, const DescribeDesktopGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDesktopGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeDesktopGroupsOutcomeCallable EcdClient::describeDesktopGroupsCallable(const DescribeDesktopGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDesktopGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeDesktopGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeDesktopIdsByVulNamesOutcome EcdClient::describeDesktopIdsByVulNames(const DescribeDesktopIdsByVulNamesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDesktopIdsByVulNamesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDesktopIdsByVulNamesOutcome(DescribeDesktopIdsByVulNamesResult(outcome.result()));
	else
		return DescribeDesktopIdsByVulNamesOutcome(outcome.error());
}

void EcdClient::describeDesktopIdsByVulNamesAsync(const DescribeDesktopIdsByVulNamesRequest& request, const DescribeDesktopIdsByVulNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDesktopIdsByVulNames(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeDesktopIdsByVulNamesOutcomeCallable EcdClient::describeDesktopIdsByVulNamesCallable(const DescribeDesktopIdsByVulNamesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDesktopIdsByVulNamesOutcome()>>(
			[this, request]()
			{
			return this->describeDesktopIdsByVulNames(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeDesktopTypesOutcome EcdClient::describeDesktopTypes(const DescribeDesktopTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDesktopTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDesktopTypesOutcome(DescribeDesktopTypesResult(outcome.result()));
	else
		return DescribeDesktopTypesOutcome(outcome.error());
}

void EcdClient::describeDesktopTypesAsync(const DescribeDesktopTypesRequest& request, const DescribeDesktopTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDesktopTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeDesktopTypesOutcomeCallable EcdClient::describeDesktopTypesCallable(const DescribeDesktopTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDesktopTypesOutcome()>>(
			[this, request]()
			{
			return this->describeDesktopTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeDesktopsOutcome EcdClient::describeDesktops(const DescribeDesktopsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDesktopsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDesktopsOutcome(DescribeDesktopsResult(outcome.result()));
	else
		return DescribeDesktopsOutcome(outcome.error());
}

void EcdClient::describeDesktopsAsync(const DescribeDesktopsRequest& request, const DescribeDesktopsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDesktops(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeDesktopsOutcomeCallable EcdClient::describeDesktopsCallable(const DescribeDesktopsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDesktopsOutcome()>>(
			[this, request]()
			{
			return this->describeDesktops(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeDesktopsInGroupOutcome EcdClient::describeDesktopsInGroup(const DescribeDesktopsInGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDesktopsInGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDesktopsInGroupOutcome(DescribeDesktopsInGroupResult(outcome.result()));
	else
		return DescribeDesktopsInGroupOutcome(outcome.error());
}

void EcdClient::describeDesktopsInGroupAsync(const DescribeDesktopsInGroupRequest& request, const DescribeDesktopsInGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDesktopsInGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeDesktopsInGroupOutcomeCallable EcdClient::describeDesktopsInGroupCallable(const DescribeDesktopsInGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDesktopsInGroupOutcome()>>(
			[this, request]()
			{
			return this->describeDesktopsInGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeDevicesOutcome EcdClient::describeDevices(const DescribeDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDevicesOutcome(DescribeDevicesResult(outcome.result()));
	else
		return DescribeDevicesOutcome(outcome.error());
}

void EcdClient::describeDevicesAsync(const DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeDevicesOutcomeCallable EcdClient::describeDevicesCallable(const DescribeDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDevicesOutcome()>>(
			[this, request]()
			{
			return this->describeDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeDirectoriesOutcome EcdClient::describeDirectories(const DescribeDirectoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDirectoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDirectoriesOutcome(DescribeDirectoriesResult(outcome.result()));
	else
		return DescribeDirectoriesOutcome(outcome.error());
}

void EcdClient::describeDirectoriesAsync(const DescribeDirectoriesRequest& request, const DescribeDirectoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDirectories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeDirectoriesOutcomeCallable EcdClient::describeDirectoriesCallable(const DescribeDirectoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDirectoriesOutcome()>>(
			[this, request]()
			{
			return this->describeDirectories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeFlowMetricOutcome EcdClient::describeFlowMetric(const DescribeFlowMetricRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowMetricOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowMetricOutcome(DescribeFlowMetricResult(outcome.result()));
	else
		return DescribeFlowMetricOutcome(outcome.error());
}

void EcdClient::describeFlowMetricAsync(const DescribeFlowMetricRequest& request, const DescribeFlowMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowMetric(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeFlowMetricOutcomeCallable EcdClient::describeFlowMetricCallable(const DescribeFlowMetricRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowMetricOutcome()>>(
			[this, request]()
			{
			return this->describeFlowMetric(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeFlowStatisticOutcome EcdClient::describeFlowStatistic(const DescribeFlowStatisticRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowStatisticOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowStatisticOutcome(DescribeFlowStatisticResult(outcome.result()));
	else
		return DescribeFlowStatisticOutcome(outcome.error());
}

void EcdClient::describeFlowStatisticAsync(const DescribeFlowStatisticRequest& request, const DescribeFlowStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowStatistic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeFlowStatisticOutcomeCallable EcdClient::describeFlowStatisticCallable(const DescribeFlowStatisticRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowStatisticOutcome()>>(
			[this, request]()
			{
			return this->describeFlowStatistic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeFotaPendingDesktopsOutcome EcdClient::describeFotaPendingDesktops(const DescribeFotaPendingDesktopsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFotaPendingDesktopsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFotaPendingDesktopsOutcome(DescribeFotaPendingDesktopsResult(outcome.result()));
	else
		return DescribeFotaPendingDesktopsOutcome(outcome.error());
}

void EcdClient::describeFotaPendingDesktopsAsync(const DescribeFotaPendingDesktopsRequest& request, const DescribeFotaPendingDesktopsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFotaPendingDesktops(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeFotaPendingDesktopsOutcomeCallable EcdClient::describeFotaPendingDesktopsCallable(const DescribeFotaPendingDesktopsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFotaPendingDesktopsOutcome()>>(
			[this, request]()
			{
			return this->describeFotaPendingDesktops(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeFotaTasksOutcome EcdClient::describeFotaTasks(const DescribeFotaTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFotaTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFotaTasksOutcome(DescribeFotaTasksResult(outcome.result()));
	else
		return DescribeFotaTasksOutcome(outcome.error());
}

void EcdClient::describeFotaTasksAsync(const DescribeFotaTasksRequest& request, const DescribeFotaTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFotaTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeFotaTasksOutcomeCallable EcdClient::describeFotaTasksCallable(const DescribeFotaTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFotaTasksOutcome()>>(
			[this, request]()
			{
			return this->describeFotaTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeFrontVulPatchListOutcome EcdClient::describeFrontVulPatchList(const DescribeFrontVulPatchListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFrontVulPatchListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFrontVulPatchListOutcome(DescribeFrontVulPatchListResult(outcome.result()));
	else
		return DescribeFrontVulPatchListOutcome(outcome.error());
}

void EcdClient::describeFrontVulPatchListAsync(const DescribeFrontVulPatchListRequest& request, const DescribeFrontVulPatchListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFrontVulPatchList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeFrontVulPatchListOutcomeCallable EcdClient::describeFrontVulPatchListCallable(const DescribeFrontVulPatchListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFrontVulPatchListOutcome()>>(
			[this, request]()
			{
			return this->describeFrontVulPatchList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeGroupedVulOutcome EcdClient::describeGroupedVul(const DescribeGroupedVulRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGroupedVulOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGroupedVulOutcome(DescribeGroupedVulResult(outcome.result()));
	else
		return DescribeGroupedVulOutcome(outcome.error());
}

void EcdClient::describeGroupedVulAsync(const DescribeGroupedVulRequest& request, const DescribeGroupedVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGroupedVul(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeGroupedVulOutcomeCallable EcdClient::describeGroupedVulCallable(const DescribeGroupedVulRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGroupedVulOutcome()>>(
			[this, request]()
			{
			return this->describeGroupedVul(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeImageModifiedRecordsOutcome EcdClient::describeImageModifiedRecords(const DescribeImageModifiedRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageModifiedRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageModifiedRecordsOutcome(DescribeImageModifiedRecordsResult(outcome.result()));
	else
		return DescribeImageModifiedRecordsOutcome(outcome.error());
}

void EcdClient::describeImageModifiedRecordsAsync(const DescribeImageModifiedRecordsRequest& request, const DescribeImageModifiedRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageModifiedRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeImageModifiedRecordsOutcomeCallable EcdClient::describeImageModifiedRecordsCallable(const DescribeImageModifiedRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageModifiedRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeImageModifiedRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeImagePermissionOutcome EcdClient::describeImagePermission(const DescribeImagePermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImagePermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImagePermissionOutcome(DescribeImagePermissionResult(outcome.result()));
	else
		return DescribeImagePermissionOutcome(outcome.error());
}

void EcdClient::describeImagePermissionAsync(const DescribeImagePermissionRequest& request, const DescribeImagePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImagePermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeImagePermissionOutcomeCallable EcdClient::describeImagePermissionCallable(const DescribeImagePermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImagePermissionOutcome()>>(
			[this, request]()
			{
			return this->describeImagePermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeImagesOutcome EcdClient::describeImages(const DescribeImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImagesOutcome(DescribeImagesResult(outcome.result()));
	else
		return DescribeImagesOutcome(outcome.error());
}

void EcdClient::describeImagesAsync(const DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeImagesOutcomeCallable EcdClient::describeImagesCallable(const DescribeImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImagesOutcome()>>(
			[this, request]()
			{
			return this->describeImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeInvocationsOutcome EcdClient::describeInvocations(const DescribeInvocationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInvocationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInvocationsOutcome(DescribeInvocationsResult(outcome.result()));
	else
		return DescribeInvocationsOutcome(outcome.error());
}

void EcdClient::describeInvocationsAsync(const DescribeInvocationsRequest& request, const DescribeInvocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInvocations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeInvocationsOutcomeCallable EcdClient::describeInvocationsCallable(const DescribeInvocationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInvocationsOutcome()>>(
			[this, request]()
			{
			return this->describeInvocations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeKmsKeysOutcome EcdClient::describeKmsKeys(const DescribeKmsKeysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeKmsKeysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeKmsKeysOutcome(DescribeKmsKeysResult(outcome.result()));
	else
		return DescribeKmsKeysOutcome(outcome.error());
}

void EcdClient::describeKmsKeysAsync(const DescribeKmsKeysRequest& request, const DescribeKmsKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeKmsKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeKmsKeysOutcomeCallable EcdClient::describeKmsKeysCallable(const DescribeKmsKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeKmsKeysOutcome()>>(
			[this, request]()
			{
			return this->describeKmsKeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeNASFileSystemsOutcome EcdClient::describeNASFileSystems(const DescribeNASFileSystemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNASFileSystemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNASFileSystemsOutcome(DescribeNASFileSystemsResult(outcome.result()));
	else
		return DescribeNASFileSystemsOutcome(outcome.error());
}

void EcdClient::describeNASFileSystemsAsync(const DescribeNASFileSystemsRequest& request, const DescribeNASFileSystemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNASFileSystems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeNASFileSystemsOutcomeCallable EcdClient::describeNASFileSystemsCallable(const DescribeNASFileSystemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNASFileSystemsOutcome()>>(
			[this, request]()
			{
			return this->describeNASFileSystems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeNetworkPackagesOutcome EcdClient::describeNetworkPackages(const DescribeNetworkPackagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNetworkPackagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNetworkPackagesOutcome(DescribeNetworkPackagesResult(outcome.result()));
	else
		return DescribeNetworkPackagesOutcome(outcome.error());
}

void EcdClient::describeNetworkPackagesAsync(const DescribeNetworkPackagesRequest& request, const DescribeNetworkPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNetworkPackages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeNetworkPackagesOutcomeCallable EcdClient::describeNetworkPackagesCallable(const DescribeNetworkPackagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNetworkPackagesOutcome()>>(
			[this, request]()
			{
			return this->describeNetworkPackages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeOfficeSitesOutcome EcdClient::describeOfficeSites(const DescribeOfficeSitesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOfficeSitesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOfficeSitesOutcome(DescribeOfficeSitesResult(outcome.result()));
	else
		return DescribeOfficeSitesOutcome(outcome.error());
}

void EcdClient::describeOfficeSitesAsync(const DescribeOfficeSitesRequest& request, const DescribeOfficeSitesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOfficeSites(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeOfficeSitesOutcomeCallable EcdClient::describeOfficeSitesCallable(const DescribeOfficeSitesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOfficeSitesOutcome()>>(
			[this, request]()
			{
			return this->describeOfficeSites(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribePolicyGroupsOutcome EcdClient::describePolicyGroups(const DescribePolicyGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePolicyGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePolicyGroupsOutcome(DescribePolicyGroupsResult(outcome.result()));
	else
		return DescribePolicyGroupsOutcome(outcome.error());
}

void EcdClient::describePolicyGroupsAsync(const DescribePolicyGroupsRequest& request, const DescribePolicyGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePolicyGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribePolicyGroupsOutcomeCallable EcdClient::describePolicyGroupsCallable(const DescribePolicyGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePolicyGroupsOutcome()>>(
			[this, request]()
			{
			return this->describePolicyGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeRegionsOutcome EcdClient::describeRegions(const DescribeRegionsRequest &request) const
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

void EcdClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeRegionsOutcomeCallable EcdClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeScanTaskProgressOutcome EcdClient::describeScanTaskProgress(const DescribeScanTaskProgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScanTaskProgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScanTaskProgressOutcome(DescribeScanTaskProgressResult(outcome.result()));
	else
		return DescribeScanTaskProgressOutcome(outcome.error());
}

void EcdClient::describeScanTaskProgressAsync(const DescribeScanTaskProgressRequest& request, const DescribeScanTaskProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScanTaskProgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeScanTaskProgressOutcomeCallable EcdClient::describeScanTaskProgressCallable(const DescribeScanTaskProgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScanTaskProgressOutcome()>>(
			[this, request]()
			{
			return this->describeScanTaskProgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeSecurityEventOperationStatusOutcome EcdClient::describeSecurityEventOperationStatus(const DescribeSecurityEventOperationStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecurityEventOperationStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecurityEventOperationStatusOutcome(DescribeSecurityEventOperationStatusResult(outcome.result()));
	else
		return DescribeSecurityEventOperationStatusOutcome(outcome.error());
}

void EcdClient::describeSecurityEventOperationStatusAsync(const DescribeSecurityEventOperationStatusRequest& request, const DescribeSecurityEventOperationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityEventOperationStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeSecurityEventOperationStatusOutcomeCallable EcdClient::describeSecurityEventOperationStatusCallable(const DescribeSecurityEventOperationStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityEventOperationStatusOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityEventOperationStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeSecurityEventOperationsOutcome EcdClient::describeSecurityEventOperations(const DescribeSecurityEventOperationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecurityEventOperationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecurityEventOperationsOutcome(DescribeSecurityEventOperationsResult(outcome.result()));
	else
		return DescribeSecurityEventOperationsOutcome(outcome.error());
}

void EcdClient::describeSecurityEventOperationsAsync(const DescribeSecurityEventOperationsRequest& request, const DescribeSecurityEventOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityEventOperations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeSecurityEventOperationsOutcomeCallable EcdClient::describeSecurityEventOperationsCallable(const DescribeSecurityEventOperationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityEventOperationsOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityEventOperations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeSnapshotsOutcome EcdClient::describeSnapshots(const DescribeSnapshotsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSnapshotsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSnapshotsOutcome(DescribeSnapshotsResult(outcome.result()));
	else
		return DescribeSnapshotsOutcome(outcome.error());
}

void EcdClient::describeSnapshotsAsync(const DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSnapshots(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeSnapshotsOutcomeCallable EcdClient::describeSnapshotsCallable(const DescribeSnapshotsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSnapshotsOutcome()>>(
			[this, request]()
			{
			return this->describeSnapshots(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeSuspEventOverviewOutcome EcdClient::describeSuspEventOverview(const DescribeSuspEventOverviewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSuspEventOverviewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSuspEventOverviewOutcome(DescribeSuspEventOverviewResult(outcome.result()));
	else
		return DescribeSuspEventOverviewOutcome(outcome.error());
}

void EcdClient::describeSuspEventOverviewAsync(const DescribeSuspEventOverviewRequest& request, const DescribeSuspEventOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSuspEventOverview(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeSuspEventOverviewOutcomeCallable EcdClient::describeSuspEventOverviewCallable(const DescribeSuspEventOverviewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSuspEventOverviewOutcome()>>(
			[this, request]()
			{
			return this->describeSuspEventOverview(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeSuspEventQuaraFilesOutcome EcdClient::describeSuspEventQuaraFiles(const DescribeSuspEventQuaraFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSuspEventQuaraFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSuspEventQuaraFilesOutcome(DescribeSuspEventQuaraFilesResult(outcome.result()));
	else
		return DescribeSuspEventQuaraFilesOutcome(outcome.error());
}

void EcdClient::describeSuspEventQuaraFilesAsync(const DescribeSuspEventQuaraFilesRequest& request, const DescribeSuspEventQuaraFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSuspEventQuaraFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeSuspEventQuaraFilesOutcomeCallable EcdClient::describeSuspEventQuaraFilesCallable(const DescribeSuspEventQuaraFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSuspEventQuaraFilesOutcome()>>(
			[this, request]()
			{
			return this->describeSuspEventQuaraFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeSuspEventsOutcome EcdClient::describeSuspEvents(const DescribeSuspEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSuspEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSuspEventsOutcome(DescribeSuspEventsResult(outcome.result()));
	else
		return DescribeSuspEventsOutcome(outcome.error());
}

void EcdClient::describeSuspEventsAsync(const DescribeSuspEventsRequest& request, const DescribeSuspEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSuspEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeSuspEventsOutcomeCallable EcdClient::describeSuspEventsCallable(const DescribeSuspEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSuspEventsOutcome()>>(
			[this, request]()
			{
			return this->describeSuspEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeUserConnectionRecordsOutcome EcdClient::describeUserConnectionRecords(const DescribeUserConnectionRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserConnectionRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserConnectionRecordsOutcome(DescribeUserConnectionRecordsResult(outcome.result()));
	else
		return DescribeUserConnectionRecordsOutcome(outcome.error());
}

void EcdClient::describeUserConnectionRecordsAsync(const DescribeUserConnectionRecordsRequest& request, const DescribeUserConnectionRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserConnectionRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeUserConnectionRecordsOutcomeCallable EcdClient::describeUserConnectionRecordsCallable(const DescribeUserConnectionRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserConnectionRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeUserConnectionRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeUserProfilePathRulesOutcome EcdClient::describeUserProfilePathRules(const DescribeUserProfilePathRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserProfilePathRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserProfilePathRulesOutcome(DescribeUserProfilePathRulesResult(outcome.result()));
	else
		return DescribeUserProfilePathRulesOutcome(outcome.error());
}

void EcdClient::describeUserProfilePathRulesAsync(const DescribeUserProfilePathRulesRequest& request, const DescribeUserProfilePathRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserProfilePathRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeUserProfilePathRulesOutcomeCallable EcdClient::describeUserProfilePathRulesCallable(const DescribeUserProfilePathRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserProfilePathRulesOutcome()>>(
			[this, request]()
			{
			return this->describeUserProfilePathRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeUsersInGroupOutcome EcdClient::describeUsersInGroup(const DescribeUsersInGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUsersInGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUsersInGroupOutcome(DescribeUsersInGroupResult(outcome.result()));
	else
		return DescribeUsersInGroupOutcome(outcome.error());
}

void EcdClient::describeUsersInGroupAsync(const DescribeUsersInGroupRequest& request, const DescribeUsersInGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUsersInGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeUsersInGroupOutcomeCallable EcdClient::describeUsersInGroupCallable(const DescribeUsersInGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUsersInGroupOutcome()>>(
			[this, request]()
			{
			return this->describeUsersInGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeUsersPasswordOutcome EcdClient::describeUsersPassword(const DescribeUsersPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUsersPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUsersPasswordOutcome(DescribeUsersPasswordResult(outcome.result()));
	else
		return DescribeUsersPasswordOutcome(outcome.error());
}

void EcdClient::describeUsersPasswordAsync(const DescribeUsersPasswordRequest& request, const DescribeUsersPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUsersPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeUsersPasswordOutcomeCallable EcdClient::describeUsersPasswordCallable(const DescribeUsersPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUsersPasswordOutcome()>>(
			[this, request]()
			{
			return this->describeUsersPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeVirtualMFADevicesOutcome EcdClient::describeVirtualMFADevices(const DescribeVirtualMFADevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVirtualMFADevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVirtualMFADevicesOutcome(DescribeVirtualMFADevicesResult(outcome.result()));
	else
		return DescribeVirtualMFADevicesOutcome(outcome.error());
}

void EcdClient::describeVirtualMFADevicesAsync(const DescribeVirtualMFADevicesRequest& request, const DescribeVirtualMFADevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVirtualMFADevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeVirtualMFADevicesOutcomeCallable EcdClient::describeVirtualMFADevicesCallable(const DescribeVirtualMFADevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVirtualMFADevicesOutcome()>>(
			[this, request]()
			{
			return this->describeVirtualMFADevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeVulDetailsOutcome EcdClient::describeVulDetails(const DescribeVulDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVulDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVulDetailsOutcome(DescribeVulDetailsResult(outcome.result()));
	else
		return DescribeVulDetailsOutcome(outcome.error());
}

void EcdClient::describeVulDetailsAsync(const DescribeVulDetailsRequest& request, const DescribeVulDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeVulDetailsOutcomeCallable EcdClient::describeVulDetailsCallable(const DescribeVulDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulDetailsOutcome()>>(
			[this, request]()
			{
			return this->describeVulDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeVulListOutcome EcdClient::describeVulList(const DescribeVulListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVulListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVulListOutcome(DescribeVulListResult(outcome.result()));
	else
		return DescribeVulListOutcome(outcome.error());
}

void EcdClient::describeVulListAsync(const DescribeVulListRequest& request, const DescribeVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeVulListOutcomeCallable EcdClient::describeVulListCallable(const DescribeVulListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulListOutcome()>>(
			[this, request]()
			{
			return this->describeVulList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeVulOverviewOutcome EcdClient::describeVulOverview(const DescribeVulOverviewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVulOverviewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVulOverviewOutcome(DescribeVulOverviewResult(outcome.result()));
	else
		return DescribeVulOverviewOutcome(outcome.error());
}

void EcdClient::describeVulOverviewAsync(const DescribeVulOverviewRequest& request, const DescribeVulOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulOverview(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeVulOverviewOutcomeCallable EcdClient::describeVulOverviewCallable(const DescribeVulOverviewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulOverviewOutcome()>>(
			[this, request]()
			{
			return this->describeVulOverview(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DescribeZonesOutcome EcdClient::describeZones(const DescribeZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeZonesOutcome(DescribeZonesResult(outcome.result()));
	else
		return DescribeZonesOutcome(outcome.error());
}

void EcdClient::describeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DescribeZonesOutcomeCallable EcdClient::describeZonesCallable(const DescribeZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeZonesOutcome()>>(
			[this, request]()
			{
			return this->describeZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DetachCenOutcome EcdClient::detachCen(const DetachCenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachCenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachCenOutcome(DetachCenResult(outcome.result()));
	else
		return DetachCenOutcome(outcome.error());
}

void EcdClient::detachCenAsync(const DetachCenRequest& request, const DetachCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachCen(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DetachCenOutcomeCallable EcdClient::detachCenCallable(const DetachCenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachCenOutcome()>>(
			[this, request]()
			{
			return this->detachCen(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DetachEndUserOutcome EcdClient::detachEndUser(const DetachEndUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachEndUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachEndUserOutcome(DetachEndUserResult(outcome.result()));
	else
		return DetachEndUserOutcome(outcome.error());
}

void EcdClient::detachEndUserAsync(const DetachEndUserRequest& request, const DetachEndUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachEndUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DetachEndUserOutcomeCallable EcdClient::detachEndUserCallable(const DetachEndUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachEndUserOutcome()>>(
			[this, request]()
			{
			return this->detachEndUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DisableDesktopsInGroupOutcome EcdClient::disableDesktopsInGroup(const DisableDesktopsInGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableDesktopsInGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableDesktopsInGroupOutcome(DisableDesktopsInGroupResult(outcome.result()));
	else
		return DisableDesktopsInGroupOutcome(outcome.error());
}

void EcdClient::disableDesktopsInGroupAsync(const DisableDesktopsInGroupRequest& request, const DisableDesktopsInGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableDesktopsInGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DisableDesktopsInGroupOutcomeCallable EcdClient::disableDesktopsInGroupCallable(const DisableDesktopsInGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableDesktopsInGroupOutcome()>>(
			[this, request]()
			{
			return this->disableDesktopsInGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::DissociateNetworkPackageOutcome EcdClient::dissociateNetworkPackage(const DissociateNetworkPackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DissociateNetworkPackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DissociateNetworkPackageOutcome(DissociateNetworkPackageResult(outcome.result()));
	else
		return DissociateNetworkPackageOutcome(outcome.error());
}

void EcdClient::dissociateNetworkPackageAsync(const DissociateNetworkPackageRequest& request, const DissociateNetworkPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dissociateNetworkPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::DissociateNetworkPackageOutcomeCallable EcdClient::dissociateNetworkPackageCallable(const DissociateNetworkPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DissociateNetworkPackageOutcome()>>(
			[this, request]()
			{
			return this->dissociateNetworkPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ExportClientEventsOutcome EcdClient::exportClientEvents(const ExportClientEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportClientEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportClientEventsOutcome(ExportClientEventsResult(outcome.result()));
	else
		return ExportClientEventsOutcome(outcome.error());
}

void EcdClient::exportClientEventsAsync(const ExportClientEventsRequest& request, const ExportClientEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportClientEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ExportClientEventsOutcomeCallable EcdClient::exportClientEventsCallable(const ExportClientEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportClientEventsOutcome()>>(
			[this, request]()
			{
			return this->exportClientEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ExportDesktopGroupInfoOutcome EcdClient::exportDesktopGroupInfo(const ExportDesktopGroupInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportDesktopGroupInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportDesktopGroupInfoOutcome(ExportDesktopGroupInfoResult(outcome.result()));
	else
		return ExportDesktopGroupInfoOutcome(outcome.error());
}

void EcdClient::exportDesktopGroupInfoAsync(const ExportDesktopGroupInfoRequest& request, const ExportDesktopGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportDesktopGroupInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ExportDesktopGroupInfoOutcomeCallable EcdClient::exportDesktopGroupInfoCallable(const ExportDesktopGroupInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportDesktopGroupInfoOutcome()>>(
			[this, request]()
			{
			return this->exportDesktopGroupInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ExportDesktopListInfoOutcome EcdClient::exportDesktopListInfo(const ExportDesktopListInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportDesktopListInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportDesktopListInfoOutcome(ExportDesktopListInfoResult(outcome.result()));
	else
		return ExportDesktopListInfoOutcome(outcome.error());
}

void EcdClient::exportDesktopListInfoAsync(const ExportDesktopListInfoRequest& request, const ExportDesktopListInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportDesktopListInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ExportDesktopListInfoOutcomeCallable EcdClient::exportDesktopListInfoCallable(const ExportDesktopListInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportDesktopListInfoOutcome()>>(
			[this, request]()
			{
			return this->exportDesktopListInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::GetConnectionTicketOutcome EcdClient::getConnectionTicket(const GetConnectionTicketRequest &request) const
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

void EcdClient::getConnectionTicketAsync(const GetConnectionTicketRequest& request, const GetConnectionTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getConnectionTicket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::GetConnectionTicketOutcomeCallable EcdClient::getConnectionTicketCallable(const GetConnectionTicketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetConnectionTicketOutcome()>>(
			[this, request]()
			{
			return this->getConnectionTicket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::GetDesktopGroupDetailOutcome EcdClient::getDesktopGroupDetail(const GetDesktopGroupDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDesktopGroupDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDesktopGroupDetailOutcome(GetDesktopGroupDetailResult(outcome.result()));
	else
		return GetDesktopGroupDetailOutcome(outcome.error());
}

void EcdClient::getDesktopGroupDetailAsync(const GetDesktopGroupDetailRequest& request, const GetDesktopGroupDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDesktopGroupDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::GetDesktopGroupDetailOutcomeCallable EcdClient::getDesktopGroupDetailCallable(const GetDesktopGroupDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDesktopGroupDetailOutcome()>>(
			[this, request]()
			{
			return this->getDesktopGroupDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::GetOfficeSiteSsoStatusOutcome EcdClient::getOfficeSiteSsoStatus(const GetOfficeSiteSsoStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOfficeSiteSsoStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOfficeSiteSsoStatusOutcome(GetOfficeSiteSsoStatusResult(outcome.result()));
	else
		return GetOfficeSiteSsoStatusOutcome(outcome.error());
}

void EcdClient::getOfficeSiteSsoStatusAsync(const GetOfficeSiteSsoStatusRequest& request, const GetOfficeSiteSsoStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOfficeSiteSsoStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::GetOfficeSiteSsoStatusOutcomeCallable EcdClient::getOfficeSiteSsoStatusCallable(const GetOfficeSiteSsoStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOfficeSiteSsoStatusOutcome()>>(
			[this, request]()
			{
			return this->getOfficeSiteSsoStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::GetSpMetadataOutcome EcdClient::getSpMetadata(const GetSpMetadataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSpMetadataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSpMetadataOutcome(GetSpMetadataResult(outcome.result()));
	else
		return GetSpMetadataOutcome(outcome.error());
}

void EcdClient::getSpMetadataAsync(const GetSpMetadataRequest& request, const GetSpMetadataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSpMetadata(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::GetSpMetadataOutcomeCallable EcdClient::getSpMetadataCallable(const GetSpMetadataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSpMetadataOutcome()>>(
			[this, request]()
			{
			return this->getSpMetadata(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::HandleSecurityEventsOutcome EcdClient::handleSecurityEvents(const HandleSecurityEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HandleSecurityEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HandleSecurityEventsOutcome(HandleSecurityEventsResult(outcome.result()));
	else
		return HandleSecurityEventsOutcome(outcome.error());
}

void EcdClient::handleSecurityEventsAsync(const HandleSecurityEventsRequest& request, const HandleSecurityEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, handleSecurityEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::HandleSecurityEventsOutcomeCallable EcdClient::handleSecurityEventsCallable(const HandleSecurityEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HandleSecurityEventsOutcome()>>(
			[this, request]()
			{
			return this->handleSecurityEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::HibernateDesktopsOutcome EcdClient::hibernateDesktops(const HibernateDesktopsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HibernateDesktopsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HibernateDesktopsOutcome(HibernateDesktopsResult(outcome.result()));
	else
		return HibernateDesktopsOutcome(outcome.error());
}

void EcdClient::hibernateDesktopsAsync(const HibernateDesktopsRequest& request, const HibernateDesktopsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, hibernateDesktops(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::HibernateDesktopsOutcomeCallable EcdClient::hibernateDesktopsCallable(const HibernateDesktopsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HibernateDesktopsOutcome()>>(
			[this, request]()
			{
			return this->hibernateDesktops(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ListCdsFilesOutcome EcdClient::listCdsFiles(const ListCdsFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCdsFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCdsFilesOutcome(ListCdsFilesResult(outcome.result()));
	else
		return ListCdsFilesOutcome(outcome.error());
}

void EcdClient::listCdsFilesAsync(const ListCdsFilesRequest& request, const ListCdsFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCdsFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ListCdsFilesOutcomeCallable EcdClient::listCdsFilesCallable(const ListCdsFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCdsFilesOutcome()>>(
			[this, request]()
			{
			return this->listCdsFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ListDirectoryUsersOutcome EcdClient::listDirectoryUsers(const ListDirectoryUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDirectoryUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDirectoryUsersOutcome(ListDirectoryUsersResult(outcome.result()));
	else
		return ListDirectoryUsersOutcome(outcome.error());
}

void EcdClient::listDirectoryUsersAsync(const ListDirectoryUsersRequest& request, const ListDirectoryUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDirectoryUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ListDirectoryUsersOutcomeCallable EcdClient::listDirectoryUsersCallable(const ListDirectoryUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDirectoryUsersOutcome()>>(
			[this, request]()
			{
			return this->listDirectoryUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ListFilePermissionOutcome EcdClient::listFilePermission(const ListFilePermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFilePermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFilePermissionOutcome(ListFilePermissionResult(outcome.result()));
	else
		return ListFilePermissionOutcome(outcome.error());
}

void EcdClient::listFilePermissionAsync(const ListFilePermissionRequest& request, const ListFilePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFilePermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ListFilePermissionOutcomeCallable EcdClient::listFilePermissionCallable(const ListFilePermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFilePermissionOutcome()>>(
			[this, request]()
			{
			return this->listFilePermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ListOfficeSiteOverviewOutcome EcdClient::listOfficeSiteOverview(const ListOfficeSiteOverviewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOfficeSiteOverviewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOfficeSiteOverviewOutcome(ListOfficeSiteOverviewResult(outcome.result()));
	else
		return ListOfficeSiteOverviewOutcome(outcome.error());
}

void EcdClient::listOfficeSiteOverviewAsync(const ListOfficeSiteOverviewRequest& request, const ListOfficeSiteOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOfficeSiteOverview(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ListOfficeSiteOverviewOutcomeCallable EcdClient::listOfficeSiteOverviewCallable(const ListOfficeSiteOverviewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOfficeSiteOverviewOutcome()>>(
			[this, request]()
			{
			return this->listOfficeSiteOverview(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ListOfficeSiteUsersOutcome EcdClient::listOfficeSiteUsers(const ListOfficeSiteUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOfficeSiteUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOfficeSiteUsersOutcome(ListOfficeSiteUsersResult(outcome.result()));
	else
		return ListOfficeSiteUsersOutcome(outcome.error());
}

void EcdClient::listOfficeSiteUsersAsync(const ListOfficeSiteUsersRequest& request, const ListOfficeSiteUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOfficeSiteUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ListOfficeSiteUsersOutcomeCallable EcdClient::listOfficeSiteUsersCallable(const ListOfficeSiteUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOfficeSiteUsersOutcome()>>(
			[this, request]()
			{
			return this->listOfficeSiteUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ListTagResourcesOutcome EcdClient::listTagResources(const ListTagResourcesRequest &request) const
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

void EcdClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ListTagResourcesOutcomeCallable EcdClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ListUserAdOrganizationUnitsOutcome EcdClient::listUserAdOrganizationUnits(const ListUserAdOrganizationUnitsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserAdOrganizationUnitsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserAdOrganizationUnitsOutcome(ListUserAdOrganizationUnitsResult(outcome.result()));
	else
		return ListUserAdOrganizationUnitsOutcome(outcome.error());
}

void EcdClient::listUserAdOrganizationUnitsAsync(const ListUserAdOrganizationUnitsRequest& request, const ListUserAdOrganizationUnitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserAdOrganizationUnits(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ListUserAdOrganizationUnitsOutcomeCallable EcdClient::listUserAdOrganizationUnitsCallable(const ListUserAdOrganizationUnitsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserAdOrganizationUnitsOutcome()>>(
			[this, request]()
			{
			return this->listUserAdOrganizationUnits(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::LockVirtualMFADeviceOutcome EcdClient::lockVirtualMFADevice(const LockVirtualMFADeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LockVirtualMFADeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LockVirtualMFADeviceOutcome(LockVirtualMFADeviceResult(outcome.result()));
	else
		return LockVirtualMFADeviceOutcome(outcome.error());
}

void EcdClient::lockVirtualMFADeviceAsync(const LockVirtualMFADeviceRequest& request, const LockVirtualMFADeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, lockVirtualMFADevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::LockVirtualMFADeviceOutcomeCallable EcdClient::lockVirtualMFADeviceCallable(const LockVirtualMFADeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LockVirtualMFADeviceOutcome()>>(
			[this, request]()
			{
			return this->lockVirtualMFADevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::MigrateDesktopsOutcome EcdClient::migrateDesktops(const MigrateDesktopsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MigrateDesktopsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MigrateDesktopsOutcome(MigrateDesktopsResult(outcome.result()));
	else
		return MigrateDesktopsOutcome(outcome.error());
}

void EcdClient::migrateDesktopsAsync(const MigrateDesktopsRequest& request, const MigrateDesktopsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, migrateDesktops(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::MigrateDesktopsOutcomeCallable EcdClient::migrateDesktopsCallable(const MigrateDesktopsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MigrateDesktopsOutcome()>>(
			[this, request]()
			{
			return this->migrateDesktops(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyADConnectorDirectoryOutcome EcdClient::modifyADConnectorDirectory(const ModifyADConnectorDirectoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyADConnectorDirectoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyADConnectorDirectoryOutcome(ModifyADConnectorDirectoryResult(outcome.result()));
	else
		return ModifyADConnectorDirectoryOutcome(outcome.error());
}

void EcdClient::modifyADConnectorDirectoryAsync(const ModifyADConnectorDirectoryRequest& request, const ModifyADConnectorDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyADConnectorDirectory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyADConnectorDirectoryOutcomeCallable EcdClient::modifyADConnectorDirectoryCallable(const ModifyADConnectorDirectoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyADConnectorDirectoryOutcome()>>(
			[this, request]()
			{
			return this->modifyADConnectorDirectory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyADConnectorOfficeSiteOutcome EcdClient::modifyADConnectorOfficeSite(const ModifyADConnectorOfficeSiteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyADConnectorOfficeSiteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyADConnectorOfficeSiteOutcome(ModifyADConnectorOfficeSiteResult(outcome.result()));
	else
		return ModifyADConnectorOfficeSiteOutcome(outcome.error());
}

void EcdClient::modifyADConnectorOfficeSiteAsync(const ModifyADConnectorOfficeSiteRequest& request, const ModifyADConnectorOfficeSiteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyADConnectorOfficeSite(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyADConnectorOfficeSiteOutcomeCallable EcdClient::modifyADConnectorOfficeSiteCallable(const ModifyADConnectorOfficeSiteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyADConnectorOfficeSiteOutcome()>>(
			[this, request]()
			{
			return this->modifyADConnectorOfficeSite(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyAutoSnapshotPolicyOutcome EcdClient::modifyAutoSnapshotPolicy(const ModifyAutoSnapshotPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAutoSnapshotPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAutoSnapshotPolicyOutcome(ModifyAutoSnapshotPolicyResult(outcome.result()));
	else
		return ModifyAutoSnapshotPolicyOutcome(outcome.error());
}

void EcdClient::modifyAutoSnapshotPolicyAsync(const ModifyAutoSnapshotPolicyRequest& request, const ModifyAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAutoSnapshotPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyAutoSnapshotPolicyOutcomeCallable EcdClient::modifyAutoSnapshotPolicyCallable(const ModifyAutoSnapshotPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAutoSnapshotPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyAutoSnapshotPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyBundleOutcome EcdClient::modifyBundle(const ModifyBundleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBundleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBundleOutcome(ModifyBundleResult(outcome.result()));
	else
		return ModifyBundleOutcome(outcome.error());
}

void EcdClient::modifyBundleAsync(const ModifyBundleRequest& request, const ModifyBundleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBundle(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyBundleOutcomeCallable EcdClient::modifyBundleCallable(const ModifyBundleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBundleOutcome()>>(
			[this, request]()
			{
			return this->modifyBundle(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyCdsFileOutcome EcdClient::modifyCdsFile(const ModifyCdsFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCdsFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCdsFileOutcome(ModifyCdsFileResult(outcome.result()));
	else
		return ModifyCdsFileOutcome(outcome.error());
}

void EcdClient::modifyCdsFileAsync(const ModifyCdsFileRequest& request, const ModifyCdsFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCdsFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyCdsFileOutcomeCallable EcdClient::modifyCdsFileCallable(const ModifyCdsFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCdsFileOutcome()>>(
			[this, request]()
			{
			return this->modifyCdsFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyCdsFileShareLinkOutcome EcdClient::modifyCdsFileShareLink(const ModifyCdsFileShareLinkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCdsFileShareLinkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCdsFileShareLinkOutcome(ModifyCdsFileShareLinkResult(outcome.result()));
	else
		return ModifyCdsFileShareLinkOutcome(outcome.error());
}

void EcdClient::modifyCdsFileShareLinkAsync(const ModifyCdsFileShareLinkRequest& request, const ModifyCdsFileShareLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCdsFileShareLink(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyCdsFileShareLinkOutcomeCallable EcdClient::modifyCdsFileShareLinkCallable(const ModifyCdsFileShareLinkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCdsFileShareLinkOutcome()>>(
			[this, request]()
			{
			return this->modifyCdsFileShareLink(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyCloudDriveGroupsOutcome EcdClient::modifyCloudDriveGroups(const ModifyCloudDriveGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCloudDriveGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCloudDriveGroupsOutcome(ModifyCloudDriveGroupsResult(outcome.result()));
	else
		return ModifyCloudDriveGroupsOutcome(outcome.error());
}

void EcdClient::modifyCloudDriveGroupsAsync(const ModifyCloudDriveGroupsRequest& request, const ModifyCloudDriveGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCloudDriveGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyCloudDriveGroupsOutcomeCallable EcdClient::modifyCloudDriveGroupsCallable(const ModifyCloudDriveGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCloudDriveGroupsOutcome()>>(
			[this, request]()
			{
			return this->modifyCloudDriveGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyCloudDrivePermissionOutcome EcdClient::modifyCloudDrivePermission(const ModifyCloudDrivePermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCloudDrivePermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCloudDrivePermissionOutcome(ModifyCloudDrivePermissionResult(outcome.result()));
	else
		return ModifyCloudDrivePermissionOutcome(outcome.error());
}

void EcdClient::modifyCloudDrivePermissionAsync(const ModifyCloudDrivePermissionRequest& request, const ModifyCloudDrivePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCloudDrivePermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyCloudDrivePermissionOutcomeCallable EcdClient::modifyCloudDrivePermissionCallable(const ModifyCloudDrivePermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCloudDrivePermissionOutcome()>>(
			[this, request]()
			{
			return this->modifyCloudDrivePermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyCustomizedListHeadersOutcome EcdClient::modifyCustomizedListHeaders(const ModifyCustomizedListHeadersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCustomizedListHeadersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCustomizedListHeadersOutcome(ModifyCustomizedListHeadersResult(outcome.result()));
	else
		return ModifyCustomizedListHeadersOutcome(outcome.error());
}

void EcdClient::modifyCustomizedListHeadersAsync(const ModifyCustomizedListHeadersRequest& request, const ModifyCustomizedListHeadersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCustomizedListHeaders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyCustomizedListHeadersOutcomeCallable EcdClient::modifyCustomizedListHeadersCallable(const ModifyCustomizedListHeadersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCustomizedListHeadersOutcome()>>(
			[this, request]()
			{
			return this->modifyCustomizedListHeaders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyDesktopChargeTypeOutcome EcdClient::modifyDesktopChargeType(const ModifyDesktopChargeTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDesktopChargeTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDesktopChargeTypeOutcome(ModifyDesktopChargeTypeResult(outcome.result()));
	else
		return ModifyDesktopChargeTypeOutcome(outcome.error());
}

void EcdClient::modifyDesktopChargeTypeAsync(const ModifyDesktopChargeTypeRequest& request, const ModifyDesktopChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDesktopChargeType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyDesktopChargeTypeOutcomeCallable EcdClient::modifyDesktopChargeTypeCallable(const ModifyDesktopChargeTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDesktopChargeTypeOutcome()>>(
			[this, request]()
			{
			return this->modifyDesktopChargeType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyDesktopGroupOutcome EcdClient::modifyDesktopGroup(const ModifyDesktopGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDesktopGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDesktopGroupOutcome(ModifyDesktopGroupResult(outcome.result()));
	else
		return ModifyDesktopGroupOutcome(outcome.error());
}

void EcdClient::modifyDesktopGroupAsync(const ModifyDesktopGroupRequest& request, const ModifyDesktopGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDesktopGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyDesktopGroupOutcomeCallable EcdClient::modifyDesktopGroupCallable(const ModifyDesktopGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDesktopGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyDesktopGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyDesktopHostNameOutcome EcdClient::modifyDesktopHostName(const ModifyDesktopHostNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDesktopHostNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDesktopHostNameOutcome(ModifyDesktopHostNameResult(outcome.result()));
	else
		return ModifyDesktopHostNameOutcome(outcome.error());
}

void EcdClient::modifyDesktopHostNameAsync(const ModifyDesktopHostNameRequest& request, const ModifyDesktopHostNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDesktopHostName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyDesktopHostNameOutcomeCallable EcdClient::modifyDesktopHostNameCallable(const ModifyDesktopHostNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDesktopHostNameOutcome()>>(
			[this, request]()
			{
			return this->modifyDesktopHostName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyDesktopNameOutcome EcdClient::modifyDesktopName(const ModifyDesktopNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDesktopNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDesktopNameOutcome(ModifyDesktopNameResult(outcome.result()));
	else
		return ModifyDesktopNameOutcome(outcome.error());
}

void EcdClient::modifyDesktopNameAsync(const ModifyDesktopNameRequest& request, const ModifyDesktopNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDesktopName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyDesktopNameOutcomeCallable EcdClient::modifyDesktopNameCallable(const ModifyDesktopNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDesktopNameOutcome()>>(
			[this, request]()
			{
			return this->modifyDesktopName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyDesktopSpecOutcome EcdClient::modifyDesktopSpec(const ModifyDesktopSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDesktopSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDesktopSpecOutcome(ModifyDesktopSpecResult(outcome.result()));
	else
		return ModifyDesktopSpecOutcome(outcome.error());
}

void EcdClient::modifyDesktopSpecAsync(const ModifyDesktopSpecRequest& request, const ModifyDesktopSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDesktopSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyDesktopSpecOutcomeCallable EcdClient::modifyDesktopSpecCallable(const ModifyDesktopSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDesktopSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyDesktopSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyDesktopsPolicyGroupOutcome EcdClient::modifyDesktopsPolicyGroup(const ModifyDesktopsPolicyGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDesktopsPolicyGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDesktopsPolicyGroupOutcome(ModifyDesktopsPolicyGroupResult(outcome.result()));
	else
		return ModifyDesktopsPolicyGroupOutcome(outcome.error());
}

void EcdClient::modifyDesktopsPolicyGroupAsync(const ModifyDesktopsPolicyGroupRequest& request, const ModifyDesktopsPolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDesktopsPolicyGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyDesktopsPolicyGroupOutcomeCallable EcdClient::modifyDesktopsPolicyGroupCallable(const ModifyDesktopsPolicyGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDesktopsPolicyGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyDesktopsPolicyGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyDiskSpecOutcome EcdClient::modifyDiskSpec(const ModifyDiskSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDiskSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDiskSpecOutcome(ModifyDiskSpecResult(outcome.result()));
	else
		return ModifyDiskSpecOutcome(outcome.error());
}

void EcdClient::modifyDiskSpecAsync(const ModifyDiskSpecRequest& request, const ModifyDiskSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDiskSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyDiskSpecOutcomeCallable EcdClient::modifyDiskSpecCallable(const ModifyDiskSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDiskSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyDiskSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyEntitlementOutcome EcdClient::modifyEntitlement(const ModifyEntitlementRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyEntitlementOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyEntitlementOutcome(ModifyEntitlementResult(outcome.result()));
	else
		return ModifyEntitlementOutcome(outcome.error());
}

void EcdClient::modifyEntitlementAsync(const ModifyEntitlementRequest& request, const ModifyEntitlementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyEntitlement(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyEntitlementOutcomeCallable EcdClient::modifyEntitlementCallable(const ModifyEntitlementRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyEntitlementOutcome()>>(
			[this, request]()
			{
			return this->modifyEntitlement(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyImageAttributeOutcome EcdClient::modifyImageAttribute(const ModifyImageAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyImageAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyImageAttributeOutcome(ModifyImageAttributeResult(outcome.result()));
	else
		return ModifyImageAttributeOutcome(outcome.error());
}

void EcdClient::modifyImageAttributeAsync(const ModifyImageAttributeRequest& request, const ModifyImageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyImageAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyImageAttributeOutcomeCallable EcdClient::modifyImageAttributeCallable(const ModifyImageAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyImageAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyImageAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyImagePermissionOutcome EcdClient::modifyImagePermission(const ModifyImagePermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyImagePermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyImagePermissionOutcome(ModifyImagePermissionResult(outcome.result()));
	else
		return ModifyImagePermissionOutcome(outcome.error());
}

void EcdClient::modifyImagePermissionAsync(const ModifyImagePermissionRequest& request, const ModifyImagePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyImagePermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyImagePermissionOutcomeCallable EcdClient::modifyImagePermissionCallable(const ModifyImagePermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyImagePermissionOutcome()>>(
			[this, request]()
			{
			return this->modifyImagePermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyNASDefaultMountTargetOutcome EcdClient::modifyNASDefaultMountTarget(const ModifyNASDefaultMountTargetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyNASDefaultMountTargetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyNASDefaultMountTargetOutcome(ModifyNASDefaultMountTargetResult(outcome.result()));
	else
		return ModifyNASDefaultMountTargetOutcome(outcome.error());
}

void EcdClient::modifyNASDefaultMountTargetAsync(const ModifyNASDefaultMountTargetRequest& request, const ModifyNASDefaultMountTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyNASDefaultMountTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyNASDefaultMountTargetOutcomeCallable EcdClient::modifyNASDefaultMountTargetCallable(const ModifyNASDefaultMountTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyNASDefaultMountTargetOutcome()>>(
			[this, request]()
			{
			return this->modifyNASDefaultMountTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyNetworkPackageBandwidthOutcome EcdClient::modifyNetworkPackageBandwidth(const ModifyNetworkPackageBandwidthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyNetworkPackageBandwidthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyNetworkPackageBandwidthOutcome(ModifyNetworkPackageBandwidthResult(outcome.result()));
	else
		return ModifyNetworkPackageBandwidthOutcome(outcome.error());
}

void EcdClient::modifyNetworkPackageBandwidthAsync(const ModifyNetworkPackageBandwidthRequest& request, const ModifyNetworkPackageBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyNetworkPackageBandwidth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyNetworkPackageBandwidthOutcomeCallable EcdClient::modifyNetworkPackageBandwidthCallable(const ModifyNetworkPackageBandwidthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyNetworkPackageBandwidthOutcome()>>(
			[this, request]()
			{
			return this->modifyNetworkPackageBandwidth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyNetworkPackageEnabledOutcome EcdClient::modifyNetworkPackageEnabled(const ModifyNetworkPackageEnabledRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyNetworkPackageEnabledOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyNetworkPackageEnabledOutcome(ModifyNetworkPackageEnabledResult(outcome.result()));
	else
		return ModifyNetworkPackageEnabledOutcome(outcome.error());
}

void EcdClient::modifyNetworkPackageEnabledAsync(const ModifyNetworkPackageEnabledRequest& request, const ModifyNetworkPackageEnabledAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyNetworkPackageEnabled(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyNetworkPackageEnabledOutcomeCallable EcdClient::modifyNetworkPackageEnabledCallable(const ModifyNetworkPackageEnabledRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyNetworkPackageEnabledOutcome()>>(
			[this, request]()
			{
			return this->modifyNetworkPackageEnabled(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyOfficeSiteAttributeOutcome EcdClient::modifyOfficeSiteAttribute(const ModifyOfficeSiteAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyOfficeSiteAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyOfficeSiteAttributeOutcome(ModifyOfficeSiteAttributeResult(outcome.result()));
	else
		return ModifyOfficeSiteAttributeOutcome(outcome.error());
}

void EcdClient::modifyOfficeSiteAttributeAsync(const ModifyOfficeSiteAttributeRequest& request, const ModifyOfficeSiteAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyOfficeSiteAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyOfficeSiteAttributeOutcomeCallable EcdClient::modifyOfficeSiteAttributeCallable(const ModifyOfficeSiteAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyOfficeSiteAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyOfficeSiteAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyOfficeSiteCrossDesktopAccessOutcome EcdClient::modifyOfficeSiteCrossDesktopAccess(const ModifyOfficeSiteCrossDesktopAccessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyOfficeSiteCrossDesktopAccessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyOfficeSiteCrossDesktopAccessOutcome(ModifyOfficeSiteCrossDesktopAccessResult(outcome.result()));
	else
		return ModifyOfficeSiteCrossDesktopAccessOutcome(outcome.error());
}

void EcdClient::modifyOfficeSiteCrossDesktopAccessAsync(const ModifyOfficeSiteCrossDesktopAccessRequest& request, const ModifyOfficeSiteCrossDesktopAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyOfficeSiteCrossDesktopAccess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyOfficeSiteCrossDesktopAccessOutcomeCallable EcdClient::modifyOfficeSiteCrossDesktopAccessCallable(const ModifyOfficeSiteCrossDesktopAccessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyOfficeSiteCrossDesktopAccessOutcome()>>(
			[this, request]()
			{
			return this->modifyOfficeSiteCrossDesktopAccess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyOfficeSiteMfaEnabledOutcome EcdClient::modifyOfficeSiteMfaEnabled(const ModifyOfficeSiteMfaEnabledRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyOfficeSiteMfaEnabledOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyOfficeSiteMfaEnabledOutcome(ModifyOfficeSiteMfaEnabledResult(outcome.result()));
	else
		return ModifyOfficeSiteMfaEnabledOutcome(outcome.error());
}

void EcdClient::modifyOfficeSiteMfaEnabledAsync(const ModifyOfficeSiteMfaEnabledRequest& request, const ModifyOfficeSiteMfaEnabledAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyOfficeSiteMfaEnabled(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyOfficeSiteMfaEnabledOutcomeCallable EcdClient::modifyOfficeSiteMfaEnabledCallable(const ModifyOfficeSiteMfaEnabledRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyOfficeSiteMfaEnabledOutcome()>>(
			[this, request]()
			{
			return this->modifyOfficeSiteMfaEnabled(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyOperateVulOutcome EcdClient::modifyOperateVul(const ModifyOperateVulRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyOperateVulOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyOperateVulOutcome(ModifyOperateVulResult(outcome.result()));
	else
		return ModifyOperateVulOutcome(outcome.error());
}

void EcdClient::modifyOperateVulAsync(const ModifyOperateVulRequest& request, const ModifyOperateVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyOperateVul(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyOperateVulOutcomeCallable EcdClient::modifyOperateVulCallable(const ModifyOperateVulRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyOperateVulOutcome()>>(
			[this, request]()
			{
			return this->modifyOperateVul(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyPolicyGroupOutcome EcdClient::modifyPolicyGroup(const ModifyPolicyGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPolicyGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPolicyGroupOutcome(ModifyPolicyGroupResult(outcome.result()));
	else
		return ModifyPolicyGroupOutcome(outcome.error());
}

void EcdClient::modifyPolicyGroupAsync(const ModifyPolicyGroupRequest& request, const ModifyPolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPolicyGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyPolicyGroupOutcomeCallable EcdClient::modifyPolicyGroupCallable(const ModifyPolicyGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPolicyGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyPolicyGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyUserEntitlementOutcome EcdClient::modifyUserEntitlement(const ModifyUserEntitlementRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyUserEntitlementOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyUserEntitlementOutcome(ModifyUserEntitlementResult(outcome.result()));
	else
		return ModifyUserEntitlementOutcome(outcome.error());
}

void EcdClient::modifyUserEntitlementAsync(const ModifyUserEntitlementRequest& request, const ModifyUserEntitlementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyUserEntitlement(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyUserEntitlementOutcomeCallable EcdClient::modifyUserEntitlementCallable(const ModifyUserEntitlementRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyUserEntitlementOutcome()>>(
			[this, request]()
			{
			return this->modifyUserEntitlement(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ModifyUserToDesktopGroupOutcome EcdClient::modifyUserToDesktopGroup(const ModifyUserToDesktopGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyUserToDesktopGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyUserToDesktopGroupOutcome(ModifyUserToDesktopGroupResult(outcome.result()));
	else
		return ModifyUserToDesktopGroupOutcome(outcome.error());
}

void EcdClient::modifyUserToDesktopGroupAsync(const ModifyUserToDesktopGroupRequest& request, const ModifyUserToDesktopGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyUserToDesktopGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ModifyUserToDesktopGroupOutcomeCallable EcdClient::modifyUserToDesktopGroupCallable(const ModifyUserToDesktopGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyUserToDesktopGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyUserToDesktopGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::MoveCdsFileOutcome EcdClient::moveCdsFile(const MoveCdsFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MoveCdsFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MoveCdsFileOutcome(MoveCdsFileResult(outcome.result()));
	else
		return MoveCdsFileOutcome(outcome.error());
}

void EcdClient::moveCdsFileAsync(const MoveCdsFileRequest& request, const MoveCdsFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moveCdsFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::MoveCdsFileOutcomeCallable EcdClient::moveCdsFileCallable(const MoveCdsFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoveCdsFileOutcome()>>(
			[this, request]()
			{
			return this->moveCdsFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::OperateVulsOutcome EcdClient::operateVuls(const OperateVulsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateVulsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateVulsOutcome(OperateVulsResult(outcome.result()));
	else
		return OperateVulsOutcome(outcome.error());
}

void EcdClient::operateVulsAsync(const OperateVulsRequest& request, const OperateVulsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateVuls(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::OperateVulsOutcomeCallable EcdClient::operateVulsCallable(const OperateVulsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateVulsOutcome()>>(
			[this, request]()
			{
			return this->operateVuls(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::RebootDesktopsOutcome EcdClient::rebootDesktops(const RebootDesktopsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RebootDesktopsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RebootDesktopsOutcome(RebootDesktopsResult(outcome.result()));
	else
		return RebootDesktopsOutcome(outcome.error());
}

void EcdClient::rebootDesktopsAsync(const RebootDesktopsRequest& request, const RebootDesktopsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rebootDesktops(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::RebootDesktopsOutcomeCallable EcdClient::rebootDesktopsCallable(const RebootDesktopsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RebootDesktopsOutcome()>>(
			[this, request]()
			{
			return this->rebootDesktops(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::RebuildDesktopsOutcome EcdClient::rebuildDesktops(const RebuildDesktopsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RebuildDesktopsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RebuildDesktopsOutcome(RebuildDesktopsResult(outcome.result()));
	else
		return RebuildDesktopsOutcome(outcome.error());
}

void EcdClient::rebuildDesktopsAsync(const RebuildDesktopsRequest& request, const RebuildDesktopsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rebuildDesktops(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::RebuildDesktopsOutcomeCallable EcdClient::rebuildDesktopsCallable(const RebuildDesktopsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RebuildDesktopsOutcome()>>(
			[this, request]()
			{
			return this->rebuildDesktops(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::RemoveFilePermissionOutcome EcdClient::removeFilePermission(const RemoveFilePermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveFilePermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveFilePermissionOutcome(RemoveFilePermissionResult(outcome.result()));
	else
		return RemoveFilePermissionOutcome(outcome.error());
}

void EcdClient::removeFilePermissionAsync(const RemoveFilePermissionRequest& request, const RemoveFilePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeFilePermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::RemoveFilePermissionOutcomeCallable EcdClient::removeFilePermissionCallable(const RemoveFilePermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveFilePermissionOutcome()>>(
			[this, request]()
			{
			return this->removeFilePermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::RemoveUserFromDesktopGroupOutcome EcdClient::removeUserFromDesktopGroup(const RemoveUserFromDesktopGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveUserFromDesktopGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveUserFromDesktopGroupOutcome(RemoveUserFromDesktopGroupResult(outcome.result()));
	else
		return RemoveUserFromDesktopGroupOutcome(outcome.error());
}

void EcdClient::removeUserFromDesktopGroupAsync(const RemoveUserFromDesktopGroupRequest& request, const RemoveUserFromDesktopGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeUserFromDesktopGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::RemoveUserFromDesktopGroupOutcomeCallable EcdClient::removeUserFromDesktopGroupCallable(const RemoveUserFromDesktopGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveUserFromDesktopGroupOutcome()>>(
			[this, request]()
			{
			return this->removeUserFromDesktopGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::RenewDesktopsOutcome EcdClient::renewDesktops(const RenewDesktopsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenewDesktopsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewDesktopsOutcome(RenewDesktopsResult(outcome.result()));
	else
		return RenewDesktopsOutcome(outcome.error());
}

void EcdClient::renewDesktopsAsync(const RenewDesktopsRequest& request, const RenewDesktopsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewDesktops(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::RenewDesktopsOutcomeCallable EcdClient::renewDesktopsCallable(const RenewDesktopsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewDesktopsOutcome()>>(
			[this, request]()
			{
			return this->renewDesktops(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::RenewNetworkPackagesOutcome EcdClient::renewNetworkPackages(const RenewNetworkPackagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenewNetworkPackagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewNetworkPackagesOutcome(RenewNetworkPackagesResult(outcome.result()));
	else
		return RenewNetworkPackagesOutcome(outcome.error());
}

void EcdClient::renewNetworkPackagesAsync(const RenewNetworkPackagesRequest& request, const RenewNetworkPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewNetworkPackages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::RenewNetworkPackagesOutcomeCallable EcdClient::renewNetworkPackagesCallable(const RenewNetworkPackagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewNetworkPackagesOutcome()>>(
			[this, request]()
			{
			return this->renewNetworkPackages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ResetDesktopsOutcome EcdClient::resetDesktops(const ResetDesktopsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetDesktopsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetDesktopsOutcome(ResetDesktopsResult(outcome.result()));
	else
		return ResetDesktopsOutcome(outcome.error());
}

void EcdClient::resetDesktopsAsync(const ResetDesktopsRequest& request, const ResetDesktopsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetDesktops(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ResetDesktopsOutcomeCallable EcdClient::resetDesktopsCallable(const ResetDesktopsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetDesktopsOutcome()>>(
			[this, request]()
			{
			return this->resetDesktops(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ResetNASDefaultMountTargetOutcome EcdClient::resetNASDefaultMountTarget(const ResetNASDefaultMountTargetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetNASDefaultMountTargetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetNASDefaultMountTargetOutcome(ResetNASDefaultMountTargetResult(outcome.result()));
	else
		return ResetNASDefaultMountTargetOutcome(outcome.error());
}

void EcdClient::resetNASDefaultMountTargetAsync(const ResetNASDefaultMountTargetRequest& request, const ResetNASDefaultMountTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetNASDefaultMountTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ResetNASDefaultMountTargetOutcomeCallable EcdClient::resetNASDefaultMountTargetCallable(const ResetNASDefaultMountTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetNASDefaultMountTargetOutcome()>>(
			[this, request]()
			{
			return this->resetNASDefaultMountTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::ResetSnapshotOutcome EcdClient::resetSnapshot(const ResetSnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetSnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetSnapshotOutcome(ResetSnapshotResult(outcome.result()));
	else
		return ResetSnapshotOutcome(outcome.error());
}

void EcdClient::resetSnapshotAsync(const ResetSnapshotRequest& request, const ResetSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::ResetSnapshotOutcomeCallable EcdClient::resetSnapshotCallable(const ResetSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetSnapshotOutcome()>>(
			[this, request]()
			{
			return this->resetSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::RevokeCoordinatePrivilegeOutcome EcdClient::revokeCoordinatePrivilege(const RevokeCoordinatePrivilegeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeCoordinatePrivilegeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeCoordinatePrivilegeOutcome(RevokeCoordinatePrivilegeResult(outcome.result()));
	else
		return RevokeCoordinatePrivilegeOutcome(outcome.error());
}

void EcdClient::revokeCoordinatePrivilegeAsync(const RevokeCoordinatePrivilegeRequest& request, const RevokeCoordinatePrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeCoordinatePrivilege(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::RevokeCoordinatePrivilegeOutcomeCallable EcdClient::revokeCoordinatePrivilegeCallable(const RevokeCoordinatePrivilegeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeCoordinatePrivilegeOutcome()>>(
			[this, request]()
			{
			return this->revokeCoordinatePrivilege(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::RollbackSuspEventQuaraFileOutcome EcdClient::rollbackSuspEventQuaraFile(const RollbackSuspEventQuaraFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RollbackSuspEventQuaraFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RollbackSuspEventQuaraFileOutcome(RollbackSuspEventQuaraFileResult(outcome.result()));
	else
		return RollbackSuspEventQuaraFileOutcome(outcome.error());
}

void EcdClient::rollbackSuspEventQuaraFileAsync(const RollbackSuspEventQuaraFileRequest& request, const RollbackSuspEventQuaraFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rollbackSuspEventQuaraFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::RollbackSuspEventQuaraFileOutcomeCallable EcdClient::rollbackSuspEventQuaraFileCallable(const RollbackSuspEventQuaraFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RollbackSuspEventQuaraFileOutcome()>>(
			[this, request]()
			{
			return this->rollbackSuspEventQuaraFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::RunCommandOutcome EcdClient::runCommand(const RunCommandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunCommandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunCommandOutcome(RunCommandResult(outcome.result()));
	else
		return RunCommandOutcome(outcome.error());
}

void EcdClient::runCommandAsync(const RunCommandRequest& request, const RunCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runCommand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::RunCommandOutcomeCallable EcdClient::runCommandCallable(const RunCommandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunCommandOutcome()>>(
			[this, request]()
			{
			return this->runCommand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::SendVerifyCodeOutcome EcdClient::sendVerifyCode(const SendVerifyCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendVerifyCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendVerifyCodeOutcome(SendVerifyCodeResult(outcome.result()));
	else
		return SendVerifyCodeOutcome(outcome.error());
}

void EcdClient::sendVerifyCodeAsync(const SendVerifyCodeRequest& request, const SendVerifyCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendVerifyCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::SendVerifyCodeOutcomeCallable EcdClient::sendVerifyCodeCallable(const SendVerifyCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendVerifyCodeOutcome()>>(
			[this, request]()
			{
			return this->sendVerifyCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::SetDesktopGroupScaleTimerOutcome EcdClient::setDesktopGroupScaleTimer(const SetDesktopGroupScaleTimerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDesktopGroupScaleTimerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDesktopGroupScaleTimerOutcome(SetDesktopGroupScaleTimerResult(outcome.result()));
	else
		return SetDesktopGroupScaleTimerOutcome(outcome.error());
}

void EcdClient::setDesktopGroupScaleTimerAsync(const SetDesktopGroupScaleTimerRequest& request, const SetDesktopGroupScaleTimerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDesktopGroupScaleTimer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::SetDesktopGroupScaleTimerOutcomeCallable EcdClient::setDesktopGroupScaleTimerCallable(const SetDesktopGroupScaleTimerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDesktopGroupScaleTimerOutcome()>>(
			[this, request]()
			{
			return this->setDesktopGroupScaleTimer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::SetDesktopGroupTimerOutcome EcdClient::setDesktopGroupTimer(const SetDesktopGroupTimerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDesktopGroupTimerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDesktopGroupTimerOutcome(SetDesktopGroupTimerResult(outcome.result()));
	else
		return SetDesktopGroupTimerOutcome(outcome.error());
}

void EcdClient::setDesktopGroupTimerAsync(const SetDesktopGroupTimerRequest& request, const SetDesktopGroupTimerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDesktopGroupTimer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::SetDesktopGroupTimerOutcomeCallable EcdClient::setDesktopGroupTimerCallable(const SetDesktopGroupTimerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDesktopGroupTimerOutcome()>>(
			[this, request]()
			{
			return this->setDesktopGroupTimer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::SetDesktopGroupTimerStatusOutcome EcdClient::setDesktopGroupTimerStatus(const SetDesktopGroupTimerStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDesktopGroupTimerStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDesktopGroupTimerStatusOutcome(SetDesktopGroupTimerStatusResult(outcome.result()));
	else
		return SetDesktopGroupTimerStatusOutcome(outcome.error());
}

void EcdClient::setDesktopGroupTimerStatusAsync(const SetDesktopGroupTimerStatusRequest& request, const SetDesktopGroupTimerStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDesktopGroupTimerStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::SetDesktopGroupTimerStatusOutcomeCallable EcdClient::setDesktopGroupTimerStatusCallable(const SetDesktopGroupTimerStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDesktopGroupTimerStatusOutcome()>>(
			[this, request]()
			{
			return this->setDesktopGroupTimerStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::SetDirectorySsoStatusOutcome EcdClient::setDirectorySsoStatus(const SetDirectorySsoStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDirectorySsoStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDirectorySsoStatusOutcome(SetDirectorySsoStatusResult(outcome.result()));
	else
		return SetDirectorySsoStatusOutcome(outcome.error());
}

void EcdClient::setDirectorySsoStatusAsync(const SetDirectorySsoStatusRequest& request, const SetDirectorySsoStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDirectorySsoStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::SetDirectorySsoStatusOutcomeCallable EcdClient::setDirectorySsoStatusCallable(const SetDirectorySsoStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDirectorySsoStatusOutcome()>>(
			[this, request]()
			{
			return this->setDirectorySsoStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::SetIdpMetadataOutcome EcdClient::setIdpMetadata(const SetIdpMetadataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetIdpMetadataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetIdpMetadataOutcome(SetIdpMetadataResult(outcome.result()));
	else
		return SetIdpMetadataOutcome(outcome.error());
}

void EcdClient::setIdpMetadataAsync(const SetIdpMetadataRequest& request, const SetIdpMetadataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setIdpMetadata(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::SetIdpMetadataOutcomeCallable EcdClient::setIdpMetadataCallable(const SetIdpMetadataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetIdpMetadataOutcome()>>(
			[this, request]()
			{
			return this->setIdpMetadata(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::SetOfficeSiteSsoStatusOutcome EcdClient::setOfficeSiteSsoStatus(const SetOfficeSiteSsoStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetOfficeSiteSsoStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetOfficeSiteSsoStatusOutcome(SetOfficeSiteSsoStatusResult(outcome.result()));
	else
		return SetOfficeSiteSsoStatusOutcome(outcome.error());
}

void EcdClient::setOfficeSiteSsoStatusAsync(const SetOfficeSiteSsoStatusRequest& request, const SetOfficeSiteSsoStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setOfficeSiteSsoStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::SetOfficeSiteSsoStatusOutcomeCallable EcdClient::setOfficeSiteSsoStatusCallable(const SetOfficeSiteSsoStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetOfficeSiteSsoStatusOutcome()>>(
			[this, request]()
			{
			return this->setOfficeSiteSsoStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::SetUserProfilePathRulesOutcome EcdClient::setUserProfilePathRules(const SetUserProfilePathRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetUserProfilePathRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetUserProfilePathRulesOutcome(SetUserProfilePathRulesResult(outcome.result()));
	else
		return SetUserProfilePathRulesOutcome(outcome.error());
}

void EcdClient::setUserProfilePathRulesAsync(const SetUserProfilePathRulesRequest& request, const SetUserProfilePathRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setUserProfilePathRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::SetUserProfilePathRulesOutcomeCallable EcdClient::setUserProfilePathRulesCallable(const SetUserProfilePathRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetUserProfilePathRulesOutcome()>>(
			[this, request]()
			{
			return this->setUserProfilePathRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::StartDesktopsOutcome EcdClient::startDesktops(const StartDesktopsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartDesktopsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartDesktopsOutcome(StartDesktopsResult(outcome.result()));
	else
		return StartDesktopsOutcome(outcome.error());
}

void EcdClient::startDesktopsAsync(const StartDesktopsRequest& request, const StartDesktopsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startDesktops(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::StartDesktopsOutcomeCallable EcdClient::startDesktopsCallable(const StartDesktopsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartDesktopsOutcome()>>(
			[this, request]()
			{
			return this->startDesktops(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::StartVirusScanTaskOutcome EcdClient::startVirusScanTask(const StartVirusScanTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartVirusScanTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartVirusScanTaskOutcome(StartVirusScanTaskResult(outcome.result()));
	else
		return StartVirusScanTaskOutcome(outcome.error());
}

void EcdClient::startVirusScanTaskAsync(const StartVirusScanTaskRequest& request, const StartVirusScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startVirusScanTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::StartVirusScanTaskOutcomeCallable EcdClient::startVirusScanTaskCallable(const StartVirusScanTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartVirusScanTaskOutcome()>>(
			[this, request]()
			{
			return this->startVirusScanTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::StopDesktopsOutcome EcdClient::stopDesktops(const StopDesktopsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopDesktopsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopDesktopsOutcome(StopDesktopsResult(outcome.result()));
	else
		return StopDesktopsOutcome(outcome.error());
}

void EcdClient::stopDesktopsAsync(const StopDesktopsRequest& request, const StopDesktopsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopDesktops(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::StopDesktopsOutcomeCallable EcdClient::stopDesktopsCallable(const StopDesktopsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopDesktopsOutcome()>>(
			[this, request]()
			{
			return this->stopDesktops(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::StopInvocationOutcome EcdClient::stopInvocation(const StopInvocationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopInvocationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopInvocationOutcome(StopInvocationResult(outcome.result()));
	else
		return StopInvocationOutcome(outcome.error());
}

void EcdClient::stopInvocationAsync(const StopInvocationRequest& request, const StopInvocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopInvocation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::StopInvocationOutcomeCallable EcdClient::stopInvocationCallable(const StopInvocationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopInvocationOutcome()>>(
			[this, request]()
			{
			return this->stopInvocation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::TagResourcesOutcome EcdClient::tagResources(const TagResourcesRequest &request) const
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

void EcdClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::TagResourcesOutcomeCallable EcdClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::UnlockVirtualMFADeviceOutcome EcdClient::unlockVirtualMFADevice(const UnlockVirtualMFADeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnlockVirtualMFADeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnlockVirtualMFADeviceOutcome(UnlockVirtualMFADeviceResult(outcome.result()));
	else
		return UnlockVirtualMFADeviceOutcome(outcome.error());
}

void EcdClient::unlockVirtualMFADeviceAsync(const UnlockVirtualMFADeviceRequest& request, const UnlockVirtualMFADeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unlockVirtualMFADevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::UnlockVirtualMFADeviceOutcomeCallable EcdClient::unlockVirtualMFADeviceCallable(const UnlockVirtualMFADeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnlockVirtualMFADeviceOutcome()>>(
			[this, request]()
			{
			return this->unlockVirtualMFADevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::UntagResourcesOutcome EcdClient::untagResources(const UntagResourcesRequest &request) const
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

void EcdClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::UntagResourcesOutcomeCallable EcdClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::UpdateFotaTaskOutcome EcdClient::updateFotaTask(const UpdateFotaTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateFotaTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateFotaTaskOutcome(UpdateFotaTaskResult(outcome.result()));
	else
		return UpdateFotaTaskOutcome(outcome.error());
}

void EcdClient::updateFotaTaskAsync(const UpdateFotaTaskRequest& request, const UpdateFotaTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateFotaTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::UpdateFotaTaskOutcomeCallable EcdClient::updateFotaTaskCallable(const UpdateFotaTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateFotaTaskOutcome()>>(
			[this, request]()
			{
			return this->updateFotaTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::UploadImageOutcome EcdClient::uploadImage(const UploadImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadImageOutcome(UploadImageResult(outcome.result()));
	else
		return UploadImageOutcome(outcome.error());
}

void EcdClient::uploadImageAsync(const UploadImageRequest& request, const UploadImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::UploadImageOutcomeCallable EcdClient::uploadImageCallable(const UploadImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadImageOutcome()>>(
			[this, request]()
			{
			return this->uploadImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::VerifyCenOutcome EcdClient::verifyCen(const VerifyCenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyCenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyCenOutcome(VerifyCenResult(outcome.result()));
	else
		return VerifyCenOutcome(outcome.error());
}

void EcdClient::verifyCenAsync(const VerifyCenRequest& request, const VerifyCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyCen(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::VerifyCenOutcomeCallable EcdClient::verifyCenCallable(const VerifyCenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyCenOutcome()>>(
			[this, request]()
			{
			return this->verifyCen(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcdClient::WakeupDesktopsOutcome EcdClient::wakeupDesktops(const WakeupDesktopsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return WakeupDesktopsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return WakeupDesktopsOutcome(WakeupDesktopsResult(outcome.result()));
	else
		return WakeupDesktopsOutcome(outcome.error());
}

void EcdClient::wakeupDesktopsAsync(const WakeupDesktopsRequest& request, const WakeupDesktopsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, wakeupDesktops(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcdClient::WakeupDesktopsOutcomeCallable EcdClient::wakeupDesktopsCallable(const WakeupDesktopsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<WakeupDesktopsOutcome()>>(
			[this, request]()
			{
			return this->wakeupDesktops(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

