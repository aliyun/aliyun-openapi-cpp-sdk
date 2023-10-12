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

#include <alibabacloud/oceanbasepro/model/DescribeTenantSecurityIpGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeTenantSecurityIpGroupsResult::DescribeTenantSecurityIpGroupsResult() :
	ServiceResult()
{}

DescribeTenantSecurityIpGroupsResult::DescribeTenantSecurityIpGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTenantSecurityIpGroupsResult::~DescribeTenantSecurityIpGroupsResult()
{}

void DescribeTenantSecurityIpGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSecurityIpGroupsNode = value["SecurityIpGroups"]["SecurityIpGroupsItem"];
	for (auto valueSecurityIpGroupsSecurityIpGroupsItem : allSecurityIpGroupsNode)
	{
		SecurityIpGroupsItem securityIpGroupsObject;
		if(!valueSecurityIpGroupsSecurityIpGroupsItem["SecurityIpGroupName"].isNull())
			securityIpGroupsObject.securityIpGroupName = valueSecurityIpGroupsSecurityIpGroupsItem["SecurityIpGroupName"].asString();
		if(!valueSecurityIpGroupsSecurityIpGroupsItem["SecurityIps"].isNull())
			securityIpGroupsObject.securityIps = valueSecurityIpGroupsSecurityIpGroupsItem["SecurityIps"].asString();
		if(!valueSecurityIpGroupsSecurityIpGroupsItem["SecurityIpGroupType"].isNull())
			securityIpGroupsObject.securityIpGroupType = valueSecurityIpGroupsSecurityIpGroupsItem["SecurityIpGroupType"].asString();
		if(!valueSecurityIpGroupsSecurityIpGroupsItem["TenantId"].isNull())
			securityIpGroupsObject.tenantId = valueSecurityIpGroupsSecurityIpGroupsItem["TenantId"].asString();
		securityIpGroups_.push_back(securityIpGroupsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeTenantSecurityIpGroupsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeTenantSecurityIpGroupsResult::SecurityIpGroupsItem> DescribeTenantSecurityIpGroupsResult::getSecurityIpGroups()const
{
	return securityIpGroups_;
}

