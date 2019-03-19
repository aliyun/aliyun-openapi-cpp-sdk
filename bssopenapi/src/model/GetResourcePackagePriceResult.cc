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

#include <alibabacloud/bssopenapi/model/GetResourcePackagePriceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

GetResourcePackagePriceResult::GetResourcePackagePriceResult() :
	ServiceResult()
{}

GetResourcePackagePriceResult::GetResourcePackagePriceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetResourcePackagePriceResult::~GetResourcePackagePriceResult()
{}

void GetResourcePackagePriceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Currency"].isNull())
		data_.currency = dataNode["Currency"].asString();
	if(!dataNode["OriginalPrice"].isNull())
		data_.originalPrice = std::stof(dataNode["OriginalPrice"].asString());
	if(!dataNode["TradePrice"].isNull())
		data_.tradePrice = std::stof(dataNode["TradePrice"].asString());
	if(!dataNode["DiscountPrice"].isNull())
		data_.discountPrice = std::stof(dataNode["DiscountPrice"].asString());
	auto allPromotions = value["Promotions"]["Promotion"];
	for (auto value : allPromotions)
	{
		Data::Promotion promotionObject;
		if(!value["Id"].isNull())
			promotionObject.id = std::stol(value["Id"].asString());
		if(!value["Name"].isNull())
			promotionObject.name = value["Name"].asString();
		data_.promotions.push_back(promotionObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetResourcePackagePriceResult::getMessage()const
{
	return message_;
}

GetResourcePackagePriceResult::Data GetResourcePackagePriceResult::getData()const
{
	return data_;
}

std::string GetResourcePackagePriceResult::getCode()const
{
	return code_;
}

bool GetResourcePackagePriceResult::getSuccess()const
{
	return success_;
}

