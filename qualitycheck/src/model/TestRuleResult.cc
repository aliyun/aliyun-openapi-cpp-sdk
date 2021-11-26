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

#include <alibabacloud/qualitycheck/model/TestRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

TestRuleResult::TestRuleResult() :
	ServiceResult()
{}

TestRuleResult::TestRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TestRuleResult::~TestRuleResult()
{}

void TestRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Poc"].isNull())
		data_.poc = dataNode["Poc"].asString() == "true";
	auto allHitRuleReviewInfoListNode = dataNode["HitRuleReviewInfoList"]["HitRuleReviewInfo"];
	for (auto dataNodeHitRuleReviewInfoListHitRuleReviewInfo : allHitRuleReviewInfoListNode)
	{
		Data::HitRuleReviewInfo hitRuleReviewInfoObject;
		if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfo["Rid"].isNull())
			hitRuleReviewInfoObject.rid = std::stol(dataNodeHitRuleReviewInfoListHitRuleReviewInfo["Rid"].asString());
		auto allConditionHitInfoListNode = dataNodeHitRuleReviewInfoListHitRuleReviewInfo["ConditionHitInfoList"]["ConditionHitInfo"];
		for (auto dataNodeHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo : allConditionHitInfoListNode)
		{
			Data::HitRuleReviewInfo::ConditionHitInfo conditionHitInfoListObject;
			auto allKeyWordsNode = dataNodeHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfo["KeyWords"]["KeyWord"];
			for (auto dataNodeHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord : allKeyWordsNode)
			{
				Data::HitRuleReviewInfo::ConditionHitInfo::KeyWord keyWordsObject;
				if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord["To"].isNull())
					keyWordsObject.to = std::stoi(dataNodeHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord["To"].asString());
				if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord["From"].isNull())
					keyWordsObject.from = std::stoi(dataNodeHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord["From"].asString());
				if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord["Val"].isNull())
					keyWordsObject.val = dataNodeHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord["Val"].asString();
				if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord["Tid"].isNull())
					keyWordsObject.tid = dataNodeHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord["Tid"].asString();
				if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord["Pid"].isNull())
					keyWordsObject.pid = std::stoi(dataNodeHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord["Pid"].asString());
				conditionHitInfoListObject.keyWords.push_back(keyWordsObject);
			}
			auto phraseNode = value["Phrase"];
			if(!phraseNode["Words"].isNull())
				conditionHitInfoListObject.phrase.words = phraseNode["Words"].asString();
			if(!phraseNode["Begin"].isNull())
				conditionHitInfoListObject.phrase.begin = std::stol(phraseNode["Begin"].asString());
			if(!phraseNode["Identity"].isNull())
				conditionHitInfoListObject.phrase.identity = phraseNode["Identity"].asString();
			if(!phraseNode["Pid"].isNull())
				conditionHitInfoListObject.phrase.pid = std::stoi(phraseNode["Pid"].asString());
			if(!phraseNode["EmotionValue"].isNull())
				conditionHitInfoListObject.phrase.emotionValue = std::stoi(phraseNode["EmotionValue"].asString());
			if(!phraseNode["End"].isNull())
				conditionHitInfoListObject.phrase.end = std::stol(phraseNode["End"].asString());
			if(!phraseNode["Role"].isNull())
				conditionHitInfoListObject.phrase.role = phraseNode["Role"].asString();
			auto allCid = value["Cid"]["cid"];
			for (auto value : allCid)
				conditionHitInfoListObject.cid.push_back(value.asString());
			hitRuleReviewInfoObject.conditionHitInfoList.push_back(conditionHitInfoListObject);
		}
		data_.hitRuleReviewInfoList.push_back(hitRuleReviewInfoObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string TestRuleResult::getMessage()const
{
	return message_;
}

TestRuleResult::Data TestRuleResult::getData()const
{
	return data_;
}

std::string TestRuleResult::getCode()const
{
	return code_;
}

bool TestRuleResult::getSuccess()const
{
	return success_;
}

