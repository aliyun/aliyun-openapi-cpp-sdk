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

#include <alibabacloud/eds-user/model/DescribeGroupUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eds_user;
using namespace AlibabaCloud::Eds_user::Model;

DescribeGroupUserResult::DescribeGroupUserResult() :
	ServiceResult()
{}

DescribeGroupUserResult::DescribeGroupUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGroupUserResult::~DescribeGroupUserResult()
{}

void DescribeGroupUserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGroupsNode = value["Groups"]["group"];
	for (auto valueGroupsgroup : allGroupsNode)
	{
		Group groupsObject;
		if(!valueGroupsgroup["GroupName"].isNull())
			groupsObject.groupName = valueGroupsgroup["GroupName"].asString();
		if(!valueGroupsgroup["GroupId"].isNull())
			groupsObject.groupId = valueGroupsgroup["GroupId"].asString();
		if(!valueGroupsgroup["UserCount"].isNull())
			groupsObject.userCount = valueGroupsgroup["UserCount"].asString();
		groups_.push_back(groupsObject);
	}
	auto allUsersNode = value["Users"]["user"];
	for (auto valueUsersuser : allUsersNode)
	{
		User usersObject;
		if(!valueUsersuser["EndUserId"].isNull())
			usersObject.endUserId = valueUsersuser["EndUserId"].asString();
		if(!valueUsersuser["Avatar"].isNull())
			usersObject.avatar = valueUsersuser["Avatar"].asString();
		if(!valueUsersuser["Address"].isNull())
			usersObject.address = valueUsersuser["Address"].asString();
		if(!valueUsersuser["Phone"].isNull())
			usersObject.phone = valueUsersuser["Phone"].asString();
		if(!valueUsersuser["Email"].isNull())
			usersObject.email = valueUsersuser["Email"].asString();
		if(!valueUsersuser["NickName"].isNull())
			usersObject.nickName = valueUsersuser["NickName"].asString();
		if(!valueUsersuser["JobNumber"].isNull())
			usersObject.jobNumber = valueUsersuser["JobNumber"].asString();
		if(!valueUsersuser["GmtJoinGroup"].isNull())
			usersObject.gmtJoinGroup = valueUsersuser["GmtJoinGroup"].asString();
		if(!valueUsersuser["GmtCreated"].isNull())
			usersObject.gmtCreated = valueUsersuser["GmtCreated"].asString();
		users_.push_back(usersObject);
	}

}

std::vector<DescribeGroupUserResult::Group> DescribeGroupUserResult::getGroups()const
{
	return groups_;
}

std::vector<DescribeGroupUserResult::User> DescribeGroupUserResult::getUsers()const
{
	return users_;
}

