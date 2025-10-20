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

#include <alibabacloud/eiam/model/ListNetworkZonesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

ListNetworkZonesResult::ListNetworkZonesResult() :
	ServiceResult()
{}

ListNetworkZonesResult::ListNetworkZonesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNetworkZonesResult::~ListNetworkZonesResult()
{}

void ListNetworkZonesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNetworkZonesNode = value["NetworkZones"]["NetworkZone"];
	for (auto valueNetworkZonesNetworkZone : allNetworkZonesNode)
	{
		NetworkZone networkZonesObject;
		if(!valueNetworkZonesNetworkZone["InstanceId"].isNull())
			networkZonesObject.instanceId = valueNetworkZonesNetworkZone["InstanceId"].asString();
		if(!valueNetworkZonesNetworkZone["NetworkZoneId"].isNull())
			networkZonesObject.networkZoneId = valueNetworkZonesNetworkZone["NetworkZoneId"].asString();
		if(!valueNetworkZonesNetworkZone["NetworkZoneName"].isNull())
			networkZonesObject.networkZoneName = valueNetworkZonesNetworkZone["NetworkZoneName"].asString();
		if(!valueNetworkZonesNetworkZone["Description"].isNull())
			networkZonesObject.description = valueNetworkZonesNetworkZone["Description"].asString();
		if(!valueNetworkZonesNetworkZone["NetworkZoneType"].isNull())
			networkZonesObject.networkZoneType = valueNetworkZonesNetworkZone["NetworkZoneType"].asString();
		if(!valueNetworkZonesNetworkZone["VpcId"].isNull())
			networkZonesObject.vpcId = valueNetworkZonesNetworkZone["VpcId"].asString();
		auto allIpv4Cidrs = value["Ipv4Cidrs"]["ipv4Cidrs"];
		for (auto value : allIpv4Cidrs)
			networkZonesObject.ipv4Cidrs.push_back(value.asString());
		auto allIpv6Cidrs = value["Ipv6Cidrs"]["ipv6Cidrs"];
		for (auto value : allIpv6Cidrs)
			networkZonesObject.ipv6Cidrs.push_back(value.asString());
		networkZones_.push_back(networkZonesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["PreviousToken"].isNull())
		previousToken_ = value["PreviousToken"].asString();

}

std::vector<ListNetworkZonesResult::NetworkZone> ListNetworkZonesResult::getNetworkZones()const
{
	return networkZones_;
}

long ListNetworkZonesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListNetworkZonesResult::getPreviousToken()const
{
	return previousToken_;
}

std::string ListNetworkZonesResult::getNextToken()const
{
	return nextToken_;
}

