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

#include <alibabacloud/vpc/model/ListEnhanhcedNatGatewayAvailableZonesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ListEnhanhcedNatGatewayAvailableZonesResult::ListEnhanhcedNatGatewayAvailableZonesResult() :
	ServiceResult()
{}

ListEnhanhcedNatGatewayAvailableZonesResult::ListEnhanhcedNatGatewayAvailableZonesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEnhanhcedNatGatewayAvailableZonesResult::~ListEnhanhcedNatGatewayAvailableZonesResult()
{}

void ListEnhanhcedNatGatewayAvailableZonesResult::parse(const std::string &payload)
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
		if(!valueZonesZone["LocalName"].isNull())
			zonesObject.localName = valueZonesZone["LocalName"].asString();
		zones_.push_back(zonesObject);
	}

}

std::vector<ListEnhanhcedNatGatewayAvailableZonesResult::Zone> ListEnhanhcedNatGatewayAvailableZonesResult::getZones()const
{
	return zones_;
}

