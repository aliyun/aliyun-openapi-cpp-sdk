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

#include <alibabacloud/dds/model/DescribeRenewalPriceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allRules = value["Rules"]["Rule"];
	for (auto value : allRules)
	{
		Rule rulesObject;
		if(!value["RuleDescId"].isNull())
			rulesObject.ruleDescId = std::stol(value["RuleDescId"].asString());
		if(!value["Name"].isNull())
			rulesObject.name = value["Name"].asString();
		if(!value["Title"].isNull())
			rulesObject.title = value["Title"].asString();
		rules_.push_back(rulesObject);
	}
	auto allSubOrders = value["SubOrders"]["SubOrder"];
	for (auto value : allSubOrders)
	{
		SubOrder subOrdersObject;
		if(!value["OriginalAmount"].isNull())
			subOrdersObject.originalAmount = std::stof(value["OriginalAmount"].asString());
		if(!value["TradeAmount"].isNull())
			subOrdersObject.tradeAmount = std::stof(value["TradeAmount"].asString());
		if(!value["DiscountAmount"].isNull())
			subOrdersObject.discountAmount = std::stof(value["DiscountAmount"].asString());
		if(!value["InstanceId"].isNull())
			subOrdersObject.instanceId = value["InstanceId"].asString();
		auto allRuleIds = value["RuleIds"]["RuleId"];
		for (auto value : allRuleIds)
			subOrdersObject.ruleIds.push_back(value.asString());
		subOrders_.push_back(subOrdersObject);
	}
	auto orderNode = value["Order"];
	if(!orderNode["OriginalAmount"].isNull())
		order_.originalAmount = std::stof(orderNode["OriginalAmount"].asString());
	if(!orderNode["TradeAmount"].isNull())
		order_.tradeAmount = std::stof(orderNode["TradeAmount"].asString());
	if(!orderNode["DiscountAmount"].isNull())
		order_.discountAmount = std::stof(orderNode["DiscountAmount"].asString());
	if(!orderNode["Currency"].isNull())
		order_.currency = orderNode["Currency"].asString();
	auto allCoupons = value["Coupons"]["Coupon"];
	for (auto value : allCoupons)
	{
		Order::Coupon couponObject;
		if(!value["CouponNo"].isNull())
			couponObject.couponNo = value["CouponNo"].asString();
		if(!value["Name"].isNull())
			couponObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			couponObject.description = value["Description"].asString();
		if(!value["IsSelected"].isNull())
			couponObject.isSelected = value["IsSelected"].asString();
		order_.coupons.push_back(couponObject);
	}
		auto allRuleIds1 = orderNode["RuleIds"]["RuleId"];
		for (auto value : allRuleIds1)
			order_.ruleIds1.push_back(value.asString());

}

DescribeRenewalPriceResult::Order DescribeRenewalPriceResult::getOrder()const
{
	return order_;
}

std::vector<DescribeRenewalPriceResult::SubOrder> DescribeRenewalPriceResult::getSubOrders()const
{
	return subOrders_;
}

std::vector<DescribeRenewalPriceResult::Rule> DescribeRenewalPriceResult::getRules()const
{
	return rules_;
}

