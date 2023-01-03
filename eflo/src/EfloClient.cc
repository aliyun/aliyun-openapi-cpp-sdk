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

#include <alibabacloud/eflo/EfloClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

namespace
{
	const std::string SERVICE_NAME = "eflo";
}

EfloClient::EfloClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "eflo");
}

EfloClient::EfloClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "eflo");
}

EfloClient::EfloClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "eflo");
}

EfloClient::~EfloClient()
{}

EfloClient::CreateSubnetOutcome EfloClient::createSubnet(const CreateSubnetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSubnetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSubnetOutcome(CreateSubnetResult(outcome.result()));
	else
		return CreateSubnetOutcome(outcome.error());
}

void EfloClient::createSubnetAsync(const CreateSubnetRequest& request, const CreateSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSubnet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::CreateSubnetOutcomeCallable EfloClient::createSubnetCallable(const CreateSubnetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSubnetOutcome()>>(
			[this, request]()
			{
			return this->createSubnet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::CreateVccOutcome EfloClient::createVcc(const CreateVccRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVccOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVccOutcome(CreateVccResult(outcome.result()));
	else
		return CreateVccOutcome(outcome.error());
}

void EfloClient::createVccAsync(const CreateVccRequest& request, const CreateVccAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVcc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::CreateVccOutcomeCallable EfloClient::createVccCallable(const CreateVccRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVccOutcome()>>(
			[this, request]()
			{
			return this->createVcc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::CreateVpdOutcome EfloClient::createVpd(const CreateVpdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVpdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVpdOutcome(CreateVpdResult(outcome.result()));
	else
		return CreateVpdOutcome(outcome.error());
}

void EfloClient::createVpdAsync(const CreateVpdRequest& request, const CreateVpdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVpd(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::CreateVpdOutcomeCallable EfloClient::createVpdCallable(const CreateVpdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVpdOutcome()>>(
			[this, request]()
			{
			return this->createVpd(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::DeleteSubnetOutcome EfloClient::deleteSubnet(const DeleteSubnetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSubnetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSubnetOutcome(DeleteSubnetResult(outcome.result()));
	else
		return DeleteSubnetOutcome(outcome.error());
}

void EfloClient::deleteSubnetAsync(const DeleteSubnetRequest& request, const DeleteSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSubnet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::DeleteSubnetOutcomeCallable EfloClient::deleteSubnetCallable(const DeleteSubnetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSubnetOutcome()>>(
			[this, request]()
			{
			return this->deleteSubnet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::DeleteVpdOutcome EfloClient::deleteVpd(const DeleteVpdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVpdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVpdOutcome(DeleteVpdResult(outcome.result()));
	else
		return DeleteVpdOutcome(outcome.error());
}

void EfloClient::deleteVpdAsync(const DeleteVpdRequest& request, const DeleteVpdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVpd(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::DeleteVpdOutcomeCallable EfloClient::deleteVpdCallable(const DeleteVpdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVpdOutcome()>>(
			[this, request]()
			{
			return this->deleteVpd(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::GetSubnetOutcome EfloClient::getSubnet(const GetSubnetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSubnetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSubnetOutcome(GetSubnetResult(outcome.result()));
	else
		return GetSubnetOutcome(outcome.error());
}

void EfloClient::getSubnetAsync(const GetSubnetRequest& request, const GetSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSubnet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::GetSubnetOutcomeCallable EfloClient::getSubnetCallable(const GetSubnetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSubnetOutcome()>>(
			[this, request]()
			{
			return this->getSubnet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::GetVccOutcome EfloClient::getVcc(const GetVccRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVccOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVccOutcome(GetVccResult(outcome.result()));
	else
		return GetVccOutcome(outcome.error());
}

void EfloClient::getVccAsync(const GetVccRequest& request, const GetVccAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVcc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::GetVccOutcomeCallable EfloClient::getVccCallable(const GetVccRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVccOutcome()>>(
			[this, request]()
			{
			return this->getVcc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::GetVpdOutcome EfloClient::getVpd(const GetVpdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVpdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVpdOutcome(GetVpdResult(outcome.result()));
	else
		return GetVpdOutcome(outcome.error());
}

void EfloClient::getVpdAsync(const GetVpdRequest& request, const GetVpdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVpd(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::GetVpdOutcomeCallable EfloClient::getVpdCallable(const GetVpdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVpdOutcome()>>(
			[this, request]()
			{
			return this->getVpd(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::InitializeVccOutcome EfloClient::initializeVcc(const InitializeVccRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InitializeVccOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InitializeVccOutcome(InitializeVccResult(outcome.result()));
	else
		return InitializeVccOutcome(outcome.error());
}

void EfloClient::initializeVccAsync(const InitializeVccRequest& request, const InitializeVccAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, initializeVcc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::InitializeVccOutcomeCallable EfloClient::initializeVccCallable(const InitializeVccRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InitializeVccOutcome()>>(
			[this, request]()
			{
			return this->initializeVcc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::ListSubnetsOutcome EfloClient::listSubnets(const ListSubnetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSubnetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSubnetsOutcome(ListSubnetsResult(outcome.result()));
	else
		return ListSubnetsOutcome(outcome.error());
}

void EfloClient::listSubnetsAsync(const ListSubnetsRequest& request, const ListSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSubnets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::ListSubnetsOutcomeCallable EfloClient::listSubnetsCallable(const ListSubnetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSubnetsOutcome()>>(
			[this, request]()
			{
			return this->listSubnets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::ListVccsOutcome EfloClient::listVccs(const ListVccsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVccsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVccsOutcome(ListVccsResult(outcome.result()));
	else
		return ListVccsOutcome(outcome.error());
}

void EfloClient::listVccsAsync(const ListVccsRequest& request, const ListVccsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVccs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::ListVccsOutcomeCallable EfloClient::listVccsCallable(const ListVccsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVccsOutcome()>>(
			[this, request]()
			{
			return this->listVccs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::ListVpdsOutcome EfloClient::listVpds(const ListVpdsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVpdsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVpdsOutcome(ListVpdsResult(outcome.result()));
	else
		return ListVpdsOutcome(outcome.error());
}

void EfloClient::listVpdsAsync(const ListVpdsRequest& request, const ListVpdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVpds(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::ListVpdsOutcomeCallable EfloClient::listVpdsCallable(const ListVpdsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVpdsOutcome()>>(
			[this, request]()
			{
			return this->listVpds(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::UpdateSubnetOutcome EfloClient::updateSubnet(const UpdateSubnetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSubnetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSubnetOutcome(UpdateSubnetResult(outcome.result()));
	else
		return UpdateSubnetOutcome(outcome.error());
}

void EfloClient::updateSubnetAsync(const UpdateSubnetRequest& request, const UpdateSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSubnet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::UpdateSubnetOutcomeCallable EfloClient::updateSubnetCallable(const UpdateSubnetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSubnetOutcome()>>(
			[this, request]()
			{
			return this->updateSubnet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::UpdateVccOutcome EfloClient::updateVcc(const UpdateVccRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateVccOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateVccOutcome(UpdateVccResult(outcome.result()));
	else
		return UpdateVccOutcome(outcome.error());
}

void EfloClient::updateVccAsync(const UpdateVccRequest& request, const UpdateVccAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateVcc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::UpdateVccOutcomeCallable EfloClient::updateVccCallable(const UpdateVccRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateVccOutcome()>>(
			[this, request]()
			{
			return this->updateVcc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EfloClient::UpdateVpdOutcome EfloClient::updateVpd(const UpdateVpdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateVpdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateVpdOutcome(UpdateVpdResult(outcome.result()));
	else
		return UpdateVpdOutcome(outcome.error());
}

void EfloClient::updateVpdAsync(const UpdateVpdRequest& request, const UpdateVpdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateVpd(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EfloClient::UpdateVpdOutcomeCallable EfloClient::updateVpdCallable(const UpdateVpdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateVpdOutcome()>>(
			[this, request]()
			{
			return this->updateVpd(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

