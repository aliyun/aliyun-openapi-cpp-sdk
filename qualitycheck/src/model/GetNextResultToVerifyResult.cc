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

#include <alibabacloud/qualitycheck/model/GetNextResultToVerifyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

GetNextResultToVerifyResult::GetNextResultToVerifyResult() :
	ServiceResult()
{}

GetNextResultToVerifyResult::GetNextResultToVerifyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetNextResultToVerifyResult::~GetNextResultToVerifyResult()
{}

void GetNextResultToVerifyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Index"].isNull())
		data_.index = std::stoi(dataNode["Index"].asString());
	if(!dataNode["Status"].isNull())
		data_.status = std::stoi(dataNode["Status"].asString());
	if(!dataNode["AudioScheme"].isNull())
		data_.audioScheme = dataNode["AudioScheme"].asString();
	if(!dataNode["AudioURL"].isNull())
		data_.audioURL = dataNode["AudioURL"].asString();
	if(!dataNode["UpdateTime"].isNull())
		data_.updateTime = dataNode["UpdateTime"].asString();
	if(!dataNode["IncorrectWords"].isNull())
		data_.incorrectWords = std::stoi(dataNode["IncorrectWords"].asString());
	if(!dataNode["VerifiedCount"].isNull())
		data_.verifiedCount = std::stoi(dataNode["VerifiedCount"].asString());
	if(!dataNode["Verified"].isNull())
		data_.verified = dataNode["Verified"].asString() == "true";
	if(!dataNode["FileName"].isNull())
		data_.fileName = dataNode["FileName"].asString();
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	if(!dataNode["Precision"].isNull())
		data_.precision = std::stof(dataNode["Precision"].asString());
	if(!dataNode["FileId"].isNull())
		data_.fileId = dataNode["FileId"].asString();
	if(!dataNode["Duration"].isNull())
		data_.duration = std::stoi(dataNode["Duration"].asString());
	auto allDialoguesNode = dataNode["Dialogues"]["Dialogue"];
	for (auto dataNodeDialoguesDialogue : allDialoguesNode)
	{
		Data::Dialogue dialogueObject;
		if(!dataNodeDialoguesDialogue["Words"].isNull())
			dialogueObject.words = dataNodeDialoguesDialogue["Words"].asString();
		if(!dataNodeDialoguesDialogue["Identity"].isNull())
			dialogueObject.identity = dataNodeDialoguesDialogue["Identity"].asString();
		if(!dataNodeDialoguesDialogue["IncorrectWords"].isNull())
			dialogueObject.incorrectWords = std::stoi(dataNodeDialoguesDialogue["IncorrectWords"].asString());
		if(!dataNodeDialoguesDialogue["BeginTime"].isNull())
			dialogueObject.beginTime = dataNodeDialoguesDialogue["BeginTime"].asString();
		if(!dataNodeDialoguesDialogue["SourceWords"].isNull())
			dialogueObject.sourceWords = dataNodeDialoguesDialogue["SourceWords"].asString();
		if(!dataNodeDialoguesDialogue["End"].isNull())
			dialogueObject.end = std::stol(dataNodeDialoguesDialogue["End"].asString());
		if(!dataNodeDialoguesDialogue["SpeechRate"].isNull())
			dialogueObject.speechRate = std::stoi(dataNodeDialoguesDialogue["SpeechRate"].asString());
		if(!dataNodeDialoguesDialogue["HourMinSec"].isNull())
			dialogueObject.hourMinSec = dataNodeDialoguesDialogue["HourMinSec"].asString();
		if(!dataNodeDialoguesDialogue["SourceRole"].isNull())
			dialogueObject.sourceRole = dataNodeDialoguesDialogue["SourceRole"].asString();
		if(!dataNodeDialoguesDialogue["Begin"].isNull())
			dialogueObject.begin = std::stol(dataNodeDialoguesDialogue["Begin"].asString());
		if(!dataNodeDialoguesDialogue["EmotionValue"].isNull())
			dialogueObject.emotionValue = std::stoi(dataNodeDialoguesDialogue["EmotionValue"].asString());
		if(!dataNodeDialoguesDialogue["Role"].isNull())
			dialogueObject.role = dataNodeDialoguesDialogue["Role"].asString();
		if(!dataNodeDialoguesDialogue["SilenceDuration"].isNull())
			dialogueObject.silenceDuration = std::stoi(dataNodeDialoguesDialogue["SilenceDuration"].asString());
		auto allDeltasNode = dataNodeDialoguesDialogue["Deltas"]["Delta"];
		for (auto dataNodeDialoguesDialogueDeltasDelta : allDeltasNode)
		{
			Data::Dialogue::Delta deltasObject;
			if(!dataNodeDialoguesDialogueDeltasDelta["Type"].isNull())
				deltasObject.type = dataNodeDialoguesDialogueDeltasDelta["Type"].asString();
			auto sourceNode = value["Source"];
			if(!sourceNode["Position"].isNull())
				deltasObject.source.position = std::stoi(sourceNode["Position"].asString());
				auto allLine = sourceNode["Line"]["Line"];
				for (auto value : allLine)
					deltasObject.source.line.push_back(value.asString());
			auto targetNode = value["Target"];
			if(!targetNode["Position"].isNull())
				deltasObject.target.position = std::stoi(targetNode["Position"].asString());
				auto allLine1 = targetNode["Line"]["Line"];
				for (auto value : allLine1)
					deltasObject.target.line1.push_back(value.asString());
			dialogueObject.deltas.push_back(deltasObject);
		}
		data_.dialogues.push_back(dialogueObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetNextResultToVerifyResult::getMessage()const
{
	return message_;
}

GetNextResultToVerifyResult::Data GetNextResultToVerifyResult::getData()const
{
	return data_;
}

std::string GetNextResultToVerifyResult::getCode()const
{
	return code_;
}

bool GetNextResultToVerifyResult::getSuccess()const
{
	return success_;
}

