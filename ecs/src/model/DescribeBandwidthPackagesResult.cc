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
	auto allBandwidthPackages = value["BandwidthPackages"]["BandwidthPackage"];
	for (auto value : allBandwidthPackages)
	{
		BandwidthPackage bandwidthPackagesObject;
		if(!value["BandwidthPackageId"].isNull())
			bandwidthPackagesObject.bandwidthPackageId = value["BandwidthPackageId"].asString();
		if(!value["RegionId"].isNull())
			bandwidthPackagesObject.regionId = value["RegionId"].asString();
		if(!value["Name"].isNull())
			bandwidthPackagesObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			bandwidthPackagesObject.description = value["Description"].asString();
		if(!value["ZoneId"].isNull())
			bandwidthPackagesObject.zoneId = value["ZoneId"].asString();
		if(!value["NatGatewayId"].isNull())
			bandwidthPackagesObject.natGatewayId = value["NatGatewayId"].asString();
		if(!value["Bandwidth"].isNull())
			bandwidthPackagesObject.bandwidth = value["Bandwidth"].asString();
		if(!value["InstanceChargeType"].isNull())
			bandwidthPackagesObject.instanceChargeType = value["InstanceChargeType"].asString();
		if(!value["InternetChargeType"].isNull())
			bandwidthPackagesObject.internetChargeType = value["InternetChargeType"].asString();
		if(!value["BusinessStatus"].isNull())
			bandwidthPackagesObject.businessStatus = value["BusinessStatus"].asString();
		if(!value["IpCount"].isNull())
			bandwidthPackagesObject.ipCount = value["IpCount"].asString();
		if(!value["ISP"].isNull())
			bandwidthPackagesObject.iSP = value["ISP"].asString();
		if(!value["CreationTime"].isNull())
			bandwidthPackagesObject.creationTime = value["CreationTime"].asString();
		if(!value["Status"].isNull())
			bandwidthPackagesObject.status = value["Status"].asString();
		auto allPublicIpAddresses = value["PublicIpAddresses"]["PublicIpAddresse"];
		for (auto value : allPublicIpAddresses)
		{
			BandwidthPackage::PublicIpAddresse publicIpAddressesObject;
			if(!value["AllocationId"].isNull())
				publicIpAddressesObject.allocationId = value["AllocationId"].asString();
			if(!value["IpAddress"].isNull())
				publicIpAddressesObject.ipAddress = value["IpAddress"].asString();
			bandwidthPackagesObject.publicIpAddresses.push_back(publicIpAddressesObject);
		}
		bandwidthPackages_.push_back(bandwidthPackagesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

