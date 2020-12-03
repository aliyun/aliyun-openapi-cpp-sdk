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

#include <alibabacloud/qualitycheck/model/GetRecognizeResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

GetRecognizeResultResult::GetRecognizeResultResult() :
	ServiceResult()
{}

GetRecognizeResultResult::GetRecognizeResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRecognizeResultResult::~GetRecognizeResultResult()
{}

void GetRecognizeResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TaskAsrRequestId"].isNull())
		data_.taskAsrRequestId = std::stol(dataNode["TaskAsrRequestId"].asString());
	auto allDialoguesNode = dataNode["Dialogues"]["Dialogue"];
	for (auto dataNodeDialoguesDialogue : allDialoguesNode)
	{
		Data::Dialogue dialogueObject;
		if(!dataNodeDialoguesDialogue["Begin"].isNull())
			dialogueObject.begin = std::stol(dataNodeDialoguesDialogue["Begin"].asString());
		if(!dataNodeDialoguesDialogue["BeginTime"].isNull())
			dialogueObject.beginTime = dataNodeDialoguesDialogue["BeginTime"].asString();
		if(!dataNodeDialoguesDialogue["EmotionValue"].isNull())
			dialogueObject.emotionValue = std::stoi(dataNodeDialoguesDialogue["EmotionValue"].asString());
		if(!dataNodeDialoguesDialogue["End"].isNull())
			dialogueObject.end = std::stol(dataNodeDialoguesDialogue["End"].asString());
		if(!dataNodeDialoguesDialogue["HourMinSec"].isNull())
			dialogueObject.hourMinSec = dataNodeDialoguesDialogue["HourMinSec"].asString();
		if(!dataNodeDialoguesDialogue["Identity"].isNull())
			dialogueObject.identity = dataNodeDialoguesDialogue["Identity"].asString();
		if(!dataNodeDialoguesDialogue["Role"].isNull())
			dialogueObject.role = dataNodeDialoguesDialogue["Role"].asString();
		if(!dataNodeDialoguesDialogue["SilenceDuration"].isNull())
			dialogueObject.silenceDuration = std::stoi(dataNodeDialoguesDialogue["SilenceDuration"].asString());
		if(!dataNodeDialoguesDialogue["SpeechRate"].isNull())
			dialogueObject.speechRate = std::stoi(dataNodeDialoguesDialogue["SpeechRate"].asString());
		if(!dataNodeDialoguesDialogue["Words"].isNull())
			dialogueObject.words = dataNodeDialoguesDialogue["Words"].asString();
		data_.dialogues.push_back(dialogueObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetRecognizeResultResult::getMessage()const
{
	return message_;
}

GetRecognizeResultResult::Data GetRecognizeResultResult::getData()const
{
	return data_;
}

std::string GetRecognizeResultResult::getCode()const
{
	return code_;
}

bool GetRecognizeResultResult::getSuccess()const
{
	return success_;
}

