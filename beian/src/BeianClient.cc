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

#include <alibabacloud/beian/BeianClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Beian;
using namespace AlibabaCloud::Beian::Model;

namespace
{
	const std::string SERVICE_NAME = "Beian";
}

BeianClient::BeianClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

BeianClient::BeianClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

BeianClient::BeianClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

BeianClient::~BeianClient()
{}

BeianClient::DeleteUnbeianIpCheckTypeOutcome BeianClient::deleteUnbeianIpCheckType(const DeleteUnbeianIpCheckTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUnbeianIpCheckTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUnbeianIpCheckTypeOutcome(DeleteUnbeianIpCheckTypeResult(outcome.result()));
	else
		return DeleteUnbeianIpCheckTypeOutcome(outcome.error());
}

void BeianClient::deleteUnbeianIpCheckTypeAsync(const DeleteUnbeianIpCheckTypeRequest& request, const DeleteUnbeianIpCheckTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUnbeianIpCheckType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BeianClient::DeleteUnbeianIpCheckTypeOutcomeCallable BeianClient::deleteUnbeianIpCheckTypeCallable(const DeleteUnbeianIpCheckTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUnbeianIpCheckTypeOutcome()>>(
			[this, request]()
			{
			return this->deleteUnbeianIpCheckType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BeianClient::GetMainDomainOutcome BeianClient::getMainDomain(const GetMainDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMainDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMainDomainOutcome(GetMainDomainResult(outcome.result()));
	else
		return GetMainDomainOutcome(outcome.error());
}

void BeianClient::getMainDomainAsync(const GetMainDomainRequest& request, const GetMainDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMainDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BeianClient::GetMainDomainOutcomeCallable BeianClient::getMainDomainCallable(const GetMainDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMainDomainOutcome()>>(
			[this, request]()
			{
			return this->getMainDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BeianClient::InsertUnbeianIpCheckTypeOutcome BeianClient::insertUnbeianIpCheckType(const InsertUnbeianIpCheckTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertUnbeianIpCheckTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertUnbeianIpCheckTypeOutcome(InsertUnbeianIpCheckTypeResult(outcome.result()));
	else
		return InsertUnbeianIpCheckTypeOutcome(outcome.error());
}

void BeianClient::insertUnbeianIpCheckTypeAsync(const InsertUnbeianIpCheckTypeRequest& request, const InsertUnbeianIpCheckTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertUnbeianIpCheckType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BeianClient::InsertUnbeianIpCheckTypeOutcomeCallable BeianClient::insertUnbeianIpCheckTypeCallable(const InsertUnbeianIpCheckTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertUnbeianIpCheckTypeOutcome()>>(
			[this, request]()
			{
			return this->insertUnbeianIpCheckType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BeianClient::ListUnbeianIpCheckTypeOutcome BeianClient::listUnbeianIpCheckType(const ListUnbeianIpCheckTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUnbeianIpCheckTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUnbeianIpCheckTypeOutcome(ListUnbeianIpCheckTypeResult(outcome.result()));
	else
		return ListUnbeianIpCheckTypeOutcome(outcome.error());
}

void BeianClient::listUnbeianIpCheckTypeAsync(const ListUnbeianIpCheckTypeRequest& request, const ListUnbeianIpCheckTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUnbeianIpCheckType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BeianClient::ListUnbeianIpCheckTypeOutcomeCallable BeianClient::listUnbeianIpCheckTypeCallable(const ListUnbeianIpCheckTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUnbeianIpCheckTypeOutcome()>>(
			[this, request]()
			{
			return this->listUnbeianIpCheckType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BeianClient::ManageAccessorDomainOutcome BeianClient::manageAccessorDomain(const ManageAccessorDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ManageAccessorDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ManageAccessorDomainOutcome(ManageAccessorDomainResult(outcome.result()));
	else
		return ManageAccessorDomainOutcome(outcome.error());
}

void BeianClient::manageAccessorDomainAsync(const ManageAccessorDomainRequest& request, const ManageAccessorDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, manageAccessorDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BeianClient::ManageAccessorDomainOutcomeCallable BeianClient::manageAccessorDomainCallable(const ManageAccessorDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ManageAccessorDomainOutcome()>>(
			[this, request]()
			{
			return this->manageAccessorDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BeianClient::ManageAccessorDomainWhiteListOutcome BeianClient::manageAccessorDomainWhiteList(const ManageAccessorDomainWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ManageAccessorDomainWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ManageAccessorDomainWhiteListOutcome(ManageAccessorDomainWhiteListResult(outcome.result()));
	else
		return ManageAccessorDomainWhiteListOutcome(outcome.error());
}

void BeianClient::manageAccessorDomainWhiteListAsync(const ManageAccessorDomainWhiteListRequest& request, const ManageAccessorDomainWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, manageAccessorDomainWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BeianClient::ManageAccessorDomainWhiteListOutcomeCallable BeianClient::manageAccessorDomainWhiteListCallable(const ManageAccessorDomainWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ManageAccessorDomainWhiteListOutcome()>>(
			[this, request]()
			{
			return this->manageAccessorDomainWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BeianClient::ManageAccessorIpOutcome BeianClient::manageAccessorIp(const ManageAccessorIpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ManageAccessorIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ManageAccessorIpOutcome(ManageAccessorIpResult(outcome.result()));
	else
		return ManageAccessorIpOutcome(outcome.error());
}

void BeianClient::manageAccessorIpAsync(const ManageAccessorIpRequest& request, const ManageAccessorIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, manageAccessorIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BeianClient::ManageAccessorIpOutcomeCallable BeianClient::manageAccessorIpCallable(const ManageAccessorIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ManageAccessorIpOutcome()>>(
			[this, request]()
			{
			return this->manageAccessorIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BeianClient::QueryAccessorDomainOutcome BeianClient::queryAccessorDomain(const QueryAccessorDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAccessorDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAccessorDomainOutcome(QueryAccessorDomainResult(outcome.result()));
	else
		return QueryAccessorDomainOutcome(outcome.error());
}

void BeianClient::queryAccessorDomainAsync(const QueryAccessorDomainRequest& request, const QueryAccessorDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAccessorDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BeianClient::QueryAccessorDomainOutcomeCallable BeianClient::queryAccessorDomainCallable(const QueryAccessorDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAccessorDomainOutcome()>>(
			[this, request]()
			{
			return this->queryAccessorDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BeianClient::QueryAccessorDomainListOutcome BeianClient::queryAccessorDomainList(const QueryAccessorDomainListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAccessorDomainListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAccessorDomainListOutcome(QueryAccessorDomainListResult(outcome.result()));
	else
		return QueryAccessorDomainListOutcome(outcome.error());
}

void BeianClient::queryAccessorDomainListAsync(const QueryAccessorDomainListRequest& request, const QueryAccessorDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAccessorDomainList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BeianClient::QueryAccessorDomainListOutcomeCallable BeianClient::queryAccessorDomainListCallable(const QueryAccessorDomainListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAccessorDomainListOutcome()>>(
			[this, request]()
			{
			return this->queryAccessorDomainList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BeianClient::QueryAccessorDomainStatusOutcome BeianClient::queryAccessorDomainStatus(const QueryAccessorDomainStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAccessorDomainStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAccessorDomainStatusOutcome(QueryAccessorDomainStatusResult(outcome.result()));
	else
		return QueryAccessorDomainStatusOutcome(outcome.error());
}

void BeianClient::queryAccessorDomainStatusAsync(const QueryAccessorDomainStatusRequest& request, const QueryAccessorDomainStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAccessorDomainStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BeianClient::QueryAccessorDomainStatusOutcomeCallable BeianClient::queryAccessorDomainStatusCallable(const QueryAccessorDomainStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAccessorDomainStatusOutcome()>>(
			[this, request]()
			{
			return this->queryAccessorDomainStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BeianClient::QueryAccessorDomainWhiteListOutcome BeianClient::queryAccessorDomainWhiteList(const QueryAccessorDomainWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAccessorDomainWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAccessorDomainWhiteListOutcome(QueryAccessorDomainWhiteListResult(outcome.result()));
	else
		return QueryAccessorDomainWhiteListOutcome(outcome.error());
}

void BeianClient::queryAccessorDomainWhiteListAsync(const QueryAccessorDomainWhiteListRequest& request, const QueryAccessorDomainWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAccessorDomainWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BeianClient::QueryAccessorDomainWhiteListOutcomeCallable BeianClient::queryAccessorDomainWhiteListCallable(const QueryAccessorDomainWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAccessorDomainWhiteListOutcome()>>(
			[this, request]()
			{
			return this->queryAccessorDomainWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BeianClient::QueryAccessorDomainsStatusOutcome BeianClient::queryAccessorDomainsStatus(const QueryAccessorDomainsStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAccessorDomainsStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAccessorDomainsStatusOutcome(QueryAccessorDomainsStatusResult(outcome.result()));
	else
		return QueryAccessorDomainsStatusOutcome(outcome.error());
}

void BeianClient::queryAccessorDomainsStatusAsync(const QueryAccessorDomainsStatusRequest& request, const QueryAccessorDomainsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAccessorDomainsStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BeianClient::QueryAccessorDomainsStatusOutcomeCallable BeianClient::queryAccessorDomainsStatusCallable(const QueryAccessorDomainsStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAccessorDomainsStatusOutcome()>>(
			[this, request]()
			{
			return this->queryAccessorDomainsStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BeianClient::QueryAccessorIpOutcome BeianClient::queryAccessorIp(const QueryAccessorIpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAccessorIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAccessorIpOutcome(QueryAccessorIpResult(outcome.result()));
	else
		return QueryAccessorIpOutcome(outcome.error());
}

void BeianClient::queryAccessorIpAsync(const QueryAccessorIpRequest& request, const QueryAccessorIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAccessorIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BeianClient::QueryAccessorIpOutcomeCallable BeianClient::queryAccessorIpCallable(const QueryAccessorIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAccessorIpOutcome()>>(
			[this, request]()
			{
			return this->queryAccessorIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BeianClient::SubmitAccessorFullDomainsOssListOutcome BeianClient::submitAccessorFullDomainsOssList(const SubmitAccessorFullDomainsOssListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitAccessorFullDomainsOssListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitAccessorFullDomainsOssListOutcome(SubmitAccessorFullDomainsOssListResult(outcome.result()));
	else
		return SubmitAccessorFullDomainsOssListOutcome(outcome.error());
}

void BeianClient::submitAccessorFullDomainsOssListAsync(const SubmitAccessorFullDomainsOssListRequest& request, const SubmitAccessorFullDomainsOssListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitAccessorFullDomainsOssList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BeianClient::SubmitAccessorFullDomainsOssListOutcomeCallable BeianClient::submitAccessorFullDomainsOssListCallable(const SubmitAccessorFullDomainsOssListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitAccessorFullDomainsOssListOutcome()>>(
			[this, request]()
			{
			return this->submitAccessorFullDomainsOssList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

