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
	auto allCommonBandwidthPackages = value["CommonBandwidthPackages"]["CommonBandwidthPackage"];
	for (auto value : allCommonBandwidthPackages)
	{
		CommonBandwidthPackage commonBandwidthPackagesObject;
		if(!value["BandwidthPackageId"].isNull())
			commonBandwidthPackagesObject.bandwidthPackageId = value["BandwidthPackageId"].asString();
		if(!value["RegionId"].isNull())
			commonBandwidthPackagesObject.regionId = value["RegionId"].asString();
		if(!value["Name"].isNull())
			commonBandwidthPackagesObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			commonBandwidthPackagesObject.description = value["Description"].asString();
		if(!value["Bandwidth"].isNull())
			commonBandwidthPackagesObject.bandwidth = value["Bandwidth"].asString();
		if(!value["InstanceChargeType"].isNull())
			commonBandwidthPackagesObject.instanceChargeType = value["InstanceChargeType"].asString();
		if(!value["InternetChargeType"].isNull())
			commonBandwidthPackagesObject.internetChargeType = value["InternetChargeType"].asString();
		if(!value["BusinessStatus"].isNull())
			commonBandwidthPackagesObject.businessStatus = value["BusinessStatus"].asString();
		if(!value["CreationTime"].isNull())
			commonBandwidthPackagesObject.creationTime = value["CreationTime"].asString();
		if(!value["ExpiredTime"].isNull())
			commonBandwidthPackagesObject.expiredTime = value["ExpiredTime"].asString();
		if(!value["Status"].isNull())
			commonBandwidthPackagesObject.status = value["Status"].asString();
		if(!value["Ratio"].isNull())
			commonBandwidthPackagesObject.ratio = std::stoi(value["Ratio"].asString());
		auto allPublicIpAddresses = value["PublicIpAddresses"]["PublicIpAddresse"];
		for (auto value : allPublicIpAddresses)
		{
			CommonBandwidthPackage::PublicIpAddresse publicIpAddressesObject;
			if(!value["AllocationId"].isNull())
				publicIpAddressesObject.allocationId = value["AllocationId"].asString();
			if(!value["IpAddress"].isNull())
				publicIpAddressesObject.ipAddress = value["IpAddress"].asString();
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

