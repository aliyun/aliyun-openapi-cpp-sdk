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

#include <alibabacloud/bssopenapi/model/GetSubscriptionPriceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

GetSubscriptionPriceResult::GetSubscriptionPriceResult() :
	ServiceResult()
{}

GetSubscriptionPriceResult::GetSubscriptionPriceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSubscriptionPriceResult::~GetSubscriptionPriceResult()
{}

void GetSubscriptionPriceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["OriginalPrice"].isNull())
		data_.originalPrice = std::stof(dataNode["OriginalPrice"].asString());
	if(!dataNode["DiscountPrice"].isNull())
		data_.discountPrice = std::stof(dataNode["DiscountPrice"].asString());
	if(!dataNode["Currency"].isNull())
		data_.currency = dataNode["Currency"].asString();
	if(!dataNode["Quantity"].isNull())
		data_.quantity = std::stoi(dataNode["Quantity"].asString());
	if(!dataNode["TradePrice"].isNull())
		data_.tradePrice = std::stof(dataNode["TradePrice"].asString());
	auto allModuleDetailsNode = dataNode["ModuleDetails"]["ModuleDetail"];
	for (auto dataNodeModuleDetailsModuleDetail : allModuleDetailsNode)
	{
		Data::ModuleDetail moduleDetailObject;
		if(!dataNodeModuleDetailsModuleDetail["CostAfterDiscount"].isNull())
			moduleDetailObject.costAfterDiscount = std::stof(dataNodeModuleDetailsModuleDetail["CostAfterDiscount"].asString());
		if(!dataNodeModuleDetailsModuleDetail["InvoiceDiscount"].isNull())
			moduleDetailObject.invoiceDiscount = std::stof(dataNodeModuleDetailsModuleDetail["InvoiceDiscount"].asString());
		if(!dataNodeModuleDetailsModuleDetail["UnitPrice"].isNull())
			moduleDetailObject.unitPrice = std::stof(dataNodeModuleDetailsModuleDetail["UnitPrice"].asString());
		if(!dataNodeModuleDetailsModuleDetail["OriginalCost"].isNull())
			moduleDetailObject.originalCost = std::stof(dataNodeModuleDetailsModuleDetail["OriginalCost"].asString());
		if(!dataNodeModuleDetailsModuleDetail["ModuleCode"].isNull())
			moduleDetailObject.moduleCode = dataNodeModuleDetailsModuleDetail["ModuleCode"].asString();
		data_.moduleDetails.push_back(moduleDetailObject);
	}
	auto allPromotionDetailsNode = dataNode["PromotionDetails"]["PromotionDetail"];
	for (auto dataNodePromotionDetailsPromotionDetail : allPromotionDetailsNode)
	{
		Data::PromotionDetail promotionDetailObject;
		if(!dataNodePromotionDetailsPromotionDetail["PromotionDesc"].isNull())
			promotionDetailObject.promotionDesc = dataNodePromotionDetailsPromotionDetail["PromotionDesc"].asString();
		if(!dataNodePromotionDetailsPromotionDetail["PromotionId"].isNull())
			promotionDetailObject.promotionId = std::stol(dataNodePromotionDetailsPromotionDetail["PromotionId"].asString());
		if(!dataNodePromotionDetailsPromotionDetail["PromotionName"].isNull())
			promotionDetailObject.promotionName = dataNodePromotionDetailsPromotionDetail["PromotionName"].asString();
		data_.promotionDetails.push_back(promotionDetailObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetSubscriptionPriceResult::getMessage()const
{
	return message_;
}

GetSubscriptionPriceResult::Data GetSubscriptionPriceResult::getData()const
{
	return data_;
}

std::string GetSubscriptionPriceResult::getCode()const
{
	return code_;
}

bool GetSubscriptionPriceResult::getSuccess()const
{
	return success_;
}

