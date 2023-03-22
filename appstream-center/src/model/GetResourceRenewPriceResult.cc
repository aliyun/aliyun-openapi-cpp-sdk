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

#include <alibabacloud/appstream-center/model/GetResourceRenewPriceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Appstream_center;
using namespace AlibabaCloud::Appstream_center::Model;

GetResourceRenewPriceResult::GetResourceRenewPriceResult() :
	ServiceResult()
{}

GetResourceRenewPriceResult::GetResourceRenewPriceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetResourceRenewPriceResult::~GetResourceRenewPriceResult()
{}

void GetResourceRenewPriceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allRulesNode = dataNode["Rules"]["Rule"];
	for (auto dataNodeRulesRule : allRulesNode)
	{
		Data::Rule ruleObject;
		if(!dataNodeRulesRule["RuleId"].isNull())
			ruleObject.ruleId = std::stol(dataNodeRulesRule["RuleId"].asString());
		if(!dataNodeRulesRule["Description"].isNull())
			ruleObject.description = dataNodeRulesRule["Description"].asString();
		data_.rules.push_back(ruleObject);
	}
	auto priceNode = dataNode["Price"];
	if(!priceNode["OriginalPrice"].isNull())
		data_.price.originalPrice = priceNode["OriginalPrice"].asString();
	if(!priceNode["DiscountPrice"].isNull())
		data_.price.discountPrice = priceNode["DiscountPrice"].asString();
	if(!priceNode["TradePrice"].isNull())
		data_.price.tradePrice = priceNode["TradePrice"].asString();
	if(!priceNode["Currency"].isNull())
		data_.price.currency = priceNode["Currency"].asString();
	auto allPromotionsNode = priceNode["Promotions"]["Promotion"];
	for (auto priceNodePromotionsPromotion : allPromotionsNode)
	{
		Data::Price::Promotion promotionObject;
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
		data_.price.promotions.push_back(promotionObject);
	}

}

GetResourceRenewPriceResult::Data GetResourceRenewPriceResult::getData()const
{
	return data_;
}

