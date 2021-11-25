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

#include <alibabacloud/voicenavigator/model/DescribeVoiceConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::VoiceNavigator;
using namespace AlibabaCloud::VoiceNavigator::Model;

DescribeVoiceConfigResult::DescribeVoiceConfigResult() :
	ServiceResult()
{}

DescribeVoiceConfigResult::DescribeVoiceConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVoiceConfigResult::~DescribeVoiceConfigResult()
{}

void DescribeVoiceConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApesIpListNode = value["ApesIpList"]["Ip"];
	for (auto valueApesIpListIp : allApesIpListNode)
	{
		Ip apesIpListObject;
		if(!valueApesIpListIp["Ip"].isNull())
			apesIpListObject.ip = valueApesIpListIp["Ip"].asString();
		apesIpList_.push_back(apesIpListObject);
	}
	if(!value["SpeechNoiseThreshold"].isNull())
		speechNoiseThreshold_ = value["SpeechNoiseThreshold"].asString();
	if(!value["AsrCustomizationId"].isNull())
		asrCustomizationId_ = value["AsrCustomizationId"].asString();
	if(!value["Voice"].isNull())
		voice_ = value["Voice"].asString();
	if(!value["AsrClassVocabularyId"].isNull())
		asrClassVocabularyId_ = value["AsrClassVocabularyId"].asString();
	if(!value["AsrVocabularyId"].isNull())
		asrVocabularyId_ = value["AsrVocabularyId"].asString();
	if(!value["AsrAcousticModelId"].isNull())
		asrAcousticModelId_ = value["AsrAcousticModelId"].asString();
	if(!value["Volume"].isNull())
		volume_ = std::stoi(value["Volume"].asString());
	if(!value["SpeechRate"].isNull())
		speechRate_ = std::stoi(value["SpeechRate"].asString());

}

std::string DescribeVoiceConfigResult::getAsrVocabularyId()const
{
	return asrVocabularyId_;
}

std::string DescribeVoiceConfigResult::getAsrCustomizationId()const
{
	return asrCustomizationId_;
}

int DescribeVoiceConfigResult::getVolume()const
{
	return volume_;
}

std::vector<DescribeVoiceConfigResult::Ip> DescribeVoiceConfigResult::getApesIpList()const
{
	return apesIpList_;
}

std::string DescribeVoiceConfigResult::getAsrAcousticModelId()const
{
	return asrAcousticModelId_;
}

std::string DescribeVoiceConfigResult::getVoice()const
{
	return voice_;
}

std::string DescribeVoiceConfigResult::getAsrClassVocabularyId()const
{
	return asrClassVocabularyId_;
}

int DescribeVoiceConfigResult::getSpeechRate()const
{
	return speechRate_;
}

std::string DescribeVoiceConfigResult::getSpeechNoiseThreshold()const
{
	return speechNoiseThreshold_;
}

