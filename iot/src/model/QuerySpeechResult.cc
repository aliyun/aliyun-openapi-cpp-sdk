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

#include <alibabacloud/iot/model/QuerySpeechResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QuerySpeechResult::QuerySpeechResult() :
	ServiceResult()
{}

QuerySpeechResult::QuerySpeechResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySpeechResult::~QuerySpeechResult()
{}

void QuerySpeechResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["SpeechCode"].isNull())
		data_.speechCode = dataNode["SpeechCode"].asString();
	if(!dataNode["BizCode"].isNull())
		data_.bizCode = dataNode["BizCode"].asString();
	if(!dataNode["Voice"].isNull())
		data_.voice = dataNode["Voice"].asString();
	if(!dataNode["Volume"].isNull())
		data_.volume = std::stoi(dataNode["Volume"].asString());
	if(!dataNode["SpeechRate"].isNull())
		data_.speechRate = std::stoi(dataNode["SpeechRate"].asString());
	if(!dataNode["Text"].isNull())
		data_.text = dataNode["Text"].asString();
	if(!dataNode["AudioFormat"].isNull())
		data_.audioFormat = dataNode["AudioFormat"].asString();
	if(!dataNode["SpeechType"].isNull())
		data_.speechType = dataNode["SpeechType"].asString();
	if(!dataNode["EnableSoundCode"].isNull())
		data_.enableSoundCode = dataNode["EnableSoundCode"].asString() == "true";
	auto soundCodeConfigNode = dataNode["SoundCodeConfig"];
	if(!soundCodeConfigNode["AdditionalDuration"].isNull())
		data_.soundCodeConfig.additionalDuration = std::stoi(soundCodeConfigNode["AdditionalDuration"].asString());
	if(!soundCodeConfigNode["SoundCodeContent"].isNull())
		data_.soundCodeConfig.soundCodeContent = soundCodeConfigNode["SoundCodeContent"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

QuerySpeechResult::Data QuerySpeechResult::getData()const
{
	return data_;
}

std::string QuerySpeechResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QuerySpeechResult::getCode()const
{
	return code_;
}

bool QuerySpeechResult::getSuccess()const
{
	return success_;
}

