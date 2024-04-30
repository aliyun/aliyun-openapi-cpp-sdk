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

#include <alibabacloud/rds/model/DescribePriceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

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
	auto allRulesNode = value["Rules"]["Rule"];
	for (auto valueRulesRule : allRulesNode)
	{
		Rule rulesObject;
		if(!valueRulesRule["Name"].isNull())
			rulesObject.name = valueRulesRule["Name"].asString();
		if(!valueRulesRule["Description"].isNull())
			rulesObject.description = valueRulesRule["Description"].asString();
		if(!valueRulesRule["RuleId"].isNull())
			rulesObject.ruleId = std::stol(valueRulesRule["RuleId"].asString());
		rules_.push_back(rulesObject);
	}
	auto priceInfoNode = value["PriceInfo"];
	if(!priceInfoNode["OriginalPrice"].isNull())
		priceInfo_.originalPrice = std::stof(priceInfoNode["OriginalPrice"].asString());
	if(!priceInfoNode["DiscountPrice"].isNull())
		priceInfo_.discountPrice = std::stof(priceInfoNode["DiscountPrice"].asString());
	if(!priceInfoNode["Currency"].isNull())
		priceInfo_.currency = priceInfoNode["Currency"].asString();
	if(!priceInfoNode["TradePrice"].isNull())
		priceInfo_.tradePrice = std::stof(priceInfoNode["TradePrice"].asString());
	if(!priceInfoNode["TradeMinRCUAmount"].isNull())
		priceInfo_.tradeMinRCUAmount = std::stof(priceInfoNode["TradeMinRCUAmount"].asString());
	if(!priceInfoNode["TradeMaxRCUAmount"].isNull())
		priceInfo_.tradeMaxRCUAmount = std::stof(priceInfoNode["TradeMaxRCUAmount"].asString());
	if(!priceInfoNode["OrderLines"].isNull())
		priceInfo_.orderLines = priceInfoNode["OrderLines"].asString();
	auto allCouponsNode = priceInfoNode["Coupons"]["Coupon"];
	for (auto priceInfoNodeCouponsCoupon : allCouponsNode)
	{
		PriceInfo::Coupon couponObject;
		if(!priceInfoNodeCouponsCoupon["IsSelected"].isNull())
			couponObject.isSelected = priceInfoNodeCouponsCoupon["IsSelected"].asString();
		if(!priceInfoNodeCouponsCoupon["CouponNo"].isNull())
			couponObject.couponNo = priceInfoNodeCouponsCoupon["CouponNo"].asString();
		if(!priceInfoNodeCouponsCoupon["Name"].isNull())
			couponObject.name = priceInfoNodeCouponsCoupon["Name"].asString();
		if(!priceInfoNodeCouponsCoupon["Description"].isNull())
			couponObject.description = priceInfoNodeCouponsCoupon["Description"].asString();
		priceInfo_.coupons.push_back(couponObject);
	}
	auto activityInfoNode = priceInfoNode["ActivityInfo"];
	if(!activityInfoNode["CheckErrMsg"].isNull())
		priceInfo_.activityInfo.checkErrMsg = activityInfoNode["CheckErrMsg"].asString();
	if(!activityInfoNode["ErrorCode"].isNull())
		priceInfo_.activityInfo.errorCode = activityInfoNode["ErrorCode"].asString();
	if(!activityInfoNode["Success"].isNull())
		priceInfo_.activityInfo.success = activityInfoNode["Success"].asString();
		auto allRuleIds = priceInfoNode["RuleIds"]["RuleId"];
		for (auto value : allRuleIds)
			priceInfo_.ruleIds.push_back(value.asString());
	auto serverlessPriceNode = value["ServerlessPrice"];
	if(!serverlessPriceNode["TotalOriginalMinAmount"].isNull())
		serverlessPrice_.totalOriginalMinAmount = std::stof(serverlessPriceNode["TotalOriginalMinAmount"].asString());
	if(!serverlessPriceNode["TotalOriginalMaxAmount"].isNull())
		serverlessPrice_.totalOriginalMaxAmount = std::stof(serverlessPriceNode["TotalOriginalMaxAmount"].asString());
	if(!serverlessPriceNode["RCUOriginalMinAmount"].isNull())
		serverlessPrice_.rCUOriginalMinAmount = std::stof(serverlessPriceNode["RCUOriginalMinAmount"].asString());
	if(!serverlessPriceNode["RCUOriginalMaxAmount"].isNull())
		serverlessPrice_.rCUOriginalMaxAmount = std::stof(serverlessPriceNode["RCUOriginalMaxAmount"].asString());
	if(!serverlessPriceNode["RCUDiscountMinAmount"].isNull())
		serverlessPrice_.rCUDiscountMinAmount = std::stof(serverlessPriceNode["RCUDiscountMinAmount"].asString());
	if(!serverlessPriceNode["RCUDiscountMaxAmount"].isNull())
		serverlessPrice_.rCUDiscountMaxAmount = std::stof(serverlessPriceNode["RCUDiscountMaxAmount"].asString());
	if(!serverlessPriceNode["TradeMinRCUAmount"].isNull())
		serverlessPrice_.tradeMinRCUAmount = std::stof(serverlessPriceNode["TradeMinRCUAmount"].asString());
	if(!serverlessPriceNode["TradeMaxRCUAmount"].isNull())
		serverlessPrice_.tradeMaxRCUAmount = std::stof(serverlessPriceNode["TradeMaxRCUAmount"].asString());
	if(!serverlessPriceNode["StorageOriginalAmount"].isNull())
		serverlessPrice_.storageOriginalAmount = std::stof(serverlessPriceNode["StorageOriginalAmount"].asString());
	if(!serverlessPriceNode["storageDiscountAmount"].isNull())
		serverlessPrice_.storageDiscountAmount = std::stof(serverlessPriceNode["storageDiscountAmount"].asString());
	if(!value["OrderParams"].isNull())
		orderParams_ = value["OrderParams"].asString();
	if(!value["ShowDiscount"].isNull())
		showDiscount_ = value["ShowDiscount"].asString() == "true";
	if(!value["TradeMaxRCUAmount"].isNull())
		tradeMaxRCUAmount_ = std::stof(value["TradeMaxRCUAmount"].asString());
	if(!value["TradeMinRCUAmount"].isNull())
		tradeMinRCUAmount_ = std::stof(value["TradeMinRCUAmount"].asString());

}

float DescribePriceResult::getTradeMinRCUAmount()const
{
	return tradeMinRCUAmount_;
}

bool DescribePriceResult::getShowDiscount()const
{
	return showDiscount_;
}

DescribePriceResult::ServerlessPrice DescribePriceResult::getServerlessPrice()const
{
	return serverlessPrice_;
}

std::string DescribePriceResult::getOrderParams()const
{
	return orderParams_;
}

float DescribePriceResult::getTradeMaxRCUAmount()const
{
	return tradeMaxRCUAmount_;
}

std::vector<DescribePriceResult::Rule> DescribePriceResult::getRules()const
{
	return rules_;
}

DescribePriceResult::PriceInfo DescribePriceResult::getPriceInfo()const
{
	return priceInfo_;
}

