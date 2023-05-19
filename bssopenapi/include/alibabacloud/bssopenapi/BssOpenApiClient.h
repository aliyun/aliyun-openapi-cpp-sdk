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

#ifndef ALIBABACLOUD_BSSOPENAPI_BSSOPENAPICLIENT_H_
#define ALIBABACLOUD_BSSOPENAPI_BSSOPENAPICLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "BssOpenApiExport.h"
#include "model/AddAccountRelationRequest.h"
#include "model/AddAccountRelationResult.h"
#include "model/AllocateCostUnitResourceRequest.h"
#include "model/AllocateCostUnitResourceResult.h"
#include "model/ApplyInvoiceRequest.h"
#include "model/ApplyInvoiceResult.h"
#include "model/CancelOrderRequest.h"
#include "model/CancelOrderResult.h"
#include "model/ChangeResellerConsumeAmountRequest.h"
#include "model/ChangeResellerConsumeAmountResult.h"
#include "model/ConfirmRelationRequest.h"
#include "model/ConfirmRelationResult.h"
#include "model/ConvertChargeTypeRequest.h"
#include "model/ConvertChargeTypeResult.h"
#include "model/CreateAgAccountRequest.h"
#include "model/CreateAgAccountResult.h"
#include "model/CreateCostUnitRequest.h"
#include "model/CreateCostUnitResult.h"
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
#include "model/CreateResellerUserQuotaRequest.h"
#include "model/CreateResellerUserQuotaResult.h"
#include "model/CreateResourcePackageRequest.h"
#include "model/CreateResourcePackageResult.h"
#include "model/CreateSavingsPlansInstanceRequest.h"
#include "model/CreateSavingsPlansInstanceResult.h"
#include "model/DeleteCostUnitRequest.h"
#include "model/DeleteCostUnitResult.h"
#include "model/DescribeCostBudgetsSummaryRequest.h"
#include "model/DescribeCostBudgetsSummaryResult.h"
#include "model/DescribeInstanceAmortizedCostByAmortizationPeriodRequest.h"
#include "model/DescribeInstanceAmortizedCostByAmortizationPeriodResult.h"
#include "model/DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest.h"
#include "model/DescribeInstanceAmortizedCostByAmortizationPeriodDateResult.h"
#include "model/DescribeInstanceAmortizedCostByConsumePeriodRequest.h"
#include "model/DescribeInstanceAmortizedCostByConsumePeriodResult.h"
#include "model/DescribeInstanceBillRequest.h"
#include "model/DescribeInstanceBillResult.h"
#include "model/DescribePricingModuleRequest.h"
#include "model/DescribePricingModuleResult.h"
#include "model/DescribeProductAmortizedCostByAmortizationPeriodRequest.h"
#include "model/DescribeProductAmortizedCostByAmortizationPeriodResult.h"
#include "model/DescribeProductAmortizedCostByConsumePeriodRequest.h"
#include "model/DescribeProductAmortizedCostByConsumePeriodResult.h"
#include "model/DescribeResourceCoverageDetailRequest.h"
#include "model/DescribeResourceCoverageDetailResult.h"
#include "model/DescribeResourceCoverageTotalRequest.h"
#include "model/DescribeResourceCoverageTotalResult.h"
#include "model/DescribeResourcePackageProductRequest.h"
#include "model/DescribeResourcePackageProductResult.h"
#include "model/DescribeResourceUsageDetailRequest.h"
#include "model/DescribeResourceUsageDetailResult.h"
#include "model/DescribeResourceUsageTotalRequest.h"
#include "model/DescribeResourceUsageTotalResult.h"
#include "model/DescribeSavingsPlansCoverageDetailRequest.h"
#include "model/DescribeSavingsPlansCoverageDetailResult.h"
#include "model/DescribeSavingsPlansCoverageTotalRequest.h"
#include "model/DescribeSavingsPlansCoverageTotalResult.h"
#include "model/DescribeSavingsPlansUsageDetailRequest.h"
#include "model/DescribeSavingsPlansUsageDetailResult.h"
#include "model/DescribeSavingsPlansUsageTotalRequest.h"
#include "model/DescribeSavingsPlansUsageTotalResult.h"
#include "model/DescribeSplitItemBillRequest.h"
#include "model/DescribeSplitItemBillResult.h"
#include "model/EnableBillGenerationRequest.h"
#include "model/EnableBillGenerationResult.h"
#include "model/GetAccountRelationRequest.h"
#include "model/GetAccountRelationResult.h"
#include "model/GetCustomerAccountInfoRequest.h"
#include "model/GetCustomerAccountInfoResult.h"
#include "model/GetCustomerListRequest.h"
#include "model/GetCustomerListResult.h"
#include "model/GetOrderDetailRequest.h"
#include "model/GetOrderDetailResult.h"
#include "model/GetPayAsYouGoPriceRequest.h"
#include "model/GetPayAsYouGoPriceResult.h"
#include "model/GetResourcePackagePriceRequest.h"
#include "model/GetResourcePackagePriceResult.h"
#include "model/GetSubscriptionPriceRequest.h"
#include "model/GetSubscriptionPriceResult.h"
#include "model/InquiryPriceRefundInstanceRequest.h"
#include "model/InquiryPriceRefundInstanceResult.h"
#include "model/ModifyAccountRelationRequest.h"
#include "model/ModifyAccountRelationResult.h"
#include "model/ModifyCostUnitRequest.h"
#include "model/ModifyCostUnitResult.h"
#include "model/ModifyInstanceRequest.h"
#include "model/ModifyInstanceResult.h"
#include "model/QueryAccountBalanceRequest.h"
#include "model/QueryAccountBalanceResult.h"
#include "model/QueryAccountBillRequest.h"
#include "model/QueryAccountBillResult.h"
#include "model/QueryAccountTransactionDetailsRequest.h"
#include "model/QueryAccountTransactionDetailsResult.h"
#include "model/QueryAccountTransactionsRequest.h"
#include "model/QueryAccountTransactionsResult.h"
#include "model/QueryAvailableInstancesRequest.h"
#include "model/QueryAvailableInstancesResult.h"
#include "model/QueryBillRequest.h"
#include "model/QueryBillResult.h"
#include "model/QueryBillOverviewRequest.h"
#include "model/QueryBillOverviewResult.h"
#include "model/QueryBillToOSSSubscriptionRequest.h"
#include "model/QueryBillToOSSSubscriptionResult.h"
#include "model/QueryCashCouponsRequest.h"
#include "model/QueryCashCouponsResult.h"
#include "model/QueryCommodityListRequest.h"
#include "model/QueryCommodityListResult.h"
#include "model/QueryCostUnitRequest.h"
#include "model/QueryCostUnitResult.h"
#include "model/QueryCostUnitResourceRequest.h"
#include "model/QueryCostUnitResourceResult.h"
#include "model/QueryCustomerAddressListRequest.h"
#include "model/QueryCustomerAddressListResult.h"
#include "model/QueryDPUtilizationDetailRequest.h"
#include "model/QueryDPUtilizationDetailResult.h"
#include "model/QueryEvaluateListRequest.h"
#include "model/QueryEvaluateListResult.h"
#include "model/QueryFinancialAccountInfoRequest.h"
#include "model/QueryFinancialAccountInfoResult.h"
#include "model/QueryInstanceBillRequest.h"
#include "model/QueryInstanceBillResult.h"
#include "model/QueryInstanceByTagRequest.h"
#include "model/QueryInstanceByTagResult.h"
#include "model/QueryInstanceGaapCostRequest.h"
#include "model/QueryInstanceGaapCostResult.h"
#include "model/QueryInvoicingCustomerListRequest.h"
#include "model/QueryInvoicingCustomerListResult.h"
#include "model/QueryOrdersRequest.h"
#include "model/QueryOrdersResult.h"
#include "model/QueryPermissionListRequest.h"
#include "model/QueryPermissionListResult.h"
#include "model/QueryPrepaidCardsRequest.h"
#include "model/QueryPrepaidCardsResult.h"
#include "model/QueryPriceEntityListRequest.h"
#include "model/QueryPriceEntityListResult.h"
#include "model/QueryProductListRequest.h"
#include "model/QueryProductListResult.h"
#include "model/QueryRIUtilizationDetailRequest.h"
#include "model/QueryRIUtilizationDetailResult.h"
#include "model/QueryRedeemRequest.h"
#include "model/QueryRedeemResult.h"
#include "model/QueryRelationListRequest.h"
#include "model/QueryRelationListResult.h"
#include "model/QueryResellerAvailableQuotaRequest.h"
#include "model/QueryResellerAvailableQuotaResult.h"
#include "model/QueryResellerUserAlarmThresholdRequest.h"
#include "model/QueryResellerUserAlarmThresholdResult.h"
#include "model/QueryResourcePackageInstancesRequest.h"
#include "model/QueryResourcePackageInstancesResult.h"
#include "model/QuerySavingsPlansDeductLogRequest.h"
#include "model/QuerySavingsPlansDeductLogResult.h"
#include "model/QuerySavingsPlansDiscountRequest.h"
#include "model/QuerySavingsPlansDiscountResult.h"
#include "model/QuerySavingsPlansInstanceRequest.h"
#include "model/QuerySavingsPlansInstanceResult.h"
#include "model/QuerySettleBillRequest.h"
#include "model/QuerySettleBillResult.h"
#include "model/QuerySkuPriceListRequest.h"
#include "model/QuerySkuPriceListResult.h"
#include "model/QuerySplitItemBillRequest.h"
#include "model/QuerySplitItemBillResult.h"
#include "model/QueryUserOmsDataRequest.h"
#include "model/QueryUserOmsDataResult.h"
#include "model/RefundInstanceRequest.h"
#include "model/RefundInstanceResult.h"
#include "model/ReleaseInstanceRequest.h"
#include "model/ReleaseInstanceResult.h"
#include "model/RelieveAccountRelationRequest.h"
#include "model/RelieveAccountRelationResult.h"
#include "model/RenewInstanceRequest.h"
#include "model/RenewInstanceResult.h"
#include "model/RenewResourcePackageRequest.h"
#include "model/RenewResourcePackageResult.h"
#include "model/SaveUserCreditRequest.h"
#include "model/SaveUserCreditResult.h"
#include "model/SetAllExpirationDayRequest.h"
#include "model/SetAllExpirationDayResult.h"
#include "model/SetCreditLabelActionRequest.h"
#include "model/SetCreditLabelActionResult.h"
#include "model/SetRenewalRequest.h"
#include "model/SetRenewalResult.h"
#include "model/SetResellerUserAlarmThresholdRequest.h"
#include "model/SetResellerUserAlarmThresholdResult.h"
#include "model/SetResellerUserQuotaRequest.h"
#include "model/SetResellerUserQuotaResult.h"
#include "model/SetResellerUserStatusRequest.h"
#include "model/SetResellerUserStatusResult.h"
#include "model/SubscribeBillToOSSRequest.h"
#include "model/SubscribeBillToOSSResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UnsubscribeBillToOSSRequest.h"
#include "model/UnsubscribeBillToOSSResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpgradeResourcePackageRequest.h"
#include "model/UpgradeResourcePackageResult.h"


