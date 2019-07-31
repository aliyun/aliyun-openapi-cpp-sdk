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

#include <alibabacloud/bssopenapi/model/QuerySettlementBillResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QuerySettlementBillResult::QuerySettlementBillResult() :
	ServiceResult()
{}

QuerySettlementBillResult::QuerySettlementBillResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySettlementBillResult::~QuerySettlementBillResult()
{}

void QuerySettlementBillResult::parse(const std::string &payload)
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
	if(!dataNode["BillingCycle"].isNull())
		data_.billingCycle = dataNode["BillingCycle"].asString();
	auto allItems = value["Items"]["Item"];
	for (auto value : allItems)
	{
		Data::Item itemObject;
		if(!value["RecordID"].isNull())
			itemObject.recordID = value["RecordID"].asString();
		if(!value["Item"].isNull())
			itemObject.item = value["Item"].asString();
		if(!value["PayerAccount"].isNull())
			itemObject.payerAccount = value["PayerAccount"].asString();
		if(!value["OwnerID"].isNull())
			itemObject.ownerID = value["OwnerID"].asString();
		if(!value["CreateTime"].isNull())
			itemObject.createTime = value["CreateTime"].asString();
		if(!value["UsageStartTime"].isNull())
			itemObject.usageStartTime = value["UsageStartTime"].asString();
		if(!value["UsageEndTime"].isNull())
			itemObject.usageEndTime = value["UsageEndTime"].asString();
		if(!value["SuborderID"].isNull())
			itemObject.suborderID = value["SuborderID"].asString();
		if(!value["OrderID"].isNull())
			itemObject.orderID = value["OrderID"].asString();
		if(!value["OrderType"].isNull())
			itemObject.orderType = value["OrderType"].asString();
		if(!value["LinkedCustomerOrderID"].isNull())
			itemObject.linkedCustomerOrderID = value["LinkedCustomerOrderID"].asString();
		if(!value["OriginalOrderID"].isNull())
			itemObject.originalOrderID = value["OriginalOrderID"].asString();
		if(!value["PaymentTime"].isNull())
			itemObject.paymentTime = value["PaymentTime"].asString();
		if(!value["SolutionID"].isNull())
			itemObject.solutionID = value["SolutionID"].asString();
		if(!value["SolutionName"].isNull())
			itemObject.solutionName = value["SolutionName"].asString();
		if(!value["BillID"].isNull())
			itemObject.billID = value["BillID"].asString();
		if(!value["ProductCode"].isNull())
			itemObject.productCode = value["ProductCode"].asString();
		if(!value["ProductType"].isNull())
			itemObject.productType = value["ProductType"].asString();
		if(!value["SubscriptionType"].isNull())
			itemObject.subscriptionType = value["SubscriptionType"].asString();
		if(!value["Region"].isNull())
			itemObject.region = value["Region"].asString();
		if(!value["Config"].isNull())
			itemObject.config = value["Config"].asString();
		if(!value["Quantity"].isNull())
			itemObject.quantity = value["Quantity"].asString();
		if(!value["PretaxGrossAmount"].isNull())
			itemObject.pretaxGrossAmount = std::stof(value["PretaxGrossAmount"].asString());
		if(!value["ChargeDiscount"].isNull())
			itemObject.chargeDiscount = std::stof(value["ChargeDiscount"].asString());
		if(!value["DeductedByCoupons"].isNull())
			itemObject.deductedByCoupons = std::stof(value["DeductedByCoupons"].asString());
		if(!value["AccountDiscount"].isNull())
			itemObject.accountDiscount = std::stof(value["AccountDiscount"].asString());
		if(!value["Promotion"].isNull())
			itemObject.promotion = value["Promotion"].asString();
		if(!value["PretaxAmount"].isNull())
			itemObject.pretaxAmount = std::stof(value["PretaxAmount"].asString());
		if(!value["Currency"].isNull())
			itemObject.currency = value["Currency"].asString();
		if(!value["PretaxAmountLocal"].isNull())
			itemObject.pretaxAmountLocal = std::stof(value["PretaxAmountLocal"].asString());
		if(!value["PreviousBillingCycleBalance"].isNull())
			itemObject.previousBillingCycleBalance = std::stof(value["PreviousBillingCycleBalance"].asString());
		if(!value["Tax"].isNull())
			itemObject.tax = std::stof(value["Tax"].asString());
		if(!value["AfterTaxAmount"].isNull())
			itemObject.afterTaxAmount = std::stof(value["AfterTaxAmount"].asString());
		if(!value["Status"].isNull())
			itemObject.status = value["Status"].asString();
		if(!value["ClearedTime"].isNull())
			itemObject.clearedTime = value["ClearedTime"].asString();
		if(!value["OutstandingAmount"].isNull())
			itemObject.outstandingAmount = std::stof(value["OutstandingAmount"].asString());
		if(!value["DeductedByCashCoupons"].isNull())
			itemObject.deductedByCashCoupons = std::stof(value["DeductedByCashCoupons"].asString());
		if(!value["DeductedByPrepaidCard"].isNull())
			itemObject.deductedByPrepaidCard = std::stof(value["DeductedByPrepaidCard"].asString());
		if(!value["MybankPaymentAmount"].isNull())
			itemObject.mybankPaymentAmount = std::stof(value["MybankPaymentAmount"].asString());
		if(!value["PaymentAmount"].isNull())
			itemObject.paymentAmount = std::stof(value["PaymentAmount"].asString());
		if(!value["PaymentCurrency"].isNull())
			itemObject.paymentCurrency = value["PaymentCurrency"].asString();
		if(!value["Seller"].isNull())
			itemObject.seller = value["Seller"].asString();
		if(!value["InvoiceNo"].isNull())
			itemObject.invoiceNo = value["InvoiceNo"].asString();
		data_.items.push_back(itemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QuerySettlementBillResult::getMessage()const
{
	return message_;
}

QuerySettlementBillResult::Data QuerySettlementBillResult::getData()const
{
	return data_;
}

std::string QuerySettlementBillResult::getCode()const
{
	return code_;
}

bool QuerySettlementBillResult::getSuccess()const
{
	return success_;
}

