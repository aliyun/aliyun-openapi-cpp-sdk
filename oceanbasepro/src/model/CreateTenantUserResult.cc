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
	auto allTenantUserNode = value["TenantUser"]["Data"];
	for (auto valueTenantUserData : allTenantUserNode)
	{
		Data tenantUserObject;
		if(!valueTenantUserData["UserType"].isNull())
			tenantUserObject.userType = valueTenantUserData["UserType"].asString();
		if(!valueTenantUserData["UserStatus"].isNull())
			tenantUserObject.userStatus = valueTenantUserData["UserStatus"].asString();
		if(!valueTenantUserData["UserName"].isNull())
			tenantUserObject.userName = valueTenantUserData["UserName"].asString();
		auto allRolesNode = valueTenantUserData["Roles"]["RolesItem"];
		for (auto valueTenantUserDataRolesRolesItem : allRolesNode)
		{
			Data::RolesItem rolesObject;
			if(!valueTenantUserDataRolesRolesItem["Database"].isNull())
				rolesObject.database = valueTenantUserDataRolesRolesItem["Database"].asString();
			if(!valueTenantUserDataRolesRolesItem["Role"].isNull())
				rolesObject.role = valueTenantUserDataRolesRolesItem["Role"].asString();
			tenantUserObject.roles.push_back(rolesObject);
		}
		tenantUser_.push_back(tenantUserObject);
	}

}

std::vector<CreateTenantUserResult::Data> CreateTenantUserResult::getTenantUser()const
{
	return tenantUser_;
}

