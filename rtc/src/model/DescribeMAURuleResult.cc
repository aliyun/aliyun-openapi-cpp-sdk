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

#include <alibabacloud/rtc/model/DescribeMAURuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rtc;
using namespace AlibabaCloud::Rtc::Model;

DescribeMAURuleResult::DescribeMAURuleResult() :
	ServiceResult()
{}

DescribeMAURuleResult::DescribeMAURuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMAURuleResult::~DescribeMAURuleResult()
{}

void DescribeMAURuleResult::parse(const std::string &payload)
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
		if(!valueRulesRule["ChannelPrefix"].isNull())
			rulesObject.channelPrefix = valueRulesRule["ChannelPrefix"].asString();
		if(!valueRulesRule["UseridPrefix"].isNull())
			rulesObject.useridPrefix = valueRulesRule["UseridPrefix"].asString();
		if(!valueRulesRule["TemplateId"].isNull())
			rulesObject.templateId = std::stol(valueRulesRule["TemplateId"].asString());
		if(!valueRulesRule["CallBack"].isNull())
			rulesObject.callBack = valueRulesRule["CallBack"].asString();
		if(!valueRulesRule["IsEnable"].isNull())
			rulesObject.isEnable = std::stoi(valueRulesRule["IsEnable"].asString());
		rules_.push_back(rulesObject);
	}

}

std::vector<DescribeMAURuleResult::Rule> DescribeMAURuleResult::getRules()const
{
	return rules_;
}

