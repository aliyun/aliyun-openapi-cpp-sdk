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

#include <alibabacloud/imm/model/ListFaceSearchGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

ListFaceSearchGroupsResult::ListFaceSearchGroupsResult() :
	ServiceResult()
{}

ListFaceSearchGroupsResult::ListFaceSearchGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFaceSearchGroupsResult::~ListFaceSearchGroupsResult()
{}

void ListFaceSearchGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allGroups = value["Groups"]["GroupsItem"];
	for (auto value : allGroups)
	{
		GroupsItem groupsObject;
		if(!value["GroupName"].isNull())
			groupsObject.groupName = value["GroupName"].asString();
		if(!value["Count"].isNull())
			groupsObject.count = value["Count"].asString();
		if(!value["Status"].isNull())
			groupsObject.status = value["Status"].asString();
		if(!value["CreateTime"].isNull())
			groupsObject.createTime = value["CreateTime"].asString();
		if(!value["ModifyTime"].isNull())
			groupsObject.modifyTime = value["ModifyTime"].asString();
		if(!value["GroupId"].isNull())
			groupsObject.groupId = value["GroupId"].asString();
		groups_.push_back(groupsObject);
	}
	if(!value["NextMarker"].isNull())
		nextMarker_ = value["NextMarker"].asString();

}

std::vector<ListFaceSearchGroupsResult::GroupsItem> ListFaceSearchGroupsResult::getGroups()const
{
	return groups_;
}

std::string ListFaceSearchGroupsResult::getNextMarker()const
{
	return nextMarker_;
}

