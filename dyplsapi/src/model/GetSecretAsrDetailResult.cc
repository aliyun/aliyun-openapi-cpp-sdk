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

#include <alibabacloud/dyplsapi/model/GetSecretAsrDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dyplsapi;
using namespace AlibabaCloud::Dyplsapi::Model;

GetSecretAsrDetailResult::GetSecretAsrDetailResult() :
	ServiceResult()
{}

GetSecretAsrDetailResult::GetSecretAsrDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSecretAsrDetailResult::~GetSecretAsrDetailResult()
{}

void GetSecretAsrDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["RequestId"].isNull())
		data_.requestId = dataNode["RequestId"].asString();
	if(!dataNode["BusinessId"].isNull())
		data_.businessId = dataNode["BusinessId"].asString();
	if(!dataNode["BusinessKey"].isNull())
		data_.businessKey = dataNode["BusinessKey"].asString();
	if(!dataNode["Code"].isNull())
		data_.code = dataNode["Code"].asString();
	if(!dataNode["Msg"].isNull())
		data_.msg = dataNode["Msg"].asString();
	if(!dataNode["BizDuration"].isNull())
		data_.bizDuration = std::stol(dataNode["BizDuration"].asString());
	if(!dataNode["Type"].isNull())
		data_.type = dataNode["Type"].asString();
	auto allSentencesNode = dataNode["Sentences"]["SecretAsrSentenceDTO"];
	for (auto dataNodeSentencesSecretAsrSentenceDTO : allSentencesNode)
	{
		Data::SecretAsrSentenceDTO secretAsrSentenceDTOObject;
		if(!dataNodeSentencesSecretAsrSentenceDTO["EndTime"].isNull())
			secretAsrSentenceDTOObject.endTime = std::stol(dataNodeSentencesSecretAsrSentenceDTO["EndTime"].asString());
		if(!dataNodeSentencesSecretAsrSentenceDTO["SilenceDuration"].isNull())
			secretAsrSentenceDTOObject.silenceDuration = std::stol(dataNodeSentencesSecretAsrSentenceDTO["SilenceDuration"].asString());
		if(!dataNodeSentencesSecretAsrSentenceDTO["BeginTime"].isNull())
			secretAsrSentenceDTOObject.beginTime = std::stol(dataNodeSentencesSecretAsrSentenceDTO["BeginTime"].asString());
		if(!dataNodeSentencesSecretAsrSentenceDTO["Text"].isNull())
			secretAsrSentenceDTOObject.text = dataNodeSentencesSecretAsrSentenceDTO["Text"].asString();
		if(!dataNodeSentencesSecretAsrSentenceDTO["ChannelId"].isNull())
			secretAsrSentenceDTOObject.channelId = std::stoi(dataNodeSentencesSecretAsrSentenceDTO["ChannelId"].asString());
		if(!dataNodeSentencesSecretAsrSentenceDTO["SpeechRate"].isNull())
			secretAsrSentenceDTOObject.speechRate = std::stoi(dataNodeSentencesSecretAsrSentenceDTO["SpeechRate"].asString());
		if(!dataNodeSentencesSecretAsrSentenceDTO["EmotionValue"].isNull())
			secretAsrSentenceDTOObject.emotionValue = dataNodeSentencesSecretAsrSentenceDTO["EmotionValue"].asString();
		data_.sentences.push_back(secretAsrSentenceDTOObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetSecretAsrDetailResult::getMessage()const
{
	return message_;
}

GetSecretAsrDetailResult::Data GetSecretAsrDetailResult::getData()const
{
	return data_;
}

std::string GetSecretAsrDetailResult::getCode()const
{
	return code_;
}

