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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSubOrdersNode = value["SubOrders"]["SubOrder"];
	for (auto valueSubOrdersSubOrder : allSubOrdersNode)
	{
		SubOrder subOrdersObject;
		if(!valueSubOrdersSubOrder["OriginalAmount"].isNull())
			subOrdersObject.originalAmount = std::stof(valueSubOrdersSubOrder["OriginalAmount"].asString());
		if(!valueSubOrdersSubOrder["DiscountAmount"].isNull())
			subOrdersObject.discountAmount = std::stof(valueSubOrdersSubOrder["DiscountAmount"].asString());
		if(!valueSubOrdersSubOrder["TradeAmount"].isNull())
			subOrdersObject.tradeAmount = std::stof(valueSubOrdersSubOrder["TradeAmount"].asString());
		if(!valueSubOrdersSubOrder["InstanceId"].isNull())
			subOrdersObject.instanceId = valueSubOrdersSubOrder["InstanceId"].asString();
		auto allRuleIds = value["RuleIds"]["RuleId"];
		for (auto value : allRuleIds)
			subOrdersObject.ruleIds.push_back(value.asString());
		subOrders_.push_back(subOrdersObject);
	}
	auto allRulesNode = value["Rules"]["Rule"];
	for (auto valueRulesRule : allRulesNode)
	{
		Rule rulesObject;
		if(!valueRulesRule["RuleDescId"].isNull())
			rulesObject.ruleDescId = std::stol(valueRulesRule["RuleDescId"].asString());
		if(!valueRulesRule["Title"].isNull())
			rulesObject.title = valueRulesRule["Title"].asString();
		if(!valueRulesRule["Name"].isNull())
			rulesObject.name = valueRulesRule["Name"].asString();
		rules_.push_back(rulesObject);
	}
	auto orderNode = value["Order"];
	if(!orderNode["OriginalAmount"].isNull())
		order_.originalAmount = std::stof(orderNode["OriginalAmount"].asString());
	if(!orderNode["DiscountAmount"].isNull())
		order_.discountAmount = std::stof(orderNode["DiscountAmount"].asString());
	if(!orderNode["TradeAmount"].isNull())
		order_.tradeAmount = std::stof(orderNode["TradeAmount"].asString());
	if(!orderNode["Currency"].isNull())
		order_.currency = orderNode["Currency"].asString();
	auto allCouponsNode = orderNode["Coupons"]["Coupon"];
	for (auto orderNodeCouponsCoupon : allCouponsNode)
	{
		Order::Coupon couponObject;
		if(!orderNodeCouponsCoupon["Description"].isNull())
			couponObject.description = orderNodeCouponsCoupon["Description"].asString();
		if(!orderNodeCouponsCoupon["IsSelected"].isNull())
			couponObject.isSelected = orderNodeCouponsCoupon["IsSelected"].asString();
		if(!orderNodeCouponsCoupon["CouponNo"].isNull())
			couponObject.couponNo = orderNodeCouponsCoupon["CouponNo"].asString();
		if(!orderNodeCouponsCoupon["Name"].isNull())
			couponObject.name = orderNodeCouponsCoupon["Name"].asString();
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