namespace AlibabaCloud
{
	namespace BssOpenApi
	{
		class ALIBABACLOUD_BSSOPENAPI_EXPORT BssOpenApiClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddAccountRelationResult> AddAccountRelationOutcome;
			typedef std::future<AddAccountRelationOutcome> AddAccountRelationOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::AddAccountRelationRequest&, const AddAccountRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddAccountRelationAsyncHandler;
			typedef Outcome<Error, Model::AllocateCostUnitResourceResult> AllocateCostUnitResourceOutcome;
			typedef std::future<AllocateCostUnitResourceOutcome> AllocateCostUnitResourceOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::AllocateCostUnitResourceRequest&, const AllocateCostUnitResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateCostUnitResourceAsyncHandler;
			typedef Outcome<Error, Model::ApplyInvoiceResult> ApplyInvoiceOutcome;
			typedef std::future<ApplyInvoiceOutcome> ApplyInvoiceOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::ApplyInvoiceRequest&, const ApplyInvoiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApplyInvoiceAsyncHandler;
			typedef Outcome<Error, Model::CancelOrderResult> CancelOrderOutcome;
			typedef std::future<CancelOrderOutcome> CancelOrderOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::CancelOrderRequest&, const CancelOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelOrderAsyncHandler;
			typedef Outcome<Error, Model::ChangeResellerConsumeAmountResult> ChangeResellerConsumeAmountOutcome;
			typedef std::future<ChangeResellerConsumeAmountOutcome> ChangeResellerConsumeAmountOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::ChangeResellerConsumeAmountRequest&, const ChangeResellerConsumeAmountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeResellerConsumeAmountAsyncHandler;
			typedef Outcome<Error, Model::ConfirmRelationResult> ConfirmRelationOutcome;
			typedef std::future<ConfirmRelationOutcome> ConfirmRelationOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::ConfirmRelationRequest&, const ConfirmRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfirmRelationAsyncHandler;
			typedef Outcome<Error, Model::ConvertChargeTypeResult> ConvertChargeTypeOutcome;
			typedef std::future<ConvertChargeTypeOutcome> ConvertChargeTypeOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::ConvertChargeTypeRequest&, const ConvertChargeTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConvertChargeTypeAsyncHandler;
			typedef Outcome<Error, Model::CreateAgAccountResult> CreateAgAccountOutcome;
			typedef std::future<CreateAgAccountOutcome> CreateAgAccountOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::CreateAgAccountRequest&, const CreateAgAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAgAccountAsyncHandler;
			typedef Outcome<Error, Model::CreateCostUnitResult> CreateCostUnitOutcome;
			typedef std::future<CreateCostUnitOutcome> CreateCostUnitOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::CreateCostUnitRequest&, const CreateCostUnitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCostUnitAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateResellerUserQuotaResult> CreateResellerUserQuotaOutcome;
			typedef std::future<CreateResellerUserQuotaOutcome> CreateResellerUserQuotaOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::CreateResellerUserQuotaRequest&, const CreateResellerUserQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateResellerUserQuotaAsyncHandler;
			typedef Outcome<Error, Model::CreateResourcePackageResult> CreateResourcePackageOutcome;
			typedef std::future<CreateResourcePackageOutcome> CreateResourcePackageOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::CreateResourcePackageRequest&, const CreateResourcePackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourcePackageAsyncHandler;
			typedef Outcome<Error, Model::CreateSavingsPlansInstanceResult> CreateSavingsPlansInstanceOutcome;
			typedef std::future<CreateSavingsPlansInstanceOutcome> CreateSavingsPlansInstanceOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::CreateSavingsPlansInstanceRequest&, const CreateSavingsPlansInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSavingsPlansInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteCostUnitResult> DeleteCostUnitOutcome;
			typedef std::future<DeleteCostUnitOutcome> DeleteCostUnitOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::DeleteCostUnitRequest&, const DeleteCostUnitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCostUnitAsyncHandler;
			typedef Outcome<Error, Model::DescribeCostBudgetsSummaryResult> DescribeCostBudgetsSummaryOutcome;
			typedef std::future<DescribeCostBudgetsSummaryOutcome> DescribeCostBudgetsSummaryOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::DescribeCostBudgetsSummaryRequest&, const DescribeCostBudgetsSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCostBudgetsSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceAmortizedCostByAmortizationPeriodResult> DescribeInstanceAmortizedCostByAmortizationPeriodOutcome;
			typedef std::future<DescribeInstanceAmortizedCostByAmortizationPeriodOutcome> DescribeInstanceAmortizedCostByAmortizationPeriodOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::DescribeInstanceAmortizedCostByAmortizationPeriodRequest&, const DescribeInstanceAmortizedCostByAmortizationPeriodOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAmortizedCostByAmortizationPeriodAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceAmortizedCostByAmortizationPeriodDateResult> DescribeInstanceAmortizedCostByAmortizationPeriodDateOutcome;
			typedef std::future<DescribeInstanceAmortizedCostByAmortizationPeriodDateOutcome> DescribeInstanceAmortizedCostByAmortizationPeriodDateOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest&, const DescribeInstanceAmortizedCostByAmortizationPeriodDateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAmortizedCostByAmortizationPeriodDateAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceAmortizedCostByConsumePeriodResult> DescribeInstanceAmortizedCostByConsumePeriodOutcome;
			typedef std::future<DescribeInstanceAmortizedCostByConsumePeriodOutcome> DescribeInstanceAmortizedCostByConsumePeriodOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::DescribeInstanceAmortizedCostByConsumePeriodRequest&, const DescribeInstanceAmortizedCostByConsumePeriodOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAmortizedCostByConsumePeriodAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceBillResult> DescribeInstanceBillOutcome;
			typedef std::future<DescribeInstanceBillOutcome> DescribeInstanceBillOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::DescribeInstanceBillRequest&, const DescribeInstanceBillOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceBillAsyncHandler;
			typedef Outcome<Error, Model::DescribePricingModuleResult> DescribePricingModuleOutcome;
			typedef std::future<DescribePricingModuleOutcome> DescribePricingModuleOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::DescribePricingModuleRequest&, const DescribePricingModuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePricingModuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeProductAmortizedCostByAmortizationPeriodResult> DescribeProductAmortizedCostByAmortizationPeriodOutcome;
			typedef std::future<DescribeProductAmortizedCostByAmortizationPeriodOutcome> DescribeProductAmortizedCostByAmortizationPeriodOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::DescribeProductAmortizedCostByAmortizationPeriodRequest&, const DescribeProductAmortizedCostByAmortizationPeriodOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductAmortizedCostByAmortizationPeriodAsyncHandler;
			typedef Outcome<Error, Model::DescribeProductAmortizedCostByConsumePeriodResult> DescribeProductAmortizedCostByConsumePeriodOutcome;
			typedef std::future<DescribeProductAmortizedCostByConsumePeriodOutcome> DescribeProductAmortizedCostByConsumePeriodOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::DescribeProductAmortizedCostByConsumePeriodRequest&, const DescribeProductAmortizedCostByConsumePeriodOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductAmortizedCostByConsumePeriodAsyncHandler;
			typedef Outcome<Error, Model::DescribeResourceCoverageDetailResult> DescribeResourceCoverageDetailOutcome;
			typedef std::future<DescribeResourceCoverageDetailOutcome> DescribeResourceCoverageDetailOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::DescribeResourceCoverageDetailRequest&, const DescribeResourceCoverageDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceCoverageDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeResourceCoverageTotalResult> DescribeResourceCoverageTotalOutcome;
			typedef std::future<DescribeResourceCoverageTotalOutcome> DescribeResourceCoverageTotalOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::DescribeResourceCoverageTotalRequest&, const DescribeResourceCoverageTotalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceCoverageTotalAsyncHandler;
			typedef Outcome<Error, Model::DescribeResourcePackageProductResult> DescribeResourcePackageProductOutcome;
			typedef std::future<DescribeResourcePackageProductOutcome> DescribeResourcePackageProductOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::DescribeResourcePackageProductRequest&, const DescribeResourcePackageProductOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourcePackageProductAsyncHandler;
			typedef Outcome<Error, Model::DescribeResourceUsageDetailResult> DescribeResourceUsageDetailOutcome;
			typedef std::future<DescribeResourceUsageDetailOutcome> DescribeResourceUsageDetailOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::DescribeResourceUsageDetailRequest&, const DescribeResourceUsageDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceUsageDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeResourceUsageTotalResult> DescribeResourceUsageTotalOutcome;
			typedef std::future<DescribeResourceUsageTotalOutcome> DescribeResourceUsageTotalOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::DescribeResourceUsageTotalRequest&, const DescribeResourceUsageTotalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceUsageTotalAsyncHandler;
			typedef Outcome<Error, Model::DescribeSavingsPlansCoverageDetailResult> DescribeSavingsPlansCoverageDetailOutcome;
			typedef std::future<DescribeSavingsPlansCoverageDetailOutcome> DescribeSavingsPlansCoverageDetailOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::DescribeSavingsPlansCoverageDetailRequest&, const DescribeSavingsPlansCoverageDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSavingsPlansCoverageDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeSavingsPlansCoverageTotalResult> DescribeSavingsPlansCoverageTotalOutcome;
			typedef std::future<DescribeSavingsPlansCoverageTotalOutcome> DescribeSavingsPlansCoverageTotalOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::DescribeSavingsPlansCoverageTotalRequest&, const DescribeSavingsPlansCoverageTotalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSavingsPlansCoverageTotalAsyncHandler;
			typedef Outcome<Error, Model::DescribeSavingsPlansUsageDetailResult> DescribeSavingsPlansUsageDetailOutcome;
			typedef std::future<DescribeSavingsPlansUsageDetailOutcome> DescribeSavingsPlansUsageDetailOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::DescribeSavingsPlansUsageDetailRequest&, const DescribeSavingsPlansUsageDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSavingsPlansUsageDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeSavingsPlansUsageTotalResult> DescribeSavingsPlansUsageTotalOutcome;
			typedef std::future<DescribeSavingsPlansUsageTotalOutcome> DescribeSavingsPlansUsageTotalOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::DescribeSavingsPlansUsageTotalRequest&, const DescribeSavingsPlansUsageTotalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSavingsPlansUsageTotalAsyncHandler;
			typedef Outcome<Error, Model::DescribeSplitItemBillResult> DescribeSplitItemBillOutcome;
			typedef std::future<DescribeSplitItemBillOutcome> DescribeSplitItemBillOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::DescribeSplitItemBillRequest&, const DescribeSplitItemBillOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSplitItemBillAsyncHandler;
			typedef Outcome<Error, Model::EnableBillGenerationResult> EnableBillGenerationOutcome;
			typedef std::future<EnableBillGenerationOutcome> EnableBillGenerationOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::EnableBillGenerationRequest&, const EnableBillGenerationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableBillGenerationAsyncHandler;
			typedef Outcome<Error, Model::GetAccountRelationResult> GetAccountRelationOutcome;
			typedef std::future<GetAccountRelationOutcome> GetAccountRelationOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::GetAccountRelationRequest&, const GetAccountRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAccountRelationAsyncHandler;
			typedef Outcome<Error, Model::GetCustomerAccountInfoResult> GetCustomerAccountInfoOutcome;
			typedef std::future<GetCustomerAccountInfoOutcome> GetCustomerAccountInfoOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::GetCustomerAccountInfoRequest&, const GetCustomerAccountInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCustomerAccountInfoAsyncHandler;
			typedef Outcome<Error, Model::GetCustomerListResult> GetCustomerListOutcome;
			typedef std::future<GetCustomerListOutcome> GetCustomerListOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::GetCustomerListRequest&, const GetCustomerListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCustomerListAsyncHandler;
			typedef Outcome<Error, Model::GetOrderDetailResult> GetOrderDetailOutcome;
			typedef std::future<GetOrderDetailOutcome> GetOrderDetailOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::GetOrderDetailRequest&, const GetOrderDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOrderDetailAsyncHandler;
			typedef Outcome<Error, Model::GetPayAsYouGoPriceResult> GetPayAsYouGoPriceOutcome;
			typedef std::future<GetPayAsYouGoPriceOutcome> GetPayAsYouGoPriceOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::GetPayAsYouGoPriceRequest&, const GetPayAsYouGoPriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPayAsYouGoPriceAsyncHandler;
			typedef Outcome<Error, Model::GetResourcePackagePriceResult> GetResourcePackagePriceOutcome;
			typedef std::future<GetResourcePackagePriceOutcome> GetResourcePackagePriceOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::GetResourcePackagePriceRequest&, const GetResourcePackagePriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetResourcePackagePriceAsyncHandler;
			typedef Outcome<Error, Model::GetSubscriptionPriceResult> GetSubscriptionPriceOutcome;
			typedef std::future<GetSubscriptionPriceOutcome> GetSubscriptionPriceOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::GetSubscriptionPriceRequest&, const GetSubscriptionPriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSubscriptionPriceAsyncHandler;
			typedef Outcome<Error, Model::InquiryPriceRefundInstanceResult> InquiryPriceRefundInstanceOutcome;
			typedef std::future<InquiryPriceRefundInstanceOutcome> InquiryPriceRefundInstanceOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::InquiryPriceRefundInstanceRequest&, const InquiryPriceRefundInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceRefundInstanceAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountRelationResult> ModifyAccountRelationOutcome;
			typedef std::future<ModifyAccountRelationOutcome> ModifyAccountRelationOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::ModifyAccountRelationRequest&, const ModifyAccountRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountRelationAsyncHandler;
			typedef Outcome<Error, Model::ModifyCostUnitResult> ModifyCostUnitOutcome;
			typedef std::future<ModifyCostUnitOutcome> ModifyCostUnitOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::ModifyCostUnitRequest&, const ModifyCostUnitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCostUnitAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceResult> ModifyInstanceOutcome;
			typedef std::future<ModifyInstanceOutcome> ModifyInstanceOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::ModifyInstanceRequest&, const ModifyInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAsyncHandler;
			typedef Outcome<Error, Model::QueryAccountBalanceResult> QueryAccountBalanceOutcome;
			typedef std::future<QueryAccountBalanceOutcome> QueryAccountBalanceOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryAccountBalanceRequest&, const QueryAccountBalanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAccountBalanceAsyncHandler;
			typedef Outcome<Error, Model::QueryAccountBillResult> QueryAccountBillOutcome;
			typedef std::future<QueryAccountBillOutcome> QueryAccountBillOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryAccountBillRequest&, const QueryAccountBillOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAccountBillAsyncHandler;
			typedef Outcome<Error, Model::QueryAccountTransactionDetailsResult> QueryAccountTransactionDetailsOutcome;
			typedef std::future<QueryAccountTransactionDetailsOutcome> QueryAccountTransactionDetailsOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryAccountTransactionDetailsRequest&, const QueryAccountTransactionDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAccountTransactionDetailsAsyncHandler;
			typedef Outcome<Error, Model::QueryAccountTransactionsResult> QueryAccountTransactionsOutcome;
			typedef std::future<QueryAccountTransactionsOutcome> QueryAccountTransactionsOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryAccountTransactionsRequest&, const QueryAccountTransactionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAccountTransactionsAsyncHandler;
			typedef Outcome<Error, Model::QueryAvailableInstancesResult> QueryAvailableInstancesOutcome;
			typedef std::future<QueryAvailableInstancesOutcome> QueryAvailableInstancesOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryAvailableInstancesRequest&, const QueryAvailableInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAvailableInstancesAsyncHandler;
			typedef Outcome<Error, Model::QueryBillResult> QueryBillOutcome;
			typedef std::future<QueryBillOutcome> QueryBillOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryBillRequest&, const QueryBillOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryBillAsyncHandler;
			typedef Outcome<Error, Model::QueryBillOverviewResult> QueryBillOverviewOutcome;
			typedef std::future<QueryBillOverviewOutcome> QueryBillOverviewOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryBillOverviewRequest&, const QueryBillOverviewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryBillOverviewAsyncHandler;
			typedef Outcome<Error, Model::QueryBillToOSSSubscriptionResult> QueryBillToOSSSubscriptionOutcome;
			typedef std::future<QueryBillToOSSSubscriptionOutcome> QueryBillToOSSSubscriptionOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryBillToOSSSubscriptionRequest&, const QueryBillToOSSSubscriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryBillToOSSSubscriptionAsyncHandler;
			typedef Outcome<Error, Model::QueryCashCouponsResult> QueryCashCouponsOutcome;
			typedef std::future<QueryCashCouponsOutcome> QueryCashCouponsOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryCashCouponsRequest&, const QueryCashCouponsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCashCouponsAsyncHandler;
			typedef Outcome<Error, Model::QueryCommodityListResult> QueryCommodityListOutcome;
			typedef std::future<QueryCommodityListOutcome> QueryCommodityListOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryCommodityListRequest&, const QueryCommodityListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCommodityListAsyncHandler;
			typedef Outcome<Error, Model::QueryCostUnitResult> QueryCostUnitOutcome;
			typedef std::future<QueryCostUnitOutcome> QueryCostUnitOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryCostUnitRequest&, const QueryCostUnitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCostUnitAsyncHandler;
			typedef Outcome<Error, Model::QueryCostUnitResourceResult> QueryCostUnitResourceOutcome;
			typedef std::future<QueryCostUnitResourceOutcome> QueryCostUnitResourceOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryCostUnitResourceRequest&, const QueryCostUnitResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCostUnitResourceAsyncHandler;
			typedef Outcome<Error, Model::QueryCustomerAddressListResult> QueryCustomerAddressListOutcome;
			typedef std::future<QueryCustomerAddressListOutcome> QueryCustomerAddressListOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryCustomerAddressListRequest&, const QueryCustomerAddressListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCustomerAddressListAsyncHandler;
			typedef Outcome<Error, Model::QueryDPUtilizationDetailResult> QueryDPUtilizationDetailOutcome;
			typedef std::future<QueryDPUtilizationDetailOutcome> QueryDPUtilizationDetailOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryDPUtilizationDetailRequest&, const QueryDPUtilizationDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDPUtilizationDetailAsyncHandler;
			typedef Outcome<Error, Model::QueryEvaluateListResult> QueryEvaluateListOutcome;
			typedef std::future<QueryEvaluateListOutcome> QueryEvaluateListOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryEvaluateListRequest&, const QueryEvaluateListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEvaluateListAsyncHandler;
			typedef Outcome<Error, Model::QueryFinancialAccountInfoResult> QueryFinancialAccountInfoOutcome;
			typedef std::future<QueryFinancialAccountInfoOutcome> QueryFinancialAccountInfoOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryFinancialAccountInfoRequest&, const QueryFinancialAccountInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryFinancialAccountInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryInstanceBillResult> QueryInstanceBillOutcome;
			typedef std::future<QueryInstanceBillOutcome> QueryInstanceBillOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryInstanceBillRequest&, const QueryInstanceBillOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryInstanceBillAsyncHandler;
			typedef Outcome<Error, Model::QueryInstanceByTagResult> QueryInstanceByTagOutcome;
			typedef std::future<QueryInstanceByTagOutcome> QueryInstanceByTagOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryInstanceByTagRequest&, const QueryInstanceByTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryInstanceByTagAsyncHandler;
			typedef Outcome<Error, Model::QueryInstanceGaapCostResult> QueryInstanceGaapCostOutcome;
			typedef std::future<QueryInstanceGaapCostOutcome> QueryInstanceGaapCostOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryInstanceGaapCostRequest&, const QueryInstanceGaapCostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryInstanceGaapCostAsyncHandler;
			typedef Outcome<Error, Model::QueryInvoicingCustomerListResult> QueryInvoicingCustomerListOutcome;
			typedef std::future<QueryInvoicingCustomerListOutcome> QueryInvoicingCustomerListOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryInvoicingCustomerListRequest&, const QueryInvoicingCustomerListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryInvoicingCustomerListAsyncHandler;
			typedef Outcome<Error, Model::QueryOrdersResult> QueryOrdersOutcome;
			typedef std::future<QueryOrdersOutcome> QueryOrdersOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryOrdersRequest&, const QueryOrdersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryOrdersAsyncHandler;
			typedef Outcome<Error, Model::QueryPermissionListResult> QueryPermissionListOutcome;
			typedef std::future<QueryPermissionListOutcome> QueryPermissionListOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryPermissionListRequest&, const QueryPermissionListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryPermissionListAsyncHandler;
			typedef Outcome<Error, Model::QueryPrepaidCardsResult> QueryPrepaidCardsOutcome;
			typedef std::future<QueryPrepaidCardsOutcome> QueryPrepaidCardsOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryPrepaidCardsRequest&, const QueryPrepaidCardsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryPrepaidCardsAsyncHandler;
			typedef Outcome<Error, Model::QueryPriceEntityListResult> QueryPriceEntityListOutcome;
			typedef std::future<QueryPriceEntityListOutcome> QueryPriceEntityListOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryPriceEntityListRequest&, const QueryPriceEntityListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryPriceEntityListAsyncHandler;
			typedef Outcome<Error, Model::QueryProductListResult> QueryProductListOutcome;
			typedef std::future<QueryProductListOutcome> QueryProductListOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryProductListRequest&, const QueryProductListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryProductListAsyncHandler;
			typedef Outcome<Error, Model::QueryRIUtilizationDetailResult> QueryRIUtilizationDetailOutcome;
			typedef std::future<QueryRIUtilizationDetailOutcome> QueryRIUtilizationDetailOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryRIUtilizationDetailRequest&, const QueryRIUtilizationDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRIUtilizationDetailAsyncHandler;
			typedef Outcome<Error, Model::QueryRedeemResult> QueryRedeemOutcome;
			typedef std::future<QueryRedeemOutcome> QueryRedeemOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryRedeemRequest&, const QueryRedeemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRedeemAsyncHandler;
			typedef Outcome<Error, Model::QueryRelationListResult> QueryRelationListOutcome;
			typedef std::future<QueryRelationListOutcome> QueryRelationListOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryRelationListRequest&, const QueryRelationListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRelationListAsyncHandler;
			typedef Outcome<Error, Model::QueryResellerAvailableQuotaResult> QueryResellerAvailableQuotaOutcome;
			typedef std::future<QueryResellerAvailableQuotaOutcome> QueryResellerAvailableQuotaOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryResellerAvailableQuotaRequest&, const QueryResellerAvailableQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryResellerAvailableQuotaAsyncHandler;
			typedef Outcome<Error, Model::QueryResellerUserAlarmThresholdResult> QueryResellerUserAlarmThresholdOutcome;
			typedef std::future<QueryResellerUserAlarmThresholdOutcome> QueryResellerUserAlarmThresholdOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryResellerUserAlarmThresholdRequest&, const QueryResellerUserAlarmThresholdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryResellerUserAlarmThresholdAsyncHandler;
			typedef Outcome<Error, Model::QueryResourcePackageInstancesResult> QueryResourcePackageInstancesOutcome;
			typedef std::future<QueryResourcePackageInstancesOutcome> QueryResourcePackageInstancesOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryResourcePackageInstancesRequest&, const QueryResourcePackageInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryResourcePackageInstancesAsyncHandler;
			typedef Outcome<Error, Model::QuerySavingsPlansDeductLogResult> QuerySavingsPlansDeductLogOutcome;
			typedef std::future<QuerySavingsPlansDeductLogOutcome> QuerySavingsPlansDeductLogOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QuerySavingsPlansDeductLogRequest&, const QuerySavingsPlansDeductLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySavingsPlansDeductLogAsyncHandler;
			typedef Outcome<Error, Model::QuerySavingsPlansDiscountResult> QuerySavingsPlansDiscountOutcome;
			typedef std::future<QuerySavingsPlansDiscountOutcome> QuerySavingsPlansDiscountOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QuerySavingsPlansDiscountRequest&, const QuerySavingsPlansDiscountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySavingsPlansDiscountAsyncHandler;
			typedef Outcome<Error, Model::QuerySavingsPlansInstanceResult> QuerySavingsPlansInstanceOutcome;
			typedef std::future<QuerySavingsPlansInstanceOutcome> QuerySavingsPlansInstanceOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QuerySavingsPlansInstanceRequest&, const QuerySavingsPlansInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySavingsPlansInstanceAsyncHandler;
			typedef Outcome<Error, Model::QuerySettleBillResult> QuerySettleBillOutcome;
			typedef std::future<QuerySettleBillOutcome> QuerySettleBillOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QuerySettleBillRequest&, const QuerySettleBillOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySettleBillAsyncHandler;
			typedef Outcome<Error, Model::QuerySkuPriceListResult> QuerySkuPriceListOutcome;
			typedef std::future<QuerySkuPriceListOutcome> QuerySkuPriceListOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QuerySkuPriceListRequest&, const QuerySkuPriceListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySkuPriceListAsyncHandler;
			typedef Outcome<Error, Model::QuerySplitItemBillResult> QuerySplitItemBillOutcome;
			typedef std::future<QuerySplitItemBillOutcome> QuerySplitItemBillOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QuerySplitItemBillRequest&, const QuerySplitItemBillOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySplitItemBillAsyncHandler;
			typedef Outcome<Error, Model::QueryUserOmsDataResult> QueryUserOmsDataOutcome;
			typedef std::future<QueryUserOmsDataOutcome> QueryUserOmsDataOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::QueryUserOmsDataRequest&, const QueryUserOmsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryUserOmsDataAsyncHandler;
			typedef Outcome<Error, Model::RefundInstanceResult> RefundInstanceOutcome;
			typedef std::future<RefundInstanceOutcome> RefundInstanceOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::RefundInstanceRequest&, const RefundInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefundInstanceAsyncHandler;
			typedef Outcome<Error, Model::ReleaseInstanceResult> ReleaseInstanceOutcome;
			typedef std::future<ReleaseInstanceOutcome> ReleaseInstanceOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::ReleaseInstanceRequest&, const ReleaseInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseInstanceAsyncHandler;
			typedef Outcome<Error, Model::RelieveAccountRelationResult> RelieveAccountRelationOutcome;
			typedef std::future<RelieveAccountRelationOutcome> RelieveAccountRelationOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::RelieveAccountRelationRequest&, const RelieveAccountRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RelieveAccountRelationAsyncHandler;
			typedef Outcome<Error, Model::RenewInstanceResult> RenewInstanceOutcome;
			typedef std::future<RenewInstanceOutcome> RenewInstanceOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::RenewInstanceRequest&, const RenewInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstanceAsyncHandler;
			typedef Outcome<Error, Model::RenewResourcePackageResult> RenewResourcePackageOutcome;
			typedef std::future<RenewResourcePackageOutcome> RenewResourcePackageOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::RenewResourcePackageRequest&, const RenewResourcePackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewResourcePackageAsyncHandler;
			typedef Outcome<Error, Model::SaveUserCreditResult> SaveUserCreditOutcome;
			typedef std::future<SaveUserCreditOutcome> SaveUserCreditOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::SaveUserCreditRequest&, const SaveUserCreditOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveUserCreditAsyncHandler;
			typedef Outcome<Error, Model::SetAllExpirationDayResult> SetAllExpirationDayOutcome;
			typedef std::future<SetAllExpirationDayOutcome> SetAllExpirationDayOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::SetAllExpirationDayRequest&, const SetAllExpirationDayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetAllExpirationDayAsyncHandler;
			typedef Outcome<Error, Model::SetCreditLabelActionResult> SetCreditLabelActionOutcome;
			typedef std::future<SetCreditLabelActionOutcome> SetCreditLabelActionOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::SetCreditLabelActionRequest&, const SetCreditLabelActionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetCreditLabelActionAsyncHandler;
			typedef Outcome<Error, Model::SetRenewalResult> SetRenewalOutcome;
			typedef std::future<SetRenewalOutcome> SetRenewalOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::SetRenewalRequest&, const SetRenewalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetRenewalAsyncHandler;
			typedef Outcome<Error, Model::SetResellerUserAlarmThresholdResult> SetResellerUserAlarmThresholdOutcome;
			typedef std::future<SetResellerUserAlarmThresholdOutcome> SetResellerUserAlarmThresholdOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::SetResellerUserAlarmThresholdRequest&, const SetResellerUserAlarmThresholdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetResellerUserAlarmThresholdAsyncHandler;
			typedef Outcome<Error, Model::SetResellerUserQuotaResult> SetResellerUserQuotaOutcome;
			typedef std::future<SetResellerUserQuotaOutcome> SetResellerUserQuotaOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::SetResellerUserQuotaRequest&, const SetResellerUserQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetResellerUserQuotaAsyncHandler;
			typedef Outcome<Error, Model::SetResellerUserStatusResult> SetResellerUserStatusOutcome;
			typedef std::future<SetResellerUserStatusOutcome> SetResellerUserStatusOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::SetResellerUserStatusRequest&, const SetResellerUserStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetResellerUserStatusAsyncHandler;
			typedef Outcome<Error, Model::SubscribeBillToOSSResult> SubscribeBillToOSSOutcome;
			typedef std::future<SubscribeBillToOSSOutcome> SubscribeBillToOSSOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::SubscribeBillToOSSRequest&, const SubscribeBillToOSSOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubscribeBillToOSSAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UnsubscribeBillToOSSResult> UnsubscribeBillToOSSOutcome;
			typedef std::future<UnsubscribeBillToOSSOutcome> UnsubscribeBillToOSSOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::UnsubscribeBillToOSSRequest&, const UnsubscribeBillToOSSOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnsubscribeBillToOSSAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpgradeResourcePackageResult> UpgradeResourcePackageOutcome;
			typedef std::future<UpgradeResourcePackageOutcome> UpgradeResourcePackageOutcomeCallable;
			typedef std::function<void(const BssOpenApiClient*, const Model::UpgradeResourcePackageRequest&, const UpgradeResourcePackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeResourcePackageAsyncHandler;

			BssOpenApiClient(const Credentials &credentials, const ClientConfiguration &configuration);
			BssOpenApiClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			BssOpenApiClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~BssOpenApiClient();
			AddAccountRelationOutcome addAccountRelation(const Model::AddAccountRelationRequest &request)const;
			void addAccountRelationAsync(const Model::AddAccountRelationRequest& request, const AddAccountRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddAccountRelationOutcomeCallable addAccountRelationCallable(const Model::AddAccountRelationRequest& request) const;
			AllocateCostUnitResourceOutcome allocateCostUnitResource(const Model::AllocateCostUnitResourceRequest &request)const;
			void allocateCostUnitResourceAsync(const Model::AllocateCostUnitResourceRequest& request, const AllocateCostUnitResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateCostUnitResourceOutcomeCallable allocateCostUnitResourceCallable(const Model::AllocateCostUnitResourceRequest& request) const;
			ApplyInvoiceOutcome applyInvoice(const Model::ApplyInvoiceRequest &request)const;
			void applyInvoiceAsync(const Model::ApplyInvoiceRequest& request, const ApplyInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApplyInvoiceOutcomeCallable applyInvoiceCallable(const Model::ApplyInvoiceRequest& request) const;
			CancelOrderOutcome cancelOrder(const Model::CancelOrderRequest &request)const;
			void cancelOrderAsync(const Model::CancelOrderRequest& request, const CancelOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelOrderOutcomeCallable cancelOrderCallable(const Model::CancelOrderRequest& request) const;
			ChangeResellerConsumeAmountOutcome changeResellerConsumeAmount(const Model::ChangeResellerConsumeAmountRequest &request)const;
			void changeResellerConsumeAmountAsync(const Model::ChangeResellerConsumeAmountRequest& request, const ChangeResellerConsumeAmountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeResellerConsumeAmountOutcomeCallable changeResellerConsumeAmountCallable(const Model::ChangeResellerConsumeAmountRequest& request) const;
			ConfirmRelationOutcome confirmRelation(const Model::ConfirmRelationRequest &request)const;
			void confirmRelationAsync(const Model::ConfirmRelationRequest& request, const ConfirmRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfirmRelationOutcomeCallable confirmRelationCallable(const Model::ConfirmRelationRequest& request) const;
			ConvertChargeTypeOutcome convertChargeType(const Model::ConvertChargeTypeRequest &request)const;
			void convertChargeTypeAsync(const Model::ConvertChargeTypeRequest& request, const ConvertChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConvertChargeTypeOutcomeCallable convertChargeTypeCallable(const Model::ConvertChargeTypeRequest& request) const;
			CreateAgAccountOutcome createAgAccount(const Model::CreateAgAccountRequest &request)const;
			void createAgAccountAsync(const Model::CreateAgAccountRequest& request, const CreateAgAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAgAccountOutcomeCallable createAgAccountCallable(const Model::CreateAgAccountRequest& request) const;
			CreateCostUnitOutcome createCostUnit(const Model::CreateCostUnitRequest &request)const;
			void createCostUnitAsync(const Model::CreateCostUnitRequest& request, const CreateCostUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCostUnitOutcomeCallable createCostUnitCallable(const Model::CreateCostUnitRequest& request) const;
			CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
			void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
			CreateResellerUserQuotaOutcome createResellerUserQuota(const Model::CreateResellerUserQuotaRequest &request)const;
			void createResellerUserQuotaAsync(const Model::CreateResellerUserQuotaRequest& request, const CreateResellerUserQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateResellerUserQuotaOutcomeCallable createResellerUserQuotaCallable(const Model::CreateResellerUserQuotaRequest& request) const;
			CreateResourcePackageOutcome createResourcePackage(const Model::CreateResourcePackageRequest &request)const;
			void createResourcePackageAsync(const Model::CreateResourcePackageRequest& request, const CreateResourcePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateResourcePackageOutcomeCallable createResourcePackageCallable(const Model::CreateResourcePackageRequest& request) const;
			CreateSavingsPlansInstanceOutcome createSavingsPlansInstance(const Model::CreateSavingsPlansInstanceRequest &request)const;
			void createSavingsPlansInstanceAsync(const Model::CreateSavingsPlansInstanceRequest& request, const CreateSavingsPlansInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSavingsPlansInstanceOutcomeCallable createSavingsPlansInstanceCallable(const Model::CreateSavingsPlansInstanceRequest& request) const;
			DeleteCostUnitOutcome deleteCostUnit(const Model::DeleteCostUnitRequest &request)const;
			void deleteCostUnitAsync(const Model::DeleteCostUnitRequest& request, const DeleteCostUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCostUnitOutcomeCallable deleteCostUnitCallable(const Model::DeleteCostUnitRequest& request) const;
			DescribeCostBudgetsSummaryOutcome describeCostBudgetsSummary(const Model::DescribeCostBudgetsSummaryRequest &request)const;
			void describeCostBudgetsSummaryAsync(const Model::DescribeCostBudgetsSummaryRequest& request, const DescribeCostBudgetsSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCostBudgetsSummaryOutcomeCallable describeCostBudgetsSummaryCallable(const Model::DescribeCostBudgetsSummaryRequest& request) const;
			DescribeInstanceAmortizedCostByAmortizationPeriodOutcome describeInstanceAmortizedCostByAmortizationPeriod(const Model::DescribeInstanceAmortizedCostByAmortizationPeriodRequest &request)const;
			void describeInstanceAmortizedCostByAmortizationPeriodAsync(const Model::DescribeInstanceAmortizedCostByAmortizationPeriodRequest& request, const DescribeInstanceAmortizedCostByAmortizationPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceAmortizedCostByAmortizationPeriodOutcomeCallable describeInstanceAmortizedCostByAmortizationPeriodCallable(const Model::DescribeInstanceAmortizedCostByAmortizationPeriodRequest& request) const;
			DescribeInstanceAmortizedCostByAmortizationPeriodDateOutcome describeInstanceAmortizedCostByAmortizationPeriodDate(const Model::DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest &request)const;
			void describeInstanceAmortizedCostByAmortizationPeriodDateAsync(const Model::DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest& request, const DescribeInstanceAmortizedCostByAmortizationPeriodDateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceAmortizedCostByAmortizationPeriodDateOutcomeCallable describeInstanceAmortizedCostByAmortizationPeriodDateCallable(const Model::DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest& request) const;
			DescribeInstanceAmortizedCostByConsumePeriodOutcome describeInstanceAmortizedCostByConsumePeriod(const Model::DescribeInstanceAmortizedCostByConsumePeriodRequest &request)const;
			void describeInstanceAmortizedCostByConsumePeriodAsync(const Model::DescribeInstanceAmortizedCostByConsumePeriodRequest& request, const DescribeInstanceAmortizedCostByConsumePeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceAmortizedCostByConsumePeriodOutcomeCallable describeInstanceAmortizedCostByConsumePeriodCallable(const Model::DescribeInstanceAmortizedCostByConsumePeriodRequest& request) const;
			DescribeInstanceBillOutcome describeInstanceBill(const Model::DescribeInstanceBillRequest &request)const;
			void describeInstanceBillAsync(const Model::DescribeInstanceBillRequest& request, const DescribeInstanceBillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceBillOutcomeCallable describeInstanceBillCallable(const Model::DescribeInstanceBillRequest& request) const;
			DescribePricingModuleOutcome describePricingModule(const Model::DescribePricingModuleRequest &request)const;
			void describePricingModuleAsync(const Model::DescribePricingModuleRequest& request, const DescribePricingModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePricingModuleOutcomeCallable describePricingModuleCallable(const Model::DescribePricingModuleRequest& request) const;
			DescribeProductAmortizedCostByAmortizationPeriodOutcome describeProductAmortizedCostByAmortizationPeriod(const Model::DescribeProductAmortizedCostByAmortizationPeriodRequest &request)const;
			void describeProductAmortizedCostByAmortizationPeriodAsync(const Model::DescribeProductAmortizedCostByAmortizationPeriodRequest& request, const DescribeProductAmortizedCostByAmortizationPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProductAmortizedCostByAmortizationPeriodOutcomeCallable describeProductAmortizedCostByAmortizationPeriodCallable(const Model::DescribeProductAmortizedCostByAmortizationPeriodRequest& request) const;
			DescribeProductAmortizedCostByConsumePeriodOutcome describeProductAmortizedCostByConsumePeriod(const Model::DescribeProductAmortizedCostByConsumePeriodRequest &request)const;
			void describeProductAmortizedCostByConsumePeriodAsync(const Model::DescribeProductAmortizedCostByConsumePeriodRequest& request, const DescribeProductAmortizedCostByConsumePeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProductAmortizedCostByConsumePeriodOutcomeCallable describeProductAmortizedCostByConsumePeriodCallable(const Model::DescribeProductAmortizedCostByConsumePeriodRequest& request) const;
			DescribeResourceCoverageDetailOutcome describeResourceCoverageDetail(const Model::DescribeResourceCoverageDetailRequest &request)const;
			void describeResourceCoverageDetailAsync(const Model::DescribeResourceCoverageDetailRequest& request, const DescribeResourceCoverageDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeResourceCoverageDetailOutcomeCallable describeResourceCoverageDetailCallable(const Model::DescribeResourceCoverageDetailRequest& request) const;
			DescribeResourceCoverageTotalOutcome describeResourceCoverageTotal(const Model::DescribeResourceCoverageTotalRequest &request)const;
			void describeResourceCoverageTotalAsync(const Model::DescribeResourceCoverageTotalRequest& request, const DescribeResourceCoverageTotalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeResourceCoverageTotalOutcomeCallable describeResourceCoverageTotalCallable(const Model::DescribeResourceCoverageTotalRequest& request) const;
			DescribeResourcePackageProductOutcome describeResourcePackageProduct(const Model::DescribeResourcePackageProductRequest &request)const;
			void describeResourcePackageProductAsync(const Model::DescribeResourcePackageProductRequest& request, const DescribeResourcePackageProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeResourcePackageProductOutcomeCallable describeResourcePackageProductCallable(const Model::DescribeResourcePackageProductRequest& request) const;
			DescribeResourceUsageDetailOutcome describeResourceUsageDetail(const Model::DescribeResourceUsageDetailRequest &request)const;
			void describeResourceUsageDetailAsync(const Model::DescribeResourceUsageDetailRequest& request, const DescribeResourceUsageDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeResourceUsageDetailOutcomeCallable describeResourceUsageDetailCallable(const Model::DescribeResourceUsageDetailRequest& request) const;
			DescribeResourceUsageTotalOutcome describeResourceUsageTotal(const Model::DescribeResourceUsageTotalRequest &request)const;
			void describeResourceUsageTotalAsync(const Model::DescribeResourceUsageTotalRequest& request, const DescribeResourceUsageTotalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeResourceUsageTotalOutcomeCallable describeResourceUsageTotalCallable(const Model::DescribeResourceUsageTotalRequest& request) const;
			DescribeSavingsPlansCoverageDetailOutcome describeSavingsPlansCoverageDetail(const Model::DescribeSavingsPlansCoverageDetailRequest &request)const;
			void describeSavingsPlansCoverageDetailAsync(const Model::DescribeSavingsPlansCoverageDetailRequest& request, const DescribeSavingsPlansCoverageDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSavingsPlansCoverageDetailOutcomeCallable describeSavingsPlansCoverageDetailCallable(const Model::DescribeSavingsPlansCoverageDetailRequest& request) const;
			DescribeSavingsPlansCoverageTotalOutcome describeSavingsPlansCoverageTotal(const Model::DescribeSavingsPlansCoverageTotalRequest &request)const;
			void describeSavingsPlansCoverageTotalAsync(const Model::DescribeSavingsPlansCoverageTotalRequest& request, const DescribeSavingsPlansCoverageTotalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSavingsPlansCoverageTotalOutcomeCallable describeSavingsPlansCoverageTotalCallable(const Model::DescribeSavingsPlansCoverageTotalRequest& request) const;
			DescribeSavingsPlansUsageDetailOutcome describeSavingsPlansUsageDetail(const Model::DescribeSavingsPlansUsageDetailRequest &request)const;
			void describeSavingsPlansUsageDetailAsync(const Model::DescribeSavingsPlansUsageDetailRequest& request, const DescribeSavingsPlansUsageDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSavingsPlansUsageDetailOutcomeCallable describeSavingsPlansUsageDetailCallable(const Model::DescribeSavingsPlansUsageDetailRequest& request) const;
			DescribeSavingsPlansUsageTotalOutcome describeSavingsPlansUsageTotal(const Model::DescribeSavingsPlansUsageTotalRequest &request)const;
			void describeSavingsPlansUsageTotalAsync(const Model::DescribeSavingsPlansUsageTotalRequest& request, const DescribeSavingsPlansUsageTotalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSavingsPlansUsageTotalOutcomeCallable describeSavingsPlansUsageTotalCallable(const Model::DescribeSavingsPlansUsageTotalRequest& request) const;
			DescribeSplitItemBillOutcome describeSplitItemBill(const Model::DescribeSplitItemBillRequest &request)const;
			void describeSplitItemBillAsync(const Model::DescribeSplitItemBillRequest& request, const DescribeSplitItemBillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSplitItemBillOutcomeCallable describeSplitItemBillCallable(const Model::DescribeSplitItemBillRequest& request) const;
			EnableBillGenerationOutcome enableBillGeneration(const Model::EnableBillGenerationRequest &request)const;
			void enableBillGenerationAsync(const Model::EnableBillGenerationRequest& request, const EnableBillGenerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableBillGenerationOutcomeCallable enableBillGenerationCallable(const Model::EnableBillGenerationRequest& request) const;
			GetAccountRelationOutcome getAccountRelation(const Model::GetAccountRelationRequest &request)const;
			void getAccountRelationAsync(const Model::GetAccountRelationRequest& request, const GetAccountRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAccountRelationOutcomeCallable getAccountRelationCallable(const Model::GetAccountRelationRequest& request) const;
			GetCustomerAccountInfoOutcome getCustomerAccountInfo(const Model::GetCustomerAccountInfoRequest &request)const;
			void getCustomerAccountInfoAsync(const Model::GetCustomerAccountInfoRequest& request, const GetCustomerAccountInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCustomerAccountInfoOutcomeCallable getCustomerAccountInfoCallable(const Model::GetCustomerAccountInfoRequest& request) const;
			GetCustomerListOutcome getCustomerList(const Model::GetCustomerListRequest &request)const;
			void getCustomerListAsync(const Model::GetCustomerListRequest& request, const GetCustomerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCustomerListOutcomeCallable getCustomerListCallable(const Model::GetCustomerListRequest& request) const;
			GetOrderDetailOutcome getOrderDetail(const Model::GetOrderDetailRequest &request)const;
			void getOrderDetailAsync(const Model::GetOrderDetailRequest& request, const GetOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOrderDetailOutcomeCallable getOrderDetailCallable(const Model::GetOrderDetailRequest& request) const;
			GetPayAsYouGoPriceOutcome getPayAsYouGoPrice(const Model::GetPayAsYouGoPriceRequest &request)const;
			void getPayAsYouGoPriceAsync(const Model::GetPayAsYouGoPriceRequest& request, const GetPayAsYouGoPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPayAsYouGoPriceOutcomeCallable getPayAsYouGoPriceCallable(const Model::GetPayAsYouGoPriceRequest& request) const;
			GetResourcePackagePriceOutcome getResourcePackagePrice(const Model::GetResourcePackagePriceRequest &request)const;
			void getResourcePackagePriceAsync(const Model::GetResourcePackagePriceRequest& request, const GetResourcePackagePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetResourcePackagePriceOutcomeCallable getResourcePackagePriceCallable(const Model::GetResourcePackagePriceRequest& request) const;
			GetSubscriptionPriceOutcome getSubscriptionPrice(const Model::GetSubscriptionPriceRequest &request)const;
			void getSubscriptionPriceAsync(const Model::GetSubscriptionPriceRequest& request, const GetSubscriptionPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSubscriptionPriceOutcomeCallable getSubscriptionPriceCallable(const Model::GetSubscriptionPriceRequest& request) const;
			InquiryPriceRefundInstanceOutcome inquiryPriceRefundInstance(const Model::InquiryPriceRefundInstanceRequest &request)const;
			void inquiryPriceRefundInstanceAsync(const Model::InquiryPriceRefundInstanceRequest& request, const InquiryPriceRefundInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InquiryPriceRefundInstanceOutcomeCallable inquiryPriceRefundInstanceCallable(const Model::InquiryPriceRefundInstanceRequest& request) const;
			ModifyAccountRelationOutcome modifyAccountRelation(const Model::ModifyAccountRelationRequest &request)const;
			void modifyAccountRelationAsync(const Model::ModifyAccountRelationRequest& request, const ModifyAccountRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountRelationOutcomeCallable modifyAccountRelationCallable(const Model::ModifyAccountRelationRequest& request) const;
			ModifyCostUnitOutcome modifyCostUnit(const Model::ModifyCostUnitRequest &request)const;
			void modifyCostUnitAsync(const Model::ModifyCostUnitRequest& request, const ModifyCostUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCostUnitOutcomeCallable modifyCostUnitCallable(const Model::ModifyCostUnitRequest& request) const;
			ModifyInstanceOutcome modifyInstance(const Model::ModifyInstanceRequest &request)const;
			void modifyInstanceAsync(const Model::ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceOutcomeCallable modifyInstanceCallable(const Model::ModifyInstanceRequest& request) const;
			QueryAccountBalanceOutcome queryAccountBalance(const Model::QueryAccountBalanceRequest &request)const;
			void queryAccountBalanceAsync(const Model::QueryAccountBalanceRequest& request, const QueryAccountBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAccountBalanceOutcomeCallable queryAccountBalanceCallable(const Model::QueryAccountBalanceRequest& request) const;
			QueryAccountBillOutcome queryAccountBill(const Model::QueryAccountBillRequest &request)const;
			void queryAccountBillAsync(const Model::QueryAccountBillRequest& request, const QueryAccountBillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAccountBillOutcomeCallable queryAccountBillCallable(const Model::QueryAccountBillRequest& request) const;
			QueryAccountTransactionDetailsOutcome queryAccountTransactionDetails(const Model::QueryAccountTransactionDetailsRequest &request)const;
			void queryAccountTransactionDetailsAsync(const Model::QueryAccountTransactionDetailsRequest& request, const QueryAccountTransactionDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAccountTransactionDetailsOutcomeCallable queryAccountTransactionDetailsCallable(const Model::QueryAccountTransactionDetailsRequest& request) const;
			QueryAccountTransactionsOutcome queryAccountTransactions(const Model::QueryAccountTransactionsRequest &request)const;
			void queryAccountTransactionsAsync(const Model::QueryAccountTransactionsRequest& request, const QueryAccountTransactionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAccountTransactionsOutcomeCallable queryAccountTransactionsCallable(const Model::QueryAccountTransactionsRequest& request) const;
			QueryAvailableInstancesOutcome queryAvailableInstances(const Model::QueryAvailableInstancesRequest &request)const;
			void queryAvailableInstancesAsync(const Model::QueryAvailableInstancesRequest& request, const QueryAvailableInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAvailableInstancesOutcomeCallable queryAvailableInstancesCallable(const Model::QueryAvailableInstancesRequest& request) const;
			QueryBillOutcome queryBill(const Model::QueryBillRequest &request)const;
			void queryBillAsync(const Model::QueryBillRequest& request, const QueryBillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryBillOutcomeCallable queryBillCallable(const Model::QueryBillRequest& request) const;
			QueryBillOverviewOutcome queryBillOverview(const Model::QueryBillOverviewRequest &request)const;
			void queryBillOverviewAsync(const Model::QueryBillOverviewRequest& request, const QueryBillOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryBillOverviewOutcomeCallable queryBillOverviewCallable(const Model::QueryBillOverviewRequest& request) const;
			QueryBillToOSSSubscriptionOutcome queryBillToOSSSubscription(const Model::QueryBillToOSSSubscriptionRequest &request)const;
			void queryBillToOSSSubscriptionAsync(const Model::QueryBillToOSSSubscriptionRequest& request, const QueryBillToOSSSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryBillToOSSSubscriptionOutcomeCallable queryBillToOSSSubscriptionCallable(const Model::QueryBillToOSSSubscriptionRequest& request) const;
			QueryCashCouponsOutcome queryCashCoupons(const Model::QueryCashCouponsRequest &request)const;
			void queryCashCouponsAsync(const Model::QueryCashCouponsRequest& request, const QueryCashCouponsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCashCouponsOutcomeCallable queryCashCouponsCallable(const Model::QueryCashCouponsRequest& request) const;
			QueryCommodityListOutcome queryCommodityList(const Model::QueryCommodityListRequest &request)const;
			void queryCommodityListAsync(const Model::QueryCommodityListRequest& request, const QueryCommodityListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCommodityListOutcomeCallable queryCommodityListCallable(const Model::QueryCommodityListRequest& request) const;
			QueryCostUnitOutcome queryCostUnit(const Model::QueryCostUnitRequest &request)const;
			void queryCostUnitAsync(const Model::QueryCostUnitRequest& request, const QueryCostUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCostUnitOutcomeCallable queryCostUnitCallable(const Model::QueryCostUnitRequest& request) const;
			QueryCostUnitResourceOutcome queryCostUnitResource(const Model::QueryCostUnitResourceRequest &request)const;
			void queryCostUnitResourceAsync(const Model::QueryCostUnitResourceRequest& request, const QueryCostUnitResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCostUnitResourceOutcomeCallable queryCostUnitResourceCallable(const Model::QueryCostUnitResourceRequest& request) const;
			QueryCustomerAddressListOutcome queryCustomerAddressList(const Model::QueryCustomerAddressListRequest &request)const;
			void queryCustomerAddressListAsync(const Model::QueryCustomerAddressListRequest& request, const QueryCustomerAddressListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCustomerAddressListOutcomeCallable queryCustomerAddressListCallable(const Model::QueryCustomerAddressListRequest& request) const;
			QueryDPUtilizationDetailOutcome queryDPUtilizationDetail(const Model::QueryDPUtilizationDetailRequest &request)const;
			void queryDPUtilizationDetailAsync(const Model::QueryDPUtilizationDetailRequest& request, const QueryDPUtilizationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDPUtilizationDetailOutcomeCallable queryDPUtilizationDetailCallable(const Model::QueryDPUtilizationDetailRequest& request) const;
			QueryEvaluateListOutcome queryEvaluateList(const Model::QueryEvaluateListRequest &request)const;
			void queryEvaluateListAsync(const Model::QueryEvaluateListRequest& request, const QueryEvaluateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEvaluateListOutcomeCallable queryEvaluateListCallable(const Model::QueryEvaluateListRequest& request) const;
			QueryFinancialAccountInfoOutcome queryFinancialAccountInfo(const Model::QueryFinancialAccountInfoRequest &request)const;
			void queryFinancialAccountInfoAsync(const Model::QueryFinancialAccountInfoRequest& request, const QueryFinancialAccountInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryFinancialAccountInfoOutcomeCallable queryFinancialAccountInfoCallable(const Model::QueryFinancialAccountInfoRequest& request) const;
			QueryInstanceBillOutcome queryInstanceBill(const Model::QueryInstanceBillRequest &request)const;
			void queryInstanceBillAsync(const Model::QueryInstanceBillRequest& request, const QueryInstanceBillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryInstanceBillOutcomeCallable queryInstanceBillCallable(const Model::QueryInstanceBillRequest& request) const;
			QueryInstanceByTagOutcome queryInstanceByTag(const Model::QueryInstanceByTagRequest &request)const;
			void queryInstanceByTagAsync(const Model::QueryInstanceByTagRequest& request, const QueryInstanceByTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryInstanceByTagOutcomeCallable queryInstanceByTagCallable(const Model::QueryInstanceByTagRequest& request) const;
			QueryInstanceGaapCostOutcome queryInstanceGaapCost(const Model::QueryInstanceGaapCostRequest &request)const;
			void queryInstanceGaapCostAsync(const Model::QueryInstanceGaapCostRequest& request, const QueryInstanceGaapCostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryInstanceGaapCostOutcomeCallable queryInstanceGaapCostCallable(const Model::QueryInstanceGaapCostRequest& request) const;
			QueryInvoicingCustomerListOutcome queryInvoicingCustomerList(const Model::QueryInvoicingCustomerListRequest &request)const;
			void queryInvoicingCustomerListAsync(const Model::QueryInvoicingCustomerListRequest& request, const QueryInvoicingCustomerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryInvoicingCustomerListOutcomeCallable queryInvoicingCustomerListCallable(const Model::QueryInvoicingCustomerListRequest& request) const;
			QueryOrdersOutcome queryOrders(const Model::QueryOrdersRequest &request)const;
			void queryOrdersAsync(const Model::QueryOrdersRequest& request, const QueryOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryOrdersOutcomeCallable queryOrdersCallable(const Model::QueryOrdersRequest& request) const;
			QueryPermissionListOutcome queryPermissionList(const Model::QueryPermissionListRequest &request)const;
			void queryPermissionListAsync(const Model::QueryPermissionListRequest& request, const QueryPermissionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryPermissionListOutcomeCallable queryPermissionListCallable(const Model::QueryPermissionListRequest& request) const;
			QueryPrepaidCardsOutcome queryPrepaidCards(const Model::QueryPrepaidCardsRequest &request)const;
			void queryPrepaidCardsAsync(const Model::QueryPrepaidCardsRequest& request, const QueryPrepaidCardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryPrepaidCardsOutcomeCallable queryPrepaidCardsCallable(const Model::QueryPrepaidCardsRequest& request) const;
			QueryPriceEntityListOutcome queryPriceEntityList(const Model::QueryPriceEntityListRequest &request)const;
			void queryPriceEntityListAsync(const Model::QueryPriceEntityListRequest& request, const QueryPriceEntityListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryPriceEntityListOutcomeCallable queryPriceEntityListCallable(const Model::QueryPriceEntityListRequest& request) const;
			QueryProductListOutcome queryProductList(const Model::QueryProductListRequest &request)const;
			void queryProductListAsync(const Model::QueryProductListRequest& request, const QueryProductListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryProductListOutcomeCallable queryProductListCallable(const Model::QueryProductListRequest& request) const;
			QueryRIUtilizationDetailOutcome queryRIUtilizationDetail(const Model::QueryRIUtilizationDetailRequest &request)const;
			void queryRIUtilizationDetailAsync(const Model::QueryRIUtilizationDetailRequest& request, const QueryRIUtilizationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRIUtilizationDetailOutcomeCallable queryRIUtilizationDetailCallable(const Model::QueryRIUtilizationDetailRequest& request) const;
			QueryRedeemOutcome queryRedeem(const Model::QueryRedeemRequest &request)const;
			void queryRedeemAsync(const Model::QueryRedeemRequest& request, const QueryRedeemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRedeemOutcomeCallable queryRedeemCallable(const Model::QueryRedeemRequest& request) const;
			QueryRelationListOutcome queryRelationList(const Model::QueryRelationListRequest &request)const;
			void queryRelationListAsync(const Model::QueryRelationListRequest& request, const QueryRelationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRelationListOutcomeCallable queryRelationListCallable(const Model::QueryRelationListRequest& request) const;
			QueryResellerAvailableQuotaOutcome queryResellerAvailableQuota(const Model::QueryResellerAvailableQuotaRequest &request)const;
			void queryResellerAvailableQuotaAsync(const Model::QueryResellerAvailableQuotaRequest& request, const QueryResellerAvailableQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryResellerAvailableQuotaOutcomeCallable queryResellerAvailableQuotaCallable(const Model::QueryResellerAvailableQuotaRequest& request) const;
			QueryResellerUserAlarmThresholdOutcome queryResellerUserAlarmThreshold(const Model::QueryResellerUserAlarmThresholdRequest &request)const;
			void queryResellerUserAlarmThresholdAsync(const Model::QueryResellerUserAlarmThresholdRequest& request, const QueryResellerUserAlarmThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryResellerUserAlarmThresholdOutcomeCallable queryResellerUserAlarmThresholdCallable(const Model::QueryResellerUserAlarmThresholdRequest& request) const;
			QueryResourcePackageInstancesOutcome queryResourcePackageInstances(const Model::QueryResourcePackageInstancesRequest &request)const;
			void queryResourcePackageInstancesAsync(const Model::QueryResourcePackageInstancesRequest& request, const QueryResourcePackageInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryResourcePackageInstancesOutcomeCallable queryResourcePackageInstancesCallable(const Model::QueryResourcePackageInstancesRequest& request) const;
			QuerySavingsPlansDeductLogOutcome querySavingsPlansDeductLog(const Model::QuerySavingsPlansDeductLogRequest &request)const;
			void querySavingsPlansDeductLogAsync(const Model::QuerySavingsPlansDeductLogRequest& request, const QuerySavingsPlansDeductLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySavingsPlansDeductLogOutcomeCallable querySavingsPlansDeductLogCallable(const Model::QuerySavingsPlansDeductLogRequest& request) const;
			QuerySavingsPlansDiscountOutcome querySavingsPlansDiscount(const Model::QuerySavingsPlansDiscountRequest &request)const;
			void querySavingsPlansDiscountAsync(const Model::QuerySavingsPlansDiscountRequest& request, const QuerySavingsPlansDiscountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySavingsPlansDiscountOutcomeCallable querySavingsPlansDiscountCallable(const Model::QuerySavingsPlansDiscountRequest& request) const;
			QuerySavingsPlansInstanceOutcome querySavingsPlansInstance(const Model::QuerySavingsPlansInstanceRequest &request)const;
			void querySavingsPlansInstanceAsync(const Model::QuerySavingsPlansInstanceRequest& request, const QuerySavingsPlansInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySavingsPlansInstanceOutcomeCallable querySavingsPlansInstanceCallable(const Model::QuerySavingsPlansInstanceRequest& request) const;
			QuerySettleBillOutcome querySettleBill(const Model::QuerySettleBillRequest &request)const;
			void querySettleBillAsync(const Model::QuerySettleBillRequest& request, const QuerySettleBillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySettleBillOutcomeCallable querySettleBillCallable(const Model::QuerySettleBillRequest& request) const;
			QuerySkuPriceListOutcome querySkuPriceList(const Model::QuerySkuPriceListRequest &request)const;
			void querySkuPriceListAsync(const Model::QuerySkuPriceListRequest& request, const QuerySkuPriceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySkuPriceListOutcomeCallable querySkuPriceListCallable(const Model::QuerySkuPriceListRequest& request) const;
			QuerySplitItemBillOutcome querySplitItemBill(const Model::QuerySplitItemBillRequest &request)const;
			void querySplitItemBillAsync(const Model::QuerySplitItemBillRequest& request, const QuerySplitItemBillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySplitItemBillOutcomeCallable querySplitItemBillCallable(const Model::QuerySplitItemBillRequest& request) const;
			QueryUserOmsDataOutcome queryUserOmsData(const Model::QueryUserOmsDataRequest &request)const;
			void queryUserOmsDataAsync(const Model::QueryUserOmsDataRequest& request, const QueryUserOmsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryUserOmsDataOutcomeCallable queryUserOmsDataCallable(const Model::QueryUserOmsDataRequest& request) const;
			RefundInstanceOutcome refundInstance(const Model::RefundInstanceRequest &request)const;
			void refundInstanceAsync(const Model::RefundInstanceRequest& request, const RefundInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefundInstanceOutcomeCallable refundInstanceCallable(const Model::RefundInstanceRequest& request) const;
			ReleaseInstanceOutcome releaseInstance(const Model::ReleaseInstanceRequest &request)const;
			void releaseInstanceAsync(const Model::ReleaseInstanceRequest& request, const ReleaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseInstanceOutcomeCallable releaseInstanceCallable(const Model::ReleaseInstanceRequest& request) const;
			RelieveAccountRelationOutcome relieveAccountRelation(const Model::RelieveAccountRelationRequest &request)const;
			void relieveAccountRelationAsync(const Model::RelieveAccountRelationRequest& request, const RelieveAccountRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RelieveAccountRelationOutcomeCallable relieveAccountRelationCallable(const Model::RelieveAccountRelationRequest& request) const;
			RenewInstanceOutcome renewInstance(const Model::RenewInstanceRequest &request)const;
			void renewInstanceAsync(const Model::RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewInstanceOutcomeCallable renewInstanceCallable(const Model::RenewInstanceRequest& request) const;
			RenewResourcePackageOutcome renewResourcePackage(const Model::RenewResourcePackageRequest &request)const;
			void renewResourcePackageAsync(const Model::RenewResourcePackageRequest& request, const RenewResourcePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewResourcePackageOutcomeCallable renewResourcePackageCallable(const Model::RenewResourcePackageRequest& request) const;
			SaveUserCreditOutcome saveUserCredit(const Model::SaveUserCreditRequest &request)const;
			void saveUserCreditAsync(const Model::SaveUserCreditRequest& request, const SaveUserCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveUserCreditOutcomeCallable saveUserCreditCallable(const Model::SaveUserCreditRequest& request) const;
			SetAllExpirationDayOutcome setAllExpirationDay(const Model::SetAllExpirationDayRequest &request)const;
			void setAllExpirationDayAsync(const Model::SetAllExpirationDayRequest& request, const SetAllExpirationDayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetAllExpirationDayOutcomeCallable setAllExpirationDayCallable(const Model::SetAllExpirationDayRequest& request) const;
			SetCreditLabelActionOutcome setCreditLabelAction(const Model::SetCreditLabelActionRequest &request)const;
			void setCreditLabelActionAsync(const Model::SetCreditLabelActionRequest& request, const SetCreditLabelActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetCreditLabelActionOutcomeCallable setCreditLabelActionCallable(const Model::SetCreditLabelActionRequest& request) const;
			SetRenewalOutcome setRenewal(const Model::SetRenewalRequest &request)const;
			void setRenewalAsync(const Model::SetRenewalRequest& request, const SetRenewalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetRenewalOutcomeCallable setRenewalCallable(const Model::SetRenewalRequest& request) const;
			SetResellerUserAlarmThresholdOutcome setResellerUserAlarmThreshold(const Model::SetResellerUserAlarmThresholdRequest &request)const;
			void setResellerUserAlarmThresholdAsync(const Model::SetResellerUserAlarmThresholdRequest& request, const SetResellerUserAlarmThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetResellerUserAlarmThresholdOutcomeCallable setResellerUserAlarmThresholdCallable(const Model::SetResellerUserAlarmThresholdRequest& request) const;
			SetResellerUserQuotaOutcome setResellerUserQuota(const Model::SetResellerUserQuotaRequest &request)const;
			void setResellerUserQuotaAsync(const Model::SetResellerUserQuotaRequest& request, const SetResellerUserQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetResellerUserQuotaOutcomeCallable setResellerUserQuotaCallable(const Model::SetResellerUserQuotaRequest& request) const;
			SetResellerUserStatusOutcome setResellerUserStatus(const Model::SetResellerUserStatusRequest &request)const;
			void setResellerUserStatusAsync(const Model::SetResellerUserStatusRequest& request, const SetResellerUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetResellerUserStatusOutcomeCallable setResellerUserStatusCallable(const Model::SetResellerUserStatusRequest& request) const;
			SubscribeBillToOSSOutcome subscribeBillToOSS(const Model::SubscribeBillToOSSRequest &request)const;
			void subscribeBillToOSSAsync(const Model::SubscribeBillToOSSRequest& request, const SubscribeBillToOSSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubscribeBillToOSSOutcomeCallable subscribeBillToOSSCallable(const Model::SubscribeBillToOSSRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UnsubscribeBillToOSSOutcome unsubscribeBillToOSS(const Model::UnsubscribeBillToOSSRequest &request)const;
			void unsubscribeBillToOSSAsync(const Model::UnsubscribeBillToOSSRequest& request, const UnsubscribeBillToOSSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnsubscribeBillToOSSOutcomeCallable unsubscribeBillToOSSCallable(const Model::UnsubscribeBillToOSSRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpgradeResourcePackageOutcome upgradeResourcePackage(const Model::UpgradeResourcePackageRequest &request)const;
			void upgradeResourcePackageAsync(const Model::UpgradeResourcePackageRequest& request, const UpgradeResourcePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeResourcePackageOutcomeCallable upgradeResourcePackageCallable(const Model::UpgradeResourcePackageRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_BSSOPENAPI_BSSOPENAPICLIENT_H_
