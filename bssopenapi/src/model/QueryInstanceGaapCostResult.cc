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

#include <alibabacloud/bssopenapi/model/QueryInstanceGaapCostResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryInstanceGaapCostResult::QueryInstanceGaapCostResult() :
	ServiceResult()
{}

QueryInstanceGaapCostResult::QueryInstanceGaapCostResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryInstanceGaapCostResult::~QueryInstanceGaapCostResult()
{}

void QueryInstanceGaapCostResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNum"].isNull())
		data_.pageNum = std::stoi(dataNode["PageNum"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	if(!dataNode["HostId"].isNull())
		data_.hostId = dataNode["HostId"].asString();
	auto allModulesNode = dataNode["Modules"]["Module"];
	for (auto dataNodeModulesModule : allModulesNode)
	{
		Data::Module moduleObject;
		if(!dataNodeModulesModule["GaapDeductedByCashCoupons"].isNull())
			moduleObject.gaapDeductedByCashCoupons = dataNodeModulesModule["GaapDeductedByCashCoupons"].asString();
		if(!dataNodeModulesModule["SubscriptionType"].isNull())
			moduleObject.subscriptionType = dataNodeModulesModule["SubscriptionType"].asString();
		if(!dataNodeModulesModule["MonthGaapPretaxAmount"].isNull())
			moduleObject.monthGaapPretaxAmount = dataNodeModulesModule["MonthGaapPretaxAmount"].asString();
		if(!dataNodeModulesModule["DeductedByCoupons"].isNull())
			moduleObject.deductedByCoupons = dataNodeModulesModule["DeductedByCoupons"].asString();
		if(!dataNodeModulesModule["SubOrderId"].isNull())
			moduleObject.subOrderId = dataNodeModulesModule["SubOrderId"].asString();
		if(!dataNodeModulesModule["Region"].isNull())
			moduleObject.region = dataNodeModulesModule["Region"].asString();
		if(!dataNodeModulesModule["OrderType"].isNull())
			moduleObject.orderType = dataNodeModulesModule["OrderType"].asString();
		if(!dataNodeModulesModule["MonthGaapDeductedByPrepaidCard"].isNull())
			moduleObject.monthGaapDeductedByPrepaidCard = dataNodeModulesModule["MonthGaapDeductedByPrepaidCard"].asString();
		if(!dataNodeModulesModule["UnallocatedDeductedByCashCoupons"].isNull())
			moduleObject.unallocatedDeductedByCashCoupons = dataNodeModulesModule["UnallocatedDeductedByCashCoupons"].asString();
		if(!dataNodeModulesModule["PretaxAmountLocal"].isNull())
			moduleObject.pretaxAmountLocal = dataNodeModulesModule["PretaxAmountLocal"].asString();
		if(!dataNodeModulesModule["BillingCycle"].isNull())
			moduleObject.billingCycle = dataNodeModulesModule["BillingCycle"].asString();
		if(!dataNodeModulesModule["PayerAccount"].isNull())
			moduleObject.payerAccount = dataNodeModulesModule["PayerAccount"].asString();
		if(!dataNodeModulesModule["MonthGaapPretaxAmountLocal"].isNull())
			moduleObject.monthGaapPretaxAmountLocal = dataNodeModulesModule["MonthGaapPretaxAmountLocal"].asString();
		if(!dataNodeModulesModule["AccountingUnit"].isNull())
			moduleObject.accountingUnit = dataNodeModulesModule["AccountingUnit"].asString();
		if(!dataNodeModulesModule["GaapPretaxAmountLocal"].isNull())
			moduleObject.gaapPretaxAmountLocal = dataNodeModulesModule["GaapPretaxAmountLocal"].asString();
		if(!dataNodeModulesModule["UnallocatedDeductedByPrepaidCard"].isNull())
			moduleObject.unallocatedDeductedByPrepaidCard = dataNodeModulesModule["UnallocatedDeductedByPrepaidCard"].asString();
		if(!dataNodeModulesModule["ProductType"].isNull())
			moduleObject.productType = dataNodeModulesModule["ProductType"].asString();
		if(!dataNodeModulesModule["PaymentAmount"].isNull())
			moduleObject.paymentAmount = dataNodeModulesModule["PaymentAmount"].asString();
		if(!dataNodeModulesModule["MonthGaapPretaxGrossAmount"].isNull())
			moduleObject.monthGaapPretaxGrossAmount = dataNodeModulesModule["MonthGaapPretaxGrossAmount"].asString();
		if(!dataNodeModulesModule["BillType"].isNull())
			moduleObject.billType = dataNodeModulesModule["BillType"].asString();
		if(!dataNodeModulesModule["PayTime"].isNull())
			moduleObject.payTime = dataNodeModulesModule["PayTime"].asString();
		if(!dataNodeModulesModule["PretaxGrossAmount"].isNull())
			moduleObject.pretaxGrossAmount = dataNodeModulesModule["PretaxGrossAmount"].asString();
		if(!dataNodeModulesModule["OrderId"].isNull())
			moduleObject.orderId = dataNodeModulesModule["OrderId"].asString();
		if(!dataNodeModulesModule["UnallocatedPricingDiscount"].isNull())
			moduleObject.unallocatedPricingDiscount = dataNodeModulesModule["UnallocatedPricingDiscount"].asString();
		if(!dataNodeModulesModule["MonthGaapDeductedByCashCoupons"].isNull())
			moduleObject.monthGaapDeductedByCashCoupons = dataNodeModulesModule["MonthGaapDeductedByCashCoupons"].asString();
		if(!dataNodeModulesModule["UnallocatedPretaxGrossAmount"].isNull())
			moduleObject.unallocatedPretaxGrossAmount = dataNodeModulesModule["UnallocatedPretaxGrossAmount"].asString();
		if(!dataNodeModulesModule["InstanceID"].isNull())
			moduleObject.instanceID = dataNodeModulesModule["InstanceID"].asString();
		if(!dataNodeModulesModule["Tag"].isNull())
			moduleObject.tag = dataNodeModulesModule["Tag"].asString();
		if(!dataNodeModulesModule["Currency"].isNull())
			moduleObject.currency = dataNodeModulesModule["Currency"].asString();
		if(!dataNodeModulesModule["GaapDeductedByCoupons"].isNull())
			moduleObject.gaapDeductedByCoupons = dataNodeModulesModule["GaapDeductedByCoupons"].asString();
		if(!dataNodeModulesModule["DeductedByCashCoupons"].isNull())
			moduleObject.deductedByCashCoupons = dataNodeModulesModule["DeductedByCashCoupons"].asString();
		if(!dataNodeModulesModule["GaapDeductedByPrepaidCard"].isNull())
			moduleObject.gaapDeductedByPrepaidCard = dataNodeModulesModule["GaapDeductedByPrepaidCard"].asString();
		if(!dataNodeModulesModule["GaapPaymentAmount"].isNull())
			moduleObject.gaapPaymentAmount = dataNodeModulesModule["GaapPaymentAmount"].asString();
		if(!dataNodeModulesModule["UnallocatedPretaxAmountLocal"].isNull())
			moduleObject.unallocatedPretaxAmountLocal = dataNodeModulesModule["UnallocatedPretaxAmountLocal"].asString();
		if(!dataNodeModulesModule["MonthGaapPricingDiscount"].isNull())
			moduleObject.monthGaapPricingDiscount = dataNodeModulesModule["MonthGaapPricingDiscount"].asString();
		if(!dataNodeModulesModule["PricingDiscount"].isNull())
			moduleObject.pricingDiscount = dataNodeModulesModule["PricingDiscount"].asString();
		if(!dataNodeModulesModule["GaapPricingDiscount"].isNull())
			moduleObject.gaapPricingDiscount = dataNodeModulesModule["GaapPricingDiscount"].asString();
		if(!dataNodeModulesModule["ResourceGroup"].isNull())
			moduleObject.resourceGroup = dataNodeModulesModule["ResourceGroup"].asString();
		if(!dataNodeModulesModule["UnallocatedDeductedByCoupons"].isNull())
			moduleObject.unallocatedDeductedByCoupons = dataNodeModulesModule["UnallocatedDeductedByCoupons"].asString();
		if(!dataNodeModulesModule["PretaxAmount"].isNull())
			moduleObject.pretaxAmount = dataNodeModulesModule["PretaxAmount"].asString();
		if(!dataNodeModulesModule["UnallocatedPretaxAmount"].isNull())
			moduleObject.unallocatedPretaxAmount = dataNodeModulesModule["UnallocatedPretaxAmount"].asString();
		if(!dataNodeModulesModule["GaapPretaxGrossAmount"].isNull())
			moduleObject.gaapPretaxGrossAmount = dataNodeModulesModule["GaapPretaxGrossAmount"].asString();
		if(!dataNodeModulesModule["UnallocatedPaymentAmount"].isNull())
			moduleObject.unallocatedPaymentAmount = dataNodeModulesModule["UnallocatedPaymentAmount"].asString();
		if(!dataNodeModulesModule["PaymentCurrency"].isNull())
			moduleObject.paymentCurrency = dataNodeModulesModule["PaymentCurrency"].asString();
		if(!dataNodeModulesModule["OwnerID"].isNull())
			moduleObject.ownerID = dataNodeModulesModule["OwnerID"].asString();
		if(!dataNodeModulesModule["DeductedByPrepaidCard"].isNull())
			moduleObject.deductedByPrepaidCard = dataNodeModulesModule["DeductedByPrepaidCard"].asString();
		if(!dataNodeModulesModule["GaapPretaxAmount"].isNull())
			moduleObject.gaapPretaxAmount = dataNodeModulesModule["GaapPretaxAmount"].asString();
		if(!dataNodeModulesModule["MonthGaapDeductedByCoupons"].isNull())
			moduleObject.monthGaapDeductedByCoupons = dataNodeModulesModule["MonthGaapDeductedByCoupons"].asString();
		if(!dataNodeModulesModule["MonthGaapPaymentAmount"].isNull())
			moduleObject.monthGaapPaymentAmount = dataNodeModulesModule["MonthGaapPaymentAmount"].asString();
		if(!dataNodeModulesModule["UsageEndDate"].isNull())
			moduleObject.usageEndDate = dataNodeModulesModule["UsageEndDate"].asString();
		if(!dataNodeModulesModule["UsageStartDate"].isNull())
			moduleObject.usageStartDate = dataNodeModulesModule["UsageStartDate"].asString();
		if(!dataNodeModulesModule["ProductCode"].isNull())
			moduleObject.productCode = dataNodeModulesModule["ProductCode"].asString();
		data_.modules.push_back(moduleObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryInstanceGaapCostResult::getMessage()const
{
	return message_;
}

QueryInstanceGaapCostResult::Data QueryInstanceGaapCostResult::getData()const
{
	return data_;
}

std::string QueryInstanceGaapCostResult::getCode()const
{
	return code_;
}

bool QueryInstanceGaapCostResult::getSuccess()const
{
	return success_;
}

