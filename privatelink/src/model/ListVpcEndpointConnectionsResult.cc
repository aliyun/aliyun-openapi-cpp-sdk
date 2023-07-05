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

#include <alibabacloud/privatelink/model/ListVpcEndpointConnectionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Privatelink;
using namespace AlibabaCloud::Privatelink::Model;

ListVpcEndpointConnectionsResult::ListVpcEndpointConnectionsResult() :
	ServiceResult()
{}

ListVpcEndpointConnectionsResult::ListVpcEndpointConnectionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVpcEndpointConnectionsResult::~ListVpcEndpointConnectionsResult()
{}

void ListVpcEndpointConnectionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConnectionsNode = value["Connections"]["Connection"];
	for (auto valueConnectionsConnection : allConnectionsNode)
	{
		Connection connectionsObject;
		if(!valueConnectionsConnection["ResourceOwner"].isNull())
			connectionsObject.resourceOwner = valueConnectionsConnection["ResourceOwner"].asString() == "true";
		if(!valueConnectionsConnection["ModifiedTime"].isNull())
			connectionsObject.modifiedTime = valueConnectionsConnection["ModifiedTime"].asString();
		if(!valueConnectionsConnection["Bandwidth"].isNull())
			connectionsObject.bandwidth = std::stoi(valueConnectionsConnection["Bandwidth"].asString());
		if(!valueConnectionsConnection["EndpointOwnerId"].isNull())
			connectionsObject.endpointOwnerId = std::stol(valueConnectionsConnection["EndpointOwnerId"].asString());
		if(!valueConnectionsConnection["ServiceId"].isNull())
			connectionsObject.serviceId = valueConnectionsConnection["ServiceId"].asString();
		if(!valueConnectionsConnection["ConnectionStatus"].isNull())
			connectionsObject.connectionStatus = valueConnectionsConnection["ConnectionStatus"].asString();
		if(!valueConnectionsConnection["EndpointId"].isNull())
			connectionsObject.endpointId = valueConnectionsConnection["EndpointId"].asString();
		if(!valueConnectionsConnection["EndpointVpcId"].isNull())
			connectionsObject.endpointVpcId = valueConnectionsConnection["EndpointVpcId"].asString();
		if(!valueConnectionsConnection["ResourceGroupId"].isNull())
			connectionsObject.resourceGroupId = valueConnectionsConnection["ResourceGroupId"].asString();
		auto allZonesNode = valueConnectionsConnection["Zones"]["Zone"];
		for (auto valueConnectionsConnectionZonesZone : allZonesNode)
		{
			Connection::Zone zonesObject;
			if(!valueConnectionsConnectionZonesZone["VSwitchId"].isNull())
				zonesObject.vSwitchId = valueConnectionsConnectionZonesZone["VSwitchId"].asString();
			if(!valueConnectionsConnectionZonesZone["ZoneId"].isNull())
				zonesObject.zoneId = valueConnectionsConnectionZonesZone["ZoneId"].asString();
			if(!valueConnectionsConnectionZonesZone["ResourceId"].isNull())
				zonesObject.resourceId = valueConnectionsConnectionZonesZone["ResourceId"].asString();
			if(!valueConnectionsConnectionZonesZone["EniId"].isNull())
				zonesObject.eniId = valueConnectionsConnectionZonesZone["EniId"].asString();
			if(!valueConnectionsConnectionZonesZone["ZoneDomain"].isNull())
				zonesObject.zoneDomain = valueConnectionsConnectionZonesZone["ZoneDomain"].asString();
			if(!valueConnectionsConnectionZonesZone["ZoneStatus"].isNull())
				zonesObject.zoneStatus = valueConnectionsConnectionZonesZone["ZoneStatus"].asString();
			if(!valueConnectionsConnectionZonesZone["ReplacedResourceId"].isNull())
				zonesObject.replacedResourceId = valueConnectionsConnectionZonesZone["ReplacedResourceId"].asString();
			if(!valueConnectionsConnectionZonesZone["ReplacedEniId"].isNull())
				zonesObject.replacedEniId = valueConnectionsConnectionZonesZone["ReplacedEniId"].asString();
			if(!valueConnectionsConnectionZonesZone["StatusInfo"].isNull())
				zonesObject.statusInfo = valueConnectionsConnectionZonesZone["StatusInfo"].asString();
			if(!valueConnectionsConnectionZonesZone["ConnectionId"].isNull())
				zonesObject.connectionId = std::stol(valueConnectionsConnectionZonesZone["ConnectionId"].asString());
			if(!valueConnectionsConnectionZonesZone["ConnectionStringId"].isNull())
				zonesObject.connectionStringId = valueConnectionsConnectionZonesZone["ConnectionStringId"].asString();
			connectionsObject.zones.push_back(zonesObject);
		}
		connections_.push_back(connectionsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::vector<ListVpcEndpointConnectionsResult::Connection> ListVpcEndpointConnectionsResult::getConnections()const
{
	return connections_;
}

std::string ListVpcEndpointConnectionsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListVpcEndpointConnectionsResult::getNextToken()const
{
	return nextToken_;
}

int ListVpcEndpointConnectionsResult::getMaxResults()const
{
	return maxResults_;
}

