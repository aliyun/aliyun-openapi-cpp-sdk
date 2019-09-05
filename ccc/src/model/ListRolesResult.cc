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

#include <alibabacloud/ccc/model/ListRolesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

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
	auto allRoles = value["Roles"]["Role"];
	for (auto value : allRoles)
	{
		Role rolesObject;
		if(!value["RoleId"].isNull())
			rolesObject.roleId = value["RoleId"].asString();
		if(!value["InstanceId"].isNull())
			rolesObject.instanceId = value["InstanceId"].asString();
		if(!value["RoleName"].isNull())
			rolesObject.roleName = value["RoleName"].asString();
		if(!value["RoleDescription"].isNull())
			rolesObject.roleDescription = value["RoleDescription"].asString();
		roles_.push_back(rolesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string ListRolesResult::getMessage()const
{
	return message_;
}

int ListRolesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListRolesResult::Role> ListRolesResult::getRoles()const
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

