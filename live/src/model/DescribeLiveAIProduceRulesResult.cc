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

#include <alibabacloud/live/model/DescribeLiveAIProduceRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveAIProduceRulesResult::DescribeLiveAIProduceRulesResult() :
	ServiceResult()
{}

DescribeLiveAIProduceRulesResult::DescribeLiveAIProduceRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveAIProduceRulesResult::~DescribeLiveAIProduceRulesResult()
{}

void DescribeLiveAIProduceRulesResult::parse(const std::string &payload)
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
		if(!valueRuleInfoListRuleInfo["App"].isNull())
			ruleInfoListObject.app = valueRuleInfoListRuleInfo["App"].asString();
		if(!valueRuleInfoListRuleInfo["SubtitleName"].isNull())
			ruleInfoListObject.subtitleName = valueRuleInfoListRuleInfo["SubtitleName"].asString();
		if(!valueRuleInfoListRuleInfo["IsLazy"].isNull())
			ruleInfoListObject.isLazy = valueRuleInfoListRuleInfo["IsLazy"].asString() == "true";
		if(!valueRuleInfoListRuleInfo["IsOrigin"].isNull())
			ruleInfoListObject.isOrigin = valueRuleInfoListRuleInfo["IsOrigin"].asString() == "true";
		if(!valueRuleInfoListRuleInfo["RulesId"].isNull())
			ruleInfoListObject.rulesId = valueRuleInfoListRuleInfo["RulesId"].asString();
		if(!valueRuleInfoListRuleInfo["LiveTemplate"].isNull())
			ruleInfoListObject.liveTemplate = valueRuleInfoListRuleInfo["LiveTemplate"].asString();
		if(!valueRuleInfoListRuleInfo["GmtModifyTime"].isNull())
			ruleInfoListObject.gmtModifyTime = valueRuleInfoListRuleInfo["GmtModifyTime"].asString();
		if(!valueRuleInfoListRuleInfo["SuffixName"].isNull())
			ruleInfoListObject.suffixName = valueRuleInfoListRuleInfo["SuffixName"].asString();
		if(!valueRuleInfoListRuleInfo["StudioName"].isNull())
			ruleInfoListObject.studioName = valueRuleInfoListRuleInfo["StudioName"].asString();
		if(!valueRuleInfoListRuleInfo["Description"].isNull())
			ruleInfoListObject.description = valueRuleInfoListRuleInfo["Description"].asString();
		ruleInfoList_.push_back(ruleInfoListObject);
	}

}

std::vector<DescribeLiveAIProduceRulesResult::RuleInfo> DescribeLiveAIProduceRulesResult::getRuleInfoList()const
{
	return ruleInfoList_;
}

