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

#include <alibabacloud/oceanbasepro/model/DescribeInstanceAvailableZonesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeInstanceAvailableZonesResult::DescribeInstanceAvailableZonesResult() :
	ServiceResult()
{}

DescribeInstanceAvailableZonesResult::DescribeInstanceAvailableZonesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceAvailableZonesResult::~DescribeInstanceAvailableZonesResult()
{}

void DescribeInstanceAvailableZonesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allZoneListNode = value["ZoneList"]["ZoneListItem"];
	for (auto valueZoneListZoneListItem : allZoneListNode)
	{
		ZoneListItem zoneListObject;
		if(!valueZoneListZoneListItem["Zone"].isNull())
			zoneListObject.zone = valueZoneListZoneListItem["Zone"].asString();
		if(!valueZoneListZoneListItem["IsInCluster"].isNull())
			zoneListObject.isInCluster = valueZoneListZoneListItem["IsInCluster"].asString() == "true";
		if(!valueZoneListZoneListItem["ReplicateZoneIndex"].isNull())
			zoneListObject.replicateZoneIndex = valueZoneListZoneListItem["ReplicateZoneIndex"].asString();
		if(!valueZoneListZoneListItem["LogicalZoneName"].isNull())
			zoneListObject.logicalZoneName = valueZoneListZoneListItem["LogicalZoneName"].asString();
		zoneList_.push_back(zoneListObject);
	}

}

std::vector<DescribeInstanceAvailableZonesResult::ZoneListItem> DescribeInstanceAvailableZonesResult::getZoneList()const
{
	return zoneList_;
}

