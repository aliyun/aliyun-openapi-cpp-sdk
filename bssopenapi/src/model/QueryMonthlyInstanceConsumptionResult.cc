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

#include <alibabacloud/bssopenapi/model/QueryMonthlyInstanceConsumptionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryMonthlyInstanceConsumptionResult::QueryMonthlyInstanceConsumptionResult() :
	ServiceResult()
{}

QueryMonthlyInstanceConsumptionResult::QueryMonthlyInstanceConsumptionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryMonthlyInstanceConsumptionResult::~QueryMonthlyInstanceConsumptionResult()
{}

void QueryMonthlyInstanceConsumptionResult::parse(const std::string &payload)
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
		if(!value["InstanceID"].isNull())
			itemObject.instanceID = value["InstanceID"].asString();
		if(!value["ProductCode"].isNull())
			itemObject.productCode = value["ProductCode"].asString();
		if(!value["ProductType"].isNull())
			itemObject.productType = value["ProductType"].asString();
		if(!value["SubscriptionType"].isNull())
			itemObject.subscriptionType = value["SubscriptionType"].asString();
		if(!value["Tag"].isNull())
			itemObject.tag = value["Tag"].asString();
		if(!value["ResourceGroup"].isNull())
			itemObject.resourceGroup = value["ResourceGroup"].asString();
		if(!value["PayerAccount"].isNull())
			itemObject.payerAccount = value["PayerAccount"].asString();
		if(!value["OwnerID"].isNull())
			itemObject.ownerID = value["OwnerID"].asString();
		if(!value["Region"].isNull())
			itemObject.region = value["Region"].asString();
		if(!value["PretaxGrossAmount"].isNull())
			itemObject.pretaxGrossAmount = std::stof(value["PretaxGrossAmount"].asString());
		if(!value["DiscountAmount"].isNull())
			itemObject.discountAmount = std::stof(value["DiscountAmount"].asString());
		if(!value["PretaxAmount"].isNull())
			itemObject.pretaxAmount = std::stof(value["PretaxAmount"].asString());
		if(!value["Currency"].isNull())
			itemObject.currency = value["Currency"].asString();
		if(!value["PretaxAmountLocal"].isNull())
			itemObject.pretaxAmountLocal = std::stof(value["PretaxAmountLocal"].asString());
		if(!value["Tax"].isNull())
			itemObject.tax = std::stof(value["Tax"].asString());
		if(!value["AfterTaxAmount"].isNull())
			itemObject.afterTaxAmount = std::stof(value["AfterTaxAmount"].asString());
		if(!value["PaymentCurrency"].isNull())
			itemObject.paymentCurrency = value["PaymentCurrency"].asString();
		data_.items.push_back(itemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryMonthlyInstanceConsumptionResult::getMessage()const
{
	return message_;
}

QueryMonthlyInstanceConsumptionResult::Data QueryMonthlyInstanceConsumptionResult::getData()const
{
	return data_;
}

std::string QueryMonthlyInstanceConsumptionResult::getCode()const
{
	return code_;
}

bool QueryMonthlyInstanceConsumptionResult::getSuccess()const
{
	return success_;
}

