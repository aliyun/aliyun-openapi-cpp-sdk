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

#include <alibabacloud/rds/model/DescribeRenewalPriceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeRenewalPriceResult::DescribeRenewalPriceResult() :
	ServiceResult()
{}

DescribeRenewalPriceResult::DescribeRenewalPriceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRenewalPriceResult::~DescribeRenewalPriceResult()
{}

void DescribeRenewalPriceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allRules = value["Rules"]["Rule"];
	for (auto value : allRules)
	{
		Rule rulesObject;
		if(!value["RuleId"].isNull())
			rulesObject.ruleId = std::stol(value["RuleId"].asString());
		if(!value["Name"].isNull())
			rulesObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			rulesObject.description = value["Description"].asString();
		rules_.push_back(rulesObject);
	}
	auto allPriceInfo = value["PriceInfo"];
	for (auto value : allPriceInfo)
	{
		PriceInfo priceInfoObject;
		if(!value["Currency"].isNull())
			priceInfoObject.currency = value["Currency"].asString();
		if(!value["OriginalPrice"].isNull())
			priceInfoObject.originalPrice = std::stof(value["OriginalPrice"].asString());
		if(!value["TradePrice"].isNull())
			priceInfoObject.tradePrice = std::stof(value["TradePrice"].asString());
		if(!value["DiscountPrice"].isNull())
			priceInfoObject.discountPrice = std::stof(value["DiscountPrice"].asString());
		auto allCoupons = value["Coupons"]["Coupon"];
		for (auto value : allCoupons)
		{
			PriceInfo::Coupon couponObject;
			if(!value["CouponNo"].isNull())
				couponObject.couponNo = value["CouponNo"].asString();
			if(!value["Name"].isNull())
				couponObject.name = value["Name"].asString();
			if(!value["Description"].isNull())
				couponObject.description = value["Description"].asString();
			if(!value["IsSelected"].isNull())
				couponObject.isSelected = value["IsSelected"].asString();
			priceInfoObject.coupons.push_back(couponObject);
		}
		auto allActivityInfo = value["ActivityInfo"];
		for (auto value : allActivityInfo)
		{
			PriceInfo::ActivityInfo activityInfoObject;
			if(!value["CheckErrMsg"].isNull())
				activityInfoObject.checkErrMsg = value["CheckErrMsg"].asString();
			if(!value["ErrorCode"].isNull())
				activityInfoObject.errorCode = value["ErrorCode"].asString();
			if(!value["Success"].isNull())
				activityInfoObject.success = value["Success"].asString();
			priceInfoObject.activityInfo.push_back(activityInfoObject);
		}
		auto allRuleIds = value["RuleIds"]["RuleId"];
		for (auto value : allRuleIds)
			priceInfoObject.ruleIds.push_back(value.asString());
		priceInfo_.push_back(priceInfoObject);
	}

}

std::vector<DescribeRenewalPriceResult::Rule> DescribeRenewalPriceResult::getRules()const
{
	return rules_;
}

std::vector<DescribeRenewalPriceResult::PriceInfo> DescribeRenewalPriceResult::getPriceInfo()const
{
	return priceInfo_;
}

