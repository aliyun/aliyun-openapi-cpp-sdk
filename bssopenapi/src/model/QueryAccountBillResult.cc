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

#include <alibabacloud/bssopenapi/model/QueryAccountBillResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryAccountBillResult::QueryAccountBillResult() :
	ServiceResult()
{}

QueryAccountBillResult::QueryAccountBillResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryAccountBillResult::~QueryAccountBillResult()
{}

void QueryAccountBillResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNum"].isNull())
		data_.pageNum = std::stoi(dataNode["PageNum"].asString());
	if(!dataNode["BillingCycle"].isNull())
		data_.billingCycle = dataNode["BillingCycle"].asString();
	if(!dataNode["AccountID"].isNull())
		data_.accountID = dataNode["AccountID"].asString();
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	if(!dataNode["AccountName"].isNull())
		data_.accountName = dataNode["AccountName"].asString();
	auto allItemsNode = dataNode["Items"]["Item"];
	for (auto dataNodeItemsItem : allItemsNode)
	{
		Data::Item itemObject;
		if(!dataNodeItemsItem["PipCode"].isNull())
			itemObject.pipCode = dataNodeItemsItem["PipCode"].asString();
		if(!dataNodeItemsItem["PretaxAmount"].isNull())
			itemObject.pretaxAmount = std::stof(dataNodeItemsItem["PretaxAmount"].asString());
		if(!dataNodeItemsItem["BillingDate"].isNull())
			itemObject.billingDate = dataNodeItemsItem["BillingDate"].asString();
		if(!dataNodeItemsItem["ProductName"].isNull())
			itemObject.productName = dataNodeItemsItem["ProductName"].asString();
		if(!dataNodeItemsItem["AdjustAmount"].isNull())
			itemObject.adjustAmount = std::stof(dataNodeItemsItem["AdjustAmount"].asString());
		if(!dataNodeItemsItem["OwnerName"].isNull())
			itemObject.ownerName = dataNodeItemsItem["OwnerName"].asString();
		if(!dataNodeItemsItem["Currency"].isNull())
			itemObject.currency = dataNodeItemsItem["Currency"].asString();
		if(!dataNodeItemsItem["BillAccountName"].isNull())
			itemObject.billAccountName = dataNodeItemsItem["BillAccountName"].asString();
		if(!dataNodeItemsItem["SubscriptionType"].isNull())
			itemObject.subscriptionType = dataNodeItemsItem["SubscriptionType"].asString();
		if(!dataNodeItemsItem["DeductedByCashCoupons"].isNull())
			itemObject.deductedByCashCoupons = std::stof(dataNodeItemsItem["DeductedByCashCoupons"].asString());
		if(!dataNodeItemsItem["BizType"].isNull())
			itemObject.bizType = dataNodeItemsItem["BizType"].asString();
		if(!dataNodeItemsItem["OwnerID"].isNull())
			itemObject.ownerID = dataNodeItemsItem["OwnerID"].asString();
		if(!dataNodeItemsItem["DeductedByPrepaidCard"].isNull())
			itemObject.deductedByPrepaidCard = std::stof(dataNodeItemsItem["DeductedByPrepaidCard"].asString());
		if(!dataNodeItemsItem["DeductedByCoupons"].isNull())
			itemObject.deductedByCoupons = std::stof(dataNodeItemsItem["DeductedByCoupons"].asString());
		if(!dataNodeItemsItem["BillAccountID"].isNull())
			itemObject.billAccountID = dataNodeItemsItem["BillAccountID"].asString();
		if(!dataNodeItemsItem["PaymentAmount"].isNull())
			itemObject.paymentAmount = std::stof(dataNodeItemsItem["PaymentAmount"].asString());
		if(!dataNodeItemsItem["InvoiceDiscount"].isNull())
			itemObject.invoiceDiscount = std::stof(dataNodeItemsItem["InvoiceDiscount"].asString());
		if(!dataNodeItemsItem["OutstandingAmount"].isNull())
			itemObject.outstandingAmount = std::stof(dataNodeItemsItem["OutstandingAmount"].asString());
		if(!dataNodeItemsItem["CostUnit"].isNull())
			itemObject.costUnit = dataNodeItemsItem["CostUnit"].asString();
		if(!dataNodeItemsItem["PretaxGrossAmount"].isNull())
			itemObject.pretaxGrossAmount = std::stof(dataNodeItemsItem["PretaxGrossAmount"].asString());
		if(!dataNodeItemsItem["CashAmount"].isNull())
			itemObject.cashAmount = std::stof(dataNodeItemsItem["CashAmount"].asString());
		if(!dataNodeItemsItem["ProductCode"].isNull())
			itemObject.productCode = dataNodeItemsItem["ProductCode"].asString();
		data_.items.push_back(itemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryAccountBillResult::getMessage()const
{
	return message_;
}

QueryAccountBillResult::Data QueryAccountBillResult::getData()const
{
	return data_;
}

std::string QueryAccountBillResult::getCode()const
{
	return code_;
}

bool QueryAccountBillResult::getSuccess()const
{
	return success_;
}

