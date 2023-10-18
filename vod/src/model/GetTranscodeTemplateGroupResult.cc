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
	if(!transcodeTemplateGroupNode["TranscodeMode"].isNull())
		transcodeTemplateGroup_.transcodeMode = transcodeTemplateGroupNode["TranscodeMode"].asString();
	if(!transcodeTemplateGroupNode["IsDefault"].isNull())
		transcodeTemplateGroup_.isDefault = transcodeTemplateGroupNode["IsDefault"].asString();
	if(!transcodeTemplateGroupNode["AppId"].isNull())
		transcodeTemplateGroup_.appId = transcodeTemplateGroupNode["AppId"].asString();
	if(!transcodeTemplateGroupNode["TranscodeTemplateGroupId"].isNull())
		transcodeTemplateGroup_.transcodeTemplateGroupId = transcodeTemplateGroupNode["TranscodeTemplateGroupId"].asString();
	if(!transcodeTemplateGroupNode["Name"].isNull())
		transcodeTemplateGroup_.name = transcodeTemplateGroupNode["Name"].asString();
	if(!transcodeTemplateGroupNode["ModifyTime"].isNull())
		transcodeTemplateGroup_.modifyTime = transcodeTemplateGroupNode["ModifyTime"].asString();
	if(!transcodeTemplateGroupNode["Locked"].isNull())
		transcodeTemplateGroup_.locked = transcodeTemplateGroupNode["Locked"].asString();
	auto allTranscodeTemplateListNode = transcodeTemplateGroupNode["TranscodeTemplateList"]["TranscodeTemplate"];
	for (auto transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate : allTranscodeTemplateListNode)
	{
		TranscodeTemplateGroup::TranscodeTemplate transcodeTemplateObject;
		if(!transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["Type"].isNull())
			transcodeTemplateObject.type = transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["Type"].asString();
		if(!transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["Video"].isNull())
			transcodeTemplateObject.video = transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["Video"].asString();
		if(!transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["TransConfig"].isNull())
			transcodeTemplateObject.transConfig = transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["TransConfig"].asString();
		if(!transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["Rotate"].isNull())
			transcodeTemplateObject.rotate = transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["Rotate"].asString();
		if(!transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["TranscodeTemplateId"].isNull())
			transcodeTemplateObject.transcodeTemplateId = transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["TranscodeTemplateId"].asString();
		if(!transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["TemplateName"].isNull())
			transcodeTemplateObject.templateName = transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["TemplateName"].asString();
		if(!transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["EncryptSetting"].isNull())
			transcodeTemplateObject.encryptSetting = transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["EncryptSetting"].asString();
		if(!transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["Audio"].isNull())
			transcodeTemplateObject.audio = transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["Audio"].asString();
		if(!transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["TranscodeFileRegular"].isNull())
			transcodeTemplateObject.transcodeFileRegular = transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["TranscodeFileRegular"].asString();
		if(!transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["Container"].isNull())
			transcodeTemplateObject.container = transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["Container"].asString();
		if(!transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["Clip"].isNull())
			transcodeTemplateObject.clip = transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["Clip"].asString();
		if(!transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["Definition"].isNull())
			transcodeTemplateObject.definition = transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["Definition"].asString();
		if(!transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["PackageSetting"].isNull())
			transcodeTemplateObject.packageSetting = transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["PackageSetting"].asString();
		if(!transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["OpeningList"].isNull())
			transcodeTemplateObject.openingList = transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["OpeningList"].asString();
		if(!transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["UserData"].isNull())
			transcodeTemplateObject.userData = transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["UserData"].asString();
		if(!transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["SubtitleList"].isNull())
			transcodeTemplateObject.subtitleList = transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["SubtitleList"].asString();
		if(!transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["MuxConfig"].isNull())
			transcodeTemplateObject.muxConfig = transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["MuxConfig"].asString();
		if(!transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["TailSlateList"].isNull())
			transcodeTemplateObject.tailSlateList = transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["TailSlateList"].asString();
		if(!transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["TraceMark"].isNull())
			transcodeTemplateObject.traceMark = transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["TraceMark"].asString();
		if(!transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["CopyrightMark"].isNull())
			transcodeTemplateObject.copyrightMark = transcodeTemplateGroupNodeTranscodeTemplateListTranscodeTemplate["CopyrightMark"].asString();
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

