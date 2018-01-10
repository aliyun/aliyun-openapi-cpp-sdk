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

#include <alibabacloud/rds/model/QueryPriceForBuyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

QueryPriceForBuyResult::QueryPriceForBuyResult() :
	ServiceResult()
{}

QueryPriceForBuyResult::QueryPriceForBuyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryPriceForBuyResult::~QueryPriceForBuyResult()
{}

void QueryPriceForBuyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allRules = value["Rules"]["Rule"];
	for (auto value : allRules)
	{
		Rule ruleObject;
		ruleObject.ruleId = std::stol(value["RuleId"].asString());
		ruleObject.name = value["Name"].asString();
		ruleObject.description = value["Description"].asString();
		rules_.push_back(ruleObject);
	}
	auto allPriceInfo = value["PriceInfo"];
	for (auto value : allPriceInfo)
	{
		PriceInfo priceInfoObject;
		priceInfoObject.currency = value["Currency"].asString();
		priceInfoObject.originalPrice = std::stof(value["OriginalPrice"].asString());
		priceInfoObject.tradePrice = std::stof(value["TradePrice"].asString());
		priceInfoObject.discountPrice = std::stof(value["DiscountPrice"].asString());
		auto allCoupons = value["Coupons"]["Coupon"];
		for (auto value : allCoupons)
		{
			PriceInfo::Coupon couponObject;
			couponObject.couponNo = value["CouponNo"].asString();
			couponObject.name = value["Name"].asString();
			couponObject.description = value["Description"].asString();
			couponObject.isSelected = value["IsSelected"].asString();
			priceInfoObject.coupons.push_back(couponObject);
		}
		auto allActivityInfo = value["ActivityInfo"];
		for (auto value : allActivityInfo)
		{
			PriceInfo::ActivityInfo activityInfoObject;
			activityInfoObject.checkErrMsg = value["CheckErrMsg"].asString();
			activityInfoObject.errorCode = value["ErrorCode"].asString();
			activityInfoObject.success = value["Success"].asString();
			priceInfoObject.activityInfo.push_back(activityInfoObject);
		}
		auto allRuleIds = value["RuleIds"]["RuleId"];
		for (auto value : allRuleIds)
			priceInfoObject.ruleIds.push_back(value.asString());
		priceInfo_.push_back(priceInfoObject);
	}

}

