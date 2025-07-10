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

#include <alibabacloud/vpc/model/DescribeIpv6GatewaysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeIpv6GatewaysResult::DescribeIpv6GatewaysResult() :
	ServiceResult()
{}

DescribeIpv6GatewaysResult::DescribeIpv6GatewaysResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIpv6GatewaysResult::~DescribeIpv6GatewaysResult()
{}

void DescribeIpv6GatewaysResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIpv6GatewaysNode = value["Ipv6Gateways"]["Ipv6Gateway"];
	for (auto valueIpv6GatewaysIpv6Gateway : allIpv6GatewaysNode)
	{
		Ipv6Gateway ipv6GatewaysObject;
		if(!valueIpv6GatewaysIpv6Gateway["CreationTime"].isNull())
			ipv6GatewaysObject.creationTime = valueIpv6GatewaysIpv6Gateway["CreationTime"].asString();
		if(!valueIpv6GatewaysIpv6Gateway["Status"].isNull())
			ipv6GatewaysObject.status = valueIpv6GatewaysIpv6Gateway["Status"].asString();
		if(!valueIpv6GatewaysIpv6Gateway["VpcId"].isNull())
			ipv6GatewaysObject.vpcId = valueIpv6GatewaysIpv6Gateway["VpcId"].asString();
		if(!valueIpv6GatewaysIpv6Gateway["Spec"].isNull())
			ipv6GatewaysObject.spec = valueIpv6GatewaysIpv6Gateway["Spec"].asString();
		if(!valueIpv6GatewaysIpv6Gateway["Description"].isNull())
			ipv6GatewaysObject.description = valueIpv6GatewaysIpv6Gateway["Description"].asString();
		if(!valueIpv6GatewaysIpv6Gateway["Ipv6GatewayId"].isNull())
			ipv6GatewaysObject.ipv6GatewayId = valueIpv6GatewaysIpv6Gateway["Ipv6GatewayId"].asString();
		if(!valueIpv6GatewaysIpv6Gateway["ExpiredTime"].isNull())
			ipv6GatewaysObject.expiredTime = valueIpv6GatewaysIpv6Gateway["ExpiredTime"].asString();
		if(!valueIpv6GatewaysIpv6Gateway["BusinessStatus"].isNull())
			ipv6GatewaysObject.businessStatus = valueIpv6GatewaysIpv6Gateway["BusinessStatus"].asString();
		if(!valueIpv6GatewaysIpv6Gateway["Name"].isNull())
			ipv6GatewaysObject.name = valueIpv6GatewaysIpv6Gateway["Name"].asString();
		if(!valueIpv6GatewaysIpv6Gateway["InstanceChargeType"].isNull())
			ipv6GatewaysObject.instanceChargeType = valueIpv6GatewaysIpv6Gateway["InstanceChargeType"].asString();
		if(!valueIpv6GatewaysIpv6Gateway["RegionId"].isNull())
			ipv6GatewaysObject.regionId = valueIpv6GatewaysIpv6Gateway["RegionId"].asString();
		if(!valueIpv6GatewaysIpv6Gateway["ResourceGroupId"].isNull())
			ipv6GatewaysObject.resourceGroupId = valueIpv6GatewaysIpv6Gateway["ResourceGroupId"].asString();
		if(!valueIpv6GatewaysIpv6Gateway["OwnerId"].isNull())
			ipv6GatewaysObject.ownerId = std::stol(valueIpv6GatewaysIpv6Gateway["OwnerId"].asString());
		auto allTagsNode = valueIpv6GatewaysIpv6Gateway["Tags"]["Tag"];
		for (auto valueIpv6GatewaysIpv6GatewayTagsTag : allTagsNode)
		{
			Ipv6Gateway::Tag tagsObject;
			if(!valueIpv6GatewaysIpv6GatewayTagsTag["Key"].isNull())
				tagsObject.key = valueIpv6GatewaysIpv6GatewayTagsTag["Key"].asString();
			if(!valueIpv6GatewaysIpv6GatewayTagsTag["Value"].isNull())
				tagsObject.value = valueIpv6GatewaysIpv6GatewayTagsTag["Value"].asString();
			ipv6GatewaysObject.tags.push_back(tagsObject);
		}
		ipv6Gateways_.push_back(ipv6GatewaysObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeIpv6GatewaysResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeIpv6GatewaysResult::getPageSize()const
{
	return pageSize_;
}

int DescribeIpv6GatewaysResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeIpv6GatewaysResult::Ipv6Gateway> DescribeIpv6GatewaysResult::getIpv6Gateways()const
{
	return ipv6Gateways_;
}

