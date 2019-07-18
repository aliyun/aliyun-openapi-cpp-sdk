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

#include <alibabacloud/vod/model/GetTranscodeTemplateGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetTranscodeTemplateGroupResult::GetTranscodeTemplateGroupResult() :
	ServiceResult()
{}

GetTranscodeTemplateGroupResult::GetTranscodeTemplateGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTranscodeTemplateGroupResult::~GetTranscodeTemplateGroupResult()
{}

void GetTranscodeTemplateGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto transcodeTemplateGroupNode = value["TranscodeTemplateGroup"];
	if(!transcodeTemplateGroupNode["CreationTime"].isNull())
		transcodeTemplateGroup_.creationTime = transcodeTemplateGroupNode["CreationTime"].asString();
	if(!transcodeTemplateGroupNode["ModifyTime"].isNull())
		transcodeTemplateGroup_.modifyTime = transcodeTemplateGroupNode["ModifyTime"].asString();
	if(!transcodeTemplateGroupNode["Name"].isNull())
		transcodeTemplateGroup_.name = transcodeTemplateGroupNode["Name"].asString();
	if(!transcodeTemplateGroupNode["IsDefault"].isNull())
		transcodeTemplateGroup_.isDefault = transcodeTemplateGroupNode["IsDefault"].asString();
	if(!transcodeTemplateGroupNode["Locked"].isNull())
		transcodeTemplateGroup_.locked = transcodeTemplateGroupNode["Locked"].asString();
	if(!transcodeTemplateGroupNode["TranscodeMode"].isNull())
		transcodeTemplateGroup_.transcodeMode = transcodeTemplateGroupNode["TranscodeMode"].asString();
	if(!transcodeTemplateGroupNode["AppId"].isNull())
		transcodeTemplateGroup_.appId = transcodeTemplateGroupNode["AppId"].asString();
	if(!transcodeTemplateGroupNode["TranscodeTemplateGroupId"].isNull())
		transcodeTemplateGroup_.transcodeTemplateGroupId = transcodeTemplateGroupNode["TranscodeTemplateGroupId"].asString();
	auto allTranscodeTemplateList = value["TranscodeTemplateList"]["TranscodeTemplate"];
	for (auto value : allTranscodeTemplateList)
	{
		TranscodeTemplateGroup::TranscodeTemplate transcodeTemplateObject;
		if(!value["TranscodeTemplateId"].isNull())
			transcodeTemplateObject.transcodeTemplateId = value["TranscodeTemplateId"].asString();
		if(!value["Video"].isNull())
			transcodeTemplateObject.video = value["Video"].asString();
		if(!value["Audio"].isNull())
			transcodeTemplateObject.audio = value["Audio"].asString();
		if(!value["Container"].isNull())
			transcodeTemplateObject.container = value["Container"].asString();
		if(!value["MuxConfig"].isNull())
			transcodeTemplateObject.muxConfig = value["MuxConfig"].asString();
		if(!value["TransConfig"].isNull())
			transcodeTemplateObject.transConfig = value["TransConfig"].asString();
		if(!value["Definition"].isNull())
			transcodeTemplateObject.definition = value["Definition"].asString();
		if(!value["EncryptSetting"].isNull())
			transcodeTemplateObject.encryptSetting = value["EncryptSetting"].asString();
		if(!value["PackageSetting"].isNull())
			transcodeTemplateObject.packageSetting = value["PackageSetting"].asString();
		if(!value["SubtitleList"].isNull())
			transcodeTemplateObject.subtitleList = value["SubtitleList"].asString();
		if(!value["OpeningList"].isNull())
			transcodeTemplateObject.openingList = value["OpeningList"].asString();
		if(!value["TailSlateList"].isNull())
			transcodeTemplateObject.tailSlateList = value["TailSlateList"].asString();
		if(!value["TemplateName"].isNull())
			transcodeTemplateObject.templateName = value["TemplateName"].asString();
		if(!value["TranscodeFileRegular"].isNull())
			transcodeTemplateObject.transcodeFileRegular = value["TranscodeFileRegular"].asString();
		if(!value["Clip"].isNull())
			transcodeTemplateObject.clip = value["Clip"].asString();
		if(!value["Rotate"].isNull())
			transcodeTemplateObject.rotate = value["Rotate"].asString();
		auto allWatermarkIds = value["WatermarkIds"]["WatermarkId"];
		for (auto value : allWatermarkIds)
			transcodeTemplateObject.watermarkIds.push_back(value.asString());
		transcodeTemplateGroup_.transcodeTemplateList.push_back(transcodeTemplateObject);
	}

}

GetTranscodeTemplateGroupResult::TranscodeTemplateGroup GetTranscodeTemplateGroupResult::getTranscodeTemplateGroup()const
{
	return transcodeTemplateGroup_;
}

