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

#include <alibabacloud/bssopenapi/model/GetPayAsYouGoPriceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

GetPayAsYouGoPriceResult::GetPayAsYouGoPriceResult() :
	ServiceResult()
{}

GetPayAsYouGoPriceResult::GetPayAsYouGoPriceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPayAsYouGoPriceResult::~GetPayAsYouGoPriceResult()
{}

void GetPayAsYouGoPriceResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Currency"].isNull())
		data_.currency = dataNode["Currency"].asString();
	auto allModuleDetails = value["ModuleDetails"]["ModuleDetail"];
	for (auto value : allModuleDetails)
	{
		Data::ModuleDetail moduleDetailObject;
		if(!value["ModuleCode"].isNull())
			moduleDetailObject.moduleCode = value["ModuleCode"].asString();
		if(!value["OriginalCost"].isNull())
			moduleDetailObject.originalCost = std::stof(value["OriginalCost"].asString());
		if(!value["InvoiceDiscount"].isNull())
			moduleDetailObject.invoiceDiscount = std::stof(value["InvoiceDiscount"].asString());
		if(!value["CostAfterDiscount"].isNull())
			moduleDetailObject.costAfterDiscount = std::stof(value["CostAfterDiscount"].asString());
		if(!value["UnitPrice"].isNull())
			moduleDetailObject.unitPrice = std::stof(value["UnitPrice"].asString());
		data_.moduleDetails.push_back(moduleDetailObject);
	}
	auto allPromotionDetails = value["PromotionDetails"]["PromotionDetail"];
	for (auto value : allPromotionDetails)
	{
		Data::PromotionDetail promotionDetailObject;
		if(!value["PromotionName"].isNull())
			promotionDetailObject.promotionName = value["PromotionName"].asString();
		if(!value["PromotionDesc"].isNull())
			promotionDetailObject.promotionDesc = value["PromotionDesc"].asString();
		if(!value["PromotionId"].isNull())
			promotionDetailObject.promotionId = std::stol(value["PromotionId"].asString());
		data_.promotionDetails.push_back(promotionDetailObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetPayAsYouGoPriceResult::getMessage()const
{
	return message_;
}

GetPayAsYouGoPriceResult::Data GetPayAsYouGoPriceResult::getData()const
{
	return data_;
}

std::string GetPayAsYouGoPriceResult::getCode()const
{
	return code_;
}

bool GetPayAsYouGoPriceResult::getSuccess()const
{
	return success_;
}

