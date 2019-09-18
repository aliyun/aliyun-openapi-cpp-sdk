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
	auto allUsers = value["Users"]["UsersItem"];
	for (auto value : allUsers)
	{
		UsersItem usersObject;
		if(!value["User"].isNull())
			usersObject.user = value["User"].asString();
		if(!value["Count"].isNull())
			usersObject.count = value["Count"].asString();
		if(!value["Status"].isNull())
			usersObject.status = value["Status"].asString();
		if(!value["CreateTime"].isNull())
			usersObject.createTime = value["CreateTime"].asString();
		if(!value["ModifyTime"].isNull())
			usersObject.modifyTime = value["ModifyTime"].asString();
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

