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
	auto allIpv6AddressesNode = value["Ipv6Addresses"]["Ipv6Address"];
	for (auto valueIpv6AddressesIpv6Address : allIpv6AddressesNode)
	{
		Ipv6Address ipv6AddressesObject;
		if(!valueIpv6AddressesIpv6Address["VpcId"].isNull())
			ipv6AddressesObject.vpcId = valueIpv6AddressesIpv6Address["VpcId"].asString();
		if(!valueIpv6AddressesIpv6Address["Status"].isNull())
			ipv6AddressesObject.status = valueIpv6AddressesIpv6Address["Status"].asString();
		if(!valueIpv6AddressesIpv6Address["Ipv6AddressId"].isNull())
			ipv6AddressesObject.ipv6AddressId = valueIpv6AddressesIpv6Address["Ipv6AddressId"].asString();
		if(!valueIpv6AddressesIpv6Address["AllocationTime"].isNull())
			ipv6AddressesObject.allocationTime = valueIpv6AddressesIpv6Address["AllocationTime"].asString();
		if(!valueIpv6AddressesIpv6Address["Ipv6AddressName"].isNull())
			ipv6AddressesObject.ipv6AddressName = valueIpv6AddressesIpv6Address["Ipv6AddressName"].asString();
		if(!valueIpv6AddressesIpv6Address["Ipv6AddressDescription"].isNull())
			ipv6AddressesObject.ipv6AddressDescription = valueIpv6AddressesIpv6Address["Ipv6AddressDescription"].asString();
		if(!valueIpv6AddressesIpv6Address["AssociatedInstanceType"].isNull())
			ipv6AddressesObject.associatedInstanceType = valueIpv6AddressesIpv6Address["AssociatedInstanceType"].asString();
		if(!valueIpv6AddressesIpv6Address["AssociatedInstanceId"].isNull())
			ipv6AddressesObject.associatedInstanceId = valueIpv6AddressesIpv6Address["AssociatedInstanceId"].asString();
		if(!valueIpv6AddressesIpv6Address["NetworkType"].isNull())
			ipv6AddressesObject.networkType = valueIpv6AddressesIpv6Address["NetworkType"].asString();
		if(!valueIpv6AddressesIpv6Address["Ipv6Address"].isNull())
			ipv6AddressesObject.ipv6Address = valueIpv6AddressesIpv6Address["Ipv6Address"].asString();
		if(!valueIpv6AddressesIpv6Address["AddressType"].isNull())
			ipv6AddressesObject.addressType = valueIpv6AddressesIpv6Address["AddressType"].asString();
		if(!valueIpv6AddressesIpv6Address["Ipv6Isp"].isNull())
			ipv6AddressesObject.ipv6Isp = valueIpv6AddressesIpv6Address["Ipv6Isp"].asString();
		if(!valueIpv6AddressesIpv6Address["VSwitchId"].isNull())
			ipv6AddressesObject.vSwitchId = valueIpv6AddressesIpv6Address["VSwitchId"].asString();
		if(!valueIpv6AddressesIpv6Address["Ipv6GatewayId"].isNull())
			ipv6AddressesObject.ipv6GatewayId = valueIpv6AddressesIpv6Address["Ipv6GatewayId"].asString();
		if(!valueIpv6AddressesIpv6Address["RealBandwidth"].isNull())
			ipv6AddressesObject.realBandwidth = std::stoi(valueIpv6AddressesIpv6Address["RealBandwidth"].asString());
		if(!valueIpv6AddressesIpv6Address["ResourceGroupId"].isNull())
			ipv6AddressesObject.resourceGroupId = valueIpv6AddressesIpv6Address["ResourceGroupId"].asString();
		if(!valueIpv6AddressesIpv6Address["ServiceManaged"].isNull())
			ipv6AddressesObject.serviceManaged = std::stoi(valueIpv6AddressesIpv6Address["ServiceManaged"].asString());
		auto allTagsNode = valueIpv6AddressesIpv6Address["Tags"]["Tag"];
		for (auto valueIpv6AddressesIpv6AddressTagsTag : allTagsNode)
		{
			Ipv6Address::Tag tagsObject;
			if(!valueIpv6AddressesIpv6AddressTagsTag["Key"].isNull())
				tagsObject.key = valueIpv6AddressesIpv6AddressTagsTag["Key"].asString();
			if(!valueIpv6AddressesIpv6AddressTagsTag["Value"].isNull())
				tagsObject.value = valueIpv6AddressesIpv6AddressTagsTag["Value"].asString();
			ipv6AddressesObject.tags.push_back(tagsObject);
		}
		auto ipv6InternetBandwidthNode = value["Ipv6InternetBandwidth"];
		if(!ipv6InternetBandwidthNode["InternetChargeType"].isNull())
			ipv6AddressesObject.ipv6InternetBandwidth.internetChargeType = ipv6InternetBandwidthNode["InternetChargeType"].asString();
		if(!ipv6InternetBandwidthNode["BusinessStatus"].isNull())
			ipv6AddressesObject.ipv6InternetBandwidth.businessStatus = ipv6InternetBandwidthNode["BusinessStatus"].asString();
		if(!ipv6InternetBandwidthNode["Bandwidth"].isNull())
			ipv6AddressesObject.ipv6InternetBandwidth.bandwidth = std::stoi(ipv6InternetBandwidthNode["Bandwidth"].asString());
		if(!ipv6InternetBandwidthNode["Ipv6InternetBandwidthId"].isNull())
			ipv6AddressesObject.ipv6InternetBandwidth.ipv6InternetBandwidthId = ipv6InternetBandwidthNode["Ipv6InternetBandwidthId"].asString();
		if(!ipv6InternetBandwidthNode["InstanceChargeType"].isNull())
			ipv6AddressesObject.ipv6InternetBandwidth.instanceChargeType = ipv6InternetBandwidthNode["InstanceChargeType"].asString();
		if(!ipv6InternetBandwidthNode["HasReservationData"].isNull())
			ipv6AddressesObject.ipv6InternetBandwidth.hasReservationData = ipv6InternetBandwidthNode["HasReservationData"].asString() == "true";
		if(!ipv6InternetBandwidthNode["ReservationInternetChargeType"].isNull())
			ipv6AddressesObject.ipv6InternetBandwidth.reservationInternetChargeType = ipv6InternetBandwidthNode["ReservationInternetChargeType"].asString();
		if(!ipv6InternetBandwidthNode["ReservationOrderType"].isNull())
			ipv6AddressesObject.ipv6InternetBandwidth.reservationOrderType = ipv6InternetBandwidthNode["ReservationOrderType"].asString();
		if(!ipv6InternetBandwidthNode["ReservationActiveTime"].isNull())
			ipv6AddressesObject.ipv6InternetBandwidth.reservationActiveTime = ipv6InternetBandwidthNode["ReservationActiveTime"].asString();
		if(!ipv6InternetBandwidthNode["ReservationBandwidth"].isNull())
			ipv6AddressesObject.ipv6InternetBandwidth.reservationBandwidth = std::stol(ipv6InternetBandwidthNode["ReservationBandwidth"].asString());
		ipv6Addresses_.push_back(ipv6AddressesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

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

