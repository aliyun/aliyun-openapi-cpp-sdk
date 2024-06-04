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

#include <alibabacloud/live/model/ListLiveMessageGroupByPageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

ListLiveMessageGroupByPageResult::ListLiveMessageGroupByPageResult() :
	ServiceResult()
{}

ListLiveMessageGroupByPageResult::ListLiveMessageGroupByPageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLiveMessageGroupByPageResult::~ListLiveMessageGroupByPageResult()
{}

void ListLiveMessageGroupByPageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGroupListNode = value["GroupList"]["Groups"];
	for (auto valueGroupListGroups : allGroupListNode)
	{
		Groups groupListObject;
		if(!valueGroupListGroups["GroupId"].isNull())
			groupListObject.groupId = valueGroupListGroups["GroupId"].asString();
		if(!valueGroupListGroups["CreatorId"].isNull())
			groupListObject.creatorId = valueGroupListGroups["CreatorId"].asString();
		if(!valueGroupListGroups["Createtime"].isNull())
			groupListObject.createtime = std::stol(valueGroupListGroups["Createtime"].asString());
		if(!valueGroupListGroups["GroupName"].isNull())
			groupListObject.groupName = valueGroupListGroups["GroupName"].asString();
		if(!valueGroupListGroups["GroupInfo"].isNull())
			groupListObject.groupInfo = valueGroupListGroups["GroupInfo"].asString();
		if(!valueGroupListGroups["Delete"].isNull())
			groupListObject._delete = valueGroupListGroups["Delete"].asString() == "true";
		auto allAdminList = value["AdminList"]["Admins"];
		for (auto value : allAdminList)
			groupListObject.adminList.push_back(value.asString());
		groupList_.push_back(groupListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListLiveMessageGroupByPageResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListLiveMessageGroupByPageResult::Groups> ListLiveMessageGroupByPageResult::getGroupList()const
{
	return groupList_;
}

int ListLiveMessageGroupByPageResult::getPageSize()const
{
	return pageSize_;
}

int ListLiveMessageGroupByPageResult::getPageNumber()const
{
	return pageNumber_;
}

