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

#include <alibabacloud/vpc/model/DescribeIpv6EgressOnlyRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeIpv6EgressOnlyRulesResult::DescribeIpv6EgressOnlyRulesResult() :
	ServiceResult()
{}

DescribeIpv6EgressOnlyRulesResult::DescribeIpv6EgressOnlyRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIpv6EgressOnlyRulesResult::~DescribeIpv6EgressOnlyRulesResult()
{}

void DescribeIpv6EgressOnlyRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIpv6EgressOnlyRulesNode = value["Ipv6EgressOnlyRules"]["Ipv6EgressOnlyRule"];
	for (auto valueIpv6EgressOnlyRulesIpv6EgressOnlyRule : allIpv6EgressOnlyRulesNode)
	{
		Ipv6EgressOnlyRule ipv6EgressOnlyRulesObject;
		if(!valueIpv6EgressOnlyRulesIpv6EgressOnlyRule["Status"].isNull())
			ipv6EgressOnlyRulesObject.status = valueIpv6EgressOnlyRulesIpv6EgressOnlyRule["Status"].asString();
		if(!valueIpv6EgressOnlyRulesIpv6EgressOnlyRule["Description"].isNull())
			ipv6EgressOnlyRulesObject.description = valueIpv6EgressOnlyRulesIpv6EgressOnlyRule["Description"].asString();
		if(!valueIpv6EgressOnlyRulesIpv6EgressOnlyRule["Ipv6EgressOnlyRuleId"].isNull())
			ipv6EgressOnlyRulesObject.ipv6EgressOnlyRuleId = valueIpv6EgressOnlyRulesIpv6EgressOnlyRule["Ipv6EgressOnlyRuleId"].asString();
		if(!valueIpv6EgressOnlyRulesIpv6EgressOnlyRule["InstanceId"].isNull())
			ipv6EgressOnlyRulesObject.instanceId = valueIpv6EgressOnlyRulesIpv6EgressOnlyRule["InstanceId"].asString();
		if(!valueIpv6EgressOnlyRulesIpv6EgressOnlyRule["InstanceType"].isNull())
			ipv6EgressOnlyRulesObject.instanceType = valueIpv6EgressOnlyRulesIpv6EgressOnlyRule["InstanceType"].asString();
		if(!valueIpv6EgressOnlyRulesIpv6EgressOnlyRule["Name"].isNull())
			ipv6EgressOnlyRulesObject.name = valueIpv6EgressOnlyRulesIpv6EgressOnlyRule["Name"].asString();
		ipv6EgressOnlyRules_.push_back(ipv6EgressOnlyRulesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeIpv6EgressOnlyRulesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeIpv6EgressOnlyRulesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeIpv6EgressOnlyRulesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeIpv6EgressOnlyRulesResult::Ipv6EgressOnlyRule> DescribeIpv6EgressOnlyRulesResult::getIpv6EgressOnlyRules()const
{
	return ipv6EgressOnlyRules_;
}

