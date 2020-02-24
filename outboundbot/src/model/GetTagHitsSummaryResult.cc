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

#include <alibabacloud/outboundbot/model/GetTagHitsSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

GetTagHitsSummaryResult::GetTagHitsSummaryResult() :
	ServiceResult()
{}

GetTagHitsSummaryResult::GetTagHitsSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTagHitsSummaryResult::~GetTagHitsSummaryResult()
{}

void GetTagHitsSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagHitsListNode = value["TagHitsList"]["TagHits"];
	for (auto valueTagHitsListTagHits : allTagHitsListNode)
	{
		TagHits tagHitsListObject;
		if(!valueTagHitsListTagHits["TagName"].isNull())
			tagHitsListObject.tagName = valueTagHitsListTagHits["TagName"].asString();
		if(!valueTagHitsListTagHits["HitCount"].isNull())
			tagHitsListObject.hitCount = std::stoi(valueTagHitsListTagHits["HitCount"].asString());
		if(!valueTagHitsListTagHits["TagGroup"].isNull())
			tagHitsListObject.tagGroup = valueTagHitsListTagHits["TagGroup"].asString();
		tagHitsList_.push_back(tagHitsListObject);
	}
	auto allTagGroupsNode = value["TagGroups"]["TagGroup"];
	for (auto valueTagGroupsTagGroup : allTagGroupsNode)
	{
		TagGroup tagGroupsObject;
		if(!valueTagGroupsTagGroup["Id"].isNull())
			tagGroupsObject.id = valueTagGroupsTagGroup["Id"].asString();
		if(!valueTagGroupsTagGroup["TagGroupIndex"].isNull())
			tagGroupsObject.tagGroupIndex = std::stoi(valueTagGroupsTagGroup["TagGroupIndex"].asString());
		if(!valueTagGroupsTagGroup["ScriptId"].isNull())
			tagGroupsObject.scriptId = valueTagGroupsTagGroup["ScriptId"].asString();
		if(!valueTagGroupsTagGroup["TagGroup"].isNull())
			tagGroupsObject.tagGroup = valueTagGroupsTagGroup["TagGroup"].asString();
		tagGroups_.push_back(tagGroupsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string GetTagHitsSummaryResult::getMessage()const
{
	return message_;
}

std::vector<GetTagHitsSummaryResult::TagGroup> GetTagHitsSummaryResult::getTagGroups()const
{
	return tagGroups_;
}

int GetTagHitsSummaryResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<GetTagHitsSummaryResult::TagHits> GetTagHitsSummaryResult::getTagHitsList()const
{
	return tagHitsList_;
}

std::string GetTagHitsSummaryResult::getCode()const
{
	return code_;
}

bool GetTagHitsSummaryResult::getSuccess()const
{
	return success_;
}

