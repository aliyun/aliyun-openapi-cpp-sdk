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

#include <alibabacloud/cbn/model/DescribeCenAttachedChildInstanceAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

DescribeCenAttachedChildInstanceAttributeResult::DescribeCenAttachedChildInstanceAttributeResult() :
	ServiceResult()
{}

DescribeCenAttachedChildInstanceAttributeResult::DescribeCenAttachedChildInstanceAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCenAttachedChildInstanceAttributeResult::~DescribeCenAttachedChildInstanceAttributeResult()
{}

void DescribeCenAttachedChildInstanceAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allChildInstanceRouteTablesNode = value["ChildInstanceRouteTables"]["ChildInstanceRouteTable"];
	for (auto valueChildInstanceRouteTablesChildInstanceRouteTable : allChildInstanceRouteTablesNode)
	{
		ChildInstanceRouteTable childInstanceRouteTablesObject;
		if(!valueChildInstanceRouteTablesChildInstanceRouteTable["RouteTableId"].isNull())
			childInstanceRouteTablesObject.routeTableId = valueChildInstanceRouteTablesChildInstanceRouteTable["RouteTableId"].asString();
		if(!valueChildInstanceRouteTablesChildInstanceRouteTable["RouteTableType"].isNull())
			childInstanceRouteTablesObject.routeTableType = valueChildInstanceRouteTablesChildInstanceRouteTable["RouteTableType"].asString();
		childInstanceRouteTables_.push_back(childInstanceRouteTablesObject);
	}
	auto childInstanceAttributesNode = value["ChildInstanceAttributes"];
	if(!childInstanceAttributesNode["CidrBlock"].isNull())
		childInstanceAttributes_.cidrBlock = childInstanceAttributesNode["CidrBlock"].asString();
	if(!childInstanceAttributesNode["Ipv6CidrBlock"].isNull())
		childInstanceAttributes_.ipv6CidrBlock = childInstanceAttributesNode["Ipv6CidrBlock"].asString();
	auto allIpv6CidrBlocksNode = childInstanceAttributesNode["Ipv6CidrBlocks"]["ipv6CidrBlock"];
	for (auto childInstanceAttributesNodeIpv6CidrBlocksipv6CidrBlock : allIpv6CidrBlocksNode)
	{
		ChildInstanceAttributes::Ipv6CidrBlock ipv6CidrBlockObject;
		if(!childInstanceAttributesNodeIpv6CidrBlocksipv6CidrBlock["Ipv6Isp"].isNull())
			ipv6CidrBlockObject.ipv6Isp = childInstanceAttributesNodeIpv6CidrBlocksipv6CidrBlock["Ipv6Isp"].asString();
		if(!childInstanceAttributesNodeIpv6CidrBlocksipv6CidrBlock["Ipv6CidrBlock"].isNull())
			ipv6CidrBlockObject.ipv6CidrBlock = childInstanceAttributesNodeIpv6CidrBlocksipv6CidrBlock["Ipv6CidrBlock"].asString();
		childInstanceAttributes_.ipv6CidrBlocks.push_back(ipv6CidrBlockObject);
	}
		auto allSecondaryCidrBlocks = childInstanceAttributesNode["SecondaryCidrBlocks"]["secondaryCidrBlock"];
		for (auto value : allSecondaryCidrBlocks)
			childInstanceAttributes_.secondaryCidrBlocks.push_back(value.asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["ChildInstanceType"].isNull())
		childInstanceType_ = value["ChildInstanceType"].asString();
	if(!value["ChildInstanceRegionId"].isNull())
		childInstanceRegionId_ = value["ChildInstanceRegionId"].asString();
	if(!value["ChildInstanceOwnerId"].isNull())
		childInstanceOwnerId_ = std::stol(value["ChildInstanceOwnerId"].asString());
	if(!value["ChildInstanceId"].isNull())
		childInstanceId_ = value["ChildInstanceId"].asString();
	if(!value["CenId"].isNull())
		cenId_ = value["CenId"].asString();
	if(!value["ChildInstanceName"].isNull())
		childInstanceName_ = value["ChildInstanceName"].asString();
	if(!value["Ipv6StatusInCen"].isNull())
		ipv6StatusInCen_ = value["Ipv6StatusInCen"].asString();
	if(!value["ChildInstanceAttachTime"].isNull())
		childInstanceAttachTime_ = value["ChildInstanceAttachTime"].asString();

}

std::string DescribeCenAttachedChildInstanceAttributeResult::getStatus()const
{
	return status_;
}

std::vector<DescribeCenAttachedChildInstanceAttributeResult::ChildInstanceRouteTable> DescribeCenAttachedChildInstanceAttributeResult::getChildInstanceRouteTables()const
{
	return childInstanceRouteTables_;
}

std::string DescribeCenAttachedChildInstanceAttributeResult::getChildInstanceType()const
{
	return childInstanceType_;
}

DescribeCenAttachedChildInstanceAttributeResult::ChildInstanceAttributes DescribeCenAttachedChildInstanceAttributeResult::getChildInstanceAttributes()const
{
	return childInstanceAttributes_;
}

std::string DescribeCenAttachedChildInstanceAttributeResult::getIpv6StatusInCen()const
{
	return ipv6StatusInCen_;
}

std::string DescribeCenAttachedChildInstanceAttributeResult::getCenId()const
{
	return cenId_;
}

std::string DescribeCenAttachedChildInstanceAttributeResult::getChildInstanceAttachTime()const
{
	return childInstanceAttachTime_;
}

long DescribeCenAttachedChildInstanceAttributeResult::getChildInstanceOwnerId()const
{
	return childInstanceOwnerId_;
}

std::string DescribeCenAttachedChildInstanceAttributeResult::getChildInstanceName()const
{
	return childInstanceName_;
}

std::string DescribeCenAttachedChildInstanceAttributeResult::getChildInstanceId()const
{
	return childInstanceId_;
}

std::string DescribeCenAttachedChildInstanceAttributeResult::getChildInstanceRegionId()const
{
	return childInstanceRegionId_;
}

