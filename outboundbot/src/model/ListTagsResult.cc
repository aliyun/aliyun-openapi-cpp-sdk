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

#include <alibabacloud/outboundbot/model/ListTagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListTagsResult::ListTagsResult() :
	ServiceResult()
{}

ListTagsResult::ListTagsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTagsResult::~ListTagsResult()
{}

void ListTagsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagGroupsNode = value["TagGroups"]["TagGroup"];
	for (auto valueTagGroupsTagGroup : allTagGroupsNode)
	{
		TagGroup tagGroupsObject;
		if(!valueTagGroupsTagGroup["ScriptId"].isNull())
			tagGroupsObject.scriptId = valueTagGroupsTagGroup["ScriptId"].asString();
		if(!valueTagGroupsTagGroup["TagGroup"].isNull())
			tagGroupsObject.tagGroup = valueTagGroupsTagGroup["TagGroup"].asString();
		if(!valueTagGroupsTagGroup["TagGroupId"].isNull())
			tagGroupsObject.tagGroupId = valueTagGroupsTagGroup["TagGroupId"].asString();
		if(!valueTagGroupsTagGroup["TagGroupIndex"].isNull())
			tagGroupsObject.tagGroupIndex = std::stoi(valueTagGroupsTagGroup["TagGroupIndex"].asString());
		tagGroups_.push_back(tagGroupsObject);
	}
	auto allTagsNode = value["Tags"]["Tag"];
	for (auto valueTagsTag : allTagsNode)
	{
		Tag tagsObject;
		if(!valueTagsTag["ScriptId"].isNull())
			tagsObject.scriptId = valueTagsTag["ScriptId"].asString();
		if(!valueTagsTag["TagGroup"].isNull())
			tagsObject.tagGroup = valueTagsTag["TagGroup"].asString();
		if(!valueTagsTag["TagId"].isNull())
			tagsObject.tagId = valueTagsTag["TagId"].asString();
		if(!valueTagsTag["TagIndex"].isNull())
			tagsObject.tagIndex = std::stoi(valueTagsTag["TagIndex"].asString());
		if(!valueTagsTag["TagName"].isNull())
			tagsObject.tagName = valueTagsTag["TagName"].asString();
		tags_.push_back(tagsObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListTagsResult::getMessage()const
{
	return message_;
}

std::vector<ListTagsResult::TagGroup> ListTagsResult::getTagGroups()const
{
	return tagGroups_;
}

int ListTagsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListTagsResult::getCode()const
{
	return code_;
}

std::vector<ListTagsResult::Tag> ListTagsResult::getTags()const
{
	return tags_;
}

bool ListTagsResult::getSuccess()const
{
	return success_;
}

