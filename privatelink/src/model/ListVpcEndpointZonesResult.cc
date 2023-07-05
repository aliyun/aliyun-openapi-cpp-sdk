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

#include <alibabacloud/privatelink/model/ListVpcEndpointZonesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Privatelink;
using namespace AlibabaCloud::Privatelink::Model;

ListVpcEndpointZonesResult::ListVpcEndpointZonesResult() :
	ServiceResult()
{}

ListVpcEndpointZonesResult::ListVpcEndpointZonesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVpcEndpointZonesResult::~ListVpcEndpointZonesResult()
{}

void ListVpcEndpointZonesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allZonesNode = value["Zones"]["Zone"];
	for (auto valueZonesZone : allZonesNode)
	{
		Zone zonesObject;
		if(!valueZonesZone["VSwitchId"].isNull())
			zonesObject.vSwitchId = valueZonesZone["VSwitchId"].asString();
		if(!valueZonesZone["EniIp"].isNull())
			zonesObject.eniIp = valueZonesZone["EniIp"].asString();
		if(!valueZonesZone["ZoneStatus"].isNull())
			zonesObject.zoneStatus = valueZonesZone["ZoneStatus"].asString();
		if(!valueZonesZone["ZoneId"].isNull())
			zonesObject.zoneId = valueZonesZone["ZoneId"].asString();
		if(!valueZonesZone["ServiceStatus"].isNull())
			zonesObject.serviceStatus = valueZonesZone["ServiceStatus"].asString();
		if(!valueZonesZone["EniId"].isNull())
			zonesObject.eniId = valueZonesZone["EniId"].asString();
		if(!valueZonesZone["ZoneDomain"].isNull())
			zonesObject.zoneDomain = valueZonesZone["ZoneDomain"].asString();
		if(!valueZonesZone["RegionId"].isNull())
			zonesObject.regionId = valueZonesZone["RegionId"].asString();
		if(!valueZonesZone["NsiIndex"].isNull())
			zonesObject.nsiIndex = std::stol(valueZonesZone["NsiIndex"].asString());
		if(!valueZonesZone["NsiIndexString"].isNull())
			zonesObject.nsiIndexString = valueZonesZone["NsiIndexString"].asString();
		if(!valueZonesZone["ZoneIpv6Address"].isNull())
			zonesObject.zoneIpv6Address = valueZonesZone["ZoneIpv6Address"].asString();
		zones_.push_back(zonesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::string ListVpcEndpointZonesResult::getNextToken()const
{
	return nextToken_;
}

int ListVpcEndpointZonesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListVpcEndpointZonesResult::Zone> ListVpcEndpointZonesResult::getZones()const
{
	return zones_;
}

