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

#include <alibabacloud/datalake/model/ListRolesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

ListRolesResult::ListRolesResult() :
	ServiceResult()
{}

ListRolesResult::ListRolesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRolesResult::~ListRolesResult()
{}

void ListRolesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRolesNode = value["Roles"]["RolesItem"];
	for (auto valueRolesRolesItem : allRolesNode)
	{
		RolesItem rolesObject;
		if(!valueRolesRolesItem["Name"].isNull())
			rolesObject.name = valueRolesRolesItem["Name"].asString();
		if(!valueRolesRolesItem["Description"].isNull())
			rolesObject.description = valueRolesRolesItem["Description"].asString();
		if(!valueRolesRolesItem["DisplayName"].isNull())
			rolesObject.displayName = valueRolesRolesItem["DisplayName"].asString();
		if(!valueRolesRolesItem["PrincipalArn"].isNull())
			rolesObject.principalArn = valueRolesRolesItem["PrincipalArn"].asString();
		if(!valueRolesRolesItem["CreateTime"].isNull())
			rolesObject.createTime = std::stol(valueRolesRolesItem["CreateTime"].asString());
		if(!valueRolesRolesItem["UpdateTime"].isNull())
			rolesObject.updateTime = std::stol(valueRolesRolesItem["UpdateTime"].asString());
		if(!valueRolesRolesItem["IsPredefined"].isNull())
			rolesObject.isPredefined = std::stoi(valueRolesRolesItem["IsPredefined"].asString());
		auto allUsersNode = valueRolesRolesItem["Users"]["UsersItem"];
		for (auto valueRolesRolesItemUsersUsersItem : allUsersNode)
		{
			RolesItem::UsersItem usersObject;
			if(!valueRolesRolesItemUsersUsersItem["PrincipalArn"].isNull())
				usersObject.principalArn = valueRolesRolesItemUsersUsersItem["PrincipalArn"].asString();
			rolesObject.users.push_back(usersObject);
		}
		roles_.push_back(rolesObject);
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

std::string ListRolesResult::getMessage()const
{
	return message_;
}

std::string ListRolesResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::vector<ListRolesResult::RolesItem> ListRolesResult::getRoles()const
{
	return roles_;
}

std::string ListRolesResult::getCode()const
{
	return code_;
}

bool ListRolesResult::getSuccess()const
{
	return success_;
}

