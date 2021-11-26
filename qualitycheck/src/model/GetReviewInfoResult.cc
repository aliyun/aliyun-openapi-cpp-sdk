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

#include <alibabacloud/qualitycheck/model/GetReviewInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

GetReviewInfoResult::GetReviewInfoResult() :
	ServiceResult()
{}

GetReviewInfoResult::GetReviewInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetReviewInfoResult::~GetReviewInfoResult()
{}

void GetReviewInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AudioURL"].isNull())
		data_.audioURL = dataNode["AudioURL"].asString();
	if(!dataNode["HitNumber"].isNull())
		data_.hitNumber = std::stoi(dataNode["HitNumber"].asString());
	if(!dataNode["NextVid"].isNull())
		data_.nextVid = dataNode["NextVid"].asString();
	if(!dataNode["PreVid"].isNull())
		data_.preVid = dataNode["PreVid"].asString();
	if(!dataNode["IsAudio"].isNull())
		data_.isAudio = dataNode["IsAudio"].asString() == "true";
	if(!dataNode["AsrWordsCount"].isNull())
		data_.asrWordsCount = std::stoi(dataNode["AsrWordsCount"].asString());
	if(!dataNode["Audio"].isNull())
		data_.audio = dataNode["Audio"].asString() == "true";
	if(!dataNode["TotalScore"].isNull())
		data_.totalScore = std::stoi(dataNode["TotalScore"].asString());
	if(!dataNode["BusinessType"].isNull())
		data_.businessType = std::stoi(dataNode["BusinessType"].asString());
	if(!dataNode["FileMergeName"].isNull())
		data_.fileMergeName = dataNode["FileMergeName"].asString();
	if(!dataNode["IsDeleted"].isNull())
		data_.isDeleted = dataNode["IsDeleted"].asString() == "true";
	if(!dataNode["Deleted"].isNull())
		data_.deleted = dataNode["Deleted"].asString() == "true";
	if(!dataNode["Vid"].isNull())
		data_.vid = dataNode["Vid"].asString();
	if(!dataNode["ReviewNumber"].isNull())
		data_.reviewNumber = std::stoi(dataNode["ReviewNumber"].asString());
	auto allDialoguesNode = dataNode["Dialogues"]["Dialogue"];
	for (auto dataNodeDialoguesDialogue : allDialoguesNode)
	{
		Data::Dialogue dialogueObject;
		if(!dataNodeDialoguesDialogue["Words"].isNull())
			dialogueObject.words = dataNodeDialoguesDialogue["Words"].asString();
		if(!dataNodeDialoguesDialogue["Identity"].isNull())
			dialogueObject.identity = dataNodeDialoguesDialogue["Identity"].asString();
		if(!dataNodeDialoguesDialogue["Begin"].isNull())
			dialogueObject.begin = std::stol(dataNodeDialoguesDialogue["Begin"].asString());
		if(!dataNodeDialoguesDialogue["BeginTime"].isNull())
			dialogueObject.beginTime = dataNodeDialoguesDialogue["BeginTime"].asString();
		if(!dataNodeDialoguesDialogue["EmotionValue"].isNull())
			dialogueObject.emotionValue = std::stoi(dataNodeDialoguesDialogue["EmotionValue"].asString());
		if(!dataNodeDialoguesDialogue["End"].isNull())
			dialogueObject.end = std::stol(dataNodeDialoguesDialogue["End"].asString());
		if(!dataNodeDialoguesDialogue["SpeechRate"].isNull())
			dialogueObject.speechRate = std::stoi(dataNodeDialoguesDialogue["SpeechRate"].asString());
		if(!dataNodeDialoguesDialogue["Role"].isNull())
			dialogueObject.role = dataNodeDialoguesDialogue["Role"].asString();
		if(!dataNodeDialoguesDialogue["SilenceDuration"].isNull())
			dialogueObject.silenceDuration = std::stoi(dataNodeDialoguesDialogue["SilenceDuration"].asString());
		if(!dataNodeDialoguesDialogue["HourMinSec"].isNull())
			dialogueObject.hourMinSec = dataNodeDialoguesDialogue["HourMinSec"].asString();
		data_.dialogues.push_back(dialogueObject);
	}
	auto allHandScoreInfoListNode = dataNode["HandScoreInfoList"]["ScorePo"];
	for (auto dataNodeHandScoreInfoListScorePo : allHandScoreInfoListNode)
	{
		Data::ScorePo scorePoObject;
		if(!dataNodeHandScoreInfoListScorePo["ScoreId"].isNull())
			scorePoObject.scoreId = std::stol(dataNodeHandScoreInfoListScorePo["ScoreId"].asString());
		if(!dataNodeHandScoreInfoListScorePo["ScoreName"].isNull())
			scorePoObject.scoreName = dataNodeHandScoreInfoListScorePo["ScoreName"].asString();
		auto allScoreInfosNode = dataNodeHandScoreInfoListScorePo["ScoreInfos"]["ScoreParam"];
		for (auto dataNodeHandScoreInfoListScorePoScoreInfosScoreParam : allScoreInfosNode)
		{
			Data::ScorePo::ScoreParam scoreInfosObject;
			if(!dataNodeHandScoreInfoListScorePoScoreInfosScoreParam["ScoreSubName"].isNull())
				scoreInfosObject.scoreSubName = dataNodeHandScoreInfoListScorePoScoreInfosScoreParam["ScoreSubName"].asString();
			if(!dataNodeHandScoreInfoListScorePoScoreInfosScoreParam["ScoreNum"].isNull())
				scoreInfosObject.scoreNum = std::stoi(dataNodeHandScoreInfoListScorePoScoreInfosScoreParam["ScoreNum"].asString());
			if(!dataNodeHandScoreInfoListScorePoScoreInfosScoreParam["Hit"].isNull())
				scoreInfosObject.hit = std::stoi(dataNodeHandScoreInfoListScorePoScoreInfosScoreParam["Hit"].asString());
			if(!dataNodeHandScoreInfoListScorePoScoreInfosScoreParam["ScoreSubId"].isNull())
				scoreInfosObject.scoreSubId = std::stol(dataNodeHandScoreInfoListScorePoScoreInfosScoreParam["ScoreSubId"].asString());
			if(!dataNodeHandScoreInfoListScorePoScoreInfosScoreParam["ScoreType"].isNull())
				scoreInfosObject.scoreType = std::stoi(dataNodeHandScoreInfoListScorePoScoreInfosScoreParam["ScoreType"].asString());
			scorePoObject.scoreInfos.push_back(scoreInfosObject);
		}
		data_.handScoreInfoList.push_back(scorePoObject);
	}
	auto allHitRuleReviewInfoListNode = dataNode["HitRuleReviewInfoList"]["HitRuleReviewInfo"];
	for (auto dataNodeHitRuleReviewInfoListHitRuleReviewInfo : allHitRuleReviewInfoListNode)
	{
		Data::HitRuleReviewInfo hitRuleReviewInfoObject;
		if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfo["RuleScoreType"].isNull())
			hitRuleReviewInfoObject.ruleScoreType = std::stoi(dataNodeHitRuleReviewInfoListHitRuleReviewInfo["RuleScoreType"].asString());
		if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfo["RuleType"].isNull())
			hitRuleReviewInfoObject.ruleType = std::stoi(dataNodeHitRuleReviewInfoListHitRuleReviewInfo["RuleType"].asString());
		if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfo["AutoReview"].isNull())
			hitRuleReviewInfoObject.autoReview = std::stoi(dataNodeHitRuleReviewInfoListHitRuleReviewInfo["AutoReview"].asString());
		if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfo["ScoreSubId"].isNull())
			hitRuleReviewInfoObject.scoreSubId = std::stol(dataNodeHitRuleReviewInfoListHitRuleReviewInfo["ScoreSubId"].asString());
		if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfo["TotalNumber"].isNull())
			hitRuleReviewInfoObject.totalNumber = std::stoi(dataNodeHitRuleReviewInfoListHitRuleReviewInfo["TotalNumber"].asString());
		if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfo["ScoreId"].isNull())
			hitRuleReviewInfoObject.scoreId = std::stol(dataNodeHitRuleReviewInfoListHitRuleReviewInfo["ScoreId"].asString());
		if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfo["Rid"].isNull())
			hitRuleReviewInfoObject.rid = std::stol(dataNodeHitRuleReviewInfoListHitRuleReviewInfo["Rid"].asString());
		if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfo["RuleName"].isNull())
			hitRuleReviewInfoObject.ruleName = dataNodeHitRuleReviewInfoListHitRuleReviewInfo["RuleName"].asString();
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
			auto allCid = value["Cid"]["Cid"];
			for (auto value : allCid)
				conditionHitInfoListObject.cid.push_back(value.asString());
			hitRuleReviewInfoObject.conditionHitInfoList.push_back(conditionHitInfoListObject);
		}
		auto reviewInfoNode = value["ReviewInfo"];
		if(!reviewInfoNode["Rid"].isNull())
			hitRuleReviewInfoObject.reviewInfo.rid = std::stol(reviewInfoNode["Rid"].asString());
		if(!reviewInfoNode["HitId"].isNull())
			hitRuleReviewInfoObject.reviewInfo.hitId = reviewInfoNode["HitId"].asString();
		data_.hitRuleReviewInfoList.push_back(hitRuleReviewInfoObject);
	}
		auto allManualScoreMappingList = dataNode["ManualScoreMappingList"]["ManualScoreMappingList"];
		for (auto value : allManualScoreMappingList)
			data_.manualScoreMappingList.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetReviewInfoResult::getMessage()const
{
	return message_;
}

GetReviewInfoResult::Data GetReviewInfoResult::getData()const
{
	return data_;
}

std::string GetReviewInfoResult::getCode()const
{
	return code_;
}

bool GetReviewInfoResult::getSuccess()const
{
	return success_;
}

