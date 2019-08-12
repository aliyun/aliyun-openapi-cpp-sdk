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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allZones = value["Zones"]["Zone"];
	for (auto value : allZones)
	{
		Zone zonesObject;
		if(!value["ZoneId"].isNull())
			zonesObject.zoneId = value["ZoneId"].asString();
		if(!value["ZoneName"].isNull())
			zonesObject.zoneName = value["ZoneName"].asString();
		if(!value["Remark"].isNull())
			zonesObject.remark = value["Remark"].asString();
		if(!value["RecordCount"].isNull())
			zonesObject.recordCount = std::stoi(value["RecordCount"].asString());
		if(!value["CreateTime"].isNull())
			zonesObject.createTime = value["CreateTime"].asString();
		if(!value["CreateTimestamp"].isNull())
			zonesObject.createTimestamp = std::stol(value["CreateTimestamp"].asString());
		if(!value["UpdateTime"].isNull())
			zonesObject.updateTime = value["UpdateTime"].asString();
		if(!value["UpdateTimestamp"].isNull())
			zonesObject.updateTimestamp = std::stol(value["UpdateTimestamp"].asString());
		if(!value["IsPtr"].isNull())
			zonesObject.isPtr = value["IsPtr"].asString() == "true";
		auto allVpcs = value["Vpcs"]["Vpc"];
		for (auto value : allVpcs)
		{
			Zone::Vpc vpcsObject;
			if(!value["RegionId"].isNull())
				vpcsObject.regionId = value["RegionId"].asString();
			if(!value["RegionName"].isNull())
				vpcsObject.regionName = value["RegionName"].asString();
			if(!value["VpcId"].isNull())
				vpcsObject.vpcId = value["VpcId"].asString();
			if(!value["VpcName"].isNull())
				vpcsObject.vpcName = value["VpcName"].asString();
			zonesObject.vpcs.push_back(vpcsObject);
		}
		zones_.push_back(zonesObject);
	}

}

std::vector<DescribeZoneVpcTreeResult::Zone> DescribeZoneVpcTreeResult::getZones()const
{
	return zones_;
}

