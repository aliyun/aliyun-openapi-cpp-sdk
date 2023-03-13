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

#include <alibabacloud/cbn/model/ListCenChildInstanceRouteEntriesToAttachmentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

ListCenChildInstanceRouteEntriesToAttachmentResult::ListCenChildInstanceRouteEntriesToAttachmentResult() :
	ServiceResult()
{}

ListCenChildInstanceRouteEntriesToAttachmentResult::ListCenChildInstanceRouteEntriesToAttachmentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCenChildInstanceRouteEntriesToAttachmentResult::~ListCenChildInstanceRouteEntriesToAttachmentResult()
{}

void ListCenChildInstanceRouteEntriesToAttachmentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRouteEntryNode = value["RouteEntry"]["TransitRouterAssociation"];
	for (auto valueRouteEntryTransitRouterAssociation : allRouteEntryNode)
	{
		TransitRouterAssociation routeEntryObject;
		if(!valueRouteEntryTransitRouterAssociation["CenId"].isNull())
			routeEntryObject.cenId = valueRouteEntryTransitRouterAssociation["CenId"].asString();
		if(!valueRouteEntryTransitRouterAssociation["TransitRouterAttachmentId"].isNull())
			routeEntryObject.transitRouterAttachmentId = valueRouteEntryTransitRouterAssociation["TransitRouterAttachmentId"].asString();
		if(!valueRouteEntryTransitRouterAssociation["Status"].isNull())
			routeEntryObject.status = valueRouteEntryTransitRouterAssociation["Status"].asString();
		if(!valueRouteEntryTransitRouterAssociation["ServiceType"].isNull())
			routeEntryObject.serviceType = valueRouteEntryTransitRouterAssociation["ServiceType"].asString();
		if(!valueRouteEntryTransitRouterAssociation["DestinationCidrBlock"].isNull())
			routeEntryObject.destinationCidrBlock = valueRouteEntryTransitRouterAssociation["DestinationCidrBlock"].asString();
		if(!valueRouteEntryTransitRouterAssociation["ChildInstanceRouteTableId"].isNull())
			routeEntryObject.childInstanceRouteTableId = valueRouteEntryTransitRouterAssociation["ChildInstanceRouteTableId"].asString();
		routeEntry_.push_back(routeEntryObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::vector<ListCenChildInstanceRouteEntriesToAttachmentResult::TransitRouterAssociation> ListCenChildInstanceRouteEntriesToAttachmentResult::getRouteEntry()const
{
	return routeEntry_;
}

std::string ListCenChildInstanceRouteEntriesToAttachmentResult::getNextToken()const
{
	return nextToken_;
}

