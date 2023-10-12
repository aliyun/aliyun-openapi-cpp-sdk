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

#include <alibabacloud/oceanbasepro/model/ModifyDatabaseUserRolesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

ModifyDatabaseUserRolesResult::ModifyDatabaseUserRolesResult() :
	ServiceResult()
{}

ModifyDatabaseUserRolesResult::ModifyDatabaseUserRolesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyDatabaseUserRolesResult::~ModifyDatabaseUserRolesResult()
{}

void ModifyDatabaseUserRolesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto tenantUserNode = value["TenantUser"];
	if(!tenantUserNode["DatabaseName"].isNull())
		tenantUser_.databaseName = tenantUserNode["DatabaseName"].asString();
	if(!tenantUserNode["TenantId"].isNull())
		tenantUser_.tenantId = tenantUserNode["TenantId"].asString();
	auto allUsersNode = tenantUserNode["Users"]["UserRole"];
	for (auto tenantUserNodeUsersUserRole : allUsersNode)
	{
		TenantUser::UserRole userRoleObject;
		if(!tenantUserNodeUsersUserRole["Role"].isNull())
			userRoleObject.role = tenantUserNodeUsersUserRole["Role"].asString();
		if(!tenantUserNodeUsersUserRole["UserName"].isNull())
			userRoleObject.userName = tenantUserNodeUsersUserRole["UserName"].asString();
		tenantUser_.users.push_back(userRoleObject);
	}

}

ModifyDatabaseUserRolesResult::TenantUser ModifyDatabaseUserRolesResult::getTenantUser()const
{
	return tenantUser_;
}

