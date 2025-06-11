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

#include <alibabacloud/oceanbasepro/model/CreateTenantUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

CreateTenantUserResult::CreateTenantUserResult() :
	ServiceResult()
{}

CreateTenantUserResult::CreateTenantUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateTenantUserResult::~CreateTenantUserResult()
{}

void CreateTenantUserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto tenantUserNode = value["TenantUser"];
	if(!tenantUserNode["UserType"].isNull())
		tenantUser_.userType = tenantUserNode["UserType"].asString();
	if(!tenantUserNode["UserStatus"].isNull())
		tenantUser_.userStatus = tenantUserNode["UserStatus"].asString();
	if(!tenantUserNode["UserName"].isNull())
		tenantUser_.userName = tenantUserNode["UserName"].asString();
	if(!tenantUserNode["GlobalPermissions"].isNull())
		tenantUser_.globalPermissions = tenantUserNode["GlobalPermissions"].asString();
	auto allRolesNode = tenantUserNode["Roles"]["RolesItem"];
	for (auto tenantUserNodeRolesRolesItem : allRolesNode)
	{
		TenantUser::RolesItem rolesItemObject;
		if(!tenantUserNodeRolesRolesItem["Database"].isNull())
			rolesItemObject.database = tenantUserNodeRolesRolesItem["Database"].asString();
		if(!tenantUserNodeRolesRolesItem["Role"].isNull())
			rolesItemObject.role = tenantUserNodeRolesRolesItem["Role"].asString();
		tenantUser_.roles.push_back(rolesItemObject);
	}

}

CreateTenantUserResult::TenantUser CreateTenantUserResult::getTenantUser()const
{
	return tenantUser_;
}

