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
		if(!valueEipAddressesEipAddress["RegionId"].isNull())
			eipAddressesObject.regionId = valueEipAddressesEipAddress["RegionId"].asString();
		if(!valueEipAddressesEipAddress["IpAddress"].isNull())
			eipAddressesObject.ipAddress = valueEipAddressesEipAddress["IpAddress"].asString();
		if(!valueEipAddressesEipAddress["PrivateIpAddress"].isNull())
			eipAddressesObject.privateIpAddress = valueEipAddressesEipAddress["PrivateIpAddress"].asString();
		if(!valueEipAddressesEipAddress["AllocationId"].isNull())
			eipAddressesObject.allocationId = valueEipAddressesEipAddress["AllocationId"].asString();
		if(!valueEipAddressesEipAddress["Status"].isNull())
			eipAddressesObject.status = valueEipAddressesEipAddress["Status"].asString();
		if(!valueEipAddressesEipAddress["InstanceId"].isNull())
			eipAddressesObject.instanceId = valueEipAddressesEipAddress["InstanceId"].asString();
		if(!valueEipAddressesEipAddress["Bandwidth"].isNull())
			eipAddressesObject.bandwidth = valueEipAddressesEipAddress["Bandwidth"].asString();
		if(!valueEipAddressesEipAddress["EipBandwidth"].isNull())
			eipAddressesObject.eipBandwidth = valueEipAddressesEipAddress["EipBandwidth"].asString();
		if(!valueEipAddressesEipAddress["InternetChargeType"].isNull())
			eipAddressesObject.internetChargeType = valueEipAddressesEipAddress["InternetChargeType"].asString();
		if(!valueEipAddressesEipAddress["AllocationTime"].isNull())
			eipAddressesObject.allocationTime = valueEipAddressesEipAddress["AllocationTime"].asString();
		if(!valueEipAddressesEipAddress["InstanceType"].isNull())
			eipAddressesObject.instanceType = valueEipAddressesEipAddress["InstanceType"].asString();
		if(!valueEipAddressesEipAddress["InstanceRegionId"].isNull())
			eipAddressesObject.instanceRegionId = valueEipAddressesEipAddress["InstanceRegionId"].asString();
		if(!valueEipAddressesEipAddress["ChargeType"].isNull())
			eipAddressesObject.chargeType = valueEipAddressesEipAddress["ChargeType"].asString();
		if(!valueEipAddressesEipAddress["ExpiredTime"].isNull())
			eipAddressesObject.expiredTime = valueEipAddressesEipAddress["ExpiredTime"].asString();
		if(!valueEipAddressesEipAddress["HDMonitorStatus"].isNull())
			eipAddressesObject.hDMonitorStatus = valueEipAddressesEipAddress["HDMonitorStatus"].asString();
		if(!valueEipAddressesEipAddress["Name"].isNull())
			eipAddressesObject.name = valueEipAddressesEipAddress["Name"].asString();
		if(!valueEipAddressesEipAddress["ISP"].isNull())
			eipAddressesObject.iSP = valueEipAddressesEipAddress["ISP"].asString();
		if(!valueEipAddressesEipAddress["Descritpion"].isNull())
			eipAddressesObject.descritpion = valueEipAddressesEipAddress["Descritpion"].asString();
		if(!valueEipAddressesEipAddress["BandwidthPackageId"].isNull())
			eipAddressesObject.bandwidthPackageId = valueEipAddressesEipAddress["BandwidthPackageId"].asString();
		if(!valueEipAddressesEipAddress["BandwidthPackageType"].isNull())
			eipAddressesObject.bandwidthPackageType = valueEipAddressesEipAddress["BandwidthPackageType"].asString();
		if(!valueEipAddressesEipAddress["BandwidthPackageBandwidth"].isNull())
			eipAddressesObject.bandwidthPackageBandwidth = valueEipAddressesEipAddress["BandwidthPackageBandwidth"].asString();
		if(!valueEipAddressesEipAddress["ResourceGroupId"].isNull())
			eipAddressesObject.resourceGroupId = valueEipAddressesEipAddress["ResourceGroupId"].asString();
		if(!valueEipAddressesEipAddress["HasReservationData"].isNull())
			eipAddressesObject.hasReservationData = valueEipAddressesEipAddress["HasReservationData"].asString();
		if(!valueEipAddressesEipAddress["ReservationBandwidth"].isNull())
			eipAddressesObject.reservationBandwidth = valueEipAddressesEipAddress["ReservationBandwidth"].asString();
		if(!valueEipAddressesEipAddress["ReservationInternetChargeType"].isNull())
			eipAddressesObject.reservationInternetChargeType = valueEipAddressesEipAddress["ReservationInternetChargeType"].asString();
		if(!valueEipAddressesEipAddress["ReservationActiveTime"].isNull())
			eipAddressesObject.reservationActiveTime = valueEipAddressesEipAddress["ReservationActiveTime"].asString();
		if(!valueEipAddressesEipAddress["ReservationOrderType"].isNull())
			eipAddressesObject.reservationOrderType = valueEipAddressesEipAddress["ReservationOrderType"].asString();
		if(!valueEipAddressesEipAddress["Mode"].isNull())
			eipAddressesObject.mode = valueEipAddressesEipAddress["Mode"].asString();
		if(!valueEipAddressesEipAddress["DeletionProtection"].isNull())
			eipAddressesObject.deletionProtection = valueEipAddressesEipAddress["DeletionProtection"].asString() == "true";
		if(!valueEipAddressesEipAddress["SecondLimited"].isNull())
			eipAddressesObject.secondLimited = valueEipAddressesEipAddress["SecondLimited"].asString() == "true";
		if(!valueEipAddressesEipAddress["SegmentInstanceId"].isNull())
			eipAddressesObject.segmentInstanceId = valueEipAddressesEipAddress["SegmentInstanceId"].asString();
		auto allOperationLocksNode = allEipAddressesNode["OperationLocks"]["LockReason"];
		for (auto allEipAddressesNodeOperationLocksLockReason : allOperationLocksNode)
		{
			EipAddress::LockReason operationLocksObject;
			if(!allEipAddressesNodeOperationLocksLockReason["LockReason"].isNull())
				operationLocksObject.lockReason = allEipAddressesNodeOperationLocksLockReason["LockReason"].asString();
			eipAddressesObject.operationLocks.push_back(operationLocksObject);
		}
		auto allTagsNode = allEipAddressesNode["Tags"]["Tag"];
		for (auto allEipAddressesNodeTagsTag : allTagsNode)
		{
			EipAddress::Tag tagsObject;
			if(!allEipAddressesNodeTagsTag["Key"].isNull())
				tagsObject.key = allEipAddressesNodeTagsTag["Key"].asString();
			if(!allEipAddressesNodeTagsTag["Value"].isNull())
				tagsObject.value = allEipAddressesNodeTagsTag["Value"].asString();
			eipAddressesObject.tags.push_back(tagsObject);
		}
		auto allAvailableRegions = value["AvailableRegions"]["AvailableRegion"];
		for (auto value : allAvailableRegions)
			eipAddressesObject.availableRegions.push_back(value.asString());
		eipAddresses_.push_back(eipAddressesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

