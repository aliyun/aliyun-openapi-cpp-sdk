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

#include <alibabacloud/eipanycast/EipanycastClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Eipanycast;
using namespace AlibabaCloud::Eipanycast::Model;

namespace
{
	const std::string SERVICE_NAME = "Eipanycast";
}

EipanycastClient::EipanycastClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "eipanycast");
}

EipanycastClient::EipanycastClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "eipanycast");
}

EipanycastClient::EipanycastClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "eipanycast");
}

EipanycastClient::~EipanycastClient()
{}

EipanycastClient::AllocateAnycastEipAddressOutcome EipanycastClient::allocateAnycastEipAddress(const AllocateAnycastEipAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AllocateAnycastEipAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AllocateAnycastEipAddressOutcome(AllocateAnycastEipAddressResult(outcome.result()));
	else
		return AllocateAnycastEipAddressOutcome(outcome.error());
}

void EipanycastClient::allocateAnycastEipAddressAsync(const AllocateAnycastEipAddressRequest& request, const AllocateAnycastEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocateAnycastEipAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EipanycastClient::AllocateAnycastEipAddressOutcomeCallable EipanycastClient::allocateAnycastEipAddressCallable(const AllocateAnycastEipAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocateAnycastEipAddressOutcome()>>(
			[this, request]()
			{
			return this->allocateAnycastEipAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EipanycastClient::AssociateAnycastEipAddressOutcome EipanycastClient::associateAnycastEipAddress(const AssociateAnycastEipAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateAnycastEipAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateAnycastEipAddressOutcome(AssociateAnycastEipAddressResult(outcome.result()));
	else
		return AssociateAnycastEipAddressOutcome(outcome.error());
}

void EipanycastClient::associateAnycastEipAddressAsync(const AssociateAnycastEipAddressRequest& request, const AssociateAnycastEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateAnycastEipAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EipanycastClient::AssociateAnycastEipAddressOutcomeCallable EipanycastClient::associateAnycastEipAddressCallable(const AssociateAnycastEipAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateAnycastEipAddressOutcome()>>(
			[this, request]()
			{
			return this->associateAnycastEipAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EipanycastClient::DescribeAnycastEipAddressOutcome EipanycastClient::describeAnycastEipAddress(const DescribeAnycastEipAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAnycastEipAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAnycastEipAddressOutcome(DescribeAnycastEipAddressResult(outcome.result()));
	else
		return DescribeAnycastEipAddressOutcome(outcome.error());
}

void EipanycastClient::describeAnycastEipAddressAsync(const DescribeAnycastEipAddressRequest& request, const DescribeAnycastEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAnycastEipAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EipanycastClient::DescribeAnycastEipAddressOutcomeCallable EipanycastClient::describeAnycastEipAddressCallable(const DescribeAnycastEipAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAnycastEipAddressOutcome()>>(
			[this, request]()
			{
			return this->describeAnycastEipAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EipanycastClient::DescribeAnycastPopLocationsOutcome EipanycastClient::describeAnycastPopLocations(const DescribeAnycastPopLocationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAnycastPopLocationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAnycastPopLocationsOutcome(DescribeAnycastPopLocationsResult(outcome.result()));
	else
		return DescribeAnycastPopLocationsOutcome(outcome.error());
}

void EipanycastClient::describeAnycastPopLocationsAsync(const DescribeAnycastPopLocationsRequest& request, const DescribeAnycastPopLocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAnycastPopLocations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EipanycastClient::DescribeAnycastPopLocationsOutcomeCallable EipanycastClient::describeAnycastPopLocationsCallable(const DescribeAnycastPopLocationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAnycastPopLocationsOutcome()>>(
			[this, request]()
			{
			return this->describeAnycastPopLocations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EipanycastClient::DescribeAnycastServerRegionsOutcome EipanycastClient::describeAnycastServerRegions(const DescribeAnycastServerRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAnycastServerRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAnycastServerRegionsOutcome(DescribeAnycastServerRegionsResult(outcome.result()));
	else
		return DescribeAnycastServerRegionsOutcome(outcome.error());
}

void EipanycastClient::describeAnycastServerRegionsAsync(const DescribeAnycastServerRegionsRequest& request, const DescribeAnycastServerRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAnycastServerRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EipanycastClient::DescribeAnycastServerRegionsOutcomeCallable EipanycastClient::describeAnycastServerRegionsCallable(const DescribeAnycastServerRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAnycastServerRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeAnycastServerRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EipanycastClient::ListAnycastEipAddressesOutcome EipanycastClient::listAnycastEipAddresses(const ListAnycastEipAddressesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAnycastEipAddressesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAnycastEipAddressesOutcome(ListAnycastEipAddressesResult(outcome.result()));
	else
		return ListAnycastEipAddressesOutcome(outcome.error());
}

void EipanycastClient::listAnycastEipAddressesAsync(const ListAnycastEipAddressesRequest& request, const ListAnycastEipAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAnycastEipAddresses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EipanycastClient::ListAnycastEipAddressesOutcomeCallable EipanycastClient::listAnycastEipAddressesCallable(const ListAnycastEipAddressesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAnycastEipAddressesOutcome()>>(
			[this, request]()
			{
			return this->listAnycastEipAddresses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EipanycastClient::ModifyAnycastEipAddressAttributeOutcome EipanycastClient::modifyAnycastEipAddressAttribute(const ModifyAnycastEipAddressAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAnycastEipAddressAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAnycastEipAddressAttributeOutcome(ModifyAnycastEipAddressAttributeResult(outcome.result()));
	else
		return ModifyAnycastEipAddressAttributeOutcome(outcome.error());
}

void EipanycastClient::modifyAnycastEipAddressAttributeAsync(const ModifyAnycastEipAddressAttributeRequest& request, const ModifyAnycastEipAddressAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAnycastEipAddressAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EipanycastClient::ModifyAnycastEipAddressAttributeOutcomeCallable EipanycastClient::modifyAnycastEipAddressAttributeCallable(const ModifyAnycastEipAddressAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAnycastEipAddressAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyAnycastEipAddressAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EipanycastClient::ModifyAnycastEipAddressSpecOutcome EipanycastClient::modifyAnycastEipAddressSpec(const ModifyAnycastEipAddressSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAnycastEipAddressSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAnycastEipAddressSpecOutcome(ModifyAnycastEipAddressSpecResult(outcome.result()));
	else
		return ModifyAnycastEipAddressSpecOutcome(outcome.error());
}

void EipanycastClient::modifyAnycastEipAddressSpecAsync(const ModifyAnycastEipAddressSpecRequest& request, const ModifyAnycastEipAddressSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAnycastEipAddressSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EipanycastClient::ModifyAnycastEipAddressSpecOutcomeCallable EipanycastClient::modifyAnycastEipAddressSpecCallable(const ModifyAnycastEipAddressSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAnycastEipAddressSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyAnycastEipAddressSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EipanycastClient::ReleaseAnycastEipAddressOutcome EipanycastClient::releaseAnycastEipAddress(const ReleaseAnycastEipAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseAnycastEipAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseAnycastEipAddressOutcome(ReleaseAnycastEipAddressResult(outcome.result()));
	else
		return ReleaseAnycastEipAddressOutcome(outcome.error());
}

void EipanycastClient::releaseAnycastEipAddressAsync(const ReleaseAnycastEipAddressRequest& request, const ReleaseAnycastEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseAnycastEipAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EipanycastClient::ReleaseAnycastEipAddressOutcomeCallable EipanycastClient::releaseAnycastEipAddressCallable(const ReleaseAnycastEipAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseAnycastEipAddressOutcome()>>(
			[this, request]()
			{
			return this->releaseAnycastEipAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EipanycastClient::UnassociateAnycastEipAddressOutcome EipanycastClient::unassociateAnycastEipAddress(const UnassociateAnycastEipAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnassociateAnycastEipAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnassociateAnycastEipAddressOutcome(UnassociateAnycastEipAddressResult(outcome.result()));
	else
		return UnassociateAnycastEipAddressOutcome(outcome.error());
}

void EipanycastClient::unassociateAnycastEipAddressAsync(const UnassociateAnycastEipAddressRequest& request, const UnassociateAnycastEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unassociateAnycastEipAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EipanycastClient::UnassociateAnycastEipAddressOutcomeCallable EipanycastClient::unassociateAnycastEipAddressCallable(const UnassociateAnycastEipAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnassociateAnycastEipAddressOutcome()>>(
			[this, request]()
			{
			return this->unassociateAnycastEipAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EipanycastClient::UpdateAnycastEipAddressAssociationsOutcome EipanycastClient::updateAnycastEipAddressAssociations(const UpdateAnycastEipAddressAssociationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAnycastEipAddressAssociationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAnycastEipAddressAssociationsOutcome(UpdateAnycastEipAddressAssociationsResult(outcome.result()));
	else
		return UpdateAnycastEipAddressAssociationsOutcome(outcome.error());
}

void EipanycastClient::updateAnycastEipAddressAssociationsAsync(const UpdateAnycastEipAddressAssociationsRequest& request, const UpdateAnycastEipAddressAssociationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAnycastEipAddressAssociations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EipanycastClient::UpdateAnycastEipAddressAssociationsOutcomeCallable EipanycastClient::updateAnycastEipAddressAssociationsCallable(const UpdateAnycastEipAddressAssociationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAnycastEipAddressAssociationsOutcome()>>(
			[this, request]()
			{
			return this->updateAnycastEipAddressAssociations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

