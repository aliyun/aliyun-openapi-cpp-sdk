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

#include <alibabacloud/dms-enterprise/model/GetUserActiveTenantResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetUserActiveTenantResult::GetUserActiveTenantResult() :
	ServiceResult()
{}

GetUserActiveTenantResult::GetUserActiveTenantResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUserActiveTenantResult::~GetUserActiveTenantResult()
{}

void GetUserActiveTenantResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto tenantNode = value["Tenant"];
	if(!tenantNode["Status"].isNull())
		tenant_.status = tenantNode["Status"].asString();
	if(!tenantNode["Tid"].isNull())
		tenant_.tid = std::stol(tenantNode["Tid"].asString());
	if(!tenantNode["TenantName"].isNull())
		tenant_.tenantName = tenantNode["TenantName"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetUserActiveTenantResult::Tenant GetUserActiveTenantResult::getTenant()const
{
	return tenant_;
}

std::string GetUserActiveTenantResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetUserActiveTenantResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetUserActiveTenantResult::getSuccess()const
{
	return success_;
}

