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

#include <alibabacloud/market/model/DescribePriceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Market;
using namespace AlibabaCloud::Market::Model;

DescribePriceResult::DescribePriceResult() :
	ServiceResult()
{}

DescribePriceResult::DescribePriceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePriceResult::~DescribePriceResult()
{}

void DescribePriceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPromotionRules = value["PromotionRules"]["PromotionRule"];
	for (auto value : allPromotionRules)
	{
		PromotionRule promotionRulesObject;
		if(!value["RuleId"].isNull())
			promotionRulesObject.ruleId = value["RuleId"].asString();
		if(!value["Name"].isNull())
			promotionRulesObject.name = value["Name"].asString();
		if(!value["Title"].isNull())
			promotionRulesObject.title = value["Title"].asString();
		promotionRules_.push_back(promotionRulesObject);
	}
	if(!value["ProductCode"].isNull())
		productCode_ = value["ProductCode"].asString();
	if(!value["OriginalPrice"].isNull())
		originalPrice_ = std::stof(value["OriginalPrice"].asString());
	if(!value["TradePrice"].isNull())
		tradePrice_ = std::stof(value["TradePrice"].asString());
	if(!value["DiscountPrice"].isNull())
		discountPrice_ = std::stof(value["DiscountPrice"].asString());

}

std::vector<DescribePriceResult::PromotionRule> DescribePriceResult::getPromotionRules()const
{
	return promotionRules_;
}

float DescribePriceResult::getOriginalPrice()const
{
	return originalPrice_;
}

std::string DescribePriceResult::getProductCode()const
{
	return productCode_;
}

float DescribePriceResult::getDiscountPrice()const
{
	return discountPrice_;
}

float DescribePriceResult::getTradePrice()const
{
	return tradePrice_;
}

