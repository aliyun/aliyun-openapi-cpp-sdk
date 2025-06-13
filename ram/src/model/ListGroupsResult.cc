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

#include <alibabacloud/ram/model/ListGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ram;
using namespace AlibabaCloud::Ram::Model;

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
		if(!valueGroupsGroup["UpdateDate"].isNull())
			groupsObject.updateDate = valueGroupsGroup["UpdateDate"].asString();
		if(!valueGroupsGroup["GroupName"].isNull())
			groupsObject.groupName = valueGroupsGroup["GroupName"].asString();
		if(!valueGroupsGroup["Comments"].isNull())
			groupsObject.comments = valueGroupsGroup["Comments"].asString();
		if(!valueGroupsGroup["CreateDate"].isNull())
			groupsObject.createDate = valueGroupsGroup["CreateDate"].asString();
		groups_.push_back(groupsObject);
	}
	if(!value["IsTruncated"].isNull())
		isTruncated_ = value["IsTruncated"].asString() == "true";
	if(!value["Marker"].isNull())
		marker_ = value["Marker"].asString();

}

std::vector<ListGroupsResult::Group> ListGroupsResult::getGroups()const
{
	return groups_;
}

bool ListGroupsResult::getIsTruncated()const
{
	return isTruncated_;
}

std::string ListGroupsResult::getMarker()const
{
	return marker_;
}

