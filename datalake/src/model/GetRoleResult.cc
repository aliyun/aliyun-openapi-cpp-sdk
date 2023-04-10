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

#include <alibabacloud/datalake/model/GetRoleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

GetRoleResult::GetRoleResult() :
	ServiceResult()
{}

GetRoleResult::GetRoleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRoleResult::~GetRoleResult()
{}

void GetRoleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto roleNode = value["Role"];
	if(!roleNode["Name"].isNull())
		role_.name = roleNode["Name"].asString();
	if(!roleNode["Description"].isNull())
		role_.description = roleNode["Description"].asString();
	if(!roleNode["DisplayName"].isNull())
		role_.displayName = roleNode["DisplayName"].asString();
	if(!roleNode["PrincipalArn"].isNull())
		role_.principalArn = roleNode["PrincipalArn"].asString();
	if(!roleNode["CreateTime"].isNull())
		role_.createTime = std::stol(roleNode["CreateTime"].asString());
	if(!roleNode["UpdateTime"].isNull())
		role_.updateTime = std::stol(roleNode["UpdateTime"].asString());
	if(!roleNode["IsPredefined"].isNull())
		role_.isPredefined = std::stoi(roleNode["IsPredefined"].asString());
	auto allUsersNode = roleNode["Users"]["UsersItem"];
	for (auto roleNodeUsersUsersItem : allUsersNode)
	{
		Role::UsersItem usersItemObject;
		if(!roleNodeUsersUsersItem["PrincipalArn"].isNull())
			usersItemObject.principalArn = roleNodeUsersUsersItem["PrincipalArn"].asString();
		role_.users.push_back(usersItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetRoleResult::Role GetRoleResult::getRole()const
{
	return role_;
}

std::string GetRoleResult::getMessage()const
{
	return message_;
}

std::string GetRoleResult::getCode()const
{
	return code_;
}

bool GetRoleResult::getSuccess()const
{
	return success_;
}

