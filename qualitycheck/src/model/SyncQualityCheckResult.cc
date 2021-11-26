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

#include <alibabacloud/qualitycheck/model/SyncQualityCheckResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

SyncQualityCheckResult::SyncQualityCheckResult() :
	ServiceResult()
{}

SyncQualityCheckResult::SyncQualityCheckResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SyncQualityCheckResult::~SyncQualityCheckResult()
{}

void SyncQualityCheckResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Score"].isNull())
		data_.score = std::stoi(dataNode["Score"].asString());
	if(!dataNode["TaskId"].isNull())
		data_.taskId = dataNode["TaskId"].asString();
	if(!dataNode["Tid"].isNull())
		data_.tid = dataNode["Tid"].asString();
	if(!dataNode["BeginTime"].isNull())
		data_.beginTime = std::stol(dataNode["BeginTime"].asString());
	auto allRulesNode = dataNode["Rules"]["RuleHitInfo"];
	for (auto dataNodeRulesRuleHitInfo : allRulesNode)
	{
		Data::RuleHitInfo ruleHitInfoObject;
		if(!dataNodeRulesRuleHitInfo["RuleName"].isNull())
			ruleHitInfoObject.ruleName = dataNodeRulesRuleHitInfo["RuleName"].asString();
		if(!dataNodeRulesRuleHitInfo["Rid"].isNull())
			ruleHitInfoObject.rid = dataNodeRulesRuleHitInfo["Rid"].asString();
		auto allHitNode = dataNodeRulesRuleHitInfo["Hit"]["ConditionHitInfo"];
		for (auto dataNodeRulesRuleHitInfoHitConditionHitInfo : allHitNode)
		{
			Data::RuleHitInfo::ConditionHitInfo hitObject;
			auto allHitKeyWordsNode = dataNodeRulesRuleHitInfoHitConditionHitInfo["HitKeyWords"]["HitKeyWord"];
			for (auto dataNodeRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord : allHitKeyWordsNode)
			{
				Data::RuleHitInfo::ConditionHitInfo::HitKeyWord hitKeyWordsObject;
				if(!dataNodeRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord["To"].isNull())
					hitKeyWordsObject.to = std::stoi(dataNodeRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord["To"].asString());
				if(!dataNodeRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord["From"].isNull())
					hitKeyWordsObject.from = std::stoi(dataNodeRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord["From"].asString());
				if(!dataNodeRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord["Val"].isNull())
					hitKeyWordsObject.val = dataNodeRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord["Val"].asString();
				if(!dataNodeRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord["Cid"].isNull())
					hitKeyWordsObject.cid = std::stoi(dataNodeRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord["Cid"].asString());
				if(!dataNodeRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord["Pid"].isNull())
					hitKeyWordsObject.pid = std::stoi(dataNodeRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord["Pid"].asString());
				hitObject.hitKeyWords.push_back(hitKeyWordsObject);
			}
			auto phraseNode = value["Phrase"];
			if(!phraseNode["Words"].isNull())
				hitObject.phrase.words = phraseNode["Words"].asString();
			if(!phraseNode["Identity"].isNull())
				hitObject.phrase.identity = phraseNode["Identity"].asString();
			if(!phraseNode["Begin"].isNull())
				hitObject.phrase.begin = std::stol(phraseNode["Begin"].asString());
			if(!phraseNode["EmotionValue"].isNull())
				hitObject.phrase.emotionValue = std::stoi(phraseNode["EmotionValue"].asString());
			if(!phraseNode["End"].isNull())
				hitObject.phrase.end = std::stol(phraseNode["End"].asString());
			if(!phraseNode["SpeechRate"].isNull())
				hitObject.phrase.speechRate = std::stoi(phraseNode["SpeechRate"].asString());
			if(!phraseNode["Role"].isNull())
				hitObject.phrase.role = phraseNode["Role"].asString();
			if(!phraseNode["SilenceDuration"].isNull())
				hitObject.phrase.silenceDuration = std::stoi(phraseNode["SilenceDuration"].asString());
			ruleHitInfoObject.hit.push_back(hitObject);
		}
		data_.rules.push_back(ruleHitInfoObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string SyncQualityCheckResult::getMessage()const
{
	return message_;
}

SyncQualityCheckResult::Data SyncQualityCheckResult::getData()const
{
	return data_;
}

std::string SyncQualityCheckResult::getCode()const
{
	return code_;
}

bool SyncQualityCheckResult::getSuccess()const
{
	return success_;
}

