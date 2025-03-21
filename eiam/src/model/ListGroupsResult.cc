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

#include <alibabacloud/eiam/model/ListGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

ListGroupsResult::ListGroupsResult() :
	ServiceResult()
{}

ListGroupsResult::ListGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGroupsResult::~ListGroupsResult()
{}

void ListGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGroupsNode = value["Groups"]["Group"];
	for (auto valueGroupsGroup : allGroupsNode)
	{
		Group groupsObject;
		if(!valueGroupsGroup["GroupId"].isNull())
			groupsObject.groupId = valueGroupsGroup["GroupId"].asString();
		if(!valueGroupsGroup["GroupName"].isNull())
			groupsObject.groupName = valueGroupsGroup["GroupName"].asString();
		if(!valueGroupsGroup["Description"].isNull())
			groupsObject.description = valueGroupsGroup["Description"].asString();
		if(!valueGroupsGroup["GroupExternalId"].isNull())
			groupsObject.groupExternalId = valueGroupsGroup["GroupExternalId"].asString();
		if(!valueGroupsGroup["GroupSourceType"].isNull())
			groupsObject.groupSourceType = valueGroupsGroup["GroupSourceType"].asString();
		if(!valueGroupsGroup["GroupSourceId"].isNull())
			groupsObject.groupSourceId = valueGroupsGroup["GroupSourceId"].asString();
		if(!valueGroupsGroup["CreateTime"].isNull())
			groupsObject.createTime = std::stol(valueGroupsGroup["CreateTime"].asString());
		if(!valueGroupsGroup["UpdateTime"].isNull())
			groupsObject.updateTime = std::stol(valueGroupsGroup["UpdateTime"].asString());
		if(!valueGroupsGroup["InstanceId"].isNull())
			groupsObject.instanceId = valueGroupsGroup["InstanceId"].asString();
		groups_.push_back(groupsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListGroupsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListGroupsResult::Group> ListGroupsResult::getGroups()const
{
	return groups_;
}

