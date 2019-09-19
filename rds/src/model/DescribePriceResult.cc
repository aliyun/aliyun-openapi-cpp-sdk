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
		if(!valueRulesRule["RuleId"].isNull())
			rulesObject.ruleId = std::stol(valueRulesRule["RuleId"].asString());
		if(!valueRulesRule["Name"].isNull())
			rulesObject.name = valueRulesRule["Name"].asString();
		if(!valueRulesRule["Description"].isNull())
			rulesObject.description = valueRulesRule["Description"].asString();
		rules_.push_back(rulesObject);
	}
	auto priceInfoNode = value["PriceInfo"];
	if(!priceInfoNode["Currency"].isNull())
		priceInfo_.currency = priceInfoNode["Currency"].asString();
	if(!priceInfoNode["OriginalPrice"].isNull())
		priceInfo_.originalPrice = std::stof(priceInfoNode["OriginalPrice"].asString());
	if(!priceInfoNode["TradePrice"].isNull())
		priceInfo_.tradePrice = std::stof(priceInfoNode["TradePrice"].asString());
	if(!priceInfoNode["DiscountPrice"].isNull())
		priceInfo_.discountPrice = std::stof(priceInfoNode["DiscountPrice"].asString());
	auto allCouponsNode = priceInfoNode["Coupons"]["Coupon"];
	for (auto priceInfoNodeCouponsCoupon : allCouponsNode)
	{
		PriceInfo::Coupon couponObject;
		if(!priceInfoNodeCouponsCoupon["CouponNo"].isNull())
			couponObject.couponNo = priceInfoNodeCouponsCoupon["CouponNo"].asString();
		if(!priceInfoNodeCouponsCoupon["Name"].isNull())
			couponObject.name = priceInfoNodeCouponsCoupon["Name"].asString();
		if(!priceInfoNodeCouponsCoupon["Description"].isNull())
			couponObject.description = priceInfoNodeCouponsCoupon["Description"].asString();
		if(!priceInfoNodeCouponsCoupon["IsSelected"].isNull())
			couponObject.isSelected = priceInfoNodeCouponsCoupon["IsSelected"].asString();
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

}

std::vector<DescribePriceResult::Rule> DescribePriceResult::getRules()const
{
	return rules_;
}

DescribePriceResult::PriceInfo DescribePriceResult::getPriceInfo()const
{
	return priceInfo_;
}

