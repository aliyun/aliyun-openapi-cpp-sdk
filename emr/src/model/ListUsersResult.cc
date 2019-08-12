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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allUserList = value["UserList"]["User"];
	for (auto value : allUserList)
	{
		User userListObject;
		if(!value["UserName"].isNull())
			userListObject.userName = value["UserName"].asString();
		if(!value["GroupName"].isNull())
			userListObject.groupName = value["GroupName"].asString();
		if(!value["UserId"].isNull())
			userListObject.userId = value["UserId"].asString();
		if(!value["KnoxStatus"].isNull())
			userListObject.knoxStatus = value["KnoxStatus"].asString();
		if(!value["LinuxStatus"].isNull())
			userListObject.linuxStatus = value["LinuxStatus"].asString();
		if(!value["KerberosStatus"].isNull())
			userListObject.kerberosStatus = value["KerberosStatus"].asString();
		userList_.push_back(userListObject);
	}

}

std::vector<ListUsersResult::User> ListUsersResult::getUserList()const
{
	return userList_;
}

