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

#include <alibabacloud/vpc/model/DescribeNatGatewaysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeNatGatewaysResult::DescribeNatGatewaysResult() :
	ServiceResult()
{}

DescribeNatGatewaysResult::DescribeNatGatewaysResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNatGatewaysResult::~DescribeNatGatewaysResult()
{}

void DescribeNatGatewaysResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNatGatewaysNode = value["NatGateways"]["NatGateway"];
	for (auto valueNatGatewaysNatGateway : allNatGatewaysNode)
	{
		NatGateway natGatewaysObject;
		if(!valueNatGatewaysNatGateway["NatGatewayId"].isNull())
			natGatewaysObject.natGatewayId = valueNatGatewaysNatGateway["NatGatewayId"].asString();
		if(!valueNatGatewaysNatGateway["RegionId"].isNull())
			natGatewaysObject.regionId = valueNatGatewaysNatGateway["RegionId"].asString();
		if(!valueNatGatewaysNatGateway["Name"].isNull())
			natGatewaysObject.name = valueNatGatewaysNatGateway["Name"].asString();
		if(!valueNatGatewaysNatGateway["Description"].isNull())
			natGatewaysObject.description = valueNatGatewaysNatGateway["Description"].asString();
		if(!valueNatGatewaysNatGateway["VpcId"].isNull())
			natGatewaysObject.vpcId = valueNatGatewaysNatGateway["VpcId"].asString();
		if(!valueNatGatewaysNatGateway["Spec"].isNull())
			natGatewaysObject.spec = valueNatGatewaysNatGateway["Spec"].asString();
		if(!valueNatGatewaysNatGateway["InstanceChargeType"].isNull())
			natGatewaysObject.instanceChargeType = valueNatGatewaysNatGateway["InstanceChargeType"].asString();
		if(!valueNatGatewaysNatGateway["ExpiredTime"].isNull())
			natGatewaysObject.expiredTime = valueNatGatewaysNatGateway["ExpiredTime"].asString();
		if(!valueNatGatewaysNatGateway["AutoPay"].isNull())
			natGatewaysObject.autoPay = valueNatGatewaysNatGateway["AutoPay"].asString() == "true";
		if(!valueNatGatewaysNatGateway["BusinessStatus"].isNull())
			natGatewaysObject.businessStatus = valueNatGatewaysNatGateway["BusinessStatus"].asString();
		if(!valueNatGatewaysNatGateway["CreationTime"].isNull())
			natGatewaysObject.creationTime = valueNatGatewaysNatGateway["CreationTime"].asString();
		if(!valueNatGatewaysNatGateway["Status"].isNull())
			natGatewaysObject.status = valueNatGatewaysNatGateway["Status"].asString();
		if(!valueNatGatewaysNatGateway["NatType"].isNull())
			natGatewaysObject.natType = valueNatGatewaysNatGateway["NatType"].asString();
		if(!valueNatGatewaysNatGateway["InternetChargeType"].isNull())
			natGatewaysObject.internetChargeType = valueNatGatewaysNatGateway["InternetChargeType"].asString();
		if(!valueNatGatewaysNatGateway["ResourceGroupId"].isNull())
			natGatewaysObject.resourceGroupId = valueNatGatewaysNatGateway["ResourceGroupId"].asString();
		if(!valueNatGatewaysNatGateway["DeletionProtection"].isNull())
			natGatewaysObject.deletionProtection = valueNatGatewaysNatGateway["DeletionProtection"].asString() == "true";
		if(!valueNatGatewaysNatGateway["EcsMetricEnabled"].isNull())
			natGatewaysObject.ecsMetricEnabled = valueNatGatewaysNatGateway["EcsMetricEnabled"].asString() == "true";
		auto allIpListsNode = valueNatGatewaysNatGateway["IpLists"]["IpList"];
		for (auto valueNatGatewaysNatGatewayIpListsIpList : allIpListsNode)
		{
			NatGateway::IpList ipListsObject;
			if(!valueNatGatewaysNatGatewayIpListsIpList["AllocationId"].isNull())
				ipListsObject.allocationId = valueNatGatewaysNatGatewayIpListsIpList["AllocationId"].asString();
			if(!valueNatGatewaysNatGatewayIpListsIpList["IpAddress"].isNull())
				ipListsObject.ipAddress = valueNatGatewaysNatGatewayIpListsIpList["IpAddress"].asString();
			if(!valueNatGatewaysNatGatewayIpListsIpList["UsingStatus"].isNull())
				ipListsObject.usingStatus = valueNatGatewaysNatGatewayIpListsIpList["UsingStatus"].asString();
			if(!valueNatGatewaysNatGatewayIpListsIpList["ApAccessEnabled"].isNull())
				ipListsObject.apAccessEnabled = valueNatGatewaysNatGatewayIpListsIpList["ApAccessEnabled"].asString() == "true";
			if(!valueNatGatewaysNatGatewayIpListsIpList["SnatEntryEnabled"].isNull())
				ipListsObject.snatEntryEnabled = valueNatGatewaysNatGatewayIpListsIpList["SnatEntryEnabled"].asString() == "true";
			if(!valueNatGatewaysNatGatewayIpListsIpList["PrivateIpAddress"].isNull())
				ipListsObject.privateIpAddress = valueNatGatewaysNatGatewayIpListsIpList["PrivateIpAddress"].asString();
			natGatewaysObject.ipLists.push_back(ipListsObject);
		}
		auto natGatewayPrivateInfoNode = value["NatGatewayPrivateInfo"];
		if(!natGatewayPrivateInfoNode["EniInstanceId"].isNull())
			natGatewaysObject.natGatewayPrivateInfo.eniInstanceId = natGatewayPrivateInfoNode["EniInstanceId"].asString();
		if(!natGatewayPrivateInfoNode["PrivateIpAddress"].isNull())
			natGatewaysObject.natGatewayPrivateInfo.privateIpAddress = natGatewayPrivateInfoNode["PrivateIpAddress"].asString();
		if(!natGatewayPrivateInfoNode["VswitchId"].isNull())
			natGatewaysObject.natGatewayPrivateInfo.vswitchId = natGatewayPrivateInfoNode["VswitchId"].asString();
		if(!natGatewayPrivateInfoNode["IzNo"].isNull())
			natGatewaysObject.natGatewayPrivateInfo.izNo = natGatewayPrivateInfoNode["IzNo"].asString();
		if(!natGatewayPrivateInfoNode["MaxBandwidth"].isNull())
			natGatewaysObject.natGatewayPrivateInfo.maxBandwidth = std::stoi(natGatewayPrivateInfoNode["MaxBandwidth"].asString());
		if(!natGatewayPrivateInfoNode["EniType"].isNull())
			natGatewaysObject.natGatewayPrivateInfo.eniType = natGatewayPrivateInfoNode["EniType"].asString();
		auto allForwardTableIds = value["ForwardTableIds"]["ForwardTableId"];
		for (auto value : allForwardTableIds)
			natGatewaysObject.forwardTableIds.push_back(value.asString());
		auto allSnatTableIds = value["SnatTableIds"]["SnatTableId"];
		for (auto value : allSnatTableIds)
			natGatewaysObject.snatTableIds.push_back(value.asString());
		auto allBandwidthPackageIds = value["BandwidthPackageIds"]["BandwidthPackageId"];
		for (auto value : allBandwidthPackageIds)
			natGatewaysObject.bandwidthPackageIds.push_back(value.asString());
		natGateways_.push_back(natGatewaysObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeNatGatewaysResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeNatGatewaysResult::getPageSize()const
{
	return pageSize_;
}

int DescribeNatGatewaysResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeNatGatewaysResult::NatGateway> DescribeNatGatewaysResult::getNatGateways()const
{
	return natGateways_;
}

