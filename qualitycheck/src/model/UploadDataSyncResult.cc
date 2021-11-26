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

#include <alibabacloud/qualitycheck/model/UploadDataSyncResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

UploadDataSyncResult::UploadDataSyncResult() :
	ServiceResult()
{}

UploadDataSyncResult::UploadDataSyncResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UploadDataSyncResult::~UploadDataSyncResult()
{}

void UploadDataSyncResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["ResultInfo"];
	for (auto valueDataResultInfo : allDataNode)
	{
		ResultInfo dataObject;
		if(!valueDataResultInfo["Score"].isNull())
			dataObject.score = std::stoi(valueDataResultInfo["Score"].asString());
		auto allRulesNode = valueDataResultInfo["Rules"]["RuleHitInfo"];
		for (auto valueDataResultInfoRulesRuleHitInfo : allRulesNode)
		{
			ResultInfo::RuleHitInfo rulesObject;
			if(!valueDataResultInfoRulesRuleHitInfo["Tid"].isNull())
				rulesObject.tid = valueDataResultInfoRulesRuleHitInfo["Tid"].asString();
			if(!valueDataResultInfoRulesRuleHitInfo["Rid"].isNull())
				rulesObject.rid = valueDataResultInfoRulesRuleHitInfo["Rid"].asString();
			auto allHitNode = valueDataResultInfoRulesRuleHitInfo["Hit"]["ConditionHitInfo"];
			for (auto valueDataResultInfoRulesRuleHitInfoHitConditionHitInfo : allHitNode)
			{
				ResultInfo::RuleHitInfo::ConditionHitInfo hitObject;
				auto allHitKeyWordsNode = valueDataResultInfoRulesRuleHitInfoHitConditionHitInfo["HitKeyWords"]["HitKeyWord"];
				for (auto valueDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord : allHitKeyWordsNode)
				{
					ResultInfo::RuleHitInfo::ConditionHitInfo::HitKeyWord hitKeyWordsObject;
					if(!valueDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord["To"].isNull())
						hitKeyWordsObject.to = std::stoi(valueDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord["To"].asString());
					if(!valueDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord["From"].isNull())
						hitKeyWordsObject.from = std::stoi(valueDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord["From"].asString());
					if(!valueDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord["Val"].isNull())
						hitKeyWordsObject.val = valueDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord["Val"].asString();
					if(!valueDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord["Tid"].isNull())
						hitKeyWordsObject.tid = valueDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord["Tid"].asString();
					if(!valueDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord["Pid"].isNull())
						hitKeyWordsObject.pid = std::stoi(valueDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitKeyWordsHitKeyWord["Pid"].asString());
					hitObject.hitKeyWords.push_back(hitKeyWordsObject);
				}
				auto phraseNode = value["Phrase"];
				if(!phraseNode["Words"].isNull())
					hitObject.phrase.words = phraseNode["Words"].asString();
				if(!phraseNode["Identity"].isNull())
					hitObject.phrase.identity = phraseNode["Identity"].asString();
				if(!phraseNode["Begin"].isNull())
					hitObject.phrase.begin = std::stol(phraseNode["Begin"].asString());
				if(!phraseNode["BeginTime"].isNull())
					hitObject.phrase.beginTime = phraseNode["BeginTime"].asString();
				if(!phraseNode["End"].isNull())
					hitObject.phrase.end = std::stol(phraseNode["End"].asString());
				if(!phraseNode["Role"].isNull())
					hitObject.phrase.role = phraseNode["Role"].asString();
				auto allHitCids = value["HitCids"]["CidItem"];
				for (auto value : allHitCids)
					hitObject.hitCids.push_back(value.asString());
				rulesObject.hit.push_back(hitObject);
			}
			auto allConditionInfoNode = valueDataResultInfoRulesRuleHitInfo["ConditionInfo"]["ConditionBasicInfo"];
			for (auto valueDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo : allConditionInfoNode)
			{
				ResultInfo::RuleHitInfo::ConditionBasicInfo conditionInfoObject;
				if(!valueDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo["ConditionInfoCid"].isNull())
					conditionInfoObject.conditionInfoCid = valueDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo["ConditionInfoCid"].asString();
				rulesObject.conditionInfo.push_back(conditionInfoObject);
			}
			dataObject.rules.push_back(rulesObject);
		}
		auto allHandScoreIdList = value["HandScoreIdList"]["HandScoreIdList"];
		for (auto value : allHandScoreIdList)
			dataObject.handScoreIdList.push_back(value.asString());
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string UploadDataSyncResult::getMessage()const
{
	return message_;
}

std::vector<UploadDataSyncResult::ResultInfo> UploadDataSyncResult::getData()const
{
	return data_;
}

std::string UploadDataSyncResult::getCode()const
{
	return code_;
}

bool UploadDataSyncResult::getSuccess()const
{
	return success_;
}

