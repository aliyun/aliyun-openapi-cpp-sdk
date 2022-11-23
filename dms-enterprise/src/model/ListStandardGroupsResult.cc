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

#include <alibabacloud/dms-enterprise/model/ListStandardGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListStandardGroupsResult::ListStandardGroupsResult() :
	ServiceResult()
{}

ListStandardGroupsResult::ListStandardGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListStandardGroupsResult::~ListStandardGroupsResult()
{}

void ListStandardGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStandardGroupListNode = value["StandardGroupList"]["StandardGroupListItem"];
	for (auto valueStandardGroupListStandardGroupListItem : allStandardGroupListNode)
	{
		StandardGroupListItem standardGroupListObject;
		if(!valueStandardGroupListStandardGroupListItem["GroupName"].isNull())
			standardGroupListObject.groupName = valueStandardGroupListStandardGroupListItem["GroupName"].asString();
		if(!valueStandardGroupListStandardGroupListItem["Description"].isNull())
			standardGroupListObject.description = valueStandardGroupListStandardGroupListItem["Description"].asString();
		if(!valueStandardGroupListStandardGroupListItem["DbType"].isNull())
			standardGroupListObject.dbType = valueStandardGroupListStandardGroupListItem["DbType"].asString();
		if(!valueStandardGroupListStandardGroupListItem["LastMenderId"].isNull())
			standardGroupListObject.lastMenderId = std::stol(valueStandardGroupListStandardGroupListItem["LastMenderId"].asString());
		if(!valueStandardGroupListStandardGroupListItem["GroupMode"].isNull())
			standardGroupListObject.groupMode = valueStandardGroupListStandardGroupListItem["GroupMode"].asString();
		if(!valueStandardGroupListStandardGroupListItem["GroupId"].isNull())
			standardGroupListObject.groupId = std::stol(valueStandardGroupListStandardGroupListItem["GroupId"].asString());
		standardGroupList_.push_back(standardGroupListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::vector<ListStandardGroupsResult::StandardGroupListItem> ListStandardGroupsResult::getStandardGroupList()const
{
	return standardGroupList_;
}

std::string ListStandardGroupsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListStandardGroupsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListStandardGroupsResult::getSuccess()const
{
	return success_;
}

