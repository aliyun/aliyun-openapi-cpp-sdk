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

#include <alibabacloud/vpc/model/DescribeCommonBandwidthPackagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeCommonBandwidthPackagesResult::DescribeCommonBandwidthPackagesResult() :
	ServiceResult()
{}

DescribeCommonBandwidthPackagesResult::DescribeCommonBandwidthPackagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCommonBandwidthPackagesResult::~DescribeCommonBandwidthPackagesResult()
{}

void DescribeCommonBandwidthPackagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCommonBandwidthPackagesNode = value["CommonBandwidthPackages"]["CommonBandwidthPackage"];
	for (auto valueCommonBandwidthPackagesCommonBandwidthPackage : allCommonBandwidthPackagesNode)
	{
		CommonBandwidthPackage commonBandwidthPackagesObject;
		if(!valueCommonBandwidthPackagesCommonBandwidthPackage["BandwidthPackageId"].isNull())
			commonBandwidthPackagesObject.bandwidthPackageId = valueCommonBandwidthPackagesCommonBandwidthPackage["BandwidthPackageId"].asString();
		if(!valueCommonBandwidthPackagesCommonBandwidthPackage["RegionId"].isNull())
			commonBandwidthPackagesObject.regionId = valueCommonBandwidthPackagesCommonBandwidthPackage["RegionId"].asString();
		if(!valueCommonBandwidthPackagesCommonBandwidthPackage["Name"].isNull())
			commonBandwidthPackagesObject.name = valueCommonBandwidthPackagesCommonBandwidthPackage["Name"].asString();
		if(!valueCommonBandwidthPackagesCommonBandwidthPackage["Description"].isNull())
			commonBandwidthPackagesObject.description = valueCommonBandwidthPackagesCommonBandwidthPackage["Description"].asString();
		if(!valueCommonBandwidthPackagesCommonBandwidthPackage["Bandwidth"].isNull())
			commonBandwidthPackagesObject.bandwidth = valueCommonBandwidthPackagesCommonBandwidthPackage["Bandwidth"].asString();
		if(!valueCommonBandwidthPackagesCommonBandwidthPackage["InstanceChargeType"].isNull())
			commonBandwidthPackagesObject.instanceChargeType = valueCommonBandwidthPackagesCommonBandwidthPackage["InstanceChargeType"].asString();
		if(!valueCommonBandwidthPackagesCommonBandwidthPackage["InternetChargeType"].isNull())
			commonBandwidthPackagesObject.internetChargeType = valueCommonBandwidthPackagesCommonBandwidthPackage["InternetChargeType"].asString();
		if(!valueCommonBandwidthPackagesCommonBandwidthPackage["BusinessStatus"].isNull())
			commonBandwidthPackagesObject.businessStatus = valueCommonBandwidthPackagesCommonBandwidthPackage["BusinessStatus"].asString();
		if(!valueCommonBandwidthPackagesCommonBandwidthPackage["CreationTime"].isNull())
			commonBandwidthPackagesObject.creationTime = valueCommonBandwidthPackagesCommonBandwidthPackage["CreationTime"].asString();
		if(!valueCommonBandwidthPackagesCommonBandwidthPackage["ExpiredTime"].isNull())
			commonBandwidthPackagesObject.expiredTime = valueCommonBandwidthPackagesCommonBandwidthPackage["ExpiredTime"].asString();
		if(!valueCommonBandwidthPackagesCommonBandwidthPackage["Status"].isNull())
			commonBandwidthPackagesObject.status = valueCommonBandwidthPackagesCommonBandwidthPackage["Status"].asString();
		if(!valueCommonBandwidthPackagesCommonBandwidthPackage["Ratio"].isNull())
			commonBandwidthPackagesObject.ratio = std::stoi(valueCommonBandwidthPackagesCommonBandwidthPackage["Ratio"].asString());
		if(!valueCommonBandwidthPackagesCommonBandwidthPackage["ResourceGroupId"].isNull())
			commonBandwidthPackagesObject.resourceGroupId = valueCommonBandwidthPackagesCommonBandwidthPackage["ResourceGroupId"].asString();
		if(!valueCommonBandwidthPackagesCommonBandwidthPackage["HasReservationData"].isNull())
			commonBandwidthPackagesObject.hasReservationData = valueCommonBandwidthPackagesCommonBandwidthPackage["HasReservationData"].asString();
		if(!valueCommonBandwidthPackagesCommonBandwidthPackage["ReservationBandwidth"].isNull())
			commonBandwidthPackagesObject.reservationBandwidth = valueCommonBandwidthPackagesCommonBandwidthPackage["ReservationBandwidth"].asString();
		if(!valueCommonBandwidthPackagesCommonBandwidthPackage["ReservationInternetChargeType"].isNull())
			commonBandwidthPackagesObject.reservationInternetChargeType = valueCommonBandwidthPackagesCommonBandwidthPackage["ReservationInternetChargeType"].asString();
		if(!valueCommonBandwidthPackagesCommonBandwidthPackage["ReservationActiveTime"].isNull())
			commonBandwidthPackagesObject.reservationActiveTime = valueCommonBandwidthPackagesCommonBandwidthPackage["ReservationActiveTime"].asString();
		if(!valueCommonBandwidthPackagesCommonBandwidthPackage["ReservationOrderType"].isNull())
			commonBandwidthPackagesObject.reservationOrderType = valueCommonBandwidthPackagesCommonBandwidthPackage["ReservationOrderType"].asString();
		if(!valueCommonBandwidthPackagesCommonBandwidthPackage["ISP"].isNull())
			commonBandwidthPackagesObject.iSP = valueCommonBandwidthPackagesCommonBandwidthPackage["ISP"].asString();
		if(!valueCommonBandwidthPackagesCommonBandwidthPackage["DeletionProtection"].isNull())
			commonBandwidthPackagesObject.deletionProtection = valueCommonBandwidthPackagesCommonBandwidthPackage["DeletionProtection"].asString() == "true";
		if(!valueCommonBandwidthPackagesCommonBandwidthPackage["ServiceManaged"].isNull())
			commonBandwidthPackagesObject.serviceManaged = std::stoi(valueCommonBandwidthPackagesCommonBandwidthPackage["ServiceManaged"].asString());
		auto allPublicIpAddressesNode = valueCommonBandwidthPackagesCommonBandwidthPackage["PublicIpAddresses"]["PublicIpAddresse"];
		for (auto valueCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddressesPublicIpAddresse : allPublicIpAddressesNode)
		{
			CommonBandwidthPackage::PublicIpAddresse publicIpAddressesObject;
			if(!valueCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddressesPublicIpAddresse["AllocationId"].isNull())
				publicIpAddressesObject.allocationId = valueCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddressesPublicIpAddresse["AllocationId"].asString();
			if(!valueCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddressesPublicIpAddresse["IpAddress"].isNull())
				publicIpAddressesObject.ipAddress = valueCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddressesPublicIpAddresse["IpAddress"].asString();
			if(!valueCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddressesPublicIpAddresse["BandwidthPackageIpRelationStatus"].isNull())
				publicIpAddressesObject.bandwidthPackageIpRelationStatus = valueCommonBandwidthPackagesCommonBandwidthPackagePublicIpAddressesPublicIpAddresse["BandwidthPackageIpRelationStatus"].asString();
			commonBandwidthPackagesObject.publicIpAddresses.push_back(publicIpAddressesObject);
		}
		commonBandwidthPackages_.push_back(commonBandwidthPackagesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeCommonBandwidthPackagesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeCommonBandwidthPackagesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCommonBandwidthPackagesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeCommonBandwidthPackagesResult::CommonBandwidthPackage> DescribeCommonBandwidthPackagesResult::getCommonBandwidthPackages()const
{
	return commonBandwidthPackages_;
}

