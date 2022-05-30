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

#include <alibabacloud/qualitycheck/model/GetResultToReviewResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

GetResultToReviewResult::GetResultToReviewResult() :
	ServiceResult()
{}

GetResultToReviewResult::GetResultToReviewResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetResultToReviewResult::~GetResultToReviewResult()
{}

void GetResultToReviewResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Status"].isNull())
		data_.status = std::stoi(dataNode["Status"].asString());
	if(!dataNode["AudioScheme"].isNull())
		data_.audioScheme = dataNode["AudioScheme"].asString();
	if(!dataNode["AudioURL"].isNull())
		data_.audioURL = dataNode["AudioURL"].asString();
	if(!dataNode["HitNumber"].isNull())
		data_.hitNumber = std::stoi(dataNode["HitNumber"].asString());
	if(!dataNode["Audio"].isNull())
		data_.audio = dataNode["Audio"].asString() == "true";
	if(!dataNode["TotalScore"].isNull())
		data_.totalScore = std::stoi(dataNode["TotalScore"].asString());
	if(!dataNode["BusinessType"].isNull())
		data_.businessType = std::stoi(dataNode["BusinessType"].asString());
	if(!dataNode["FileId"].isNull())
		data_.fileId = dataNode["FileId"].asString();
	if(!dataNode["FileMergeName"].isNull())
		data_.fileMergeName = dataNode["FileMergeName"].asString();
	if(!dataNode["Comments"].isNull())
		data_.comments = dataNode["Comments"].asString();
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
		if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfo["ScoreSubName"].isNull())
			hitRuleReviewInfoObject.scoreSubName = dataNodeHitRuleReviewInfoListHitRuleReviewInfo["ScoreSubName"].asString();
		if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfo["ScoreNum"].isNull())
			hitRuleReviewInfoObject.scoreNum = std::stoi(dataNodeHitRuleReviewInfoListHitRuleReviewInfo["ScoreNum"].asString());
		if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfo["AutoReview"].isNull())
			hitRuleReviewInfoObject.autoReview = std::stoi(dataNodeHitRuleReviewInfoListHitRuleReviewInfo["AutoReview"].asString());
		if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfo["ScoreSubId"].isNull())
			hitRuleReviewInfoObject.scoreSubId = std::stol(dataNodeHitRuleReviewInfoListHitRuleReviewInfo["ScoreSubId"].asString());
		if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfo["Complainable"].isNull())
			hitRuleReviewInfoObject.complainable = dataNodeHitRuleReviewInfoListHitRuleReviewInfo["Complainable"].asString() == "true";
		if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfo["TotalNumber"].isNull())
			hitRuleReviewInfoObject.totalNumber = std::stoi(dataNodeHitRuleReviewInfoListHitRuleReviewInfo["TotalNumber"].asString());
		if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfo["ScoreId"].isNull())
			hitRuleReviewInfoObject.scoreId = std::stol(dataNodeHitRuleReviewInfoListHitRuleReviewInfo["ScoreId"].asString());
		if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfo["RuleName"].isNull())
			hitRuleReviewInfoObject.ruleName = dataNodeHitRuleReviewInfoListHitRuleReviewInfo["RuleName"].asString();
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
				if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord["From"].isNull())
					keyWordsObject.from = std::stoi(dataNodeHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord["From"].asString());
				if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord["Val"].isNull())
					keyWordsObject.val = dataNodeHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord["Val"].asString();
				if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord["Pid"].isNull())
					keyWordsObject.pid = std::stoi(dataNodeHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord["Pid"].asString());
				if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord["Tid"].isNull())
					keyWordsObject.tid = dataNodeHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord["Tid"].asString();
				if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord["Cid"].isNull())
					keyWordsObject.cid = dataNodeHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord["Cid"].asString();
				if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord["To"].isNull())
					keyWordsObject.to = std::stoi(dataNodeHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord["To"].asString());
				if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord["CustomizeCode"].isNull())
					keyWordsObject.customizeCode = dataNodeHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoListConditionHitInfoKeyWordsKeyWord["CustomizeCode"].asString();
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
		auto allComplainHistoriesNode = dataNodeHitRuleReviewInfoListHitRuleReviewInfo["ComplainHistories"]["ComplainHistoriesItem"];
		for (auto dataNodeHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistoriesItem : allComplainHistoriesNode)
		{
			Data::HitRuleReviewInfo::ComplainHistoriesItem complainHistoriesObject;
			if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistoriesItem["Comments"].isNull())
				complainHistoriesObject.comments = dataNodeHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistoriesItem["Comments"].asString();
			if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistoriesItem["Operator"].isNull())
				complainHistoriesObject._operator = std::stol(dataNodeHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistoriesItem["Operator"].asString());
			if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistoriesItem["OperationTime"].isNull())
				complainHistoriesObject.operationTime = dataNodeHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistoriesItem["OperationTime"].asString();
			if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistoriesItem["OperationType"].isNull())
				complainHistoriesObject.operationType = std::stoi(dataNodeHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistoriesItem["OperationType"].asString());
			if(!dataNodeHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistoriesItem["OperatorName"].isNull())
				complainHistoriesObject.operatorName = dataNodeHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistoriesItem["OperatorName"].asString();
			hitRuleReviewInfoObject.complainHistories.push_back(complainHistoriesObject);
		}
		auto reviewInfoNode = value["ReviewInfo"];
		if(!reviewInfoNode["ReviewResult"].isNull())
			hitRuleReviewInfoObject.reviewInfo.reviewResult = std::stoi(reviewInfoNode["ReviewResult"].asString());
		if(!reviewInfoNode["ReviewTime"].isNull())
			hitRuleReviewInfoObject.reviewInfo.reviewTime = reviewInfoNode["ReviewTime"].asString();
		if(!reviewInfoNode["HitId"].isNull())
			hitRuleReviewInfoObject.reviewInfo.hitId = reviewInfoNode["HitId"].asString();
		if(!reviewInfoNode["Reviewer"].isNull())
			hitRuleReviewInfoObject.reviewInfo.reviewer = reviewInfoNode["Reviewer"].asString();
		if(!reviewInfoNode["Rid"].isNull())
			hitRuleReviewInfoObject.reviewInfo.rid = std::stol(reviewInfoNode["Rid"].asString());
		data_.hitRuleReviewInfoList.push_back(hitRuleReviewInfoObject);
	}
	auto allManualScoreInfoListNode = dataNode["ManualScoreInfoList"]["ManualScoreInfo"];
	for (auto dataNodeManualScoreInfoListManualScoreInfo : allManualScoreInfoListNode)
	{
		Data::ManualScoreInfo manualScoreInfoObject;
		if(!dataNodeManualScoreInfoListManualScoreInfo["ScoreSubName"].isNull())
			manualScoreInfoObject.scoreSubName = dataNodeManualScoreInfoListManualScoreInfo["ScoreSubName"].asString();
		if(!dataNodeManualScoreInfoListManualScoreInfo["Complainable"].isNull())
			manualScoreInfoObject.complainable = dataNodeManualScoreInfoListManualScoreInfo["Complainable"].asString() == "true";
		if(!dataNodeManualScoreInfoListManualScoreInfo["ScoreNum"].isNull())
			manualScoreInfoObject.scoreNum = std::stoi(dataNodeManualScoreInfoListManualScoreInfo["ScoreNum"].asString());
		if(!dataNodeManualScoreInfoListManualScoreInfo["ScoreSubId"].isNull())
			manualScoreInfoObject.scoreSubId = std::stol(dataNodeManualScoreInfoListManualScoreInfo["ScoreSubId"].asString());
		if(!dataNodeManualScoreInfoListManualScoreInfo["ScoreId"].isNull())
			manualScoreInfoObject.scoreId = std::stol(dataNodeManualScoreInfoListManualScoreInfo["ScoreId"].asString());
		auto allComplainHistories1Node = dataNodeManualScoreInfoListManualScoreInfo["ComplainHistories"]["ComplainHistoriesItem"];
		for (auto dataNodeManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistoriesItem : allComplainHistories1Node)
		{
			Data::ManualScoreInfo::ComplainHistoriesItem2 complainHistories1Object;
			if(!dataNodeManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistoriesItem["Comments"].isNull())
				complainHistories1Object.comments = dataNodeManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistoriesItem["Comments"].asString();
			if(!dataNodeManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistoriesItem["Operator"].isNull())
				complainHistories1Object._operator = std::stol(dataNodeManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistoriesItem["Operator"].asString());
			if(!dataNodeManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistoriesItem["OperationTime"].isNull())
				complainHistories1Object.operationTime = dataNodeManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistoriesItem["OperationTime"].asString();
			if(!dataNodeManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistoriesItem["OperationType"].isNull())
				complainHistories1Object.operationType = std::stoi(dataNodeManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistoriesItem["OperationType"].asString());
			if(!dataNodeManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistoriesItem["OperatorName"].isNull())
				complainHistories1Object.operatorName = dataNodeManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistoriesItem["OperatorName"].asString();
			manualScoreInfoObject.complainHistories1.push_back(complainHistories1Object);
		}
		data_.manualScoreInfoList.push_back(manualScoreInfoObject);
	}
	auto allReviewHistoryListNode = dataNode["ReviewHistoryList"]["ReviewHistory"];
	for (auto dataNodeReviewHistoryListReviewHistory : allReviewHistoryListNode)
	{
		Data::ReviewHistory reviewHistoryObject;
		if(!dataNodeReviewHistoryListReviewHistory["Type"].isNull())
			reviewHistoryObject.type = std::stoi(dataNodeReviewHistoryListReviewHistory["Type"].asString());
		if(!dataNodeReviewHistoryListReviewHistory["OperatorName"].isNull())
			reviewHistoryObject.operatorName = dataNodeReviewHistoryListReviewHistory["OperatorName"].asString();
		if(!dataNodeReviewHistoryListReviewHistory["TimeStr"].isNull())
			reviewHistoryObject.timeStr = dataNodeReviewHistoryListReviewHistory["TimeStr"].asString();
		if(!dataNodeReviewHistoryListReviewHistory["Score"].isNull())
			reviewHistoryObject.score = std::stoi(dataNodeReviewHistoryListReviewHistory["Score"].asString());
		if(!dataNodeReviewHistoryListReviewHistory["ReviewResult"].isNull())
			reviewHistoryObject.reviewResult = std::stoi(dataNodeReviewHistoryListReviewHistory["ReviewResult"].asString());
		if(!dataNodeReviewHistoryListReviewHistory["ComplainResult"].isNull())
			reviewHistoryObject.complainResult = std::stoi(dataNodeReviewHistoryListReviewHistory["ComplainResult"].asString());
		if(!dataNodeReviewHistoryListReviewHistory["OldScore"].isNull())
			reviewHistoryObject.oldScore = std::stoi(dataNodeReviewHistoryListReviewHistory["OldScore"].asString());
		data_.reviewHistoryList.push_back(reviewHistoryObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetResultToReviewResult::getMessage()const
{
	return message_;
}

GetResultToReviewResult::Data GetResultToReviewResult::getData()const
{
	return data_;
}

std::string GetResultToReviewResult::getCode()const
{
	return code_;
}

bool GetResultToReviewResult::getSuccess()const
{
	return success_;
}

