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

#include <alibabacloud/appstream-center/model/GetResourcePriceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Appstream_center;
using namespace AlibabaCloud::Appstream_center::Model;

GetResourcePriceResult::GetResourcePriceResult() :
	ServiceResult()
{}

GetResourcePriceResult::GetResourcePriceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetResourcePriceResult::~GetResourcePriceResult()
{}

void GetResourcePriceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto priceModelNode = value["PriceModel"];
	auto allRulesNode = priceModelNode["Rules"]["Rule"];
	for (auto priceModelNodeRulesRule : allRulesNode)
	{
		PriceModel::Rule ruleObject;
		if(!priceModelNodeRulesRule["RuleId"].isNull())
			ruleObject.ruleId = std::stol(priceModelNodeRulesRule["RuleId"].asString());
		if(!priceModelNodeRulesRule["Description"].isNull())
			ruleObject.description = priceModelNodeRulesRule["Description"].asString();
		priceModel_.rules.push_back(ruleObject);
	}
	auto priceNode = priceModelNode["Price"];
	if(!priceNode["OriginalPrice"].isNull())
		priceModel_.price.originalPrice = priceNode["OriginalPrice"].asString();
	if(!priceNode["DiscountPrice"].isNull())
		priceModel_.price.discountPrice = priceNode["DiscountPrice"].asString();
	if(!priceNode["TradePrice"].isNull())
		priceModel_.price.tradePrice = priceNode["TradePrice"].asString();
	if(!priceNode["Currency"].isNull())
		priceModel_.price.currency = priceNode["Currency"].asString();
	auto allPromotionsNode = priceNode["Promotions"]["Promotion"];
	for (auto priceNodePromotionsPromotion : allPromotionsNode)
	{
		PriceModel::Price::Promotion promotionObject;
		if(!priceNodePromotionsPromotion["OptionCode"].isNull())
			promotionObject.optionCode = priceNodePromotionsPromotion["OptionCode"].asString();
		if(!priceNodePromotionsPromotion["PromotionId"].isNull())
			promotionObject.promotionId = priceNodePromotionsPromotion["PromotionId"].asString();
		if(!priceNodePromotionsPromotion["PromotionName"].isNull())
			promotionObject.promotionName = priceNodePromotionsPromotion["PromotionName"].asString();
		if(!priceNodePromotionsPromotion["PromotionDesc"].isNull())
			promotionObject.promotionDesc = priceNodePromotionsPromotion["PromotionDesc"].asString();
		if(!priceNodePromotionsPromotion["Selected"].isNull())
			promotionObject.selected = priceNodePromotionsPromotion["Selected"].asString() == "true";
		priceModel_.price.promotions.push_back(promotionObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetResourcePriceResult::getMessage()const
{
	return message_;
}

GetResourcePriceResult::PriceModel GetResourcePriceResult::getPriceModel()const
{
	return priceModel_;
}

std::string GetResourcePriceResult::getCode()const
{
	return code_;
}

