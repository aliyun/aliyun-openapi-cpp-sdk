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

#include <alibabacloud/ga/model/ListBandwidthackagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

ListBandwidthackagesResult::ListBandwidthackagesResult() :
	ServiceResult()
{}

ListBandwidthackagesResult::ListBandwidthackagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBandwidthackagesResult::~ListBandwidthackagesResult()
{}

void ListBandwidthackagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBandwidthPackagesNode = value["BandwidthPackages"]["BandwidthPackage"];
	for (auto valueBandwidthPackagesBandwidthPackage : allBandwidthPackagesNode)
	{
		BandwidthPackage bandwidthPackagesObject;
		if(!valueBandwidthPackagesBandwidthPackage["BandwidthPackageId"].isNull())
			bandwidthPackagesObject.bandwidthPackageId = valueBandwidthPackagesBandwidthPackage["BandwidthPackageId"].asString();
		if(!valueBandwidthPackagesBandwidthPackage["Bandwidth"].isNull())
			bandwidthPackagesObject.bandwidth = std::stoi(valueBandwidthPackagesBandwidthPackage["Bandwidth"].asString());
		if(!valueBandwidthPackagesBandwidthPackage["Description"].isNull())
			bandwidthPackagesObject.description = valueBandwidthPackagesBandwidthPackage["Description"].asString();
		if(!valueBandwidthPackagesBandwidthPackage["ExpiredTime"].isNull())
			bandwidthPackagesObject.expiredTime = valueBandwidthPackagesBandwidthPackage["ExpiredTime"].asString();
		if(!valueBandwidthPackagesBandwidthPackage["State"].isNull())
			bandwidthPackagesObject.state = valueBandwidthPackagesBandwidthPackage["State"].asString();
		if(!valueBandwidthPackagesBandwidthPackage["CreateTime"].isNull())
			bandwidthPackagesObject.createTime = valueBandwidthPackagesBandwidthPackage["CreateTime"].asString();
		if(!valueBandwidthPackagesBandwidthPackage["ChargeType"].isNull())
			bandwidthPackagesObject.chargeType = valueBandwidthPackagesBandwidthPackage["ChargeType"].asString();
		if(!valueBandwidthPackagesBandwidthPackage["Name"].isNull())
			bandwidthPackagesObject.name = valueBandwidthPackagesBandwidthPackage["Name"].asString();
		if(!valueBandwidthPackagesBandwidthPackage["RegionId"].isNull())
			bandwidthPackagesObject.regionId = valueBandwidthPackagesBandwidthPackage["RegionId"].asString();
		if(!valueBandwidthPackagesBandwidthPackage["ResourceGroupId"].isNull())
			bandwidthPackagesObject.resourceGroupId = valueBandwidthPackagesBandwidthPackage["ResourceGroupId"].asString();
		auto allTagsNode = valueBandwidthPackagesBandwidthPackage["Tags"]["TagsItem"];
		for (auto valueBandwidthPackagesBandwidthPackageTagsTagsItem : allTagsNode)
		{
			BandwidthPackage::TagsItem tagsObject;
			if(!valueBandwidthPackagesBandwidthPackageTagsTagsItem["Key"].isNull())
				tagsObject.key = valueBandwidthPackagesBandwidthPackageTagsTagsItem["Key"].asString();
			if(!valueBandwidthPackagesBandwidthPackageTagsTagsItem["Value"].isNull())
				tagsObject.value = valueBandwidthPackagesBandwidthPackageTagsTagsItem["Value"].asString();
			bandwidthPackagesObject.tags.push_back(tagsObject);
		}
		auto allAccelerators = value["Accelerators"]["Accelerator"];
		for (auto value : allAccelerators)
			bandwidthPackagesObject.accelerators.push_back(value.asString());
		bandwidthPackages_.push_back(bandwidthPackagesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListBandwidthackagesResult::getTotalCount()const
{
	return totalCount_;
}

int ListBandwidthackagesResult::getPageSize()const
{
	return pageSize_;
}

int ListBandwidthackagesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListBandwidthackagesResult::BandwidthPackage> ListBandwidthackagesResult::getBandwidthPackages()const
{
	return bandwidthPackages_;
}

