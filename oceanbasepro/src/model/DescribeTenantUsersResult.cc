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

#include <alibabacloud/oceanbasepro/model/DescribeTenantUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeTenantUsersResult::DescribeTenantUsersResult() :
	ServiceResult()
{}

DescribeTenantUsersResult::DescribeTenantUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTenantUsersResult::~DescribeTenantUsersResult()
{}

void DescribeTenantUsersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTenantUsersNode = value["TenantUsers"]["TenantUsersItem"];
	for (auto valueTenantUsersTenantUsersItem : allTenantUsersNode)
	{
		TenantUsersItem tenantUsersObject;
		if(!valueTenantUsersTenantUsersItem["UserType"].isNull())
			tenantUsersObject.userType = valueTenantUsersTenantUsersItem["UserType"].asString();
		if(!valueTenantUsersTenantUsersItem["Description"].isNull())
			tenantUsersObject.description = valueTenantUsersTenantUsersItem["Description"].asString();
		if(!valueTenantUsersTenantUsersItem["UserStatus"].isNull())
			tenantUsersObject.userStatus = valueTenantUsersTenantUsersItem["UserStatus"].asString();
		if(!valueTenantUsersTenantUsersItem["UserName"].isNull())
			tenantUsersObject.userName = valueTenantUsersTenantUsersItem["UserName"].asString();
		if(!valueTenantUsersTenantUsersItem["TenantId"].isNull())
			tenantUsersObject.tenantId = valueTenantUsersTenantUsersItem["TenantId"].asString();
		if(!valueTenantUsersTenantUsersItem["InstanceId"].isNull())
			tenantUsersObject.instanceId = valueTenantUsersTenantUsersItem["InstanceId"].asString();
		if(!valueTenantUsersTenantUsersItem["GlobalPermissions"].isNull())
			tenantUsersObject.globalPermissions = valueTenantUsersTenantUsersItem["GlobalPermissions"].asString();
		auto allDatabasesNode = valueTenantUsersTenantUsersItem["Databases"]["DatabasesItem"];
		for (auto valueTenantUsersTenantUsersItemDatabasesDatabasesItem : allDatabasesNode)
		{
			TenantUsersItem::DatabasesItem databasesObject;
			if(!valueTenantUsersTenantUsersItemDatabasesDatabasesItem["Database"].isNull())
				databasesObject.database = valueTenantUsersTenantUsersItemDatabasesDatabasesItem["Database"].asString();
			if(!valueTenantUsersTenantUsersItemDatabasesDatabasesItem["Role"].isNull())
				databasesObject.role = valueTenantUsersTenantUsersItemDatabasesDatabasesItem["Role"].asString();
			if(!valueTenantUsersTenantUsersItemDatabasesDatabasesItem["Table"].isNull())
				databasesObject.table = valueTenantUsersTenantUsersItemDatabasesDatabasesItem["Table"].asString();
			if(!valueTenantUsersTenantUsersItemDatabasesDatabasesItem["Privileges"].isNull())
				databasesObject.privileges = valueTenantUsersTenantUsersItemDatabasesDatabasesItem["Privileges"].asString();
			tenantUsersObject.databases.push_back(databasesObject);
		}
		tenantUsers_.push_back(tenantUsersObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeTenantUsersResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeTenantUsersResult::TenantUsersItem> DescribeTenantUsersResult::getTenantUsers()const
{
	return tenantUsers_;
}

