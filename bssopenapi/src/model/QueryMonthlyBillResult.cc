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

#include <alibabacloud/bssopenapi/model/QueryMonthlyBillResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryMonthlyBillResult::QueryMonthlyBillResult() :
	ServiceResult()
{}

QueryMonthlyBillResult::QueryMonthlyBillResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryMonthlyBillResult::~QueryMonthlyBillResult()
{}

void QueryMonthlyBillResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["OutstandingAmount"].isNull())
		data_.outstandingAmount = std::stof(dataNode["OutstandingAmount"].asString());
	if(!dataNode["TotalOutstandingAmount"].isNull())
		data_.totalOutstandingAmount = std::stof(dataNode["TotalOutstandingAmount"].asString());
	if(!dataNode["NewInvoiceAmount"].isNull())
		data_.newInvoiceAmount = std::stof(dataNode["NewInvoiceAmount"].asString());
	if(!dataNode["BillingCycle"].isNull())
		data_.billingCycle = dataNode["BillingCycle"].asString();
	auto allItemsNode = dataNode["Items"]["Item"];
	for (auto dataNodeItemsItem : allItemsNode)
	{
		Data::Item itemObject;
		if(!dataNodeItemsItem["Item"].isNull())
			itemObject.item = dataNodeItemsItem["Item"].asString();
		if(!dataNodeItemsItem["ProductCode"].isNull())
			itemObject.productCode = dataNodeItemsItem["ProductCode"].asString();
		if(!dataNodeItemsItem["ProductType"].isNull())
			itemObject.productType = dataNodeItemsItem["ProductType"].asString();
		if(!dataNodeItemsItem["SubscriptionType"].isNull())
			itemObject.subscriptionType = dataNodeItemsItem["SubscriptionType"].asString();
		if(!dataNodeItemsItem["SolutionCode"].isNull())
			itemObject.solutionCode = dataNodeItemsItem["SolutionCode"].asString();
		if(!dataNodeItemsItem["SolutionName"].isNull())
			itemObject.solutionName = dataNodeItemsItem["SolutionName"].asString();
		if(!dataNodeItemsItem["PretaxGrossAmount"].isNull())
			itemObject.pretaxGrossAmount = std::stof(dataNodeItemsItem["PretaxGrossAmount"].asString());
		if(!dataNodeItemsItem["InvoiceDiscount"].isNull())
			itemObject.invoiceDiscount = std::stof(dataNodeItemsItem["InvoiceDiscount"].asString());
		if(!dataNodeItemsItem["DeductedByCoupons"].isNull())
			itemObject.deductedByCoupons = std::stof(dataNodeItemsItem["DeductedByCoupons"].asString());
		if(!dataNodeItemsItem["PretaxAmount"].isNull())
			itemObject.pretaxAmount = std::stof(dataNodeItemsItem["PretaxAmount"].asString());
		if(!dataNodeItemsItem["Currency"].isNull())
			itemObject.currency = dataNodeItemsItem["Currency"].asString();
		if(!dataNodeItemsItem["PretaxAmountLocal"].isNull())
			itemObject.pretaxAmountLocal = std::stof(dataNodeItemsItem["PretaxAmountLocal"].asString());
		if(!dataNodeItemsItem["Tax"].isNull())
			itemObject.tax = std::stof(dataNodeItemsItem["Tax"].asString());
		if(!dataNodeItemsItem["AfterTaxAmount"].isNull())
			itemObject.afterTaxAmount = std::stof(dataNodeItemsItem["AfterTaxAmount"].asString());
		if(!dataNodeItemsItem["OutstandingAmount"].isNull())
			itemObject.outstandingAmount = std::stof(dataNodeItemsItem["OutstandingAmount"].asString());
		if(!dataNodeItemsItem["DeductedByCashCoupons"].isNull())
			itemObject.deductedByCashCoupons = std::stof(dataNodeItemsItem["DeductedByCashCoupons"].asString());
		if(!dataNodeItemsItem["DeductedByPrepaidCard"].isNull())
			itemObject.deductedByPrepaidCard = std::stof(dataNodeItemsItem["DeductedByPrepaidCard"].asString());
		if(!dataNodeItemsItem["PaymentAmount"].isNull())
			itemObject.paymentAmount = std::stof(dataNodeItemsItem["PaymentAmount"].asString());
		if(!dataNodeItemsItem["PaymentCurrency"].isNull())
			itemObject.paymentCurrency = dataNodeItemsItem["PaymentCurrency"].asString();
		data_.items.push_back(itemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryMonthlyBillResult::getMessage()const
{
	return message_;
}

QueryMonthlyBillResult::Data QueryMonthlyBillResult::getData()const
{
	return data_;
}

std::string QueryMonthlyBillResult::getCode()const
{
	return code_;
}

bool QueryMonthlyBillResult::getSuccess()const
{
	return success_;
}

