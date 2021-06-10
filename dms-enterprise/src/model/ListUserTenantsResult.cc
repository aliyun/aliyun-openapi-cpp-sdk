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

#include <alibabacloud/dms-enterprise/model/ListUserTenantsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListUserTenantsResult::ListUserTenantsResult() :
	ServiceResult()
{}

ListUserTenantsResult::ListUserTenantsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserTenantsResult::~ListUserTenantsResult()
{}

void ListUserTenantsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTenantListNode = value["TenantList"]["Tenant"];
	for (auto valueTenantListTenant : allTenantListNode)
	{
		Tenant tenantListObject;
		if(!valueTenantListTenant["Status"].isNull())
			tenantListObject.status = valueTenantListTenant["Status"].asString();
		if(!valueTenantListTenant["Tid"].isNull())
			tenantListObject.tid = std::stol(valueTenantListTenant["Tid"].asString());
		if(!valueTenantListTenant["TenantName"].isNull())
			tenantListObject.tenantName = valueTenantListTenant["TenantName"].asString();
		tenantList_.push_back(tenantListObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<ListUserTenantsResult::Tenant> ListUserTenantsResult::getTenantList()const
{
	return tenantList_;
}

std::string ListUserTenantsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListUserTenantsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListUserTenantsResult::getSuccess()const
{
	return success_;
}

