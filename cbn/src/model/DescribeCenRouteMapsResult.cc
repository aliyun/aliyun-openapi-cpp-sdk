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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allRouteMaps = value["RouteMaps"]["RouteMap"];
	for (auto value : allRouteMaps)
	{
		RouteMap routeMapsObject;
		if(!value["Status"].isNull())
			routeMapsObject.status = value["Status"].asString();
		if(!value["RouteMapId"].isNull())
			routeMapsObject.routeMapId = value["RouteMapId"].asString();
		if(!value["CenId"].isNull())
			routeMapsObject.cenId = value["CenId"].asString();
		if(!value["CenRegionId"].isNull())
			routeMapsObject.cenRegionId = value["CenRegionId"].asString();
		if(!value["Description"].isNull())
			routeMapsObject.description = value["Description"].asString();
		if(!value["MapResult"].isNull())
			routeMapsObject.mapResult = value["MapResult"].asString();
		if(!value["Priority"].isNull())
			routeMapsObject.priority = std::stoi(value["Priority"].asString());
		if(!value["NextPriority"].isNull())
			routeMapsObject.nextPriority = std::stoi(value["NextPriority"].asString());
		if(!value["CidrMatchMode"].isNull())
			routeMapsObject.cidrMatchMode = value["CidrMatchMode"].asString();
		if(!value["AsPathMatchMode"].isNull())
			routeMapsObject.asPathMatchMode = value["AsPathMatchMode"].asString();
		if(!value["AsPathLength"].isNull())
			routeMapsObject.asPathLength = std::stoi(value["AsPathLength"].asString());
		if(!value["CommunityMatchMode"].isNull())
			routeMapsObject.communityMatchMode = value["CommunityMatchMode"].asString();
		if(!value["CommunityOperateMode"].isNull())
			routeMapsObject.communityOperateMode = value["CommunityOperateMode"].asString();
		if(!value["Preference"].isNull())
			routeMapsObject.preference = std::stoi(value["Preference"].asString());
		if(!value["TransmitDirection"].isNull())
			routeMapsObject.transmitDirection = value["TransmitDirection"].asString();
		if(!value["SourceInstanceIdsReverseMatch"].isNull())
			routeMapsObject.sourceInstanceIdsReverseMatch = value["SourceInstanceIdsReverseMatch"].asString() == "true";
		if(!value["DestinationInstanceIdsReverseMatch"].isNull())
			routeMapsObject.destinationInstanceIdsReverseMatch = value["DestinationInstanceIdsReverseMatch"].asString() == "true";
		auto allSourceInstanceIds = value["SourceInstanceIds"]["SourceInstanceId"];
		for (auto value : allSourceInstanceIds)
			routeMapsObject.sourceInstanceIds.push_back(value.asString());
		auto allDestinationInstanceIds = value["DestinationInstanceIds"]["DestinationInstanceId"];
		for (auto value : allDestinationInstanceIds)
			routeMapsObject.destinationInstanceIds.push_back(value.asString());
		auto allSourceRouteTableIds = value["SourceRouteTableIds"]["SourceRouteTableId"];
		for (auto value : allSourceRouteTableIds)
			routeMapsObject.sourceRouteTableIds.push_back(value.asString());
		auto allDestinationRouteTableIds = value["DestinationRouteTableIds"]["DestinationRouteTableId"];
		for (auto value : allDestinationRouteTableIds)
			routeMapsObject.destinationRouteTableIds.push_back(value.asString());
		auto allSourceRegionIds = value["SourceRegionIds"]["SourceRegionId"];
		for (auto value : allSourceRegionIds)
			routeMapsObject.sourceRegionIds.push_back(value.asString());
		auto allSourceChildInstanceTypes = value["SourceChildInstanceTypes"]["SourceChildInstanceType"];
		for (auto value : allSourceChildInstanceTypes)
			routeMapsObject.sourceChildInstanceTypes.push_back(value.asString());
		auto allDestinationChildInstanceTypes = value["DestinationChildInstanceTypes"]["DestinationChildInstanceType"];
		for (auto value : allDestinationChildInstanceTypes)
			routeMapsObject.destinationChildInstanceTypes.push_back(value.asString());
		auto allDestinationCidrBlocks = value["DestinationCidrBlocks"]["DestinationCidrBlock"];
		for (auto value : allDestinationCidrBlocks)
			routeMapsObject.destinationCidrBlocks.push_back(value.asString());
		auto allRouteTypes = value["RouteTypes"]["RouteType"];
		for (auto value : allRouteTypes)
			routeMapsObject.routeTypes.push_back(value.asString());
		auto allMatchAsns = value["MatchAsns"]["MatchAsn"];
		for (auto value : allMatchAsns)
			routeMapsObject.matchAsns.push_back(value.asString());
		auto allMatchCommunitySet = value["MatchCommunitySet"]["MatchCommunity"];
		for (auto value : allMatchCommunitySet)
			routeMapsObject.matchCommunitySet.push_back(value.asString());
		auto allOperateCommunitySet = value["OperateCommunitySet"]["OperateCommunity"];
		for (auto value : allOperateCommunitySet)
			routeMapsObject.operateCommunitySet.push_back(value.asString());
		routeMaps_.push_back(routeMapsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

