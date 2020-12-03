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

#include <alibabacloud/qualitycheck/model/ValidateRoleSetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

ValidateRoleSetResult::ValidateRoleSetResult() :
	ServiceResult()
{}

ValidateRoleSetResult::ValidateRoleSetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ValidateRoleSetResult::~ValidateRoleSetResult()
{}

void ValidateRoleSetResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["SentenceResult"];
	for (auto valueDataSentenceResult : allDataNode)
	{
		SentenceResult dataObject;
		if(!valueDataSentenceResult["BeginTime"].isNull())
			dataObject.beginTime = std::stol(valueDataSentenceResult["BeginTime"].asString());
		if(!valueDataSentenceResult["ChannelId"].isNull())
			dataObject.channelId = std::stoi(valueDataSentenceResult["ChannelId"].asString());
		if(!valueDataSentenceResult["EndTime"].isNull())
			dataObject.endTime = std::stol(valueDataSentenceResult["EndTime"].asString());
		if(!valueDataSentenceResult["Text"].isNull())
			dataObject.text = valueDataSentenceResult["Text"].asString();
		if(!valueDataSentenceResult["EmotionValue"].isNull())
			dataObject.emotionValue = std::stoi(valueDataSentenceResult["EmotionValue"].asString());
		if(!valueDataSentenceResult["SilenceDuration"].isNull())
			dataObject.silenceDuration = std::stoi(valueDataSentenceResult["SilenceDuration"].asString());
		if(!valueDataSentenceResult["SpeechRate"].isNull())
			dataObject.speechRate = std::stoi(valueDataSentenceResult["SpeechRate"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ValidateRoleSetResult::getMessage()const
{
	return message_;
}

std::vector<ValidateRoleSetResult::SentenceResult> ValidateRoleSetResult::getData()const
{
	return data_;
}

std::string ValidateRoleSetResult::getCode()const
{
	return code_;
}

bool ValidateRoleSetResult::getSuccess()const
{
	return success_;
}

