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

#include <alibabacloud/imm/model/ListFaceSearchGroupUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

ListFaceSearchGroupUsersResult::ListFaceSearchGroupUsersResult() :
	ServiceResult()
{}

ListFaceSearchGroupUsersResult::ListFaceSearchGroupUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFaceSearchGroupUsersResult::~ListFaceSearchGroupUsersResult()
{}

void ListFaceSearchGroupUsersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUsersNode = value["Users"]["UsersItem"];
	for (auto valueUsersUsersItem : allUsersNode)
	{
		UsersItem usersObject;
		if(!valueUsersUsersItem["User"].isNull())
			usersObject.user = valueUsersUsersItem["User"].asString();
		if(!valueUsersUsersItem["Count"].isNull())
			usersObject.count = valueUsersUsersItem["Count"].asString();
		if(!valueUsersUsersItem["Status"].isNull())
			usersObject.status = valueUsersUsersItem["Status"].asString();
		if(!valueUsersUsersItem["CreateTime"].isNull())
			usersObject.createTime = valueUsersUsersItem["CreateTime"].asString();
		if(!valueUsersUsersItem["ModifyTime"].isNull())
			usersObject.modifyTime = valueUsersUsersItem["ModifyTime"].asString();
		users_.push_back(usersObject);
	}
	if(!value["NextMarker"].isNull())
		nextMarker_ = value["NextMarker"].asString();
	if(!value["GroupName"].isNull())
		groupName_ = value["GroupName"].asString();
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();

}

std::string ListFaceSearchGroupUsersResult::getGroupName()const
{
	return groupName_;
}

std::vector<ListFaceSearchGroupUsersResult::UsersItem> ListFaceSearchGroupUsersResult::getUsers()const
{
	return users_;
}

std::string ListFaceSearchGroupUsersResult::getNextMarker()const
{
	return nextMarker_;
}

std::string ListFaceSearchGroupUsersResult::getGroupId()const
{
	return groupId_;
}

