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

#include <alibabacloud/smartag/model/DescribeSagRouteListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeSagRouteListResult::DescribeSagRouteListResult() :
	ServiceResult()
{}

DescribeSagRouteListResult::DescribeSagRouteListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSagRouteListResult::~DescribeSagRouteListResult()
{}

void DescribeSagRouteListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRoutesNode = value["Routes"]["Route"];
	for (auto valueRoutesRoute : allRoutesNode)
	{
		Route routesObject;
		if(!valueRoutesRoute["NextHop"].isNull())
			routesObject.nextHop = valueRoutesRoute["NextHop"].asString();
		if(!valueRoutesRoute["DestinationCidr"].isNull())
			routesObject.destinationCidr = valueRoutesRoute["DestinationCidr"].asString();
		if(!valueRoutesRoute["Cost"].isNull())
			routesObject.cost = valueRoutesRoute["Cost"].asString();
		if(!valueRoutesRoute["PortName"].isNull())
			routesObject.portName = valueRoutesRoute["PortName"].asString();
		if(!valueRoutesRoute["RouteProtocol"].isNull())
			routesObject.routeProtocol = valueRoutesRoute["RouteProtocol"].asString();
		auto allConflictCidrs = value["ConflictCidrs"]["ConfilitCidr"];
		for (auto value : allConflictCidrs)
			routesObject.conflictCidrs.push_back(value.asString());
		routes_.push_back(routesObject);
	}

}

std::vector<DescribeSagRouteListResult::Route> DescribeSagRouteListResult::getRoutes()const
{
	return routes_;
}

