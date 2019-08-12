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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allRegions = value["Regions"]["DdsRegion"];
	for (auto value : allRegions)
	{
		DdsRegion regionsObject;
		if(!value["RegionId"].isNull())
			regionsObject.regionId = value["RegionId"].asString();
		if(!value["ZoneIds"].isNull())
			regionsObject.zoneIds = value["ZoneIds"].asString();
		auto allZones = value["Zones"]["Zone"];
		for (auto value : allZones)
		{
			DdsRegion::Zone zonesObject;
			if(!value["ZoneId"].isNull())
				zonesObject.zoneId = value["ZoneId"].asString();
			if(!value["VpcEnabled"].isNull())
				zonesObject.vpcEnabled = value["VpcEnabled"].asString() == "true";
			regionsObject.zones.push_back(zonesObject);
		}
		regions_.push_back(regionsObject);
	}

}

std::vector<DescribeRegionsResult::DdsRegion> DescribeRegionsResult::getRegions()const
{
	return regions_;
}

