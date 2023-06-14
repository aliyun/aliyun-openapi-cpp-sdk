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

#include <alibabacloud/ga/model/DescribeCommodityPriceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

DescribeCommodityPriceResult::DescribeCommodityPriceResult() :
	ServiceResult()
{}

DescribeCommodityPriceResult::DescribeCommodityPriceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCommodityPriceResult::~DescribeCommodityPriceResult()
{}

void DescribeCommodityPriceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOrderDetailsNode = value["OrderDetails"]["orderDetailsItem"];
	for (auto valueOrderDetailsorderDetailsItem : allOrderDetailsNode)
	{
		OrderDetailsItem orderDetailsObject;
		if(!valueOrderDetailsorderDetailsItem["CommodityCode"].isNull())
			orderDetailsObject.commodityCode = valueOrderDetailsorderDetailsItem["CommodityCode"].asString();
		if(!valueOrderDetailsorderDetailsItem["CommodityName"].isNull())
			orderDetailsObject.commodityName = valueOrderDetailsorderDetailsItem["CommodityName"].asString();
		if(!valueOrderDetailsorderDetailsItem["OriginalPrice"].isNull())
			orderDetailsObject.originalPrice = valueOrderDetailsorderDetailsItem["OriginalPrice"].asString();
		if(!valueOrderDetailsorderDetailsItem["DiscountPrice"].isNull())
			orderDetailsObject.discountPrice = valueOrderDetailsorderDetailsItem["DiscountPrice"].asString();
		if(!valueOrderDetailsorderDetailsItem["TradePrice"].isNull())
			orderDetailsObject.tradePrice = valueOrderDetailsorderDetailsItem["TradePrice"].asString();
		if(!valueOrderDetailsorderDetailsItem["Quantity"].isNull())
			orderDetailsObject.quantity = std::stol(valueOrderDetailsorderDetailsItem["Quantity"].asString());
		auto allModuleDetailsNode = valueOrderDetailsorderDetailsItem["ModuleDetails"]["moduleDetailsItem"];
		for (auto valueOrderDetailsorderDetailsItemModuleDetailsmoduleDetailsItem : allModuleDetailsNode)
		{
			OrderDetailsItem::ModuleDetailsItem moduleDetailsObject;
			if(!valueOrderDetailsorderDetailsItemModuleDetailsmoduleDetailsItem["ModuleCode"].isNull())
				moduleDetailsObject.moduleCode = valueOrderDetailsorderDetailsItemModuleDetailsmoduleDetailsItem["ModuleCode"].asString();
			if(!valueOrderDetailsorderDetailsItemModuleDetailsmoduleDetailsItem["ModuleName"].isNull())
				moduleDetailsObject.moduleName = valueOrderDetailsorderDetailsItemModuleDetailsmoduleDetailsItem["ModuleName"].asString();
			if(!valueOrderDetailsorderDetailsItemModuleDetailsmoduleDetailsItem["OriginalPrice"].isNull())
				moduleDetailsObject.originalPrice = valueOrderDetailsorderDetailsItemModuleDetailsmoduleDetailsItem["OriginalPrice"].asString();
			if(!valueOrderDetailsorderDetailsItemModuleDetailsmoduleDetailsItem["DiscountPrice"].isNull())
				moduleDetailsObject.discountPrice = valueOrderDetailsorderDetailsItemModuleDetailsmoduleDetailsItem["DiscountPrice"].asString();
			if(!valueOrderDetailsorderDetailsItemModuleDetailsmoduleDetailsItem["TradePrice"].isNull())
				moduleDetailsObject.tradePrice = valueOrderDetailsorderDetailsItemModuleDetailsmoduleDetailsItem["TradePrice"].asString();
			orderDetailsObject.moduleDetails.push_back(moduleDetailsObject);
		}
		auto allPromDetailsNode = valueOrderDetailsorderDetailsItem["PromDetails"]["promDetailsItem"];
		for (auto valueOrderDetailsorderDetailsItemPromDetailspromDetailsItem : allPromDetailsNode)
		{
			OrderDetailsItem::PromDetailsItem promDetailsObject;
			if(!valueOrderDetailsorderDetailsItemPromDetailspromDetailsItem["PromotionId"].isNull())
				promDetailsObject.promotionId = valueOrderDetailsorderDetailsItemPromDetailspromDetailsItem["PromotionId"].asString();
			if(!valueOrderDetailsorderDetailsItemPromDetailspromDetailsItem["PromotionName"].isNull())
				promDetailsObject.promotionName = valueOrderDetailsorderDetailsItemPromDetailspromDetailsItem["PromotionName"].asString();
			if(!valueOrderDetailsorderDetailsItemPromDetailspromDetailsItem["FinalPromFee"].isNull())
				promDetailsObject.finalPromFee = valueOrderDetailsorderDetailsItemPromDetailspromDetailsItem["FinalPromFee"].asString();
			if(!valueOrderDetailsorderDetailsItemPromDetailspromDetailsItem["PromType"].isNull())
				promDetailsObject.promType = valueOrderDetailsorderDetailsItemPromDetailspromDetailsItem["PromType"].asString();
			if(!valueOrderDetailsorderDetailsItemPromDetailspromDetailsItem["OptionCode"].isNull())
				promDetailsObject.optionCode = valueOrderDetailsorderDetailsItemPromDetailspromDetailsItem["OptionCode"].asString();
			orderDetailsObject.promDetails.push_back(promDetailsObject);
		}
		auto allRuleIds = value["RuleIds"]["ruleIds"];
		for (auto value : allRuleIds)
			orderDetailsObject.ruleIds.push_back(value.asString());
		orderDetails_.push_back(orderDetailsObject);
	}
	auto allRuleDetailsNode = value["RuleDetails"]["ruleDetailsItem"];
	for (auto valueRuleDetailsruleDetailsItem : allRuleDetailsNode)
	{
		RuleDetailsItem ruleDetailsObject;
		if(!valueRuleDetailsruleDetailsItem["RuleId"].isNull())
			ruleDetailsObject.ruleId = valueRuleDetailsruleDetailsItem["RuleId"].asString();
		if(!valueRuleDetailsruleDetailsItem["RuleName"].isNull())
			ruleDetailsObject.ruleName = valueRuleDetailsruleDetailsItem["RuleName"].asString();
		ruleDetails_.push_back(ruleDetailsObject);
	}
	auto allPromotionsNode = value["Promotions"]["promotionDetails"];
	for (auto valuePromotionspromotionDetails : allPromotionsNode)
	{
		PromotionDetails promotionsObject;
		if(!valuePromotionspromotionDetails["PromotionOptionNo"].isNull())
			promotionsObject.promotionOptionNo = valuePromotionspromotionDetails["PromotionOptionNo"].asString();
		if(!valuePromotionspromotionDetails["PromotionName"].isNull())
			promotionsObject.promotionName = valuePromotionspromotionDetails["PromotionName"].asString();
		if(!valuePromotionspromotionDetails["CanPromFee"].isNull())
			promotionsObject.canPromFee = valuePromotionspromotionDetails["CanPromFee"].asString();
		if(!valuePromotionspromotionDetails["Selected"].isNull())
			promotionsObject.selected = valuePromotionspromotionDetails["Selected"].asString() == "true";
		if(!valuePromotionspromotionDetails["OptionCode"].isNull())
			promotionsObject.optionCode = valuePromotionspromotionDetails["OptionCode"].asString();
		promotions_.push_back(promotionsObject);
	}
	if(!value["Currency"].isNull())
		currency_ = value["Currency"].asString();
	if(!value["OriginalPrice"].isNull())
		originalPrice_ = value["OriginalPrice"].asString();
	if(!value["DiscountPrice"].isNull())
		discountPrice_ = value["DiscountPrice"].asString();
	if(!value["TradePrice"].isNull())
		tradePrice_ = value["TradePrice"].asString();

}

double DescribeCommodityPriceResult::getOriginalPrice()const
{
	return originalPrice_;
}

std::vector<DescribeCommodityPriceResult::PromotionDetails> DescribeCommodityPriceResult::getPromotions()const
{
	return promotions_;
}

std::vector<DescribeCommodityPriceResult::OrderDetailsItem> DescribeCommodityPriceResult::getOrderDetails()const
{
	return orderDetails_;
}

std::string DescribeCommodityPriceResult::getCurrency()const
{
	return currency_;
}

double DescribeCommodityPriceResult::getDiscountPrice()const
{
	return discountPrice_;
}

double DescribeCommodityPriceResult::getTradePrice()const
{
	return tradePrice_;
}

std::vector<DescribeCommodityPriceResult::RuleDetailsItem> DescribeCommodityPriceResult::getRuleDetails()const
{
	return ruleDetails_;
}

