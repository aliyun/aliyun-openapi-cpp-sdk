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

#include <alibabacloud/live/model/DescribeLiveStreamWatermarkRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveStreamWatermarkRulesResult::DescribeLiveStreamWatermarkRulesResult() :
	ServiceResult()
{}

DescribeLiveStreamWatermarkRulesResult::DescribeLiveStreamWatermarkRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamWatermarkRulesResult::~DescribeLiveStreamWatermarkRulesResult()
{}

void DescribeLiveStreamWatermarkRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRuleInfoListNode = value["RuleInfoList"]["RuleInfo"];
	for (auto valueRuleInfoListRuleInfo : allRuleInfoListNode)
	{
		RuleInfo ruleInfoListObject;
		if(!valueRuleInfoListRuleInfo["Domain"].isNull())
			ruleInfoListObject.domain = valueRuleInfoListRuleInfo["Domain"].asString();
		if(!valueRuleInfoListRuleInfo["Description"].isNull())
			ruleInfoListObject.description = valueRuleInfoListRuleInfo["Description"].asString();
		if(!valueRuleInfoListRuleInfo["App"].isNull())
			ruleInfoListObject.app = valueRuleInfoListRuleInfo["App"].asString();
		if(!valueRuleInfoListRuleInfo["Stream"].isNull())
			ruleInfoListObject.stream = valueRuleInfoListRuleInfo["Stream"].asString();
		if(!valueRuleInfoListRuleInfo["Name"].isNull())
			ruleInfoListObject.name = valueRuleInfoListRuleInfo["Name"].asString();
		if(!valueRuleInfoListRuleInfo["TemplateId"].isNull())
			ruleInfoListObject.templateId = valueRuleInfoListRuleInfo["TemplateId"].asString();
		if(!valueRuleInfoListRuleInfo["RuleId"].isNull())
			ruleInfoListObject.ruleId = valueRuleInfoListRuleInfo["RuleId"].asString();
		ruleInfoList_.push_back(ruleInfoListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::vector<DescribeLiveStreamWatermarkRulesResult::RuleInfo> DescribeLiveStreamWatermarkRulesResult::getRuleInfoList()const
{
	return ruleInfoList_;
}

int DescribeLiveStreamWatermarkRulesResult::getTotal()const
{
	return total_;
}

