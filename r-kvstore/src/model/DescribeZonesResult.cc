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

#include <alibabacloud/r-kvstore/model/DescribeZonesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allZones = value["Zones"]["KVStoreZone"];
	for (auto value : allZones)
	{
		KVStoreZone zonesObject;
		if(!value["RegionId"].isNull())
			zonesObject.regionId = value["RegionId"].asString();
		if(!value["ZoneId"].isNull())
			zonesObject.zoneId = value["ZoneId"].asString();
		if(!value["ZoneName"].isNull())
			zonesObject.zoneName = value["ZoneName"].asString();
		if(!value["SwitchNetwork"].isNull())
			zonesObject.switchNetwork = value["SwitchNetwork"].asString() == "true";
		if(!value["IsRds"].isNull())
			zonesObject.isRds = value["IsRds"].asString() == "true";
		if(!value["Disabled"].isNull())
			zonesObject.disabled = value["Disabled"].asString() == "true";
		zones_.push_back(zonesObject);
	}

}

std::vector<DescribeZonesResult::KVStoreZone> DescribeZonesResult::getZones()const
{
	return zones_;
}

