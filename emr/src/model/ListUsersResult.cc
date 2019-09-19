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

#include <alibabacloud/emr/model/ListUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListUsersResult::ListUsersResult() :
	ServiceResult()
{}

ListUsersResult::ListUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUsersResult::~ListUsersResult()
{}

void ListUsersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUserListNode = value["UserList"]["User"];
	for (auto valueUserListUser : allUserListNode)
	{
		User userListObject;
		if(!valueUserListUser["UserName"].isNull())
			userListObject.userName = valueUserListUser["UserName"].asString();
		if(!valueUserListUser["GroupName"].isNull())
			userListObject.groupName = valueUserListUser["GroupName"].asString();
		if(!valueUserListUser["UserId"].isNull())
			userListObject.userId = valueUserListUser["UserId"].asString();
		if(!valueUserListUser["KnoxStatus"].isNull())
			userListObject.knoxStatus = valueUserListUser["KnoxStatus"].asString();
		if(!valueUserListUser["LinuxStatus"].isNull())
			userListObject.linuxStatus = valueUserListUser["LinuxStatus"].asString();
		if(!valueUserListUser["KerberosStatus"].isNull())
			userListObject.kerberosStatus = valueUserListUser["KerberosStatus"].asString();
		userList_.push_back(userListObject);
	}

}

std::vector<ListUsersResult::User> ListUsersResult::getUserList()const
{
	return userList_;
}

