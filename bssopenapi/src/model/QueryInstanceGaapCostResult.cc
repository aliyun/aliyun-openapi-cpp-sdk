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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["HostId"].isNull())
		data_.hostId = dataNode["HostId"].asString();
	if(!dataNode["PageNum"].isNull())
		data_.pageNum = std::stoi(dataNode["PageNum"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allModules = value["Modules"]["Module"];
	for (auto value : allModules)
	{
		Data::Module moduleObject;
		if(!value["BillingCycle"].isNull())
			moduleObject.billingCycle = value["BillingCycle"].asString();
		if(!value["InstanceID"].isNull())
			moduleObject.instanceID = value["InstanceID"].asString();
		if(!value["ProductCode"].isNull())
			moduleObject.productCode = value["ProductCode"].asString();
		if(!value["ProductType"].isNull())
			moduleObject.productType = value["ProductType"].asString();
		if(!value["SubscriptionType"].isNull())
			moduleObject.subscriptionType = value["SubscriptionType"].asString();
		if(!value["Tag"].isNull())
			moduleObject.tag = value["Tag"].asString();
		if(!value["ResourceGroup"].isNull())
			moduleObject.resourceGroup = value["ResourceGroup"].asString();
		if(!value["AccountingUnit"].isNull())
			moduleObject.accountingUnit = value["AccountingUnit"].asString();
		if(!value["PayerAccount"].isNull())
			moduleObject.payerAccount = value["PayerAccount"].asString();
		if(!value["OwnerID"].isNull())
			moduleObject.ownerID = value["OwnerID"].asString();
		if(!value["Region"].isNull())
			moduleObject.region = value["Region"].asString();
		if(!value["Currency"].isNull())
			moduleObject.currency = value["Currency"].asString();
		if(!value["PaymentCurrency"].isNull())
			moduleObject.paymentCurrency = value["PaymentCurrency"].asString();
		if(!value["OrderType"].isNull())
			moduleObject.orderType = value["OrderType"].asString();
		if(!value["PayTime"].isNull())
			moduleObject.payTime = value["PayTime"].asString();
		if(!value["PretaxGrossAmount"].isNull())
			moduleObject.pretaxGrossAmount = value["PretaxGrossAmount"].asString();
		if(!value["PricingDiscount"].isNull())
			moduleObject.pricingDiscount = value["PricingDiscount"].asString();
		if(!value["DeductedByCoupons"].isNull())
			moduleObject.deductedByCoupons = value["DeductedByCoupons"].asString();
		if(!value["PretaxAmount"].isNull())
			moduleObject.pretaxAmount = value["PretaxAmount"].asString();
		if(!value["PretaxAmountLocal"].isNull())
			moduleObject.pretaxAmountLocal = value["PretaxAmountLocal"].asString();
		if(!value["DeductedByCashCoupons"].isNull())
			moduleObject.deductedByCashCoupons = value["DeductedByCashCoupons"].asString();
		if(!value["DeductedByPrepaidCard"].isNull())
			moduleObject.deductedByPrepaidCard = value["DeductedByPrepaidCard"].asString();
		if(!value["PaymentAmount"].isNull())
			moduleObject.paymentAmount = value["PaymentAmount"].asString();
		if(!value["GaapPretaxGrossAmount"].isNull())
			moduleObject.gaapPretaxGrossAmount = value["GaapPretaxGrossAmount"].asString();
		if(!value["GaapPricingDiscount"].isNull())
			moduleObject.gaapPricingDiscount = value["GaapPricingDiscount"].asString();
		if(!value["GaapDeductedByCoupons"].isNull())
			moduleObject.gaapDeductedByCoupons = value["GaapDeductedByCoupons"].asString();
		if(!value["GaapPretaxAmount"].isNull())
			moduleObject.gaapPretaxAmount = value["GaapPretaxAmount"].asString();
		if(!value["GaapPretaxAmountLocal"].isNull())
			moduleObject.gaapPretaxAmountLocal = value["GaapPretaxAmountLocal"].asString();
		if(!value["GaapDeductedByCashCoupons"].isNull())
			moduleObject.gaapDeductedByCashCoupons = value["GaapDeductedByCashCoupons"].asString();
		if(!value["GaapDeductedByPrepaidCard"].isNull())
			moduleObject.gaapDeductedByPrepaidCard = value["GaapDeductedByPrepaidCard"].asString();
		if(!value["GaapPaymentAmount"].isNull())
			moduleObject.gaapPaymentAmount = value["GaapPaymentAmount"].asString();
		if(!value["MonthGaapPretaxGrossAmount"].isNull())
			moduleObject.monthGaapPretaxGrossAmount = value["MonthGaapPretaxGrossAmount"].asString();
		if(!value["MonthGaapPricingDiscount"].isNull())
			moduleObject.monthGaapPricingDiscount = value["MonthGaapPricingDiscount"].asString();
		if(!value["MonthGaapDeductedByCoupons"].isNull())
			moduleObject.monthGaapDeductedByCoupons = value["MonthGaapDeductedByCoupons"].asString();
		if(!value["MonthGaapPretaxAmount"].isNull())
			moduleObject.monthGaapPretaxAmount = value["MonthGaapPretaxAmount"].asString();
		if(!value["MonthGaapPretaxAmountLocal"].isNull())
			moduleObject.monthGaapPretaxAmountLocal = value["MonthGaapPretaxAmountLocal"].asString();
		if(!value["MonthGaapDeductedByCashCoupons"].isNull())
			moduleObject.monthGaapDeductedByCashCoupons = value["MonthGaapDeductedByCashCoupons"].asString();
		if(!value["MonthGaapDeductedByPrepaidCard"].isNull())
			moduleObject.monthGaapDeductedByPrepaidCard = value["MonthGaapDeductedByPrepaidCard"].asString();
		if(!value["MonthGaapPaymentAmount"].isNull())
			moduleObject.monthGaapPaymentAmount = value["MonthGaapPaymentAmount"].asString();
		if(!value["UnallocatedPaymentAmount"].isNull())
			moduleObject.unallocatedPaymentAmount = value["UnallocatedPaymentAmount"].asString();
		if(!value["UsageStartDate"].isNull())
			moduleObject.usageStartDate = value["UsageStartDate"].asString();
		if(!value["UsageEndDate"].isNull())
			moduleObject.usageEndDate = value["UsageEndDate"].asString();
		if(!value["BillType"].isNull())
			moduleObject.billType = value["BillType"].asString();
		if(!value["OrderId"].isNull())
			moduleObject.orderId = value["OrderId"].asString();
		if(!value["SubOrderId"].isNull())
			moduleObject.subOrderId = value["SubOrderId"].asString();
		if(!value["UnallocatedPretaxGrossAmount"].isNull())
			moduleObject.unallocatedPretaxGrossAmount = value["UnallocatedPretaxGrossAmount"].asString();
		if(!value["UnallocatedPricingDiscount"].isNull())
			moduleObject.unallocatedPricingDiscount = value["UnallocatedPricingDiscount"].asString();
		if(!value["UnallocatedDeductedByCoupons"].isNull())
			moduleObject.unallocatedDeductedByCoupons = value["UnallocatedDeductedByCoupons"].asString();
		if(!value["UnallocatedPretaxAmount"].isNull())
			moduleObject.unallocatedPretaxAmount = value["UnallocatedPretaxAmount"].asString();
		if(!value["UnallocatedPretaxAmountLocal"].isNull())
			moduleObject.unallocatedPretaxAmountLocal = value["UnallocatedPretaxAmountLocal"].asString();
		if(!value["UnallocatedDeductedByCashCoupons"].isNull())
			moduleObject.unallocatedDeductedByCashCoupons = value["UnallocatedDeductedByCashCoupons"].asString();
		if(!value["UnallocatedDeductedByPrepaidCard"].isNull())
			moduleObject.unallocatedDeductedByPrepaidCard = value["UnallocatedDeductedByPrepaidCard"].asString();
		data_.modules.push_back(moduleObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

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

