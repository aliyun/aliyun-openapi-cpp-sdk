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

#include <alibabacloud/nas/model/DescribeZonesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

DescribeZonesResult::DescribeZonesResult() :
	ServiceResult()
{}

DescribeZonesResult::DescribeZonesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeZonesResult::~DescribeZonesResult()
{}

void DescribeZonesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allZonesNode = value["Zones"]["Zone"];
	for (auto valueZonesZone : allZonesNode)
	{
		Zone zonesObject;
		if(!valueZonesZone["ZoneId"].isNull())
			zonesObject.zoneId = valueZonesZone["ZoneId"].asString();
		auto allInstanceTypesNode = valueZonesZone["InstanceTypes"]["InstanceType"];
		for (auto valueZonesZoneInstanceTypesInstanceType : allInstanceTypesNode)
		{
			Zone::InstanceType instanceTypesObject;
			if(!valueZonesZoneInstanceTypesInstanceType["StorageType"].isNull())
				instanceTypesObject.storageType = valueZonesZoneInstanceTypesInstanceType["StorageType"].asString();
			if(!valueZonesZoneInstanceTypesInstanceType["ProtocolType"].isNull())
				instanceTypesObject.protocolType = valueZonesZoneInstanceTypesInstanceType["ProtocolType"].asString();
			zonesObject.instanceTypes.push_back(instanceTypesObject);
		}
		auto allPerformance = value["Performance"]["Protocol"];
		for (auto value : allPerformance)
			zonesObject.performance.push_back(value.asString());
		auto allCapacity = value["Capacity"]["Protocol"];
		for (auto value : allCapacity)
			zonesObject.capacity.push_back(value.asString());
		zones_.push_back(zonesObject);
	}

}

std::vector<DescribeZonesResult::Zone> DescribeZonesResult::getZones()const
{
	return zones_;
}

