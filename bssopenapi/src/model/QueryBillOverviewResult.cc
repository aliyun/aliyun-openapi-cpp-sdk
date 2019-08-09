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

#include <alibabacloud/bssopenapi/model/QueryBillOverviewResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryBillOverviewResult::QueryBillOverviewResult() :
	ServiceResult()
{}

QueryBillOverviewResult::QueryBillOverviewResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryBillOverviewResult::~QueryBillOverviewResult()
{}

void QueryBillOverviewResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["BillingCycle"].isNull())
		data_.billingCycle = dataNode["BillingCycle"].asString();
	if(!dataNode["AccountID"].isNull())
		data_.accountID = dataNode["AccountID"].asString();
	if(!dataNode["AccountName"].isNull())
		data_.accountName = dataNode["AccountName"].asString();
	auto allItems = value["Items"]["Item"];
	for (auto value : allItems)
	{
		Data::Item itemObject;
		if(!value["Item"].isNull())
			itemObject.item = value["Item"].asString();
		if(!value["ProductCode"].isNull())
			itemObject.productCode = value["ProductCode"].asString();
		if(!value["ProductType"].isNull())
			itemObject.productType = value["ProductType"].asString();
		if(!value["SubscriptionType"].isNull())
			itemObject.subscriptionType = value["SubscriptionType"].asString();
		if(!value["ProductName"].isNull())
			itemObject.productName = value["ProductName"].asString();
		if(!value["ProductDetail"].isNull())
			itemObject.productDetail = value["ProductDetail"].asString();
		if(!value["PretaxGrossAmount"].isNull())
			itemObject.pretaxGrossAmount = std::stof(value["PretaxGrossAmount"].asString());
		if(!value["InvoiceDiscount"].isNull())
			itemObject.invoiceDiscount = std::stof(value["InvoiceDiscount"].asString());
		if(!value["DeductedByCoupons"].isNull())
			itemObject.deductedByCoupons = std::stof(value["DeductedByCoupons"].asString());
		if(!value["PretaxAmount"].isNull())
			itemObject.pretaxAmount = std::stof(value["PretaxAmount"].asString());
		if(!value["Currency"].isNull())
			itemObject.currency = value["Currency"].asString();
		if(!value["PaymentAmount"].isNull())
			itemObject.paymentAmount = std::stof(value["PaymentAmount"].asString());
		if(!value["OutstandingAmount"].isNull())
			itemObject.outstandingAmount = std::stof(value["OutstandingAmount"].asString());
		if(!value["DeductedByCashCoupons"].isNull())
			itemObject.deductedByCashCoupons = std::stof(value["DeductedByCashCoupons"].asString());
		if(!value["DeductedByPrepaidCard"].isNull())
			itemObject.deductedByPrepaidCard = std::stof(value["DeductedByPrepaidCard"].asString());
		if(!value["PretaxAmountLocal"].isNull())
			itemObject.pretaxAmountLocal = std::stof(value["PretaxAmountLocal"].asString());
		if(!value["Tax"].isNull())
			itemObject.tax = std::stof(value["Tax"].asString());
		if(!value["AfterTaxAmount"].isNull())
			itemObject.afterTaxAmount = std::stof(value["AfterTaxAmount"].asString());
		if(!value["PaymentCurrency"].isNull())
			itemObject.paymentCurrency = value["PaymentCurrency"].asString();
		if(!value["RoundDownDiscount"].isNull())
			itemObject.roundDownDiscount = value["RoundDownDiscount"].asString();
		data_.items.push_back(itemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryBillOverviewResult::getMessage()const
{
	return message_;
}

QueryBillOverviewResult::Data QueryBillOverviewResult::getData()const
{
	return data_;
}

std::string QueryBillOverviewResult::getCode()const
{
	return code_;
}

bool QueryBillOverviewResult::getSuccess()const
{
	return success_;
}

