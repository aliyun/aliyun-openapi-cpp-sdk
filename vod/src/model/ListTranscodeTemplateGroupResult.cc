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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTranscodeTemplateGroupListNode = value["TranscodeTemplateGroupList"]["TranscodeTemplateGroup"];
	for (auto valueTranscodeTemplateGroupListTranscodeTemplateGroup : allTranscodeTemplateGroupListNode)
	{
		TranscodeTemplateGroup transcodeTemplateGroupListObject;
		if(!valueTranscodeTemplateGroupListTranscodeTemplateGroup["CreationTime"].isNull())
			transcodeTemplateGroupListObject.creationTime = valueTranscodeTemplateGroupListTranscodeTemplateGroup["CreationTime"].asString();
		if(!valueTranscodeTemplateGroupListTranscodeTemplateGroup["TranscodeMode"].isNull())
			transcodeTemplateGroupListObject.transcodeMode = valueTranscodeTemplateGroupListTranscodeTemplateGroup["TranscodeMode"].asString();
		if(!valueTranscodeTemplateGroupListTranscodeTemplateGroup["IsDefault"].isNull())
			transcodeTemplateGroupListObject.isDefault = valueTranscodeTemplateGroupListTranscodeTemplateGroup["IsDefault"].asString();
		if(!valueTranscodeTemplateGroupListTranscodeTemplateGroup["AppId"].isNull())
			transcodeTemplateGroupListObject.appId = valueTranscodeTemplateGroupListTranscodeTemplateGroup["AppId"].asString();
		if(!valueTranscodeTemplateGroupListTranscodeTemplateGroup["TranscodeTemplateGroupId"].isNull())
			transcodeTemplateGroupListObject.transcodeTemplateGroupId = valueTranscodeTemplateGroupListTranscodeTemplateGroup["TranscodeTemplateGroupId"].asString();
		if(!valueTranscodeTemplateGroupListTranscodeTemplateGroup["Name"].isNull())
			transcodeTemplateGroupListObject.name = valueTranscodeTemplateGroupListTranscodeTemplateGroup["Name"].asString();
		if(!valueTranscodeTemplateGroupListTranscodeTemplateGroup["ModifyTime"].isNull())
			transcodeTemplateGroupListObject.modifyTime = valueTranscodeTemplateGroupListTranscodeTemplateGroup["ModifyTime"].asString();
		if(!valueTranscodeTemplateGroupListTranscodeTemplateGroup["Locked"].isNull())
			transcodeTemplateGroupListObject.locked = valueTranscodeTemplateGroupListTranscodeTemplateGroup["Locked"].asString();
		transcodeTemplateGroupList_.push_back(transcodeTemplateGroupListObject);
	}

}

std::vector<ListTranscodeTemplateGroupResult::TranscodeTemplateGroup> ListTranscodeTemplateGroupResult::getTranscodeTemplateGroupList()const
{
	return transcodeTemplateGroupList_;
}

