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

#include <alibabacloud/bssopenapi/BssOpenApiClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

namespace
{
	const std::string SERVICE_NAME = "BssOpenApi";
}

BssOpenApiClient::BssOpenApiClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

BssOpenApiClient::BssOpenApiClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

BssOpenApiClient::BssOpenApiClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

BssOpenApiClient::~BssOpenApiClient()
{}

BssOpenApiClient::QueryMonthlyBillOutcome BssOpenApiClient::queryMonthlyBill(const QueryMonthlyBillRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMonthlyBillOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMonthlyBillOutcome(QueryMonthlyBillResult(outcome.result()));
	else
		return QueryMonthlyBillOutcome(outcome.error());
}

void BssOpenApiClient::queryMonthlyBillAsync(const QueryMonthlyBillRequest& request, const QueryMonthlyBillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMonthlyBill(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryMonthlyBillOutcomeCallable BssOpenApiClient::queryMonthlyBillCallable(const QueryMonthlyBillRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMonthlyBillOutcome()>>(
			[this, request]()
			{
			return this->queryMonthlyBill(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::CreateUserQuotaOutcome BssOpenApiClient::createUserQuota(const CreateUserQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUserQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUserQuotaOutcome(CreateUserQuotaResult(outcome.result()));
	else
		return CreateUserQuotaOutcome(outcome.error());
}

void BssOpenApiClient::createUserQuotaAsync(const CreateUserQuotaRequest& request, const CreateUserQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUserQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::CreateUserQuotaOutcomeCallable BssOpenApiClient::createUserQuotaCallable(const CreateUserQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserQuotaOutcome()>>(
			[this, request]()
			{
			return this->createUserQuota(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::CreateInstanceOutcome BssOpenApiClient::createInstance(const CreateInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateInstanceOutcome(CreateInstanceResult(outcome.result()));
	else
		return CreateInstanceOutcome(outcome.error());
}

void BssOpenApiClient::createInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::CreateInstanceOutcomeCallable BssOpenApiClient::createInstanceCallable(const CreateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
			[this, request]()
			{
			return this->createInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::CancelOrderOutcome BssOpenApiClient::cancelOrder(const CancelOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelOrderOutcome(CancelOrderResult(outcome.result()));
	else
		return CancelOrderOutcome(outcome.error());
}

void BssOpenApiClient::cancelOrderAsync(const CancelOrderRequest& request, const CancelOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::CancelOrderOutcomeCallable BssOpenApiClient::cancelOrderCallable(const CancelOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelOrderOutcome()>>(
			[this, request]()
			{
			return this->cancelOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::QueryResourcePackageInstancesOutcome BssOpenApiClient::queryResourcePackageInstances(const QueryResourcePackageInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryResourcePackageInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryResourcePackageInstancesOutcome(QueryResourcePackageInstancesResult(outcome.result()));
	else
		return QueryResourcePackageInstancesOutcome(outcome.error());
}

void BssOpenApiClient::queryResourcePackageInstancesAsync(const QueryResourcePackageInstancesRequest& request, const QueryResourcePackageInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryResourcePackageInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryResourcePackageInstancesOutcomeCallable BssOpenApiClient::queryResourcePackageInstancesCallable(const QueryResourcePackageInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryResourcePackageInstancesOutcome()>>(
			[this, request]()
			{
			return this->queryResourcePackageInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::QueryUserAlarmThresholdOutcome BssOpenApiClient::queryUserAlarmThreshold(const QueryUserAlarmThresholdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryUserAlarmThresholdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryUserAlarmThresholdOutcome(QueryUserAlarmThresholdResult(outcome.result()));
	else
		return QueryUserAlarmThresholdOutcome(outcome.error());
}

void BssOpenApiClient::queryUserAlarmThresholdAsync(const QueryUserAlarmThresholdRequest& request, const QueryUserAlarmThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryUserAlarmThreshold(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryUserAlarmThresholdOutcomeCallable BssOpenApiClient::queryUserAlarmThresholdCallable(const QueryUserAlarmThresholdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryUserAlarmThresholdOutcome()>>(
			[this, request]()
			{
			return this->queryUserAlarmThreshold(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::SubscribeDetailOutcome BssOpenApiClient::subscribeDetail(const SubscribeDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubscribeDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubscribeDetailOutcome(SubscribeDetailResult(outcome.result()));
	else
		return SubscribeDetailOutcome(outcome.error());
}

void BssOpenApiClient::subscribeDetailAsync(const SubscribeDetailRequest& request, const SubscribeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, subscribeDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::SubscribeDetailOutcomeCallable BssOpenApiClient::subscribeDetailCallable(const SubscribeDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubscribeDetailOutcome()>>(
			[this, request]()
			{
			return this->subscribeDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::EnableBillGenerationOutcome BssOpenApiClient::enableBillGeneration(const EnableBillGenerationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableBillGenerationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableBillGenerationOutcome(EnableBillGenerationResult(outcome.result()));
	else
		return EnableBillGenerationOutcome(outcome.error());
}

void BssOpenApiClient::enableBillGenerationAsync(const EnableBillGenerationRequest& request, const EnableBillGenerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableBillGeneration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::EnableBillGenerationOutcomeCallable BssOpenApiClient::enableBillGenerationCallable(const EnableBillGenerationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableBillGenerationOutcome()>>(
			[this, request]()
			{
			return this->enableBillGeneration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::SetEnduserStatusOutcome BssOpenApiClient::setEnduserStatus(const SetEnduserStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetEnduserStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetEnduserStatusOutcome(SetEnduserStatusResult(outcome.result()));
	else
		return SetEnduserStatusOutcome(outcome.error());
}

void BssOpenApiClient::setEnduserStatusAsync(const SetEnduserStatusRequest& request, const SetEnduserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setEnduserStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::SetEnduserStatusOutcomeCallable BssOpenApiClient::setEnduserStatusCallable(const SetEnduserStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetEnduserStatusOutcome()>>(
			[this, request]()
			{
			return this->setEnduserStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::QueryInvoicingCustomerListOutcome BssOpenApiClient::queryInvoicingCustomerList(const QueryInvoicingCustomerListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryInvoicingCustomerListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryInvoicingCustomerListOutcome(QueryInvoicingCustomerListResult(outcome.result()));
	else
		return QueryInvoicingCustomerListOutcome(outcome.error());
}

void BssOpenApiClient::queryInvoicingCustomerListAsync(const QueryInvoicingCustomerListRequest& request, const QueryInvoicingCustomerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryInvoicingCustomerList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryInvoicingCustomerListOutcomeCallable BssOpenApiClient::queryInvoicingCustomerListCallable(const QueryInvoicingCustomerListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryInvoicingCustomerListOutcome()>>(
			[this, request]()
			{
			return this->queryInvoicingCustomerList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::QueryAccountBalanceOutcome BssOpenApiClient::queryAccountBalance(const QueryAccountBalanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAccountBalanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAccountBalanceOutcome(QueryAccountBalanceResult(outcome.result()));
	else
		return QueryAccountBalanceOutcome(outcome.error());
}

void BssOpenApiClient::queryAccountBalanceAsync(const QueryAccountBalanceRequest& request, const QueryAccountBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAccountBalance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryAccountBalanceOutcomeCallable BssOpenApiClient::queryAccountBalanceCallable(const QueryAccountBalanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAccountBalanceOutcome()>>(
			[this, request]()
			{
			return this->queryAccountBalance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::RenewInstanceOutcome BssOpenApiClient::renewInstance(const RenewInstanceRequest &request) const
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

void BssOpenApiClient::renewInstanceAsync(const RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::RenewInstanceOutcomeCallable BssOpenApiClient::renewInstanceCallable(const RenewInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewInstanceOutcome()>>(
			[this, request]()
			{
			return this->renewInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::QueryInstanceGaapCostOutcome BssOpenApiClient::queryInstanceGaapCost(const QueryInstanceGaapCostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryInstanceGaapCostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryInstanceGaapCostOutcome(QueryInstanceGaapCostResult(outcome.result()));
	else
		return QueryInstanceGaapCostOutcome(outcome.error());
}

void BssOpenApiClient::queryInstanceGaapCostAsync(const QueryInstanceGaapCostRequest& request, const QueryInstanceGaapCostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryInstanceGaapCost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryInstanceGaapCostOutcomeCallable BssOpenApiClient::queryInstanceGaapCostCallable(const QueryInstanceGaapCostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryInstanceGaapCostOutcome()>>(
			[this, request]()
			{
			return this->queryInstanceGaapCost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::QueryMonthlyInstanceConsumptionOutcome BssOpenApiClient::queryMonthlyInstanceConsumption(const QueryMonthlyInstanceConsumptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMonthlyInstanceConsumptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMonthlyInstanceConsumptionOutcome(QueryMonthlyInstanceConsumptionResult(outcome.result()));
	else
		return QueryMonthlyInstanceConsumptionOutcome(outcome.error());
}

void BssOpenApiClient::queryMonthlyInstanceConsumptionAsync(const QueryMonthlyInstanceConsumptionRequest& request, const QueryMonthlyInstanceConsumptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMonthlyInstanceConsumption(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryMonthlyInstanceConsumptionOutcomeCallable BssOpenApiClient::queryMonthlyInstanceConsumptionCallable(const QueryMonthlyInstanceConsumptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMonthlyInstanceConsumptionOutcome()>>(
			[this, request]()
			{
			return this->queryMonthlyInstanceConsumption(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::QueryPrepaidCardsOutcome BssOpenApiClient::queryPrepaidCards(const QueryPrepaidCardsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryPrepaidCardsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryPrepaidCardsOutcome(QueryPrepaidCardsResult(outcome.result()));
	else
		return QueryPrepaidCardsOutcome(outcome.error());
}

void BssOpenApiClient::queryPrepaidCardsAsync(const QueryPrepaidCardsRequest& request, const QueryPrepaidCardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryPrepaidCards(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryPrepaidCardsOutcomeCallable BssOpenApiClient::queryPrepaidCardsCallable(const QueryPrepaidCardsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryPrepaidCardsOutcome()>>(
			[this, request]()
			{
			return this->queryPrepaidCards(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::QueryAvailableInstancesOutcome BssOpenApiClient::queryAvailableInstances(const QueryAvailableInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAvailableInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAvailableInstancesOutcome(QueryAvailableInstancesResult(outcome.result()));
	else
		return QueryAvailableInstancesOutcome(outcome.error());
}

void BssOpenApiClient::queryAvailableInstancesAsync(const QueryAvailableInstancesRequest& request, const QueryAvailableInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAvailableInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryAvailableInstancesOutcomeCallable BssOpenApiClient::queryAvailableInstancesCallable(const QueryAvailableInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAvailableInstancesOutcome()>>(
			[this, request]()
			{
			return this->queryAvailableInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::GetOrderDetailOutcome BssOpenApiClient::getOrderDetail(const GetOrderDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOrderDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOrderDetailOutcome(GetOrderDetailResult(outcome.result()));
	else
		return GetOrderDetailOutcome(outcome.error());
}

void BssOpenApiClient::getOrderDetailAsync(const GetOrderDetailRequest& request, const GetOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOrderDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::GetOrderDetailOutcomeCallable BssOpenApiClient::getOrderDetailCallable(const GetOrderDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOrderDetailOutcome()>>(
			[this, request]()
			{
			return this->getOrderDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::QueryEnduserStatusOutcome BssOpenApiClient::queryEnduserStatus(const QueryEnduserStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEnduserStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEnduserStatusOutcome(QueryEnduserStatusResult(outcome.result()));
	else
		return QueryEnduserStatusOutcome(outcome.error());
}

void BssOpenApiClient::queryEnduserStatusAsync(const QueryEnduserStatusRequest& request, const QueryEnduserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEnduserStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryEnduserStatusOutcomeCallable BssOpenApiClient::queryEnduserStatusCallable(const QueryEnduserStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEnduserStatusOutcome()>>(
			[this, request]()
			{
			return this->queryEnduserStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::ModifyInstanceOutcome BssOpenApiClient::modifyInstance(const ModifyInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceOutcome(ModifyInstanceResult(outcome.result()));
	else
		return ModifyInstanceOutcome(outcome.error());
}

void BssOpenApiClient::modifyInstanceAsync(const ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::ModifyInstanceOutcomeCallable BssOpenApiClient::modifyInstanceCallable(const ModifyInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceOutcome()>>(
			[this, request]()
			{
			return this->modifyInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::QueryCustomerAddressListOutcome BssOpenApiClient::queryCustomerAddressList(const QueryCustomerAddressListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCustomerAddressListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCustomerAddressListOutcome(QueryCustomerAddressListResult(outcome.result()));
	else
		return QueryCustomerAddressListOutcome(outcome.error());
}

void BssOpenApiClient::queryCustomerAddressListAsync(const QueryCustomerAddressListRequest& request, const QueryCustomerAddressListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCustomerAddressList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryCustomerAddressListOutcomeCallable BssOpenApiClient::queryCustomerAddressListCallable(const QueryCustomerAddressListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCustomerAddressListOutcome()>>(
			[this, request]()
			{
			return this->queryCustomerAddressList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::SetUserQuotaOutcome BssOpenApiClient::setUserQuota(const SetUserQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetUserQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetUserQuotaOutcome(SetUserQuotaResult(outcome.result()));
	else
		return SetUserQuotaOutcome(outcome.error());
}

void BssOpenApiClient::setUserQuotaAsync(const SetUserQuotaRequest& request, const SetUserQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setUserQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::SetUserQuotaOutcomeCallable BssOpenApiClient::setUserQuotaCallable(const SetUserQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetUserQuotaOutcome()>>(
			[this, request]()
			{
			return this->setUserQuota(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::UnsubscribeExportToOSSOutcome BssOpenApiClient::unsubscribeExportToOSS(const UnsubscribeExportToOSSRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnsubscribeExportToOSSOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnsubscribeExportToOSSOutcome(UnsubscribeExportToOSSResult(outcome.result()));
	else
		return UnsubscribeExportToOSSOutcome(outcome.error());
}

void BssOpenApiClient::unsubscribeExportToOSSAsync(const UnsubscribeExportToOSSRequest& request, const UnsubscribeExportToOSSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unsubscribeExportToOSS(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::UnsubscribeExportToOSSOutcomeCallable BssOpenApiClient::unsubscribeExportToOSSCallable(const UnsubscribeExportToOSSRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnsubscribeExportToOSSOutcome()>>(
			[this, request]()
			{
			return this->unsubscribeExportToOSS(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::QueryPriceListOutcome BssOpenApiClient::queryPriceList(const QueryPriceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryPriceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryPriceListOutcome(QueryPriceListResult(outcome.result()));
	else
		return QueryPriceListOutcome(outcome.error());
}

void BssOpenApiClient::queryPriceListAsync(const QueryPriceListRequest& request, const QueryPriceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryPriceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryPriceListOutcomeCallable BssOpenApiClient::queryPriceListCallable(const QueryPriceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryPriceListOutcome()>>(
			[this, request]()
			{
			return this->queryPriceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::QueryRedeemOutcome BssOpenApiClient::queryRedeem(const QueryRedeemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRedeemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRedeemOutcome(QueryRedeemResult(outcome.result()));
	else
		return QueryRedeemOutcome(outcome.error());
}

void BssOpenApiClient::queryRedeemAsync(const QueryRedeemRequest& request, const QueryRedeemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRedeem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryRedeemOutcomeCallable BssOpenApiClient::queryRedeemCallable(const QueryRedeemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRedeemOutcome()>>(
			[this, request]()
			{
			return this->queryRedeem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::SubscribeBillToOSSOutcome BssOpenApiClient::subscribeBillToOSS(const SubscribeBillToOSSRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubscribeBillToOSSOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubscribeBillToOSSOutcome(SubscribeBillToOSSResult(outcome.result()));
	else
		return SubscribeBillToOSSOutcome(outcome.error());
}

void BssOpenApiClient::subscribeBillToOSSAsync(const SubscribeBillToOSSRequest& request, const SubscribeBillToOSSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, subscribeBillToOSS(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::SubscribeBillToOSSOutcomeCallable BssOpenApiClient::subscribeBillToOSSCallable(const SubscribeBillToOSSRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubscribeBillToOSSOutcome()>>(
			[this, request]()
			{
			return this->subscribeBillToOSS(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::GetPayAsYouGoPriceOutcome BssOpenApiClient::getPayAsYouGoPrice(const GetPayAsYouGoPriceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPayAsYouGoPriceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPayAsYouGoPriceOutcome(GetPayAsYouGoPriceResult(outcome.result()));
	else
		return GetPayAsYouGoPriceOutcome(outcome.error());
}

void BssOpenApiClient::getPayAsYouGoPriceAsync(const GetPayAsYouGoPriceRequest& request, const GetPayAsYouGoPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPayAsYouGoPrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::GetPayAsYouGoPriceOutcomeCallable BssOpenApiClient::getPayAsYouGoPriceCallable(const GetPayAsYouGoPriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPayAsYouGoPriceOutcome()>>(
			[this, request]()
			{
			return this->getPayAsYouGoPrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::GetResourcePackagePriceOutcome BssOpenApiClient::getResourcePackagePrice(const GetResourcePackagePriceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetResourcePackagePriceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetResourcePackagePriceOutcome(GetResourcePackagePriceResult(outcome.result()));
	else
		return GetResourcePackagePriceOutcome(outcome.error());
}

void BssOpenApiClient::getResourcePackagePriceAsync(const GetResourcePackagePriceRequest& request, const GetResourcePackagePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getResourcePackagePrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::GetResourcePackagePriceOutcomeCallable BssOpenApiClient::getResourcePackagePriceCallable(const GetResourcePackagePriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetResourcePackagePriceOutcome()>>(
			[this, request]()
			{
			return this->getResourcePackagePrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::UnsubscribeBillToOSSOutcome BssOpenApiClient::unsubscribeBillToOSS(const UnsubscribeBillToOSSRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnsubscribeBillToOSSOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnsubscribeBillToOSSOutcome(UnsubscribeBillToOSSResult(outcome.result()));
	else
		return UnsubscribeBillToOSSOutcome(outcome.error());
}

void BssOpenApiClient::unsubscribeBillToOSSAsync(const UnsubscribeBillToOSSRequest& request, const UnsubscribeBillToOSSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unsubscribeBillToOSS(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::UnsubscribeBillToOSSOutcomeCallable BssOpenApiClient::unsubscribeBillToOSSCallable(const UnsubscribeBillToOSSRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnsubscribeBillToOSSOutcome()>>(
			[this, request]()
			{
			return this->unsubscribeBillToOSS(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::ChangeConsumeAmountOutcome BssOpenApiClient::changeConsumeAmount(const ChangeConsumeAmountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeConsumeAmountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeConsumeAmountOutcome(ChangeConsumeAmountResult(outcome.result()));
	else
		return ChangeConsumeAmountOutcome(outcome.error());
}

void BssOpenApiClient::changeConsumeAmountAsync(const ChangeConsumeAmountRequest& request, const ChangeConsumeAmountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeConsumeAmount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::ChangeConsumeAmountOutcomeCallable BssOpenApiClient::changeConsumeAmountCallable(const ChangeConsumeAmountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeConsumeAmountOutcome()>>(
			[this, request]()
			{
			return this->changeConsumeAmount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::ApplyInvoiceOutcome BssOpenApiClient::applyInvoice(const ApplyInvoiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApplyInvoiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApplyInvoiceOutcome(ApplyInvoiceResult(outcome.result()));
	else
		return ApplyInvoiceOutcome(outcome.error());
}

void BssOpenApiClient::applyInvoiceAsync(const ApplyInvoiceRequest& request, const ApplyInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, applyInvoice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::ApplyInvoiceOutcomeCallable BssOpenApiClient::applyInvoiceCallable(const ApplyInvoiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApplyInvoiceOutcome()>>(
			[this, request]()
			{
			return this->applyInvoice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::QueryProductListOutcome BssOpenApiClient::queryProductList(const QueryProductListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryProductListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryProductListOutcome(QueryProductListResult(outcome.result()));
	else
		return QueryProductListOutcome(outcome.error());
}

void BssOpenApiClient::queryProductListAsync(const QueryProductListRequest& request, const QueryProductListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryProductList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryProductListOutcomeCallable BssOpenApiClient::queryProductListCallable(const QueryProductListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryProductListOutcome()>>(
			[this, request]()
			{
			return this->queryProductList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::SetUserAlarmThresholdOutcome BssOpenApiClient::setUserAlarmThreshold(const SetUserAlarmThresholdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetUserAlarmThresholdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetUserAlarmThresholdOutcome(SetUserAlarmThresholdResult(outcome.result()));
	else
		return SetUserAlarmThresholdOutcome(outcome.error());
}

void BssOpenApiClient::setUserAlarmThresholdAsync(const SetUserAlarmThresholdRequest& request, const SetUserAlarmThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setUserAlarmThreshold(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::SetUserAlarmThresholdOutcomeCallable BssOpenApiClient::setUserAlarmThresholdCallable(const SetUserAlarmThresholdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetUserAlarmThresholdOutcome()>>(
			[this, request]()
			{
			return this->setUserAlarmThreshold(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::GetSubscriptionPriceOutcome BssOpenApiClient::getSubscriptionPrice(const GetSubscriptionPriceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSubscriptionPriceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSubscriptionPriceOutcome(GetSubscriptionPriceResult(outcome.result()));
	else
		return GetSubscriptionPriceOutcome(outcome.error());
}

void BssOpenApiClient::getSubscriptionPriceAsync(const GetSubscriptionPriceRequest& request, const GetSubscriptionPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSubscriptionPrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::GetSubscriptionPriceOutcomeCallable BssOpenApiClient::getSubscriptionPriceCallable(const GetSubscriptionPriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSubscriptionPriceOutcome()>>(
			[this, request]()
			{
			return this->getSubscriptionPrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::QueryAccountBookListOutcome BssOpenApiClient::queryAccountBookList(const QueryAccountBookListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAccountBookListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAccountBookListOutcome(QueryAccountBookListResult(outcome.result()));
	else
		return QueryAccountBookListOutcome(outcome.error());
}

void BssOpenApiClient::queryAccountBookListAsync(const QueryAccountBookListRequest& request, const QueryAccountBookListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAccountBookList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryAccountBookListOutcomeCallable BssOpenApiClient::queryAccountBookListCallable(const QueryAccountBookListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAccountBookListOutcome()>>(
			[this, request]()
			{
			return this->queryAccountBookList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::QueryOrdersOutcome BssOpenApiClient::queryOrders(const QueryOrdersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryOrdersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryOrdersOutcome(QueryOrdersResult(outcome.result()));
	else
		return QueryOrdersOutcome(outcome.error());
}

void BssOpenApiClient::queryOrdersAsync(const QueryOrdersRequest& request, const QueryOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryOrders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryOrdersOutcomeCallable BssOpenApiClient::queryOrdersCallable(const QueryOrdersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryOrdersOutcome()>>(
			[this, request]()
			{
			return this->queryOrders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::QueryCashCouponsOutcome BssOpenApiClient::queryCashCoupons(const QueryCashCouponsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCashCouponsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCashCouponsOutcome(QueryCashCouponsResult(outcome.result()));
	else
		return QueryCashCouponsOutcome(outcome.error());
}

void BssOpenApiClient::queryCashCouponsAsync(const QueryCashCouponsRequest& request, const QueryCashCouponsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCashCoupons(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryCashCouponsOutcomeCallable BssOpenApiClient::queryCashCouponsCallable(const QueryCashCouponsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCashCouponsOutcome()>>(
			[this, request]()
			{
			return this->queryCashCoupons(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::QueryEvaluateListOutcome BssOpenApiClient::queryEvaluateList(const QueryEvaluateListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEvaluateListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEvaluateListOutcome(QueryEvaluateListResult(outcome.result()));
	else
		return QueryEvaluateListOutcome(outcome.error());
}

void BssOpenApiClient::queryEvaluateListAsync(const QueryEvaluateListRequest& request, const QueryEvaluateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEvaluateList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryEvaluateListOutcomeCallable BssOpenApiClient::queryEvaluateListCallable(const QueryEvaluateListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEvaluateListOutcome()>>(
			[this, request]()
			{
			return this->queryEvaluateList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::DescribePricingModuleOutcome BssOpenApiClient::describePricingModule(const DescribePricingModuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePricingModuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePricingModuleOutcome(DescribePricingModuleResult(outcome.result()));
	else
		return DescribePricingModuleOutcome(outcome.error());
}

void BssOpenApiClient::describePricingModuleAsync(const DescribePricingModuleRequest& request, const DescribePricingModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePricingModule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::DescribePricingModuleOutcomeCallable BssOpenApiClient::describePricingModuleCallable(const DescribePricingModuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePricingModuleOutcome()>>(
			[this, request]()
			{
			return this->describePricingModule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::DescribeResourcePackageProductOutcome BssOpenApiClient::describeResourcePackageProduct(const DescribeResourcePackageProductRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeResourcePackageProductOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeResourcePackageProductOutcome(DescribeResourcePackageProductResult(outcome.result()));
	else
		return DescribeResourcePackageProductOutcome(outcome.error());
}

void BssOpenApiClient::describeResourcePackageProductAsync(const DescribeResourcePackageProductRequest& request, const DescribeResourcePackageProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeResourcePackageProduct(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::DescribeResourcePackageProductOutcomeCallable BssOpenApiClient::describeResourcePackageProductCallable(const DescribeResourcePackageProductRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeResourcePackageProductOutcome()>>(
			[this, request]()
			{
			return this->describeResourcePackageProduct(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::CreateResourcePackageOutcome BssOpenApiClient::createResourcePackage(const CreateResourcePackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateResourcePackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateResourcePackageOutcome(CreateResourcePackageResult(outcome.result()));
	else
		return CreateResourcePackageOutcome(outcome.error());
}

void BssOpenApiClient::createResourcePackageAsync(const CreateResourcePackageRequest& request, const CreateResourcePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createResourcePackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::CreateResourcePackageOutcomeCallable BssOpenApiClient::createResourcePackageCallable(const CreateResourcePackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateResourcePackageOutcome()>>(
			[this, request]()
			{
			return this->createResourcePackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::QueryInstanceBillOutcome BssOpenApiClient::queryInstanceBill(const QueryInstanceBillRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryInstanceBillOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryInstanceBillOutcome(QueryInstanceBillResult(outcome.result()));
	else
		return QueryInstanceBillOutcome(outcome.error());
}

void BssOpenApiClient::queryInstanceBillAsync(const QueryInstanceBillRequest& request, const QueryInstanceBillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryInstanceBill(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryInstanceBillOutcomeCallable BssOpenApiClient::queryInstanceBillCallable(const QueryInstanceBillRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryInstanceBillOutcome()>>(
			[this, request]()
			{
			return this->queryInstanceBill(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::SubscribeExportToOSSOutcome BssOpenApiClient::subscribeExportToOSS(const SubscribeExportToOSSRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubscribeExportToOSSOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubscribeExportToOSSOutcome(SubscribeExportToOSSResult(outcome.result()));
	else
		return SubscribeExportToOSSOutcome(outcome.error());
}

void BssOpenApiClient::subscribeExportToOSSAsync(const SubscribeExportToOSSRequest& request, const SubscribeExportToOSSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, subscribeExportToOSS(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::SubscribeExportToOSSOutcomeCallable BssOpenApiClient::subscribeExportToOSSCallable(const SubscribeExportToOSSRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubscribeExportToOSSOutcome()>>(
			[this, request]()
			{
			return this->subscribeExportToOSS(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::QueryAvaliableQuotaOutcome BssOpenApiClient::queryAvaliableQuota(const QueryAvaliableQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAvaliableQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAvaliableQuotaOutcome(QueryAvaliableQuotaResult(outcome.result()));
	else
		return QueryAvaliableQuotaOutcome(outcome.error());
}

void BssOpenApiClient::queryAvaliableQuotaAsync(const QueryAvaliableQuotaRequest& request, const QueryAvaliableQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAvaliableQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryAvaliableQuotaOutcomeCallable BssOpenApiClient::queryAvaliableQuotaCallable(const QueryAvaliableQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAvaliableQuotaOutcome()>>(
			[this, request]()
			{
			return this->queryAvaliableQuota(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::QueryPriceOutcome BssOpenApiClient::queryPrice(const QueryPriceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryPriceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryPriceOutcome(QueryPriceResult(outcome.result()));
	else
		return QueryPriceOutcome(outcome.error());
}

void BssOpenApiClient::queryPriceAsync(const QueryPriceRequest& request, const QueryPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryPrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryPriceOutcomeCallable BssOpenApiClient::queryPriceCallable(const QueryPriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryPriceOutcome()>>(
			[this, request]()
			{
			return this->queryPrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::QueryBillOutcome BssOpenApiClient::queryBill(const QueryBillRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryBillOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryBillOutcome(QueryBillResult(outcome.result()));
	else
		return QueryBillOutcome(outcome.error());
}

void BssOpenApiClient::queryBillAsync(const QueryBillRequest& request, const QueryBillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryBill(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryBillOutcomeCallable BssOpenApiClient::queryBillCallable(const QueryBillRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryBillOutcome()>>(
			[this, request]()
			{
			return this->queryBill(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::SetRenewalOutcome BssOpenApiClient::setRenewal(const SetRenewalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetRenewalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetRenewalOutcome(SetRenewalResult(outcome.result()));
	else
		return SetRenewalOutcome(outcome.error());
}

void BssOpenApiClient::setRenewalAsync(const SetRenewalRequest& request, const SetRenewalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setRenewal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::SetRenewalOutcomeCallable BssOpenApiClient::setRenewalCallable(const SetRenewalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetRenewalOutcome()>>(
			[this, request]()
			{
			return this->setRenewal(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::ConvertChargeTypeOutcome BssOpenApiClient::convertChargeType(const ConvertChargeTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConvertChargeTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConvertChargeTypeOutcome(ConvertChargeTypeResult(outcome.result()));
	else
		return ConvertChargeTypeOutcome(outcome.error());
}

void BssOpenApiClient::convertChargeTypeAsync(const ConvertChargeTypeRequest& request, const ConvertChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, convertChargeType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::ConvertChargeTypeOutcomeCallable BssOpenApiClient::convertChargeTypeCallable(const ConvertChargeTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConvertChargeTypeOutcome()>>(
			[this, request]()
			{
			return this->convertChargeType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::QueryBillOverviewOutcome BssOpenApiClient::queryBillOverview(const QueryBillOverviewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryBillOverviewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryBillOverviewOutcome(QueryBillOverviewResult(outcome.result()));
	else
		return QueryBillOverviewOutcome(outcome.error());
}

void BssOpenApiClient::queryBillOverviewAsync(const QueryBillOverviewRequest& request, const QueryBillOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryBillOverview(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryBillOverviewOutcomeCallable BssOpenApiClient::queryBillOverviewCallable(const QueryBillOverviewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryBillOverviewOutcome()>>(
			[this, request]()
			{
			return this->queryBillOverview(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::QuerySettlementBillOutcome BssOpenApiClient::querySettlementBill(const QuerySettlementBillRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySettlementBillOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySettlementBillOutcome(QuerySettlementBillResult(outcome.result()));
	else
		return QuerySettlementBillOutcome(outcome.error());
}

void BssOpenApiClient::querySettlementBillAsync(const QuerySettlementBillRequest& request, const QuerySettlementBillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySettlementBill(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QuerySettlementBillOutcomeCallable BssOpenApiClient::querySettlementBillCallable(const QuerySettlementBillRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySettlementBillOutcome()>>(
			[this, request]()
			{
			return this->querySettlementBill(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::QueryUserOmsDataOutcome BssOpenApiClient::queryUserOmsData(const QueryUserOmsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryUserOmsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryUserOmsDataOutcome(QueryUserOmsDataResult(outcome.result()));
	else
		return QueryUserOmsDataOutcome(outcome.error());
}

void BssOpenApiClient::queryUserOmsDataAsync(const QueryUserOmsDataRequest& request, const QueryUserOmsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryUserOmsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryUserOmsDataOutcomeCallable BssOpenApiClient::queryUserOmsDataCallable(const QueryUserOmsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryUserOmsDataOutcome()>>(
			[this, request]()
			{
			return this->queryUserOmsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

