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

#include <alibabacloud/qualitycheck/model/GetResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

GetResultResult::GetResultResult() :
	ServiceResult()
{}

GetResultResult::GetResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetResultResult::~GetResultResult()
{}

void GetResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["ResultInfo"];
	for (auto valueDataResultInfo : allDataNode)
	{
		ResultInfo dataObject;
		if(!valueDataResultInfo["Status"].isNull())
			dataObject.status = std::stoi(valueDataResultInfo["Status"].asString());
		if(!valueDataResultInfo["AssignmentTime"].isNull())
			dataObject.assignmentTime = valueDataResultInfo["AssignmentTime"].asString();
		if(!valueDataResultInfo["LastDataId"].isNull())
			dataObject.lastDataId = valueDataResultInfo["LastDataId"].asString();
		if(!valueDataResultInfo["ErrorMessage"].isNull())
			dataObject.errorMessage = valueDataResultInfo["ErrorMessage"].asString();
		if(!valueDataResultInfo["Reviewer"].isNull())
			dataObject.reviewer = valueDataResultInfo["Reviewer"].asString();
		if(!valueDataResultInfo["CreateTime"].isNull())
			dataObject.createTime = valueDataResultInfo["CreateTime"].asString();
		if(!valueDataResultInfo["ReviewStatus"].isNull())
			dataObject.reviewStatus = std::stoi(valueDataResultInfo["ReviewStatus"].asString());
		if(!valueDataResultInfo["ReviewTimeLong"].isNull())
			dataObject.reviewTimeLong = valueDataResultInfo["ReviewTimeLong"].asString();
		if(!valueDataResultInfo["TaskName"].isNull())
			dataObject.taskName = valueDataResultInfo["TaskName"].asString();
		if(!valueDataResultInfo["ReviewResult"].isNull())
			dataObject.reviewResult = std::stoi(valueDataResultInfo["ReviewResult"].asString());
		if(!valueDataResultInfo["Score"].isNull())
			dataObject.score = std::stoi(valueDataResultInfo["Score"].asString());
		if(!valueDataResultInfo["CreateTimeLong"].isNull())
			dataObject.createTimeLong = valueDataResultInfo["CreateTimeLong"].asString();
		if(!valueDataResultInfo["ReviewTime"].isNull())
			dataObject.reviewTime = valueDataResultInfo["ReviewTime"].asString();
		if(!valueDataResultInfo["Comments"].isNull())
			dataObject.comments = valueDataResultInfo["Comments"].asString();
		if(!valueDataResultInfo["TaskId"].isNull())
			dataObject.taskId = valueDataResultInfo["TaskId"].asString();
		if(!valueDataResultInfo["ReviewType"].isNull())
			dataObject.reviewType = std::stoi(valueDataResultInfo["ReviewType"].asString());
		if(!valueDataResultInfo["Resolver"].isNull())
			dataObject.resolver = valueDataResultInfo["Resolver"].asString();
		auto allAsrResultNode = valueDataResultInfo["AsrResult"]["AsrResultItem"];
		for (auto valueDataResultInfoAsrResultAsrResultItem : allAsrResultNode)
		{
			ResultInfo::AsrResultItem asrResultObject;
			if(!valueDataResultInfoAsrResultAsrResultItem["Words"].isNull())
				asrResultObject.words = valueDataResultInfoAsrResultAsrResultItem["Words"].asString();
			if(!valueDataResultInfoAsrResultAsrResultItem["Begin"].isNull())
				asrResultObject.begin = std::stol(valueDataResultInfoAsrResultAsrResultItem["Begin"].asString());
			if(!valueDataResultInfoAsrResultAsrResultItem["EmotionValue"].isNull())
				asrResultObject.emotionValue = std::stoi(valueDataResultInfoAsrResultAsrResultItem["EmotionValue"].asString());
			if(!valueDataResultInfoAsrResultAsrResultItem["End"].isNull())
				asrResultObject.end = std::stol(valueDataResultInfoAsrResultAsrResultItem["End"].asString());
			if(!valueDataResultInfoAsrResultAsrResultItem["SpeechRate"].isNull())
				asrResultObject.speechRate = std::stoi(valueDataResultInfoAsrResultAsrResultItem["SpeechRate"].asString());
			if(!valueDataResultInfoAsrResultAsrResultItem["Role"].isNull())
				asrResultObject.role = valueDataResultInfoAsrResultAsrResultItem["Role"].asString();
			dataObject.asrResult.push_back(asrResultObject);
		}
		auto allHitResultNode = valueDataResultInfo["HitResult"]["HitResultItem"];
		for (auto valueDataResultInfoHitResultHitResultItem : allHitResultNode)
		{
			ResultInfo::HitResultItem hitResultObject;
			if(!valueDataResultInfoHitResultHitResultItem["Type"].isNull())
				hitResultObject.type = valueDataResultInfoHitResultHitResultItem["Type"].asString();
			if(!valueDataResultInfoHitResultHitResultItem["ReviewResult"].isNull())
				hitResultObject.reviewResult = std::stoi(valueDataResultInfoHitResultHitResultItem["ReviewResult"].asString());
			if(!valueDataResultInfoHitResultHitResultItem["Name"].isNull())
				hitResultObject.name = valueDataResultInfoHitResultHitResultItem["Name"].asString();
			if(!valueDataResultInfoHitResultHitResultItem["Rid"].isNull())
				hitResultObject.rid = valueDataResultInfoHitResultHitResultItem["Rid"].asString();
			if(!valueDataResultInfoHitResultHitResultItem["SchemeId"].isNull())
				hitResultObject.schemeId = std::stol(valueDataResultInfoHitResultHitResultItem["SchemeId"].asString());
			if(!valueDataResultInfoHitResultHitResultItem["SchemeVersion"].isNull())
				hitResultObject.schemeVersion = std::stol(valueDataResultInfoHitResultHitResultItem["SchemeVersion"].asString());
			auto allHitsNode = valueDataResultInfoHitResultHitResultItem["Hits"]["Hit"];
			for (auto valueDataResultInfoHitResultHitResultItemHitsHit : allHitsNode)
			{
				ResultInfo::HitResultItem::Hit hitsObject;
				auto allKeyWordsNode = valueDataResultInfoHitResultHitResultItemHitsHit["KeyWords"]["KeyWord"];
				for (auto valueDataResultInfoHitResultHitResultItemHitsHitKeyWordsKeyWord : allKeyWordsNode)
				{
					ResultInfo::HitResultItem::Hit::KeyWord keyWordsObject;
					if(!valueDataResultInfoHitResultHitResultItemHitsHitKeyWordsKeyWord["From"].isNull())
						keyWordsObject.from = std::stoi(valueDataResultInfoHitResultHitResultItemHitsHitKeyWordsKeyWord["From"].asString());
					if(!valueDataResultInfoHitResultHitResultItemHitsHitKeyWordsKeyWord["To"].isNull())
						keyWordsObject.to = std::stoi(valueDataResultInfoHitResultHitResultItemHitsHitKeyWordsKeyWord["To"].asString());
					if(!valueDataResultInfoHitResultHitResultItemHitsHitKeyWordsKeyWord["Val"].isNull())
						keyWordsObject.val = valueDataResultInfoHitResultHitResultItemHitsHitKeyWordsKeyWord["Val"].asString();
					if(!valueDataResultInfoHitResultHitResultItemHitsHitKeyWordsKeyWord["Cid"].isNull())
						keyWordsObject.cid = valueDataResultInfoHitResultHitResultItemHitsHitKeyWordsKeyWord["Cid"].asString();
					hitsObject.keyWords.push_back(keyWordsObject);
				}
				auto phraseNode = value["Phrase"];
				if(!phraseNode["EmotionValue"].isNull())
					hitsObject.phrase.emotionValue = std::stoi(phraseNode["EmotionValue"].asString());
				if(!phraseNode["End"].isNull())
					hitsObject.phrase.end = std::stoi(phraseNode["End"].asString());
				if(!phraseNode["Words"].isNull())
					hitsObject.phrase.words = phraseNode["Words"].asString();
				if(!phraseNode["Role"].isNull())
					hitsObject.phrase.role = phraseNode["Role"].asString();
				if(!phraseNode["Begin"].isNull())
					hitsObject.phrase.begin = std::stol(phraseNode["Begin"].asString());
				auto allCid = value["Cid"]["Cid"];
				for (auto value : allCid)
					hitsObject.cid.push_back(value.asString());
				hitResultObject.hits.push_back(hitsObject);
			}
			dataObject.hitResult.push_back(hitResultObject);
		}
		auto allHitScoreNode = valueDataResultInfo["HitScore"]["HitScoreItem"];
		for (auto valueDataResultInfoHitScoreHitScoreItem : allHitScoreNode)
		{
			ResultInfo::HitScoreItem hitScoreObject;
			if(!valueDataResultInfoHitScoreHitScoreItem["ScoreName"].isNull())
				hitScoreObject.scoreName = valueDataResultInfoHitScoreHitScoreItem["ScoreName"].asString();
			if(!valueDataResultInfoHitScoreHitScoreItem["ScoreNumber"].isNull())
				hitScoreObject.scoreNumber = valueDataResultInfoHitScoreHitScoreItem["ScoreNumber"].asString();
			if(!valueDataResultInfoHitScoreHitScoreItem["ScoreId"].isNull())
				hitScoreObject.scoreId = valueDataResultInfoHitScoreHitScoreItem["ScoreId"].asString();
			if(!valueDataResultInfoHitScoreHitScoreItem["RuleId"].isNull())
				hitScoreObject.ruleId = valueDataResultInfoHitScoreHitScoreItem["RuleId"].asString();
			dataObject.hitScore.push_back(hitScoreObject);
		}
		auto recordingNode = value["Recording"];
		if(!recordingNode["Remark13"].isNull())
			dataObject.recording.remark13 = recordingNode["Remark13"].asString();
		if(!recordingNode["Callee"].isNull())
			dataObject.recording.callee = recordingNode["Callee"].asString();
		if(!recordingNode["DialogueSize"].isNull())
			dataObject.recording.dialogueSize = std::stoi(recordingNode["DialogueSize"].asString());
		if(!recordingNode["PrimaryId"].isNull())
			dataObject.recording.primaryId = recordingNode["PrimaryId"].asString();
		if(!recordingNode["Remark12"].isNull())
			dataObject.recording.remark12 = recordingNode["Remark12"].asString();
		if(!recordingNode["Remark1"].isNull())
			dataObject.recording.remark1 = recordingNode["Remark1"].asString();
		if(!recordingNode["Remark7"].isNull())
			dataObject.recording.remark7 = recordingNode["Remark7"].asString();
		if(!recordingNode["Remark8"].isNull())
			dataObject.recording.remark8 = recordingNode["Remark8"].asString();
		if(!recordingNode["Remark2"].isNull())
			dataObject.recording.remark2 = recordingNode["Remark2"].asString();
		if(!recordingNode["CallId"].isNull())
			dataObject.recording.callId = recordingNode["CallId"].asString();
		if(!recordingNode["Remark9"].isNull())
			dataObject.recording.remark9 = recordingNode["Remark9"].asString();
		if(!recordingNode["Name"].isNull())
			dataObject.recording.name = recordingNode["Name"].asString();
		if(!recordingNode["Remark6"].isNull())
			dataObject.recording.remark6 = recordingNode["Remark6"].asString();
		if(!recordingNode["Remark10"].isNull())
			dataObject.recording.remark10 = recordingNode["Remark10"].asString();
		if(!recordingNode["Business"].isNull())
			dataObject.recording.business = recordingNode["Business"].asString();
		if(!recordingNode["Remark3"].isNull())
			dataObject.recording.remark3 = recordingNode["Remark3"].asString();
		if(!recordingNode["Url"].isNull())
			dataObject.recording.url = recordingNode["Url"].asString();
		if(!recordingNode["Remark11"].isNull())
			dataObject.recording.remark11 = recordingNode["Remark11"].asString();
		if(!recordingNode["Remark4"].isNull())
			dataObject.recording.remark4 = recordingNode["Remark4"].asString();
		if(!recordingNode["CallType"].isNull())
			dataObject.recording.callType = std::stoi(recordingNode["CallType"].asString());
		if(!recordingNode["Caller"].isNull())
			dataObject.recording.caller = recordingNode["Caller"].asString();
		if(!recordingNode["DataSetName"].isNull())
			dataObject.recording.dataSetName = recordingNode["DataSetName"].asString();
		if(!recordingNode["Duration"].isNull())
			dataObject.recording.duration = std::stol(recordingNode["Duration"].asString());
		if(!recordingNode["Remark5"].isNull())
			dataObject.recording.remark5 = std::stol(recordingNode["Remark5"].asString());
		if(!recordingNode["Id"].isNull())
			dataObject.recording.id = recordingNode["Id"].asString();
		if(!recordingNode["CallTime"].isNull())
			dataObject.recording.callTime = recordingNode["CallTime"].asString();
		auto agentNode = value["Agent"];
		if(!agentNode["Name"].isNull())
			dataObject.agent.name = agentNode["Name"].asString();
		if(!agentNode["SkillGroup"].isNull())
			dataObject.agent.skillGroup = agentNode["SkillGroup"].asString();
		if(!agentNode["Id"].isNull())
			dataObject.agent.id = agentNode["Id"].asString();
		auto allSchemeIdList = value["SchemeIdList"]["SchemeIdList"];
		for (auto value : allSchemeIdList)
			dataObject.schemeIdList.push_back(value.asString());
		auto allSchemeNameList = value["SchemeNameList"]["SchemeNameList"];
		for (auto value : allSchemeNameList)
			dataObject.schemeNameList.push_back(value.asString());
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ResultCountId"].isNull())
		resultCountId_ = value["ResultCountId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

std::string GetResultResult::getMessage()const
{
	return message_;
}

int GetResultResult::getPageSize()const
{
	return pageSize_;
}

int GetResultResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<GetResultResult::ResultInfo> GetResultResult::getData()const
{
	return data_;
}

int GetResultResult::getCount()const
{
	return count_;
}

std::string GetResultResult::getCode()const
{
	return code_;
}

bool GetResultResult::getSuccess()const
{
	return success_;
}

std::string GetResultResult::getResultCountId()const
{
	return resultCountId_;
}

