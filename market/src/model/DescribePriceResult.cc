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
	auto allPromotionRulesNode = value["PromotionRules"]["PromotionRule"];
	for (auto valuePromotionRulesPromotionRule : allPromotionRulesNode)
	{
		PromotionRule promotionRulesObject;
		if(!valuePromotionRulesPromotionRule["Title"].isNull())
			promotionRulesObject.title = valuePromotionRulesPromotionRule["Title"].asString();
		if(!valuePromotionRulesPromotionRule["Name"].isNull())
			promotionRulesObject.name = valuePromotionRulesPromotionRule["Name"].asString();
		if(!valuePromotionRulesPromotionRule["RuleId"].isNull())
			promotionRulesObject.ruleId = valuePromotionRulesPromotionRule["RuleId"].asString();
		promotionRules_.push_back(promotionRulesObject);
	}
	auto allCouponsNode = value["Coupons"]["Coupon"];
	for (auto valueCouponsCoupon : allCouponsNode)
	{
		Coupon couponsObject;
		if(!valueCouponsCoupon["CouponOptionCode"].isNull())
			couponsObject.couponOptionCode = valueCouponsCoupon["CouponOptionCode"].asString();
		if(!valueCouponsCoupon["CouponOptionNo"].isNull())
			couponsObject.couponOptionNo = valueCouponsCoupon["CouponOptionNo"].asString();
		if(!valueCouponsCoupon["CouponName"].isNull())
			couponsObject.couponName = valueCouponsCoupon["CouponName"].asString();
		if(!valueCouponsCoupon["CouponDesc"].isNull())
			couponsObject.couponDesc = valueCouponsCoupon["CouponDesc"].asString();
		if(!valueCouponsCoupon["IsSelected"].isNull())
			couponsObject.isSelected = valueCouponsCoupon["IsSelected"].asString() == "true";
		if(!valueCouponsCoupon["CanPromFee"].isNull())
			couponsObject.canPromFee = std::stof(valueCouponsCoupon["CanPromFee"].asString());
		coupons_.push_back(couponsObject);
	}
	if(!value["ExpressionCode"].isNull())
		expressionCode_ = value["ExpressionCode"].asString();
	if(!value["Cuxiao"].isNull())
		cuxiao_ = value["Cuxiao"].asString() == "true";
	if(!value["DiscountPrice"].isNull())
		discountPrice_ = std::stof(value["DiscountPrice"].asString());
	if(!value["Cycle"].isNull())
		cycle_ = value["Cycle"].asString();
	if(!value["TradePrice"].isNull())
		tradePrice_ = std::stof(value["TradePrice"].asString());
	if(!value["OriginalPrice"].isNull())
		originalPrice_ = std::stof(value["OriginalPrice"].asString());
	if(!value["Duration"].isNull())
		duration_ = std::stoi(value["Duration"].asString());
	if(!value["Currency"].isNull())
		currency_ = value["Currency"].asString();
	if(!value["ExpressionMessage"].isNull())
		expressionMessage_ = value["ExpressionMessage"].asString();
	if(!value["InfoTitle"].isNull())
		infoTitle_ = value["InfoTitle"].asString();
	if(!value["ProductCode"].isNull())
		productCode_ = value["ProductCode"].asString();

}

std::string DescribePriceResult::getExpressionCode()const
{
	return expressionCode_;
}

float DescribePriceResult::getOriginalPrice()const
{
	return originalPrice_;
}

std::string DescribePriceResult::getProductCode()const
{
	return productCode_;
}

int DescribePriceResult::getDuration()const
{
	return duration_;
}

bool DescribePriceResult::getCuxiao()const
{
	return cuxiao_;
}

float DescribePriceResult::getTradePrice()const
{
	return tradePrice_;
}

std::string DescribePriceResult::getCycle()const
{
	return cycle_;
}

std::string DescribePriceResult::getInfoTitle()const
{
	return infoTitle_;
}

std::vector<DescribePriceResult::PromotionRule> DescribePriceResult::getPromotionRules()const
{
	return promotionRules_;
}

float DescribePriceResult::getDiscountPrice()const
{
	return discountPrice_;
}

std::string DescribePriceResult::getCurrency()const
{
	return currency_;
}

std::string DescribePriceResult::getExpressionMessage()const
{
	return expressionMessage_;
}

std::vector<DescribePriceResult::Coupon> DescribePriceResult::getCoupons()const
{
	return coupons_;
}

