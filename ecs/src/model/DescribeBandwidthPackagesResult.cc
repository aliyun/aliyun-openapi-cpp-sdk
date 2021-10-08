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

#include <alibabacloud/ecs/model/DescribeBandwidthPackagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeBandwidthPackagesResult::DescribeBandwidthPackagesResult() :
	ServiceResult()
{}

DescribeBandwidthPackagesResult::DescribeBandwidthPackagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBandwidthPackagesResult::~DescribeBandwidthPackagesResult()
{}

void DescribeBandwidthPackagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBandwidthPackagesNode = value["BandwidthPackages"]["BandwidthPackage"];
	for (auto valueBandwidthPackagesBandwidthPackage : allBandwidthPackagesNode)
	{
		BandwidthPackage bandwidthPackagesObject;
		if(!valueBandwidthPackagesBandwidthPackage["Status"].isNull())
			bandwidthPackagesObject.status = valueBandwidthPackagesBandwidthPackage["Status"].asString();
		if(!valueBandwidthPackagesBandwidthPackage["CreationTime"].isNull())
			bandwidthPackagesObject.creationTime = valueBandwidthPackagesBandwidthPackage["CreationTime"].asString();
		if(!valueBandwidthPackagesBandwidthPackage["IpCount"].isNull())
			bandwidthPackagesObject.ipCount = valueBandwidthPackagesBandwidthPackage["IpCount"].asString();
		if(!valueBandwidthPackagesBandwidthPackage["RegionId"].isNull())
			bandwidthPackagesObject.regionId = valueBandwidthPackagesBandwidthPackage["RegionId"].asString();
		if(!valueBandwidthPackagesBandwidthPackage["InstanceChargeType"].isNull())
			bandwidthPackagesObject.instanceChargeType = valueBandwidthPackagesBandwidthPackage["InstanceChargeType"].asString();
		if(!valueBandwidthPackagesBandwidthPackage["BandwidthPackageId"].isNull())
			bandwidthPackagesObject.bandwidthPackageId = valueBandwidthPackagesBandwidthPackage["BandwidthPackageId"].asString();
		if(!valueBandwidthPackagesBandwidthPackage["Description"].isNull())
			bandwidthPackagesObject.description = valueBandwidthPackagesBandwidthPackage["Description"].asString();
		if(!valueBandwidthPackagesBandwidthPackage["Bandwidth"].isNull())
			bandwidthPackagesObject.bandwidth = valueBandwidthPackagesBandwidthPackage["Bandwidth"].asString();
		if(!valueBandwidthPackagesBandwidthPackage["NatGatewayId"].isNull())
			bandwidthPackagesObject.natGatewayId = valueBandwidthPackagesBandwidthPackage["NatGatewayId"].asString();
		if(!valueBandwidthPackagesBandwidthPackage["ZoneId"].isNull())
			bandwidthPackagesObject.zoneId = valueBandwidthPackagesBandwidthPackage["ZoneId"].asString();
		if(!valueBandwidthPackagesBandwidthPackage["InternetChargeType"].isNull())
			bandwidthPackagesObject.internetChargeType = valueBandwidthPackagesBandwidthPackage["InternetChargeType"].asString();
		if(!valueBandwidthPackagesBandwidthPackage["BusinessStatus"].isNull())
			bandwidthPackagesObject.businessStatus = valueBandwidthPackagesBandwidthPackage["BusinessStatus"].asString();
		if(!valueBandwidthPackagesBandwidthPackage["Name"].isNull())
			bandwidthPackagesObject.name = valueBandwidthPackagesBandwidthPackage["Name"].asString();
		if(!valueBandwidthPackagesBandwidthPackage["ISP"].isNull())
			bandwidthPackagesObject.iSP = valueBandwidthPackagesBandwidthPackage["ISP"].asString();
		auto allPublicIpAddressesNode = valueBandwidthPackagesBandwidthPackage["PublicIpAddresses"]["PublicIpAddresse"];
		for (auto valueBandwidthPackagesBandwidthPackagePublicIpAddressesPublicIpAddresse : allPublicIpAddressesNode)
		{
			BandwidthPackage::PublicIpAddresse publicIpAddressesObject;
			if(!valueBandwidthPackagesBandwidthPackagePublicIpAddressesPublicIpAddresse["IpAddress"].isNull())
				publicIpAddressesObject.ipAddress = valueBandwidthPackagesBandwidthPackagePublicIpAddressesPublicIpAddresse["IpAddress"].asString();
			if(!valueBandwidthPackagesBandwidthPackagePublicIpAddressesPublicIpAddresse["AllocationId"].isNull())
				publicIpAddressesObject.allocationId = valueBandwidthPackagesBandwidthPackagePublicIpAddressesPublicIpAddresse["AllocationId"].asString();
			bandwidthPackagesObject.publicIpAddresses.push_back(publicIpAddressesObject);
		}
		bandwidthPackages_.push_back(bandwidthPackagesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeBandwidthPackagesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeBandwidthPackagesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeBandwidthPackagesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeBandwidthPackagesResult::BandwidthPackage> DescribeBandwidthPackagesResult::getBandwidthPackages()const
{
	return bandwidthPackages_;
}

