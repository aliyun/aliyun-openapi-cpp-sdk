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

#include <alibabacloud/vod/model/ListTranscodeTemplateGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

ListTranscodeTemplateGroupResult::ListTranscodeTemplateGroupResult() :
	ServiceResult()
{}

ListTranscodeTemplateGroupResult::ListTranscodeTemplateGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTranscodeTemplateGroupResult::~ListTranscodeTemplateGroupResult()
{}

void ListTranscodeTemplateGroupResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allTranscodeTemplateGroupList = value["TranscodeTemplateGroupList"]["TranscodeTemplateGroup"];
	for (auto value : allTranscodeTemplateGroupList)
	{
		TranscodeTemplateGroup transcodeTemplateGroupListObject;
		if(!value["CreationTime"].isNull())
			transcodeTemplateGroupListObject.creationTime = value["CreationTime"].asString();
		if(!value["ModifyTime"].isNull())
			transcodeTemplateGroupListObject.modifyTime = value["ModifyTime"].asString();
		if(!value["Name"].isNull())
			transcodeTemplateGroupListObject.name = value["Name"].asString();
		if(!value["IsDefault"].isNull())
			transcodeTemplateGroupListObject.isDefault = value["IsDefault"].asString();
		if(!value["Locked"].isNull())
			transcodeTemplateGroupListObject.locked = value["Locked"].asString();
		if(!value["TranscodeTemplateGroupId"].isNull())
			transcodeTemplateGroupListObject.transcodeTemplateGroupId = value["TranscodeTemplateGroupId"].asString();
		if(!value["TranscodeMode"].isNull())
			transcodeTemplateGroupListObject.transcodeMode = value["TranscodeMode"].asString();
		if(!value["AppId"].isNull())
			transcodeTemplateGroupListObject.appId = value["AppId"].asString();
		transcodeTemplateGroupList_.push_back(transcodeTemplateGroupListObject);
	}

}

std::vector<ListTranscodeTemplateGroupResult::TranscodeTemplateGroup> ListTranscodeTemplateGroupResult::getTranscodeTemplateGroupList()const
{
	return transcodeTemplateGroupList_;
}

