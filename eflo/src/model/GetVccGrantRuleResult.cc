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

#include <alibabacloud/eflo/model/GetVccGrantRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

GetVccGrantRuleResult::GetVccGrantRuleResult() :
	ServiceResult()
{}

GetVccGrantRuleResult::GetVccGrantRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVccGrantRuleResult::~GetVccGrantRuleResult()
{}

void GetVccGrantRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contentNode = value["Content"];
	if(!contentNode["RegionId"].isNull())
		content_.regionId = contentNode["RegionId"].asString();
	if(!contentNode["TenantId"].isNull())
		content_.tenantId = contentNode["TenantId"].asString();
	if(!contentNode["InstanceId"].isNull())
		content_.instanceId = contentNode["InstanceId"].asString();
	if(!contentNode["InstanceName"].isNull())
		content_.instanceName = contentNode["InstanceName"].asString();
	if(!contentNode["Product"].isNull())
		content_.product = contentNode["Product"].asString();
	if(!contentNode["ErId"].isNull())
		content_.erId = contentNode["ErId"].asString();
	if(!contentNode["GrantTenantId"].isNull())
		content_.grantTenantId = contentNode["GrantTenantId"].asString();
	if(!contentNode["Used"].isNull())
		content_.used = contentNode["Used"].asString() == "true";
	if(!contentNode["CreateTime"].isNull())
		content_.createTime = contentNode["CreateTime"].asString();
	if(!contentNode["GrantRuleId"].isNull())
		content_.grantRuleId = contentNode["GrantRuleId"].asString();
	if(!contentNode["ResourceGroupId"].isNull())
		content_.resourceGroupId = contentNode["ResourceGroupId"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetVccGrantRuleResult::getMessage()const
{
	return message_;
}

GetVccGrantRuleResult::Content GetVccGrantRuleResult::getContent()const
{
	return content_;
}

int GetVccGrantRuleResult::getCode()const
{
	return code_;
}

