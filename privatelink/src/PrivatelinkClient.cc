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

#include <alibabacloud/privatelink/PrivatelinkClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Privatelink;
using namespace AlibabaCloud::Privatelink::Model;

namespace
{
	const std::string SERVICE_NAME = "Privatelink";
}

PrivatelinkClient::PrivatelinkClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "privatelink");
}

PrivatelinkClient::PrivatelinkClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "privatelink");
}

PrivatelinkClient::PrivatelinkClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "privatelink");
}

PrivatelinkClient::~PrivatelinkClient()
{}

PrivatelinkClient::AddUserToVpcEndpointServiceOutcome PrivatelinkClient::addUserToVpcEndpointService(const AddUserToVpcEndpointServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddUserToVpcEndpointServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddUserToVpcEndpointServiceOutcome(AddUserToVpcEndpointServiceResult(outcome.result()));
	else
		return AddUserToVpcEndpointServiceOutcome(outcome.error());
}

void PrivatelinkClient::addUserToVpcEndpointServiceAsync(const AddUserToVpcEndpointServiceRequest& request, const AddUserToVpcEndpointServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addUserToVpcEndpointService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::AddUserToVpcEndpointServiceOutcomeCallable PrivatelinkClient::addUserToVpcEndpointServiceCallable(const AddUserToVpcEndpointServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddUserToVpcEndpointServiceOutcome()>>(
			[this, request]()
			{
			return this->addUserToVpcEndpointService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::AddZoneToVpcEndpointOutcome PrivatelinkClient::addZoneToVpcEndpoint(const AddZoneToVpcEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddZoneToVpcEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddZoneToVpcEndpointOutcome(AddZoneToVpcEndpointResult(outcome.result()));
	else
		return AddZoneToVpcEndpointOutcome(outcome.error());
}

void PrivatelinkClient::addZoneToVpcEndpointAsync(const AddZoneToVpcEndpointRequest& request, const AddZoneToVpcEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addZoneToVpcEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::AddZoneToVpcEndpointOutcomeCallable PrivatelinkClient::addZoneToVpcEndpointCallable(const AddZoneToVpcEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddZoneToVpcEndpointOutcome()>>(
			[this, request]()
			{
			return this->addZoneToVpcEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::AttachResourceToVpcEndpointServiceOutcome PrivatelinkClient::attachResourceToVpcEndpointService(const AttachResourceToVpcEndpointServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachResourceToVpcEndpointServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachResourceToVpcEndpointServiceOutcome(AttachResourceToVpcEndpointServiceResult(outcome.result()));
	else
		return AttachResourceToVpcEndpointServiceOutcome(outcome.error());
}

void PrivatelinkClient::attachResourceToVpcEndpointServiceAsync(const AttachResourceToVpcEndpointServiceRequest& request, const AttachResourceToVpcEndpointServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachResourceToVpcEndpointService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::AttachResourceToVpcEndpointServiceOutcomeCallable PrivatelinkClient::attachResourceToVpcEndpointServiceCallable(const AttachResourceToVpcEndpointServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachResourceToVpcEndpointServiceOutcome()>>(
			[this, request]()
			{
			return this->attachResourceToVpcEndpointService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::AttachSecurityGroupToVpcEndpointOutcome PrivatelinkClient::attachSecurityGroupToVpcEndpoint(const AttachSecurityGroupToVpcEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachSecurityGroupToVpcEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachSecurityGroupToVpcEndpointOutcome(AttachSecurityGroupToVpcEndpointResult(outcome.result()));
	else
		return AttachSecurityGroupToVpcEndpointOutcome(outcome.error());
}

void PrivatelinkClient::attachSecurityGroupToVpcEndpointAsync(const AttachSecurityGroupToVpcEndpointRequest& request, const AttachSecurityGroupToVpcEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachSecurityGroupToVpcEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::AttachSecurityGroupToVpcEndpointOutcomeCallable PrivatelinkClient::attachSecurityGroupToVpcEndpointCallable(const AttachSecurityGroupToVpcEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachSecurityGroupToVpcEndpointOutcome()>>(
			[this, request]()
			{
			return this->attachSecurityGroupToVpcEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::ChangeResourceGroupOutcome PrivatelinkClient::changeResourceGroup(const ChangeResourceGroupRequest &request) const
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

void PrivatelinkClient::changeResourceGroupAsync(const ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::ChangeResourceGroupOutcomeCallable PrivatelinkClient::changeResourceGroupCallable(const ChangeResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->changeResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::CheckProductOpenOutcome PrivatelinkClient::checkProductOpen(const CheckProductOpenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckProductOpenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckProductOpenOutcome(CheckProductOpenResult(outcome.result()));
	else
		return CheckProductOpenOutcome(outcome.error());
}

void PrivatelinkClient::checkProductOpenAsync(const CheckProductOpenRequest& request, const CheckProductOpenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkProductOpen(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::CheckProductOpenOutcomeCallable PrivatelinkClient::checkProductOpenCallable(const CheckProductOpenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckProductOpenOutcome()>>(
			[this, request]()
			{
			return this->checkProductOpen(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::CheckResourceSupportOperateOutcome PrivatelinkClient::checkResourceSupportOperate(const CheckResourceSupportOperateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckResourceSupportOperateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckResourceSupportOperateOutcome(CheckResourceSupportOperateResult(outcome.result()));
	else
		return CheckResourceSupportOperateOutcome(outcome.error());
}

void PrivatelinkClient::checkResourceSupportOperateAsync(const CheckResourceSupportOperateRequest& request, const CheckResourceSupportOperateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkResourceSupportOperate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::CheckResourceSupportOperateOutcomeCallable PrivatelinkClient::checkResourceSupportOperateCallable(const CheckResourceSupportOperateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckResourceSupportOperateOutcome()>>(
			[this, request]()
			{
			return this->checkResourceSupportOperate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::CreateVpcEndpointOutcome PrivatelinkClient::createVpcEndpoint(const CreateVpcEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVpcEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVpcEndpointOutcome(CreateVpcEndpointResult(outcome.result()));
	else
		return CreateVpcEndpointOutcome(outcome.error());
}

void PrivatelinkClient::createVpcEndpointAsync(const CreateVpcEndpointRequest& request, const CreateVpcEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVpcEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::CreateVpcEndpointOutcomeCallable PrivatelinkClient::createVpcEndpointCallable(const CreateVpcEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVpcEndpointOutcome()>>(
			[this, request]()
			{
			return this->createVpcEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::CreateVpcEndpointServiceOutcome PrivatelinkClient::createVpcEndpointService(const CreateVpcEndpointServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVpcEndpointServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVpcEndpointServiceOutcome(CreateVpcEndpointServiceResult(outcome.result()));
	else
		return CreateVpcEndpointServiceOutcome(outcome.error());
}

void PrivatelinkClient::createVpcEndpointServiceAsync(const CreateVpcEndpointServiceRequest& request, const CreateVpcEndpointServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVpcEndpointService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::CreateVpcEndpointServiceOutcomeCallable PrivatelinkClient::createVpcEndpointServiceCallable(const CreateVpcEndpointServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVpcEndpointServiceOutcome()>>(
			[this, request]()
			{
			return this->createVpcEndpointService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::DeleteVpcEndpointOutcome PrivatelinkClient::deleteVpcEndpoint(const DeleteVpcEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVpcEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVpcEndpointOutcome(DeleteVpcEndpointResult(outcome.result()));
	else
		return DeleteVpcEndpointOutcome(outcome.error());
}

void PrivatelinkClient::deleteVpcEndpointAsync(const DeleteVpcEndpointRequest& request, const DeleteVpcEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVpcEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::DeleteVpcEndpointOutcomeCallable PrivatelinkClient::deleteVpcEndpointCallable(const DeleteVpcEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVpcEndpointOutcome()>>(
			[this, request]()
			{
			return this->deleteVpcEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::DeleteVpcEndpointServiceOutcome PrivatelinkClient::deleteVpcEndpointService(const DeleteVpcEndpointServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVpcEndpointServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVpcEndpointServiceOutcome(DeleteVpcEndpointServiceResult(outcome.result()));
	else
		return DeleteVpcEndpointServiceOutcome(outcome.error());
}

void PrivatelinkClient::deleteVpcEndpointServiceAsync(const DeleteVpcEndpointServiceRequest& request, const DeleteVpcEndpointServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVpcEndpointService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::DeleteVpcEndpointServiceOutcomeCallable PrivatelinkClient::deleteVpcEndpointServiceCallable(const DeleteVpcEndpointServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVpcEndpointServiceOutcome()>>(
			[this, request]()
			{
			return this->deleteVpcEndpointService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::DescribeRegionsOutcome PrivatelinkClient::describeRegions(const DescribeRegionsRequest &request) const
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

void PrivatelinkClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::DescribeRegionsOutcomeCallable PrivatelinkClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::DescribeZonesOutcome PrivatelinkClient::describeZones(const DescribeZonesRequest &request) const
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

void PrivatelinkClient::describeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::DescribeZonesOutcomeCallable PrivatelinkClient::describeZonesCallable(const DescribeZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeZonesOutcome()>>(
			[this, request]()
			{
			return this->describeZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::DetachResourceFromVpcEndpointServiceOutcome PrivatelinkClient::detachResourceFromVpcEndpointService(const DetachResourceFromVpcEndpointServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachResourceFromVpcEndpointServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachResourceFromVpcEndpointServiceOutcome(DetachResourceFromVpcEndpointServiceResult(outcome.result()));
	else
		return DetachResourceFromVpcEndpointServiceOutcome(outcome.error());
}

void PrivatelinkClient::detachResourceFromVpcEndpointServiceAsync(const DetachResourceFromVpcEndpointServiceRequest& request, const DetachResourceFromVpcEndpointServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachResourceFromVpcEndpointService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::DetachResourceFromVpcEndpointServiceOutcomeCallable PrivatelinkClient::detachResourceFromVpcEndpointServiceCallable(const DetachResourceFromVpcEndpointServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachResourceFromVpcEndpointServiceOutcome()>>(
			[this, request]()
			{
			return this->detachResourceFromVpcEndpointService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::DetachSecurityGroupFromVpcEndpointOutcome PrivatelinkClient::detachSecurityGroupFromVpcEndpoint(const DetachSecurityGroupFromVpcEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachSecurityGroupFromVpcEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachSecurityGroupFromVpcEndpointOutcome(DetachSecurityGroupFromVpcEndpointResult(outcome.result()));
	else
		return DetachSecurityGroupFromVpcEndpointOutcome(outcome.error());
}

void PrivatelinkClient::detachSecurityGroupFromVpcEndpointAsync(const DetachSecurityGroupFromVpcEndpointRequest& request, const DetachSecurityGroupFromVpcEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachSecurityGroupFromVpcEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::DetachSecurityGroupFromVpcEndpointOutcomeCallable PrivatelinkClient::detachSecurityGroupFromVpcEndpointCallable(const DetachSecurityGroupFromVpcEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachSecurityGroupFromVpcEndpointOutcome()>>(
			[this, request]()
			{
			return this->detachSecurityGroupFromVpcEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::DisableVpcEndpointConnectionOutcome PrivatelinkClient::disableVpcEndpointConnection(const DisableVpcEndpointConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableVpcEndpointConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableVpcEndpointConnectionOutcome(DisableVpcEndpointConnectionResult(outcome.result()));
	else
		return DisableVpcEndpointConnectionOutcome(outcome.error());
}

void PrivatelinkClient::disableVpcEndpointConnectionAsync(const DisableVpcEndpointConnectionRequest& request, const DisableVpcEndpointConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableVpcEndpointConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::DisableVpcEndpointConnectionOutcomeCallable PrivatelinkClient::disableVpcEndpointConnectionCallable(const DisableVpcEndpointConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableVpcEndpointConnectionOutcome()>>(
			[this, request]()
			{
			return this->disableVpcEndpointConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::DisableVpcEndpointZoneConnectionOutcome PrivatelinkClient::disableVpcEndpointZoneConnection(const DisableVpcEndpointZoneConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableVpcEndpointZoneConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableVpcEndpointZoneConnectionOutcome(DisableVpcEndpointZoneConnectionResult(outcome.result()));
	else
		return DisableVpcEndpointZoneConnectionOutcome(outcome.error());
}

void PrivatelinkClient::disableVpcEndpointZoneConnectionAsync(const DisableVpcEndpointZoneConnectionRequest& request, const DisableVpcEndpointZoneConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableVpcEndpointZoneConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::DisableVpcEndpointZoneConnectionOutcomeCallable PrivatelinkClient::disableVpcEndpointZoneConnectionCallable(const DisableVpcEndpointZoneConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableVpcEndpointZoneConnectionOutcome()>>(
			[this, request]()
			{
			return this->disableVpcEndpointZoneConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::EnableVpcEndpointConnectionOutcome PrivatelinkClient::enableVpcEndpointConnection(const EnableVpcEndpointConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableVpcEndpointConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableVpcEndpointConnectionOutcome(EnableVpcEndpointConnectionResult(outcome.result()));
	else
		return EnableVpcEndpointConnectionOutcome(outcome.error());
}

void PrivatelinkClient::enableVpcEndpointConnectionAsync(const EnableVpcEndpointConnectionRequest& request, const EnableVpcEndpointConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableVpcEndpointConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::EnableVpcEndpointConnectionOutcomeCallable PrivatelinkClient::enableVpcEndpointConnectionCallable(const EnableVpcEndpointConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableVpcEndpointConnectionOutcome()>>(
			[this, request]()
			{
			return this->enableVpcEndpointConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::EnableVpcEndpointZoneConnectionOutcome PrivatelinkClient::enableVpcEndpointZoneConnection(const EnableVpcEndpointZoneConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableVpcEndpointZoneConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableVpcEndpointZoneConnectionOutcome(EnableVpcEndpointZoneConnectionResult(outcome.result()));
	else
		return EnableVpcEndpointZoneConnectionOutcome(outcome.error());
}

void PrivatelinkClient::enableVpcEndpointZoneConnectionAsync(const EnableVpcEndpointZoneConnectionRequest& request, const EnableVpcEndpointZoneConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableVpcEndpointZoneConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::EnableVpcEndpointZoneConnectionOutcomeCallable PrivatelinkClient::enableVpcEndpointZoneConnectionCallable(const EnableVpcEndpointZoneConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableVpcEndpointZoneConnectionOutcome()>>(
			[this, request]()
			{
			return this->enableVpcEndpointZoneConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::GetVpcEndpointAttributeOutcome PrivatelinkClient::getVpcEndpointAttribute(const GetVpcEndpointAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVpcEndpointAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVpcEndpointAttributeOutcome(GetVpcEndpointAttributeResult(outcome.result()));
	else
		return GetVpcEndpointAttributeOutcome(outcome.error());
}

void PrivatelinkClient::getVpcEndpointAttributeAsync(const GetVpcEndpointAttributeRequest& request, const GetVpcEndpointAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVpcEndpointAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::GetVpcEndpointAttributeOutcomeCallable PrivatelinkClient::getVpcEndpointAttributeCallable(const GetVpcEndpointAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVpcEndpointAttributeOutcome()>>(
			[this, request]()
			{
			return this->getVpcEndpointAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::GetVpcEndpointServiceAttributeOutcome PrivatelinkClient::getVpcEndpointServiceAttribute(const GetVpcEndpointServiceAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVpcEndpointServiceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVpcEndpointServiceAttributeOutcome(GetVpcEndpointServiceAttributeResult(outcome.result()));
	else
		return GetVpcEndpointServiceAttributeOutcome(outcome.error());
}

void PrivatelinkClient::getVpcEndpointServiceAttributeAsync(const GetVpcEndpointServiceAttributeRequest& request, const GetVpcEndpointServiceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVpcEndpointServiceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::GetVpcEndpointServiceAttributeOutcomeCallable PrivatelinkClient::getVpcEndpointServiceAttributeCallable(const GetVpcEndpointServiceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVpcEndpointServiceAttributeOutcome()>>(
			[this, request]()
			{
			return this->getVpcEndpointServiceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::ListVpcEndpointConnectionsOutcome PrivatelinkClient::listVpcEndpointConnections(const ListVpcEndpointConnectionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVpcEndpointConnectionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVpcEndpointConnectionsOutcome(ListVpcEndpointConnectionsResult(outcome.result()));
	else
		return ListVpcEndpointConnectionsOutcome(outcome.error());
}

void PrivatelinkClient::listVpcEndpointConnectionsAsync(const ListVpcEndpointConnectionsRequest& request, const ListVpcEndpointConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVpcEndpointConnections(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::ListVpcEndpointConnectionsOutcomeCallable PrivatelinkClient::listVpcEndpointConnectionsCallable(const ListVpcEndpointConnectionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVpcEndpointConnectionsOutcome()>>(
			[this, request]()
			{
			return this->listVpcEndpointConnections(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::ListVpcEndpointSecurityGroupsOutcome PrivatelinkClient::listVpcEndpointSecurityGroups(const ListVpcEndpointSecurityGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVpcEndpointSecurityGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVpcEndpointSecurityGroupsOutcome(ListVpcEndpointSecurityGroupsResult(outcome.result()));
	else
		return ListVpcEndpointSecurityGroupsOutcome(outcome.error());
}

void PrivatelinkClient::listVpcEndpointSecurityGroupsAsync(const ListVpcEndpointSecurityGroupsRequest& request, const ListVpcEndpointSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVpcEndpointSecurityGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::ListVpcEndpointSecurityGroupsOutcomeCallable PrivatelinkClient::listVpcEndpointSecurityGroupsCallable(const ListVpcEndpointSecurityGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVpcEndpointSecurityGroupsOutcome()>>(
			[this, request]()
			{
			return this->listVpcEndpointSecurityGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::ListVpcEndpointServiceResourcesOutcome PrivatelinkClient::listVpcEndpointServiceResources(const ListVpcEndpointServiceResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVpcEndpointServiceResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVpcEndpointServiceResourcesOutcome(ListVpcEndpointServiceResourcesResult(outcome.result()));
	else
		return ListVpcEndpointServiceResourcesOutcome(outcome.error());
}

void PrivatelinkClient::listVpcEndpointServiceResourcesAsync(const ListVpcEndpointServiceResourcesRequest& request, const ListVpcEndpointServiceResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVpcEndpointServiceResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::ListVpcEndpointServiceResourcesOutcomeCallable PrivatelinkClient::listVpcEndpointServiceResourcesCallable(const ListVpcEndpointServiceResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVpcEndpointServiceResourcesOutcome()>>(
			[this, request]()
			{
			return this->listVpcEndpointServiceResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::ListVpcEndpointServiceUsersOutcome PrivatelinkClient::listVpcEndpointServiceUsers(const ListVpcEndpointServiceUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVpcEndpointServiceUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVpcEndpointServiceUsersOutcome(ListVpcEndpointServiceUsersResult(outcome.result()));
	else
		return ListVpcEndpointServiceUsersOutcome(outcome.error());
}

void PrivatelinkClient::listVpcEndpointServiceUsersAsync(const ListVpcEndpointServiceUsersRequest& request, const ListVpcEndpointServiceUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVpcEndpointServiceUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::ListVpcEndpointServiceUsersOutcomeCallable PrivatelinkClient::listVpcEndpointServiceUsersCallable(const ListVpcEndpointServiceUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVpcEndpointServiceUsersOutcome()>>(
			[this, request]()
			{
			return this->listVpcEndpointServiceUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::ListVpcEndpointServicesOutcome PrivatelinkClient::listVpcEndpointServices(const ListVpcEndpointServicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVpcEndpointServicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVpcEndpointServicesOutcome(ListVpcEndpointServicesResult(outcome.result()));
	else
		return ListVpcEndpointServicesOutcome(outcome.error());
}

void PrivatelinkClient::listVpcEndpointServicesAsync(const ListVpcEndpointServicesRequest& request, const ListVpcEndpointServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVpcEndpointServices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::ListVpcEndpointServicesOutcomeCallable PrivatelinkClient::listVpcEndpointServicesCallable(const ListVpcEndpointServicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVpcEndpointServicesOutcome()>>(
			[this, request]()
			{
			return this->listVpcEndpointServices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::ListVpcEndpointServicesByEndUserOutcome PrivatelinkClient::listVpcEndpointServicesByEndUser(const ListVpcEndpointServicesByEndUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVpcEndpointServicesByEndUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVpcEndpointServicesByEndUserOutcome(ListVpcEndpointServicesByEndUserResult(outcome.result()));
	else
		return ListVpcEndpointServicesByEndUserOutcome(outcome.error());
}

void PrivatelinkClient::listVpcEndpointServicesByEndUserAsync(const ListVpcEndpointServicesByEndUserRequest& request, const ListVpcEndpointServicesByEndUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVpcEndpointServicesByEndUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::ListVpcEndpointServicesByEndUserOutcomeCallable PrivatelinkClient::listVpcEndpointServicesByEndUserCallable(const ListVpcEndpointServicesByEndUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVpcEndpointServicesByEndUserOutcome()>>(
			[this, request]()
			{
			return this->listVpcEndpointServicesByEndUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::ListVpcEndpointZonesOutcome PrivatelinkClient::listVpcEndpointZones(const ListVpcEndpointZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVpcEndpointZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVpcEndpointZonesOutcome(ListVpcEndpointZonesResult(outcome.result()));
	else
		return ListVpcEndpointZonesOutcome(outcome.error());
}

void PrivatelinkClient::listVpcEndpointZonesAsync(const ListVpcEndpointZonesRequest& request, const ListVpcEndpointZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVpcEndpointZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::ListVpcEndpointZonesOutcomeCallable PrivatelinkClient::listVpcEndpointZonesCallable(const ListVpcEndpointZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVpcEndpointZonesOutcome()>>(
			[this, request]()
			{
			return this->listVpcEndpointZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::ListVpcEndpointsOutcome PrivatelinkClient::listVpcEndpoints(const ListVpcEndpointsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVpcEndpointsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVpcEndpointsOutcome(ListVpcEndpointsResult(outcome.result()));
	else
		return ListVpcEndpointsOutcome(outcome.error());
}

void PrivatelinkClient::listVpcEndpointsAsync(const ListVpcEndpointsRequest& request, const ListVpcEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVpcEndpoints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::ListVpcEndpointsOutcomeCallable PrivatelinkClient::listVpcEndpointsCallable(const ListVpcEndpointsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVpcEndpointsOutcome()>>(
			[this, request]()
			{
			return this->listVpcEndpoints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::NotifyResourceAddressFamilyOutcome PrivatelinkClient::notifyResourceAddressFamily(const NotifyResourceAddressFamilyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return NotifyResourceAddressFamilyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return NotifyResourceAddressFamilyOutcome(NotifyResourceAddressFamilyResult(outcome.result()));
	else
		return NotifyResourceAddressFamilyOutcome(outcome.error());
}

void PrivatelinkClient::notifyResourceAddressFamilyAsync(const NotifyResourceAddressFamilyRequest& request, const NotifyResourceAddressFamilyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, notifyResourceAddressFamily(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::NotifyResourceAddressFamilyOutcomeCallable PrivatelinkClient::notifyResourceAddressFamilyCallable(const NotifyResourceAddressFamilyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<NotifyResourceAddressFamilyOutcome()>>(
			[this, request]()
			{
			return this->notifyResourceAddressFamily(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::OpenPrivateLinkServiceOutcome PrivatelinkClient::openPrivateLinkService(const OpenPrivateLinkServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenPrivateLinkServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenPrivateLinkServiceOutcome(OpenPrivateLinkServiceResult(outcome.result()));
	else
		return OpenPrivateLinkServiceOutcome(outcome.error());
}

void PrivatelinkClient::openPrivateLinkServiceAsync(const OpenPrivateLinkServiceRequest& request, const OpenPrivateLinkServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openPrivateLinkService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::OpenPrivateLinkServiceOutcomeCallable PrivatelinkClient::openPrivateLinkServiceCallable(const OpenPrivateLinkServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenPrivateLinkServiceOutcome()>>(
			[this, request]()
			{
			return this->openPrivateLinkService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::RemoveUserFromVpcEndpointServiceOutcome PrivatelinkClient::removeUserFromVpcEndpointService(const RemoveUserFromVpcEndpointServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveUserFromVpcEndpointServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveUserFromVpcEndpointServiceOutcome(RemoveUserFromVpcEndpointServiceResult(outcome.result()));
	else
		return RemoveUserFromVpcEndpointServiceOutcome(outcome.error());
}

void PrivatelinkClient::removeUserFromVpcEndpointServiceAsync(const RemoveUserFromVpcEndpointServiceRequest& request, const RemoveUserFromVpcEndpointServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeUserFromVpcEndpointService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::RemoveUserFromVpcEndpointServiceOutcomeCallable PrivatelinkClient::removeUserFromVpcEndpointServiceCallable(const RemoveUserFromVpcEndpointServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveUserFromVpcEndpointServiceOutcome()>>(
			[this, request]()
			{
			return this->removeUserFromVpcEndpointService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::RemoveZoneFromVpcEndpointOutcome PrivatelinkClient::removeZoneFromVpcEndpoint(const RemoveZoneFromVpcEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveZoneFromVpcEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveZoneFromVpcEndpointOutcome(RemoveZoneFromVpcEndpointResult(outcome.result()));
	else
		return RemoveZoneFromVpcEndpointOutcome(outcome.error());
}

void PrivatelinkClient::removeZoneFromVpcEndpointAsync(const RemoveZoneFromVpcEndpointRequest& request, const RemoveZoneFromVpcEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeZoneFromVpcEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::RemoveZoneFromVpcEndpointOutcomeCallable PrivatelinkClient::removeZoneFromVpcEndpointCallable(const RemoveZoneFromVpcEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveZoneFromVpcEndpointOutcome()>>(
			[this, request]()
			{
			return this->removeZoneFromVpcEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::TagResourcesOutcome PrivatelinkClient::tagResources(const TagResourcesRequest &request) const
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

void PrivatelinkClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::TagResourcesOutcomeCallable PrivatelinkClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::UpdateVpcEndpointAttributeOutcome PrivatelinkClient::updateVpcEndpointAttribute(const UpdateVpcEndpointAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateVpcEndpointAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateVpcEndpointAttributeOutcome(UpdateVpcEndpointAttributeResult(outcome.result()));
	else
		return UpdateVpcEndpointAttributeOutcome(outcome.error());
}

void PrivatelinkClient::updateVpcEndpointAttributeAsync(const UpdateVpcEndpointAttributeRequest& request, const UpdateVpcEndpointAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateVpcEndpointAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::UpdateVpcEndpointAttributeOutcomeCallable PrivatelinkClient::updateVpcEndpointAttributeCallable(const UpdateVpcEndpointAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateVpcEndpointAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateVpcEndpointAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::UpdateVpcEndpointConnectionAttributeOutcome PrivatelinkClient::updateVpcEndpointConnectionAttribute(const UpdateVpcEndpointConnectionAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateVpcEndpointConnectionAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateVpcEndpointConnectionAttributeOutcome(UpdateVpcEndpointConnectionAttributeResult(outcome.result()));
	else
		return UpdateVpcEndpointConnectionAttributeOutcome(outcome.error());
}

void PrivatelinkClient::updateVpcEndpointConnectionAttributeAsync(const UpdateVpcEndpointConnectionAttributeRequest& request, const UpdateVpcEndpointConnectionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateVpcEndpointConnectionAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::UpdateVpcEndpointConnectionAttributeOutcomeCallable PrivatelinkClient::updateVpcEndpointConnectionAttributeCallable(const UpdateVpcEndpointConnectionAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateVpcEndpointConnectionAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateVpcEndpointConnectionAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::UpdateVpcEndpointServiceAttributeOutcome PrivatelinkClient::updateVpcEndpointServiceAttribute(const UpdateVpcEndpointServiceAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateVpcEndpointServiceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateVpcEndpointServiceAttributeOutcome(UpdateVpcEndpointServiceAttributeResult(outcome.result()));
	else
		return UpdateVpcEndpointServiceAttributeOutcome(outcome.error());
}

void PrivatelinkClient::updateVpcEndpointServiceAttributeAsync(const UpdateVpcEndpointServiceAttributeRequest& request, const UpdateVpcEndpointServiceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateVpcEndpointServiceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::UpdateVpcEndpointServiceAttributeOutcomeCallable PrivatelinkClient::updateVpcEndpointServiceAttributeCallable(const UpdateVpcEndpointServiceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateVpcEndpointServiceAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateVpcEndpointServiceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::UpdateVpcEndpointServiceResourceAttributeOutcome PrivatelinkClient::updateVpcEndpointServiceResourceAttribute(const UpdateVpcEndpointServiceResourceAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateVpcEndpointServiceResourceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateVpcEndpointServiceResourceAttributeOutcome(UpdateVpcEndpointServiceResourceAttributeResult(outcome.result()));
	else
		return UpdateVpcEndpointServiceResourceAttributeOutcome(outcome.error());
}

void PrivatelinkClient::updateVpcEndpointServiceResourceAttributeAsync(const UpdateVpcEndpointServiceResourceAttributeRequest& request, const UpdateVpcEndpointServiceResourceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateVpcEndpointServiceResourceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::UpdateVpcEndpointServiceResourceAttributeOutcomeCallable PrivatelinkClient::updateVpcEndpointServiceResourceAttributeCallable(const UpdateVpcEndpointServiceResourceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateVpcEndpointServiceResourceAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateVpcEndpointServiceResourceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PrivatelinkClient::UpdateVpcEndpointZoneConnectionResourceAttributeOutcome PrivatelinkClient::updateVpcEndpointZoneConnectionResourceAttribute(const UpdateVpcEndpointZoneConnectionResourceAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateVpcEndpointZoneConnectionResourceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateVpcEndpointZoneConnectionResourceAttributeOutcome(UpdateVpcEndpointZoneConnectionResourceAttributeResult(outcome.result()));
	else
		return UpdateVpcEndpointZoneConnectionResourceAttributeOutcome(outcome.error());
}

void PrivatelinkClient::updateVpcEndpointZoneConnectionResourceAttributeAsync(const UpdateVpcEndpointZoneConnectionResourceAttributeRequest& request, const UpdateVpcEndpointZoneConnectionResourceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateVpcEndpointZoneConnectionResourceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PrivatelinkClient::UpdateVpcEndpointZoneConnectionResourceAttributeOutcomeCallable PrivatelinkClient::updateVpcEndpointZoneConnectionResourceAttributeCallable(const UpdateVpcEndpointZoneConnectionResourceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateVpcEndpointZoneConnectionResourceAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateVpcEndpointZoneConnectionResourceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

