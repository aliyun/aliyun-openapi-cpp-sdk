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

#include <alibabacloud/cbn/model/DescribeCenRouteMapsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

DescribeCenRouteMapsResult::DescribeCenRouteMapsResult() :
	ServiceResult()
{}

DescribeCenRouteMapsResult::DescribeCenRouteMapsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCenRouteMapsResult::~DescribeCenRouteMapsResult()
{}

void DescribeCenRouteMapsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRouteMapsNode = value["RouteMaps"]["RouteMap"];
	for (auto valueRouteMapsRouteMap : allRouteMapsNode)
	{
		RouteMap routeMapsObject;
		if(!valueRouteMapsRouteMap["RouteMapId"].isNull())
			routeMapsObject.routeMapId = valueRouteMapsRouteMap["RouteMapId"].asString();
		if(!valueRouteMapsRouteMap["Status"].isNull())
			routeMapsObject.status = valueRouteMapsRouteMap["Status"].asString();
		if(!valueRouteMapsRouteMap["TransmitDirection"].isNull())
			routeMapsObject.transmitDirection = valueRouteMapsRouteMap["TransmitDirection"].asString();
		if(!valueRouteMapsRouteMap["SourceInstanceIdsReverseMatch"].isNull())
			routeMapsObject.sourceInstanceIdsReverseMatch = valueRouteMapsRouteMap["SourceInstanceIdsReverseMatch"].asString() == "true";
		if(!valueRouteMapsRouteMap["CenRegionId"].isNull())
			routeMapsObject.cenRegionId = valueRouteMapsRouteMap["CenRegionId"].asString();
		if(!valueRouteMapsRouteMap["CenId"].isNull())
			routeMapsObject.cenId = valueRouteMapsRouteMap["CenId"].asString();
		if(!valueRouteMapsRouteMap["Priority"].isNull())
			routeMapsObject.priority = std::stoi(valueRouteMapsRouteMap["Priority"].asString());
		if(!valueRouteMapsRouteMap["TransitRouterRouteTableId"].isNull())
			routeMapsObject.transitRouterRouteTableId = valueRouteMapsRouteMap["TransitRouterRouteTableId"].asString();
		if(!valueRouteMapsRouteMap["CommunityOperateMode"].isNull())
			routeMapsObject.communityOperateMode = valueRouteMapsRouteMap["CommunityOperateMode"].asString();
		if(!valueRouteMapsRouteMap["MapResult"].isNull())
			routeMapsObject.mapResult = valueRouteMapsRouteMap["MapResult"].asString();
		if(!valueRouteMapsRouteMap["CommunityMatchMode"].isNull())
			routeMapsObject.communityMatchMode = valueRouteMapsRouteMap["CommunityMatchMode"].asString();
		if(!valueRouteMapsRouteMap["Description"].isNull())
			routeMapsObject.description = valueRouteMapsRouteMap["Description"].asString();
		if(!valueRouteMapsRouteMap["AsPathMatchMode"].isNull())
			routeMapsObject.asPathMatchMode = valueRouteMapsRouteMap["AsPathMatchMode"].asString();
		if(!valueRouteMapsRouteMap["Preference"].isNull())
			routeMapsObject.preference = std::stoi(valueRouteMapsRouteMap["Preference"].asString());
		if(!valueRouteMapsRouteMap["DestinationInstanceIdsReverseMatch"].isNull())
			routeMapsObject.destinationInstanceIdsReverseMatch = valueRouteMapsRouteMap["DestinationInstanceIdsReverseMatch"].asString() == "true";
		if(!valueRouteMapsRouteMap["CidrMatchMode"].isNull())
			routeMapsObject.cidrMatchMode = valueRouteMapsRouteMap["CidrMatchMode"].asString();
		if(!valueRouteMapsRouteMap["NextPriority"].isNull())
			routeMapsObject.nextPriority = std::stoi(valueRouteMapsRouteMap["NextPriority"].asString());
		if(!valueRouteMapsRouteMap["MatchAddressType"].isNull())
			routeMapsObject.matchAddressType = valueRouteMapsRouteMap["MatchAddressType"].asString();
		if(!valueRouteMapsRouteMap["GatewayZoneId"].isNull())
			routeMapsObject.gatewayZoneId = valueRouteMapsRouteMap["GatewayZoneId"].asString();
		if(!valueRouteMapsRouteMap["GatewayRegionId"].isNull())
			routeMapsObject.gatewayRegionId = valueRouteMapsRouteMap["GatewayRegionId"].asString();
		auto allSourceRegionIds = value["SourceRegionIds"]["SourceRegionId"];
		for (auto value : allSourceRegionIds)
			routeMapsObject.sourceRegionIds.push_back(value.asString());
		auto allSourceChildInstanceTypes = value["SourceChildInstanceTypes"]["SourceChildInstanceType"];
		for (auto value : allSourceChildInstanceTypes)
			routeMapsObject.sourceChildInstanceTypes.push_back(value.asString());
		auto allDestinationRouteTableIds = value["DestinationRouteTableIds"]["DestinationRouteTableId"];
		for (auto value : allDestinationRouteTableIds)
			routeMapsObject.destinationRouteTableIds.push_back(value.asString());
		auto allSourceInstanceIds = value["SourceInstanceIds"]["SourceInstanceId"];
		for (auto value : allSourceInstanceIds)
			routeMapsObject.sourceInstanceIds.push_back(value.asString());
		auto allDestinationCidrBlocks = value["DestinationCidrBlocks"]["DestinationCidrBlock"];
		for (auto value : allDestinationCidrBlocks)
			routeMapsObject.destinationCidrBlocks.push_back(value.asString());
		auto allDestinationRegionIds = value["DestinationRegionIds"]["DestinationRegionId"];
		for (auto value : allDestinationRegionIds)
			routeMapsObject.destinationRegionIds.push_back(value.asString());
		auto allSourceRouteTableIds = value["SourceRouteTableIds"]["SourceRouteTableId"];
		for (auto value : allSourceRouteTableIds)
			routeMapsObject.sourceRouteTableIds.push_back(value.asString());
		auto allMatchCommunitySet = value["MatchCommunitySet"]["MatchCommunity"];
		for (auto value : allMatchCommunitySet)
			routeMapsObject.matchCommunitySet.push_back(value.asString());
		auto allPrependAsPath = value["PrependAsPath"]["AsPath"];
		for (auto value : allPrependAsPath)
			routeMapsObject.prependAsPath.push_back(value.asString());
		auto allRouteTypes = value["RouteTypes"]["RouteType"];
		for (auto value : allRouteTypes)
			routeMapsObject.routeTypes.push_back(value.asString());
		auto allOriginalRouteTableIds = value["OriginalRouteTableIds"]["OriginalRouteTableId"];
		for (auto value : allOriginalRouteTableIds)
			routeMapsObject.originalRouteTableIds.push_back(value.asString());
		auto allDestinationChildInstanceTypes = value["DestinationChildInstanceTypes"]["DestinationChildInstanceType"];
		for (auto value : allDestinationChildInstanceTypes)
			routeMapsObject.destinationChildInstanceTypes.push_back(value.asString());
		auto allDestinationInstanceIds = value["DestinationInstanceIds"]["DestinationInstanceId"];
		for (auto value : allDestinationInstanceIds)
			routeMapsObject.destinationInstanceIds.push_back(value.asString());
		auto allMatchAsns = value["MatchAsns"]["MatchAsn"];
		for (auto value : allMatchAsns)
			routeMapsObject.matchAsns.push_back(value.asString());
		auto allOperateCommunitySet = value["OperateCommunitySet"]["OperateCommunity"];
		for (auto value : allOperateCommunitySet)
			routeMapsObject.operateCommunitySet.push_back(value.asString());
		auto allSrcZoneIds = value["SrcZoneIds"]["SrcZoneId"];
		for (auto value : allSrcZoneIds)
			routeMapsObject.srcZoneIds.push_back(value.asString());
		routeMaps_.push_back(routeMapsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeCenRouteMapsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeCenRouteMapsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCenRouteMapsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeCenRouteMapsResult::RouteMap> DescribeCenRouteMapsResult::getRouteMaps()const
{
	return routeMaps_;
}

