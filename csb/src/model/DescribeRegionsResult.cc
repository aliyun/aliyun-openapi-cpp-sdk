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

#include <alibabacloud/csb/model/DescribeRegionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CSB;
using namespace AlibabaCloud::CSB::Model;

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
	auto dataNode = value["Data"];
	auto allRegionListNode = dataNode["RegionList"]["Region"];
	for (auto dataNodeRegionListRegion : allRegionListNode)
	{
		Data::Region regionObject;
		if(!dataNodeRegionListRegion["RegionId"].isNull())
			regionObject.regionId = dataNodeRegionListRegion["RegionId"].asString();
		if(!dataNodeRegionListRegion["RegionName"].isNull())
			regionObject.regionName = dataNodeRegionListRegion["RegionName"].asString();
		if(!dataNodeRegionListRegion["RegionUrl"].isNull())
			regionObject.regionUrl = dataNodeRegionListRegion["RegionUrl"].asString();
		if(!dataNodeRegionListRegion["Isdefault"].isNull())
			regionObject.isdefault = dataNodeRegionListRegion["Isdefault"].asString() == "true";
		auto allPhysicalLocationsNode = allRegionListNode["PhysicalLocations"]["PhysicalLocation"];
		for (auto allRegionListNodePhysicalLocationsPhysicalLocation : allPhysicalLocationsNode)
		{
			Data::Region::PhysicalLocation physicalLocationsObject;
			if(!allRegionListNodePhysicalLocationsPhysicalLocation["No"].isNull())
				physicalLocationsObject.no = allRegionListNodePhysicalLocationsPhysicalLocation["No"].asString();
			if(!allRegionListNodePhysicalLocationsPhysicalLocation["ServiceCode"].isNull())
				physicalLocationsObject.serviceCode = allRegionListNodePhysicalLocationsPhysicalLocation["ServiceCode"].asString();
			if(!allRegionListNodePhysicalLocationsPhysicalLocation["Type"].isNull())
				physicalLocationsObject.type = allRegionListNodePhysicalLocationsPhysicalLocation["Type"].asString();
			if(!allRegionListNodePhysicalLocationsPhysicalLocation["Name"].isNull())
				physicalLocationsObject.name = allRegionListNodePhysicalLocationsPhysicalLocation["Name"].asString();
			if(!allRegionListNodePhysicalLocationsPhysicalLocation["Status"].isNull())
				physicalLocationsObject.status = allRegionListNodePhysicalLocationsPhysicalLocation["Status"].asString();
			auto allAttributesNode = allPhysicalLocationsNode["Attributes"]["Attribute"];
			for (auto allPhysicalLocationsNodeAttributesAttribute : allAttributesNode)
			{
				Data::Region::PhysicalLocation::Attribute attributesObject;
				if(!allPhysicalLocationsNodeAttributesAttribute["Name"].isNull())
					attributesObject.name = allPhysicalLocationsNodeAttributesAttribute["Name"].asString();
				if(!allPhysicalLocationsNodeAttributesAttribute["Value"].isNull())
					attributesObject.value = allPhysicalLocationsNodeAttributesAttribute["Value"].asString();
				physicalLocationsObject.attributes.push_back(attributesObject);
			}
			regionObject.physicalLocations.push_back(physicalLocationsObject);
		}
		data_.regionList.push_back(regionObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeRegionsResult::getMessage()const
{
	return message_;
}

DescribeRegionsResult::Data DescribeRegionsResult::getData()const
{
	return data_;
}

int DescribeRegionsResult::getCode()const
{
	return code_;
}

