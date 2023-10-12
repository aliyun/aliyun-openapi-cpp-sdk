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

#include <alibabacloud/oceanbasepro/model/DescribeSecurityIpGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeSecurityIpGroupsResult::DescribeSecurityIpGroupsResult() :
	ServiceResult()
{}

DescribeSecurityIpGroupsResult::DescribeSecurityIpGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSecurityIpGroupsResult::~DescribeSecurityIpGroupsResult()
{}

void DescribeSecurityIpGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSecurityIpGroupsNode = value["SecurityIpGroups"]["SecurityIpGroupsItem"];
	for (auto valueSecurityIpGroupsSecurityIpGroupsItem : allSecurityIpGroupsNode)
	{
		SecurityIpGroupsItem securityIpGroupsObject;
		if(!valueSecurityIpGroupsSecurityIpGroupsItem["SecurityIps"].isNull())
			securityIpGroupsObject.securityIps = valueSecurityIpGroupsSecurityIpGroupsItem["SecurityIps"].asString();
		if(!valueSecurityIpGroupsSecurityIpGroupsItem["SecurityIpGroupName"].isNull())
			securityIpGroupsObject.securityIpGroupName = valueSecurityIpGroupsSecurityIpGroupsItem["SecurityIpGroupName"].asString();
		securityIpGroups_.push_back(securityIpGroupsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeSecurityIpGroupsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeSecurityIpGroupsResult::SecurityIpGroupsItem> DescribeSecurityIpGroupsResult::getSecurityIpGroups()const
{
	return securityIpGroups_;
}

