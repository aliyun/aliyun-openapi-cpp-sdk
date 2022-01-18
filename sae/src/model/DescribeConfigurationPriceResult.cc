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

