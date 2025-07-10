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

#include <alibabacloud/vpc/model/DescribeEipAddressesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeEipAddressesResult::DescribeEipAddressesResult() :
	ServiceResult()
{}

DescribeEipAddressesResult::DescribeEipAddressesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEipAddressesResult::~DescribeEipAddressesResult()
{}

void DescribeEipAddressesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEipAddressesNode = value["EipAddresses"]["EipAddress"];
	for (auto valueEipAddressesEipAddress : allEipAddressesNode)
	{
		EipAddress eipAddressesObject;
		if(!valueEipAddressesEipAddress["ReservationActiveTime"].isNull())
			eipAddressesObject.reservationActiveTime = valueEipAddressesEipAddress["ReservationActiveTime"].asString();
		if(!valueEipAddressesEipAddress["Status"].isNull())
			eipAddressesObject.status = valueEipAddressesEipAddress["Status"].asString();
		if(!valueEipAddressesEipAddress["ReservationOrderType"].isNull())
			eipAddressesObject.reservationOrderType = valueEipAddressesEipAddress["ReservationOrderType"].asString();
		if(!valueEipAddressesEipAddress["AllocationTime"].isNull())
			eipAddressesObject.allocationTime = valueEipAddressesEipAddress["AllocationTime"].asString();
		if(!valueEipAddressesEipAddress["Netmode"].isNull())
			eipAddressesObject.netmode = valueEipAddressesEipAddress["Netmode"].asString();
		if(!valueEipAddressesEipAddress["ChargeType"].isNull())
			eipAddressesObject.chargeType = valueEipAddressesEipAddress["ChargeType"].asString();
		if(!valueEipAddressesEipAddress["Descritpion"].isNull())
			eipAddressesObject.descritpion = valueEipAddressesEipAddress["Descritpion"].asString();
		if(!valueEipAddressesEipAddress["Description"].isNull())
			eipAddressesObject.description = valueEipAddressesEipAddress["Description"].asString();
		if(!valueEipAddressesEipAddress["Mode"].isNull())
			eipAddressesObject.mode = valueEipAddressesEipAddress["Mode"].asString();
		if(!valueEipAddressesEipAddress["SegmentInstanceId"].isNull())
			eipAddressesObject.segmentInstanceId = valueEipAddressesEipAddress["SegmentInstanceId"].asString();
		if(!valueEipAddressesEipAddress["ReservationInternetChargeType"].isNull())
			eipAddressesObject.reservationInternetChargeType = valueEipAddressesEipAddress["ReservationInternetChargeType"].asString();
		if(!valueEipAddressesEipAddress["BandwidthPackageId"].isNull())
			eipAddressesObject.bandwidthPackageId = valueEipAddressesEipAddress["BandwidthPackageId"].asString();
		if(!valueEipAddressesEipAddress["IpAddress"].isNull())
			eipAddressesObject.ipAddress = valueEipAddressesEipAddress["IpAddress"].asString();
		if(!valueEipAddressesEipAddress["Bandwidth"].isNull())
			eipAddressesObject.bandwidth = valueEipAddressesEipAddress["Bandwidth"].asString();
		if(!valueEipAddressesEipAddress["ReservationBandwidth"].isNull())
			eipAddressesObject.reservationBandwidth = valueEipAddressesEipAddress["ReservationBandwidth"].asString();
		if(!valueEipAddressesEipAddress["EipBandwidth"].isNull())
			eipAddressesObject.eipBandwidth = valueEipAddressesEipAddress["EipBandwidth"].asString();
		if(!valueEipAddressesEipAddress["Name"].isNull())
			eipAddressesObject.name = valueEipAddressesEipAddress["Name"].asString();
		if(!valueEipAddressesEipAddress["PrivateIpAddress"].isNull())
			eipAddressesObject.privateIpAddress = valueEipAddressesEipAddress["PrivateIpAddress"].asString();
		if(!valueEipAddressesEipAddress["InstanceRegionId"].isNull())
			eipAddressesObject.instanceRegionId = valueEipAddressesEipAddress["InstanceRegionId"].asString();
		if(!valueEipAddressesEipAddress["DeletionProtection"].isNull())
			eipAddressesObject.deletionProtection = valueEipAddressesEipAddress["DeletionProtection"].asString() == "true";
		if(!valueEipAddressesEipAddress["InstanceId"].isNull())
			eipAddressesObject.instanceId = valueEipAddressesEipAddress["InstanceId"].asString();
		if(!valueEipAddressesEipAddress["SecondLimited"].isNull())
			eipAddressesObject.secondLimited = valueEipAddressesEipAddress["SecondLimited"].asString() == "true";
		if(!valueEipAddressesEipAddress["InstanceType"].isNull())
			eipAddressesObject.instanceType = valueEipAddressesEipAddress["InstanceType"].asString();
		if(!valueEipAddressesEipAddress["HDMonitorStatus"].isNull())
			eipAddressesObject.hDMonitorStatus = valueEipAddressesEipAddress["HDMonitorStatus"].asString();
		if(!valueEipAddressesEipAddress["RegionId"].isNull())
			eipAddressesObject.regionId = valueEipAddressesEipAddress["RegionId"].asString();
		if(!valueEipAddressesEipAddress["BandwidthPackageBandwidth"].isNull())
			eipAddressesObject.bandwidthPackageBandwidth = valueEipAddressesEipAddress["BandwidthPackageBandwidth"].asString();
		if(!valueEipAddressesEipAddress["ServiceManaged"].isNull())
			eipAddressesObject.serviceManaged = std::stoi(valueEipAddressesEipAddress["ServiceManaged"].asString());
		if(!valueEipAddressesEipAddress["ExpiredTime"].isNull())
			eipAddressesObject.expiredTime = valueEipAddressesEipAddress["ExpiredTime"].asString();
		if(!valueEipAddressesEipAddress["ResourceGroupId"].isNull())
			eipAddressesObject.resourceGroupId = valueEipAddressesEipAddress["ResourceGroupId"].asString();
		if(!valueEipAddressesEipAddress["AllocationId"].isNull())
			eipAddressesObject.allocationId = valueEipAddressesEipAddress["AllocationId"].asString();
		if(!valueEipAddressesEipAddress["InternetChargeType"].isNull())
			eipAddressesObject.internetChargeType = valueEipAddressesEipAddress["InternetChargeType"].asString();
		if(!valueEipAddressesEipAddress["BusinessStatus"].isNull())
			eipAddressesObject.businessStatus = valueEipAddressesEipAddress["BusinessStatus"].asString();
		if(!valueEipAddressesEipAddress["BandwidthPackageType"].isNull())
			eipAddressesObject.bandwidthPackageType = valueEipAddressesEipAddress["BandwidthPackageType"].asString();
		if(!valueEipAddressesEipAddress["HasReservationData"].isNull())
			eipAddressesObject.hasReservationData = valueEipAddressesEipAddress["HasReservationData"].asString();
		if(!valueEipAddressesEipAddress["ISP"].isNull())
			eipAddressesObject.iSP = valueEipAddressesEipAddress["ISP"].asString();
		if(!valueEipAddressesEipAddress["PublicIpAddressPoolId"].isNull())
			eipAddressesObject.publicIpAddressPoolId = valueEipAddressesEipAddress["PublicIpAddressPoolId"].asString();
		if(!valueEipAddressesEipAddress["VpcId"].isNull())
			eipAddressesObject.vpcId = valueEipAddressesEipAddress["VpcId"].asString();
		if(!valueEipAddressesEipAddress["Zone"].isNull())
			eipAddressesObject.zone = valueEipAddressesEipAddress["Zone"].asString();
		if(!valueEipAddressesEipAddress["BizType"].isNull())
			eipAddressesObject.bizType = valueEipAddressesEipAddress["BizType"].asString();
		if(!valueEipAddressesEipAddress["ServiceID"].isNull())
			eipAddressesObject.serviceID = std::stol(valueEipAddressesEipAddress["ServiceID"].asString());
		auto allOperationLocksNode = valueEipAddressesEipAddress["OperationLocks"]["LockReason"];
		for (auto valueEipAddressesEipAddressOperationLocksLockReason : allOperationLocksNode)
		{
			EipAddress::LockReason operationLocksObject;
			if(!valueEipAddressesEipAddressOperationLocksLockReason["LockReason"].isNull())
				operationLocksObject.lockReason = valueEipAddressesEipAddressOperationLocksLockReason["LockReason"].asString();
			eipAddressesObject.operationLocks.push_back(operationLocksObject);
		}
		auto allTagsNode = valueEipAddressesEipAddress["Tags"]["Tag"];
		for (auto valueEipAddressesEipAddressTagsTag : allTagsNode)
		{
			EipAddress::Tag tagsObject;
			if(!valueEipAddressesEipAddressTagsTag["Key"].isNull())
				tagsObject.key = valueEipAddressesEipAddressTagsTag["Key"].asString();
			if(!valueEipAddressesEipAddressTagsTag["Value"].isNull())
				tagsObject.value = valueEipAddressesEipAddressTagsTag["Value"].asString();
			eipAddressesObject.tags.push_back(tagsObject);
		}
		auto allAvailableRegions = value["AvailableRegions"]["AvailableRegion"];
		for (auto value : allAvailableRegions)
			eipAddressesObject.availableRegions.push_back(value.asString());
		auto allSecurityProtectionTypes = value["SecurityProtectionTypes"]["SecurityProtectionType"];
		for (auto value : allSecurityProtectionTypes)
			eipAddressesObject.securityProtectionTypes.push_back(value.asString());
		eipAddresses_.push_back(eipAddressesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeEipAddressesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeEipAddressesResult::EipAddress> DescribeEipAddressesResult::getEipAddresses()const
{
	return eipAddresses_;
}

int DescribeEipAddressesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeEipAddressesResult::getPageNumber()const
{
	return pageNumber_;
}

