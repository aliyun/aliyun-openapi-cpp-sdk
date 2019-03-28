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

#include <alibabacloud/imm/model/ListVideoAudiosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

ListVideoAudiosResult::ListVideoAudiosResult() :
	ServiceResult()
{}

ListVideoAudiosResult::ListVideoAudiosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVideoAudiosResult::~ListVideoAudiosResult()
{}

void ListVideoAudiosResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allAudios = value["Audios"]["AudiosItem"];
	for (auto value : allAudios)
	{
		AudiosItem audiosObject;
		if(!value["AudioDuration"].isNull())
			audiosObject.audioDuration = std::stof(value["AudioDuration"].asString());
		if(!value["AudioUri"].isNull())
			audiosObject.audioUri = value["AudioUri"].asString();
		if(!value["AudioRate"].isNull())
			audiosObject.audioRate = std::stoi(value["AudioRate"].asString());
		if(!value["SourceType"].isNull())
			audiosObject.sourceType = value["SourceType"].asString();
		if(!value["ModifyTime"].isNull())
			audiosObject.modifyTime = value["ModifyTime"].asString();
		if(!value["FileSize"].isNull())
			audiosObject.fileSize = std::stoi(value["FileSize"].asString());
		if(!value["SourceUri"].isNull())
			audiosObject.sourceUri = value["SourceUri"].asString();
		if(!value["CreateTime"].isNull())
			audiosObject.createTime = value["CreateTime"].asString();
		if(!value["RemarksA"].isNull())
			audiosObject.remarksA = value["RemarksA"].asString();
		if(!value["RemarksB"].isNull())
			audiosObject.remarksB = value["RemarksB"].asString();
		if(!value["AudioTextsStatus"].isNull())
			audiosObject.audioTextsStatus = value["AudioTextsStatus"].asString();
		if(!value["AudioTextsModifyTime"].isNull())
			audiosObject.audioTextsModifyTime = value["AudioTextsModifyTime"].asString();
		if(!value["ProcessModifyTime"].isNull())
			audiosObject.processModifyTime = value["ProcessModifyTime"].asString();
		if(!value["ProcessStatus"].isNull())
			audiosObject.processStatus = value["ProcessStatus"].asString();
		if(!value["SourcePosition"].isNull())
			audiosObject.sourcePosition = value["SourcePosition"].asString();
		if(!value["AudioFormat"].isNull())
			audiosObject.audioFormat = value["AudioFormat"].asString();
		if(!value["AudioTextsFailReason"].isNull())
			audiosObject.audioTextsFailReason = value["AudioTextsFailReason"].asString();
		if(!value["ProcessFailReason"].isNull())
			audiosObject.processFailReason = value["ProcessFailReason"].asString();
		if(!value["RemarksC"].isNull())
			audiosObject.remarksC = value["RemarksC"].asString();
		if(!value["RemarksD"].isNull())
			audiosObject.remarksD = value["RemarksD"].asString();
		if(!value["ExternalId"].isNull())
			audiosObject.externalId = value["ExternalId"].asString();
		auto allAudioTexts = value["AudioTexts"]["AudioTextsItem"];
		for (auto value : allAudioTexts)
		{
			AudiosItem::AudioTextsItem audioTextsObject;
			if(!value["Text"].isNull())
				audioTextsObject.text = value["Text"].asString();
			if(!value["BeginTime"].isNull())
				audioTextsObject.beginTime = std::stof(value["BeginTime"].asString());
			if(!value["EndTime"].isNull())
				audioTextsObject.endTime = std::stof(value["EndTime"].asString());
			if(!value["SilenceDuration"].isNull())
				audioTextsObject.silenceDuration = std::stof(value["SilenceDuration"].asString());
			if(!value["EmotionValue"].isNull())
				audioTextsObject.emotionValue = std::stof(value["EmotionValue"].asString());
			if(!value["ChannelId"].isNull())
				audioTextsObject.channelId = std::stoi(value["ChannelId"].asString());
			if(!value["SpeechRate"].isNull())
				audioTextsObject.speechRate = std::stoi(value["SpeechRate"].asString());
			if(!value["Confidence"].isNull())
				audioTextsObject.confidence = std::stof(value["Confidence"].asString());
			if(!value["Person"].isNull())
				audioTextsObject.person = value["Person"].asString();
			if(!value["Library"].isNull())
				audioTextsObject.library = value["Library"].asString();
			audiosObject.audioTexts.push_back(audioTextsObject);
		}
		audios_.push_back(audiosObject);
	}
	if(!value["SetId"].isNull())
		setId_ = value["SetId"].asString();
	if(!value["VideoUri"].isNull())
		videoUri_ = value["VideoUri"].asString();
	if(!value["NextMarker"].isNull())
		nextMarker_ = value["NextMarker"].asString();

}

std::vector<ListVideoAudiosResult::AudiosItem> ListVideoAudiosResult::getAudios()const
{
	return audios_;
}

std::string ListVideoAudiosResult::getVideoUri()const
{
	return videoUri_;
}

std::string ListVideoAudiosResult::getSetId()const
{
	return setId_;
}

std::string ListVideoAudiosResult::getNextMarker()const
{
	return nextMarker_;
}

