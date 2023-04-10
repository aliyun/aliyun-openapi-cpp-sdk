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

#include <alibabacloud/datalake/model/ListRoleUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

ListRoleUsersResult::ListRoleUsersResult() :
	ServiceResult()
{}

ListRoleUsersResult::ListRoleUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRoleUsersResult::~ListRoleUsersResult()
{}

void ListRoleUsersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUserRolesNode = value["UserRoles"]["UserRolesItem"];
	for (auto valueUserRolesUserRolesItem : allUserRolesNode)
	{
		UserRolesItem userRolesObject;
		if(!valueUserRolesUserRolesItem["GrantTime"].isNull())
			userRolesObject.grantTime = std::stol(valueUserRolesUserRolesItem["GrantTime"].asString());
		auto roleNode = value["Role"];
		if(!roleNode["Name"].isNull())
			userRolesObject.role.name = roleNode["Name"].asString();
		if(!roleNode["Description"].isNull())
			userRolesObject.role.description = roleNode["Description"].asString();
		if(!roleNode["DisplayName"].isNull())
			userRolesObject.role.displayName = roleNode["DisplayName"].asString();
		if(!roleNode["PrincipalArn"].isNull())
			userRolesObject.role.principalArn = roleNode["PrincipalArn"].asString();
		if(!roleNode["CreateTime"].isNull())
			userRolesObject.role.createTime = std::stol(roleNode["CreateTime"].asString());
		if(!roleNode["UpdateTime"].isNull())
			userRolesObject.role.updateTime = std::stol(roleNode["UpdateTime"].asString());
		if(!roleNode["IsPredefined"].isNull())
			userRolesObject.role.isPredefined = std::stoi(roleNode["IsPredefined"].asString());
		auto allUsersNode = roleNode["Users"]["UsersItem"];
		for (auto roleNodeUsersUsersItem : allUsersNode)
		{
			UserRolesItem::Role::UsersItem usersItemObject;
			if(!roleNodeUsersUsersItem["PrincipalArn"].isNull())
				usersItemObject.principalArn = roleNodeUsersUsersItem["PrincipalArn"].asString();
			userRolesObject.role.users.push_back(usersItemObject);
		}
		auto userNode = value["User"];
		if(!userNode["PrincipalArn"].isNull())
			userRolesObject.user.principalArn = userNode["PrincipalArn"].asString();
		userRoles_.push_back(userRolesObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();

}

std::string ListRoleUsersResult::getMessage()const
{
	return message_;
}

std::string ListRoleUsersResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::vector<ListRoleUsersResult::UserRolesItem> ListRoleUsersResult::getUserRoles()const
{
	return userRoles_;
}

std::string ListRoleUsersResult::getCode()const
{
	return code_;
}

bool ListRoleUsersResult::getSuccess()const
{
	return success_;
}

