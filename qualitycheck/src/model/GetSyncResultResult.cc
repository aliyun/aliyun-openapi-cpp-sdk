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

#include <alibabacloud/qualitycheck/model/GetSyncResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

GetSyncResultResult::GetSyncResultResult() :
	ServiceResult()
{}

GetSyncResultResult::GetSyncResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSyncResultResult::~GetSyncResultResult()
{}

void GetSyncResultResult::parse(const std::string &payload)
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
		if(!valueDataResultInfo["ErrorMessage"].isNull())
			dataObject.errorMessage = valueDataResultInfo["ErrorMessage"].asString();
		if(!valueDataResultInfo["Reviewer"].isNull())
			dataObject.reviewer = valueDataResultInfo["Reviewer"].asString();
		if(!valueDataResultInfo["CreateTime"].isNull())
			dataObject.createTime = valueDataResultInfo["CreateTime"].asString();
		if(!valueDataResultInfo["ReviewStatus"].isNull())
			dataObject.reviewStatus = std::stoi(valueDataResultInfo["ReviewStatus"].asString());
		if(!valueDataResultInfo["TaskName"].isNull())
			dataObject.taskName = valueDataResultInfo["TaskName"].asString();
		if(!valueDataResultInfo["Comments"].isNull())
			dataObject.comments = valueDataResultInfo["Comments"].asString();
		if(!valueDataResultInfo["ReviewResult"].isNull())
			dataObject.reviewResult = std::stoi(valueDataResultInfo["ReviewResult"].asString());
		if(!valueDataResultInfo["Score"].isNull())
			dataObject.score = std::stoi(valueDataResultInfo["Score"].asString());
		if(!valueDataResultInfo["TaskId"].isNull())
			dataObject.taskId = valueDataResultInfo["TaskId"].asString();
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
			if(!valueDataResultInfoAsrResultAsrResultItem["SilenceDuration"].isNull())
				asrResultObject.silenceDuration = std::stoi(valueDataResultInfoAsrResultAsrResultItem["SilenceDuration"].asString());
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
				if(!phraseNode["Words"].isNull())
					hitsObject.phrase.words = phraseNode["Words"].asString();
				if(!phraseNode["Begin"].isNull())
					hitsObject.phrase.begin = std::stol(phraseNode["Begin"].asString());
				if(!phraseNode["EmotionValue"].isNull())
					hitsObject.phrase.emotionValue = std::stoi(phraseNode["EmotionValue"].asString());
				if(!phraseNode["End"].isNull())
					hitsObject.phrase.end = std::stoi(phraseNode["End"].asString());
				if(!phraseNode["SpeechRate"].isNull())
					hitsObject.phrase.speechRate = std::stoi(phraseNode["SpeechRate"].asString());
				if(!phraseNode["Role"].isNull())
					hitsObject.phrase.role = phraseNode["Role"].asString();
				if(!phraseNode["SilenceDuration"].isNull())
					hitsObject.phrase.silenceDuration = std::stoi(phraseNode["SilenceDuration"].asString());
				auto allCid = value["Cid"]["Cid"];
				for (auto value : allCid)
					hitsObject.cid.push_back(value.asString());
				hitResultObject.hits.push_back(hitsObject);
			}
			dataObject.hitResult.push_back(hitResultObject);
		}
		auto recordingNode = value["Recording"];
		if(!recordingNode["Callee"].isNull())
			dataObject.recording.callee = recordingNode["Callee"].asString();
		if(!recordingNode["Remark3"].isNull())
			dataObject.recording.remark3 = recordingNode["Remark3"].asString();
		if(!recordingNode["Business"].isNull())
			dataObject.recording.business = recordingNode["Business"].asString();
		if(!recordingNode["Url"].isNull())
			dataObject.recording.url = recordingNode["Url"].asString();
		if(!recordingNode["PrimaryId"].isNull())
			dataObject.recording.primaryId = recordingNode["PrimaryId"].asString();
		if(!recordingNode["Remark1"].isNull())
			dataObject.recording.remark1 = recordingNode["Remark1"].asString();
		if(!recordingNode["Remark2"].isNull())
			dataObject.recording.remark2 = recordingNode["Remark2"].asString();
		if(!recordingNode["CallType"].isNull())
			dataObject.recording.callType = std::stoi(recordingNode["CallType"].asString());
		if(!recordingNode["Caller"].isNull())
			dataObject.recording.caller = recordingNode["Caller"].asString();
		if(!recordingNode["CallId"].isNull())
			dataObject.recording.callId = recordingNode["CallId"].asString();
		if(!recordingNode["DataSetName"].isNull())
			dataObject.recording.dataSetName = recordingNode["DataSetName"].asString();
		if(!recordingNode["Duration"].isNull())
			dataObject.recording.duration = std::stol(recordingNode["Duration"].asString());
		if(!recordingNode["DurationAudio"].isNull())
			dataObject.recording.durationAudio = std::stol(recordingNode["DurationAudio"].asString());
		if(!recordingNode["Name"].isNull())
			dataObject.recording.name = recordingNode["Name"].asString();
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

std::string GetSyncResultResult::getMessage()const
{
	return message_;
}

int GetSyncResultResult::getPageSize()const
{
	return pageSize_;
}

int GetSyncResultResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<GetSyncResultResult::ResultInfo> GetSyncResultResult::getData()const
{
	return data_;
}

int GetSyncResultResult::getCount()const
{
	return count_;
}

std::string GetSyncResultResult::getCode()const
{
	return code_;
}

bool GetSyncResultResult::getSuccess()const
{
	return success_;
}

std::string GetSyncResultResult::getResultCountId()const
{
	return resultCountId_;
}

