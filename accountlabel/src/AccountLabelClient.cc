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

#include <alibabacloud/accountlabel/AccountLabelClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::AccountLabel;
using namespace AlibabaCloud::AccountLabel::Model;

namespace
{
	const std::string SERVICE_NAME = "AccountLabel";
}

AccountLabelClient::AccountLabelClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

AccountLabelClient::AccountLabelClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

AccountLabelClient::AccountLabelClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

AccountLabelClient::~AccountLabelClient()
{}

AccountLabelClient::AddCustomerLabelOutcome AccountLabelClient::addCustomerLabel(const AddCustomerLabelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddCustomerLabelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddCustomerLabelOutcome(AddCustomerLabelResult(outcome.result()));
	else
		return AddCustomerLabelOutcome(outcome.error());
}

void AccountLabelClient::addCustomerLabelAsync(const AddCustomerLabelRequest& request, const AddCustomerLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addCustomerLabel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AccountLabelClient::AddCustomerLabelOutcomeCallable AccountLabelClient::addCustomerLabelCallable(const AddCustomerLabelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddCustomerLabelOutcome()>>(
			[this, request]()
			{
			return this->addCustomerLabel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AccountLabelClient::BatchFetchAccountLabelOutcome AccountLabelClient::batchFetchAccountLabel(const BatchFetchAccountLabelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchFetchAccountLabelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchFetchAccountLabelOutcome(BatchFetchAccountLabelResult(outcome.result()));
	else
		return BatchFetchAccountLabelOutcome(outcome.error());
}

void AccountLabelClient::batchFetchAccountLabelAsync(const BatchFetchAccountLabelRequest& request, const BatchFetchAccountLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchFetchAccountLabel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AccountLabelClient::BatchFetchAccountLabelOutcomeCallable AccountLabelClient::batchFetchAccountLabelCallable(const BatchFetchAccountLabelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchFetchAccountLabelOutcome()>>(
			[this, request]()
			{
			return this->batchFetchAccountLabel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AccountLabelClient::DeleteCustomerLabelOutcome AccountLabelClient::deleteCustomerLabel(const DeleteCustomerLabelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCustomerLabelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCustomerLabelOutcome(DeleteCustomerLabelResult(outcome.result()));
	else
		return DeleteCustomerLabelOutcome(outcome.error());
}

void AccountLabelClient::deleteCustomerLabelAsync(const DeleteCustomerLabelRequest& request, const DeleteCustomerLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCustomerLabel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AccountLabelClient::DeleteCustomerLabelOutcomeCallable AccountLabelClient::deleteCustomerLabelCallable(const DeleteCustomerLabelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCustomerLabelOutcome()>>(
			[this, request]()
			{
			return this->deleteCustomerLabel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AccountLabelClient::QueryCustomerLabelOutcome AccountLabelClient::queryCustomerLabel(const QueryCustomerLabelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCustomerLabelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCustomerLabelOutcome(QueryCustomerLabelResult(outcome.result()));
	else
		return QueryCustomerLabelOutcome(outcome.error());
}

void AccountLabelClient::queryCustomerLabelAsync(const QueryCustomerLabelRequest& request, const QueryCustomerLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCustomerLabel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AccountLabelClient::QueryCustomerLabelOutcomeCallable AccountLabelClient::queryCustomerLabelCallable(const QueryCustomerLabelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCustomerLabelOutcome()>>(
			[this, request]()
			{
			return this->queryCustomerLabel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AccountLabelClient::QueryCustomerLabelByConfigGroupOutcome AccountLabelClient::queryCustomerLabelByConfigGroup(const QueryCustomerLabelByConfigGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCustomerLabelByConfigGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCustomerLabelByConfigGroupOutcome(QueryCustomerLabelByConfigGroupResult(outcome.result()));
	else
		return QueryCustomerLabelByConfigGroupOutcome(outcome.error());
}

void AccountLabelClient::queryCustomerLabelByConfigGroupAsync(const QueryCustomerLabelByConfigGroupRequest& request, const QueryCustomerLabelByConfigGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCustomerLabelByConfigGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AccountLabelClient::QueryCustomerLabelByConfigGroupOutcomeCallable AccountLabelClient::queryCustomerLabelByConfigGroupCallable(const QueryCustomerLabelByConfigGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCustomerLabelByConfigGroupOutcome()>>(
			[this, request]()
			{
			return this->queryCustomerLabelByConfigGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

