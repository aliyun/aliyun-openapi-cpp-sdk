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

#include <alibabacloud/dds/model/DescribeRegionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeRegionsResult::DescribeRegionsResult() :
	ServiceResult()
{}

DescribeRegionsResult::DescribeRegionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRegionsResult::~DescribeRegionsResult()
{}

void DescribeRegionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRegionsNode = value["Regions"]["DdsRegion"];
	for (auto valueRegionsDdsRegion : allRegionsNode)
	{
		DdsRegion regionsObject;
		if(!valueRegionsDdsRegion["RegionId"].isNull())
			regionsObject.regionId = valueRegionsDdsRegion["RegionId"].asString();
		if(!valueRegionsDdsRegion["ZoneIds"].isNull())
			regionsObject.zoneIds = valueRegionsDdsRegion["ZoneIds"].asString();
		auto allZonesNode = allRegionsNode["Zones"]["Zone"];
		for (auto allRegionsNodeZonesZone : allZonesNode)
		{
			DdsRegion::Zone zonesObject;
			if(!allRegionsNodeZonesZone["ZoneId"].isNull())
				zonesObject.zoneId = allRegionsNodeZonesZone["ZoneId"].asString();
			if(!allRegionsNodeZonesZone["VpcEnabled"].isNull())
				zonesObject.vpcEnabled = allRegionsNodeZonesZone["VpcEnabled"].asString() == "true";
			regionsObject.zones.push_back(zonesObject);
		}
		regions_.push_back(regionsObject);
	}

}

std::vector<DescribeRegionsResult::DdsRegion> DescribeRegionsResult::getRegions()const
{
	return regions_;
}

