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

BssOpenApiClient::AllocateCostUnitResourceOutcome BssOpenApiClient::allocateCostUnitResource(const AllocateCostUnitResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AllocateCostUnitResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AllocateCostUnitResourceOutcome(AllocateCostUnitResourceResult(outcome.result()));
	else
		return AllocateCostUnitResourceOutcome(outcome.error());
}

void BssOpenApiClient::allocateCostUnitResourceAsync(const AllocateCostUnitResourceRequest& request, const AllocateCostUnitResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocateCostUnitResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::AllocateCostUnitResourceOutcomeCallable BssOpenApiClient::allocateCostUnitResourceCallable(const AllocateCostUnitResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocateCostUnitResourceOutcome()>>(
			[this, request]()
			{
			return this->allocateCostUnitResource(request);
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

BssOpenApiClient::ChangeResellerConsumeAmountOutcome BssOpenApiClient::changeResellerConsumeAmount(const ChangeResellerConsumeAmountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeResellerConsumeAmountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeResellerConsumeAmountOutcome(ChangeResellerConsumeAmountResult(outcome.result()));
	else
		return ChangeResellerConsumeAmountOutcome(outcome.error());
}

void BssOpenApiClient::changeResellerConsumeAmountAsync(const ChangeResellerConsumeAmountRequest& request, const ChangeResellerConsumeAmountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeResellerConsumeAmount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::ChangeResellerConsumeAmountOutcomeCallable BssOpenApiClient::changeResellerConsumeAmountCallable(const ChangeResellerConsumeAmountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeResellerConsumeAmountOutcome()>>(
			[this, request]()
			{
			return this->changeResellerConsumeAmount(request);
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

BssOpenApiClient::CreateAgAccountOutcome BssOpenApiClient::createAgAccount(const CreateAgAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAgAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAgAccountOutcome(CreateAgAccountResult(outcome.result()));
	else
		return CreateAgAccountOutcome(outcome.error());
}

void BssOpenApiClient::createAgAccountAsync(const CreateAgAccountRequest& request, const CreateAgAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAgAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::CreateAgAccountOutcomeCallable BssOpenApiClient::createAgAccountCallable(const CreateAgAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAgAccountOutcome()>>(
			[this, request]()
			{
			return this->createAgAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::CreateCostUnitOutcome BssOpenApiClient::createCostUnit(const CreateCostUnitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCostUnitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCostUnitOutcome(CreateCostUnitResult(outcome.result()));
	else
		return CreateCostUnitOutcome(outcome.error());
}

void BssOpenApiClient::createCostUnitAsync(const CreateCostUnitRequest& request, const CreateCostUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCostUnit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::CreateCostUnitOutcomeCallable BssOpenApiClient::createCostUnitCallable(const CreateCostUnitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCostUnitOutcome()>>(
			[this, request]()
			{
			return this->createCostUnit(request);
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

BssOpenApiClient::CreateResellerUserQuotaOutcome BssOpenApiClient::createResellerUserQuota(const CreateResellerUserQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateResellerUserQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateResellerUserQuotaOutcome(CreateResellerUserQuotaResult(outcome.result()));
	else
		return CreateResellerUserQuotaOutcome(outcome.error());
}

void BssOpenApiClient::createResellerUserQuotaAsync(const CreateResellerUserQuotaRequest& request, const CreateResellerUserQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createResellerUserQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::CreateResellerUserQuotaOutcomeCallable BssOpenApiClient::createResellerUserQuotaCallable(const CreateResellerUserQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateResellerUserQuotaOutcome()>>(
			[this, request]()
			{
			return this->createResellerUserQuota(request);
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

BssOpenApiClient::DeleteCostUnitOutcome BssOpenApiClient::deleteCostUnit(const DeleteCostUnitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCostUnitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCostUnitOutcome(DeleteCostUnitResult(outcome.result()));
	else
		return DeleteCostUnitOutcome(outcome.error());
}

void BssOpenApiClient::deleteCostUnitAsync(const DeleteCostUnitRequest& request, const DeleteCostUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCostUnit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::DeleteCostUnitOutcomeCallable BssOpenApiClient::deleteCostUnitCallable(const DeleteCostUnitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCostUnitOutcome()>>(
			[this, request]()
			{
			return this->deleteCostUnit(request);
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

BssOpenApiClient::GetCustomerAccountInfoOutcome BssOpenApiClient::getCustomerAccountInfo(const GetCustomerAccountInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCustomerAccountInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCustomerAccountInfoOutcome(GetCustomerAccountInfoResult(outcome.result()));
	else
		return GetCustomerAccountInfoOutcome(outcome.error());
}

void BssOpenApiClient::getCustomerAccountInfoAsync(const GetCustomerAccountInfoRequest& request, const GetCustomerAccountInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCustomerAccountInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::GetCustomerAccountInfoOutcomeCallable BssOpenApiClient::getCustomerAccountInfoCallable(const GetCustomerAccountInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCustomerAccountInfoOutcome()>>(
			[this, request]()
			{
			return this->getCustomerAccountInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::GetCustomerListOutcome BssOpenApiClient::getCustomerList(const GetCustomerListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCustomerListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCustomerListOutcome(GetCustomerListResult(outcome.result()));
	else
		return GetCustomerListOutcome(outcome.error());
}

void BssOpenApiClient::getCustomerListAsync(const GetCustomerListRequest& request, const GetCustomerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCustomerList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::GetCustomerListOutcomeCallable BssOpenApiClient::getCustomerListCallable(const GetCustomerListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCustomerListOutcome()>>(
			[this, request]()
			{
			return this->getCustomerList(request);
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

BssOpenApiClient::ModifyCostUnitOutcome BssOpenApiClient::modifyCostUnit(const ModifyCostUnitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCostUnitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCostUnitOutcome(ModifyCostUnitResult(outcome.result()));
	else
		return ModifyCostUnitOutcome(outcome.error());
}

void BssOpenApiClient::modifyCostUnitAsync(const ModifyCostUnitRequest& request, const ModifyCostUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCostUnit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::ModifyCostUnitOutcomeCallable BssOpenApiClient::modifyCostUnitCallable(const ModifyCostUnitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCostUnitOutcome()>>(
			[this, request]()
			{
			return this->modifyCostUnit(request);
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

BssOpenApiClient::QueryAccountBillOutcome BssOpenApiClient::queryAccountBill(const QueryAccountBillRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAccountBillOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAccountBillOutcome(QueryAccountBillResult(outcome.result()));
	else
		return QueryAccountBillOutcome(outcome.error());
}

void BssOpenApiClient::queryAccountBillAsync(const QueryAccountBillRequest& request, const QueryAccountBillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAccountBill(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryAccountBillOutcomeCallable BssOpenApiClient::queryAccountBillCallable(const QueryAccountBillRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAccountBillOutcome()>>(
			[this, request]()
			{
			return this->queryAccountBill(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::QueryAccountTransactionsOutcome BssOpenApiClient::queryAccountTransactions(const QueryAccountTransactionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAccountTransactionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAccountTransactionsOutcome(QueryAccountTransactionsResult(outcome.result()));
	else
		return QueryAccountTransactionsOutcome(outcome.error());
}

void BssOpenApiClient::queryAccountTransactionsAsync(const QueryAccountTransactionsRequest& request, const QueryAccountTransactionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAccountTransactions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryAccountTransactionsOutcomeCallable BssOpenApiClient::queryAccountTransactionsCallable(const QueryAccountTransactionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAccountTransactionsOutcome()>>(
			[this, request]()
			{
			return this->queryAccountTransactions(request);
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

BssOpenApiClient::QueryBillToOSSSubscriptionOutcome BssOpenApiClient::queryBillToOSSSubscription(const QueryBillToOSSSubscriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryBillToOSSSubscriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryBillToOSSSubscriptionOutcome(QueryBillToOSSSubscriptionResult(outcome.result()));
	else
		return QueryBillToOSSSubscriptionOutcome(outcome.error());
}

void BssOpenApiClient::queryBillToOSSSubscriptionAsync(const QueryBillToOSSSubscriptionRequest& request, const QueryBillToOSSSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryBillToOSSSubscription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryBillToOSSSubscriptionOutcomeCallable BssOpenApiClient::queryBillToOSSSubscriptionCallable(const QueryBillToOSSSubscriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryBillToOSSSubscriptionOutcome()>>(
			[this, request]()
			{
			return this->queryBillToOSSSubscription(request);
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

BssOpenApiClient::QueryCostUnitOutcome BssOpenApiClient::queryCostUnit(const QueryCostUnitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCostUnitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCostUnitOutcome(QueryCostUnitResult(outcome.result()));
	else
		return QueryCostUnitOutcome(outcome.error());
}

void BssOpenApiClient::queryCostUnitAsync(const QueryCostUnitRequest& request, const QueryCostUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCostUnit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryCostUnitOutcomeCallable BssOpenApiClient::queryCostUnitCallable(const QueryCostUnitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCostUnitOutcome()>>(
			[this, request]()
			{
			return this->queryCostUnit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::QueryCostUnitResourceOutcome BssOpenApiClient::queryCostUnitResource(const QueryCostUnitResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCostUnitResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCostUnitResourceOutcome(QueryCostUnitResourceResult(outcome.result()));
	else
		return QueryCostUnitResourceOutcome(outcome.error());
}

void BssOpenApiClient::queryCostUnitResourceAsync(const QueryCostUnitResourceRequest& request, const QueryCostUnitResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCostUnitResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryCostUnitResourceOutcomeCallable BssOpenApiClient::queryCostUnitResourceCallable(const QueryCostUnitResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCostUnitResourceOutcome()>>(
			[this, request]()
			{
			return this->queryCostUnitResource(request);
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

BssOpenApiClient::QueryRIUtilizationDetailOutcome BssOpenApiClient::queryRIUtilizationDetail(const QueryRIUtilizationDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRIUtilizationDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRIUtilizationDetailOutcome(QueryRIUtilizationDetailResult(outcome.result()));
	else
		return QueryRIUtilizationDetailOutcome(outcome.error());
}

void BssOpenApiClient::queryRIUtilizationDetailAsync(const QueryRIUtilizationDetailRequest& request, const QueryRIUtilizationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRIUtilizationDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryRIUtilizationDetailOutcomeCallable BssOpenApiClient::queryRIUtilizationDetailCallable(const QueryRIUtilizationDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRIUtilizationDetailOutcome()>>(
			[this, request]()
			{
			return this->queryRIUtilizationDetail(request);
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

BssOpenApiClient::QueryResellerAvailableQuotaOutcome BssOpenApiClient::queryResellerAvailableQuota(const QueryResellerAvailableQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryResellerAvailableQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryResellerAvailableQuotaOutcome(QueryResellerAvailableQuotaResult(outcome.result()));
	else
		return QueryResellerAvailableQuotaOutcome(outcome.error());
}

void BssOpenApiClient::queryResellerAvailableQuotaAsync(const QueryResellerAvailableQuotaRequest& request, const QueryResellerAvailableQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryResellerAvailableQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QueryResellerAvailableQuotaOutcomeCallable BssOpenApiClient::queryResellerAvailableQuotaCallable(const QueryResellerAvailableQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryResellerAvailableQuotaOutcome()>>(
			[this, request]()
			{
			return this->queryResellerAvailableQuota(request);
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

BssOpenApiClient::QuerySettleBillOutcome BssOpenApiClient::querySettleBill(const QuerySettleBillRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySettleBillOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySettleBillOutcome(QuerySettleBillResult(outcome.result()));
	else
		return QuerySettleBillOutcome(outcome.error());
}

void BssOpenApiClient::querySettleBillAsync(const QuerySettleBillRequest& request, const QuerySettleBillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySettleBill(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QuerySettleBillOutcomeCallable BssOpenApiClient::querySettleBillCallable(const QuerySettleBillRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySettleBillOutcome()>>(
			[this, request]()
			{
			return this->querySettleBill(request);
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

BssOpenApiClient::QuerySplitItemBillOutcome BssOpenApiClient::querySplitItemBill(const QuerySplitItemBillRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySplitItemBillOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySplitItemBillOutcome(QuerySplitItemBillResult(outcome.result()));
	else
		return QuerySplitItemBillOutcome(outcome.error());
}

void BssOpenApiClient::querySplitItemBillAsync(const QuerySplitItemBillRequest& request, const QuerySplitItemBillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySplitItemBill(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::QuerySplitItemBillOutcomeCallable BssOpenApiClient::querySplitItemBillCallable(const QuerySplitItemBillRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySplitItemBillOutcome()>>(
			[this, request]()
			{
			return this->querySplitItemBill(request);
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

BssOpenApiClient::RenewResourcePackageOutcome BssOpenApiClient::renewResourcePackage(const RenewResourcePackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenewResourcePackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewResourcePackageOutcome(RenewResourcePackageResult(outcome.result()));
	else
		return RenewResourcePackageOutcome(outcome.error());
}

void BssOpenApiClient::renewResourcePackageAsync(const RenewResourcePackageRequest& request, const RenewResourcePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewResourcePackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::RenewResourcePackageOutcomeCallable BssOpenApiClient::renewResourcePackageCallable(const RenewResourcePackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewResourcePackageOutcome()>>(
			[this, request]()
			{
			return this->renewResourcePackage(request);
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

BssOpenApiClient::SetResellerUserAlarmThresholdOutcome BssOpenApiClient::setResellerUserAlarmThreshold(const SetResellerUserAlarmThresholdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetResellerUserAlarmThresholdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetResellerUserAlarmThresholdOutcome(SetResellerUserAlarmThresholdResult(outcome.result()));
	else
		return SetResellerUserAlarmThresholdOutcome(outcome.error());
}

void BssOpenApiClient::setResellerUserAlarmThresholdAsync(const SetResellerUserAlarmThresholdRequest& request, const SetResellerUserAlarmThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setResellerUserAlarmThreshold(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::SetResellerUserAlarmThresholdOutcomeCallable BssOpenApiClient::setResellerUserAlarmThresholdCallable(const SetResellerUserAlarmThresholdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetResellerUserAlarmThresholdOutcome()>>(
			[this, request]()
			{
			return this->setResellerUserAlarmThreshold(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::SetResellerUserQuotaOutcome BssOpenApiClient::setResellerUserQuota(const SetResellerUserQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetResellerUserQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetResellerUserQuotaOutcome(SetResellerUserQuotaResult(outcome.result()));
	else
		return SetResellerUserQuotaOutcome(outcome.error());
}

void BssOpenApiClient::setResellerUserQuotaAsync(const SetResellerUserQuotaRequest& request, const SetResellerUserQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setResellerUserQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::SetResellerUserQuotaOutcomeCallable BssOpenApiClient::setResellerUserQuotaCallable(const SetResellerUserQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetResellerUserQuotaOutcome()>>(
			[this, request]()
			{
			return this->setResellerUserQuota(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

BssOpenApiClient::SetResellerUserStatusOutcome BssOpenApiClient::setResellerUserStatus(const SetResellerUserStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetResellerUserStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetResellerUserStatusOutcome(SetResellerUserStatusResult(outcome.result()));
	else
		return SetResellerUserStatusOutcome(outcome.error());
}

void BssOpenApiClient::setResellerUserStatusAsync(const SetResellerUserStatusRequest& request, const SetResellerUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setResellerUserStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::SetResellerUserStatusOutcomeCallable BssOpenApiClient::setResellerUserStatusCallable(const SetResellerUserStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetResellerUserStatusOutcome()>>(
			[this, request]()
			{
			return this->setResellerUserStatus(request);
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

BssOpenApiClient::UpgradeResourcePackageOutcome BssOpenApiClient::upgradeResourcePackage(const UpgradeResourcePackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeResourcePackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeResourcePackageOutcome(UpgradeResourcePackageResult(outcome.result()));
	else
		return UpgradeResourcePackageOutcome(outcome.error());
}

void BssOpenApiClient::upgradeResourcePackageAsync(const UpgradeResourcePackageRequest& request, const UpgradeResourcePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeResourcePackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

BssOpenApiClient::UpgradeResourcePackageOutcomeCallable BssOpenApiClient::upgradeResourcePackageCallable(const UpgradeResourcePackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeResourcePackageOutcome()>>(
			[this, request]()
			{
			return this->upgradeResourcePackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

