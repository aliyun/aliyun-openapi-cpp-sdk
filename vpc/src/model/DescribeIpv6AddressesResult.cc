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

#include <alibabacloud/vpc/model/DescribeIpv6AddressesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeIpv6AddressesResult::DescribeIpv6AddressesResult() :
	ServiceResult()
{}

DescribeIpv6AddressesResult::DescribeIpv6AddressesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIpv6AddressesResult::~DescribeIpv6AddressesResult()
{}

void DescribeIpv6AddressesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIpv6Addresses = value["Ipv6Addresses"]["Ipv6Address"];
	for (auto value : allIpv6Addresses)
	{
		Ipv6Address ipv6AddressesObject;
		if(!value["Ipv6AddressId"].isNull())
			ipv6AddressesObject.ipv6AddressId = value["Ipv6AddressId"].asString();
		if(!value["Ipv6AddressName"].isNull())
			ipv6AddressesObject.ipv6AddressName = value["Ipv6AddressName"].asString();
		if(!value["VSwitchId"].isNull())
			ipv6AddressesObject.vSwitchId = value["VSwitchId"].asString();
		if(!value["VpcId"].isNull())
			ipv6AddressesObject.vpcId = value["VpcId"].asString();
		if(!value["Ipv6GatewayId"].isNull())
			ipv6AddressesObject.ipv6GatewayId = value["Ipv6GatewayId"].asString();
		if(!value["Ipv6Address"].isNull())
			ipv6AddressesObject.ipv6Address = value["Ipv6Address"].asString();
		if(!value["AssociatedInstanceId"].isNull())
			ipv6AddressesObject.associatedInstanceId = value["AssociatedInstanceId"].asString();
		if(!value["AssociatedInstanceType"].isNull())
			ipv6AddressesObject.associatedInstanceType = value["AssociatedInstanceType"].asString();
		if(!value["Status"].isNull())
			ipv6AddressesObject.status = value["Status"].asString();
		if(!value["NetworkType"].isNull())
			ipv6AddressesObject.networkType = value["NetworkType"].asString();
		if(!value["RealBandwidth"].isNull())
			ipv6AddressesObject.realBandwidth = std::stoi(value["RealBandwidth"].asString());
		if(!value["AllocationTime"].isNull())
			ipv6AddressesObject.allocationTime = value["AllocationTime"].asString();
		auto ipv6InternetBandwidthNode = value["Ipv6InternetBandwidth"];
		if(!ipv6InternetBandwidthNode["Bandwidth"].isNull())
			ipv6AddressesObject.ipv6InternetBandwidth.bandwidth = std::stoi(ipv6InternetBandwidthNode["Bandwidth"].asString());
		if(!ipv6InternetBandwidthNode["InstanceChargeType"].isNull())
			ipv6AddressesObject.ipv6InternetBandwidth.instanceChargeType = ipv6InternetBandwidthNode["InstanceChargeType"].asString();
		if(!ipv6InternetBandwidthNode["InternetChargeType"].isNull())
			ipv6AddressesObject.ipv6InternetBandwidth.internetChargeType = ipv6InternetBandwidthNode["InternetChargeType"].asString();
		if(!ipv6InternetBandwidthNode["BusinessStatus"].isNull())
			ipv6AddressesObject.ipv6InternetBandwidth.businessStatus = ipv6InternetBandwidthNode["BusinessStatus"].asString();
		if(!ipv6InternetBandwidthNode["Ipv6InternetBandwidthId"].isNull())
			ipv6AddressesObject.ipv6InternetBandwidth.ipv6InternetBandwidthId = ipv6InternetBandwidthNode["Ipv6InternetBandwidthId"].asString();
		ipv6Addresses_.push_back(ipv6AddressesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeIpv6AddressesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeIpv6AddressesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeIpv6AddressesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeIpv6AddressesResult::Ipv6Address> DescribeIpv6AddressesResult::getIpv6Addresses()const
{
	return ipv6Addresses_;
}

