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

#include <alibabacloud/oceanbasepro/model/ModifyTenantUserStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

ModifyTenantUserStatusResult::ModifyTenantUserStatusResult() :
	ServiceResult()
{}

ModifyTenantUserStatusResult::ModifyTenantUserStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyTenantUserStatusResult::~ModifyTenantUserStatusResult()
{}

void ModifyTenantUserStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTenantUserNode = value["TenantUser"]["TenantUserItem"];
	for (auto valueTenantUserTenantUserItem : allTenantUserNode)
	{
		TenantUserItem tenantUserObject;
		if(!valueTenantUserTenantUserItem["UserStatus"].isNull())
			tenantUserObject.userStatus = valueTenantUserTenantUserItem["UserStatus"].asString();
		if(!valueTenantUserTenantUserItem["UserName"].isNull())
			tenantUserObject.userName = valueTenantUserTenantUserItem["UserName"].asString();
		if(!valueTenantUserTenantUserItem["TenantId"].isNull())
			tenantUserObject.tenantId = valueTenantUserTenantUserItem["TenantId"].asString();
		tenantUser_.push_back(tenantUserObject);
	}

}

std::vector<ModifyTenantUserStatusResult::TenantUserItem> ModifyTenantUserStatusResult::getTenantUser()const
{
	return tenantUser_;
}

