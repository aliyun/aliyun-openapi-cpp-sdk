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

#include <alibabacloud/outboundbot/model/ModifyTagGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ModifyTagGroupsResult::ModifyTagGroupsResult() :
	ServiceResult()
{}

ModifyTagGroupsResult::ModifyTagGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyTagGroupsResult::~ModifyTagGroupsResult()
{}

void ModifyTagGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagGroupsNode = value["TagGroups"]["TagGroup"];
	for (auto valueTagGroupsTagGroup : allTagGroupsNode)
	{
		TagGroup tagGroupsObject;
		if(!valueTagGroupsTagGroup["TagGroupId"].isNull())
			tagGroupsObject.tagGroupId = valueTagGroupsTagGroup["TagGroupId"].asString();
		if(!valueTagGroupsTagGroup["TagGroupIndex"].isNull())
			tagGroupsObject.tagGroupIndex = std::stoi(valueTagGroupsTagGroup["TagGroupIndex"].asString());
		if(!valueTagGroupsTagGroup["TagGroup"].isNull())
			tagGroupsObject.tagGroup = valueTagGroupsTagGroup["TagGroup"].asString();
		if(!valueTagGroupsTagGroup["ScriptId"].isNull())
			tagGroupsObject.scriptId = valueTagGroupsTagGroup["ScriptId"].asString();
		tagGroups_.push_back(tagGroupsObject);
	}
	auto allTagsNode = value["Tags"]["Tag"];
	for (auto valueTagsTag : allTagsNode)
	{
		Tag tagsObject;
		if(!valueTagsTag["TagGroup"].isNull())
			tagsObject.tagGroup = valueTagsTag["TagGroup"].asString();
		if(!valueTagsTag["TagName"].isNull())
			tagsObject.tagName = valueTagsTag["TagName"].asString();
		if(!valueTagsTag["TagIndex"].isNull())
			tagsObject.tagIndex = std::stoi(valueTagsTag["TagIndex"].asString());
		if(!valueTagsTag["ScriptId"].isNull())
			tagsObject.scriptId = valueTagsTag["ScriptId"].asString();
		if(!valueTagsTag["TagId"].isNull())
			tagsObject.tagId = valueTagsTag["TagId"].asString();
		tags_.push_back(tagsObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ModifyTagGroupsResult::getMessage()const
{
	return message_;
}

std::vector<ModifyTagGroupsResult::TagGroup> ModifyTagGroupsResult::getTagGroups()const
{
	return tagGroups_;
}

int ModifyTagGroupsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ModifyTagGroupsResult::getCode()const
{
	return code_;
}

std::vector<ModifyTagGroupsResult::Tag> ModifyTagGroupsResult::getTags()const
{
	return tags_;
}

bool ModifyTagGroupsResult::getSuccess()const
{
	return success_;
}

