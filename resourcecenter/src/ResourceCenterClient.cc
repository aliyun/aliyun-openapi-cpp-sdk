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

#include <alibabacloud/resourcecenter/ResourceCenterClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::ResourceCenter;
using namespace AlibabaCloud::ResourceCenter::Model;

namespace
{
	const std::string SERVICE_NAME = "ResourceCenter";
}

ResourceCenterClient::ResourceCenterClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ResourceCenterClient::ResourceCenterClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ResourceCenterClient::ResourceCenterClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ResourceCenterClient::~ResourceCenterClient()
{}

ResourceCenterClient::AssociateDefaultFilterOutcome ResourceCenterClient::associateDefaultFilter(const AssociateDefaultFilterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateDefaultFilterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateDefaultFilterOutcome(AssociateDefaultFilterResult(outcome.result()));
	else
		return AssociateDefaultFilterOutcome(outcome.error());
}

void ResourceCenterClient::associateDefaultFilterAsync(const AssociateDefaultFilterRequest& request, const AssociateDefaultFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateDefaultFilter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::AssociateDefaultFilterOutcomeCallable ResourceCenterClient::associateDefaultFilterCallable(const AssociateDefaultFilterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateDefaultFilterOutcome()>>(
			[this, request]()
			{
			return this->associateDefaultFilter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::CreateFilterOutcome ResourceCenterClient::createFilter(const CreateFilterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFilterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFilterOutcome(CreateFilterResult(outcome.result()));
	else
		return CreateFilterOutcome(outcome.error());
}

void ResourceCenterClient::createFilterAsync(const CreateFilterRequest& request, const CreateFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFilter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::CreateFilterOutcomeCallable ResourceCenterClient::createFilterCallable(const CreateFilterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFilterOutcome()>>(
			[this, request]()
			{
			return this->createFilter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::CreateSavedQueryOutcome ResourceCenterClient::createSavedQuery(const CreateSavedQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSavedQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSavedQueryOutcome(CreateSavedQueryResult(outcome.result()));
	else
		return CreateSavedQueryOutcome(outcome.error());
}

void ResourceCenterClient::createSavedQueryAsync(const CreateSavedQueryRequest& request, const CreateSavedQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSavedQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::CreateSavedQueryOutcomeCallable ResourceCenterClient::createSavedQueryCallable(const CreateSavedQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSavedQueryOutcome()>>(
			[this, request]()
			{
			return this->createSavedQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::DeleteFilterOutcome ResourceCenterClient::deleteFilter(const DeleteFilterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFilterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFilterOutcome(DeleteFilterResult(outcome.result()));
	else
		return DeleteFilterOutcome(outcome.error());
}

void ResourceCenterClient::deleteFilterAsync(const DeleteFilterRequest& request, const DeleteFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFilter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::DeleteFilterOutcomeCallable ResourceCenterClient::deleteFilterCallable(const DeleteFilterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFilterOutcome()>>(
			[this, request]()
			{
			return this->deleteFilter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::DeleteSavedQueryOutcome ResourceCenterClient::deleteSavedQuery(const DeleteSavedQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSavedQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSavedQueryOutcome(DeleteSavedQueryResult(outcome.result()));
	else
		return DeleteSavedQueryOutcome(outcome.error());
}

void ResourceCenterClient::deleteSavedQueryAsync(const DeleteSavedQueryRequest& request, const DeleteSavedQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSavedQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::DeleteSavedQueryOutcomeCallable ResourceCenterClient::deleteSavedQueryCallable(const DeleteSavedQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSavedQueryOutcome()>>(
			[this, request]()
			{
			return this->deleteSavedQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::DisableMultiAccountResourceCenterOutcome ResourceCenterClient::disableMultiAccountResourceCenter(const DisableMultiAccountResourceCenterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableMultiAccountResourceCenterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableMultiAccountResourceCenterOutcome(DisableMultiAccountResourceCenterResult(outcome.result()));
	else
		return DisableMultiAccountResourceCenterOutcome(outcome.error());
}

void ResourceCenterClient::disableMultiAccountResourceCenterAsync(const DisableMultiAccountResourceCenterRequest& request, const DisableMultiAccountResourceCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableMultiAccountResourceCenter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::DisableMultiAccountResourceCenterOutcomeCallable ResourceCenterClient::disableMultiAccountResourceCenterCallable(const DisableMultiAccountResourceCenterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableMultiAccountResourceCenterOutcome()>>(
			[this, request]()
			{
			return this->disableMultiAccountResourceCenter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::DisableResourceCenterOutcome ResourceCenterClient::disableResourceCenter(const DisableResourceCenterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableResourceCenterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableResourceCenterOutcome(DisableResourceCenterResult(outcome.result()));
	else
		return DisableResourceCenterOutcome(outcome.error());
}

void ResourceCenterClient::disableResourceCenterAsync(const DisableResourceCenterRequest& request, const DisableResourceCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableResourceCenter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::DisableResourceCenterOutcomeCallable ResourceCenterClient::disableResourceCenterCallable(const DisableResourceCenterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableResourceCenterOutcome()>>(
			[this, request]()
			{
			return this->disableResourceCenter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::DisassociateDefaultFilterOutcome ResourceCenterClient::disassociateDefaultFilter(const DisassociateDefaultFilterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisassociateDefaultFilterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisassociateDefaultFilterOutcome(DisassociateDefaultFilterResult(outcome.result()));
	else
		return DisassociateDefaultFilterOutcome(outcome.error());
}

void ResourceCenterClient::disassociateDefaultFilterAsync(const DisassociateDefaultFilterRequest& request, const DisassociateDefaultFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disassociateDefaultFilter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::DisassociateDefaultFilterOutcomeCallable ResourceCenterClient::disassociateDefaultFilterCallable(const DisassociateDefaultFilterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisassociateDefaultFilterOutcome()>>(
			[this, request]()
			{
			return this->disassociateDefaultFilter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::EnableMultiAccountResourceCenterOutcome ResourceCenterClient::enableMultiAccountResourceCenter(const EnableMultiAccountResourceCenterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableMultiAccountResourceCenterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableMultiAccountResourceCenterOutcome(EnableMultiAccountResourceCenterResult(outcome.result()));
	else
		return EnableMultiAccountResourceCenterOutcome(outcome.error());
}

void ResourceCenterClient::enableMultiAccountResourceCenterAsync(const EnableMultiAccountResourceCenterRequest& request, const EnableMultiAccountResourceCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableMultiAccountResourceCenter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::EnableMultiAccountResourceCenterOutcomeCallable ResourceCenterClient::enableMultiAccountResourceCenterCallable(const EnableMultiAccountResourceCenterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableMultiAccountResourceCenterOutcome()>>(
			[this, request]()
			{
			return this->enableMultiAccountResourceCenter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::EnableResourceCenterOutcome ResourceCenterClient::enableResourceCenter(const EnableResourceCenterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableResourceCenterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableResourceCenterOutcome(EnableResourceCenterResult(outcome.result()));
	else
		return EnableResourceCenterOutcome(outcome.error());
}

void ResourceCenterClient::enableResourceCenterAsync(const EnableResourceCenterRequest& request, const EnableResourceCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableResourceCenter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::EnableResourceCenterOutcomeCallable ResourceCenterClient::enableResourceCenterCallable(const EnableResourceCenterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableResourceCenterOutcome()>>(
			[this, request]()
			{
			return this->enableResourceCenter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::ExecuteMultiAccountSQLQueryOutcome ResourceCenterClient::executeMultiAccountSQLQuery(const ExecuteMultiAccountSQLQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteMultiAccountSQLQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteMultiAccountSQLQueryOutcome(ExecuteMultiAccountSQLQueryResult(outcome.result()));
	else
		return ExecuteMultiAccountSQLQueryOutcome(outcome.error());
}

void ResourceCenterClient::executeMultiAccountSQLQueryAsync(const ExecuteMultiAccountSQLQueryRequest& request, const ExecuteMultiAccountSQLQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeMultiAccountSQLQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::ExecuteMultiAccountSQLQueryOutcomeCallable ResourceCenterClient::executeMultiAccountSQLQueryCallable(const ExecuteMultiAccountSQLQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteMultiAccountSQLQueryOutcome()>>(
			[this, request]()
			{
			return this->executeMultiAccountSQLQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::ExecuteSQLQueryOutcome ResourceCenterClient::executeSQLQuery(const ExecuteSQLQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteSQLQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteSQLQueryOutcome(ExecuteSQLQueryResult(outcome.result()));
	else
		return ExecuteSQLQueryOutcome(outcome.error());
}

void ResourceCenterClient::executeSQLQueryAsync(const ExecuteSQLQueryRequest& request, const ExecuteSQLQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeSQLQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::ExecuteSQLQueryOutcomeCallable ResourceCenterClient::executeSQLQueryCallable(const ExecuteSQLQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteSQLQueryOutcome()>>(
			[this, request]()
			{
			return this->executeSQLQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::GetExampleQueryOutcome ResourceCenterClient::getExampleQuery(const GetExampleQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetExampleQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetExampleQueryOutcome(GetExampleQueryResult(outcome.result()));
	else
		return GetExampleQueryOutcome(outcome.error());
}

void ResourceCenterClient::getExampleQueryAsync(const GetExampleQueryRequest& request, const GetExampleQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getExampleQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::GetExampleQueryOutcomeCallable ResourceCenterClient::getExampleQueryCallable(const GetExampleQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetExampleQueryOutcome()>>(
			[this, request]()
			{
			return this->getExampleQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::GetMultiAccountResourceCenterServiceStatusOutcome ResourceCenterClient::getMultiAccountResourceCenterServiceStatus(const GetMultiAccountResourceCenterServiceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMultiAccountResourceCenterServiceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMultiAccountResourceCenterServiceStatusOutcome(GetMultiAccountResourceCenterServiceStatusResult(outcome.result()));
	else
		return GetMultiAccountResourceCenterServiceStatusOutcome(outcome.error());
}

void ResourceCenterClient::getMultiAccountResourceCenterServiceStatusAsync(const GetMultiAccountResourceCenterServiceStatusRequest& request, const GetMultiAccountResourceCenterServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMultiAccountResourceCenterServiceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::GetMultiAccountResourceCenterServiceStatusOutcomeCallable ResourceCenterClient::getMultiAccountResourceCenterServiceStatusCallable(const GetMultiAccountResourceCenterServiceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMultiAccountResourceCenterServiceStatusOutcome()>>(
			[this, request]()
			{
			return this->getMultiAccountResourceCenterServiceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::GetMultiAccountResourceConfigurationOutcome ResourceCenterClient::getMultiAccountResourceConfiguration(const GetMultiAccountResourceConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMultiAccountResourceConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMultiAccountResourceConfigurationOutcome(GetMultiAccountResourceConfigurationResult(outcome.result()));
	else
		return GetMultiAccountResourceConfigurationOutcome(outcome.error());
}

void ResourceCenterClient::getMultiAccountResourceConfigurationAsync(const GetMultiAccountResourceConfigurationRequest& request, const GetMultiAccountResourceConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMultiAccountResourceConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::GetMultiAccountResourceConfigurationOutcomeCallable ResourceCenterClient::getMultiAccountResourceConfigurationCallable(const GetMultiAccountResourceConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMultiAccountResourceConfigurationOutcome()>>(
			[this, request]()
			{
			return this->getMultiAccountResourceConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::GetResourceCenterServiceStatusOutcome ResourceCenterClient::getResourceCenterServiceStatus(const GetResourceCenterServiceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetResourceCenterServiceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetResourceCenterServiceStatusOutcome(GetResourceCenterServiceStatusResult(outcome.result()));
	else
		return GetResourceCenterServiceStatusOutcome(outcome.error());
}

void ResourceCenterClient::getResourceCenterServiceStatusAsync(const GetResourceCenterServiceStatusRequest& request, const GetResourceCenterServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getResourceCenterServiceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::GetResourceCenterServiceStatusOutcomeCallable ResourceCenterClient::getResourceCenterServiceStatusCallable(const GetResourceCenterServiceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetResourceCenterServiceStatusOutcome()>>(
			[this, request]()
			{
			return this->getResourceCenterServiceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::GetResourceConfigurationOutcome ResourceCenterClient::getResourceConfiguration(const GetResourceConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetResourceConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetResourceConfigurationOutcome(GetResourceConfigurationResult(outcome.result()));
	else
		return GetResourceConfigurationOutcome(outcome.error());
}

void ResourceCenterClient::getResourceConfigurationAsync(const GetResourceConfigurationRequest& request, const GetResourceConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getResourceConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::GetResourceConfigurationOutcomeCallable ResourceCenterClient::getResourceConfigurationCallable(const GetResourceConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetResourceConfigurationOutcome()>>(
			[this, request]()
			{
			return this->getResourceConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::GetResourceCountsOutcome ResourceCenterClient::getResourceCounts(const GetResourceCountsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetResourceCountsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetResourceCountsOutcome(GetResourceCountsResult(outcome.result()));
	else
		return GetResourceCountsOutcome(outcome.error());
}

void ResourceCenterClient::getResourceCountsAsync(const GetResourceCountsRequest& request, const GetResourceCountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getResourceCounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::GetResourceCountsOutcomeCallable ResourceCenterClient::getResourceCountsCallable(const GetResourceCountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetResourceCountsOutcome()>>(
			[this, request]()
			{
			return this->getResourceCounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::GetSavedQueryOutcome ResourceCenterClient::getSavedQuery(const GetSavedQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSavedQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSavedQueryOutcome(GetSavedQueryResult(outcome.result()));
	else
		return GetSavedQueryOutcome(outcome.error());
}

void ResourceCenterClient::getSavedQueryAsync(const GetSavedQueryRequest& request, const GetSavedQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSavedQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::GetSavedQueryOutcomeCallable ResourceCenterClient::getSavedQueryCallable(const GetSavedQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSavedQueryOutcome()>>(
			[this, request]()
			{
			return this->getSavedQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::ListExampleQueriesOutcome ResourceCenterClient::listExampleQueries(const ListExampleQueriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListExampleQueriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListExampleQueriesOutcome(ListExampleQueriesResult(outcome.result()));
	else
		return ListExampleQueriesOutcome(outcome.error());
}

void ResourceCenterClient::listExampleQueriesAsync(const ListExampleQueriesRequest& request, const ListExampleQueriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listExampleQueries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::ListExampleQueriesOutcomeCallable ResourceCenterClient::listExampleQueriesCallable(const ListExampleQueriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListExampleQueriesOutcome()>>(
			[this, request]()
			{
			return this->listExampleQueries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::ListFiltersOutcome ResourceCenterClient::listFilters(const ListFiltersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFiltersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFiltersOutcome(ListFiltersResult(outcome.result()));
	else
		return ListFiltersOutcome(outcome.error());
}

void ResourceCenterClient::listFiltersAsync(const ListFiltersRequest& request, const ListFiltersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFilters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::ListFiltersOutcomeCallable ResourceCenterClient::listFiltersCallable(const ListFiltersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFiltersOutcome()>>(
			[this, request]()
			{
			return this->listFilters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::ListMultiAccountResourceGroupsOutcome ResourceCenterClient::listMultiAccountResourceGroups(const ListMultiAccountResourceGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMultiAccountResourceGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMultiAccountResourceGroupsOutcome(ListMultiAccountResourceGroupsResult(outcome.result()));
	else
		return ListMultiAccountResourceGroupsOutcome(outcome.error());
}

void ResourceCenterClient::listMultiAccountResourceGroupsAsync(const ListMultiAccountResourceGroupsRequest& request, const ListMultiAccountResourceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMultiAccountResourceGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::ListMultiAccountResourceGroupsOutcomeCallable ResourceCenterClient::listMultiAccountResourceGroupsCallable(const ListMultiAccountResourceGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMultiAccountResourceGroupsOutcome()>>(
			[this, request]()
			{
			return this->listMultiAccountResourceGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::ListMultiAccountResourceRelationshipsOutcome ResourceCenterClient::listMultiAccountResourceRelationships(const ListMultiAccountResourceRelationshipsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMultiAccountResourceRelationshipsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMultiAccountResourceRelationshipsOutcome(ListMultiAccountResourceRelationshipsResult(outcome.result()));
	else
		return ListMultiAccountResourceRelationshipsOutcome(outcome.error());
}

void ResourceCenterClient::listMultiAccountResourceRelationshipsAsync(const ListMultiAccountResourceRelationshipsRequest& request, const ListMultiAccountResourceRelationshipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMultiAccountResourceRelationships(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::ListMultiAccountResourceRelationshipsOutcomeCallable ResourceCenterClient::listMultiAccountResourceRelationshipsCallable(const ListMultiAccountResourceRelationshipsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMultiAccountResourceRelationshipsOutcome()>>(
			[this, request]()
			{
			return this->listMultiAccountResourceRelationships(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::ListMultiAccountTagKeysOutcome ResourceCenterClient::listMultiAccountTagKeys(const ListMultiAccountTagKeysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMultiAccountTagKeysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMultiAccountTagKeysOutcome(ListMultiAccountTagKeysResult(outcome.result()));
	else
		return ListMultiAccountTagKeysOutcome(outcome.error());
}

void ResourceCenterClient::listMultiAccountTagKeysAsync(const ListMultiAccountTagKeysRequest& request, const ListMultiAccountTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMultiAccountTagKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::ListMultiAccountTagKeysOutcomeCallable ResourceCenterClient::listMultiAccountTagKeysCallable(const ListMultiAccountTagKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMultiAccountTagKeysOutcome()>>(
			[this, request]()
			{
			return this->listMultiAccountTagKeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::ListMultiAccountTagValuesOutcome ResourceCenterClient::listMultiAccountTagValues(const ListMultiAccountTagValuesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMultiAccountTagValuesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMultiAccountTagValuesOutcome(ListMultiAccountTagValuesResult(outcome.result()));
	else
		return ListMultiAccountTagValuesOutcome(outcome.error());
}

void ResourceCenterClient::listMultiAccountTagValuesAsync(const ListMultiAccountTagValuesRequest& request, const ListMultiAccountTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMultiAccountTagValues(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::ListMultiAccountTagValuesOutcomeCallable ResourceCenterClient::listMultiAccountTagValuesCallable(const ListMultiAccountTagValuesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMultiAccountTagValuesOutcome()>>(
			[this, request]()
			{
			return this->listMultiAccountTagValues(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::ListResourceRelationshipsOutcome ResourceCenterClient::listResourceRelationships(const ListResourceRelationshipsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourceRelationshipsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourceRelationshipsOutcome(ListResourceRelationshipsResult(outcome.result()));
	else
		return ListResourceRelationshipsOutcome(outcome.error());
}

void ResourceCenterClient::listResourceRelationshipsAsync(const ListResourceRelationshipsRequest& request, const ListResourceRelationshipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourceRelationships(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::ListResourceRelationshipsOutcomeCallable ResourceCenterClient::listResourceRelationshipsCallable(const ListResourceRelationshipsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourceRelationshipsOutcome()>>(
			[this, request]()
			{
			return this->listResourceRelationships(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::ListResourceTypesOutcome ResourceCenterClient::listResourceTypes(const ListResourceTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourceTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourceTypesOutcome(ListResourceTypesResult(outcome.result()));
	else
		return ListResourceTypesOutcome(outcome.error());
}

void ResourceCenterClient::listResourceTypesAsync(const ListResourceTypesRequest& request, const ListResourceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourceTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::ListResourceTypesOutcomeCallable ResourceCenterClient::listResourceTypesCallable(const ListResourceTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourceTypesOutcome()>>(
			[this, request]()
			{
			return this->listResourceTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::ListSavedQueriesOutcome ResourceCenterClient::listSavedQueries(const ListSavedQueriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSavedQueriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSavedQueriesOutcome(ListSavedQueriesResult(outcome.result()));
	else
		return ListSavedQueriesOutcome(outcome.error());
}

void ResourceCenterClient::listSavedQueriesAsync(const ListSavedQueriesRequest& request, const ListSavedQueriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSavedQueries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::ListSavedQueriesOutcomeCallable ResourceCenterClient::listSavedQueriesCallable(const ListSavedQueriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSavedQueriesOutcome()>>(
			[this, request]()
			{
			return this->listSavedQueries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::ListTagKeysOutcome ResourceCenterClient::listTagKeys(const ListTagKeysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagKeysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagKeysOutcome(ListTagKeysResult(outcome.result()));
	else
		return ListTagKeysOutcome(outcome.error());
}

void ResourceCenterClient::listTagKeysAsync(const ListTagKeysRequest& request, const ListTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::ListTagKeysOutcomeCallable ResourceCenterClient::listTagKeysCallable(const ListTagKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagKeysOutcome()>>(
			[this, request]()
			{
			return this->listTagKeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::ListTagValuesOutcome ResourceCenterClient::listTagValues(const ListTagValuesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagValuesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagValuesOutcome(ListTagValuesResult(outcome.result()));
	else
		return ListTagValuesOutcome(outcome.error());
}

void ResourceCenterClient::listTagValuesAsync(const ListTagValuesRequest& request, const ListTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagValues(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::ListTagValuesOutcomeCallable ResourceCenterClient::listTagValuesCallable(const ListTagValuesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagValuesOutcome()>>(
			[this, request]()
			{
			return this->listTagValues(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::SearchMultiAccountResourcesOutcome ResourceCenterClient::searchMultiAccountResources(const SearchMultiAccountResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchMultiAccountResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchMultiAccountResourcesOutcome(SearchMultiAccountResourcesResult(outcome.result()));
	else
		return SearchMultiAccountResourcesOutcome(outcome.error());
}

void ResourceCenterClient::searchMultiAccountResourcesAsync(const SearchMultiAccountResourcesRequest& request, const SearchMultiAccountResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchMultiAccountResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::SearchMultiAccountResourcesOutcomeCallable ResourceCenterClient::searchMultiAccountResourcesCallable(const SearchMultiAccountResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchMultiAccountResourcesOutcome()>>(
			[this, request]()
			{
			return this->searchMultiAccountResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::SearchResourcesOutcome ResourceCenterClient::searchResources(const SearchResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchResourcesOutcome(SearchResourcesResult(outcome.result()));
	else
		return SearchResourcesOutcome(outcome.error());
}

void ResourceCenterClient::searchResourcesAsync(const SearchResourcesRequest& request, const SearchResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::SearchResourcesOutcomeCallable ResourceCenterClient::searchResourcesCallable(const SearchResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchResourcesOutcome()>>(
			[this, request]()
			{
			return this->searchResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::UpdateFilterOutcome ResourceCenterClient::updateFilter(const UpdateFilterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateFilterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateFilterOutcome(UpdateFilterResult(outcome.result()));
	else
		return UpdateFilterOutcome(outcome.error());
}

void ResourceCenterClient::updateFilterAsync(const UpdateFilterRequest& request, const UpdateFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateFilter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::UpdateFilterOutcomeCallable ResourceCenterClient::updateFilterCallable(const UpdateFilterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateFilterOutcome()>>(
			[this, request]()
			{
			return this->updateFilter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::UpdateSavedQueryOutcome ResourceCenterClient::updateSavedQuery(const UpdateSavedQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSavedQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSavedQueryOutcome(UpdateSavedQueryResult(outcome.result()));
	else
		return UpdateSavedQueryOutcome(outcome.error());
}

void ResourceCenterClient::updateSavedQueryAsync(const UpdateSavedQueryRequest& request, const UpdateSavedQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSavedQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::UpdateSavedQueryOutcomeCallable ResourceCenterClient::updateSavedQueryCallable(const UpdateSavedQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSavedQueryOutcome()>>(
			[this, request]()
			{
			return this->updateSavedQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

