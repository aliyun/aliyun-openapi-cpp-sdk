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

#include <alibabacloud/pvtz/model/DescribeZoneVpcTreeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Pvtz;
using namespace AlibabaCloud::Pvtz::Model;

DescribeZoneVpcTreeResult::DescribeZoneVpcTreeResult() :
	ServiceResult()
{}

DescribeZoneVpcTreeResult::DescribeZoneVpcTreeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeZoneVpcTreeResult::~DescribeZoneVpcTreeResult()
{}

void DescribeZoneVpcTreeResult::parse(const std::string &payload)
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
		if(!valueZonesZone["ZoneName"].isNull())
			zonesObject.zoneName = valueZonesZone["ZoneName"].asString();
		if(!valueZonesZone["Remark"].isNull())
			zonesObject.remark = valueZonesZone["Remark"].asString();
		if(!valueZonesZone["RecordCount"].isNull())
			zonesObject.recordCount = std::stoi(valueZonesZone["RecordCount"].asString());
		if(!valueZonesZone["CreateTime"].isNull())
			zonesObject.createTime = valueZonesZone["CreateTime"].asString();
		if(!valueZonesZone["CreateTimestamp"].isNull())
			zonesObject.createTimestamp = std::stol(valueZonesZone["CreateTimestamp"].asString());
		if(!valueZonesZone["UpdateTime"].isNull())
			zonesObject.updateTime = valueZonesZone["UpdateTime"].asString();
		if(!valueZonesZone["UpdateTimestamp"].isNull())
			zonesObject.updateTimestamp = std::stol(valueZonesZone["UpdateTimestamp"].asString());
		if(!valueZonesZone["IsPtr"].isNull())
			zonesObject.isPtr = valueZonesZone["IsPtr"].asString() == "true";
		auto allVpcsNode = valueZonesZone["Vpcs"]["Vpc"];
		for (auto valueZonesZoneVpcsVpc : allVpcsNode)
		{
			Zone::Vpc vpcsObject;
			if(!valueZonesZoneVpcsVpc["RegionId"].isNull())
				vpcsObject.regionId = valueZonesZoneVpcsVpc["RegionId"].asString();
			if(!valueZonesZoneVpcsVpc["RegionName"].isNull())
				vpcsObject.regionName = valueZonesZoneVpcsVpc["RegionName"].asString();
			if(!valueZonesZoneVpcsVpc["VpcId"].isNull())
				vpcsObject.vpcId = valueZonesZoneVpcsVpc["VpcId"].asString();
			if(!valueZonesZoneVpcsVpc["VpcName"].isNull())
				vpcsObject.vpcName = valueZonesZoneVpcsVpc["VpcName"].asString();
			zonesObject.vpcs.push_back(vpcsObject);
		}
		zones_.push_back(zonesObject);
	}

}

std::vector<DescribeZoneVpcTreeResult::Zone> DescribeZoneVpcTreeResult::getZones()const
{
	return zones_;
}

