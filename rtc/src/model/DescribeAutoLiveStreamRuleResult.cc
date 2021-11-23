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

#include <alibabacloud/rtc/model/DescribeAutoLiveStreamRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rtc;
using namespace AlibabaCloud::Rtc::Model;

DescribeAutoLiveStreamRuleResult::DescribeAutoLiveStreamRuleResult() :
	ServiceResult()
{}

DescribeAutoLiveStreamRuleResult::DescribeAutoLiveStreamRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAutoLiveStreamRuleResult::~DescribeAutoLiveStreamRuleResult()
{}

void DescribeAutoLiveStreamRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRulesNode = value["Rules"]["Rule"];
	for (auto valueRulesRule : allRulesNode)
	{
		Rule rulesObject;
		if(!valueRulesRule["Status"].isNull())
			rulesObject.status = valueRulesRule["Status"].asString();
		if(!valueRulesRule["MediaEncode"].isNull())
			rulesObject.mediaEncode = std::stoi(valueRulesRule["MediaEncode"].asString());
		if(!valueRulesRule["PlayDomain"].isNull())
			rulesObject.playDomain = valueRulesRule["PlayDomain"].asString();
		if(!valueRulesRule["CallBack"].isNull())
			rulesObject.callBack = valueRulesRule["CallBack"].asString();
		if(!valueRulesRule["CreateTime"].isNull())
			rulesObject.createTime = valueRulesRule["CreateTime"].asString();
		if(!valueRulesRule["RuleId"].isNull())
			rulesObject.ruleId = std::stol(valueRulesRule["RuleId"].asString());
		if(!valueRulesRule["RuleName"].isNull())
			rulesObject.ruleName = valueRulesRule["RuleName"].asString();
		auto allChannelIds = value["ChannelIds"]["ChannelId"];
		for (auto value : allChannelIds)
			rulesObject.channelIds.push_back(value.asString());
		auto allChannelIdPrefixes = value["ChannelIdPrefixes"]["ChannelIdPrefix"];
		for (auto value : allChannelIdPrefixes)
			rulesObject.channelIdPrefixes.push_back(value.asString());
		rules_.push_back(rulesObject);
	}

}

std::vector<DescribeAutoLiveStreamRuleResult::Rule> DescribeAutoLiveStreamRuleResult::getRules()const
{
	return rules_;
}

