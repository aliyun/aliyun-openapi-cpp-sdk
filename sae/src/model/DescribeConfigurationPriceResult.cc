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

#include <alibabacloud/sae/model/DescribeConfigurationPriceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

DescribeConfigurationPriceResult::DescribeConfigurationPriceResult() :
	ServiceResult()
{}

DescribeConfigurationPriceResult::DescribeConfigurationPriceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeConfigurationPriceResult::~DescribeConfigurationPriceResult()
{}

void DescribeConfigurationPriceResult::parse(const std::string &payload)
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
		if(!dataNodeRulesRule["RuleDescId"].isNull())
			ruleObject.ruleDescId = std::stol(dataNodeRulesRule["RuleDescId"].asString());
		if(!dataNodeRulesRule["Name"].isNull())
			ruleObject.name = dataNodeRulesRule["Name"].asString();
		data_.rules.push_back(ruleObject);
	}
	auto bagUsageNode = dataNode["BagUsage"];
	if(!bagUsageNode["Cpu"].isNull())
		data_.bagUsage.cpu = std::stof(bagUsageNode["Cpu"].asString());
	if(!bagUsageNode["Mem"].isNull())
		data_.bagUsage.mem = std::stof(bagUsageNode["Mem"].asString());
	auto orderNode = dataNode["Order"];
	if(!orderNode["OriginalAmount"].isNull())
		data_.order.originalAmount = std::stof(orderNode["OriginalAmount"].asString());
	if(!orderNode["DiscountAmount"].isNull())
		data_.order.discountAmount = std::stof(orderNode["DiscountAmount"].asString());
	if(!orderNode["TradeAmount"].isNull())
		data_.order.tradeAmount = std::stof(orderNode["TradeAmount"].asString());
		auto allRuleIds = orderNode["RuleIds"]["RuleId"];
		for (auto value : allRuleIds)
			data_.order.ruleIds.push_back(value.asString());
	auto requestPriceNode = dataNode["RequestPrice"];
	auto allRules2Node = requestPriceNode["Rules"]["Rule"];
	for (auto requestPriceNodeRulesRule : allRules2Node)
	{
		Data::RequestPrice::Rule3 rule3Object;
		if(!requestPriceNodeRulesRule["RuleDescId"].isNull())
			rule3Object.ruleDescId = std::stol(requestPriceNodeRulesRule["RuleDescId"].asString());
		if(!requestPriceNodeRulesRule["Name"].isNull())
			rule3Object.name = requestPriceNodeRulesRule["Name"].asString();
		data_.requestPrice.rules2.push_back(rule3Object);
	}
	auto order1Node = requestPriceNode["Order"];
	if(!order1Node["OriginalAmount"].isNull())
		data_.requestPrice.order1.originalAmount = std::stof(order1Node["OriginalAmount"].asString());
	if(!order1Node["DiscountAmount"].isNull())
		data_.requestPrice.order1.discountAmount = std::stof(order1Node["DiscountAmount"].asString());
	if(!order1Node["TradeAmount"].isNull())
		data_.requestPrice.order1.tradeAmount = std::stof(order1Node["TradeAmount"].asString());
		auto allRuleIds4 = order1Node["RuleIds"]["RuleId"];
		for (auto value : allRuleIds4)
			data_.requestPrice.order1.ruleIds4.push_back(value.asString());
	auto trafficPriceNode = dataNode["TrafficPrice"];
	auto allRules6Node = trafficPriceNode["Rules"]["Rule"];
	for (auto trafficPriceNodeRulesRule : allRules6Node)
	{
		Data::TrafficPrice::Rule7 rule7Object;
		if(!trafficPriceNodeRulesRule["RuleDescId"].isNull())
			rule7Object.ruleDescId = std::stof(trafficPriceNodeRulesRule["RuleDescId"].asString());
		if(!trafficPriceNodeRulesRule["Name"].isNull())
			rule7Object.name = trafficPriceNodeRulesRule["Name"].asString();
		data_.trafficPrice.rules6.push_back(rule7Object);
	}
	auto order5Node = trafficPriceNode["Order"];
	if(!order5Node["OriginalAmount"].isNull())
		data_.trafficPrice.order5.originalAmount = std::stof(order5Node["OriginalAmount"].asString());
	if(!order5Node["DiscountAmount"].isNull())
		data_.trafficPrice.order5.discountAmount = std::stof(order5Node["DiscountAmount"].asString());
	if(!order5Node["TradeAmount"].isNull())
		data_.trafficPrice.order5.tradeAmount = std::stof(order5Node["TradeAmount"].asString());
		auto allRuleIds8 = order5Node["RuleIds"]["RuleId"];
		for (auto value : allRuleIds8)
			data_.trafficPrice.order5.ruleIds8.push_back(value.asString());
	auto cpuMemPriceNode = dataNode["CpuMemPrice"];
	auto allRules10Node = cpuMemPriceNode["Rules"]["Rule"];
	for (auto cpuMemPriceNodeRulesRule : allRules10Node)
	{
		Data::CpuMemPrice::Rule11 rule11Object;
		if(!cpuMemPriceNodeRulesRule["RuleDescId"].isNull())
			rule11Object.ruleDescId = std::stof(cpuMemPriceNodeRulesRule["RuleDescId"].asString());
		if(!cpuMemPriceNodeRulesRule["Name"].isNull())
			rule11Object.name = cpuMemPriceNodeRulesRule["Name"].asString();
		data_.cpuMemPrice.rules10.push_back(rule11Object);
	}
	auto order9Node = cpuMemPriceNode["Order"];
	if(!order9Node["OriginalAmount"].isNull())
		data_.cpuMemPrice.order9.originalAmount = std::stof(order9Node["OriginalAmount"].asString());
	if(!order9Node["DiscountAmount"].isNull())
		data_.cpuMemPrice.order9.discountAmount = std::stof(order9Node["DiscountAmount"].asString());
	if(!order9Node["TradeAmount"].isNull())
		data_.cpuMemPrice.order9.tradeAmount = std::stof(order9Node["TradeAmount"].asString());
		auto allRuleIds12 = order9Node["RuleIds"]["RuleId"];
		for (auto value : allRuleIds12)
			data_.cpuMemPrice.order9.ruleIds12.push_back(value.asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeConfigurationPriceResult::getMessage()const
{
	return message_;
}

std::string DescribeConfigurationPriceResult::getTraceId()const
{
	return traceId_;
}

DescribeConfigurationPriceResult::Data DescribeConfigurationPriceResult::getData()const
{
	return data_;
}

std::string DescribeConfigurationPriceResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeConfigurationPriceResult::getCode()const
{
	return code_;
}

bool DescribeConfigurationPriceResult::getSuccess()const
{
	return success_;
}

