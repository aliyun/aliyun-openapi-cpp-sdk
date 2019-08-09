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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allIpv6Gateways = value["Ipv6Gateways"]["Ipv6Gateway"];
	for (auto value : allIpv6Gateways)
	{
		Ipv6Gateway ipv6GatewaysObject;
		if(!value["RegionId"].isNull())
			ipv6GatewaysObject.regionId = value["RegionId"].asString();
		if(!value["Ipv6GatewayId"].isNull())
			ipv6GatewaysObject.ipv6GatewayId = value["Ipv6GatewayId"].asString();
		if(!value["VpcId"].isNull())
			ipv6GatewaysObject.vpcId = value["VpcId"].asString();
		if(!value["Status"].isNull())
			ipv6GatewaysObject.status = value["Status"].asString();
		if(!value["Name"].isNull())
			ipv6GatewaysObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			ipv6GatewaysObject.description = value["Description"].asString();
		if(!value["Spec"].isNull())
			ipv6GatewaysObject.spec = value["Spec"].asString();
		if(!value["InstanceChargeType"].isNull())
			ipv6GatewaysObject.instanceChargeType = value["InstanceChargeType"].asString();
		if(!value["BusinessStatus"].isNull())
			ipv6GatewaysObject.businessStatus = value["BusinessStatus"].asString();
		if(!value["ExpiredTime"].isNull())
			ipv6GatewaysObject.expiredTime = value["ExpiredTime"].asString();
		if(!value["CreationTime"].isNull())
			ipv6GatewaysObject.creationTime = value["CreationTime"].asString();
		ipv6Gateways_.push_back(ipv6GatewaysObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

