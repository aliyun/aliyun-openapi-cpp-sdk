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

#include <alibabacloud/quotas/QuotasClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Quotas;
using namespace AlibabaCloud::Quotas::Model;

namespace
{
	const std::string SERVICE_NAME = "quotas";
}

QuotasClient::QuotasClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "quotas");
}

QuotasClient::QuotasClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "quotas");
}

QuotasClient::QuotasClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "quotas");
}

QuotasClient::~QuotasClient()
{}

QuotasClient::CreateQuotaAlarmOutcome QuotasClient::createQuotaAlarm(const CreateQuotaAlarmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateQuotaAlarmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateQuotaAlarmOutcome(CreateQuotaAlarmResult(outcome.result()));
	else
		return CreateQuotaAlarmOutcome(outcome.error());
}

void QuotasClient::createQuotaAlarmAsync(const CreateQuotaAlarmRequest& request, const CreateQuotaAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createQuotaAlarm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QuotasClient::CreateQuotaAlarmOutcomeCallable QuotasClient::createQuotaAlarmCallable(const CreateQuotaAlarmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateQuotaAlarmOutcome()>>(
			[this, request]()
			{
			return this->createQuotaAlarm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QuotasClient::CreateQuotaApplicationOutcome QuotasClient::createQuotaApplication(const CreateQuotaApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateQuotaApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateQuotaApplicationOutcome(CreateQuotaApplicationResult(outcome.result()));
	else
		return CreateQuotaApplicationOutcome(outcome.error());
}

void QuotasClient::createQuotaApplicationAsync(const CreateQuotaApplicationRequest& request, const CreateQuotaApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createQuotaApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QuotasClient::CreateQuotaApplicationOutcomeCallable QuotasClient::createQuotaApplicationCallable(const CreateQuotaApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateQuotaApplicationOutcome()>>(
			[this, request]()
			{
			return this->createQuotaApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QuotasClient::DeleteQuotaAlarmOutcome QuotasClient::deleteQuotaAlarm(const DeleteQuotaAlarmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteQuotaAlarmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteQuotaAlarmOutcome(DeleteQuotaAlarmResult(outcome.result()));
	else
		return DeleteQuotaAlarmOutcome(outcome.error());
}

void QuotasClient::deleteQuotaAlarmAsync(const DeleteQuotaAlarmRequest& request, const DeleteQuotaAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteQuotaAlarm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QuotasClient::DeleteQuotaAlarmOutcomeCallable QuotasClient::deleteQuotaAlarmCallable(const DeleteQuotaAlarmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteQuotaAlarmOutcome()>>(
			[this, request]()
			{
			return this->deleteQuotaAlarm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QuotasClient::GetProductQuotaOutcome QuotasClient::getProductQuota(const GetProductQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProductQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProductQuotaOutcome(GetProductQuotaResult(outcome.result()));
	else
		return GetProductQuotaOutcome(outcome.error());
}

void QuotasClient::getProductQuotaAsync(const GetProductQuotaRequest& request, const GetProductQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProductQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QuotasClient::GetProductQuotaOutcomeCallable QuotasClient::getProductQuotaCallable(const GetProductQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProductQuotaOutcome()>>(
			[this, request]()
			{
			return this->getProductQuota(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QuotasClient::GetProductQuotaDimensionOutcome QuotasClient::getProductQuotaDimension(const GetProductQuotaDimensionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProductQuotaDimensionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProductQuotaDimensionOutcome(GetProductQuotaDimensionResult(outcome.result()));
	else
		return GetProductQuotaDimensionOutcome(outcome.error());
}

void QuotasClient::getProductQuotaDimensionAsync(const GetProductQuotaDimensionRequest& request, const GetProductQuotaDimensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProductQuotaDimension(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QuotasClient::GetProductQuotaDimensionOutcomeCallable QuotasClient::getProductQuotaDimensionCallable(const GetProductQuotaDimensionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProductQuotaDimensionOutcome()>>(
			[this, request]()
			{
			return this->getProductQuotaDimension(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QuotasClient::GetQuotaAlarmOutcome QuotasClient::getQuotaAlarm(const GetQuotaAlarmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetQuotaAlarmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetQuotaAlarmOutcome(GetQuotaAlarmResult(outcome.result()));
	else
		return GetQuotaAlarmOutcome(outcome.error());
}

void QuotasClient::getQuotaAlarmAsync(const GetQuotaAlarmRequest& request, const GetQuotaAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getQuotaAlarm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QuotasClient::GetQuotaAlarmOutcomeCallable QuotasClient::getQuotaAlarmCallable(const GetQuotaAlarmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetQuotaAlarmOutcome()>>(
			[this, request]()
			{
			return this->getQuotaAlarm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QuotasClient::GetQuotaApplicationOutcome QuotasClient::getQuotaApplication(const GetQuotaApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetQuotaApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetQuotaApplicationOutcome(GetQuotaApplicationResult(outcome.result()));
	else
		return GetQuotaApplicationOutcome(outcome.error());
}

void QuotasClient::getQuotaApplicationAsync(const GetQuotaApplicationRequest& request, const GetQuotaApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getQuotaApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QuotasClient::GetQuotaApplicationOutcomeCallable QuotasClient::getQuotaApplicationCallable(const GetQuotaApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetQuotaApplicationOutcome()>>(
			[this, request]()
			{
			return this->getQuotaApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QuotasClient::ListAlarmHistoriesOutcome QuotasClient::listAlarmHistories(const ListAlarmHistoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAlarmHistoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAlarmHistoriesOutcome(ListAlarmHistoriesResult(outcome.result()));
	else
		return ListAlarmHistoriesOutcome(outcome.error());
}

void QuotasClient::listAlarmHistoriesAsync(const ListAlarmHistoriesRequest& request, const ListAlarmHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAlarmHistories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QuotasClient::ListAlarmHistoriesOutcomeCallable QuotasClient::listAlarmHistoriesCallable(const ListAlarmHistoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAlarmHistoriesOutcome()>>(
			[this, request]()
			{
			return this->listAlarmHistories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QuotasClient::ListDependentQuotasOutcome QuotasClient::listDependentQuotas(const ListDependentQuotasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDependentQuotasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDependentQuotasOutcome(ListDependentQuotasResult(outcome.result()));
	else
		return ListDependentQuotasOutcome(outcome.error());
}

void QuotasClient::listDependentQuotasAsync(const ListDependentQuotasRequest& request, const ListDependentQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDependentQuotas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QuotasClient::ListDependentQuotasOutcomeCallable QuotasClient::listDependentQuotasCallable(const ListDependentQuotasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDependentQuotasOutcome()>>(
			[this, request]()
			{
			return this->listDependentQuotas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QuotasClient::ListProductDimensionGroupsOutcome QuotasClient::listProductDimensionGroups(const ListProductDimensionGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProductDimensionGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProductDimensionGroupsOutcome(ListProductDimensionGroupsResult(outcome.result()));
	else
		return ListProductDimensionGroupsOutcome(outcome.error());
}

void QuotasClient::listProductDimensionGroupsAsync(const ListProductDimensionGroupsRequest& request, const ListProductDimensionGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProductDimensionGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QuotasClient::ListProductDimensionGroupsOutcomeCallable QuotasClient::listProductDimensionGroupsCallable(const ListProductDimensionGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProductDimensionGroupsOutcome()>>(
			[this, request]()
			{
			return this->listProductDimensionGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QuotasClient::ListProductQuotaDimensionsOutcome QuotasClient::listProductQuotaDimensions(const ListProductQuotaDimensionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProductQuotaDimensionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProductQuotaDimensionsOutcome(ListProductQuotaDimensionsResult(outcome.result()));
	else
		return ListProductQuotaDimensionsOutcome(outcome.error());
}

void QuotasClient::listProductQuotaDimensionsAsync(const ListProductQuotaDimensionsRequest& request, const ListProductQuotaDimensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProductQuotaDimensions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QuotasClient::ListProductQuotaDimensionsOutcomeCallable QuotasClient::listProductQuotaDimensionsCallable(const ListProductQuotaDimensionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProductQuotaDimensionsOutcome()>>(
			[this, request]()
			{
			return this->listProductQuotaDimensions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QuotasClient::ListProductQuotasOutcome QuotasClient::listProductQuotas(const ListProductQuotasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProductQuotasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProductQuotasOutcome(ListProductQuotasResult(outcome.result()));
	else
		return ListProductQuotasOutcome(outcome.error());
}

void QuotasClient::listProductQuotasAsync(const ListProductQuotasRequest& request, const ListProductQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProductQuotas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QuotasClient::ListProductQuotasOutcomeCallable QuotasClient::listProductQuotasCallable(const ListProductQuotasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProductQuotasOutcome()>>(
			[this, request]()
			{
			return this->listProductQuotas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QuotasClient::ListProductsOutcome QuotasClient::listProducts(const ListProductsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProductsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProductsOutcome(ListProductsResult(outcome.result()));
	else
		return ListProductsOutcome(outcome.error());
}

void QuotasClient::listProductsAsync(const ListProductsRequest& request, const ListProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProducts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QuotasClient::ListProductsOutcomeCallable QuotasClient::listProductsCallable(const ListProductsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProductsOutcome()>>(
			[this, request]()
			{
			return this->listProducts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QuotasClient::ListQuotaAlarmsOutcome QuotasClient::listQuotaAlarms(const ListQuotaAlarmsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListQuotaAlarmsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListQuotaAlarmsOutcome(ListQuotaAlarmsResult(outcome.result()));
	else
		return ListQuotaAlarmsOutcome(outcome.error());
}

void QuotasClient::listQuotaAlarmsAsync(const ListQuotaAlarmsRequest& request, const ListQuotaAlarmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listQuotaAlarms(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QuotasClient::ListQuotaAlarmsOutcomeCallable QuotasClient::listQuotaAlarmsCallable(const ListQuotaAlarmsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListQuotaAlarmsOutcome()>>(
			[this, request]()
			{
			return this->listQuotaAlarms(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QuotasClient::ListQuotaApplicationsOutcome QuotasClient::listQuotaApplications(const ListQuotaApplicationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListQuotaApplicationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListQuotaApplicationsOutcome(ListQuotaApplicationsResult(outcome.result()));
	else
		return ListQuotaApplicationsOutcome(outcome.error());
}

void QuotasClient::listQuotaApplicationsAsync(const ListQuotaApplicationsRequest& request, const ListQuotaApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listQuotaApplications(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QuotasClient::ListQuotaApplicationsOutcomeCallable QuotasClient::listQuotaApplicationsCallable(const ListQuotaApplicationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListQuotaApplicationsOutcome()>>(
			[this, request]()
			{
			return this->listQuotaApplications(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QuotasClient::UpdateQuotaAlarmOutcome QuotasClient::updateQuotaAlarm(const UpdateQuotaAlarmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateQuotaAlarmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateQuotaAlarmOutcome(UpdateQuotaAlarmResult(outcome.result()));
	else
		return UpdateQuotaAlarmOutcome(outcome.error());
}

void QuotasClient::updateQuotaAlarmAsync(const UpdateQuotaAlarmRequest& request, const UpdateQuotaAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateQuotaAlarm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QuotasClient::UpdateQuotaAlarmOutcomeCallable QuotasClient::updateQuotaAlarmCallable(const UpdateQuotaAlarmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateQuotaAlarmOutcome()>>(
			[this, request]()
			{
			return this->updateQuotaAlarm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

