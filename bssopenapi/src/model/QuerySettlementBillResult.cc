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
	auto allItemsNode = dataNode["Items"]["Item"];
	for (auto dataNodeItemsItem : allItemsNode)
	{
		Data::Item itemObject;
		if(!dataNodeItemsItem["RecordID"].isNull())
			itemObject.recordID = dataNodeItemsItem["RecordID"].asString();
		if(!dataNodeItemsItem["Item"].isNull())
			itemObject.item = dataNodeItemsItem["Item"].asString();
		if(!dataNodeItemsItem["PayerAccount"].isNull())
			itemObject.payerAccount = dataNodeItemsItem["PayerAccount"].asString();
		if(!dataNodeItemsItem["OwnerID"].isNull())
			itemObject.ownerID = dataNodeItemsItem["OwnerID"].asString();
		if(!dataNodeItemsItem["CreateTime"].isNull())
			itemObject.createTime = dataNodeItemsItem["CreateTime"].asString();
		if(!dataNodeItemsItem["UsageStartTime"].isNull())
			itemObject.usageStartTime = dataNodeItemsItem["UsageStartTime"].asString();
		if(!dataNodeItemsItem["UsageEndTime"].isNull())
			itemObject.usageEndTime = dataNodeItemsItem["UsageEndTime"].asString();
		if(!dataNodeItemsItem["SuborderID"].isNull())
			itemObject.suborderID = dataNodeItemsItem["SuborderID"].asString();
		if(!dataNodeItemsItem["OrderID"].isNull())
			itemObject.orderID = dataNodeItemsItem["OrderID"].asString();
		if(!dataNodeItemsItem["OrderType"].isNull())
			itemObject.orderType = dataNodeItemsItem["OrderType"].asString();
		if(!dataNodeItemsItem["LinkedCustomerOrderID"].isNull())
			itemObject.linkedCustomerOrderID = dataNodeItemsItem["LinkedCustomerOrderID"].asString();
		if(!dataNodeItemsItem["OriginalOrderID"].isNull())
			itemObject.originalOrderID = dataNodeItemsItem["OriginalOrderID"].asString();
		if(!dataNodeItemsItem["PaymentTime"].isNull())
			itemObject.paymentTime = dataNodeItemsItem["PaymentTime"].asString();
		if(!dataNodeItemsItem["SolutionID"].isNull())
			itemObject.solutionID = dataNodeItemsItem["SolutionID"].asString();
		if(!dataNodeItemsItem["SolutionName"].isNull())
			itemObject.solutionName = dataNodeItemsItem["SolutionName"].asString();
		if(!dataNodeItemsItem["BillID"].isNull())
			itemObject.billID = dataNodeItemsItem["BillID"].asString();
		if(!dataNodeItemsItem["ProductCode"].isNull())
			itemObject.productCode = dataNodeItemsItem["ProductCode"].asString();
		if(!dataNodeItemsItem["ProductType"].isNull())
			itemObject.productType = dataNodeItemsItem["ProductType"].asString();
		if(!dataNodeItemsItem["SubscriptionType"].isNull())
			itemObject.subscriptionType = dataNodeItemsItem["SubscriptionType"].asString();
		if(!dataNodeItemsItem["Region"].isNull())
			itemObject.region = dataNodeItemsItem["Region"].asString();
		if(!dataNodeItemsItem["Config"].isNull())
			itemObject.config = dataNodeItemsItem["Config"].asString();
		if(!dataNodeItemsItem["Quantity"].isNull())
			itemObject.quantity = dataNodeItemsItem["Quantity"].asString();
		if(!dataNodeItemsItem["PretaxGrossAmount"].isNull())
			itemObject.pretaxGrossAmount = std::stof(dataNodeItemsItem["PretaxGrossAmount"].asString());
		if(!dataNodeItemsItem["ChargeDiscount"].isNull())
			itemObject.chargeDiscount = std::stof(dataNodeItemsItem["ChargeDiscount"].asString());
		if(!dataNodeItemsItem["DeductedByCoupons"].isNull())
			itemObject.deductedByCoupons = std::stof(dataNodeItemsItem["DeductedByCoupons"].asString());
		if(!dataNodeItemsItem["AccountDiscount"].isNull())
			itemObject.accountDiscount = std::stof(dataNodeItemsItem["AccountDiscount"].asString());
		if(!dataNodeItemsItem["Promotion"].isNull())
			itemObject.promotion = dataNodeItemsItem["Promotion"].asString();
		if(!dataNodeItemsItem["PretaxAmount"].isNull())
			itemObject.pretaxAmount = std::stof(dataNodeItemsItem["PretaxAmount"].asString());
		if(!dataNodeItemsItem["Currency"].isNull())
			itemObject.currency = dataNodeItemsItem["Currency"].asString();
		if(!dataNodeItemsItem["PretaxAmountLocal"].isNull())
			itemObject.pretaxAmountLocal = std::stof(dataNodeItemsItem["PretaxAmountLocal"].asString());
		if(!dataNodeItemsItem["PreviousBillingCycleBalance"].isNull())
			itemObject.previousBillingCycleBalance = std::stof(dataNodeItemsItem["PreviousBillingCycleBalance"].asString());
		if(!dataNodeItemsItem["Tax"].isNull())
			itemObject.tax = std::stof(dataNodeItemsItem["Tax"].asString());
		if(!dataNodeItemsItem["AfterTaxAmount"].isNull())
			itemObject.afterTaxAmount = std::stof(dataNodeItemsItem["AfterTaxAmount"].asString());
		if(!dataNodeItemsItem["Status"].isNull())
			itemObject.status = dataNodeItemsItem["Status"].asString();
		if(!dataNodeItemsItem["ClearedTime"].isNull())
			itemObject.clearedTime = dataNodeItemsItem["ClearedTime"].asString();
		if(!dataNodeItemsItem["OutstandingAmount"].isNull())
			itemObject.outstandingAmount = std::stof(dataNodeItemsItem["OutstandingAmount"].asString());
		if(!dataNodeItemsItem["DeductedByCashCoupons"].isNull())
			itemObject.deductedByCashCoupons = std::stof(dataNodeItemsItem["DeductedByCashCoupons"].asString());
		if(!dataNodeItemsItem["DeductedByPrepaidCard"].isNull())
			itemObject.deductedByPrepaidCard = std::stof(dataNodeItemsItem["DeductedByPrepaidCard"].asString());
		if(!dataNodeItemsItem["MybankPaymentAmount"].isNull())
			itemObject.mybankPaymentAmount = std::stof(dataNodeItemsItem["MybankPaymentAmount"].asString());
		if(!dataNodeItemsItem["PaymentAmount"].isNull())
			itemObject.paymentAmount = std::stof(dataNodeItemsItem["PaymentAmount"].asString());
		if(!dataNodeItemsItem["PaymentCurrency"].isNull())
			itemObject.paymentCurrency = dataNodeItemsItem["PaymentCurrency"].asString();
		if(!dataNodeItemsItem["Seller"].isNull())
			itemObject.seller = dataNodeItemsItem["Seller"].asString();
		if(!dataNodeItemsItem["InvoiceNo"].isNull())
			itemObject.invoiceNo = dataNodeItemsItem["InvoiceNo"].asString();
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

