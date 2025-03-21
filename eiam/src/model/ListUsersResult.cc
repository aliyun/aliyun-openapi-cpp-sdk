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

#include <alibabacloud/eiam/model/ListUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

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
	auto allUsersNode = value["Users"]["User"];
	for (auto valueUsersUser : allUsersNode)
	{
		User usersObject;
		if(!valueUsersUser["UserId"].isNull())
			usersObject.userId = valueUsersUser["UserId"].asString();
		if(!valueUsersUser["Username"].isNull())
			usersObject.username = valueUsersUser["Username"].asString();
		if(!valueUsersUser["DisplayName"].isNull())
			usersObject.displayName = valueUsersUser["DisplayName"].asString();
		if(!valueUsersUser["PasswordSet"].isNull())
			usersObject.passwordSet = valueUsersUser["PasswordSet"].asString() == "true";
		if(!valueUsersUser["PhoneRegion"].isNull())
			usersObject.phoneRegion = valueUsersUser["PhoneRegion"].asString();
		if(!valueUsersUser["PhoneNumber"].isNull())
			usersObject.phoneNumber = valueUsersUser["PhoneNumber"].asString();
		if(!valueUsersUser["PhoneNumberVerified"].isNull())
			usersObject.phoneNumberVerified = valueUsersUser["PhoneNumberVerified"].asString() == "true";
		if(!valueUsersUser["Email"].isNull())
			usersObject.email = valueUsersUser["Email"].asString();
		if(!valueUsersUser["EmailVerified"].isNull())
			usersObject.emailVerified = valueUsersUser["EmailVerified"].asString() == "true";
		if(!valueUsersUser["UserExternalId"].isNull())
			usersObject.userExternalId = valueUsersUser["UserExternalId"].asString();
		if(!valueUsersUser["UserSourceType"].isNull())
			usersObject.userSourceType = valueUsersUser["UserSourceType"].asString();
		if(!valueUsersUser["UserSourceId"].isNull())
			usersObject.userSourceId = valueUsersUser["UserSourceId"].asString();
		if(!valueUsersUser["Status"].isNull())
			usersObject.status = valueUsersUser["Status"].asString();
		if(!valueUsersUser["AccountExpireTime"].isNull())
			usersObject.accountExpireTime = std::stol(valueUsersUser["AccountExpireTime"].asString());
		if(!valueUsersUser["PasswordExpireTime"].isNull())
			usersObject.passwordExpireTime = std::stol(valueUsersUser["PasswordExpireTime"].asString());
		if(!valueUsersUser["RegisterTime"].isNull())
			usersObject.registerTime = std::stol(valueUsersUser["RegisterTime"].asString());
		if(!valueUsersUser["LockExpireTime"].isNull())
			usersObject.lockExpireTime = std::stol(valueUsersUser["LockExpireTime"].asString());
		if(!valueUsersUser["CreateTime"].isNull())
			usersObject.createTime = std::stol(valueUsersUser["CreateTime"].asString());
		if(!valueUsersUser["UpdateTime"].isNull())
			usersObject.updateTime = std::stol(valueUsersUser["UpdateTime"].asString());
		if(!valueUsersUser["Description"].isNull())
			usersObject.description = valueUsersUser["Description"].asString();
		if(!valueUsersUser["InstanceId"].isNull())
			usersObject.instanceId = valueUsersUser["InstanceId"].asString();
		if(!valueUsersUser["Locked"].isNull())
			usersObject.locked = valueUsersUser["Locked"].asString() == "true";
		users_.push_back(usersObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListUsersResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListUsersResult::User> ListUsersResult::getUsers()const
{
	return users_;
}

