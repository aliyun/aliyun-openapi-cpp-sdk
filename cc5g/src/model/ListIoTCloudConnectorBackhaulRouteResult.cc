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

#include <alibabacloud/cc5g/model/ListIoTCloudConnectorBackhaulRouteResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CC5G;
using namespace AlibabaCloud::CC5G::Model;

ListIoTCloudConnectorBackhaulRouteResult::ListIoTCloudConnectorBackhaulRouteResult() :
	ServiceResult()
{}

ListIoTCloudConnectorBackhaulRouteResult::ListIoTCloudConnectorBackhaulRouteResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListIoTCloudConnectorBackhaulRouteResult::~ListIoTCloudConnectorBackhaulRouteResult()
{}

void ListIoTCloudConnectorBackhaulRouteResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRoutesNode = value["Routes"]["RouteEntry"];
	for (auto valueRoutesRouteEntry : allRoutesNode)
	{
		RouteEntry routesObject;
		if(!valueRoutesRouteEntry["DestinationCidrBlock"].isNull())
			routesObject.destinationCidrBlock = valueRoutesRouteEntry["DestinationCidrBlock"].asString();
		if(!valueRoutesRouteEntry["NextHopId"].isNull())
			routesObject.nextHopId = valueRoutesRouteEntry["NextHopId"].asString();
		if(!valueRoutesRouteEntry["NextHopType"].isNull())
			routesObject.nextHopType = valueRoutesRouteEntry["NextHopType"].asString();
		if(!valueRoutesRouteEntry["Description"].isNull())
			routesObject.description = valueRoutesRouteEntry["Description"].asString();
		if(!valueRoutesRouteEntry["Status"].isNull())
			routesObject.status = valueRoutesRouteEntry["Status"].asString();
		routes_.push_back(routesObject);
	}
	if(!value["NetLinkId"].isNull())
		netLinkId_ = value["NetLinkId"].asString();

}

std::vector<ListIoTCloudConnectorBackhaulRouteResult::RouteEntry> ListIoTCloudConnectorBackhaulRouteResult::getRoutes()const
{
	return routes_;
}

std::string ListIoTCloudConnectorBackhaulRouteResult::getNetLinkId()const
{
	return netLinkId_;
}

