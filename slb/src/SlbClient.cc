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

#include <alibabacloud/slb/SlbClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

namespace
{
	const std::string SERVICE_NAME = "Slb";
}

SlbClient::SlbClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "slb");
}

SlbClient::SlbClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "slb");
}

SlbClient::SlbClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "slb");
}

SlbClient::~SlbClient()
{}

SlbClient::AddBackendServersOutcome SlbClient::addBackendServers(const AddBackendServersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddBackendServersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddBackendServersOutcome(AddBackendServersResult(outcome.result()));
	else
		return AddBackendServersOutcome(outcome.error());
}

void SlbClient::addBackendServersAsync(const AddBackendServersRequest& request, const AddBackendServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addBackendServers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::AddBackendServersOutcomeCallable SlbClient::addBackendServersCallable(const AddBackendServersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddBackendServersOutcome()>>(
			[this, request]()
			{
			return this->addBackendServers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::CreateLoadBalancerOutcome SlbClient::createLoadBalancer(const CreateLoadBalancerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLoadBalancerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLoadBalancerOutcome(CreateLoadBalancerResult(outcome.result()));
	else
		return CreateLoadBalancerOutcome(outcome.error());
}

void SlbClient::createLoadBalancerAsync(const CreateLoadBalancerRequest& request, const CreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLoadBalancer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::CreateLoadBalancerOutcomeCallable SlbClient::createLoadBalancerCallable(const CreateLoadBalancerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLoadBalancerOutcome()>>(
			[this, request]()
			{
			return this->createLoadBalancer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::CreateLoadBalancerHTTPListenerOutcome SlbClient::createLoadBalancerHTTPListener(const CreateLoadBalancerHTTPListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLoadBalancerHTTPListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLoadBalancerHTTPListenerOutcome(CreateLoadBalancerHTTPListenerResult(outcome.result()));
	else
		return CreateLoadBalancerHTTPListenerOutcome(outcome.error());
}

void SlbClient::createLoadBalancerHTTPListenerAsync(const CreateLoadBalancerHTTPListenerRequest& request, const CreateLoadBalancerHTTPListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLoadBalancerHTTPListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::CreateLoadBalancerHTTPListenerOutcomeCallable SlbClient::createLoadBalancerHTTPListenerCallable(const CreateLoadBalancerHTTPListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLoadBalancerHTTPListenerOutcome()>>(
			[this, request]()
			{
			return this->createLoadBalancerHTTPListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::CreateLoadBalancerTCPListenerOutcome SlbClient::createLoadBalancerTCPListener(const CreateLoadBalancerTCPListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLoadBalancerTCPListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLoadBalancerTCPListenerOutcome(CreateLoadBalancerTCPListenerResult(outcome.result()));
	else
		return CreateLoadBalancerTCPListenerOutcome(outcome.error());
}

void SlbClient::createLoadBalancerTCPListenerAsync(const CreateLoadBalancerTCPListenerRequest& request, const CreateLoadBalancerTCPListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLoadBalancerTCPListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::CreateLoadBalancerTCPListenerOutcomeCallable SlbClient::createLoadBalancerTCPListenerCallable(const CreateLoadBalancerTCPListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLoadBalancerTCPListenerOutcome()>>(
			[this, request]()
			{
			return this->createLoadBalancerTCPListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DeleteLoadBalancerOutcome SlbClient::deleteLoadBalancer(const DeleteLoadBalancerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLoadBalancerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLoadBalancerOutcome(DeleteLoadBalancerResult(outcome.result()));
	else
		return DeleteLoadBalancerOutcome(outcome.error());
}

void SlbClient::deleteLoadBalancerAsync(const DeleteLoadBalancerRequest& request, const DeleteLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLoadBalancer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DeleteLoadBalancerOutcomeCallable SlbClient::deleteLoadBalancerCallable(const DeleteLoadBalancerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLoadBalancerOutcome()>>(
			[this, request]()
			{
			return this->deleteLoadBalancer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DeleteLoadBalancerListenerOutcome SlbClient::deleteLoadBalancerListener(const DeleteLoadBalancerListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLoadBalancerListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLoadBalancerListenerOutcome(DeleteLoadBalancerListenerResult(outcome.result()));
	else
		return DeleteLoadBalancerListenerOutcome(outcome.error());
}

void SlbClient::deleteLoadBalancerListenerAsync(const DeleteLoadBalancerListenerRequest& request, const DeleteLoadBalancerListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLoadBalancerListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DeleteLoadBalancerListenerOutcomeCallable SlbClient::deleteLoadBalancerListenerCallable(const DeleteLoadBalancerListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLoadBalancerListenerOutcome()>>(
			[this, request]()
			{
			return this->deleteLoadBalancerListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeBackendServersOutcome SlbClient::describeBackendServers(const DescribeBackendServersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackendServersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackendServersOutcome(DescribeBackendServersResult(outcome.result()));
	else
		return DescribeBackendServersOutcome(outcome.error());
}

void SlbClient::describeBackendServersAsync(const DescribeBackendServersRequest& request, const DescribeBackendServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackendServers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeBackendServersOutcomeCallable SlbClient::describeBackendServersCallable(const DescribeBackendServersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackendServersOutcome()>>(
			[this, request]()
			{
			return this->describeBackendServers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeLoadBalancerAttributeOutcome SlbClient::describeLoadBalancerAttribute(const DescribeLoadBalancerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLoadBalancerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLoadBalancerAttributeOutcome(DescribeLoadBalancerAttributeResult(outcome.result()));
	else
		return DescribeLoadBalancerAttributeOutcome(outcome.error());
}

void SlbClient::describeLoadBalancerAttributeAsync(const DescribeLoadBalancerAttributeRequest& request, const DescribeLoadBalancerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLoadBalancerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeLoadBalancerAttributeOutcomeCallable SlbClient::describeLoadBalancerAttributeCallable(const DescribeLoadBalancerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLoadBalancerAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeLoadBalancerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeLoadBalancerHTTPListenerAttributeOutcome SlbClient::describeLoadBalancerHTTPListenerAttribute(const DescribeLoadBalancerHTTPListenerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLoadBalancerHTTPListenerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLoadBalancerHTTPListenerAttributeOutcome(DescribeLoadBalancerHTTPListenerAttributeResult(outcome.result()));
	else
		return DescribeLoadBalancerHTTPListenerAttributeOutcome(outcome.error());
}

void SlbClient::describeLoadBalancerHTTPListenerAttributeAsync(const DescribeLoadBalancerHTTPListenerAttributeRequest& request, const DescribeLoadBalancerHTTPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLoadBalancerHTTPListenerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeLoadBalancerHTTPListenerAttributeOutcomeCallable SlbClient::describeLoadBalancerHTTPListenerAttributeCallable(const DescribeLoadBalancerHTTPListenerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLoadBalancerHTTPListenerAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeLoadBalancerHTTPListenerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeLoadBalancerTCPListenerAttributeOutcome SlbClient::describeLoadBalancerTCPListenerAttribute(const DescribeLoadBalancerTCPListenerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLoadBalancerTCPListenerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLoadBalancerTCPListenerAttributeOutcome(DescribeLoadBalancerTCPListenerAttributeResult(outcome.result()));
	else
		return DescribeLoadBalancerTCPListenerAttributeOutcome(outcome.error());
}

void SlbClient::describeLoadBalancerTCPListenerAttributeAsync(const DescribeLoadBalancerTCPListenerAttributeRequest& request, const DescribeLoadBalancerTCPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLoadBalancerTCPListenerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeLoadBalancerTCPListenerAttributeOutcomeCallable SlbClient::describeLoadBalancerTCPListenerAttributeCallable(const DescribeLoadBalancerTCPListenerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLoadBalancerTCPListenerAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeLoadBalancerTCPListenerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeLoadBalancersOutcome SlbClient::describeLoadBalancers(const DescribeLoadBalancersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLoadBalancersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLoadBalancersOutcome(DescribeLoadBalancersResult(outcome.result()));
	else
		return DescribeLoadBalancersOutcome(outcome.error());
}

void SlbClient::describeLoadBalancersAsync(const DescribeLoadBalancersRequest& request, const DescribeLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLoadBalancers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeLoadBalancersOutcomeCallable SlbClient::describeLoadBalancersCallable(const DescribeLoadBalancersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLoadBalancersOutcome()>>(
			[this, request]()
			{
			return this->describeLoadBalancers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::DescribeRegionsOutcome SlbClient::describeRegions(const DescribeRegionsRequest &request) const
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

void SlbClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::DescribeRegionsOutcomeCallable SlbClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::RemoveBackendServersOutcome SlbClient::removeBackendServers(const RemoveBackendServersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveBackendServersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveBackendServersOutcome(RemoveBackendServersResult(outcome.result()));
	else
		return RemoveBackendServersOutcome(outcome.error());
}

void SlbClient::removeBackendServersAsync(const RemoveBackendServersRequest& request, const RemoveBackendServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeBackendServers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::RemoveBackendServersOutcomeCallable SlbClient::removeBackendServersCallable(const RemoveBackendServersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveBackendServersOutcome()>>(
			[this, request]()
			{
			return this->removeBackendServers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::SetLoadBalancerHTTPListenerAttributeOutcome SlbClient::setLoadBalancerHTTPListenerAttribute(const SetLoadBalancerHTTPListenerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLoadBalancerHTTPListenerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLoadBalancerHTTPListenerAttributeOutcome(SetLoadBalancerHTTPListenerAttributeResult(outcome.result()));
	else
		return SetLoadBalancerHTTPListenerAttributeOutcome(outcome.error());
}

void SlbClient::setLoadBalancerHTTPListenerAttributeAsync(const SetLoadBalancerHTTPListenerAttributeRequest& request, const SetLoadBalancerHTTPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLoadBalancerHTTPListenerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::SetLoadBalancerHTTPListenerAttributeOutcomeCallable SlbClient::setLoadBalancerHTTPListenerAttributeCallable(const SetLoadBalancerHTTPListenerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLoadBalancerHTTPListenerAttributeOutcome()>>(
			[this, request]()
			{
			return this->setLoadBalancerHTTPListenerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::SetLoadBalancerListenerStatusOutcome SlbClient::setLoadBalancerListenerStatus(const SetLoadBalancerListenerStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLoadBalancerListenerStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLoadBalancerListenerStatusOutcome(SetLoadBalancerListenerStatusResult(outcome.result()));
	else
		return SetLoadBalancerListenerStatusOutcome(outcome.error());
}

void SlbClient::setLoadBalancerListenerStatusAsync(const SetLoadBalancerListenerStatusRequest& request, const SetLoadBalancerListenerStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLoadBalancerListenerStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::SetLoadBalancerListenerStatusOutcomeCallable SlbClient::setLoadBalancerListenerStatusCallable(const SetLoadBalancerListenerStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLoadBalancerListenerStatusOutcome()>>(
			[this, request]()
			{
			return this->setLoadBalancerListenerStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::SetLoadBalancerNameOutcome SlbClient::setLoadBalancerName(const SetLoadBalancerNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLoadBalancerNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLoadBalancerNameOutcome(SetLoadBalancerNameResult(outcome.result()));
	else
		return SetLoadBalancerNameOutcome(outcome.error());
}

void SlbClient::setLoadBalancerNameAsync(const SetLoadBalancerNameRequest& request, const SetLoadBalancerNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLoadBalancerName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::SetLoadBalancerNameOutcomeCallable SlbClient::setLoadBalancerNameCallable(const SetLoadBalancerNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLoadBalancerNameOutcome()>>(
			[this, request]()
			{
			return this->setLoadBalancerName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::SetLoadBalancerStatusOutcome SlbClient::setLoadBalancerStatus(const SetLoadBalancerStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLoadBalancerStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLoadBalancerStatusOutcome(SetLoadBalancerStatusResult(outcome.result()));
	else
		return SetLoadBalancerStatusOutcome(outcome.error());
}

void SlbClient::setLoadBalancerStatusAsync(const SetLoadBalancerStatusRequest& request, const SetLoadBalancerStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLoadBalancerStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::SetLoadBalancerStatusOutcomeCallable SlbClient::setLoadBalancerStatusCallable(const SetLoadBalancerStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLoadBalancerStatusOutcome()>>(
			[this, request]()
			{
			return this->setLoadBalancerStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SlbClient::SetLoadBalancerTCPListenerAttributeOutcome SlbClient::setLoadBalancerTCPListenerAttribute(const SetLoadBalancerTCPListenerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLoadBalancerTCPListenerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLoadBalancerTCPListenerAttributeOutcome(SetLoadBalancerTCPListenerAttributeResult(outcome.result()));
	else
		return SetLoadBalancerTCPListenerAttributeOutcome(outcome.error());
}

void SlbClient::setLoadBalancerTCPListenerAttributeAsync(const SetLoadBalancerTCPListenerAttributeRequest& request, const SetLoadBalancerTCPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLoadBalancerTCPListenerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SlbClient::SetLoadBalancerTCPListenerAttributeOutcomeCallable SlbClient::setLoadBalancerTCPListenerAttributeCallable(const SetLoadBalancerTCPListenerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLoadBalancerTCPListenerAttributeOutcome()>>(
			[this, request]()
			{
			return this->setLoadBalancerTCPListenerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

