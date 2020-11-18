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

#include <alibabacloud/hbase/model/DescribeMultiZoneAvailableRegionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

DescribeMultiZoneAvailableRegionsResult::DescribeMultiZoneAvailableRegionsResult() :
	ServiceResult()
{}

DescribeMultiZoneAvailableRegionsResult::DescribeMultiZoneAvailableRegionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMultiZoneAvailableRegionsResult::~DescribeMultiZoneAvailableRegionsResult()
{}

void DescribeMultiZoneAvailableRegionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRegionsNode = value["Regions"]["Region"];
	for (auto valueRegionsRegion : allRegionsNode)
	{
		Region regionsObject;
		if(!valueRegionsRegion["LocalName"].isNull())
			regionsObject.localName = valueRegionsRegion["LocalName"].asString();
		if(!valueRegionsRegion["RegionEndpoint"].isNull())
			regionsObject.regionEndpoint = valueRegionsRegion["RegionEndpoint"].asString();
		if(!valueRegionsRegion["RegionId"].isNull())
			regionsObject.regionId = valueRegionsRegion["RegionId"].asString();
		auto allAvailableCombinesNode = valueRegionsRegion["AvailableCombines"]["AvailableCombine"];
		for (auto valueRegionsRegionAvailableCombinesAvailableCombine : allAvailableCombinesNode)
		{
			Region::AvailableCombine availableCombinesObject;
			if(!valueRegionsRegionAvailableCombinesAvailableCombine["Id"].isNull())
				availableCombinesObject.id = valueRegionsRegionAvailableCombinesAvailableCombine["Id"].asString();
			auto allZones = value["Zones"]["Zone"];
			for (auto value : allZones)
				availableCombinesObject.zones.push_back(value.asString());
			regionsObject.availableCombines.push_back(availableCombinesObject);
		}
		regions_.push_back(regionsObject);
	}

}

std::vector<DescribeMultiZoneAvailableRegionsResult::Region> DescribeMultiZoneAvailableRegionsResult::getRegions()const
{
	return regions_;
}

