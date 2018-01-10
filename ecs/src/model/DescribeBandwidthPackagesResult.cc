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
		BandwidthPackage bandwidthPackageObject;
		bandwidthPackageObject.bandwidthPackageId = value["BandwidthPackageId"].asString();
		bandwidthPackageObject.regionId = value["RegionId"].asString();
		bandwidthPackageObject.name = value["Name"].asString();
		bandwidthPackageObject.description = value["Description"].asString();
		bandwidthPackageObject.zoneId = value["ZoneId"].asString();
		bandwidthPackageObject.natGatewayId = value["NatGatewayId"].asString();
		bandwidthPackageObject.bandwidth = value["Bandwidth"].asString();
		bandwidthPackageObject.instanceChargeType = value["InstanceChargeType"].asString();
		bandwidthPackageObject.internetChargeType = value["InternetChargeType"].asString();
		bandwidthPackageObject.businessStatus = value["BusinessStatus"].asString();
		bandwidthPackageObject.ipCount = value["IpCount"].asString();
		bandwidthPackageObject.creationTime = value["CreationTime"].asString();
		bandwidthPackageObject.status = value["Status"].asString();
		auto allPublicIpAddresses = value["PublicIpAddresses"]["PublicIpAddresse"];
		for (auto value : allPublicIpAddresses)
		{
			BandwidthPackage::PublicIpAddresse publicIpAddresseObject;
			publicIpAddresseObject.allocationId = value["AllocationId"].asString();
			publicIpAddresseObject.ipAddress = value["IpAddress"].asString();
			bandwidthPackageObject.publicIpAddresses.push_back(publicIpAddresseObject);
		}
		bandwidthPackages_.push_back(bandwidthPackageObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeBandwidthPackagesResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeBandwidthPackagesResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeBandwidthPackagesResult::getPageSize()const
{
	return pageSize_;
}

void DescribeBandwidthPackagesResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeBandwidthPackagesResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeBandwidthPackagesResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

