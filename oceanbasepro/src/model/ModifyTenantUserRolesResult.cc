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

#include <alibabacloud/oceanbasepro/model/ModifyTenantUserRolesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

ModifyTenantUserRolesResult::ModifyTenantUserRolesResult() :
	ServiceResult()
{}

ModifyTenantUserRolesResult::ModifyTenantUserRolesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyTenantUserRolesResult::~ModifyTenantUserRolesResult()
{}

void ModifyTenantUserRolesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto tenantUserNode = value["TenantUser"];
	if(!tenantUserNode["UserName"].isNull())
		tenantUser_.userName = tenantUserNode["UserName"].asString();
	if(!tenantUserNode["TenantId"].isNull())
		tenantUser_.tenantId = tenantUserNode["TenantId"].asString();
	auto allUserRoleNode = tenantUserNode["UserRole"]["UserRoleItem"];
	for (auto tenantUserNodeUserRoleUserRoleItem : allUserRoleNode)
	{
		TenantUser::UserRoleItem userRoleItemObject;
		if(!tenantUserNodeUserRoleUserRoleItem["Database"].isNull())
			userRoleItemObject.database = tenantUserNodeUserRoleUserRoleItem["Database"].asString();
		if(!tenantUserNodeUserRoleUserRoleItem["Role"].isNull())
			userRoleItemObject.role = tenantUserNodeUserRoleUserRoleItem["Role"].asString();
		if(!tenantUserNodeUserRoleUserRoleItem["Table"].isNull())
			userRoleItemObject.table = tenantUserNodeUserRoleUserRoleItem["Table"].asString();
		if(!tenantUserNodeUserRoleUserRoleItem["IsSuccess"].isNull())
			userRoleItemObject.isSuccess = tenantUserNodeUserRoleUserRoleItem["IsSuccess"].asString() == "true";
		tenantUser_.userRole.push_back(userRoleItemObject);
	}

}

ModifyTenantUserRolesResult::TenantUser ModifyTenantUserRolesResult::getTenantUser()const
{
	return tenantUser_;
}

