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

#include <alibabacloud/voicenavigator/model/DescribeTTSConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::VoiceNavigator;
using namespace AlibabaCloud::VoiceNavigator::Model;

DescribeTTSConfigResult::DescribeTTSConfigResult() :
	ServiceResult()
{}

DescribeTTSConfigResult::DescribeTTSConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTTSConfigResult::~DescribeTTSConfigResult()
{}

void DescribeTTSConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Voice"].isNull())
		voice_ = value["Voice"].asString();
	if(!value["SpeechRate"].isNull())
		speechRate_ = std::stoi(value["SpeechRate"].asString());
	if(!value["Volume"].isNull())
		volume_ = std::stoi(value["Volume"].asString());

}

int DescribeTTSConfigResult::getVolume()const
{
	return volume_;
}

std::string DescribeTTSConfigResult::getVoice()const
{
	return voice_;
}

int DescribeTTSConfigResult::getSpeechRate()const
{
	return speechRate_;
}

