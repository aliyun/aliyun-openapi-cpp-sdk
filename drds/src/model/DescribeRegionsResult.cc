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

#include <alibabacloud/drds/model/DescribeRegionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

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
	auto allDrdsRegionsNode = value["DrdsRegions"]["DrdsRegion"];
	for (auto valueDrdsRegionsDrdsRegion : allDrdsRegionsNode)
	{
		DrdsRegion drdsRegionsObject;
		if(!valueDrdsRegionsDrdsRegion["RegionId"].isNull())
			drdsRegionsObject.regionId = valueDrdsRegionsDrdsRegion["RegionId"].asString();
		if(!valueDrdsRegionsDrdsRegion["RegionName"].isNull())
			drdsRegionsObject.regionName = valueDrdsRegionsDrdsRegion["RegionName"].asString();
		if(!valueDrdsRegionsDrdsRegion["ZoneId"].isNull())
			drdsRegionsObject.zoneId = valueDrdsRegionsDrdsRegion["ZoneId"].asString();
		if(!valueDrdsRegionsDrdsRegion["ZoneName"].isNull())
			drdsRegionsObject.zoneName = valueDrdsRegionsDrdsRegion["ZoneName"].asString();
		auto allInstanceSeriesListNode = allDrdsRegionsNode["InstanceSeriesList"]["InstanceSeries"];
		for (auto allDrdsRegionsNodeInstanceSeriesListInstanceSeries : allInstanceSeriesListNode)
		{
			DrdsRegion::InstanceSeries instanceSeriesListObject;
			if(!allDrdsRegionsNodeInstanceSeriesListInstanceSeries["SeriesId"].isNull())
				instanceSeriesListObject.seriesId = allDrdsRegionsNodeInstanceSeriesListInstanceSeries["SeriesId"].asString();
			if(!allDrdsRegionsNodeInstanceSeriesListInstanceSeries["SeriesName"].isNull())
				instanceSeriesListObject.seriesName = allDrdsRegionsNodeInstanceSeriesListInstanceSeries["SeriesName"].asString();
			auto allSpecListNode = allInstanceSeriesListNode["SpecList"]["Spec"];
			for (auto allInstanceSeriesListNodeSpecListSpec : allSpecListNode)
			{
				DrdsRegion::InstanceSeries::Spec specListObject;
				if(!allInstanceSeriesListNodeSpecListSpec["SpecId"].isNull())
					specListObject.specId = allInstanceSeriesListNodeSpecListSpec["SpecId"].asString();
				if(!allInstanceSeriesListNodeSpecListSpec["SpecName"].isNull())
					specListObject.specName = allInstanceSeriesListNodeSpecListSpec["SpecName"].asString();
				instanceSeriesListObject.specList.push_back(specListObject);
			}
			drdsRegionsObject.instanceSeriesList.push_back(instanceSeriesListObject);
		}
		drdsRegions_.push_back(drdsRegionsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeRegionsResult::DrdsRegion> DescribeRegionsResult::getDrdsRegions()const
{
	return drdsRegions_;
}

bool DescribeRegionsResult::getSuccess()const
{
	return success_;
}

