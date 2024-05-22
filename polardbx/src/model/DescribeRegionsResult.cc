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

#include <alibabacloud/polardbx/model/DescribeRegionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardbx;
using namespace AlibabaCloud::Polardbx::Model;

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
	auto allRegionsNode = value["Regions"]["Region"];
	for (auto valueRegionsRegion : allRegionsNode)
	{
		Region regionsObject;
		if(!valueRegionsRegion["SupportPolarx10"].isNull())
			regionsObject.supportPolarx10 = valueRegionsRegion["SupportPolarx10"].asString() == "true";
		if(!valueRegionsRegion["SupportPolarx20"].isNull())
			regionsObject.supportPolarx20 = valueRegionsRegion["SupportPolarx20"].asString() == "true";
		if(!valueRegionsRegion["RegionId"].isNull())
			regionsObject.regionId = valueRegionsRegion["RegionId"].asString();
		auto allZonesNode = valueRegionsRegion["Zones"]["Zone"];
		for (auto valueRegionsRegionZonesZone : allZonesNode)
		{
			Region::Zone zonesObject;
			if(!valueRegionsRegionZonesZone["ZoneId"].isNull())
				zonesObject.zoneId = valueRegionsRegionZonesZone["ZoneId"].asString();
			if(!valueRegionsRegionZonesZone["VpcEnabled"].isNull())
				zonesObject.vpcEnabled = valueRegionsRegionZonesZone["VpcEnabled"].asString() == "true";
			regionsObject.zones.push_back(zonesObject);
		}
		regions_.push_back(regionsObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());

}

std::string DescribeRegionsResult::getMessage()const
{
	return message_;
}

std::vector<DescribeRegionsResult::Region> DescribeRegionsResult::getRegions()const
{
	return regions_;
}

int DescribeRegionsResult::getErrorCode()const
{
	return errorCode_;
}

int DescribeRegionsResult::getCode()const
{
	return code_;
}

bool DescribeRegionsResult::getSuccess()const
{
	return success_;
}

