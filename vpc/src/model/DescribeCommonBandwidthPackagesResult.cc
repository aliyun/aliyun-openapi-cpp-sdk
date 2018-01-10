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
		CommonBandwidthPackage commonBandwidthPackageObject;
		commonBandwidthPackageObject.bandwidthPackageId = value["BandwidthPackageId"].asString();
		commonBandwidthPackageObject.regionId = value["RegionId"].asString();
		commonBandwidthPackageObject.name = value["Name"].asString();
		commonBandwidthPackageObject.description = value["Description"].asString();
		commonBandwidthPackageObject.bandwidth = value["Bandwidth"].asString();
		commonBandwidthPackageObject.instanceChargeType = value["InstanceChargeType"].asString();
		commonBandwidthPackageObject.internetChargeType = value["InternetChargeType"].asString();
		commonBandwidthPackageObject.businessStatus = value["BusinessStatus"].asString();
		commonBandwidthPackageObject.creationTime = value["CreationTime"].asString();
		commonBandwidthPackageObject.expiredTime = value["ExpiredTime"].asString();
		commonBandwidthPackageObject.status = value["Status"].asString();
		commonBandwidthPackageObject.ratio = std::stoi(value["Ratio"].asString());
		auto allPublicIpAddresses = value["PublicIpAddresses"]["PublicIpAddresse"];
		for (auto value : allPublicIpAddresses)
		{
			CommonBandwidthPackage::PublicIpAddresse publicIpAddresseObject;
			publicIpAddresseObject.allocationId = value["AllocationId"].asString();
			publicIpAddresseObject.ipAddress = value["IpAddress"].asString();
			commonBandwidthPackageObject.publicIpAddresses.push_back(publicIpAddresseObject);
		}
		commonBandwidthPackages_.push_back(commonBandwidthPackageObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeCommonBandwidthPackagesResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeCommonBandwidthPackagesResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeCommonBandwidthPackagesResult::getPageSize()const
{
	return pageSize_;
}

void DescribeCommonBandwidthPackagesResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeCommonBandwidthPackagesResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeCommonBandwidthPackagesResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

