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
	auto allItemsNode = dataNode["Items"]["Item"];
	for (auto dataNodeItemsItem : allItemsNode)
	{
		Data::Item itemObject;
		if(!dataNodeItemsItem["InstanceID"].isNull())
			itemObject.instanceID = dataNodeItemsItem["InstanceID"].asString();
		if(!dataNodeItemsItem["ProductCode"].isNull())
			itemObject.productCode = dataNodeItemsItem["ProductCode"].asString();
		if(!dataNodeItemsItem["ProductType"].isNull())
			itemObject.productType = dataNodeItemsItem["ProductType"].asString();
		if(!dataNodeItemsItem["SubscriptionType"].isNull())
			itemObject.subscriptionType = dataNodeItemsItem["SubscriptionType"].asString();
		if(!dataNodeItemsItem["Tag"].isNull())
			itemObject.tag = dataNodeItemsItem["Tag"].asString();
		if(!dataNodeItemsItem["ResourceGroup"].isNull())
			itemObject.resourceGroup = dataNodeItemsItem["ResourceGroup"].asString();
		if(!dataNodeItemsItem["PayerAccount"].isNull())
			itemObject.payerAccount = dataNodeItemsItem["PayerAccount"].asString();
		if(!dataNodeItemsItem["OwnerID"].isNull())
			itemObject.ownerID = dataNodeItemsItem["OwnerID"].asString();
		if(!dataNodeItemsItem["Region"].isNull())
			itemObject.region = dataNodeItemsItem["Region"].asString();
		if(!dataNodeItemsItem["PretaxGrossAmount"].isNull())
			itemObject.pretaxGrossAmount = std::stof(dataNodeItemsItem["PretaxGrossAmount"].asString());
		if(!dataNodeItemsItem["DiscountAmount"].isNull())
			itemObject.discountAmount = std::stof(dataNodeItemsItem["DiscountAmount"].asString());
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

