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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allDrdsRegions = value["DrdsRegions"]["DrdsRegion"];
	for (auto value : allDrdsRegions)
	{
		DrdsRegion drdsRegionsObject;
		if(!value["RegionId"].isNull())
			drdsRegionsObject.regionId = value["RegionId"].asString();
		if(!value["RegionName"].isNull())
			drdsRegionsObject.regionName = value["RegionName"].asString();
		if(!value["ZoneId"].isNull())
			drdsRegionsObject.zoneId = value["ZoneId"].asString();
		if(!value["ZoneName"].isNull())
			drdsRegionsObject.zoneName = value["ZoneName"].asString();
		auto allInstanceSeriesList = value["InstanceSeriesList"]["InstanceSeries"];
		for (auto value : allInstanceSeriesList)
		{
			DrdsRegion::InstanceSeries instanceSeriesListObject;
			if(!value["SeriesId"].isNull())
				instanceSeriesListObject.seriesId = value["SeriesId"].asString();
			if(!value["SeriesName"].isNull())
				instanceSeriesListObject.seriesName = value["SeriesName"].asString();
			auto allSpecList = value["SpecList"]["Spec"];
			for (auto value : allSpecList)
			{
				DrdsRegion::InstanceSeries::Spec specListObject;
				if(!value["SpecId"].isNull())
					specListObject.specId = value["SpecId"].asString();
				if(!value["SpecName"].isNull())
					specListObject.specName = value["SpecName"].asString();
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

